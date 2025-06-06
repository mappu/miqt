package main

import "strings"

type lookupResultClass struct {
	PackageName string
	Class       CppClass
}

type lookupResultTypedef struct {
	PackageName string
	Typedef     CppTypedef
}

type lookupResultEnum struct {
	PackageName string
	Enum        CppEnum
}

var (
	KnownClassnames map[string]lookupResultClass // Entries of the form QFoo::Bar if it is an inner class
	KnownTypedefs   map[string]lookupResultTypedef
	KnownEnums      map[string]lookupResultEnum
)

func flushKnownTypes() {
	KnownClassnames = make(map[string]lookupResultClass)
	KnownTypedefs = make(map[string]lookupResultTypedef)
	KnownEnums = make(map[string]lookupResultEnum)
}

func addKnownTypes(packageName string, parsed *CppParsedHeader) {
	for _, c := range parsed.Classes {
		KnownClassnames[c.ClassName] = lookupResultClass{packageName, c /* copy */}
	}
	for _, td := range parsed.Typedefs {
		KnownTypedefs[td.Alias] = lookupResultTypedef{packageName, td /* copy */}
	}
	for _, en := range parsed.Enums {
		KnownEnums[en.EnumName] = lookupResultEnum{packageName, en /* copy */}

		// Register short name if it's a scoped enum
		if strings.Contains(en.EnumName, "::") {
			shortName := en.CabiEnumName()
			KnownEnums[shortName] = lookupResultEnum{packageName, en}
		}

		// Flags version
		flagsEnum := en // copy
		flagsEnum.EnumName = "QFlags<" + en.EnumName + ">"
		KnownEnums[flagsEnum.EnumName] = lookupResultEnum{packageName, flagsEnum}
		if strings.Contains(en.EnumName, "::") {
			KnownEnums[en.CabiEnumName()+"s"] = lookupResultEnum{packageName, flagsEnum}
		}
	}

	// Handle child enums in classes
	for _, c := range parsed.Classes {
		for _, en := range c.ChildEnums {
			// Register enum with fully qualified name
			KnownEnums[en.EnumName] = lookupResultEnum{packageName, en}
			// Register short name
			KnownEnums[en.CabiEnumName()] = lookupResultEnum{packageName, en}

			// Flags version
			flagsEnum := en // copy
			flagsEnum.EnumName = "QFlags<" + en.EnumName + ">"
			KnownEnums[flagsEnum.EnumName] = lookupResultEnum{packageName, flagsEnum}
			KnownEnums[en.CabiEnumName()+"s"] = lookupResultEnum{packageName, flagsEnum}
		}
	}

	// Register detected flags
	for flagName, flagInfo := range parsed.DetectedFlags {
		// Create flag enum entry
		flagEnum := CppEnum{
			EnumName:       flagInfo.PropertyName,
			UnderlyingType: flagInfo.PropertyType,
		}

		// Register with fully qualified name
		KnownEnums[flagInfo.PropertyName] = lookupResultEnum{packageName, flagEnum}

		// Register with short name
		if strings.Contains(flagInfo.PropertyName, "::") {
			KnownEnums[flagName] = lookupResultEnum{packageName, flagEnum}
		}
	}
}
