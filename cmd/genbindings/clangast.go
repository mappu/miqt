package main

import (
	"encoding/json"
	"fmt"
	"strconv"
	"strings"
)

func isSourceLoc(field string) bool {
	// "file" (and "line" which we don't care about) takes on the last observed
	// value for certain node kinds - to simplify processing, we expand it in the
	// parsed AST.
	// https://github.com/dtolnay/clang-ast?tab=readme-ov-file#source-locations
	// https://github.com/llvm/llvm-project/blob/26d9cb17a6e655993c991b66b21d5c378256d79b/clang/lib/AST/JSONNodeDumper.cpp#L285
	switch field {
	case "loc", "spellingLoc", "expansionLoc", "begin", "end", "attrLoc":
		return true
	}

	return false
}

// HexUint64 is a uint64 that marshals to/from JSON as a hex string.
type HexUint64 uint64

func (h HexUint64) MarshalJSON() ([]byte, error) {
	return []byte(fmt.Sprintf("\"0x%x\"", uint64(h))), nil
}

func (h *HexUint64) UnmarshalJSON(data []byte) error {
	var s string
	if err := json.Unmarshal(data, &s); err != nil {
		return err
	}
	val, err := strconv.ParseUint(strings.TrimPrefix(s, "0x"), 16, 64)
	if err != nil {
		return err
	}
	*h = HexUint64(val)
	return nil
}

func (h HexUint64) String() string {
	return fmt.Sprintf("0x%x", uint64(h))
}

type AstNode struct {
	Id    HexUint64  `json:"id"`
	Kind  string     `json:"kind"`
	Inner []*AstNode `json:"inner,omitempty"`
	// Additional information depending on the node kind - in the original clang
	// AST, there is no nesting in an additional `fields` object but we do so
	// here to simplify the caching code which otherwise would require more of the
	// kind of custom marshalling that we're trying to avoid
	Fields map[string]interface{} `json:"fields,omitempty"`
}

// User-provided function that returns true if the inner array should be parsed for a given kind.
// Return `false` to skip parsing the inner array and save some CPU cycles / memory.
type ShouldParseInner func(ctx *ParseCtx, kind string) bool

// User-provided function that returns true if the field should be added to `Fields“.
type ShouldKeepField func(ctx *ParseCtx, kind, field string, value interface{}) bool

// User-provided function for discarding inner nodes that turn out to be superfluous
// and therefore should not be added to `Inner`.
type ShouldKeepInner func(ctx *ParseCtx, parentKind string, child *AstNode) bool

type ParseCtx struct {
	dec              *json.Decoder
	stack            []*AstNode
	file             string // Last observed file value ("line" works the same but we don't need it)
	ShouldParseInner ShouldParseInner
	ShouldKeepField  ShouldKeepField
	ShouldKeepInner  ShouldKeepInner
}

// unmarshalWithFile decodes the next value from ctx.dec similar to Decode.
// It updates ctx.file if a "file" key is encountered in a source location.
func unmarshalWithFile(ctx *ParseCtx, sourceLoc bool) (interface{}, error) {
	tok, err := ctx.dec.Token()
	if err != nil {
		return nil, err
	}
	switch v := tok.(type) {
	case json.Delim:
		switch v {
		case '{':
			// Parse object
			m := make(map[string]interface{})
			hasFileField := false
			subLoc := false
			for ctx.dec.More() {
				keyTok, err := ctx.dec.Token()
				if err != nil {
					return nil, err
				}
				key, ok := keyTok.(string)
				if !ok {
					return nil, fmt.Errorf("expected string key in object, got %v", keyTok)
				}
				val, err := unmarshalWithFile(ctx, isSourceLoc(key))
				if err != nil {
					return nil, err
				}
				m[key] = val

				if sourceLoc {
					if key == "file" {
						ctx.file = val.(string)
						hasFileField = true

					} else if key == "spellingLoc" {
						subLoc = true
					}
				}
			}
			// Consume closing '}'
			endTok, err := ctx.dec.Token()
			if err != nil {
				return nil, err
			}
			if endDelim, ok := endTok.(json.Delim); !ok || endDelim != '}' {
				return nil, fmt.Errorf("expected '}', got %v", endTok)
			}
			if sourceLoc && !hasFileField && !subLoc {
				// If the file is not present, use the last observed value
				m["file"] = ctx.file
			}

			return m, nil
		case '[':
			// Parse array
			var arr []interface{}
			for ctx.dec.More() {
				val, err := unmarshalWithFile(ctx, false)
				if err != nil {
					return nil, err
				}
				arr = append(arr, val)
			}
			// Consume closing ']'
			endTok, err := ctx.dec.Token()
			if err != nil {
				return nil, err
			}
			if endDelim, ok := endTok.(json.Delim); !ok || endDelim != ']' {
				return nil, fmt.Errorf("expected ']', got %v", endTok)
			}
			return arr, nil
		default:
			return nil, fmt.Errorf("unexpected delimiter %v", v)
		}
	case string, float64, bool, nil:
		return v, nil
	default:
		return nil, fmt.Errorf("unexpected token type %T", v)
	}
}

