package script

/*

#include "gen_qscriptvalue.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QScriptValue__ResolveFlag int

const (
	QScriptValue__ResolveLocal     QScriptValue__ResolveFlag = 0
	QScriptValue__ResolvePrototype QScriptValue__ResolveFlag = 1
	QScriptValue__ResolveScope     QScriptValue__ResolveFlag = 2
	QScriptValue__ResolveFull      QScriptValue__ResolveFlag = 3
)

type QScriptValue__PropertyFlag int

const (
	QScriptValue__ReadOnly          QScriptValue__PropertyFlag = 1
	QScriptValue__Undeletable       QScriptValue__PropertyFlag = 2
	QScriptValue__SkipInEnumeration QScriptValue__PropertyFlag = 4
	QScriptValue__PropertyGetter    QScriptValue__PropertyFlag = 8
	QScriptValue__PropertySetter    QScriptValue__PropertyFlag = 16
	QScriptValue__QObjectMember     QScriptValue__PropertyFlag = 32
	QScriptValue__KeepExistingFlags QScriptValue__PropertyFlag = 2048
)

type QScriptValue__SpecialValue int

const (
	QScriptValue__NullValue      QScriptValue__SpecialValue = 0
	QScriptValue__UndefinedValue QScriptValue__SpecialValue = 1
)

type QScriptValue struct {
	h *C.QScriptValue
}

func (this *QScriptValue) cPointer() *C.QScriptValue {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScriptValue) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScriptValue constructs the type using only CGO pointers.
func newQScriptValue(h *C.QScriptValue) *QScriptValue {
	if h == nil {
		return nil
	}

	return &QScriptValue{h: h}
}

// UnsafeNewQScriptValue constructs the type using only unsafe pointers.
func UnsafeNewQScriptValue(h unsafe.Pointer) *QScriptValue {
	return newQScriptValue((*C.QScriptValue)(h))
}

// NewQScriptValue constructs a new QScriptValue object.
func NewQScriptValue() *QScriptValue {

	return newQScriptValue(C.QScriptValue_new())
}

// NewQScriptValue2 constructs a new QScriptValue object.
func NewQScriptValue2(other *QScriptValue) *QScriptValue {

	return newQScriptValue(C.QScriptValue_new2(other.cPointer()))
}

// NewQScriptValue3 constructs a new QScriptValue object.
func NewQScriptValue3(engine *QScriptEngine, val QScriptValue__SpecialValue) *QScriptValue {

	return newQScriptValue(C.QScriptValue_new3(engine.cPointer(), (C.int)(val)))
}

// NewQScriptValue4 constructs a new QScriptValue object.
func NewQScriptValue4(engine *QScriptEngine, val bool) *QScriptValue {

	return newQScriptValue(C.QScriptValue_new4(engine.cPointer(), (C.bool)(val)))
}

// NewQScriptValue5 constructs a new QScriptValue object.
func NewQScriptValue5(engine *QScriptEngine, val int) *QScriptValue {

	return newQScriptValue(C.QScriptValue_new5(engine.cPointer(), (C.int)(val)))
}

// NewQScriptValue6 constructs a new QScriptValue object.
func NewQScriptValue6(engine *QScriptEngine, val uint) *QScriptValue {

	return newQScriptValue(C.QScriptValue_new6(engine.cPointer(), (C.uint)(val)))
}

// NewQScriptValue7 constructs a new QScriptValue object.
func NewQScriptValue7(engine *QScriptEngine, val float64) *QScriptValue {

	return newQScriptValue(C.QScriptValue_new7(engine.cPointer(), (C.double)(val)))
}

// NewQScriptValue8 constructs a new QScriptValue object.
func NewQScriptValue8(engine *QScriptEngine, val string) *QScriptValue {
	val_ms := C.struct_miqt_string{}
	val_ms.data = C.CString(val)
	val_ms.len = C.size_t(len(val))
	defer C.free(unsafe.Pointer(val_ms.data))

	return newQScriptValue(C.QScriptValue_new8(engine.cPointer(), val_ms))
}

// NewQScriptValue9 constructs a new QScriptValue object.
func NewQScriptValue9(engine *QScriptEngine, val string) *QScriptValue {
	val_Cstring := C.CString(val)
	defer C.free(unsafe.Pointer(val_Cstring))

	return newQScriptValue(C.QScriptValue_new9(engine.cPointer(), val_Cstring))
}

// NewQScriptValue10 constructs a new QScriptValue object.
func NewQScriptValue10(value QScriptValue__SpecialValue) *QScriptValue {

	return newQScriptValue(C.QScriptValue_new10((C.int)(value)))
}

// NewQScriptValue11 constructs a new QScriptValue object.
func NewQScriptValue11(value bool) *QScriptValue {

	return newQScriptValue(C.QScriptValue_new11((C.bool)(value)))
}

// NewQScriptValue12 constructs a new QScriptValue object.
func NewQScriptValue12(value int) *QScriptValue {

	return newQScriptValue(C.QScriptValue_new12((C.int)(value)))
}

// NewQScriptValue13 constructs a new QScriptValue object.
func NewQScriptValue13(value uint) *QScriptValue {

	return newQScriptValue(C.QScriptValue_new13((C.uint)(value)))
}

// NewQScriptValue14 constructs a new QScriptValue object.
func NewQScriptValue14(value float64) *QScriptValue {

	return newQScriptValue(C.QScriptValue_new14((C.double)(value)))
}

// NewQScriptValue15 constructs a new QScriptValue object.
func NewQScriptValue15(value string) *QScriptValue {
	value_ms := C.struct_miqt_string{}
	value_ms.data = C.CString(value)
	value_ms.len = C.size_t(len(value))
	defer C.free(unsafe.Pointer(value_ms.data))

	return newQScriptValue(C.QScriptValue_new15(value_ms))
}

// NewQScriptValue16 constructs a new QScriptValue object.
func NewQScriptValue16(value string) *QScriptValue {
	value_Cstring := C.CString(value)
	defer C.free(unsafe.Pointer(value_Cstring))

	return newQScriptValue(C.QScriptValue_new16(value_Cstring))
}

func (this *QScriptValue) OperatorAssign(other *QScriptValue) {
	C.QScriptValue_operatorAssign(this.h, other.cPointer())
}

func (this *QScriptValue) Engine() *QScriptEngine {
	return newQScriptEngine(C.QScriptValue_engine(this.h))
}

func (this *QScriptValue) IsValid() bool {
	return (bool)(C.QScriptValue_isValid(this.h))
}

func (this *QScriptValue) IsBool() bool {
	return (bool)(C.QScriptValue_isBool(this.h))
}

func (this *QScriptValue) IsBoolean() bool {
	return (bool)(C.QScriptValue_isBoolean(this.h))
}

func (this *QScriptValue) IsNumber() bool {
	return (bool)(C.QScriptValue_isNumber(this.h))
}

func (this *QScriptValue) IsFunction() bool {
	return (bool)(C.QScriptValue_isFunction(this.h))
}

func (this *QScriptValue) IsNull() bool {
	return (bool)(C.QScriptValue_isNull(this.h))
}

func (this *QScriptValue) IsString() bool {
	return (bool)(C.QScriptValue_isString(this.h))
}

func (this *QScriptValue) IsUndefined() bool {
	return (bool)(C.QScriptValue_isUndefined(this.h))
}

func (this *QScriptValue) IsVariant() bool {
	return (bool)(C.QScriptValue_isVariant(this.h))
}

func (this *QScriptValue) IsQObject() bool {
	return (bool)(C.QScriptValue_isQObject(this.h))
}

func (this *QScriptValue) IsQMetaObject() bool {
	return (bool)(C.QScriptValue_isQMetaObject(this.h))
}

func (this *QScriptValue) IsObject() bool {
	return (bool)(C.QScriptValue_isObject(this.h))
}

func (this *QScriptValue) IsDate() bool {
	return (bool)(C.QScriptValue_isDate(this.h))
}

func (this *QScriptValue) IsRegExp() bool {
	return (bool)(C.QScriptValue_isRegExp(this.h))
}

func (this *QScriptValue) IsArray() bool {
	return (bool)(C.QScriptValue_isArray(this.h))
}

func (this *QScriptValue) IsError() bool {
	return (bool)(C.QScriptValue_isError(this.h))
}

func (this *QScriptValue) ToString() string {
	var _ms C.struct_miqt_string = C.QScriptValue_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScriptValue) ToNumber() float64 {
	return (float64)(C.QScriptValue_toNumber(this.h))
}

func (this *QScriptValue) ToBool() bool {
	return (bool)(C.QScriptValue_toBool(this.h))
}

func (this *QScriptValue) ToBoolean() bool {
	return (bool)(C.QScriptValue_toBoolean(this.h))
}

func (this *QScriptValue) ToInteger() float64 {
	return (float64)(C.QScriptValue_toInteger(this.h))
}

func (this *QScriptValue) ToInt32() int {
	return (int)(C.QScriptValue_toInt32(this.h))
}

func (this *QScriptValue) ToUInt32() uint {
	return (uint)(C.QScriptValue_toUInt32(this.h))
}

func (this *QScriptValue) ToUInt16() uint16 {
	return (uint16)(C.QScriptValue_toUInt16(this.h))
}

func (this *QScriptValue) ToVariant() *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QScriptValue_toVariant(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) ToQObject() *qt.QObject {
	return qt.UnsafeNewQObject(unsafe.Pointer(C.QScriptValue_toQObject(this.h)))
}

func (this *QScriptValue) ToQMetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QScriptValue_toQMetaObject(this.h)))
}

func (this *QScriptValue) ToObject() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptValue_toObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) ToDateTime() *qt.QDateTime {
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QScriptValue_toDateTime(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) ToRegExp() *qt.QRegExp {
	_goptr := qt.UnsafeNewQRegExp(unsafe.Pointer(C.QScriptValue_toRegExp(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) InstanceOf(other *QScriptValue) bool {
	return (bool)(C.QScriptValue_instanceOf(this.h, other.cPointer()))
}

func (this *QScriptValue) LessThan(other *QScriptValue) bool {
	return (bool)(C.QScriptValue_lessThan(this.h, other.cPointer()))
}

func (this *QScriptValue) Equals(other *QScriptValue) bool {
	return (bool)(C.QScriptValue_equals(this.h, other.cPointer()))
}

func (this *QScriptValue) StrictlyEquals(other *QScriptValue) bool {
	return (bool)(C.QScriptValue_strictlyEquals(this.h, other.cPointer()))
}

func (this *QScriptValue) Prototype() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptValue_prototype(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) SetPrototype(prototype *QScriptValue) {
	C.QScriptValue_setPrototype(this.h, prototype.cPointer())
}

func (this *QScriptValue) Scope() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptValue_scope(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) SetScope(scope *QScriptValue) {
	C.QScriptValue_setScope(this.h, scope.cPointer())
}

func (this *QScriptValue) Property(name string) *QScriptValue {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := newQScriptValue(C.QScriptValue_property(this.h, name_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) SetProperty(name string, value *QScriptValue) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QScriptValue_setProperty(this.h, name_ms, value.cPointer())
}

func (this *QScriptValue) PropertyWithArrayIndex(arrayIndex uint) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptValue_propertyWithArrayIndex(this.h, (C.uint)(arrayIndex)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) SetProperty2(arrayIndex uint, value *QScriptValue) {
	C.QScriptValue_setProperty2(this.h, (C.uint)(arrayIndex), value.cPointer())
}

func (this *QScriptValue) PropertyWithName(name *QScriptString) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptValue_propertyWithName(this.h, name.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) SetProperty3(name *QScriptString, value *QScriptValue) {
	C.QScriptValue_setProperty3(this.h, name.cPointer(), value.cPointer())
}

func (this *QScriptValue) PropertyFlags(name string) QScriptValue__PropertyFlag {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (QScriptValue__PropertyFlag)(C.QScriptValue_propertyFlags(this.h, name_ms))
}

func (this *QScriptValue) PropertyFlagsWithName(name *QScriptString) QScriptValue__PropertyFlag {
	return (QScriptValue__PropertyFlag)(C.QScriptValue_propertyFlagsWithName(this.h, name.cPointer()))
}

func (this *QScriptValue) Call() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptValue_call(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) Call2(thisObject *QScriptValue, arguments *QScriptValue) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptValue_call2(this.h, thisObject.cPointer(), arguments.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) Construct() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptValue_construct(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) ConstructWithArguments(arguments *QScriptValue) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptValue_constructWithArguments(this.h, arguments.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) Data() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptValue_data(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) SetData(data *QScriptValue) {
	C.QScriptValue_setData(this.h, data.cPointer())
}

func (this *QScriptValue) ScriptClass() *QScriptClass {
	return newQScriptClass(C.QScriptValue_scriptClass(this.h))
}

func (this *QScriptValue) SetScriptClass(scriptClass *QScriptClass) {
	C.QScriptValue_setScriptClass(this.h, scriptClass.cPointer())
}

func (this *QScriptValue) ObjectId() int64 {
	return (int64)(C.QScriptValue_objectId(this.h))
}

func (this *QScriptValue) Property2(name string, mode *QScriptValue__ResolveFlag) *QScriptValue {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := newQScriptValue(C.QScriptValue_property2(this.h, name_ms, (*C.int)(unsafe.Pointer(mode))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) SetProperty4(name string, value *QScriptValue, flags *QScriptValue__PropertyFlag) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QScriptValue_setProperty4(this.h, name_ms, value.cPointer(), (*C.int)(unsafe.Pointer(flags)))
}

func (this *QScriptValue) Property3(arrayIndex uint, mode *QScriptValue__ResolveFlag) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptValue_property3(this.h, (C.uint)(arrayIndex), (*C.int)(unsafe.Pointer(mode))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) SetProperty5(arrayIndex uint, value *QScriptValue, flags *QScriptValue__PropertyFlag) {
	C.QScriptValue_setProperty5(this.h, (C.uint)(arrayIndex), value.cPointer(), (*C.int)(unsafe.Pointer(flags)))
}

func (this *QScriptValue) Property4(name *QScriptString, mode *QScriptValue__ResolveFlag) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptValue_property4(this.h, name.cPointer(), (*C.int)(unsafe.Pointer(mode))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) SetProperty6(name *QScriptString, value *QScriptValue, flags *QScriptValue__PropertyFlag) {
	C.QScriptValue_setProperty6(this.h, name.cPointer(), value.cPointer(), (*C.int)(unsafe.Pointer(flags)))
}

func (this *QScriptValue) PropertyFlags2(name string, mode *QScriptValue__ResolveFlag) QScriptValue__PropertyFlag {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (QScriptValue__PropertyFlag)(C.QScriptValue_propertyFlags2(this.h, name_ms, (*C.int)(unsafe.Pointer(mode))))
}

func (this *QScriptValue) PropertyFlags3(name *QScriptString, mode *QScriptValue__ResolveFlag) QScriptValue__PropertyFlag {
	return (QScriptValue__PropertyFlag)(C.QScriptValue_propertyFlags3(this.h, name.cPointer(), (*C.int)(unsafe.Pointer(mode))))
}

func (this *QScriptValue) CallWithThisObject(thisObject *QScriptValue) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptValue_callWithThisObject(this.h, thisObject.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) Call3(thisObject *QScriptValue, args []QScriptValue) *QScriptValue {
	args_CArray := (*[0xffff]*C.QScriptValue)(C.malloc(C.size_t(8 * len(args))))
	defer C.free(unsafe.Pointer(args_CArray))
	for i := range args {
		args_CArray[i] = args[i].cPointer()
	}
	args_ma := C.struct_miqt_array{len: C.size_t(len(args)), data: unsafe.Pointer(args_CArray)}
	_goptr := newQScriptValue(C.QScriptValue_call3(this.h, thisObject.cPointer(), args_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValue) ConstructWithArgs(args []QScriptValue) *QScriptValue {
	args_CArray := (*[0xffff]*C.QScriptValue)(C.malloc(C.size_t(8 * len(args))))
	defer C.free(unsafe.Pointer(args_CArray))
	for i := range args {
		args_CArray[i] = args[i].cPointer()
	}
	args_ma := C.struct_miqt_array{len: C.size_t(len(args)), data: unsafe.Pointer(args_CArray)}
	_goptr := newQScriptValue(C.QScriptValue_constructWithArgs(this.h, args_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QScriptValue) Delete() {
	C.QScriptValue_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScriptValue) GoGC() {
	runtime.SetFinalizer(this, func(this *QScriptValue) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
