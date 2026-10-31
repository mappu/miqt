package main

import (
	"strings"
	"testing"
)

// withKnownClass registers a Qt class for the duration of a test.
func withKnownClass(t *testing.T, className, packageName string, inherits ...string) {
	if KnownClassnames == nil {
		KnownClassnames = make(map[string]lookupResultClass)
	}
	old, existed := KnownClassnames[className]
	KnownClassnames[className] = lookupResultClass{PackageName: packageName, Class: CppClass{ClassName: className, DirectInherits: inherits}}
	t.Cleanup(func() {
		if existed {
			KnownClassnames[className] = old
		} else {
			delete(KnownClassnames, className)
		}
	})
}

// TestEmitKeepAlive verifies the fix for issue #366: the receiver and any
// argument holding a Go wrapper must stay reachable for the whole C call, or
// their finalizers can delete the C++ objects while C++ is still using them.
func TestEmitKeepAlive(t *testing.T) {
	withKnownClass(t, "QFont", "qt6")
	withKnownClass(t, "QBrush", "qt6")
	withKnownClass(t, "QObject", "qt6")
	withKnownClass(t, "QWidget", "qt6", "QObject")

	gfs := goFileState{imports: map[string]struct{}{}, currentPackageName: "qt6"}
	c := CppClass{ClassName: "QFont"}

	m := CppMethod{
		MethodName: "setFont",
		Parameters: []CppParameter{
			{ParameterType: "QFont", ParameterName: "font", Const: true, ByRef: true},
			{ParameterType: "QList<QBrush>", ParameterName: "indexes"},
			{ParameterType: "QString", ParameterName: "name"},
			{ParameterType: "int", ParameterName: "role"},
			{ParameterType: "QWidget", ParameterName: "widget", Pointer: true},
		},
	}

	got := gfs.emitKeepAlive(&c, m)
	for _, want := range []string{
		"defer runtime.KeepAlive(this)\n",
		"defer runtime.KeepAlive(font)\n",
		"defer runtime.KeepAlive(indexes)\n",
	} {
		if !strings.Contains(got, want) {
			t.Fatalf("emitKeepAlive missing %q:\n%s", want, got)
		}
	}
	// QObject classes never have a finalizer, so don't need to be kept alive
	for _, notWant := range []string{"KeepAlive(name)", "KeepAlive(role)", "KeepAlive(widget)"} {
		if strings.Contains(got, notWant) {
			t.Fatalf("emitKeepAlive should not emit %q:\n%s", notWant, got)
		}
	}
	if _, ok := gfs.imports["runtime"]; !ok {
		t.Fatalf("emitKeepAlive did not import runtime")
	}

	m.IsStatic = true
	if got := gfs.emitKeepAlive(&c, m); strings.Contains(got, "KeepAlive(this)") {
		t.Fatalf("emitKeepAlive kept alive the receiver of a static method:\n%s", got)
	}

	m.IsStatic = false
	w := KnownClassnames["QWidget"].Class
	if got := gfs.emitKeepAlive(&w, m); strings.Contains(got, "KeepAlive(this)") {
		t.Fatalf("emitKeepAlive kept alive a QObject receiver:\n%s", got)
	}
}

// TestVirtualReturnCopy verifies the fix for issue #366: a Qt value type
// returned from a virtual override must be copied for the C++ caller before
// the callback returns, and the C++ side must delete that copy.
func TestVirtualReturnCopy(t *testing.T) {
	withKnownClass(t, "QVariant", "qt6")
	withKnownClass(t, "QBrush", "qt6")

	c := CppClass{ClassName: "QAbstractTableModel"}
	gfs := goFileState{imports: map[string]struct{}{}, currentPackageName: "qt6", virtualReturnCopyClass: &c}

	single := CppParameter{ParameterType: "QVariant", ParameterName: "virtualReturn"}
	_, rvalue := gfs.emitParameterGo2CABIForwarding(single, true)
	if rvalue != "C.QAbstractTableModel_virtualreturncopy_QVariant(virtualReturn.cPointer())" {
		t.Fatalf("value return is not copied: %s", rvalue)
	}

	list := CppParameter{ParameterType: "QList<QBrush>", ParameterName: "virtualReturn"}
	preamble, _ := gfs.emitParameterGo2CABIForwarding(list, true)
	if !strings.Contains(preamble, "C.QAbstractTableModel_virtualreturncopy_QBrush(virtualReturn[i].cPointer())") {
		t.Fatalf("list element is not copied:\n%s", preamble)
	}

	// Pointers are not owned by the C++ caller, so must not be copied
	ptr := CppParameter{ParameterType: "QVariant", ParameterName: "virtualReturn", Pointer: true}
	if _, rvalue := gfs.emitParameterGo2CABIForwarding(ptr, true); strings.Contains(rvalue, "virtualreturncopy") {
		t.Fatalf("pointer return was copied: %s", rvalue)
	}

	if got := emitCABI2CppFreeReturn(single, "callback_return_value", "\t"); got != "\tdelete callback_return_value;\n" {
		t.Fatalf("value return copy is not deleted: %q", got)
	}
	if got := emitCABI2CppFreeReturn(list, "callback_return_value", "\t"); !strings.Contains(got, "delete callback_return_value_free_arr[i];") {
		t.Fatalf("list element copies are not deleted:\n%s", got)
	}

	mp := CppParameter{ParameterType: "QMap<int, QVariant>", ParameterName: "callback_return_value"}
	got := emitCABI2CppFreeReturn(mp, "callback_return_value", "\t")
	for _, want := range []string{
		"delete callback_return_value_free_varr[i];",
		"free(callback_return_value.keys);",
		"free(callback_return_value.values);",
	} {
		if !strings.Contains(got, want) {
			t.Fatalf("map return free missing %q:\n%s", want, got)
		}
	}
	if strings.Contains(got, "_karr") {
		t.Fatalf("map return free touches int keys:\n%s", got)
	}
}
