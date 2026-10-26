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
	h  *C.QTest__QTouchEventWidgetSequence
	gc *[1]unsafe.Pointer
	*QTest__QTouchEventSequence
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTest__QTouchEventWidgetSequence) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QTest__QTouchEventSequence.miqtSetGC(gc)
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
	defer runtime.KeepAlive(param1)

	return newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_new(param1.cPointer()))
}

func (this *QTest__QTouchEventWidgetSequence) Press(touchId int, pt *QPoint) *QTest__QTouchEventWidgetSequence {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pt)
	_ret := newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_press(this.h, (C.int)(touchId), pt.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTest__QTouchEventWidgetSequence) Move(touchId int, pt *QPoint) *QTest__QTouchEventWidgetSequence {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pt)
	_ret := newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_move(this.h, (C.int)(touchId), pt.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTest__QTouchEventWidgetSequence) Release(touchId int, pt *QPoint) *QTest__QTouchEventWidgetSequence {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pt)
	_ret := newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_release(this.h, (C.int)(touchId), pt.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTest__QTouchEventWidgetSequence) Stationary(touchId int) *QTest__QTouchEventWidgetSequence {
	defer runtime.KeepAlive(this)
	_ret := newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_stationary(this.h, (C.int)(touchId)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTest__QTouchEventWidgetSequence) Commit(processEvents bool) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTest__QTouchEventWidgetSequence_commit(this.h, (C.bool)(processEvents)))
}

func (this *QTest__QTouchEventWidgetSequence) OperatorAssign(param1 *QTest__QTouchEventWidgetSequence) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QTest__QTouchEventWidgetSequence_operatorAssign(this.h, param1.cPointer())
}

func (this *QTest__QTouchEventWidgetSequence) Press2(touchId int, pt *QPoint, widget *QWidget) *QTest__QTouchEventWidgetSequence {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pt)
	defer runtime.KeepAlive(widget)
	_ret := newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_press2(this.h, (C.int)(touchId), pt.cPointer(), widget.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTest__QTouchEventWidgetSequence) Move2(touchId int, pt *QPoint, widget *QWidget) *QTest__QTouchEventWidgetSequence {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pt)
	defer runtime.KeepAlive(widget)
	_ret := newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_move2(this.h, (C.int)(touchId), pt.cPointer(), widget.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTest__QTouchEventWidgetSequence) Release2(touchId int, pt *QPoint, widget *QWidget) *QTest__QTouchEventWidgetSequence {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pt)
	defer runtime.KeepAlive(widget)
	_ret := newQTest__QTouchEventWidgetSequence(C.QTest__QTouchEventWidgetSequence_release2(this.h, (C.int)(touchId), pt.cPointer(), widget.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

// Point can only be called from a QTest__QTouchEventWidgetSequence that was directly constructed.
func (this *QTest__QTouchEventWidgetSequence) Point(touchId int) *QEventPoint {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQEventPoint(C.QTest__QTouchEventWidgetSequence_protectedbase_point(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(touchId)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// PointOrPreviousPoint can only be called from a QTest__QTouchEventWidgetSequence that was directly constructed.
func (this *QTest__QTouchEventWidgetSequence) PointOrPreviousPoint(touchId int) *QEventPoint {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQEventPoint(C.QTest__QTouchEventWidgetSequence_protectedbase_pointOrPreviousPoint(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(touchId)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTest__QTouchEventWidgetSequence) callVirtualBase_Stationary(touchId int) *QTest__QTouchEventWidgetSequence {
	defer runtime.KeepAlive(this)

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
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

func (this *QTest__QTouchEventWidgetSequence) callVirtualBase_Commit(processEvents bool) bool {
	defer runtime.KeepAlive(this)

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

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTest__QTouchEventWidgetSequence) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTest__QTouchEventWidgetSequence_delete((*C.QTest__QTouchEventWidgetSequence)(gc[0]))
	})
	this.miqtSetGC(gc)
}

func QTest_QWaitForWindowActive3(widget *QWidget, timeout int) bool {
	defer runtime.KeepAlive(widget)
	return (bool)(C.miqt_QTest_QWaitForWindowActive3(widget.cPointer(), (C.int)(timeout)))
}

func QTest_QWaitForWindowExposed3(widget *QWidget, timeout int) bool {
	defer runtime.KeepAlive(widget)
	return (bool)(C.miqt_QTest_QWaitForWindowExposed3(widget.cPointer(), (C.int)(timeout)))
}
