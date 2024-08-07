package main

import (
	"strings"
)

type nativeParameter struct {
	name string
	typ  string
}

type nativeProperty struct {
	propertyName string
	propertyType string
	visibility   string
}

type nativeMethod struct {
	methodName string
	returnType string
	parameters []nativeParameter
}

func (nm nativeMethod) SafeMethodName() string {
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

	return replacer.Replace(nm.methodName)
}

type nativeClass struct {
	className string
	ctors     []nativeMethod // only use the parameters
	extends   []string
	methods   []nativeMethod
	props     []nativeProperty
}

type parsedHeader struct {
	classes []nativeClass
}
