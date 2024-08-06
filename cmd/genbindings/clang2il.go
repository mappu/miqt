package main

import (
	"errors"
	"fmt"
	"log"
	"strings"
)

func parseHeader(inner []interface{}) (*parsedHeader, error) {

	var ret parsedHeader

	/*
		jb, err := json.MarshalIndent(inner, "", "\t")
		if err != nil {
			panic(err)
		}
		fmt.Println(string(jb))
	*/

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
				obj, err := processType(classInner, nodename)
				if err != nil {
					panic(err)
				}

				ret.classes = append(ret.classes, obj)
			}

		case "StaticAssertDecl":
			// ignore

		default:
			return nil, fmt.Errorf("missing handling for clang ast node type %q", kind)
		}
	}

	return &ret, nil // done
}

func processType(inner []interface{}, className string) (nativeClass, error) {
	var ret nativeClass
	ret.className = className

nextMethod:
	for _, node := range inner {
		node, ok := node.(map[string]interface{})
		if !ok {
			return nativeClass{}, errors.New("inner[] element not an object")
		}

		kind, ok := node["kind"]
		if !ok {
			panic("inner element has no kind")
		}

		switch kind {
		case "CXXMethodDecl":
			// Method
			methodName, ok := node["name"].(string)
			if !ok {
				return nativeClass{}, errors.New("method has no name")
			}

			var mm nativeMethod
			mm.methodName = methodName

			if typobj, ok := node["type"].(map[string]interface{}); ok {
				if qualType, ok := typobj["qualType"].(string); ok {
					// The qualType is the whole type of the method, including its parameter types
					// If anything here is too complicated, skip the whole method
					if strings.Contains(qualType, `::`) {
						log.Printf("Skipping method %q with complex type %q", mm.methodName, qualType)
						continue nextMethod
					}

					// We only want up to the first ( character
					mm.returnType, _, _ = strings.Cut(qualType, `(`)
					mm.returnType = strings.TrimSpace(mm.returnType)
				}
			}

			if methodInner, ok := node["inner"].([]interface{}); ok {
				for _, methodObj := range methodInner {
					methodObj, ok := methodObj.(map[string]interface{})
					if !ok {
						return nativeClass{}, errors.New("inner[] element not an object")
					}

					switch methodObj["kind"] {
					case "ParmVarDecl":
						// Parameter variable
						parmName, _ := methodObj["name"].(string) // n.b. may be unnamed
						if parmName == "" {
							parmName = fmt.Sprintf("param%d", len(mm.parameters)+1)
						}

						var parmType string
						if typobj, ok := node["type"].(map[string]interface{}); ok {
							if qualType, ok := typobj["qualType"].(string); ok {
								parmType = qualType
							}
						}

						mm.parameters = append(mm.parameters, nativeParameter{
							name: parmName,
							typ:  parmType,
						})

					default:
						// Something else inside a declaration??
						fmt.Printf("==> NOT IMPLEMENTED CXXMethodDecl->%q\n", kind)
					}
				}
			}

			ret.methods = append(ret.methods, mm)

		default:
			fmt.Printf("==> NOT IMPLEMENTED %q\n", kind)
		}
	}

	return ret, nil // done
}
