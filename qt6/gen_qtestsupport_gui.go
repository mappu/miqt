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
	h *C.QTest__QTouchEventSequence
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
	return newQTest__QTouchEventSequence(C.QTest__QTouchEventSequence_press(this.h, (C.int)(touchId), pt.cPointer()))
}

func (this *QTest__QTouchEventSequence) Move(touchId int, pt *QPoint) *QTest__QTouchEventSequence {
	return newQTest__QTouchEventSequence(C.QTest__QTouchEventSequence_move(this.h, (C.int)(touchId), pt.cPointer()))
}

func (this *QTest__QTouchEventSequence) Release(touchId int, pt *QPoint) *QTest__QTouchEventSequence {
	return newQTest__QTouchEventSequence(C.QTest__QTouchEventSequence_release(this.h, (C.int)(touchId), pt.cPointer()))
}

func (this *QTest__QTouchEventSequence) Stationary(touchId int) *QTest__QTouchEventSequence {
	return newQTest__QTouchEventSequence(C.QTest__QTouchEventSequence_stationary(this.h, (C.int)(touchId)))
}

func (this *QTest__QTouchEventSequence) Commit(processEvents bool) bool {
	return (bool)(C.QTest__QTouchEventSequence_commit(this.h, (C.bool)(processEvents)))
}

func (this *QTest__QTouchEventSequence) OperatorAssign(param1 *QTest__QTouchEventSequence) {
	C.QTest__QTouchEventSequence_operatorAssign(this.h, param1.cPointer())
}

func (this *QTest__QTouchEventSequence) Press2(touchId int, pt *QPoint, window *QWindow) *QTest__QTouchEventSequence {
	return newQTest__QTouchEventSequence(C.QTest__QTouchEventSequence_press2(this.h, (C.int)(touchId), pt.cPointer(), window.cPointer()))
}

func (this *QTest__QTouchEventSequence) Move2(touchId int, pt *QPoint, window *QWindow) *QTest__QTouchEventSequence {
	return newQTest__QTouchEventSequence(C.QTest__QTouchEventSequence_move2(this.h, (C.int)(touchId), pt.cPointer(), window.cPointer()))
}

func (this *QTest__QTouchEventSequence) Release2(touchId int, pt *QPoint, window *QWindow) *QTest__QTouchEventSequence {
	return newQTest__QTouchEventSequence(C.QTest__QTouchEventSequence_release2(this.h, (C.int)(touchId), pt.cPointer(), window.cPointer()))
}

// Delete this object from C++ memory.
func (this *QTest__QTouchEventSequence) Delete() {
	C.QTest__QTouchEventSequence_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTest__QTouchEventSequence) GoGC() {
	runtime.SetFinalizer(this, func(this *QTest__QTouchEventSequence) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
