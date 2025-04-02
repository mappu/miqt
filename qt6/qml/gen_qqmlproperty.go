package qml

/*

#include "gen_qqmlproperty.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QQmlProperty__PropertyTypeCategory int

const (
	QQmlProperty__InvalidCategory QQmlProperty__PropertyTypeCategory = 0
	QQmlProperty__List            QQmlProperty__PropertyTypeCategory = 1
	QQmlProperty__Object          QQmlProperty__PropertyTypeCategory = 2
	QQmlProperty__Normal          QQmlProperty__PropertyTypeCategory = 3
)

type QQmlProperty__Type int

const (
	QQmlProperty__Invalid        QQmlProperty__Type = 0
	QQmlProperty__Property       QQmlProperty__Type = 1
	QQmlProperty__SignalProperty QQmlProperty__Type = 2
)

type QQmlProperty struct {
	h *C.QQmlProperty
}

func (this *QQmlProperty) cPointer() *C.QQmlProperty {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlProperty) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlProperty constructs the type using only CGO pointers.
func newQQmlProperty(h *C.QQmlProperty) *QQmlProperty {
	if h == nil {
		return nil
	}

	return &QQmlProperty{h: h}
}

// UnsafeNewQQmlProperty constructs the type using only unsafe pointers.
func UnsafeNewQQmlProperty(h unsafe.Pointer) *QQmlProperty {
	return newQQmlProperty((*C.QQmlProperty)(h))
}

// NewQQmlProperty constructs a new QQmlProperty object.
func NewQQmlProperty() *QQmlProperty {

	return newQQmlProperty(C.QQmlProperty_new())
}

// NewQQmlProperty2 constructs a new QQmlProperty object.
func NewQQmlProperty2(param1 *qt6.QObject) *QQmlProperty {

	return newQQmlProperty(C.QQmlProperty_new2((*C.QObject)(param1.UnsafePointer())))
}

// NewQQmlProperty3 constructs a new QQmlProperty object.
func NewQQmlProperty3(param1 *qt6.QObject, param2 *QQmlContext) *QQmlProperty {

	return newQQmlProperty(C.QQmlProperty_new3((*C.QObject)(param1.UnsafePointer()), param2.cPointer()))
}

// NewQQmlProperty4 constructs a new QQmlProperty object.
func NewQQmlProperty4(param1 *qt6.QObject, param2 *QQmlEngine) *QQmlProperty {

	return newQQmlProperty(C.QQmlProperty_new4((*C.QObject)(param1.UnsafePointer()), param2.cPointer()))
}

// NewQQmlProperty5 constructs a new QQmlProperty object.
func NewQQmlProperty5(param1 *qt6.QObject, param2 string) *QQmlProperty {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))

	return newQQmlProperty(C.QQmlProperty_new5((*C.QObject)(param1.UnsafePointer()), param2_ms))
}

// NewQQmlProperty6 constructs a new QQmlProperty object.
func NewQQmlProperty6(param1 *qt6.QObject, param2 string, param3 *QQmlContext) *QQmlProperty {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))

	return newQQmlProperty(C.QQmlProperty_new6((*C.QObject)(param1.UnsafePointer()), param2_ms, param3.cPointer()))
}

// NewQQmlProperty7 constructs a new QQmlProperty object.
func NewQQmlProperty7(param1 *qt6.QObject, param2 string, param3 *QQmlEngine) *QQmlProperty {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))

	return newQQmlProperty(C.QQmlProperty_new7((*C.QObject)(param1.UnsafePointer()), param2_ms, param3.cPointer()))
}

// NewQQmlProperty8 constructs a new QQmlProperty object.
func NewQQmlProperty8(param1 *QQmlProperty) *QQmlProperty {

	return newQQmlProperty(C.QQmlProperty_new8(param1.cPointer()))
}

func (this *QQmlProperty) OperatorAssign(param1 *QQmlProperty) {
	C.QQmlProperty_operatorAssign(this.h, param1.cPointer())
}

func (this *QQmlProperty) Swap(other *QQmlProperty) {
	C.QQmlProperty_swap(this.h, other.cPointer())
}

func (this *QQmlProperty) OperatorEqual(param1 *QQmlProperty) bool {
	return (bool)(C.QQmlProperty_operatorEqual(this.h, param1.cPointer()))
}

func (this *QQmlProperty) Type() QQmlProperty__Type {
	return (QQmlProperty__Type)(C.QQmlProperty_type(this.h))
}

func (this *QQmlProperty) IsValid() bool {
	return (bool)(C.QQmlProperty_isValid(this.h))
}

func (this *QQmlProperty) IsProperty() bool {
	return (bool)(C.QQmlProperty_isProperty(this.h))
}

func (this *QQmlProperty) IsSignalProperty() bool {
	return (bool)(C.QQmlProperty_isSignalProperty(this.h))
}

func (this *QQmlProperty) PropertyType() int {
	return (int)(C.QQmlProperty_propertyType(this.h))
}

func (this *QQmlProperty) PropertyMetaType() *qt6.QMetaType {
	_goptr := qt6.UnsafeNewQMetaType(unsafe.Pointer(C.QQmlProperty_propertyMetaType(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlProperty) PropertyTypeCategory() QQmlProperty__PropertyTypeCategory {
	return (QQmlProperty__PropertyTypeCategory)(C.QQmlProperty_propertyTypeCategory(this.h))
}

func (this *QQmlProperty) PropertyTypeName() string {
	_ret := C.QQmlProperty_propertyTypeName(this.h)
	return C.GoString(_ret)
}

func (this *QQmlProperty) Name() string {
	var _ms C.struct_miqt_string = C.QQmlProperty_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlProperty) Read() *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QQmlProperty_read(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QQmlProperty_Read2(param1 *qt6.QObject, param2 string) *qt6.QVariant {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QQmlProperty_read2((*C.QObject)(param1.UnsafePointer()), param2_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QQmlProperty_Read3(param1 *qt6.QObject, param2 string, param3 *QQmlContext) *qt6.QVariant {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QQmlProperty_read3((*C.QObject)(param1.UnsafePointer()), param2_ms, param3.cPointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QQmlProperty_Read4(param1 *qt6.QObject, param2 string, param3 *QQmlEngine) *qt6.QVariant {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QQmlProperty_read4((*C.QObject)(param1.UnsafePointer()), param2_ms, param3.cPointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlProperty) Write(param1 *qt6.QVariant) bool {
	return (bool)(C.QQmlProperty_write(this.h, (*C.QVariant)(param1.UnsafePointer())))
}

func QQmlProperty_Write2(param1 *qt6.QObject, param2 string, param3 *qt6.QVariant) bool {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	return (bool)(C.QQmlProperty_write2((*C.QObject)(param1.UnsafePointer()), param2_ms, (*C.QVariant)(param3.UnsafePointer())))
}

func QQmlProperty_Write3(param1 *qt6.QObject, param2 string, param3 *qt6.QVariant, param4 *QQmlContext) bool {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	return (bool)(C.QQmlProperty_write3((*C.QObject)(param1.UnsafePointer()), param2_ms, (*C.QVariant)(param3.UnsafePointer()), param4.cPointer()))
}

func QQmlProperty_Write4(param1 *qt6.QObject, param2 string, param3 *qt6.QVariant, param4 *QQmlEngine) bool {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	return (bool)(C.QQmlProperty_write4((*C.QObject)(param1.UnsafePointer()), param2_ms, (*C.QVariant)(param3.UnsafePointer()), param4.cPointer()))
}

func (this *QQmlProperty) Reset() bool {
	return (bool)(C.QQmlProperty_reset(this.h))
}

func (this *QQmlProperty) HasNotifySignal() bool {
	return (bool)(C.QQmlProperty_hasNotifySignal(this.h))
}

func (this *QQmlProperty) NeedsNotifySignal() bool {
	return (bool)(C.QQmlProperty_needsNotifySignal(this.h))
}

func (this *QQmlProperty) ConnectNotifySignal(dest *qt6.QObject, slot string) bool {
	slot_Cstring := C.CString(slot)
	defer C.free(unsafe.Pointer(slot_Cstring))
	return (bool)(C.QQmlProperty_connectNotifySignal(this.h, (*C.QObject)(dest.UnsafePointer()), slot_Cstring))
}

func (this *QQmlProperty) ConnectNotifySignal2(dest *qt6.QObject, method int) bool {
	return (bool)(C.QQmlProperty_connectNotifySignal2(this.h, (*C.QObject)(dest.UnsafePointer()), (C.int)(method)))
}

func (this *QQmlProperty) IsWritable() bool {
	return (bool)(C.QQmlProperty_isWritable(this.h))
}

func (this *QQmlProperty) IsBindable() bool {
	return (bool)(C.QQmlProperty_isBindable(this.h))
}

func (this *QQmlProperty) IsDesignable() bool {
	return (bool)(C.QQmlProperty_isDesignable(this.h))
}

func (this *QQmlProperty) IsResettable() bool {
	return (bool)(C.QQmlProperty_isResettable(this.h))
}

func (this *QQmlProperty) Object() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlProperty_object(this.h)))
}

func (this *QQmlProperty) Index() int {
	return (int)(C.QQmlProperty_index(this.h))
}

func (this *QQmlProperty) Property() *qt6.QMetaProperty {
	_goptr := qt6.UnsafeNewQMetaProperty(unsafe.Pointer(C.QQmlProperty_property(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlProperty) Method() *qt6.QMetaMethod {
	_goptr := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(C.QQmlProperty_method(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QQmlProperty) Delete() {
	C.QQmlProperty_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlProperty) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlProperty) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
