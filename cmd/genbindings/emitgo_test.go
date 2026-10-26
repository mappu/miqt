package main

import (
	"strings"
	"testing"
)

// TestQListNoFixedSizeCast verifies the fix for issue #365: QList conversions
// must not go via a fixed-size (*[0xffff]T) array, which panics for lists
// with more than 65535 elements.
func TestQListNoFixedSizeCast(t *testing.T) {
	gfs := goFileState{imports: map[string]struct{}{}}

	list := CppParameter{ParameterType: "QList<int>", ParameterName: "vals"}

	preamble, _ := gfs.emitParameterGo2CABIForwarding(list, true)
	afterword := gfs.emitCabiToGo("return ", list, "C.foo()")

	for _, src := range []string{preamble, afterword} {
		if strings.Contains(src, "0xffff") {
			t.Fatalf("QList conversion uses a fixed-size array cast:\n%s", src)
		}
		if !strings.Contains(src, "unsafe.Slice(") {
			t.Fatalf("QList conversion does not use unsafe.Slice:\n%s", src)
		}
	}
}
