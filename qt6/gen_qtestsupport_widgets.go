package qt6

/*

#include "gen_qtestsupport_widgets.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

func newQTest__QTouchEventWidgetSequence(h *C.QTest__QTouchEventWidgetSequence) *QTest__QTouchEventWidgetSequence {
	if h == nil {
		return nil
	}
	return &QTest__QTouchEventWidgetSequence{h: h, QTest__QTouchEventSequence: UnsafeNewQTest__QTouchEventSequence(unsafe.Pointer(h))}
}

func UnsafeNewQTest__QTouchEventWidgetSequence(h unsafe.Pointer) *QTest__QTouchEventWidgetSequence {
	return newQTest__QTouchEventWidgetSequence((*C.QTest__QTouchEventWidgetSequence)(h))
}

// NewQTest__QTouchEventWidgetSequence constructs a new QTest::QTouchEventWidgetSequence object.
func NewQTest__QTouchEventWidgetSequence(param1 *QTest__QTouchEventWidgetSequence) *QTest__QTouchEventWidgetSequence {
	ret := C.QTest__QTouchEventWidgetSequence_new(param1.cPointer())
	return newQTest__QTouchEventWidgetSequence(ret)
}

func (this *QTest__QTouchEventWidgetSequence) Press(touchId int, pt *QPoint) *QTest__QTouchEventWidgetSequence {
	return UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_Press(this.h, (C.int)(touchId), pt.cPointer())))
}

func (this *QTest__QTouchEventWidgetSequence) Move(touchId int, pt *QPoint) *QTest__QTouchEventWidgetSequence {
	return UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_Move(this.h, (C.int)(touchId), pt.cPointer())))
}

func (this *QTest__QTouchEventWidgetSequence) Release(touchId int, pt *QPoint) *QTest__QTouchEventWidgetSequence {
	return UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_Release(this.h, (C.int)(touchId), pt.cPointer())))
}

func (this *QTest__QTouchEventWidgetSequence) Stationary(touchId int) *QTest__QTouchEventWidgetSequence {
	return UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_Stationary(this.h, (C.int)(touchId))))
}

func (this *QTest__QTouchEventWidgetSequence) Commit() bool {
	return (bool)(C.QTest__QTouchEventWidgetSequence_Commit(this.h))
}

func (this *QTest__QTouchEventWidgetSequence) Press3(touchId int, pt *QPoint, widget *QWidget) *QTest__QTouchEventWidgetSequence {
	return UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_Press3(this.h, (C.int)(touchId), pt.cPointer(), widget.cPointer())))
}

func (this *QTest__QTouchEventWidgetSequence) Move3(touchId int, pt *QPoint, widget *QWidget) *QTest__QTouchEventWidgetSequence {
	return UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_Move3(this.h, (C.int)(touchId), pt.cPointer(), widget.cPointer())))
}

func (this *QTest__QTouchEventWidgetSequence) Release3(touchId int, pt *QPoint, widget *QWidget) *QTest__QTouchEventWidgetSequence {
	return UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_Release3(this.h, (C.int)(touchId), pt.cPointer(), widget.cPointer())))
}

func (this *QTest__QTouchEventWidgetSequence) Commit1(processEvents bool) bool {
	return (bool)(C.QTest__QTouchEventWidgetSequence_Commit1(this.h, (C.bool)(processEvents)))
}

// Delete this object from C++ memory.
func (this *QTest__QTouchEventWidgetSequence) Delete() {
	C.QTest__QTouchEventWidgetSequence_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTest__QTouchEventWidgetSequence) GoGC() {
	runtime.SetFinalizer(this, func(this *QTest__QTouchEventWidgetSequence) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
