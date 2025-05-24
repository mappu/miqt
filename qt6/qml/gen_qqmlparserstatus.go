package qml

/*

#include "gen_qqmlparserstatus.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QQmlParserStatus struct {
	h *C.QQmlParserStatus
}

func (this *QQmlParserStatus) cPointer() *C.QQmlParserStatus {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlParserStatus) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlParserStatus constructs the type using only CGO pointers.
func newQQmlParserStatus(h *C.QQmlParserStatus) *QQmlParserStatus {
	if h == nil {
		return nil
	}

	return &QQmlParserStatus{h: h}
}

// UnsafeNewQQmlParserStatus constructs the type using only unsafe pointers.
func UnsafeNewQQmlParserStatus(h unsafe.Pointer) *QQmlParserStatus {
	return newQQmlParserStatus((*C.QQmlParserStatus)(h))
}

// NewQQmlParserStatus constructs a new QQmlParserStatus object.
func NewQQmlParserStatus() *QQmlParserStatus {

	return newQQmlParserStatus(C.QQmlParserStatus_new())
}

func (this *QQmlParserStatus) ClassBegin() {
	C.QQmlParserStatus_classBegin(this.h)
}

func (this *QQmlParserStatus) ComponentComplete() {
	C.QQmlParserStatus_componentComplete(this.h)
}

func (this *QQmlParserStatus) OperatorAssign(param1 *QQmlParserStatus) {
	C.QQmlParserStatus_operatorAssign(this.h, param1.cPointer())
}
func (this *QQmlParserStatus) OnClassBegin(slot func()) {
	ok := C.QQmlParserStatus_override_virtual_classBegin(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlParserStatus_classBegin
func miqt_exec_callback_QQmlParserStatus_classBegin(self *C.QQmlParserStatus, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QQmlParserStatus) OnComponentComplete(slot func()) {
	ok := C.QQmlParserStatus_override_virtual_componentComplete(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlParserStatus_componentComplete
func miqt_exec_callback_QQmlParserStatus_componentComplete(self *C.QQmlParserStatus, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}

// Delete this object from C++ memory.
func (this *QQmlParserStatus) Delete() {
	C.QQmlParserStatus_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlParserStatus) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlParserStatus) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
