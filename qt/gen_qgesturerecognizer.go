package qt

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
	h          *C.QGestureRecognizer
	isSubclass bool
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

	ret := newQGestureRecognizer(C.QGestureRecognizer_new())
	ret.isSubclass = true
	return ret
}

func (this *QGestureRecognizer) Create(target *QObject) *QGesture {
	return newQGesture(C.QGestureRecognizer_Create(this.h, target.cPointer()))
}

func (this *QGestureRecognizer) Recognize(state *QGesture, watched *QObject, event *QEvent) QGestureRecognizer__ResultFlag {
	return (QGestureRecognizer__ResultFlag)(C.QGestureRecognizer_Recognize(this.h, state.cPointer(), watched.cPointer(), event.cPointer()))
}

func (this *QGestureRecognizer) Reset(state *QGesture) {
	C.QGestureRecognizer_Reset(this.h, state.cPointer())
}

func QGestureRecognizer_RegisterRecognizer(recognizer *QGestureRecognizer) GestureType {
	return (GestureType)(C.QGestureRecognizer_RegisterRecognizer(recognizer.cPointer()))
}

func QGestureRecognizer_UnregisterRecognizer(typeVal GestureType) {
	C.QGestureRecognizer_UnregisterRecognizer((C.int)(typeVal))
}

func (this *QGestureRecognizer) OperatorAssign(param1 *QGestureRecognizer) {
	C.QGestureRecognizer_OperatorAssign(this.h, param1.cPointer())
}

func (this *QGestureRecognizer) callVirtualBase_Create(target *QObject) *QGesture {

	return newQGesture(C.QGestureRecognizer_virtualbase_Create(unsafe.Pointer(this.h), target.cPointer()))

}
func (this *QGestureRecognizer) OnCreate(slot func(super func(target *QObject) *QGesture, target *QObject) *QGesture) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGestureRecognizer_override_virtual_Create(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGestureRecognizer_Create
func miqt_exec_callback_QGestureRecognizer_Create(self *C.QGestureRecognizer, cb C.intptr_t, target *C.QObject) *C.QGesture {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(target *QObject) *QGesture, target *QObject) *QGesture)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(target)

	virtualReturn := gofunc((&QGestureRecognizer{h: self}).callVirtualBase_Create, slotval1)

	return virtualReturn.cPointer()

}
func (this *QGestureRecognizer) OnRecognize(slot func(state *QGesture, watched *QObject, event *QEvent) QGestureRecognizer__ResultFlag) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGestureRecognizer_override_virtual_Recognize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGestureRecognizer_Recognize
func miqt_exec_callback_QGestureRecognizer_Recognize(self *C.QGestureRecognizer, cb C.intptr_t, state *C.QGesture, watched *C.QObject, event *C.QEvent) C.int {
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

	C.QGestureRecognizer_virtualbase_Reset(unsafe.Pointer(this.h), state.cPointer())

}
func (this *QGestureRecognizer) OnReset(slot func(super func(state *QGesture), state *QGesture)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGestureRecognizer_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGestureRecognizer_Reset
func miqt_exec_callback_QGestureRecognizer_Reset(self *C.QGestureRecognizer, cb C.intptr_t, state *C.QGesture) {
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
	C.QGestureRecognizer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGestureRecognizer) GoGC() {
	runtime.SetFinalizer(this, func(this *QGestureRecognizer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
