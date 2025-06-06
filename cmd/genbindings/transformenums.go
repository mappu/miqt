package main

import "strings"

type EnumScopeInfo struct {
	FullyQualifiedName string
	ClassScope         string // Empty if global/namespace scope
	Namespace          string // Empty if global scope
}

// Map of enum name -> class scope -> namespace -> EnumScopeInfo
var EnumScopeRegistry = make(map[string]map[string]map[string]EnumScopeInfo)

func (header *CppParsedHeader) RegisterFlags() map[string]CppFlagProperty {
	if header.DetectedFlags == nil {
		header.DetectedFlags = make(map[string]CppFlagProperty)
	}

	for _, typedef := range header.Typedefs {
		typeClass := strings.Split(typedef.Alias, `::`)[0]

		// Skip private/internal types
		if strings.HasSuffix(typedef.Alias, "Private") ||
			strings.Contains(typeClass, "Private") {
			continue
		}

		// Skip protected enums
		if enum, ok := KnownEnums[typedef.Alias]; ok {
			if enum.Enum.IsProtected {
				continue
			}
		}

		if strings.Contains(typedef.Alias, "::") {
			flagDef := strings.Split(typedef.Alias, `::`)
			if len(flagDef) <= 1 {
				continue
			}

			className := flagDef[0]
			flagName := strings.Join(flagDef[1:], ``)

			flagProperty := CppFlagProperty{
				PropertyName: typedef.Alias, // Fully qualified name
				PropertyType: CppParameter{
					ParameterType: typedef.UnderlyingType.RenderTypeCabi(),
				},
			}

			// Register both forms in DetectedFlags
			header.DetectedFlags[typedef.Alias] = flagProperty // Full name
			header.DetectedFlags[flagName] = flagProperty      // Short name

			if _, ok := EnumScopeRegistry[flagName]; !ok {
				EnumScopeRegistry[flagName] = make(map[string]map[string]EnumScopeInfo)
			}
			if _, ok := EnumScopeRegistry[flagName][className]; !ok {
				EnumScopeRegistry[flagName][className] = make(map[string]EnumScopeInfo)
			}

			EnumScopeRegistry[flagName][className][""] = EnumScopeInfo{
				FullyQualifiedName: typedef.Alias,
				ClassScope:         className,
				Namespace:          "", // Flags are always class-scoped
			}
		}
	}
	return header.DetectedFlags
}

func resolveMethodEnumTypes(methods []CppMethod, className string, namespace string) []CppMethod {
	for j, method := range methods {
		if method.ReturnType.IsKnownEnum() {
			method.ReturnType.ParameterType = resolveEnumType(
				method.ReturnType.ParameterType,
				className,
				namespace,
			)
		}
		for k, param := range method.Parameters {
			if param.IsKnownEnum() {
				method.Parameters[k].ParameterType = resolveEnumType(
					param.ParameterType,
					className,
					namespace,
				)
			}
		}
		methods[j] = method
	}
	return methods
}

func astTransformEnumResolution(parsed *CppParsedHeader) {
	// Resolve enum types in class ctors and methods
	for i, class := range parsed.Classes {
		var namespace string
		if strings.Contains(class.ClassName, "::") {
			parts := strings.Split(class.ClassName, "::")
			namespace = parts[0]
		}

		class.Ctors = resolveMethodEnumTypes(class.Ctors, class.ClassName, namespace)
		class.Methods = resolveMethodEnumTypes(class.Methods, class.ClassName, namespace)

		parsed.Classes[i] = class
	}
}

func registerEnumScope(enum *CppEnum, className string, namespace string) {
	// Register both the short name and fully qualified name
	shortName := enum.CabiEnumName()

	if _, ok := EnumScopeRegistry[shortName]; !ok {
		EnumScopeRegistry[shortName] = make(map[string]map[string]EnumScopeInfo)
	}
	if _, ok := EnumScopeRegistry[shortName][className]; !ok {
		EnumScopeRegistry[shortName][className] = make(map[string]EnumScopeInfo)
	}

	// Store the enum info
	EnumScopeRegistry[shortName][className][namespace] = EnumScopeInfo{
		FullyQualifiedName: enum.EnumName,
		ClassScope:         className,
		Namespace:          namespace,
	}
}

func resolveEnumType(enumName string, currentClass string, currentNamespace string) string {
	scopeMap, exists := EnumScopeRegistry[enumName]
	if !exists {
		return enumName // Can't resolve
	}

	// 1. Current class scope
	if currentClass != "" {
		if classMap, ok := scopeMap[currentClass]; ok {
			expectedName := currentClass + "::" + enumName
			for _, info := range classMap {
				if info.FullyQualifiedName == expectedName {
					return info.FullyQualifiedName
				}
			}
		}

		// 2. Parent class scopes
		if classInfo, ok := KnownClassnames[currentClass]; ok {
			for _, parent := range classInfo.Class.DirectInheritClassInfo() {
				// Skip template classes
				if strings.Contains(parent.Class.ClassName, "<") {
					continue
				}

				if classMap, ok := scopeMap[parent.Class.ClassName]; ok {
					for _, info := range classMap {
						return info.FullyQualifiedName
					}
				}
			}
		}
	}

	// 3. Current namespace scope
	if currentNamespace != "" {
		if classMap, ok := scopeMap[""]; ok {
			for _, info := range classMap {
				if info.Namespace == currentNamespace {
					return info.FullyQualifiedName
				}
			}
		}
	}

	// 4. Global scope
	if classMap, ok := scopeMap[""]; ok {
		if info, ok := classMap[""]; ok {
			return info.FullyQualifiedName
		}
	}

	return enumName // No match found
}
