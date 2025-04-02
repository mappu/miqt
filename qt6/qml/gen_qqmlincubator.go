package qml

/*

#include "gen_qqmlincubator.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QQmlIncubator__IncubationMode int

const (
	QQmlIncubator__Asynchronous         QQmlIncubator__IncubationMode = 0
	QQmlIncubator__AsynchronousIfNested QQmlIncubator__IncubationMode = 1
	QQmlIncubator__Synchronous          QQmlIncubator__IncubationMode = 2
)

type QQmlIncubator__Status int

const (
	QQmlIncubator__Null    QQmlIncubator__Status = 0
	QQmlIncubator__Ready   QQmlIncubator__Status = 1
	QQmlIncubator__Loading QQmlIncubator__Status = 2
	QQmlIncubator__Error   QQmlIncubator__Status = 3
)

type QQmlIncubator struct {
	h *C.QQmlIncubator
}

func (this *QQmlIncubator) cPointer() *C.QQmlIncubator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlIncubator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlIncubator constructs the type using only CGO pointers.
func newQQmlIncubator(h *C.QQmlIncubator) *QQmlIncubator {
	if h == nil {
		return nil
	}

	return &QQmlIncubator{h: h}
}

// UnsafeNewQQmlIncubator constructs the type using only unsafe pointers.
func UnsafeNewQQmlIncubator(h unsafe.Pointer) *QQmlIncubator {
	return newQQmlIncubator((*C.QQmlIncubator)(h))
}

// NewQQmlIncubator constructs a new QQmlIncubator object.
func NewQQmlIncubator() *QQmlIncubator {

	return newQQmlIncubator(C.QQmlIncubator_new())
}

// NewQQmlIncubator2 constructs a new QQmlIncubator object.
func NewQQmlIncubator2(param1 QQmlIncubator__IncubationMode) *QQmlIncubator {

	return newQQmlIncubator(C.QQmlIncubator_new2((C.int)(param1)))
}

func (this *QQmlIncubator) Clear() {
	C.QQmlIncubator_clear(this.h)
}

func (this *QQmlIncubator) ForceCompletion() {
	C.QQmlIncubator_forceCompletion(this.h)
}

func (this *QQmlIncubator) IsNull() bool {
	return (bool)(C.QQmlIncubator_isNull(this.h))
}

func (this *QQmlIncubator) IsReady() bool {
	return (bool)(C.QQmlIncubator_isReady(this.h))
}

func (this *QQmlIncubator) IsError() bool {
	return (bool)(C.QQmlIncubator_isError(this.h))
}

func (this *QQmlIncubator) IsLoading() bool {
	return (bool)(C.QQmlIncubator_isLoading(this.h))
}

func (this *QQmlIncubator) Errors() []QQmlError {
	var _ma C.struct_miqt_array = C.QQmlIncubator_errors(this.h)
	_ret := make([]QQmlError, int(_ma.len))
	_outCast := (*[0xffff]*C.QQmlError)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQQmlError(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QQmlIncubator) IncubationMode() QQmlIncubator__IncubationMode {
	return (QQmlIncubator__IncubationMode)(C.QQmlIncubator_incubationMode(this.h))
}

func (this *QQmlIncubator) Status() QQmlIncubator__Status {
	return (QQmlIncubator__Status)(C.QQmlIncubator_status(this.h))
}

func (this *QQmlIncubator) Object() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlIncubator_object(this.h)))
}

func (this *QQmlIncubator) SetInitialProperties(initialProperties map[string]qt6.QVariant) {
	initialProperties_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(initialProperties))))
	defer C.free(unsafe.Pointer(initialProperties_Keys_CArray))
	initialProperties_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(initialProperties))))
	defer C.free(unsafe.Pointer(initialProperties_Values_CArray))
	initialProperties_ctr := 0
	for initialProperties_k, initialProperties_v := range initialProperties {
		initialProperties_k_ms := C.struct_miqt_string{}
		initialProperties_k_ms.data = C.CString(initialProperties_k)
		initialProperties_k_ms.len = C.size_t(len(initialProperties_k))
		defer C.free(unsafe.Pointer(initialProperties_k_ms.data))
		initialProperties_Keys_CArray[initialProperties_ctr] = initialProperties_k_ms
		initialProperties_Values_CArray[initialProperties_ctr] = (*C.QVariant)(initialProperties_v.UnsafePointer())
		initialProperties_ctr++
	}
	initialProperties_mm := C.struct_miqt_map{
		len:    C.size_t(len(initialProperties)),
		keys:   unsafe.Pointer(initialProperties_Keys_CArray),
		values: unsafe.Pointer(initialProperties_Values_CArray),
	}
	C.QQmlIncubator_setInitialProperties(this.h, initialProperties_mm)
}

func (this *QQmlIncubator) callVirtualBase_StatusChanged(param1 QQmlIncubator__Status) {

	C.QQmlIncubator_virtualbase_statusChanged(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QQmlIncubator) OnStatusChanged(slot func(super func(param1 QQmlIncubator__Status), param1 QQmlIncubator__Status)) {
	ok := C.QQmlIncubator_override_virtual_statusChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlIncubator_statusChanged
func miqt_exec_callback_QQmlIncubator_statusChanged(self *C.QQmlIncubator, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QQmlIncubator__Status), param1 QQmlIncubator__Status))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QQmlIncubator__Status)(param1)

	gofunc((&QQmlIncubator{h: self}).callVirtualBase_StatusChanged, slotval1)

}

func (this *QQmlIncubator) callVirtualBase_SetInitialState(initialState *qt6.QObject) {

	C.QQmlIncubator_virtualbase_setInitialState(unsafe.Pointer(this.h), (*C.QObject)(initialState.UnsafePointer()))

}
func (this *QQmlIncubator) OnSetInitialState(slot func(super func(initialState *qt6.QObject), initialState *qt6.QObject)) {
	ok := C.QQmlIncubator_override_virtual_setInitialState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlIncubator_setInitialState
func miqt_exec_callback_QQmlIncubator_setInitialState(self *C.QQmlIncubator, cb C.intptr_t, initialState *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(initialState *qt6.QObject), initialState *qt6.QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(initialState))

	gofunc((&QQmlIncubator{h: self}).callVirtualBase_SetInitialState, slotval1)

}

// Delete this object from C++ memory.
func (this *QQmlIncubator) Delete() {
	C.QQmlIncubator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlIncubator) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlIncubator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QQmlIncubationController struct {
	h *C.QQmlIncubationController
}

func (this *QQmlIncubationController) cPointer() *C.QQmlIncubationController {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlIncubationController) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlIncubationController constructs the type using only CGO pointers.
func newQQmlIncubationController(h *C.QQmlIncubationController) *QQmlIncubationController {
	if h == nil {
		return nil
	}

	return &QQmlIncubationController{h: h}
}

// UnsafeNewQQmlIncubationController constructs the type using only unsafe pointers.
func UnsafeNewQQmlIncubationController(h unsafe.Pointer) *QQmlIncubationController {
	return newQQmlIncubationController((*C.QQmlIncubationController)(h))
}

// NewQQmlIncubationController constructs a new QQmlIncubationController object.
func NewQQmlIncubationController() *QQmlIncubationController {

	return newQQmlIncubationController(C.QQmlIncubationController_new())
}

func (this *QQmlIncubationController) Engine() *QQmlEngine {
	return newQQmlEngine(C.QQmlIncubationController_engine(this.h))
}

func (this *QQmlIncubationController) IncubatingObjectCount() int {
	return (int)(C.QQmlIncubationController_incubatingObjectCount(this.h))
}

func (this *QQmlIncubationController) IncubateFor(msecs int) {
	C.QQmlIncubationController_incubateFor(this.h, (C.int)(msecs))
}

func (this *QQmlIncubationController) callVirtualBase_IncubatingObjectCountChanged(param1 int) {

	C.QQmlIncubationController_virtualbase_incubatingObjectCountChanged(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QQmlIncubationController) OnIncubatingObjectCountChanged(slot func(super func(param1 int), param1 int)) {
	ok := C.QQmlIncubationController_override_virtual_incubatingObjectCountChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlIncubationController_incubatingObjectCountChanged
func miqt_exec_callback_QQmlIncubationController_incubatingObjectCountChanged(self *C.QQmlIncubationController, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QQmlIncubationController{h: self}).callVirtualBase_IncubatingObjectCountChanged, slotval1)

}

// Delete this object from C++ memory.
func (this *QQmlIncubationController) Delete() {
	C.QQmlIncubationController_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlIncubationController) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlIncubationController) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
