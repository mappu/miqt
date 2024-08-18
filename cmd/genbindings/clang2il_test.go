package main

import (
	"reflect"
	"testing"
)

func TestParseTypeString(t *testing.T) {
	type testCase struct {
		input        string
		expectReturn CppParameter
		expectParams []CppParameter
	}

	cases := []testCase{
		testCase{
			input:        "void (bool)",
			expectReturn: CppParameter{ParameterType: "void"},
			expectParams: []CppParameter{
				CppParameter{ParameterType: "bool"},
			},
		},
	}

	for _, tc := range cases {
		r, p, err := parseTypeString(tc.input)
		if err != nil {
			t.Errorf("Test %q got error %v", tc.input, err)
			continue
		}

		if !reflect.DeepEqual(r, tc.expectReturn) {
			t.Errorf("Test %q got return=%#v, expected=%#v", tc.input, r, tc.expectReturn)
		}
		if !reflect.DeepEqual(p, tc.expectParams) {
			t.Errorf("Test %q got return=%#v, expected=%#v", tc.input, r, tc.expectReturn)
		}
	}
}
