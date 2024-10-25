package main

// astTransformBlocklist filters out methods using too-complex parameter types,
// and entire classes that may be disallowed.
func astTransformBlocklist(parsed *CppParsedHeader) {

	// Whole-classes

	j := 0
	for _, c := range parsed.Classes {
		if !AllowClass(c.ClassName) {
			continue
		}

		// Keep
		parsed.Classes[j] = c
		j++
	}
	parsed.Classes = parsed.Classes[:j] // reslice

	// For the kept classes, filter ctors and methods within the class, based
	// on the parameter types and return types

	for i, c := range parsed.Classes {

		// Constructors

		j := 0
	nextCtor:
		for _, m := range c.Ctors {
			if err := AllowType(m.ReturnType, true); err != nil {
				continue nextCtor
			}

			for _, p := range m.Parameters {
				if err := AllowType(p, false); err != nil {
					continue nextCtor
				}
			}

			// Keep
			c.Ctors[j] = m
			j++
		}
		c.Ctors = c.Ctors[:j] // reslice

		// Methods

		j = 0
	nextMethod:
		for _, m := range c.Methods {
			if err := AllowType(m.ReturnType, true); err != nil {
				continue nextMethod
			}

			for _, p := range m.Parameters {
				if err := AllowType(p, false); err != nil {
					continue nextMethod
				}
			}

			// Keep
			c.Methods[j] = m
			j++
		}
		c.Methods = c.Methods[:j] // reslice

		parsed.Classes[i] = c

	}
}
