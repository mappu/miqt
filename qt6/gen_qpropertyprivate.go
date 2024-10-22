package qt6

/*

#include "gen_qpropertyprivate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QtPrivate__RefCounted struct {
	h *C.QtPrivate__RefCounted
}

func (this *QtPrivate__RefCounted) cPointer() *C.QtPrivate__RefCounted {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__RefCounted) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__RefCounted(h *C.QtPrivate__RefCounted) *QtPrivate__RefCounted {
	if h == nil {
		return nil
	}
	return &QtPrivate__RefCounted{h: h}
}

func UnsafeNewQtPrivate__RefCounted(h unsafe.Pointer) *QtPrivate__RefCounted {
	return newQtPrivate__RefCounted((*C.QtPrivate__RefCounted)(h))
}

func (this *QtPrivate__RefCounted) AddRef() {
	C.QtPrivate__RefCounted_AddRef(this.h)
}

func (this *QtPrivate__RefCounted) Deref() bool {
	return (bool)(C.QtPrivate__RefCounted_Deref(this.h))
}

// Delete this object from C++ memory.
func (this *QtPrivate__RefCounted) Delete() {
	C.QtPrivate__RefCounted_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__RefCounted) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__RefCounted) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QUntypedPropertyData struct {
	h *C.QUntypedPropertyData
}

func (this *QUntypedPropertyData) cPointer() *C.QUntypedPropertyData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUntypedPropertyData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQUntypedPropertyData(h *C.QUntypedPropertyData) *QUntypedPropertyData {
	if h == nil {
		return nil
	}
	return &QUntypedPropertyData{h: h}
}

func UnsafeNewQUntypedPropertyData(h unsafe.Pointer) *QUntypedPropertyData {
	return newQUntypedPropertyData((*C.QUntypedPropertyData)(h))
}

// Delete this object from C++ memory.
func (this *QUntypedPropertyData) Delete() {
	C.QUntypedPropertyData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUntypedPropertyData) GoGC() {
	runtime.SetFinalizer(this, func(this *QUntypedPropertyData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPropertyProxyBindingData struct {
	h *C.QPropertyProxyBindingData
}

func (this *QPropertyProxyBindingData) cPointer() *C.QPropertyProxyBindingData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPropertyProxyBindingData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPropertyProxyBindingData(h *C.QPropertyProxyBindingData) *QPropertyProxyBindingData {
	if h == nil {
		return nil
	}
	return &QPropertyProxyBindingData{h: h}
}

func UnsafeNewQPropertyProxyBindingData(h unsafe.Pointer) *QPropertyProxyBindingData {
	return newQPropertyProxyBindingData((*C.QPropertyProxyBindingData)(h))
}

// Delete this object from C++ memory.
func (this *QPropertyProxyBindingData) Delete() {
	C.QPropertyProxyBindingData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPropertyProxyBindingData) GoGC() {
	runtime.SetFinalizer(this, func(this *QPropertyProxyBindingData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtPrivate__MSVCWorkAround struct {
	h *C.QtPrivate__MSVCWorkAround
}

func (this *QtPrivate__MSVCWorkAround) cPointer() *C.QtPrivate__MSVCWorkAround {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__MSVCWorkAround) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__MSVCWorkAround(h *C.QtPrivate__MSVCWorkAround) *QtPrivate__MSVCWorkAround {
	if h == nil {
		return nil
	}
	return &QtPrivate__MSVCWorkAround{h: h}
}

func UnsafeNewQtPrivate__MSVCWorkAround(h unsafe.Pointer) *QtPrivate__MSVCWorkAround {
	return newQtPrivate__MSVCWorkAround((*C.QtPrivate__MSVCWorkAround)(h))
}

// Delete this object from C++ memory.
func (this *QtPrivate__MSVCWorkAround) Delete() {
	C.QtPrivate__MSVCWorkAround_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__MSVCWorkAround) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__MSVCWorkAround) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtPrivate__BindingFunctionVTable struct {
	h *C.QtPrivate__BindingFunctionVTable
}

func (this *QtPrivate__BindingFunctionVTable) cPointer() *C.QtPrivate__BindingFunctionVTable {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__BindingFunctionVTable) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__BindingFunctionVTable(h *C.QtPrivate__BindingFunctionVTable) *QtPrivate__BindingFunctionVTable {
	if h == nil {
		return nil
	}
	return &QtPrivate__BindingFunctionVTable{h: h}
}

func UnsafeNewQtPrivate__BindingFunctionVTable(h unsafe.Pointer) *QtPrivate__BindingFunctionVTable {
	return newQtPrivate__BindingFunctionVTable((*C.QtPrivate__BindingFunctionVTable)(h))
}

// Delete this object from C++ memory.
func (this *QtPrivate__BindingFunctionVTable) Delete() {
	C.QtPrivate__BindingFunctionVTable_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__BindingFunctionVTable) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__BindingFunctionVTable) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtPrivate__QPropertyBindingFunction struct {
	h *C.QtPrivate__QPropertyBindingFunction
}

func (this *QtPrivate__QPropertyBindingFunction) cPointer() *C.QtPrivate__QPropertyBindingFunction {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__QPropertyBindingFunction) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__QPropertyBindingFunction(h *C.QtPrivate__QPropertyBindingFunction) *QtPrivate__QPropertyBindingFunction {
	if h == nil {
		return nil
	}
	return &QtPrivate__QPropertyBindingFunction{h: h}
}

func UnsafeNewQtPrivate__QPropertyBindingFunction(h unsafe.Pointer) *QtPrivate__QPropertyBindingFunction {
	return newQtPrivate__QPropertyBindingFunction((*C.QtPrivate__QPropertyBindingFunction)(h))
}

// Delete this object from C++ memory.
func (this *QtPrivate__QPropertyBindingFunction) Delete() {
	C.QtPrivate__QPropertyBindingFunction_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__QPropertyBindingFunction) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__QPropertyBindingFunction) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtPrivate__QPropertyBindingData struct {
	h *C.QtPrivate__QPropertyBindingData
}

func (this *QtPrivate__QPropertyBindingData) cPointer() *C.QtPrivate__QPropertyBindingData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__QPropertyBindingData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__QPropertyBindingData(h *C.QtPrivate__QPropertyBindingData) *QtPrivate__QPropertyBindingData {
	if h == nil {
		return nil
	}
	return &QtPrivate__QPropertyBindingData{h: h}
}

func UnsafeNewQtPrivate__QPropertyBindingData(h unsafe.Pointer) *QtPrivate__QPropertyBindingData {
	return newQtPrivate__QPropertyBindingData((*C.QtPrivate__QPropertyBindingData)(h))
}

// NewQtPrivate__QPropertyBindingData constructs a new QtPrivate::QPropertyBindingData object.
func NewQtPrivate__QPropertyBindingData() *QtPrivate__QPropertyBindingData {
	ret := C.QtPrivate__QPropertyBindingData_new()
	return newQtPrivate__QPropertyBindingData(ret)
}

func (this *QtPrivate__QPropertyBindingData) HasBinding() bool {
	return (bool)(C.QtPrivate__QPropertyBindingData_HasBinding(this.h))
}

func (this *QtPrivate__QPropertyBindingData) IsNotificationDelayed() bool {
	return (bool)(C.QtPrivate__QPropertyBindingData_IsNotificationDelayed(this.h))
}

func (this *QtPrivate__QPropertyBindingData) SetBinding(newBinding *QUntypedPropertyBinding, propertyDataPtr *QUntypedPropertyData) *QUntypedPropertyBinding {
	_ret := C.QtPrivate__QPropertyBindingData_SetBinding(this.h, newBinding.cPointer(), propertyDataPtr.cPointer())
	_goptr := newQUntypedPropertyBinding(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QtPrivate__QPropertyBindingData) EvaluateIfDirty(param1 *QUntypedPropertyData) {
	C.QtPrivate__QPropertyBindingData_EvaluateIfDirty(this.h, param1.cPointer())
}

func (this *QtPrivate__QPropertyBindingData) RemoveBinding() {
	C.QtPrivate__QPropertyBindingData_RemoveBinding(this.h)
}

func (this *QtPrivate__QPropertyBindingData) RegisterWithCurrentlyEvaluatingBinding2() {
	C.QtPrivate__QPropertyBindingData_RegisterWithCurrentlyEvaluatingBinding2(this.h)
}

func (this *QtPrivate__QPropertyBindingData) NotifyObservers(propertyDataPtr *QUntypedPropertyData) {
	C.QtPrivate__QPropertyBindingData_NotifyObservers(this.h, propertyDataPtr.cPointer())
}

func (this *QtPrivate__QPropertyBindingData) NotifyObservers2(propertyDataPtr *QUntypedPropertyData, storage *QBindingStorage) {
	C.QtPrivate__QPropertyBindingData_NotifyObservers2(this.h, propertyDataPtr.cPointer(), storage.cPointer())
}

// Delete this object from C++ memory.
func (this *QtPrivate__QPropertyBindingData) Delete() {
	C.QtPrivate__QPropertyBindingData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__QPropertyBindingData) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__QPropertyBindingData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QUntypedPropertyData__InheritsQUntypedPropertyData struct {
	h *C.QUntypedPropertyData__InheritsQUntypedPropertyData
}

func (this *QUntypedPropertyData__InheritsQUntypedPropertyData) cPointer() *C.QUntypedPropertyData__InheritsQUntypedPropertyData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUntypedPropertyData__InheritsQUntypedPropertyData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQUntypedPropertyData__InheritsQUntypedPropertyData(h *C.QUntypedPropertyData__InheritsQUntypedPropertyData) *QUntypedPropertyData__InheritsQUntypedPropertyData {
	if h == nil {
		return nil
	}
	return &QUntypedPropertyData__InheritsQUntypedPropertyData{h: h}
}

func UnsafeNewQUntypedPropertyData__InheritsQUntypedPropertyData(h unsafe.Pointer) *QUntypedPropertyData__InheritsQUntypedPropertyData {
	return newQUntypedPropertyData__InheritsQUntypedPropertyData((*C.QUntypedPropertyData__InheritsQUntypedPropertyData)(h))
}

// Delete this object from C++ memory.
func (this *QUntypedPropertyData__InheritsQUntypedPropertyData) Delete() {
	C.QUntypedPropertyData__InheritsQUntypedPropertyData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUntypedPropertyData__InheritsQUntypedPropertyData) GoGC() {
	runtime.SetFinalizer(this, func(this *QUntypedPropertyData__InheritsQUntypedPropertyData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
