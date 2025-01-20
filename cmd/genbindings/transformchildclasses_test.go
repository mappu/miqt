package main

import (
	"testing"
)

func TestChildClassesExtract(t *testing.T) {

	src := CppParsedHeader{
		Classes: []CppClass{

			{
				ClassName: "Parent",

				ChildClassdefs: []CppClass{

					{
						ClassName: "Parent::Child",

						ChildClassdefs: []CppClass{

							{
								ClassName: "Parent::Child::Grandchild",
							},
						},
					},
				},
			},
		},
	}

	astTransformChildClasses(&src)
	if len(src.Classes) != 3 {
		t.Fatal("expected 3 classes")
	}

	if src.Classes[0].ClassName != "Parent" {
		t.Fatal("expected parent class name")
	}

	if src.Classes[1].ClassName != "Parent::Child::Grandchild" {
		t.Fatal("expected grandchild class name")
	}

	if src.Classes[2].ClassName != "Parent::Child" {
		t.Fatal("expected child class name")
	}

}
