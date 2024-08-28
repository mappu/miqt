package main

import (
	"testing"
)

func TestTransformTypedefs(t *testing.T) {
	// Test that the static typedefs are applied

	makeTest := func(typeName string) CppParsedHeader {
		return CppParsedHeader{
			Classes: []CppClass{

				CppClass{
					ClassName: "QTestClass",
					Ctors: []CppMethod{

						CppMethod{
							Parameters: []CppParameter{
								CppParameter{
									ParameterName: "foo",
									ParameterType: typeName,
								},
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

		got := parsed.Classes[0].Ctors[0].Parameters[0].ParameterType
		if got != expect {
			t.Errorf("Transform of WId got %q, expected %q", got, expect)
		}
	}

	runTest("WId", "uintptr_t")
	runTest("QList<WId>", "QList<uintptr_t>")
	runTest("QVector<WId>", "QVector<uintptr_t>")
}
