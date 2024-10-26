package main

import (
	"sort"
)

// astTransformConstructorOrder creates a canonical ordering for constructors
// where the 0th entry is any entry taking solely a QWidget* parameter.
// This is so that UIC can safely assume this for types.
// @ref https://github.com/mappu/miqt/issues/46
func astTransformConstructorOrder(parsed *CppParsedHeader) {

	// QFoo(QWidget* parent);
	checkIsDefaultCtor := func(candidate CppMethod) bool {
		return len(candidate.Parameters) == 1 &&
			candidate.Parameters[0].ParameterType == "QWidget" &&
			candidate.Parameters[0].Pointer
	}

	// Iterate all classes
	for i, c := range parsed.Classes {

		// Sort
		sort.SliceStable(c.Ctors, func(i, j int) bool {
			ic := checkIsDefaultCtor(c.Ctors[i])
			jc := checkIsDefaultCtor(c.Ctors[j])

			if ic && !jc {
				return true
			}
			return false
		})

		// Persist mutation
		parsed.Classes[i] = c

	}
}
