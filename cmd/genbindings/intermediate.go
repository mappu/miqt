package main

type nativeProperty struct {
	propertyName string
	propertyType string
	visibility   string
}

type nativeMethod struct {
	methodName string
	returnType string
	parameters []string
}

type nativeClass struct {
	className string
	extends   []string
	methods   []nativeMethod
	props     []nativeProperty
}

type parsedHeader struct {
	classes []nativeClass
}
