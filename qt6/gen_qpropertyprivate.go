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
	h          *C.QtPrivate__RefCounted
	isSubclass bool
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

// newQtPrivate__RefCounted constructs the type using only CGO pointers.
func newQtPrivate__RefCounted(h *C.QtPrivate__RefCounted) *QtPrivate__RefCounted {
	if h == nil {
		return nil
	}
	return &QtPrivate__RefCounted{h: h}
}

// UnsafeNewQtPrivate__RefCounted constructs the type using only unsafe pointers.
func UnsafeNewQtPrivate__RefCounted(h unsafe.Pointer) *QtPrivate__RefCounted {
	if h == nil {
		return nil
	}

	return &QtPrivate__RefCounted{h: (*C.QtPrivate__RefCounted)(h)}
}

func (this *QtPrivate__RefCounted) AddRef() {
	C.QtPrivate__RefCounted_AddRef(this.h)
}

func (this *QtPrivate__RefCounted) Deref() bool {
	return (bool)(C.QtPrivate__RefCounted_Deref(this.h))
}

// Delete this object from C++ memory.
func (this *QtPrivate__RefCounted) Delete() {
	C.QtPrivate__RefCounted_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QUntypedPropertyData
	isSubclass bool
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

// newQUntypedPropertyData constructs the type using only CGO pointers.
func newQUntypedPropertyData(h *C.QUntypedPropertyData) *QUntypedPropertyData {
	if h == nil {
		return nil
	}
	return &QUntypedPropertyData{h: h}
}

// UnsafeNewQUntypedPropertyData constructs the type using only unsafe pointers.
func UnsafeNewQUntypedPropertyData(h unsafe.Pointer) *QUntypedPropertyData {
	if h == nil {
		return nil
	}

	return &QUntypedPropertyData{h: (*C.QUntypedPropertyData)(h)}
}

// Delete this object from C++ memory.
func (this *QUntypedPropertyData) Delete() {
	C.QUntypedPropertyData_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QPropertyProxyBindingData
	isSubclass bool
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

// newQPropertyProxyBindingData constructs the type using only CGO pointers.
func newQPropertyProxyBindingData(h *C.QPropertyProxyBindingData) *QPropertyProxyBindingData {
	if h == nil {
		return nil
	}
	return &QPropertyProxyBindingData{h: h}
}

// UnsafeNewQPropertyProxyBindingData constructs the type using only unsafe pointers.
func UnsafeNewQPropertyProxyBindingData(h unsafe.Pointer) *QPropertyProxyBindingData {
	if h == nil {
		return nil
	}

	return &QPropertyProxyBindingData{h: (*C.QPropertyProxyBindingData)(h)}
}

// Delete this object from C++ memory.
func (this *QPropertyProxyBindingData) Delete() {
	C.QPropertyProxyBindingData_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QtPrivate__MSVCWorkAround
	isSubclass bool
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

// newQtPrivate__MSVCWorkAround constructs the type using only CGO pointers.
func newQtPrivate__MSVCWorkAround(h *C.QtPrivate__MSVCWorkAround) *QtPrivate__MSVCWorkAround {
	if h == nil {
		return nil
	}
	return &QtPrivate__MSVCWorkAround{h: h}
}

// UnsafeNewQtPrivate__MSVCWorkAround constructs the type using only unsafe pointers.
func UnsafeNewQtPrivate__MSVCWorkAround(h unsafe.Pointer) *QtPrivate__MSVCWorkAround {
	if h == nil {
		return nil
	}

	return &QtPrivate__MSVCWorkAround{h: (*C.QtPrivate__MSVCWorkAround)(h)}
}

// Delete this object from C++ memory.
func (this *QtPrivate__MSVCWorkAround) Delete() {
	C.QtPrivate__MSVCWorkAround_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QtPrivate__BindingFunctionVTable
	isSubclass bool
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

// newQtPrivate__BindingFunctionVTable constructs the type using only CGO pointers.
func newQtPrivate__BindingFunctionVTable(h *C.QtPrivate__BindingFunctionVTable) *QtPrivate__BindingFunctionVTable {
	if h == nil {
		return nil
	}
	return &QtPrivate__BindingFunctionVTable{h: h}
}

// UnsafeNewQtPrivate__BindingFunctionVTable constructs the type using only unsafe pointers.
func UnsafeNewQtPrivate__BindingFunctionVTable(h unsafe.Pointer) *QtPrivate__BindingFunctionVTable {
	if h == nil {
		return nil
	}

	return &QtPrivate__BindingFunctionVTable{h: (*C.QtPrivate__BindingFunctionVTable)(h)}
}

// Delete this object from C++ memory.
func (this *QtPrivate__BindingFunctionVTable) Delete() {
	C.QtPrivate__BindingFunctionVTable_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QtPrivate__QPropertyBindingFunction
	isSubclass bool
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

// newQtPrivate__QPropertyBindingFunction constructs the type using only CGO pointers.
func newQtPrivate__QPropertyBindingFunction(h *C.QtPrivate__QPropertyBindingFunction) *QtPrivate__QPropertyBindingFunction {
	if h == nil {
		return nil
	}
	return &QtPrivate__QPropertyBindingFunction{h: h}
}

// UnsafeNewQtPrivate__QPropertyBindingFunction constructs the type using only unsafe pointers.
func UnsafeNewQtPrivate__QPropertyBindingFunction(h unsafe.Pointer) *QtPrivate__QPropertyBindingFunction {
	if h == nil {
		return nil
	}

	return &QtPrivate__QPropertyBindingFunction{h: (*C.QtPrivate__QPropertyBindingFunction)(h)}
}

// Delete this object from C++ memory.
func (this *QtPrivate__QPropertyBindingFunction) Delete() {
	C.QtPrivate__QPropertyBindingFunction_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QtPrivate__QPropertyBindingData
	isSubclass bool
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

// newQtPrivate__QPropertyBindingData constructs the type using only CGO pointers.
func newQtPrivate__QPropertyBindingData(h *C.QtPrivate__QPropertyBindingData) *QtPrivate__QPropertyBindingData {
	if h == nil {
		return nil
	}
	return &QtPrivate__QPropertyBindingData{h: h}
}

// UnsafeNewQtPrivate__QPropertyBindingData constructs the type using only unsafe pointers.
func UnsafeNewQtPrivate__QPropertyBindingData(h unsafe.Pointer) *QtPrivate__QPropertyBindingData {
	if h == nil {
		return nil
	}

	return &QtPrivate__QPropertyBindingData{h: (*C.QtPrivate__QPropertyBindingData)(h)}
}

// NewQtPrivate__QPropertyBindingData constructs a new QtPrivate::QPropertyBindingData object.
func NewQtPrivate__QPropertyBindingData() *QtPrivate__QPropertyBindingData {
	var outptr_QtPrivate__QPropertyBindingData *C.QtPrivate__QPropertyBindingData = nil

	C.QtPrivate__QPropertyBindingData_new(&outptr_QtPrivate__QPropertyBindingData)
	ret := newQtPrivate__QPropertyBindingData(outptr_QtPrivate__QPropertyBindingData)
	ret.isSubclass = true
	return ret
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
	C.QtPrivate__QPropertyBindingData_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__QPropertyBindingData) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__QPropertyBindingData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
