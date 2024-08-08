package main

import (
	"strings"
)

type CppParameter struct {
	ParameterName string
	ParameterType string
	Const         bool
	Pointer       bool
	ByRef         bool
}

func (p CppParameter) RenderTypeCpp() string {
	ret := ""
	if p.ByRef {
		ret += "&"
	}
	ret += p.ParameterType
	if p.Pointer {
		ret += "*"
	}
	return ret // ignore const
}

func (p CppParameter) RenderTypeGo() string {
	if p.Pointer && p.ParameterType == "char" {
		return "string"
	}

	ret := ""
	if p.ByRef || p.Pointer {
		/*
			if p.ParameterType[0] == 'Q' {
				ret += "C.P" // use our void typedef instead
			} else {
		*/
		ret += "*"
	}
	ret += p.ParameterType
	return ret // ignore const
}

type CppProperty struct {
	PropertyName string
	PropertyType string
	Visibility   string
}

type CppMethod struct {
	MethodName string
	ReturnType CppParameter // Name not used
	Parameters []CppParameter
}

func (nm CppMethod) SafeMethodName() string {
	// Operator-overload methods have names not representable in binding
	// languages. Replace more specific cases first
	replacer := strings.NewReplacer(

		`==`, `Equal`,
		`>=`, `GreaterOrEqual`,
		`<=`, `LesserOrEqual`,
		`=`, `Assign`,
		`>`, `Greater`,
		`<`, `Lesser`,

		`+`, `Plus`,
		`-`, `Minus`,
		`*`, `Multiply`,
		`/`, `Divide`,
		`%`, `Modulo`,

		`&&`, `LogicalAnd`,
		`||`, `LogicalOr`,
		`!`, `Not`,
		`&`, `BitwiseAnd`,
		`|`, `BitwiseOr`,
		`~`, `BitwiseXor`,
		`^`, `BitwiseNot`,

		`->`, `PointerDereference`,
		`[]`, `Subscript`,
		`()`, `Call`,
	)

	tmp := replacer.Replace(nm.MethodName)

	// Also make the first letter uppercase so it becomes public in Go
	return strings.ToUpper(tmp[0:1]) + tmp[1:]
}

type CppClass struct {
	ClassName string
	Ctors     []CppMethod // only use the parameters
	Extends   []string
	Methods   []CppMethod
	Props     []CppProperty
}

type CppParsedHeader struct {
	Classes []CppClass
}
