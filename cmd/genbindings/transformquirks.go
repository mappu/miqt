package main

// astTransformApplyQuirks applies quirk flags to the class/method.
func astTransformApplyQuirks(packageName string, parsed *CppParsedHeader) {

	for i, c := range parsed.Classes {

		// Constructors

		for j := range c.Ctors {
			ApplyQuirks(packageName, c.ClassName, &parsed.Classes[i].Ctors[j])
		}

		// Methods

		for j := range c.Methods {
			ApplyQuirks(packageName, c.ClassName, &parsed.Classes[i].Methods[j])
		}

	}
}
