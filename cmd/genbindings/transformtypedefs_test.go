package main

import (
	"strings"
	"testing"
)

func TestTransformTypedefs(t *testing.T) {
	// Test that the static typedefs are applied

	makeTest := func(typeName string) CppParsedHeader {
		return CppParsedHeader{
			Classes: []CppClass{

				{
					ClassName: "QTestClass",
					Ctors: []CppMethod{

						{
							Parameters: []CppParameter{
								parseSingleTypeString(typeName),
							},
							IsStatic: true,
						},
					},
				},
			},
		}

	}

	runTest := func(check string, expect string) {
		parsed := makeTest(check)

		astTransformTypedefs(&parsed)

		resultP := parsed.Classes[0].Ctors[0].Parameters[0]
		got := resultP.ParameterType

		if resultP.Const {
			got = "const " + got
		}
		if resultP.Pointer {
			got += strings.Repeat("*", resultP.PointerCount)
		}
		if resultP.ByRef {
			got += "&"
		}

		if got != expect {
			t.Errorf("Transform of %q got %q, expected %q", check, got, expect)
		}
	}

	InsertTypedefs()
	KnownTypedefs["WId"] = CppTypedef{"WId", parseSingleTypeString("uintptr_t")}

	runTest("WId", "uintptr_t")
	runTest("QList<WId>", "QList<uintptr_t>")
	runTest("QStringList", "QList<QString>")
	runTest("QVector<WId>", "QVector<uintptr_t>")

	KnownTypedefs["_test_known_typedef_recursion"] = CppTypedef{"_test_known_typedef_recursion", parseSingleTypeString("WId")}
	runTest("_test_known_typedef_recursion", "uintptr_t")

	// Pointer tests
	runTest("WId*", "uintptr_t*")
	runTest("QVector<WId*>", "QVector<uintptr_t*>")

	// Const tests
	runTest("const QVector<WId*>", "const QVector<uintptr_t*>")

	// Typedefs changing pointer values
	KnownTypedefs["_test_iterator"] = CppTypedef{"_test_iterator", parseSingleTypeString("char*")}
	runTest("_test_iterator", "char*")

}
