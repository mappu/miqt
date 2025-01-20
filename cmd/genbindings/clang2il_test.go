package main

import (
	"reflect"
	"testing"
)

func TestParseMethodTypes(t *testing.T) {
	type testCase struct {
		input        string
		expectReturn CppParameter
		expectParams []CppParameter
		expectErr    bool
	}

	cases := []testCase{
		{
			input:        "void (bool)",
			expectReturn: CppParameter{ParameterType: "void"},
			expectParams: []CppParameter{
				{ParameterType: "bool"},
			},
		},
		{
			input:        "bool (QList<QPair<Foo, Bar>>, QString)",
			expectReturn: CppParameter{ParameterType: "bool"},
			expectParams: []CppParameter{
				{ParameterType: "QList<QPair<Foo, Bar>>"},
				{ParameterType: "QString"},
			},
			// expectErr: true,
		},
		{
			input:        "bool (QList<QWidget*>)",
			expectReturn: CppParameter{ParameterType: "bool"},
			expectParams: []CppParameter{
				{ParameterType: "QList<QWidget*>"},
			},
		},
	}

	for _, tc := range cases {
		r, p, _ /* isConst */, err := parseTypeString(tc.input)

		if tc.expectErr {
			if err == nil {
				t.Errorf("Test %q got error=nil but it was expected to fail", tc.input)
				continue
			}

		} else {
			if err != nil {
				t.Errorf("Test %q got error %v", tc.input, err)
				continue
			}

			if !reflect.DeepEqual(r, tc.expectReturn) {
				t.Errorf("Test %q\n-got return=%#v\n-expected  =%#v", tc.input, r, tc.expectReturn)
			}
			if !reflect.DeepEqual(p, tc.expectParams) {
				t.Errorf("Test %q\n-got params=%#v\n-expected  =%#v", tc.input, p, tc.expectParams)
			}
		}
	}
}

func TestParseInnerListTypes(t *testing.T) {
	l := parseSingleTypeString(`QList<QWidget*>`)

	tok, ok := l.QListOf()

	if !ok {
		t.Fatal("expected QListOf")
	}

	if !tok.Pointer {
		t.Error("expected pointer")
	}

	if tok.ParameterType != "QWidget" {
		t.Errorf("expected QWidget, got %q", tok.ParameterType)
	}
}

func TestPointerDepth(t *testing.T) {
	for _, testCase := range []string{`char**`, `char * *`} {
		l := parseSingleTypeString(testCase)
		if l.ParameterType != "char" {
			t.Error("expected char")
		}
		if !l.Pointer {
			t.Error("expected pointer")
		}
		if l.PointerCount != 2 {
			t.Errorf("expected pointerCount=2, got %d", l.PointerCount)
		}
	}
}
