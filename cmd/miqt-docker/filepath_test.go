package main

import (
	"runtime"
	"testing"
)

func TestHighestCommonParent(t *testing.T) {
	if runtime.GOOS == "windows" {
		t.Skip("This test uses platform-specific paths")
	}

	type testCase struct {
		input  []string
		expect string
	}

	cases := []testCase{

		// Single input
		testCase{
			input:  []string{`/foo/bar/baz`},
			expect: `/foo/bar/baz`,
		},

		// Duplicated input
		testCase{
			input:  []string{`/foo/bar/baz`, `/foo/bar/baz`},
			expect: `/foo/bar/baz`,
		},

		// Trailing slashes are preserved if they all included trailing slashes
		testCase{
			input:  []string{`/foo/bar/baz/`, `/foo/bar/baz/`},
			expect: `/foo/bar/baz/`,
		},

		// Common directory
		testCase{
			input:  []string{`/foo/bar/baz`, `/foo/quux`},
			expect: `/foo`,
		},

		// Common directory, multiple inputs
		testCase{
			input:  []string{`/foo/a`, `/foo/b`, `/foo/c`, `/foo/d`},
			expect: `/foo`,
		},

		testCase{
			input:  []string{`/foo/bar/baz`, `/unrelated`, `/foo/bar/baz`},
			expect: `/`,
		},

		// No leading forwardslash (single input)
		testCase{
			input:  []string{`foo/bar/baz`},
			expect: `foo/bar/baz`,
		},

		// No leading forwardslash (empty output assumes /)
		testCase{
			input:  []string{`foo/bar/baz`, `unrelated`, `foo/bar/baz`},
			expect: `/`,
		},
	}

	for idx, tc := range cases {
		got, err := highestCommonParent(tc.input)
		if err != nil {
			t.Errorf("test %d: input(%v) got error=%v", idx, tc.input, err)
			continue
		}
		if got != tc.expect {
			t.Errorf("test %d: input(%v) got %q, want %q", idx, tc.input, got, tc.expect)
		}
	}
}
