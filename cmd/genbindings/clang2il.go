package main

import (
	"errors"
	"fmt"
	"log"
	"strings"
)

func parseHeader(topLevel []interface{}) (*CppParsedHeader, error) {

	var ret CppParsedHeader

	for _, node := range topLevel {

		node, ok := node.(map[string]interface{})
		if !ok {
			return nil, errors.New("inner[] element not an object")
		}

		kind, ok := node["kind"].(string)
		if !ok {
			return nil, errors.New("node has no kind")
		}

		switch kind {

		case "CXXRecordDecl":
			// Must have a name
			nodename, ok := node["name"].(string)
			if !ok {
				return nil, errors.New("node has no name")
			}

			log.Printf("-> %q name=%q\n", kind, nodename)

			// Skip over forward class declarations
			// This is determined in two ways:
			// 1. If the class has no inner nodes
			nodeInner, ok := node["inner"].([]interface{})
			if !ok {
				continue
			}

			// 2. If this class has only one `inner` entry that's a VisibilityAttr
			if len(nodeInner) == 1 {
				if node, ok := nodeInner[0].(map[string]interface{}); ok {
					if kind, ok := node["kind"].(string); ok && kind == "VisibilityAttr" {
						continue
					}
				}
			}

			// Also skip over any custom exceptions
			if !AllowClass(nodename) {
				continue
			}

			// Process the inner class definition
			obj, err := processClassType(node, nodename)
			if err != nil {
				panic(err)
			}

			ret.Classes = append(ret.Classes, obj)

		case "StaticAssertDecl":
			// ignore

		case "ClassTemplateDecl", "ClassTemplateSpecializationDecl", "ClassTemplatePartialSpecializationDecl":
			// ignore

		case "FileScopeAsmDecl":
			// ignore

		case "NamespaceDecl":
			// ignore

		case "FunctionDecl":
			// TODO

		case "FunctionTemplateDecl":
			// TODO

		case "CXXConstructorDecl":
			// TODO (why is this at the top level? e.g qobject.h)

		case "CXXDestructorDecl":
			// ignore

		case "CXXConversionDecl":
			// TODO (e.g. qbytearray.h)

		case "TypedefDecl":
			// Must have a name
			nodename, ok := node["name"].(string)
			if !ok {
				return nil, errors.New("node has no name")
			}

			if typ, ok := node["type"].(map[string]interface{}); ok {
				if qualType, ok := typ["qualType"].(string); ok {
					ret.Typedefs = append(ret.Typedefs, CppTypedef{
						Alias:          nodename,
						UnderlyingType: qualType,
					})
				}
			}

		case "CXXMethodDecl":
			// A C++ class method implementation directly in the header
			// Skip over these

		default:
			return nil, fmt.Errorf("missing handling for clang ast node type %q", kind)
		}
	}

	return &ret, nil // done
}

