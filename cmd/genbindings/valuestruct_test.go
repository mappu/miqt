package main

import (
	"os"
	"strings"
	"testing"
)

// TestValueStructClassesMatchLibmiqt verifies that the Go struct definitions
// generated from valueStructClasses agree with the C structs in libmiqt.h.
func TestValueStructClassesMatchLibmiqt(t *testing.T) {
	header, err := os.ReadFile("../../libmiqt/libmiqt.h")
	if err != nil {
		t.Fatal(err)
	}

	for className, fields := range valueStructClasses {
		expect := valueStructCabiName(className) + " {\n"
		for _, f := range fields {
			expect += "    " + f.CType + " " + f.Name + ";\n"
		}
		expect += "};\n"

		if !strings.Contains(string(header), expect) {
			t.Errorf("libmiqt.h does not contain:\n%s", expect)
		}
	}
}

func TestValueStructProjection(t *testing.T) {
	withKnownClass(t, "QSize", "qt6")
	gfs := &goFileState{imports: map[string]struct{}{}, currentPackageName: "qt6"}

	cases := []struct {
		param  CppParameter
		goType string
		cabi   string
	}{
		{CppParameter{ParameterType: "QSize"}, "QSize", "struct miqt_qsize"},
		{CppParameter{ParameterType: "QSize", Const: true, ByRef: true}, "QSize", "struct miqt_qsize"},
		{CppParameter{ParameterType: "QSize", ByRef: true}, "*QSize", "QSize*"},
		{CppParameter{ParameterType: "QSize", Pointer: true, PointerCount: 1}, "*QSize", "QSize*"},
		{CppParameter{ParameterType: "QSize", Const: true, Pointer: true, PointerCount: 1}, "*QSize", "QSize*"},
	}

	for _, tc := range cases {
		if got := tc.param.RenderTypeGo(gfs); got != tc.goType {
			t.Errorf("%+v: Go type: expected %q, got %q", tc.param, tc.goType, got)
		}
		if got := tc.param.RenderTypeCabi(); got != tc.cabi {
			t.Errorf("%+v: CABI type: expected %q, got %q", tc.param, tc.cabi, got)
		}
		if tc.param.holdsGoGCWrapper() {
			t.Errorf("%+v: must not need a KeepAlive", tc.param)
		}
	}
}
