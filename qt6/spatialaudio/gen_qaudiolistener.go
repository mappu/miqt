package spatialaudio

/*

#include "gen_qaudiolistener.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QAudioListener struct {
	h *C.QAudioListener
	*qt6.QObject
}

func (this *QAudioListener) cPointer() *C.QAudioListener {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioListener) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAudioListener(h *C.QAudioListener) *QAudioListener {
	if h == nil {
		return nil
	}
	return &QAudioListener{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQAudioListener(h unsafe.Pointer) *QAudioListener {
	return newQAudioListener((*C.QAudioListener)(h))
}

// NewQAudioListener constructs a new QAudioListener object.
func NewQAudioListener(engine *QAudioEngine) *QAudioListener {
	ret := C.QAudioListener_new(engine.cPointer())
	return newQAudioListener(ret)
}

func (this *QAudioListener) SetPosition(pos qt6.QVector3D) {
	C.QAudioListener_SetPosition(this.h, (*C.QVector3D)(pos.UnsafePointer()))
}

func (this *QAudioListener) Position() *qt6.QVector3D {
	_ret := C.QAudioListener_Position(this.h)
	_goptr := qt6.UnsafeNewQVector3D(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioListener) SetRotation(q *qt6.QQuaternion) {
	C.QAudioListener_SetRotation(this.h, (*C.QQuaternion)(q.UnsafePointer()))
}

func (this *QAudioListener) Rotation() *qt6.QQuaternion {
	_ret := C.QAudioListener_Rotation(this.h)
	_goptr := qt6.UnsafeNewQQuaternion(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioListener) Engine() *QAudioEngine {
	return UnsafeNewQAudioEngine(unsafe.Pointer(C.QAudioListener_Engine(this.h)))
}

// Delete this object from C++ memory.
func (this *QAudioListener) Delete() {
	C.QAudioListener_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioListener) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioListener) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
