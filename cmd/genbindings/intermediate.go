package main

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
