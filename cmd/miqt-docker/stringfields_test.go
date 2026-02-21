package main

import (
	"fmt"
	"testing"
)

func TestStringFields(t *testing.T) {
	type testCase struct {
		input  string
		expect []string
	}

	cases := []testCase{
		// blank string = no fields
		{"", []string{}},

		// Spaces are trimmed
		{" ", []string{}},
		{"  ", []string{}},
		{"hello", []string{"hello"}},
		{"  hello  ", []string{"hello"}},

		// Other types of whitespace
		{" \t \r hello \n ", []string{"hello"}},

		// Multiple tokens
		{"hello world", []string{"hello", "world"}},

		// Quotes
		{`"hello" world`, []string{"hello", "world"}},
		{`"hello"    'world'`, []string{"hello", "world"}},

		// Switching quote types inside a single token
		{`"he"'ll'o world`, []string{"hello", "world"}},

		// Leftover unquoted text
		{`"leftover`, []string{"leftover"}},

		// Real world expected use case
		{`--security-opt label:disable --user 1000:0`, []string{"--security-opt", "label:disable", "--user", "1000:0"}},
	}

	for _, tc := range cases {
		got := StringFields(tc.input)

		if fmt.Sprintf("%#v", got) != fmt.Sprintf("%#v", tc.expect) {
			t.Errorf("StringFields(%q); got %#v, want %#v", tc.input, got, tc.expect)
		}
	}
}
