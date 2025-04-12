package main

import (
	"fmt"
	"strings"
)

func (p CppParameter) renderTypeForMethod() string {
	return strings.NewReplacer(" ", "", "::", "").Replace(p.ParameterType)
}

// astTransformOverloads renames methods if another method exists with the same
// name.
func astTransformOverloads(parsed *CppParsedHeader) {
	for i, c := range parsed.Classes {

		anyChange := false
		existing := map[string]struct{}{}
		for j, m := range c.Methods {

			originalProposal := m.SafeMethodName()
			proposedName := originalProposal

			if _, ok := existing[proposedName]; !ok {
				existing[proposedName] = struct{}{}
				continue // No collision
			}

			// Collision - rename
			anyChange = true

			proposedName = (func() (proposedName string) {

				// Fake special-case check
				// If this is a 1-argument function, try and name it FooFrom{Type}
				// e.g. NewVariantFromFloat
				if len(m.Parameters) == 1 {

					// If the parameter has a proper name (i.e. not 'l' or 'param1')
					// then go with that
					if len(m.Parameters[0].ParameterName) > 1 && !strings.HasPrefix(m.Parameters[0].ParameterName, "param") {
						proposedName = originalProposal + "With" + titleCase(m.Parameters[0].ParameterName)
					} else {
						// Try the type instead
						proposedName = originalProposal + "With" + titleCase(m.Parameters[0].renderTypeForMethod())
					}
					if _, ok := existing[proposedName]; !ok {
						return proposedName
					}

				}

				// No special naming, have to use a numeric overload
				// Numbers start with 2 since the "original" is the first
				ctr := 2
				for {
					proposedName = fmt.Sprintf("%s%d", originalProposal, ctr)
					if _, ok := existing[proposedName]; !ok {
						return proposedName
					}

					ctr++ // Loop until we have a non-colliding name available
				}
			})()

			// We have identified a final replacement name
			existing[proposedName] = struct{}{}
			m.Rename(proposedName)
			c.Methods[j] = m
		}

		if anyChange {
			parsed.Classes[i] = c
		}
	}
}
