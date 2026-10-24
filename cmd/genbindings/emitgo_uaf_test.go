package main

import (
	"strings"
	"testing"
)

// TestStripDeferCFree verifies the fix for the virtual-override callback
// use-after-free (e.g. QAbstractItemModel::mimeTypes -> qBadAlloc). A callback
// that returns a heap CABI type must NOT defer-free its C memory on return — the
// C++ caller reads/copies it afterward. stripDeferCFree removes exactly those
// defer-frees from the Go2CABI preamble while leaving allocations intact.
func TestStripDeferCFree(t *testing.T) {
	preamble := strings.Join([]string{
		`virtualReturn_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))`,
		`defer C.free(unsafe.Pointer(virtualReturn_CArray_ptr))`,
		`virtualReturn_CArray := unsafe.Slice(virtualReturn_CArray_ptr, len(virtualReturn))`,
		`for i := range virtualReturn {`,
		`	virtualReturn_i_ms := C.struct_miqt_string{}`,
		`	virtualReturn_i_ms.data = C.CString(virtualReturn[i])`,
		`	virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))`,
		`	defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))`,
		`	virtualReturn_CArray[i] = virtualReturn_i_ms`,
		`}`,
	}, "\n")

	got := stripDeferCFree(preamble)

	if strings.Contains(got, "defer C.free(") {
		t.Fatalf("stripDeferCFree left a defer C.free (use-after-free):\n%s", got)
	}
	// must keep everything else (the allocation + string construction)
	for _, must := range []string{"C.malloc", "unsafe.Slice", "C.CString", "for i := range virtualReturn", "virtualReturn_i_ms.len"} {
		if !strings.Contains(got, must) {
			t.Fatalf("stripDeferCFree removed non-free content %q:\n%s", must, got)
		}
	}
	// it should have removed exactly the two defer lines
	if before, after := strings.Count(preamble, "\n"), strings.Count(got, "\n"); before-after != 2 {
		t.Fatalf("expected 2 lines removed, removed %d", before-after)
	}
}

// TestQListNoFixedSizeCast verifies the fix for issue #365: QList conversions
// must not go via a fixed-size (*[0xffff]T) array, which panics for lists
// with more than 65535 elements.
func TestQListNoFixedSizeCast(t *testing.T) {
	gfs := goFileState{imports: map[string]struct{}{}}

	list := CppParameter{ParameterType: "QList<int>", ParameterName: "vals"}

	preamble, _ := gfs.emitParameterGo2CABIForwarding(list)
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
