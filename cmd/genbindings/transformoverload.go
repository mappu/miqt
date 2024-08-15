package main

import (
	"fmt"
)

// astTransformOverloads renames methods if another method exists with the same
// name.
func astTransformOverloads(parsed *CppParsedHeader) {
	for i, c := range parsed.Classes {

		anyChange := false
		existing := map[string]struct{}{}
		for j, m := range c.Methods {

			if _, ok := existing[m.MethodName]; !ok {
				existing[m.MethodName] = struct{}{}
				continue // No collision
			}

			// Collision - rename
			anyChange = true

			rootMethodName := m.OverrideMethodName
			if rootMethodName == "" {
				rootMethodName = m.MethodName
			}

			ctr := 1
			var proposedName string
			for {

				if ctr == 1 {
					// Fake special-case check
					// If this is a 1-argument function, try and name it FooFrom{Type}
					// e.g. NewVariantFromFloat
					if len(m.Parameters) == 1 {

						proposedName = rootMethodName + "With" + titleCase(m.Parameters[0].ParameterName)
						if _, ok := existing[proposedName]; !ok {
							break
						}

					}

				} else {
					proposedName = fmt.Sprintf("%s%d", rootMethodName, ctr)
					if _, ok := existing[proposedName]; !ok {
						break
					}
				}

				ctr++ // Loop until we have a non-colliding name available
			}

			existing[proposedName] = struct{}{}
			m.OverrideMethodName = rootMethodName
			m.MethodName = proposedName
			c.Methods[j] = m
		}

		if anyChange {
			parsed.Classes[i] = c
		}
	}
}
