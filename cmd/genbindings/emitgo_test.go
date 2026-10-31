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

func TestQIODeviceWriteDataUsesLength(t *testing.T) {
	header := CppParsedHeader{Classes: []CppClass{{
		ClassName: "QIODevice",
		Ctors:     []CppMethod{{}},
		Methods: []CppMethod{{
			MethodName:    "writeData",
			ReturnType:    CppParameter{ParameterType: "qint64"},
			IsVirtual:     true,
			IsPureVirtual: true,
			IsProtected:   true,
			Parameters: []CppParameter{
				{ParameterName: "data", ParameterType: "char", Const: true, Pointer: true, PointerCount: 1},
				{ParameterName: "len", ParameterType: "qint64"},
			},
		}},
	}}}
	astTransformApplyQuirks("qt", &header)
	got, err := emitGo(&header, "qiodevice.h", "qt")
	if err != nil {
		t.Fatal(err)
	}
	want := "slotval1 := string(unsafe.Slice((*byte)(unsafe.Pointer(data)), int(lenVal)))"
	if !strings.Contains(got, want) {
		t.Fatal("writeData callback does not copy its explicit byte length; an embedded NUL truncates the data")
	}
}