func processClassType(node map[string]interface{}, className string) (CppClass, error) {
	var ret CppClass
	ret.ClassName = className

	inner, _ := node["inner"].([]interface{}) // Cannot fail, the parent call already checked that `inner` was present

	// Check if this was 'struct' (default visible) or 'class' (default invisible)
	visibility := true
	if tagUsed, ok := node["tagUsed"].(string); ok && tagUsed == "class" {
		visibility = false
	}

	// Check if this is an abstract class
	if definitionData, ok := node["definitionData"].(map[string]interface{}); ok {
		if isAbstract, ok := definitionData["isAbstract"].(bool); ok && isAbstract {
			ret.Abstract = true
		}
	}

	// Check if this (publicly) inherits another class
	if bases, ok := node["bases"].([]interface{}); ok {
		for _, base := range bases {
			base, ok := base.(map[string]interface{})
			if !ok {
				continue
			}

			access, ok := base["access"].(string)
			if !(ok && access == "public") {
				continue
			}

			if typ, ok := base["type"].(map[string]interface{}); ok {
				if qualType, ok := typ["qualType"].(string); ok {
					ret.Inherits = append(ret.Inherits, qualType)
				}
			}
		}
	}

	isSignal := false

	// Parse all methods

nextMethod:
	for _, node := range inner {
		node, ok := node.(map[string]interface{})
		if !ok {
			return CppClass{}, errors.New("inner[] element not an object")
		}

		kind, ok := node["kind"].(string)
		if !ok {
			panic("inner element has no kind")
		}

		switch kind {
		case "AccessSpecDecl":
			// Swap between visible/invisible
			access, ok := node["access"].(string)
			if !ok {
				panic("AccessSpecDecl missing `access` field")
			}

			switch access {
			case "public":
				visibility = true
			case "private", "protected":
				visibility = false
			default:
				panic("unexpected access visibility '" + access + "'")
			}

			// Clang sees Q_SIGNALS/signals as being a macro for `public`
			// If this AccessSpecDecl was imported from a macro, assume it's signals
			isSignal = false
			if loc, ok := node["loc"].(map[string]interface{}); ok {
				if _, ok := loc["expansionLoc"].(map[string]interface{}); ok {
					isSignal = true
				}
			}

		case "FriendDecl":
			// Safe to ignore

		case "VisibilityAttr":
			// These seem to have no useful content

		case "CXXConstructorDecl":
			if !visibility {
				continue // Skip private/protected
			}

			if ret.Abstract {
				continue // The bindings can't construct an abstract class
			}

			// Check if this is `= delete`
			if explicitlyDeleted, ok := node["explicitlyDeleted"].(bool); ok && explicitlyDeleted {
				continue
			}

			var mm CppMethod
			err := parseMethod(node, &mm)
			if err != nil {
				if errors.Is(err, ErrTooComplex) {
					log.Printf("Skipping method %q with complex type", mm.MethodName)
					continue nextMethod
				}

				// Real error
				return CppClass{}, err
			}

			// Some QFoo constructors take a QFooPrivate
			for _, p := range mm.Parameters {
				if strings.Contains(p.ParameterType, "Private") {
					log.Printf("Skipping constructor taking Private type")
					continue nextMethod
				}
			}

			ret.Ctors = append(ret.Ctors, mm)

		case "CXXDestructorDecl":
			// We don't need to expose destructors in the binding beyond offering
			// a regular delete function

		case "CXXMethodDecl":
			if !visibility {
				continue // Skip private/protected
			}

			// Check if this is `= delete`
			if explicitlyDeleted, ok := node["explicitlyDeleted"].(bool); ok && explicitlyDeleted {
				continue
			}

			// Method
			methodName, ok := node["name"].(string)
			if !ok {
				return CppClass{}, errors.New("method has no name")
			}

			var mm CppMethod
			mm.MethodName = methodName

			if strings.Contains(methodName, `QGADGET`) {
				log.Printf("Skipping method %q with weird QGADGET behaviour\n", mm.MethodName)
				continue
			}

			err := parseMethod(node, &mm)
			if err != nil {
				if errors.Is(err, ErrTooComplex) {
					log.Printf("Skipping method %q with complex type", mm.MethodName)
					continue nextMethod
				}

				// Real error
				return CppClass{}, err
			}

			for _, p := range mm.Parameters {
				if strings.HasSuffix(p.ParameterType, "Private") {
					log.Printf("Skipping method %q taking Private type", mm.MethodName)
					continue nextMethod
				}
			}
			if strings.HasSuffix(mm.ReturnType.ParameterType, "Private") {
				log.Printf("Skipping method %q returning Private type", mm.MethodName)
				continue nextMethod
			}

			mm.IsSignal = isSignal && !mm.IsStatic && mm.MethodName != `metaObject`

			if mm.IsReceiverMethod() {
				log.Printf("Skipping method %q using non-projectable receiver pattern parameters", mm.MethodName)
				continue nextMethod
			}

			ret.Methods = append(ret.Methods, mm)

		default:
			log.Printf("==> NOT IMPLEMENTED %q\n", kind)
		}
	}

	return ret, nil // done
}

var ErrTooComplex error = errors.New("Type declaration is too complex to parse")

func parseMethod(node map[string]interface{}, mm *CppMethod) error {

	if typobj, ok := node["type"].(map[string]interface{}); ok {
		if qualType, ok := typobj["qualType"].(string); ok {
			// The qualType is the whole type of the method, including its parameter types
			// If anything here is too complicated, skip the whole method

			var err error = nil
			mm.ReturnType, mm.Parameters, err = parseTypeString(qualType)
			if err != nil {
				return err
			}

		}
	}

	if storageClass, ok := node["storageClass"].(string); ok && storageClass == "static" {
		mm.IsStatic = true
	}

	if methodInner, ok := node["inner"].([]interface{}); ok {
		paramCounter := 0
		for _, methodObj := range methodInner {
			methodObj, ok := methodObj.(map[string]interface{})
			if !ok {
				return errors.New("inner[] element not an object")
			}

			switch methodObj["kind"] {
			case "ParmVarDecl":
				// Parameter variable
				parmName, _ := methodObj["name"].(string) // n.b. may be unnamed
				if parmName == "" {

					// Generate a default parameter name
					// Super nice autogen names if this is a Q_PROPERTY setter:
					if len(mm.Parameters) == 1 && strings.HasPrefix(mm.MethodName, "set") {
						parmName = strings.ToLower(string(mm.MethodName[3])) + mm.MethodName[4:]

					} else {
						// Otherwise - default
						parmName = fmt.Sprintf("param%d", paramCounter+1)
					}
				}

				// Block reserved Go words, replace with generic parameters
				if goReservedWord(parmName) {
					parmName += "Val"
				}

				// Update the name for the existing nth parameter
				mm.Parameters[paramCounter].ParameterName = parmName

				// If this parameter has any internal AST nodes of its
				// own, assume it means it's an optional parameter
				if _, ok := methodObj["inner"]; ok {
					mm.Parameters[paramCounter].Optional = true
				}

				// Next
				paramCounter++

			default:
				// Something else inside a declaration??
				log.Printf("==> NOT IMPLEMENTED CXXMethodDecl->%q\n", methodObj["kind"])
			}
		}
	}

	// Fixups
	// QDataStream.operator<< return a reference to QDataStream, but have a private
	// copy constructor
	// The bindings don't know it's the same object. This is just a trick for a more
	// ergonomic C++ API but has no real effect
	// Wipe out
	if (mm.MethodName == "operator<<" || mm.MethodName == "operator>>" || mm.MethodName == "writeBytes") && mm.ReturnType.ParameterType == "QDataStream" && mm.ReturnType.ByRef {
		mm.ReturnType = CppParameter{ParameterType: "void"}
	}

	return nil
}

