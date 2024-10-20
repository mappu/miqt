package qt6

/*

#include "gen_qgesturerecognizer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

func newQGestureRecognizer(h *C.QGestureRecognizer) *QGestureRecognizer {
	if h == nil {
		return nil
	}
	return &QGestureRecognizer{h: h}
}

func UnsafeNewQGestureRecognizer(h unsafe.Pointer) *QGestureRecognizer {
	return newQGestureRecognizer((*C.QGestureRecognizer)(h))
}

func (this *QGestureRecognizer) Create(target *QObject) *QGesture {
	return UnsafeNewQGesture(unsafe.Pointer(C.QGestureRecognizer_Create(this.h, target.cPointer())))
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
