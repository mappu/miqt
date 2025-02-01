package qt6

/*

#include "gen_qgesturerecognizer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGestureRecognizer__ResultFlag int

const (
	QGestureRecognizer__Ignore           QGestureRecognizer__ResultFlag = 1
	QGestureRecognizer__MayBeGesture     QGestureRecognizer__ResultFlag = 2
	QGestureRecognizer__TriggerGesture   QGestureRecognizer__ResultFlag = 4
	QGestureRecognizer__FinishGesture    QGestureRecognizer__ResultFlag = 8
	QGestureRecognizer__CancelGesture    QGestureRecognizer__ResultFlag = 16
	QGestureRecognizer__ResultState_Mask QGestureRecognizer__ResultFlag = 255
	QGestureRecognizer__ConsumeEventHint QGestureRecognizer__ResultFlag = 256
	QGestureRecognizer__ResultHint_Mask  QGestureRecognizer__ResultFlag = 65280
)

type QGestureRecognizer struct {
	h *C.QGestureRecognizer
}

func (this *QGestureRecognizer) cPointer() *C.QGestureRecognizer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGestureRecognizer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGestureRecognizer constructs the type using only CGO pointers.
func newQGestureRecognizer(h *C.QGestureRecognizer) *QGestureRecognizer {
	if h == nil {
		return nil
	}

	return &QGestureRecognizer{h: h}
}

// UnsafeNewQGestureRecognizer constructs the type using only unsafe pointers.
func UnsafeNewQGestureRecognizer(h unsafe.Pointer) *QGestureRecognizer {
	return newQGestureRecognizer((*C.QGestureRecognizer)(h))
}

// NewQGestureRecognizer constructs a new QGestureRecognizer object.
func NewQGestureRecognizer() *QGestureRecognizer {

	return newQGestureRecognizer(C.QGestureRecognizer_new())
}

func (this *QGestureRecognizer) Create(target *QObject) *QGesture {
	return newQGesture(C.QGestureRecognizer_create(this.h, target.cPointer()))
}

func (this *QGestureRecognizer) Recognize(state *QGesture, watched *QObject, event *QEvent) QGestureRecognizer__ResultFlag {
	return (QGestureRecognizer__ResultFlag)(C.QGestureRecognizer_recognize(this.h, state.cPointer(), watched.cPointer(), event.cPointer()))
}

func (this *QGestureRecognizer) Reset(state *QGesture) {
	C.QGestureRecognizer_reset(this.h, state.cPointer())
}

func QGestureRecognizer_RegisterRecognizer(recognizer *QGestureRecognizer) GestureType {
	return (GestureType)(C.QGestureRecognizer_registerRecognizer(recognizer.cPointer()))
}

func QGestureRecognizer_UnregisterRecognizer(typeVal GestureType) {
	C.QGestureRecognizer_unregisterRecognizer((C.int)(typeVal))
}

func (this *QGestureRecognizer) OperatorAssign(param1 *QGestureRecognizer) {
	C.QGestureRecognizer_operatorAssign(this.h, param1.cPointer())
}

func (this *QGestureRecognizer) callVirtualBase_Create(target *QObject) *QGesture {

	return newQGesture(C.QGestureRecognizer_virtualbase_create(unsafe.Pointer(this.h), target.cPointer()))

}
func (this *QGestureRecognizer) Oncreate(slot func(super func(target *QObject) *QGesture, target *QObject) *QGesture) {
	ok := C.QGestureRecognizer_override_virtual_create(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGestureRecognizer_create
func miqt_exec_callback_QGestureRecognizer_create(self *C.QGestureRecognizer, cb C.intptr_t, target *C.QObject) *C.QGesture {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(target *QObject) *QGesture, target *QObject) *QGesture)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(target)

	virtualReturn := gofunc((&QGestureRecognizer{h: self}).callVirtualBase_Create, slotval1)

	return virtualReturn.cPointer()

}
func (this *QGestureRecognizer) Onrecognize(slot func(state *QGesture, watched *QObject, event *QEvent) QGestureRecognizer__ResultFlag) {
	ok := C.QGestureRecognizer_override_virtual_recognize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGestureRecognizer_recognize
func miqt_exec_callback_QGestureRecognizer_recognize(self *C.QGestureRecognizer, cb C.intptr_t, state *C.QGesture, watched *C.QObject, event *C.QEvent) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(state *QGesture, watched *QObject, event *QEvent) QGestureRecognizer__ResultFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGesture(state)

	slotval2 := newQObject(watched)

	slotval3 := newQEvent(event)

	virtualReturn := gofunc(slotval1, slotval2, slotval3)

	return (C.int)(virtualReturn)

}

func (this *QGestureRecognizer) callVirtualBase_Reset(state *QGesture) {

	C.QGestureRecognizer_virtualbase_reset(unsafe.Pointer(this.h), state.cPointer())

}
func (this *QGestureRecognizer) Onreset(slot func(super func(state *QGesture), state *QGesture)) {
	ok := C.QGestureRecognizer_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGestureRecognizer_reset
func miqt_exec_callback_QGestureRecognizer_reset(self *C.QGestureRecognizer, cb C.intptr_t, state *C.QGesture) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(state *QGesture), state *QGesture))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGesture(state)

	gofunc((&QGestureRecognizer{h: self}).callVirtualBase_Reset, slotval1)

}

// Delete this object from C++ memory.
func (this *QGestureRecognizer) Delete() {
	C.QGestureRecognizer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGestureRecognizer) GoGC() {
	runtime.SetFinalizer(this, func(this *QGestureRecognizer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
