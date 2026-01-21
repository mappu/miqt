package main

import (
	"sort"
)

// astTransformConstructorOrder creates a canonical ordering for constructors.
func astTransformConstructorOrder(packageName string, parsed *CppParsedHeader) {

	// QFoo(QWidget* parent);
	checkIsDefaultCtor := func(candidate *CppMethod) bool {
		return len(candidate.Parameters) == 1 &&
			candidate.Parameters[0].ParameterType == "QWidget" &&
			candidate.Parameters[0].Pointer
	}

	// QFoo(QVariantList);
	checkIsQVariantListCtor := func(candidate *CppMethod) bool {
		if len(candidate.Parameters) != 1 {
			return false
		}

		if t, _, ok := candidate.Parameters[0].QListOf(); ok && t.ParameterType == "QVariant" {
			return true
		}
		return false
	}

	// Iterate all classes
	for i, c := range parsed.Classes {

		// Sort
		sort.SliceStable(c.Ctors, func(i, j int) bool {
			// Case 1: Default ctors are moved to front,
			// so the 0th entry is any entry taking solely a QWidget* parameter.
			// This is so that UIC can safely assume this for types.
			// @ref https://github.com/mappu/miqt/issues/46
			ic := checkIsDefaultCtor(&c.Ctors[i])
			jc := checkIsDefaultCtor(&c.Ctors[j])

			if ic && !jc {
				return true
			}

			// Case 2: QVariantList overload is moved to end
			// This softens a compatibility break churning all the QVariant
			// constructor ordinals when QVariantList was unblocked.
			// @ref https://github.com/mappu/miqt/issues/188
			ic = checkIsQVariantListCtor(&c.Ctors[i])
			jc = checkIsQVariantListCtor(&c.Ctors[j])

			if !ic && jc {
				return true
			}

			// Case 3: Qt 5 QDateTime({no args}) moved to end
			// This softens a compatibility break when noexcept attribute
			// parsing was added
			// @ref https://github.com/mappu/miqt/pull/305
			if packageName == "qt" && c.ClassName == "QDateTime" {
				ic = (len(c.Ctors[i].Parameters) == 0)
				jc = (len(c.Ctors[j].Parameters) == 0)

				if !ic && jc {
					return true
				}
			}

			// Default case: Normal
			return false
		})

		// Persist mutation
		parsed.Classes[i] = c

	}
}
