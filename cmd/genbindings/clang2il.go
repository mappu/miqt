package main

import (
	"errors"
	"fmt"
	"log"
	"strings"
)

func parseHeader(inner []interface{}) (*CppParsedHeader, error) {

	var ret CppParsedHeader

	fmt.Printf("package miqt\n\n")

	for _, node := range inner {

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

			fmt.Printf("-> %q name=%q\n", kind, nodename)
			if classInner, ok := node["inner"].([]interface{}); ok {

				// Check if this was 'struct' (default visible) or 'class' (default invisible)
				visible := true
				if tagUsed, ok := node["tagUsed"].(string); ok && tagUsed == "class" {
					visible = false
				}

				// Process the inner class definition
				obj, err := processType(classInner, nodename, visible)
				if err != nil {
					panic(err)
				}

				ret.Classes = append(ret.Classes, obj)
			}

		case "StaticAssertDecl":
			// ignore

		default:
			return nil, fmt.Errorf("missing handling for clang ast node type %q", kind)
		}
	}

	return &ret, nil // done
}

func processType(inner []interface{}, className string, visibility bool) (CppClass, error) {
	var ret CppClass
	ret.ClassName = className

nextMethod:
	for _, node := range inner {
		node, ok := node.(map[string]interface{})
		if !ok {
			return CppClass{}, errors.New("inner[] element not an object")
		}

		kind, ok := node["kind"]
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

		case "CXXConstructorDecl", "":
			// panic("TODO")

		case "CXXMethodDecl":
			if !visibility {
				continue // Skip private/protected
			}

			// Method
			methodName, ok := node["name"].(string)
			if !ok {
				return CppClass{}, errors.New("method has no name")
			}

			var mm CppMethod
			mm.MethodName = methodName

			if typobj, ok := node["type"].(map[string]interface{}); ok {
				if qualType, ok := typobj["qualType"].(string); ok {
					// The qualType is the whole type of the method, including its parameter types
					// If anything here is too complicated, skip the whole method
					if strings.Contains(qualType, `::`) {
						log.Printf("Skipping method %q with complex type %q", mm.MethodName, qualType)
						continue nextMethod
					}

					// We only want up to the first ( character
					mm.ReturnType, _, _ = strings.Cut(qualType, `(`)
					mm.ReturnType = strings.TrimSpace(mm.ReturnType)
				}
			}

			if methodInner, ok := node["inner"].([]interface{}); ok {
				for _, methodObj := range methodInner {
					methodObj, ok := methodObj.(map[string]interface{})
					if !ok {
						return CppClass{}, errors.New("inner[] element not an object")
					}

					switch methodObj["kind"] {
					case "ParmVarDecl":
						// Parameter variable
						parmName, _ := methodObj["name"].(string) // n.b. may be unnamed
						if parmName == "" {
							parmName = fmt.Sprintf("param%d", len(mm.Parameters)+1)
						}

						var parmType string
						if typobj, ok := node["type"].(map[string]interface{}); ok {
							if qualType, ok := typobj["qualType"].(string); ok {
								parmType = qualType
							}
						}

						// TODO fixup parameters
						// Reference -> pointer
						// Remove const
						// Remove extra () -- if there are more than expected, skip method with complex type
						// If this parameter is optional, expand it into multiple function overloads

						mm.Parameters = append(mm.Parameters, CppParameter{
							ParameterName: parmName,
							ParameterType:  parmType,
						})

					default:
						// Something else inside a declaration??
						fmt.Printf("==> NOT IMPLEMENTED CXXMethodDecl->%q\n", kind)
					}
				}
			}

			ret.Methods = append(ret.Methods, mm)

		default:
			fmt.Printf("==> NOT IMPLEMENTED %q\n", kind)
		}
	}

	return ret, nil // done
}
