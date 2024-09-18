package main

// astTransformRedundant merges duplicate enum definitions.
type astTransformRedundant struct {
	preserve map[string]*CppEnum
}

func (a *astTransformRedundant) Process(parsed *CppParsedHeader) {

	for i, e := range parsed.Enums {
		prev, ok := a.preserve[e.EnumName]
		if !ok {
			// It's new
			a.preserve[e.EnumName] = &parsed.Enums[i]
			continue
		}

		// It's pre-existing
		if prev.UnderlyingType != e.UnderlyingType {
			panic("Enum " + e.EnumName + " is defined multiple times with different underlying types")
		}

		// Merge entries
		prev.Entries = append(prev.Entries, e.Entries...)

		// Remove from second matched header
		// This is difficult to manipulate while preserving pointers, so only
		// wipe out the name and use that as a signal later on
		parsed.Enums[i].EnumName = ""
	}
}