// skipWithFile skips the next value from ctx.dec while updating ctx.file.
func skipWithFile(ctx *ParseCtx, sourceLoc bool) error {
	tok, err := ctx.dec.Token()
	if err != nil {
		return err
	}
	switch v := tok.(type) {
	case json.Delim:
		switch v {
		case '{':
			// Parse object
			for ctx.dec.More() {
				keyTok, err := ctx.dec.Token()
				if err != nil {
					return err
				}
				key, ok := keyTok.(string)
				if !ok {
					return fmt.Errorf("expected string key in object, got %v", keyTok)
				}

				if sourceLoc && key == "file" {
					val, err := ctx.dec.Token()
					if err != nil {
						return err
					}
					if _, ok := val.(string); !ok {
						return fmt.Errorf("expected string value for file, got %v", val)
					}
					ctx.file = val.(string)
				} else {
					err = skipWithFile(ctx, isSourceLoc(key))
					if err != nil {
						return err
					}
				}
			}
			// Consume closing '}'
			endTok, err := ctx.dec.Token()
			if err != nil {
				return err
			}
			if endDelim, ok := endTok.(json.Delim); !ok || endDelim != '}' {
				return fmt.Errorf("expected '}', got %v", endTok)
			}

			return nil
		case '[':
			// Parse array
			for ctx.dec.More() {
				err := skipWithFile(ctx, false)
				if err != nil {
					return err
				}
			}
			// Consume closing ']'
			endTok, err := ctx.dec.Token()
			if err != nil {
				return err
			}
			if endDelim, ok := endTok.(json.Delim); !ok || endDelim != ']' {
				return fmt.Errorf("expected ']', got %v", endTok)
			}
			return nil
		default:
			return fmt.Errorf("unexpected delimiter %v", v)
		}
	case string, float64, bool, nil:
		return nil
	default:
		return fmt.Errorf("unexpected token type %T", v)
	}
}

// Parse the clang AST while taking into account that unlike standard JSON, the
// encoding relies on field ordering to skip redundant fields - in particular
// source locations. As such, we have to use a custom parser in which we process
// the fields in order while re-adding the stripped fields thus aiding further
// processing.
func parseClangAst(ctx *ParseCtx) (*AstNode, error) {
	// Expect start of object
	tok, err := ctx.dec.Token()
	if err != nil {
		return nil, err
	}
	if delim, ok := tok.(json.Delim); !ok || delim != '{' {
		return nil, fmt.Errorf("expected '{', got %v", tok)
	}

	node := &AstNode{}

	for ctx.dec.More() {
		fieldTok, err := ctx.dec.Token()
		if err != nil {
			return nil, err
		}
		field, ok := fieldTok.(string)
		if !ok {
			return nil, fmt.Errorf("expected string for field name, got %v", fieldTok)
		}

		switch field {
		case "id":
			var idStr string
			if err := ctx.dec.Decode(&idStr); err != nil {
				return nil, err
			}
			id, err := strconv.ParseUint(strings.TrimPrefix(idStr, "0x"), 16, 64)
			if err != nil {
				return nil, fmt.Errorf("failed to parse id %q as hex: %w", idStr, err)
			}
			node.Id = HexUint64(id)
		case "kind":
			var kind string
			if err := ctx.dec.Decode(&kind); err != nil {
				return nil, err
			}
			node.Kind = kind

		case "inner":
			if ctx.ShouldParseInner != nil && !ctx.ShouldParseInner(ctx, node.Kind) {
				if err := skipWithFile(ctx, false); err != nil {
					return nil, err
				}
			} else {
				ctx.stack = append(ctx.stack, node)

				// Expect start of array
				tok, err := ctx.dec.Token()
				if err != nil {
					return nil, err
				}
				if delim, ok := tok.(json.Delim); !ok || delim != '[' {
					return nil, fmt.Errorf("expected '[', got %v", tok)
				}
				var innerNodes []*AstNode
				for ctx.dec.More() {
					child, err := parseClangAst(ctx)
					if err != nil {
						return nil, err
					}
					// Filter inner nodes if callback is set
					if ctx.ShouldKeepInner == nil || ctx.ShouldKeepInner(ctx, node.Kind, child) {
						innerNodes = append(innerNodes, child)
					}
				}
				// Expect end of array
				tok, err = ctx.dec.Token()
				if err != nil {
					return nil, err
				}
				if delim, ok := tok.(json.Delim); !ok || delim != ']' {
					return nil, fmt.Errorf("expected ']', got %v", tok)
				}

				ctx.stack = ctx.stack[:len(ctx.stack)-1]
				node.Inner = innerNodes
			}
		default:
			// Collect unknown fields, allocate map only if needed
			val, err := unmarshalWithFile(ctx, isSourceLoc(field))
			if err != nil {
				panic(err)
			}
			// Filter unknown fields if callback is set
			if ctx.ShouldKeepField == nil || ctx.ShouldKeepField(ctx, node.Kind, field, val) {
				if node.Fields == nil {
					node.Fields = make(map[string]interface{})
				}

				node.Fields[field] = val
			}
		}
	}
	// Expect end of object
	tok, err = ctx.dec.Token()
	if err != nil {
		return nil, err
	}

	if delim, ok := tok.(json.Delim); !ok || delim != '}' {
		return nil, fmt.Errorf("expected '}', got %v", tok)
	}

	return node, nil
}
