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
	Optional      bool
}

func (p CppParameter) QtClassType() bool {
	return p.ParameterType[0] == 'Q'
}

func (p CppParameter) QListOf() (CppParameter, bool) {
	if strings.HasPrefix(p.ParameterType, "QList<") && strings.HasSuffix(p.ParameterType, `>`) {
		return parseSingleTypeString(p.ParameterType[6 : len(p.ParameterType)-1]), true
	}

	return CppParameter{}, false
}

type CppProperty struct {
	PropertyName string
	PropertyType string
	Visibility   string
}

type CppMethod struct {
	MethodName         string
	OverrideMethodName string       // Present only if we changed the target
	ReturnType         CppParameter // Name not used
	Parameters         []CppParameter
}

func (nm CppMethod) SafeMethodName() string {
	// Operator-overload methods have names not representable in binding
	// languages. Replace more specific cases first
	replacer := strings.NewReplacer(

		`==`, `Equal`,
		`!=`, `NotEqual`,
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
	Abstract  bool
	Ctors     []CppMethod // only use the parameters
	Inherits  []string    // other class names
	Methods   []CppMethod
	Props     []CppProperty
}

type CppTypedef struct {
	Name    string
	Typedef string
}

type CppParsedHeader struct {
	Typedefs []CppTypedef
	Classes  []CppClass
}
