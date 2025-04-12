package qml

/*

#include "gen_qjsvalue.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QJSValue__SpecialValue int

const (
	QJSValue__NullValue      QJSValue__SpecialValue = 0
	QJSValue__UndefinedValue QJSValue__SpecialValue = 1
)

type QJSValue__ErrorType int

const (
	QJSValue__NoError        QJSValue__ErrorType = 0
	QJSValue__GenericError   QJSValue__ErrorType = 1
	QJSValue__EvalError      QJSValue__ErrorType = 2
	QJSValue__RangeError     QJSValue__ErrorType = 3
	QJSValue__ReferenceError QJSValue__ErrorType = 4
	QJSValue__SyntaxError    QJSValue__ErrorType = 5
	QJSValue__TypeError      QJSValue__ErrorType = 6
	QJSValue__URIError       QJSValue__ErrorType = 7
)

type QJSValue__ObjectConversionBehavior int

const (
	QJSValue__ConvertJSObjects QJSValue__ObjectConversionBehavior = 0
	QJSValue__RetainJSObjects  QJSValue__ObjectConversionBehavior = 1
)

type QJSValue struct {
	h *C.QJSValue
}

func (this *QJSValue) cPointer() *C.QJSValue {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJSValue) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJSValue constructs the type using only CGO pointers.
func newQJSValue(h *C.QJSValue) *QJSValue {
	if h == nil {
		return nil
	}

	return &QJSValue{h: h}
}

// UnsafeNewQJSValue constructs the type using only unsafe pointers.
func UnsafeNewQJSValue(h unsafe.Pointer) *QJSValue {
	return newQJSValue((*C.QJSValue)(h))
}

// NewQJSValue constructs a new QJSValue object.
func NewQJSValue() *QJSValue {

	return newQJSValue(C.QJSValue_new())
}

// NewQJSValue2 constructs a new QJSValue object.
func NewQJSValue2(other *QJSValue) *QJSValue {

	return newQJSValue(C.QJSValue_new2(other.cPointer()))
}

// NewQJSValue3 constructs a new QJSValue object.
func NewQJSValue3(value bool) *QJSValue {

	return newQJSValue(C.QJSValue_new3((C.bool)(value)))
}

// NewQJSValue4 constructs a new QJSValue object.
func NewQJSValue4(value int) *QJSValue {

	return newQJSValue(C.QJSValue_new4((C.int)(value)))
}

// NewQJSValue5 constructs a new QJSValue object.
func NewQJSValue5(value uint) *QJSValue {

	return newQJSValue(C.QJSValue_new5((C.uint)(value)))
}

// NewQJSValue6 constructs a new QJSValue object.
func NewQJSValue6(value float64) *QJSValue {

	return newQJSValue(C.QJSValue_new6((C.double)(value)))
}

// NewQJSValue7 constructs a new QJSValue object.
func NewQJSValue7(value string) *QJSValue {
	value_ms := C.struct_miqt_string{}
	value_ms.data = C.CString(value)
	value_ms.len = C.size_t(len(value))
	defer C.free(unsafe.Pointer(value_ms.data))

	return newQJSValue(C.QJSValue_new7(value_ms))
}

// NewQJSValue8 constructs a new QJSValue object.
func NewQJSValue8(str string) *QJSValue {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))

	return newQJSValue(C.QJSValue_new8(str_Cstring))
}

// NewQJSValue9 constructs a new QJSValue object.
func NewQJSValue9(value QJSValue__SpecialValue) *QJSValue {

	return newQJSValue(C.QJSValue_new9((C.int)(value)))
}

func (this *QJSValue) OperatorAssign(other *QJSValue) {
	C.QJSValue_operatorAssign(this.h, other.cPointer())
}

func (this *QJSValue) IsBool() bool {
	return (bool)(C.QJSValue_isBool(this.h))
}

func (this *QJSValue) IsNumber() bool {
	return (bool)(C.QJSValue_isNumber(this.h))
}

func (this *QJSValue) IsNull() bool {
	return (bool)(C.QJSValue_isNull(this.h))
}

func (this *QJSValue) IsString() bool {
	return (bool)(C.QJSValue_isString(this.h))
}

func (this *QJSValue) IsUndefined() bool {
	return (bool)(C.QJSValue_isUndefined(this.h))
}

func (this *QJSValue) IsVariant() bool {
	return (bool)(C.QJSValue_isVariant(this.h))
}

func (this *QJSValue) IsQObject() bool {
	return (bool)(C.QJSValue_isQObject(this.h))
}

func (this *QJSValue) IsQMetaObject() bool {
	return (bool)(C.QJSValue_isQMetaObject(this.h))
}

func (this *QJSValue) IsObject() bool {
	return (bool)(C.QJSValue_isObject(this.h))
}

func (this *QJSValue) IsDate() bool {
	return (bool)(C.QJSValue_isDate(this.h))
}

func (this *QJSValue) IsRegExp() bool {
	return (bool)(C.QJSValue_isRegExp(this.h))
}

func (this *QJSValue) IsArray() bool {
	return (bool)(C.QJSValue_isArray(this.h))
}

func (this *QJSValue) IsError() bool {
	return (bool)(C.QJSValue_isError(this.h))
}

func (this *QJSValue) IsUrl() bool {
	return (bool)(C.QJSValue_isUrl(this.h))
}

func (this *QJSValue) ToString() string {
	var _ms C.struct_miqt_string = C.QJSValue_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJSValue) ToNumber() float64 {
	return (float64)(C.QJSValue_toNumber(this.h))
}

func (this *QJSValue) ToInt() int {
	return (int)(C.QJSValue_toInt(this.h))
}

func (this *QJSValue) ToUInt() uint {
	return (uint)(C.QJSValue_toUInt(this.h))
}

func (this *QJSValue) ToBool() bool {
	return (bool)(C.QJSValue_toBool(this.h))
}

func (this *QJSValue) ToVariant() *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QJSValue_toVariant(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSValue) ToVariantWithBehavior(behavior QJSValue__ObjectConversionBehavior) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QJSValue_toVariantWithBehavior(this.h, (C.int)(behavior))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSValue) ToPrimitive() *QJSPrimitiveValue {
	_goptr := newQJSPrimitiveValue(C.QJSValue_toPrimitive(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSValue) ToQObject() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QJSValue_toQObject(this.h)))
}

func (this *QJSValue) ToQMetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QJSValue_toQMetaObject(this.h)))
}

func (this *QJSValue) ToDateTime() *qt6.QDateTime {
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QJSValue_toDateTime(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSValue) Equals(other *QJSValue) bool {
	return (bool)(C.QJSValue_equals(this.h, other.cPointer()))
}

func (this *QJSValue) StrictlyEquals(other *QJSValue) bool {
	return (bool)(C.QJSValue_strictlyEquals(this.h, other.cPointer()))
}

func (this *QJSValue) Prototype() *QJSValue {
	_goptr := newQJSValue(C.QJSValue_prototype(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSValue) SetPrototype(prototype *QJSValue) {
	C.QJSValue_setPrototype(this.h, prototype.cPointer())
}

func (this *QJSValue) Property(name string) *QJSValue {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := newQJSValue(C.QJSValue_property(this.h, name_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSValue) SetProperty(name string, value *QJSValue) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QJSValue_setProperty(this.h, name_ms, value.cPointer())
}

func (this *QJSValue) HasProperty(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QJSValue_hasProperty(this.h, name_ms))
}

func (this *QJSValue) HasOwnProperty(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QJSValue_hasOwnProperty(this.h, name_ms))
}

func (this *QJSValue) PropertyWithArrayIndex(arrayIndex uint) *QJSValue {
	_goptr := newQJSValue(C.QJSValue_propertyWithArrayIndex(this.h, (C.uint)(arrayIndex)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSValue) SetProperty2(arrayIndex uint, value *QJSValue) {
	C.QJSValue_setProperty2(this.h, (C.uint)(arrayIndex), value.cPointer())
}

func (this *QJSValue) DeleteProperty(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QJSValue_deleteProperty(this.h, name_ms))
}

func (this *QJSValue) IsCallable() bool {
	return (bool)(C.QJSValue_isCallable(this.h))
}

func (this *QJSValue) Call() *QJSValue {
	_goptr := newQJSValue(C.QJSValue_call(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSValue) CallWithInstance(instance *QJSValue) *QJSValue {
	_goptr := newQJSValue(C.QJSValue_callWithInstance(this.h, instance.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSValue) CallAsConstructor() *QJSValue {
	_goptr := newQJSValue(C.QJSValue_callAsConstructor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSValue) ErrorType() QJSValue__ErrorType {
	return (QJSValue__ErrorType)(C.QJSValue_errorType(this.h))
}

func (this *QJSValue) CallWithArgs(args []QJSValue) *QJSValue {
	args_CArray := (*[0xffff]*C.QJSValue)(C.malloc(C.size_t(8 * len(args))))
	defer C.free(unsafe.Pointer(args_CArray))
	for i := range args {
		args_CArray[i] = args[i].cPointer()
	}
	args_ma := C.struct_miqt_array{len: C.size_t(len(args)), data: unsafe.Pointer(args_CArray)}
	_goptr := newQJSValue(C.QJSValue_callWithArgs(this.h, args_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSValue) CallWithInstance2(instance *QJSValue, args []QJSValue) *QJSValue {
	args_CArray := (*[0xffff]*C.QJSValue)(C.malloc(C.size_t(8 * len(args))))
	defer C.free(unsafe.Pointer(args_CArray))
	for i := range args {
		args_CArray[i] = args[i].cPointer()
	}
	args_ma := C.struct_miqt_array{len: C.size_t(len(args)), data: unsafe.Pointer(args_CArray)}
	_goptr := newQJSValue(C.QJSValue_callWithInstance2(this.h, instance.cPointer(), args_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSValue) CallAsConstructorWithArgs(args []QJSValue) *QJSValue {
	args_CArray := (*[0xffff]*C.QJSValue)(C.malloc(C.size_t(8 * len(args))))
	defer C.free(unsafe.Pointer(args_CArray))
	for i := range args {
		args_CArray[i] = args[i].cPointer()
	}
	args_ma := C.struct_miqt_array{len: C.size_t(len(args)), data: unsafe.Pointer(args_CArray)}
	_goptr := newQJSValue(C.QJSValue_callAsConstructorWithArgs(this.h, args_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QJSValue) Delete() {
	C.QJSValue_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJSValue) GoGC() {
	runtime.SetFinalizer(this, func(this *QJSValue) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
