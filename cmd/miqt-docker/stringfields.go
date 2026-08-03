package main

// StringFields tokenizes an input string into an array of separate fields. It
// supports quotes. It doesn't parse escape sequences.
func StringFields(input string) []string {

	var ret []string = make([]string, 0)
	var tmp string
	flush := func() {
		if len(tmp) > 0 {
			ret = append(ret, tmp)
			tmp = ""
		}
	}

	type parseState int
	const (
		Normal parseState = iota
		InsideDoubleQuotes
		InsideSingleQuotes
	)
	var state parseState = Normal

	for _, r := range input {
		if state == Normal {
			if r == '"' {
				state = InsideDoubleQuotes
			} else if r == '\'' {
				state = InsideSingleQuotes
			} else if r == ' ' || r == '\t' || r == '\n' || r == '\r' {
				flush()
			} else {
				tmp += string(r)
			}

		} else if state == InsideDoubleQuotes {
			if r == '"' {
				state = Normal // Don't flush yet, might be switching quote types mid-field
			} else {
				tmp += string(r)
			}

		} else if state == InsideSingleQuotes {
			if r == '\'' {
				state = Normal
			} else {
				tmp += string(r)
			}

		} else {
			panic("invalid state") // unreachable
		}
	}

	flush() // any incomplete fields

	return ret
}
