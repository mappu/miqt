package qt

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
	QGestureRecognizer__ResultFlag__Ignore           QGestureRecognizer__ResultFlag = 1
	QGestureRecognizer__ResultFlag__MayBeGesture     QGestureRecognizer__ResultFlag = 2
	QGestureRecognizer__ResultFlag__TriggerGesture   QGestureRecognizer__ResultFlag = 4
	QGestureRecognizer__ResultFlag__FinishGesture    QGestureRecognizer__ResultFlag = 8
	QGestureRecognizer__ResultFlag__CancelGesture    QGestureRecognizer__ResultFlag = 16
	QGestureRecognizer__ResultFlag__ResultState_Mask QGestureRecognizer__ResultFlag = 255
	QGestureRecognizer__ResultFlag__ConsumeEventHint QGestureRecognizer__ResultFlag = 256
	QGestureRecognizer__ResultFlag__ResultHint_Mask  QGestureRecognizer__ResultFlag = 65280
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

func newQGestureRecognizer(h *C.QGestureRecognizer) *QGestureRecognizer {
	if h == nil {
		return nil
	}
	return &QGestureRecognizer{h: h}
}

func newQGestureRecognizer_U(h unsafe.Pointer) *QGestureRecognizer {
	return newQGestureRecognizer((*C.QGestureRecognizer)(h))
}

func (this *QGestureRecognizer) Create(target *QObject) *QGesture {
	return newQGesture_U(unsafe.Pointer(C.QGestureRecognizer_Create(this.h, target.cPointer())))
}

func (this *QGestureRecognizer) Recognize(state *QGesture, watched *QObject, event *QEvent) int {
	return (int)(C.QGestureRecognizer_Recognize(this.h, state.cPointer(), watched.cPointer(), event.cPointer()))
}

func (this *QGestureRecognizer) Reset(state *QGesture) {
	C.QGestureRecognizer_Reset(this.h, state.cPointer())
}

func QGestureRecognizer_RegisterRecognizer(recognizer *QGestureRecognizer) GestureType {
	return (GestureType)(C.QGestureRecognizer_RegisterRecognizer(recognizer.cPointer()))
}

func QGestureRecognizer_UnregisterRecognizer(typeVal GestureType) {
	C.QGestureRecognizer_UnregisterRecognizer((C.uintptr_t)(typeVal))
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
