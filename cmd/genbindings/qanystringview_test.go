package main

import (
	"os"
	"os/exec"
	"path/filepath"
	"strings"
	"testing"
)

// Compile freshly emitted C++, CABI and Go together. This catches native
// lifetime errors that assertions about generated source alone cannot detect.
func TestQAnyStringViewLifetime(t *testing.T) {
	if _, err := exec.LookPath("pkg-config"); err != nil {
		t.Skip("pkg-config is required for the native QAnyStringView regression")
	}
	if out, err := exec.Command("pkg-config", "--exists", "Qt6Widgets").CombinedOutput(); err != nil {
		t.Skipf("Qt6Widgets development files are required: %v\n%s", err, out)
	}
	classes, typedefs, enums := KnownClassnames, KnownTypedefs, KnownEnums
	flushKnownTypes()
	t.Cleanup(func() {
		KnownClassnames, KnownTypedefs, KnownEnums = classes, typedefs, enums
	})

	view := CppParsedHeader{Classes: []CppClass{{
		ClassName: "QAnyStringView", CanDelete: true,
		Ctors: []CppMethod{
			{ReturnType: CppParameter{ParameterType: "void"}},
			{ReturnType: CppParameter{ParameterType: "void"}, Parameters: []CppParameter{{ParameterName: "str", ParameterType: "QByteArray", Const: true, ByRef: true}}},
			{ReturnType: CppParameter{ParameterType: "void"}, Parameters: []CppParameter{{ParameterName: "str", ParameterType: "QString", Const: true, ByRef: true}}},
			{ReturnType: CppParameter{ParameterType: "void"}, Parameters: []CppParameter{{ParameterName: "c", ParameterType: "QChar", Const: true, ByRef: true}}},
			{ReturnType: CppParameter{ParameterType: "void"}, Parameters: []CppParameter{{ParameterName: "other", ParameterType: "QAnyStringView", Const: true, ByRef: true}}},
		},
		Methods: []CppMethod{
			{MethodName: "toString", IsConst: true, ReturnType: CppParameter{ParameterType: "QString"}},
			{MethodName: "size", IsConst: true, ReturnType: CppParameter{ParameterType: "ptrdiff_t"}},
			{MethodName: "size_bytes", IsConst: true, ReturnType: CppParameter{ParameterType: "ptrdiff_t"}},
			{MethodName: "isNull", IsConst: true, ReturnType: CppParameter{ParameterType: "bool"}},
			{MethodName: "isEmpty", IsConst: true, ReturnType: CppParameter{ParameterType: "bool"}},
		},
	}}}
	char := CppParsedHeader{Classes: []CppClass{{
		ClassName: "QChar", CanDelete: true,
		Ctors: []CppMethod{{ReturnType: CppParameter{ParameterType: "void"}, Parameters: []CppParameter{{ParameterName: "c", ParameterType: "unsigned short"}}}},
	}}}
	for _, parsed := range []*CppParsedHeader{&view, &char} {
		for i := range parsed.Classes[0].Ctors {
			parsed.Classes[0].Ctors[i].IsStatic = true
		}
	}
	addKnownTypes("qt6", &view)
	addKnownTypes("qt6", &char)

	dir := t.TempDir()
	write := func(name string, data []byte) {
		t.Helper()
		path := filepath.Join(dir, name)
		if err := os.MkdirAll(filepath.Dir(path), 0755); err != nil {
			t.Fatal(err)
		}
		if err := os.WriteFile(path, data, 0644); err != nil {
			t.Fatal(err)
		}
	}
	write("go.mod", []byte("module example.com/miqt-stringview-regression\n\ngo 1.19\n"))
	lib, err := os.ReadFile("../../libmiqt/libmiqt.h")
	if err != nil {
		t.Fatal(err)
	}
	write("libmiqt/libmiqt.h", lib)
	for _, item := range []struct {
		header string
		parsed *CppParsedHeader
	}{{"qanystringview.h", &view}, {"qchar.h", &char}} {
		goSrc, err := emitGo(item.parsed, item.header, "qt6")
		if err != nil {
			t.Fatal(err)
		}
		cpp, err := emitBindingCpp(item.parsed, item.header)
		if err != nil {
			t.Fatal(err)
		}
		h, err := emitBindingHeader(item.parsed, item.header, "qt6")
		if err != nil {
			t.Fatal(err)
		}
		base := "qt6/gen_" + strings.TrimSuffix(item.header, ".h")
		write(base+".go", []byte(goSrc))
		write(base+".cpp", []byte(cpp))
		write(base+".h", []byte(h))
	}
	files, err := os.ReadDir("testdata/qanystringview")
	if err != nil {
		t.Fatal(err)
	}
	for _, file := range files {
		data, err := os.ReadFile(filepath.Join("testdata/qanystringview", file.Name()))
		if err != nil {
			t.Fatal(err)
		}
		write("qt6/"+file.Name(), data)
	}
	args := []string{"test", "-vet=off", "-count=1", "-v", "-timeout=90s"}
	if os.Getenv("MIQT_TEST_ASAN") == "1" {
		args = append(args, "-asan")
	}
	args = append(args, "./qt6")
	run := func(t *testing.T) {
		cmd := exec.Command("go", args...)
		cmd.Dir = dir
		out, err := cmd.CombinedOutput()
		if err != nil {
			t.Fatalf("QAnyStringView native regression: %v\n%s", err, out)
		}
		t.Logf("%s", out)
	}
	t.Run("Generated", run)
	// Also compile the shipped binding, so a generator-only fix or stale
	// generated Go/C++/CABI files cannot accidentally satisfy the regression.
	for _, ext := range []string{".go", ".cpp", ".h"} {
		data, err := os.ReadFile("../../qt6/gen_qanystringview" + ext)
		if err != nil {
			t.Fatal(err)
		}
		write("qt6/gen_qanystringview"+ext, data)
	}
	t.Run("CheckedIn", run)
}
