package main

// takeChildren recursively takes the children of the class.
func takeChildren(c *CppClass) []CppClass {
	if len(c.ChildClassdefs) == 0 {
		return []CppClass{}
	}

	var ret []CppClass
	for _, child := range c.ChildClassdefs {
		ret = append(ret, takeChildren(&child)...)

		child.ChildClassdefs = nil
		ret = append(ret, child)
	}
	c.ChildClassdefs = nil

	return ret
}

// astTransformChildClasses expands all classes with child class definitions
// into new top-level entries within the header.
func astTransformChildClasses(parsed *CppParsedHeader) {
	var taken []CppClass

	for i, c := range parsed.Classes {

		nestedClasses := takeChildren(&parsed.Classes[i])

		taken = append(taken, nestedClasses...)

		// Also lift all child typedefs and enums
		parsed.Typedefs = append(parsed.Typedefs, c.ChildTypedefs...)
		parsed.Enums = append(parsed.Enums, c.ChildEnums...)
		for _, nc := range nestedClasses {
			parsed.Typedefs = append(parsed.Typedefs, nc.ChildTypedefs...)
			parsed.Enums = append(parsed.Enums, nc.ChildEnums...)
		}
	}

	parsed.Classes = append(parsed.Classes, taken...)

}
