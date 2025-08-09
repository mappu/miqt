package qml

/*

#include "gen_qqmllist.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QQmlListReference struct {
	h *C.QQmlListReference
}

func (this *QQmlListReference) cPointer() *C.QQmlListReference {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlListReference) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlListReference constructs the type using only CGO pointers.
func newQQmlListReference(h *C.QQmlListReference) *QQmlListReference {
	if h == nil {
		return nil
	}

	return &QQmlListReference{h: h}
}

// UnsafeNewQQmlListReference constructs the type using only unsafe pointers.
func UnsafeNewQQmlListReference(h unsafe.Pointer) *QQmlListReference {
	return newQQmlListReference((*C.QQmlListReference)(h))
}

// NewQQmlListReference constructs a new QQmlListReference object.
func NewQQmlListReference() *QQmlListReference {

	return newQQmlListReference(C.QQmlListReference_new())
}

// NewQQmlListReference2 constructs a new QQmlListReference object.
func NewQQmlListReference2(variant *qt6.QVariant, engine *QQmlEngine) *QQmlListReference {

	return newQQmlListReference(C.QQmlListReference_new2((*C.QVariant)(variant.UnsafePointer()), engine.cPointer()))
}

// NewQQmlListReference3 constructs a new QQmlListReference object.
func NewQQmlListReference3(o *qt6.QObject, property string, engine *QQmlEngine) *QQmlListReference {
	property_Cstring := C.CString(property)
	defer C.free(unsafe.Pointer(property_Cstring))

	return newQQmlListReference(C.QQmlListReference_new3((*C.QObject)(o.UnsafePointer()), property_Cstring, engine.cPointer()))
}

// NewQQmlListReference4 constructs a new QQmlListReference object.
func NewQQmlListReference4(variant *qt6.QVariant) *QQmlListReference {

	return newQQmlListReference(C.QQmlListReference_new4((*C.QVariant)(variant.UnsafePointer())))
}

// NewQQmlListReference5 constructs a new QQmlListReference object.
func NewQQmlListReference5(o *qt6.QObject, property string) *QQmlListReference {
	property_Cstring := C.CString(property)
	defer C.free(unsafe.Pointer(property_Cstring))

	return newQQmlListReference(C.QQmlListReference_new5((*C.QObject)(o.UnsafePointer()), property_Cstring))
}

// NewQQmlListReference6 constructs a new QQmlListReference object.
func NewQQmlListReference6(param1 *QQmlListReference) *QQmlListReference {

	return newQQmlListReference(C.QQmlListReference_new6(param1.cPointer()))
}

func (this *QQmlListReference) OperatorAssign(param1 *QQmlListReference) {
	C.QQmlListReference_operatorAssign(this.h, param1.cPointer())
}

func (this *QQmlListReference) IsValid() bool {
	return (bool)(C.QQmlListReference_isValid(this.h))
}

func (this *QQmlListReference) Object() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlListReference_object(this.h)))
}

func (this *QQmlListReference) ListElementType() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QQmlListReference_listElementType(this.h)))
}

func (this *QQmlListReference) CanAppend() bool {
	return (bool)(C.QQmlListReference_canAppend(this.h))
}

func (this *QQmlListReference) CanAt() bool {
	return (bool)(C.QQmlListReference_canAt(this.h))
}

func (this *QQmlListReference) CanClear() bool {
	return (bool)(C.QQmlListReference_canClear(this.h))
}

func (this *QQmlListReference) CanCount() bool {
	return (bool)(C.QQmlListReference_canCount(this.h))
}

func (this *QQmlListReference) CanReplace() bool {
	return (bool)(C.QQmlListReference_canReplace(this.h))
}

func (this *QQmlListReference) CanRemoveLast() bool {
	return (bool)(C.QQmlListReference_canRemoveLast(this.h))
}

func (this *QQmlListReference) IsManipulable() bool {
	return (bool)(C.QQmlListReference_isManipulable(this.h))
}

func (this *QQmlListReference) IsReadable() bool {
	return (bool)(C.QQmlListReference_isReadable(this.h))
}

func (this *QQmlListReference) Append(param1 *qt6.QObject) bool {
	return (bool)(C.QQmlListReference_append(this.h, (*C.QObject)(param1.UnsafePointer())))
}

func (this *QQmlListReference) At(param1 int64) *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlListReference_at(this.h, (C.ptrdiff_t)(param1))))
}

func (this *QQmlListReference) Clear() bool {
	return (bool)(C.QQmlListReference_clear(this.h))
}

func (this *QQmlListReference) Count() int64 {
	return (int64)(C.QQmlListReference_count(this.h))
}

func (this *QQmlListReference) Size() int64 {
	return (int64)(C.QQmlListReference_size(this.h))
}

func (this *QQmlListReference) Replace(param1 int64, param2 *qt6.QObject) bool {
	return (bool)(C.QQmlListReference_replace(this.h, (C.ptrdiff_t)(param1), (*C.QObject)(param2.UnsafePointer())))
}

func (this *QQmlListReference) RemoveLast() bool {
	return (bool)(C.QQmlListReference_removeLast(this.h))
}

func (this *QQmlListReference) OperatorEqual(other *QQmlListReference) bool {
	return (bool)(C.QQmlListReference_operatorEqual(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QQmlListReference) Delete() {
	C.QQmlListReference_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlListReference) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlListReference) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
