package main

import (
	"strconv"
)

// astTransformOptional expands all methods with optional parameters into
// explicit additional versions.
func astTransformOptional(parsed *CppParsedHeader) {
	for i, c := range parsed.Classes {

		anyChange := false

		// Methods
		// ```````

		for j, m := range c.Methods {

			// Treat virtual methods as if all parameters are mandatory
			if m.IsVirtual {
				continue
			}

			// Search for first optional parameter (they all must be last)
			optionalStart := -1
			for k, p := range m.Parameters {
				if p.Optional {
					optionalStart = k
					break
				}
			}
			if optionalStart == -1 {
				continue // There were no optional parameters
			}

			anyChange = true

			// Add method copies
			for x := optionalStart; x < len(m.Parameters); x++ {
				dupMethod := m // shallow copy
				dupMethod.Rename(m.MethodName + strconv.Itoa(x+1))
				dupMethod.Parameters = m.Parameters[0 : x+1]
				dupMethod.HiddenParams = m.Parameters[x+1:]

				c.Methods = append(c.Methods, dupMethod) // TODO can we insert them next, instead of at the end?
			}

			// Truncate the original method's parameters to only the
			// mandatory ones
			m.HiddenParams = m.Parameters[optionalStart:]
			m.Parameters = m.Parameters[0:optionalStart]
			c.Methods[j] = m
		}

		// Constructors
		// ````````````

		for j, m := range c.Ctors {

			// Search for first optional parameter (they all must be last)
			optionalStart := -1
			for k, p := range m.Parameters {
				if p.Optional {
					optionalStart = k
					break
				}
			}
			if optionalStart == -1 {
				continue // There were no optional parameters
			}

			anyChange = true

			// Add ctor copies
			for x := optionalStart; x < len(m.Parameters); x++ {
				dupCtor := m // shallow copy
				dupCtor.Parameters = m.Parameters[0 : x+1]
				dupCtor.HiddenParams = m.Parameters[x+1:]
				c.Ctors = append(c.Ctors, dupCtor)
			}

			// Truncate the original ctor's parameters to only the
			// mandatory ones
			m.HiddenParams = m.Parameters[optionalStart:]
			m.Parameters = m.Parameters[0:optionalStart]
			c.Ctors[j] = m
		}

		if anyChange {
			parsed.Classes[i] = c
		}
	}
}
