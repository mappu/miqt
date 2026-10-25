package qml

/*

#include "gen_qjsmanagedvalue.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QJSManagedValue__Type int

const (
	QJSManagedValue__Undefined QJSManagedValue__Type = 0
	QJSManagedValue__Boolean   QJSManagedValue__Type = 1
	QJSManagedValue__Number    QJSManagedValue__Type = 2
	QJSManagedValue__String    QJSManagedValue__Type = 3
	QJSManagedValue__Object    QJSManagedValue__Type = 4
	QJSManagedValue__Symbol    QJSManagedValue__Type = 5
	QJSManagedValue__Function  QJSManagedValue__Type = 6
)

type QJSManagedValue struct {
	h  *C.QJSManagedValue
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QJSManagedValue) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QJSManagedValue) cPointer() *C.QJSManagedValue {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJSManagedValue) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJSManagedValue constructs the type using only CGO pointers.
func newQJSManagedValue(h *C.QJSManagedValue) *QJSManagedValue {
	if h == nil {
		return nil
	}

	return &QJSManagedValue{h: h}
}

// UnsafeNewQJSManagedValue constructs the type using only unsafe pointers.
func UnsafeNewQJSManagedValue(h unsafe.Pointer) *QJSManagedValue {
	return newQJSManagedValue((*C.QJSManagedValue)(h))
}

// NewQJSManagedValue constructs a new QJSManagedValue object.
func NewQJSManagedValue() *QJSManagedValue {

	return newQJSManagedValue(C.QJSManagedValue_new())
}

// NewQJSManagedValue2 constructs a new QJSManagedValue object.
func NewQJSManagedValue2(value QJSValue, engine *QJSEngine) *QJSManagedValue {
	defer runtime.KeepAlive(value)
	defer runtime.KeepAlive(engine)

	return newQJSManagedValue(C.QJSManagedValue_new2(value.cPointer(), engine.cPointer()))
}

// NewQJSManagedValue3 constructs a new QJSManagedValue object.
func NewQJSManagedValue3(value *QJSPrimitiveValue, engine *QJSEngine) *QJSManagedValue {
	defer runtime.KeepAlive(value)
	defer runtime.KeepAlive(engine)

	return newQJSManagedValue(C.QJSManagedValue_new3(value.cPointer(), engine.cPointer()))
}

// NewQJSManagedValue4 constructs a new QJSManagedValue object.
func NewQJSManagedValue4(variant *qt6.QVariant, engine *QJSEngine) *QJSManagedValue {
	defer runtime.KeepAlive(variant)
	defer runtime.KeepAlive(engine)

	return newQJSManagedValue(C.QJSManagedValue_new4((*C.QVariant)(variant.UnsafePointer()), engine.cPointer()))
}

// NewQJSManagedValue5 constructs a new QJSManagedValue object.
func NewQJSManagedValue5(stringVal string, engine *QJSEngine) *QJSManagedValue {
	defer runtime.KeepAlive(engine)
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))

	return newQJSManagedValue(C.QJSManagedValue_new5(stringVal_ms, engine.cPointer()))
}

func (this *QJSManagedValue) Equals(other *QJSManagedValue) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QJSManagedValue_equals(this.h, other.cPointer()))
}

func (this *QJSManagedValue) StrictlyEquals(other *QJSManagedValue) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QJSManagedValue_strictlyEquals(this.h, other.cPointer()))
}

func (this *QJSManagedValue) Engine() *QJSEngine {
	defer runtime.KeepAlive(this)
	return newQJSEngine(C.QJSManagedValue_engine(this.h))
}

func (this *QJSManagedValue) Prototype() *QJSManagedValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJSManagedValue(C.QJSManagedValue_prototype(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) SetPrototype(prototype *QJSManagedValue) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(prototype)
	C.QJSManagedValue_setPrototype(this.h, prototype.cPointer())
}

func (this *QJSManagedValue) Type() QJSManagedValue__Type {
	defer runtime.KeepAlive(this)
	return (QJSManagedValue__Type)(C.QJSManagedValue_type(this.h))
}

func (this *QJSManagedValue) IsUndefined() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isUndefined(this.h))
}

func (this *QJSManagedValue) IsBoolean() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isBoolean(this.h))
}

func (this *QJSManagedValue) IsNumber() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isNumber(this.h))
}

func (this *QJSManagedValue) IsString() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isString(this.h))
}

func (this *QJSManagedValue) IsObject() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isObject(this.h))
}

func (this *QJSManagedValue) IsSymbol() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isSymbol(this.h))
}

func (this *QJSManagedValue) IsFunction() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isFunction(this.h))
}

func (this *QJSManagedValue) IsInteger() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isInteger(this.h))
}

func (this *QJSManagedValue) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isNull(this.h))
}

func (this *QJSManagedValue) IsRegularExpression() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isRegularExpression(this.h))
}

func (this *QJSManagedValue) IsArray() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isArray(this.h))
}

func (this *QJSManagedValue) IsUrl() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isUrl(this.h))
}

func (this *QJSManagedValue) IsVariant() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isVariant(this.h))
}

func (this *QJSManagedValue) IsQObject() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isQObject(this.h))
}

func (this *QJSManagedValue) IsQMetaObject() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isQMetaObject(this.h))
}

func (this *QJSManagedValue) IsDate() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isDate(this.h))
}

func (this *QJSManagedValue) IsError() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isError(this.h))
}

func (this *QJSManagedValue) IsJsMetaType() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_isJsMetaType(this.h))
}

func (this *QJSManagedValue) ToString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QJSManagedValue_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJSManagedValue) ToNumber() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QJSManagedValue_toNumber(this.h))
}

func (this *QJSManagedValue) ToBoolean() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_toBoolean(this.h))
}

func (this *QJSManagedValue) ToPrimitive() *QJSPrimitiveValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJSPrimitiveValue(C.QJSManagedValue_toPrimitive(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) ToJSValue() *QJSValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJSValue(C.QJSManagedValue_toJSValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) ToVariant() *qt6.QVariant {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QJSManagedValue_toVariant(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) ToInteger() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QJSManagedValue_toInteger(this.h))
}

func (this *QJSManagedValue) ToRegularExpression() *qt6.QRegularExpression {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQRegularExpression(unsafe.Pointer(C.QJSManagedValue_toRegularExpression(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) ToUrl() *qt6.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QJSManagedValue_toUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) ToQObject() *qt6.QObject {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QJSManagedValue_toQObject(this.h)))
}

func (this *QJSManagedValue) ToQMetaObject() *qt6.QMetaObject {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QJSManagedValue_toQMetaObject(this.h)))
}

func (this *QJSManagedValue) ToDateTime() *qt6.QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QJSManagedValue_toDateTime(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) HasProperty(name string) bool {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QJSManagedValue_hasProperty(this.h, name_ms))
}

func (this *QJSManagedValue) HasOwnProperty(name string) bool {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QJSManagedValue_hasOwnProperty(this.h, name_ms))
}

func (this *QJSManagedValue) Property(name string) *QJSValue {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := newQJSValue(C.QJSManagedValue_property(this.h, name_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) SetProperty(name string, value *QJSValue) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QJSManagedValue_setProperty(this.h, name_ms, value.cPointer())
}

func (this *QJSManagedValue) DeleteProperty(name string) bool {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QJSManagedValue_deleteProperty(this.h, name_ms))
}

func (this *QJSManagedValue) HasPropertyWithArrayIndex(arrayIndex uint) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_hasPropertyWithArrayIndex(this.h, (C.uint)(arrayIndex)))
}

func (this *QJSManagedValue) HasOwnPropertyWithArrayIndex(arrayIndex uint) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_hasOwnPropertyWithArrayIndex(this.h, (C.uint)(arrayIndex)))
}

func (this *QJSManagedValue) PropertyWithArrayIndex(arrayIndex uint) *QJSValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJSValue(C.QJSManagedValue_propertyWithArrayIndex(this.h, (C.uint)(arrayIndex)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) SetProperty2(arrayIndex uint, value *QJSValue) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	C.QJSManagedValue_setProperty2(this.h, (C.uint)(arrayIndex), value.cPointer())
}

func (this *QJSManagedValue) DeletePropertyWithArrayIndex(arrayIndex uint) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSManagedValue_deletePropertyWithArrayIndex(this.h, (C.uint)(arrayIndex)))
}

func (this *QJSManagedValue) Call() *QJSValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJSValue(C.QJSManagedValue_call(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) CallWithInstance(instance *QJSValue) *QJSValue {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(instance)
	_goptr := newQJSValue(C.QJSManagedValue_callWithInstance(this.h, instance.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) CallAsConstructor() *QJSValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJSValue(C.QJSManagedValue_callAsConstructor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) JsMetaType() *QJSManagedValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJSManagedValue(C.QJSManagedValue_jsMetaType(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) JsMetaMembers() []string {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QJSManagedValue_jsMetaMembers(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QJSManagedValue) JsMetaInstantiate() *QJSManagedValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJSManagedValue(C.QJSManagedValue_jsMetaInstantiate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) CallWithArguments(arguments []QJSValue) *QJSValue {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(arguments)
	arguments_CArray_ptr := (**C.QJSValue)(C.malloc(C.size_t(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray_ptr))
	arguments_CArray := unsafe.Slice(arguments_CArray_ptr, len(arguments))
	for i := range arguments {
		arguments_CArray[i] = arguments[i].cPointer()
	}
	arguments_ma := C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray_ptr)}
	_goptr := newQJSValue(C.QJSManagedValue_callWithArguments(this.h, arguments_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) CallWithInstance2(instance *QJSValue, arguments []QJSValue) *QJSValue {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(instance)
	defer runtime.KeepAlive(arguments)
	arguments_CArray_ptr := (**C.QJSValue)(C.malloc(C.size_t(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray_ptr))
	arguments_CArray := unsafe.Slice(arguments_CArray_ptr, len(arguments))
	for i := range arguments {
		arguments_CArray[i] = arguments[i].cPointer()
	}
	arguments_ma := C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray_ptr)}
	_goptr := newQJSValue(C.QJSManagedValue_callWithInstance2(this.h, instance.cPointer(), arguments_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) CallAsConstructorWithArguments(arguments []QJSValue) *QJSValue {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(arguments)
	arguments_CArray_ptr := (**C.QJSValue)(C.malloc(C.size_t(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray_ptr))
	arguments_CArray := unsafe.Slice(arguments_CArray_ptr, len(arguments))
	for i := range arguments {
		arguments_CArray[i] = arguments[i].cPointer()
	}
	arguments_ma := C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray_ptr)}
	_goptr := newQJSValue(C.QJSManagedValue_callAsConstructorWithArguments(this.h, arguments_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSManagedValue) JsMetaInstantiateWithValues(values []QJSValue) *QJSManagedValue {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(values)
	values_CArray_ptr := (**C.QJSValue)(C.malloc(C.size_t(8 * len(values))))
	defer C.free(unsafe.Pointer(values_CArray_ptr))
	values_CArray := unsafe.Slice(values_CArray_ptr, len(values))
	for i := range values {
		values_CArray[i] = values[i].cPointer()
	}
	values_ma := C.struct_miqt_array{len: C.size_t(len(values)), data: unsafe.Pointer(values_CArray_ptr)}
	_goptr := newQJSManagedValue(C.QJSManagedValue_jsMetaInstantiateWithValues(this.h, values_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QJSManagedValue) Delete() {
	C.QJSManagedValue_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QJSManagedValue) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QJSManagedValue_delete((*C.QJSManagedValue)(gc[0]))
	})
	this.miqtSetGC(gc)
}
