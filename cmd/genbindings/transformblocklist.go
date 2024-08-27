package main

// astTransformBlocklist filters out methods using too-complex parameter types,
// and entire classes that may be disallowed.
func astTransformBlocklist(parsed *CppParsedHeader) {

	for i, c := range parsed.Classes {

		// Constructors

		j := 0
	nextCtor:
		for _, m := range c.Ctors {
			if err := CheckComplexity(m.ReturnType); err != nil {
				continue nextCtor
			}

			for _, p := range m.Parameters {
				if err := CheckComplexity(p); err != nil {
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
			if err := CheckComplexity(m.ReturnType); err != nil {
				continue nextMethod
			}

			for _, p := range m.Parameters {
				if err := CheckComplexity(p); err != nil {
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
