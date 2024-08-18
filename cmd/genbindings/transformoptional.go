package main

import (
	"fmt"
)

// astTransformOptional expands all methods with optional parameters into
// explicit additional versions.
func astTransformOptional(parsed *CppParsedHeader) {
	for i, c := range parsed.Classes {

		anyChange := false
		for j, m := range c.Methods {

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
				dupMethod := CppMethod{
					MethodName:         m.MethodName + fmt.Sprintf("%d", x+1),
					OverrideMethodName: m.MethodName,
					ReturnType:         m.ReturnType,
					Parameters:         nil,
					IsSignal:           m.IsSignal,
					IsStatic:           m.IsStatic,
					HasHiddenParams:    (x != len(m.Parameters)-1),
				}
				dupMethod.Parameters = append(dupMethod.Parameters, m.Parameters[0:x+1]...)
				c.Methods = append(c.Methods, dupMethod) // TODO can we insert them next, instead of at the end?
			}

			// Truncate the original method's parameters to only the
			// mandatory ones
			m.Parameters = m.Parameters[0:optionalStart]
			m.HasHiddenParams = true
			c.Methods[j] = m
		}

		if anyChange {
			parsed.Classes[i] = c
		}
	}
}
