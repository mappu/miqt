package main

import (
	"strings"
)

// valueStructField is one data member of a Qt class projected as a plain Go
// struct. The order must match the private members of the Qt class.
type valueStructField struct {
	Name   string
	CType  string
	GoType string
}

// valueStructClasses are the Qt classes projected as plain Go structs instead
// of wrappers around a heap-allocated C++ object. They must own no resources and
// have a stable memory layout, because the bindings copy their bytes to and from
// the matching struct in libmiqt.h. miqt_to_cabi / miqt_from_cabi check the size
// at compile time. The fields are private, so only the size and alignment have
// to match the Qt class, not the individual members.
var valueStructClasses = map[string][]valueStructField{
	"QColor":      {{"cspec", "int", "int32"}, {"a1", "unsigned short", "uint16"}, {"a2", "unsigned short", "uint16"}, {"a3", "unsigned short", "uint16"}, {"a4", "unsigned short", "uint16"}, {"a5", "unsigned short", "uint16"}, {"pad", "unsigned short", "uint16"}},
	"QMargins":    {{"left", "int", "int32"}, {"top", "int", "int32"}, {"right", "int", "int32"}, {"bottom", "int", "int32"}},
	"QMarginsF":   {{"left", "double", "float64"}, {"top", "double", "float64"}, {"right", "double", "float64"}, {"bottom", "double", "float64"}},
	"QModelIndex": {{"r", "int", "int32"}, {"c", "int", "int32"}, {"i", "uintptr_t", "uintptr"}, {"m", "uintptr_t", "uintptr"}},
	"QPoint":      {{"xp", "int", "int32"}, {"yp", "int", "int32"}},
	"QPointF":     {{"xp", "double", "float64"}, {"yp", "double", "float64"}},
	"QRect":       {{"x1", "int", "int32"}, {"y1", "int", "int32"}, {"x2", "int", "int32"}, {"y2", "int", "int32"}},
	"QRectF":      {{"xp", "double", "float64"}, {"yp", "double", "float64"}, {"w", "double", "float64"}, {"h", "double", "float64"}},
	"QRgba64":     {{"rgba", "uint64_t", "uint64"}},
	"QSize":       {{"wd", "int", "int32"}, {"ht", "int", "int32"}},
	"QSizeF":      {{"wd", "double", "float64"}, {"ht", "double", "float64"}},
	"QVector3D":   {{"x", "float", "float32"}, {"y", "float", "float32"}, {"z", "float", "float32"}},
}

// isValueStructClass reports whether className is projected as a plain Go struct.
func isValueStructClass(className string) bool {
	_, ok := valueStructClasses[className]
	return ok
}

// valueStructCabiName is the C type carrying a value struct class by value.
func valueStructCabiName(className string) string {
	return "struct miqt_" + strings.ToLower(className)
}

// valueStructCgoName is the Cgo spelling of valueStructCabiName.
func valueStructCgoName(className string) string {
	return "C.struct_miqt_" + strings.ToLower(className)
}

// isValueStruct reports whether p crosses the CABI as a value struct: passed by
// value or const reference. Pointers and non-const references keep their
// identity, and are projected as a *QFoo aliasing the original memory.
func (p CppParameter) isValueStruct() bool {
	return isValueStructClass(p.ParameterType) && !p.Pointer && (!p.ByRef || p.Const)
}

// isValueStructSelfByValue reports whether method m of class c gets its receiver
// by value. Taking its address for a pointer receiver would make it escape to
// the Go heap, because Cgo pointer arguments always escape.
func isValueStructSelfByValue(c CppClass, m CppMethod) bool {
	return isValueStructClass(c.ClassName) && m.IsConst && !m.IsStatic
}

// emitMethodParametersCabi emits the CABI parameters of method m of class c,
// including the receiver.
func emitMethodParametersCabi(c CppClass, m CppMethod) string {
	if isValueStructSelfByValue(c, m) {
		params := emitParametersCabi(m, "")
		return valueStructCabiName(c.ClassName) + " self_cabi" + ifv(params != "", ", ", "") + params
	}
	return emitParametersCabi(m, ifv(m.IsConst, "const ", "")+cabiClassName(c.ClassName)+"*")
}

// emitValueStructSelf emits the C++ statements that turn a by-value receiver
// back into the usual self pointer.
func emitValueStructSelf(c CppClass, m CppMethod) string {
	if !isValueStructSelfByValue(c, m) {
		return ""
	}
	return "\tconst " + c.ClassName + " self_val = miqt_from_cabi<" + c.ClassName + ">(self_cabi);\n" +
		"\tconst " + c.ClassName + "* self = &self_val;\n"
}

// emitValueStructGoType emits the Go definition of a value struct class.
func emitValueStructGoType(c CppClass) string {
	goClassName := cabiClassName(c.ClassName)

	fields := ""
	for _, f := range valueStructClasses[c.ClassName] {
		fields += f.Name + " " + f.GoType + "\n"
	}

	return `
	// ` + goClassName + ` is a plain Go struct with the same memory layout as the
	// Qt class. The zero value is not always the same as the default constructor;
	// use New` + goClassName + `().
	type ` + goClassName + ` struct {
		` + fields + `}

	func (this *` + goClassName + `) cPointer() *C.` + goClassName + ` {
		return (*C.` + goClassName + `)(unsafe.Pointer(this))
	}

	func (this *` + goClassName + `) UnsafePointer() unsafe.Pointer {
		return unsafe.Pointer(this)
	}

	// new` + goClassName + ` views C++ memory as this type, without copying it.
	func new` + goClassName + `(h *C.` + goClassName + `) *` + goClassName + ` {
		return (*` + goClassName + `)(unsafe.Pointer(h))
	}

	// UnsafeNew` + goClassName + ` views C++ memory as this type, without copying it.
	func UnsafeNew` + goClassName + `(h unsafe.Pointer) *` + goClassName + ` {
		return (*` + goClassName + `)(h)
	}

	`
}
