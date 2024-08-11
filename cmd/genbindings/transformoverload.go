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

			ctr := 2
			var proposedName string
			for {
				proposedName = fmt.Sprintf("%s%d", m.MethodName, ctr)
				if _, ok := existing[proposedName]; !ok {
					break
				}

				ctr++ // Loop until we have a non-colliding name available
			}

			existing[proposedName] = struct{}{}
			m.OverrideMethodName = m.MethodName
			m.MethodName = proposedName
			c.Methods[j] = m
		}

		if anyChange {
			parsed.Classes[i] = c
		}
	}
}
