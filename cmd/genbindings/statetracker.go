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

// Handle child classes recursively
func registerChildClasses(class CppClass, packageName string) {
	for _, childClass := range class.ChildClassdefs {
		// Register with fully qualified name
		KnownClassnames[childClass.ClassName] = lookupResultClass{packageName, childClass}

		// Recursively register any nested children
		registerChildClasses(childClass, packageName)
	}
}

func addKnownTypes(packageName string, parsed *CppParsedHeader) {
	for _, c := range parsed.Classes {
		KnownClassnames[c.ClassName] = lookupResultClass{packageName, c /* copy */}

		// If it's a nested class, also register its local name
		if strings.Contains(c.ClassName, "::") {
			localName := c.ClassName[strings.Index(c.ClassName, "::")+2:]
			lastName := c.ClassName[strings.LastIndex(c.ClassName, "::")+2:]
			KnownClassnames[localName] = lookupResultClass{packageName, c}
			KnownClassnames[lastName] = lookupResultClass{packageName, c}
		}

		if qtVersion != "qt5" {
			for _, td := range c.ChildTypedefs {
				// Register typedef with fully qualified name
				KnownTypedefs[td.Alias] = lookupResultTypedef{packageName, td /* copy */}
				if strings.Contains(td.Alias, "::") {
					localName := td.Alias[strings.Index(td.Alias, "::")+2:]
					lastName := td.Alias[strings.LastIndex(td.Alias, "::")+2:]
					KnownTypedefs[localName] = lookupResultTypedef{packageName, td}
					KnownTypedefs[lastName] = lookupResultTypedef{packageName, td}
				}
			}

			for _, childClass := range c.ChildClassdefs {
				// Register class with fully qualified name
				KnownClassnames[childClass.ClassName] = lookupResultClass{packageName, childClass}
				registerChildClasses(c, packageName)
			}

			// Handle child enums in classes
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
	}

	for _, td := range parsed.Typedefs {
		KnownTypedefs[td.Alias] = lookupResultTypedef{packageName, td /* copy */}
	}

	for _, en := range parsed.Enums {
		KnownEnums[en.EnumName] = lookupResultEnum{packageName, en /* copy */}

		if qtVersion != "qt5" {
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
	}

	if qtVersion != "qt5" {
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
}
