package qt6

/*

#include "gen_qtestsupport_gui.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTest__QTouchEventSequence struct {
	h  *C.QTest__QTouchEventSequence
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTest__QTouchEventSequence) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QTest__QTouchEventSequence) cPointer() *C.QTest__QTouchEventSequence {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTest__QTouchEventSequence) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTest__QTouchEventSequence constructs the type using only CGO pointers.
func newQTest__QTouchEventSequence(h *C.QTest__QTouchEventSequence) *QTest__QTouchEventSequence {
	if h == nil {
		return nil
	}

	return &QTest__QTouchEventSequence{h: h}
}

// UnsafeNewQTest__QTouchEventSequence constructs the type using only unsafe pointers.
func UnsafeNewQTest__QTouchEventSequence(h unsafe.Pointer) *QTest__QTouchEventSequence {
	return newQTest__QTouchEventSequence((*C.QTest__QTouchEventSequence)(h))
}

func (this *QTest__QTouchEventSequence) Press(touchId int, pt *QPoint) *QTest__QTouchEventSequence {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pt)
	_ret := newQTest__QTouchEventSequence(C.QTest__QTouchEventSequence_press(this.h, (C.int)(touchId), pt.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTest__QTouchEventSequence) Move(touchId int, pt *QPoint) *QTest__QTouchEventSequence {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pt)
	_ret := newQTest__QTouchEventSequence(C.QTest__QTouchEventSequence_move(this.h, (C.int)(touchId), pt.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTest__QTouchEventSequence) Release(touchId int, pt *QPoint) *QTest__QTouchEventSequence {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pt)
	_ret := newQTest__QTouchEventSequence(C.QTest__QTouchEventSequence_release(this.h, (C.int)(touchId), pt.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTest__QTouchEventSequence) Stationary(touchId int) *QTest__QTouchEventSequence {
	defer runtime.KeepAlive(this)
	_ret := newQTest__QTouchEventSequence(C.QTest__QTouchEventSequence_stationary(this.h, (C.int)(touchId)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTest__QTouchEventSequence) Commit(processEvents bool) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTest__QTouchEventSequence_commit(this.h, (C.bool)(processEvents)))
}

func (this *QTest__QTouchEventSequence) OperatorAssign(param1 *QTest__QTouchEventSequence) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QTest__QTouchEventSequence_operatorAssign(this.h, param1.cPointer())
}

func (this *QTest__QTouchEventSequence) Press2(touchId int, pt *QPoint, window *QWindow) *QTest__QTouchEventSequence {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pt)
	_ret := newQTest__QTouchEventSequence(C.QTest__QTouchEventSequence_press2(this.h, (C.int)(touchId), pt.cPointer(), window.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTest__QTouchEventSequence) Move2(touchId int, pt *QPoint, window *QWindow) *QTest__QTouchEventSequence {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pt)
	_ret := newQTest__QTouchEventSequence(C.QTest__QTouchEventSequence_move2(this.h, (C.int)(touchId), pt.cPointer(), window.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTest__QTouchEventSequence) Release2(touchId int, pt *QPoint, window *QWindow) *QTest__QTouchEventSequence {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pt)
	_ret := newQTest__QTouchEventSequence(C.QTest__QTouchEventSequence_release2(this.h, (C.int)(touchId), pt.cPointer(), window.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

// Delete this object from C++ memory.
func (this *QTest__QTouchEventSequence) Delete() {
	C.QTest__QTouchEventSequence_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTest__QTouchEventSequence) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTest__QTouchEventSequence_delete((*C.QTest__QTouchEventSequence)(gc[0]))
	})
	this.miqtSetGC(gc)
}

func HandleTouchEvent2(w *QWindow, device *QPointingDevice, points []QEventPoint, mods KeyboardModifier) {
	defer runtime.KeepAlive(w)
	defer runtime.KeepAlive(device)
	defer runtime.KeepAlive(points)
	points_CArray_ptr := (**C.QEventPoint)(C.malloc(C.size_t(8 * len(points))))
	defer C.free(unsafe.Pointer(points_CArray_ptr))
	points_CArray := unsafe.Slice(points_CArray_ptr, len(points))
	for i := range points {
		points_CArray[i] = points[i].cPointer()
	}
	points_ma := C.struct_miqt_array{len: C.size_t(len(points)), data: unsafe.Pointer(points_CArray_ptr)}
	C.miqt_HandleTouchEvent2(w.cPointer(), device.cPointer(), points_ma, (C.int)(mods))
}

func HandleTouchEventv22(w *QWindow, device *QPointingDevice, points []QEventPoint, mods KeyboardModifier) bool {
	defer runtime.KeepAlive(w)
	defer runtime.KeepAlive(device)
	defer runtime.KeepAlive(points)
	points_CArray_ptr := (**C.QEventPoint)(C.malloc(C.size_t(8 * len(points))))
	defer C.free(unsafe.Pointer(points_CArray_ptr))
	points_CArray := unsafe.Slice(points_CArray_ptr, len(points))
	for i := range points {
		points_CArray[i] = points[i].cPointer()
	}
	points_ma := C.struct_miqt_array{len: C.size_t(len(points)), data: unsafe.Pointer(points_CArray_ptr)}
	return (bool)(C.miqt_HandleTouchEventv22(w.cPointer(), device.cPointer(), points_ma, (C.int)(mods)))
}

func QTest_QWaitForWindowActive2(window *QWindow, timeout int) bool {
	defer runtime.KeepAlive(window)
	return (bool)(C.miqt_QTest_QWaitForWindowActive2(window.cPointer(), (C.int)(timeout)))
}

func QTest_QWaitForWindowExposed2(window *QWindow, timeout int) bool {
	defer runtime.KeepAlive(window)
	return (bool)(C.miqt_QTest_QWaitForWindowExposed2(window.cPointer(), (C.int)(timeout)))
}

func QTest_CreateTouchDevice2(devType QInputDevice__DeviceType, caps QInputDevice__Capability) *QPointingDevice {
	return newQPointingDevice(C.miqt_QTest_CreateTouchDevice2((C.int)(devType), (C.int)(caps)))
}
