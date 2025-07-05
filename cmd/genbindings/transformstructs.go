package main

import "strings"

// Helper function to resolve any struct type, including inner classes
func resolveStructType(typeName, className, namespace string) string {
	// Check if it's already a fully qualified name
	if strings.HasPrefix(typeName, "Qt::") {
		return typeName
	}

	localTypeName := className
	if idx := strings.LastIndex(className, "::"); idx != -1 {
		localTypeName = className[idx+2:]
	}

	for _, container := range qtContainers {
		if strings.HasPrefix(typeName, container) {
			openPos := strings.Index(typeName, "<")
			closePos := strings.LastIndex(typeName, ">")
			if openPos != -1 && closePos != -1 {
				innerType := typeName[openPos+1 : closePos]

				// Check if inner type matches local type name
				if innerType == localTypeName {
					return container + className + ">"
				}

				// Try class scope first
				fullClassName := innerType
				namespaceName := innerType
				if !strings.Contains(innerType, "::") {
					fullClassName = className + "::" + innerType
					namespaceName = namespace + "::" + innerType
				}
				if _, ok := KnownClassnames[fullClassName]; ok {
					return container + fullClassName + ">"
				} else if namespace != "" {
					// Try namespace scope
					if _, ok := KnownClassnames[namespaceName]; ok {
						return container + namespaceName + ">"
					}
				}

				if _, ok := KnownTypedefs[fullClassName]; ok {
					return container + fullClassName + ">"
				} else if namespace != "" {
					if _, ok := KnownTypedefs[namespaceName]; ok {
						return container + namespaceName + ">"
					}
				}
			}
		}
	}

	// Check if it's a known type
	if strings.Contains(typeName, "::") {
		if _, ok := KnownClassnames[typeName]; ok {
			return typeName
		}
		if _, ok := KnownTypedefs[typeName]; ok {
			return typeName
		}
	}

	// Try class scope
	classScoped := className + "::" + typeName
	if _, ok := KnownClassnames[classScoped]; ok {
		return classScoped
	}

	if _, ok := KnownTypedefs[classScoped]; ok {
		return classScoped
	}

	// Try namespace scope
	if namespace != "" {
		namespaceScoped := namespace + "::" + typeName
		if _, ok := KnownClassnames[namespaceScoped]; ok {
			return namespaceScoped
		}
		if _, ok := KnownTypedefs[namespaceScoped]; ok {
			return namespaceScoped
		}
	}

	return typeName
}

func (method *CppMethod) resolveMethodStructTypes(className, namespace string) { // []CppMethod {
	// Get the local type name (without scope) for self-reference checks
	localTypeName := className
	if idx := strings.LastIndex(className, "::"); idx != -1 {
		localTypeName = className[idx+2:]
	}

	// Resolve return type
	for _, container := range qtContainers {
		if strings.HasPrefix(method.ReturnType.ParameterType, container) {
			openPos := strings.Index(method.ReturnType.ParameterType, "<")
			closePos := strings.LastIndex(method.ReturnType.ParameterType, ">")
			if openPos != -1 && closePos != -1 {
				innerType := method.ReturnType.ParameterType[openPos+1 : closePos]

				// Check if inner type matches local type name
				if innerType == localTypeName {
					method.ReturnType.ParameterType = container + className + ">"
					if _, ok := KnownTypedefs[className+"::"+innerType]; ok {
						if method.ReturnType.QtCppOriginalType != nil {
							method.ReturnType.QtCppOriginalType.ParameterType = className + "::" + innerType
						}
					}
					continue
				}

				// Try resolving from KnownClassnames
				if _, ok := KnownClassnames[innerType]; ok {
					method.ReturnType.ParameterType = container + innerType + ">"
				}

				if _, ok := KnownTypedefs[className+"::"+innerType]; ok {
					if method.ReturnType.QtCppOriginalType != nil {
						method.ReturnType.QtCppOriginalType.ParameterType = className + "::" + innerType
					}
				}

				// Try class scope first
				fullClassName := className + "::" + innerType
				namespaceName := namespace + "::" + innerType
				if _, ok := KnownClassnames[fullClassName]; ok {
					method.ReturnType.ParameterType = container + fullClassName + ">"
					if method.ReturnType.QtCppOriginalType != nil {
						method.ReturnType.QtCppOriginalType.ParameterType = container + fullClassName + ">"
					}
				} else if namespace != "" {
					// Try namespace scope
					if _, ok := KnownClassnames[namespaceName]; ok {
						method.ReturnType.ParameterType = container + namespaceName + ">"
						if method.ReturnType.QtCppOriginalType != nil {
							method.ReturnType.QtCppOriginalType.ParameterType = container + namespaceName + ">"
						}
					}
				}

				if _, ok := KnownTypedefs[fullClassName]; ok {
					if method.ReturnType.QtCppOriginalType != nil {
						method.ReturnType.QtCppOriginalType.ParameterType = fullClassName
					}
				} else if namespace != "" {
					if _, ok := KnownTypedefs[namespaceName]; ok {
						if method.ReturnType.QtCppOriginalType != nil {
							method.ReturnType.QtCppOriginalType.ParameterType = namespaceName
						}
					}
				}
			}
		}
	}

	// Resolve parameters
	for i, param := range method.Parameters {
		// Check if parameter type matches local type name
		if param.ParameterType == localTypeName {
			method.Parameters[i].ParameterType = className
			continue
		}

		for _, container := range qtContainers {
			if strings.HasPrefix(param.ParameterType, container) {
				openPos := strings.Index(param.ParameterType, "<")
				closePos := strings.LastIndex(param.ParameterType, ">")
				if openPos != -1 && closePos != -1 {
					innerType := param.ParameterType[openPos+1 : closePos]

					// Try class scope first
					fullClassName := className + "::" + innerType
					namespaceName := namespace + "::" + innerType
					if _, ok := KnownClassnames[fullClassName]; ok {
						method.Parameters[i].ParameterType = container + fullClassName + ">"
					} else if namespace != "" {
						// Try namespace scope
						if _, ok := KnownClassnames[namespaceName]; ok {
							method.Parameters[i].ParameterType = container + namespaceName + ">"
						}
					}
				}
			}
		}
	}

	// Also handle direct struct types
	method.ReturnType.ParameterType = resolveStructType(method.ReturnType.ParameterType, className, namespace)
	if method.ReturnType.QtCppOriginalType != nil {
		method.ReturnType.QtCppOriginalType.ParameterType = resolveStructType(method.ReturnType.QtCppOriginalType.ParameterType, className, namespace)
	}

	// Handle parameters
	for i, param := range method.Parameters {
		method.Parameters[i].ParameterType = resolveStructType(param.ParameterType, className, namespace)
		if method.Parameters[i].QtCppOriginalType != nil {
			method.Parameters[i].QtCppOriginalType.ParameterType = resolveStructType(param.QtCppOriginalType.ParameterType, className, namespace)
		}
	}
}

// Resolve struct types in class ctors and methods
func astTransformStructResolution(parsed *CppParsedHeader) {
	for _, class := range parsed.Classes {
		var namespace string
		if strings.Contains(class.ClassName, "::") {
			parts := strings.Split(class.ClassName, "::")
			namespace = parts[0]
		}

		for i := range class.Ctors {
			class.Ctors[i].resolveMethodStructTypes(class.ClassName, namespace)
		}
		for i := range class.Methods {
			class.Methods[i].resolveMethodStructTypes(class.ClassName, namespace)
		}
	}
}
