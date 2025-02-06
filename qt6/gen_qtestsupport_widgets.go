package qt6

/*

#include "gen_qtestsupport_widgets.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTest__QTouchEventWidgetSequence struct {
	h *C.QTest__QTouchEventWidgetSequence
	*QTest__QTouchEventSequence
}

func (this *QTest__QTouchEventWidgetSequence) cPointer() *C.QTest__QTouchEventWidgetSequence {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTest__QTouchEventWidgetSequence) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTest__QTouchEventWidgetSequence constructs the type using only CGO pointers.
func newQTest__QTouchEventWidgetSequence(h *C.QTest__QTouchEventWidgetSequence) *QTest__QTouchEventWidgetSequence {
	if h == nil {
		return nil
	}
	var outptr_QTest__QTouchEventSequence *C.QTest__QTouchEventSequence = nil
	C.QTest__QTouchEventWidgetSequence_virtbase(h, &outptr_QTest__QTouchEventSequence)

	return &QTest__QTouchEventWidgetSequence{h: h,
		QTest__QTouchEventSequence: newQTest__QTouchEventSequence(outptr_QTest__QTouchEventSequence)}
}

// UnsafeNewQTest__QTouchEventWidgetSequence constructs the type using only unsafe pointers.
func UnsafeNewQTest__QTouchEventWidgetSequence(h unsafe.Pointer) *QTest__QTouchEventWidgetSequence {
	return newQTest__QTouchEventWidgetSequence((*C.QTest__QTouchEventWidgetSequence)(h))
}

// NewQTest__QTouchEventWidgetSequence constructs a new QTest::QTouchEventWidgetSequence object.
func NewQTest__QTouchEventWidgetSequence(param1 *QTest__QTouchEventWidgetSequence) *QTest__QTouchEventWidgetSequence {

	return newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_new(param1.cPointer()))
}

func (this *QTest__QTouchEventWidgetSequence) Press(touchId int, pt *QPoint) *QTest__QTouchEventWidgetSequence {
	return newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_press(this.h, (C.int)(touchId), pt.cPointer()))
}

func (this *QTest__QTouchEventWidgetSequence) Move(touchId int, pt *QPoint) *QTest__QTouchEventWidgetSequence {
	return newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_move(this.h, (C.int)(touchId), pt.cPointer()))
}

func (this *QTest__QTouchEventWidgetSequence) Release(touchId int, pt *QPoint) *QTest__QTouchEventWidgetSequence {
	return newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_release(this.h, (C.int)(touchId), pt.cPointer()))
}

func (this *QTest__QTouchEventWidgetSequence) Stationary(touchId int) *QTest__QTouchEventWidgetSequence {
	return newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_stationary(this.h, (C.int)(touchId)))
}

func (this *QTest__QTouchEventWidgetSequence) Commit(processEvents bool) bool {
	return (bool)(C.QTest__QTouchEventWidgetSequence_commit(this.h, (C.bool)(processEvents)))
}

func (this *QTest__QTouchEventWidgetSequence) Press3(touchId int, pt *QPoint, widget *QWidget) *QTest__QTouchEventWidgetSequence {
	return newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_press3(this.h, (C.int)(touchId), pt.cPointer(), widget.cPointer()))
}

func (this *QTest__QTouchEventWidgetSequence) Move3(touchId int, pt *QPoint, widget *QWidget) *QTest__QTouchEventWidgetSequence {
	return newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_move3(this.h, (C.int)(touchId), pt.cPointer(), widget.cPointer()))
}

func (this *QTest__QTouchEventWidgetSequence) Release3(touchId int, pt *QPoint, widget *QWidget) *QTest__QTouchEventWidgetSequence {
	return newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_release3(this.h, (C.int)(touchId), pt.cPointer(), widget.cPointer()))
}

// Point can only be called from a QTest__QTouchEventWidgetSequence that was directly constructed.
func (this *QTest__QTouchEventWidgetSequence) Point(touchId int) *QEventPoint {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQEventPoint(C.QTest__QTouchEventWidgetSequence_protectedbase_point(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(touchId)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// PointOrPreviousPoint can only be called from a QTest__QTouchEventWidgetSequence that was directly constructed.
func (this *QTest__QTouchEventWidgetSequence) PointOrPreviousPoint(touchId int) *QEventPoint {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQEventPoint(C.QTest__QTouchEventWidgetSequence_protectedbase_pointOrPreviousPoint(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(touchId)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTest__QTouchEventWidgetSequence) callVirtualBase_Stationary(touchId int) *QTest__QTouchEventWidgetSequence {

	return newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_virtualbase_stationary(unsafe.Pointer(this.h), (C.int)(touchId)))

}
func (this *QTest__QTouchEventWidgetSequence) OnStationary(slot func(super func(touchId int) *QTest__QTouchEventWidgetSequence, touchId int) *QTest__QTouchEventWidgetSequence) {
	ok := C.QTest__QTouchEventWidgetSequence_override_virtual_stationary(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTest__QTouchEventWidgetSequence_stationary
func miqt_exec_callback_QTest__QTouchEventWidgetSequence_stationary(self *C.QTest__QTouchEventWidgetSequence, cb C.intptr_t, touchId C.int) *C.QTest__QTouchEventWidgetSequence {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(touchId int) *QTest__QTouchEventWidgetSequence, touchId int) *QTest__QTouchEventWidgetSequence)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(touchId)

	virtualReturn := gofunc((&QTest__QTouchEventWidgetSequence{h: self}).callVirtualBase_Stationary, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTest__QTouchEventWidgetSequence) callVirtualBase_Commit(processEvents bool) bool {

	return (bool)(C.QTest__QTouchEventWidgetSequence_virtualbase_commit(unsafe.Pointer(this.h), (C.bool)(processEvents)))

}
func (this *QTest__QTouchEventWidgetSequence) OnCommit(slot func(super func(processEvents bool) bool, processEvents bool) bool) {
	ok := C.QTest__QTouchEventWidgetSequence_override_virtual_commit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTest__QTouchEventWidgetSequence_commit
func miqt_exec_callback_QTest__QTouchEventWidgetSequence_commit(self *C.QTest__QTouchEventWidgetSequence, cb C.intptr_t, processEvents C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(processEvents bool) bool, processEvents bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(processEvents)

	virtualReturn := gofunc((&QTest__QTouchEventWidgetSequence{h: self}).callVirtualBase_Commit, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QTest__QTouchEventWidgetSequence) Delete() {
	C.QTest__QTouchEventWidgetSequence_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTest__QTouchEventWidgetSequence) GoGC() {
	runtime.SetFinalizer(this, func(this *QTest__QTouchEventWidgetSequence) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
