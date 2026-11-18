package main

import (
	"fmt"
	"strings"
)

func (p CppParameter) renderTypeForMethod() string {
	return strings.NewReplacer(" ", "", "::", "").Replace(p.ParameterType)
}

// overloadable is the interface shared by CppMethod and CppFunction for
// overload renaming. Overload transforms happen at the CABI level, so names
// are compared using CabiMethodName().
type overloadable interface {
	CabiMethodName() string
	Rename(string)
	OverloadParams() []CppParameter
}

// transformOverloadsGeneric handles renaming a single overloaded item.
// If its proposal name collides with an existing name, it renames the item
// and records the new name in existing. existing is a map of already-seen
// names used to detect collisions.
// T must be a pointer type (*CppMethod or *CppFunction) because Rename has a
// pointer receiver.
func transformOverloadsGeneric[T overloadable](item T, existing map[string]struct{}, originalProposal string) {
	if _, ok := existing[originalProposal]; !ok {
		existing[originalProposal] = struct{}{}
		return // No collision
	}

	// Collision - rename
	// Try "With{Type}" naming for single-parameter items
	if params := item.OverloadParams(); len(params) == 1 {
		p := params[0]
		var proposedName string
		if len(p.ParameterName) > 1 && !strings.HasPrefix(p.ParameterName, "param") {
			proposedName = originalProposal + "With" + titleCase(p.ParameterName)
		} else {
			proposedName = originalProposal + "With" + titleCase(p.renderTypeForMethod())
		}
		if _, ok := existing[proposedName]; !ok {
			existing[proposedName] = struct{}{}
			item.Rename(proposedName)
			return
		}
	}

	// Fall back to numeric suffix
	ctr := 2
	for {
		proposedName := fmt.Sprintf("%s%d", originalProposal, ctr)
		if _, ok := existing[proposedName]; !ok {
			existing[proposedName] = struct{}{}
			item.Rename(proposedName)
			return
		}
		ctr++
	}
}

// astTransformOverloads renames methods if another method exists with the same
// CABI name.
func astTransformOverloads(parsed *CppParsedHeader) {
	for i := range parsed.Classes {
		c := &parsed.Classes[i]
		existing := map[string]struct{}{}

		ptrs := make([]*CppMethod, len(c.Methods))
		for j := range c.Methods {
			ptrs[j] = &c.Methods[j]
		}
		for _, m := range ptrs {
			transformOverloadsGeneric(m, existing, m.CabiMethodName())
		}
	}
}

// astTransformOverloadFunctions renames free functions if another function
// exists with the same Go-safe name.
// Have to use the Go method name for disambiguation to block struct<-->function collisions
func astTransformOverloadFunctions(parsed *CppParsedHeader, existingNames map[string]struct{}) {
	ptrs := make([]*CppFunction, len(parsed.Functions))
	for j := range parsed.Functions {
		ptrs[j] = &parsed.Functions[j]
	}
	for _, fn := range ptrs {
		transformOverloadsGeneric(fn, existingNames, fn.goMethodName())
	}
}
