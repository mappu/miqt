package main

// astTransformBlacklist filters out things we do not want to parse.
func astTransformBlacklist(parsed *CppParsedHeader) {
	var keep []CppClass

	for _, c := range parsed.Classes {
		if c.ClassName[0] != 'Q' {
			continue
		}

		keep = append(keep, c)
	}

	parsed.Classes = keep
}
