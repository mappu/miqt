package main

// astTransformApplyQuirks applies quirk flags to the class/method.
func astTransformApplyQuirks(packageName string, parsed *CppParsedHeader) {

	for i, c := range parsed.Classes {

		// Constructors

		for j, _ := range c.Ctors {
			ApplyQuirks(packageName, c.ClassName, &parsed.Classes[i].Ctors[j])
		}

		// Methods

		for j, _ := range c.Methods {
			ApplyQuirks(packageName, c.ClassName, &parsed.Classes[i].Methods[j])
		}

	}
}