// parseTypeString converts a string like
// - `QString (const char *, const char *, int)`
// - `void (const QKeySequence \u0026)`
// into its (A) return type and (B) separate parameter types.
// These clang strings never contain the parameter's name, so the names here are
// not filled in.
func parseTypeString(typeString string) (CppParameter, []CppParameter, error) {

	if strings.Contains(typeString, `::`) {
		return CppParameter{}, nil, ErrTooComplex
	}

	if strings.Contains(typeString, `&&`) { // TODO Rvalue references
		return CppParameter{}, nil, ErrTooComplex
	}

	// Cut to exterior-most (, ) pair
	opos := strings.Index(typeString, `(`)
	epos := strings.LastIndex(typeString, `)`)

	if opos == -1 || epos == -1 {
		return CppParameter{}, nil, fmt.Errorf("Type string %q missing brackets", typeString)
	}

	returnType := parseSingleTypeString(strings.TrimSpace(typeString[0:opos]))

	// Skip functions that return ints-by-reference since the ergonomics don't
	// go through the binding
	if returnType.IntType() && returnType.ByRef {
		return CppParameter{}, nil, ErrTooComplex // e.g. QSize::rheight()
	}
	if err := CheckComplexity(returnType); err != nil {
		return CppParameter{}, nil, err
	}

	inner := typeString[opos+1 : epos]

	// Should be no more brackets
	if strings.ContainsAny(inner, `()`) {
		return CppParameter{}, nil, ErrTooComplex
	}

	// Parameters are separated by commas and nesting can not be possible
	params := tokenizeMultipleParameters(inner) // strings.Split(inner, `,`)

	ret := make([]CppParameter, 0, len(params))
	for _, p := range params {

		insert := parseSingleTypeString(p)

		if err := CheckComplexity(insert); err != nil {
			return CppParameter{}, nil, err
		}

		if insert.ParameterType != "" {
			ret = append(ret, insert)
		}
	}

	return returnType, ret, nil
}

func tokenizeMultipleParameters(p string) []string {
	// Tokenize into top-level strings
	templateDepth := 0
	tokens := []string{}
	wip := ""
	p = strings.TrimSpace(p)
	for _, c := range p {
		if c == '<' {
			wip += string(c)
			templateDepth++
		} else if c == '>' {
			wip += string(c)
			templateDepth--
		} else if c == ',' && templateDepth == 0 {
			tokens = append(tokens, wip)
			wip = ""
		} else {
			wip += string(c)
		}
	}

	tokens = append(tokens, wip)
	return tokens
}

func parseSingleTypeString(p string) CppParameter {

	tokens := strings.Split(strings.TrimSpace(p), " ")
	insert := CppParameter{}
	for _, tok := range tokens {
		if tok == "" {
			continue // extra space
		} else if tok == "const" || tok == "*const" {
			// *const happens for QPixmap, clang reports `const char *const *` which
			// isn't even valid syntax
			insert.Const = true

		} else if tok == "&" { // U+0026
			insert.ByRef = true
		} else if tok == "*" {
			insert.Pointer = true
		} else if tok == "WId" {
			// Transform typedef
			insert.ParameterType += " uintptr_t"
		} else if tok == "QStringList" {
			insert.ParameterType += " QList<QString>"
		} else if len(tok) > 4 && strings.HasSuffix(tok, "List") && tok != "QTextList" {
			// Typedef e.g. QObjectList
			// QObjectList is a pointer, but QStringList is a whole custom class
			insert.ParameterType += " QList<" + tok[0:len(tok)-4] + " *>"
		} else {
			// Valid part of the type name
			insert.ParameterType += " " + tok
		}
	}
	insert.ParameterType = strings.TrimSpace(insert.ParameterType)

	return insert
}
