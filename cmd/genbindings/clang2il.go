package main

import (
	"errors"
	"fmt"
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
				obj, err := processType(classInner)
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

func processType(inner []interface{}) (nativeClass, error) {
	var ret nativeClass

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
		default:
			fmt.Printf("==> %q\n", kind)
		}
	}

	return ret, nil // done
}
