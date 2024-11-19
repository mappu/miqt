package multimedia

/*

#include "gen_qmediabindableinterface.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QMediaBindableInterface struct {
	h          *C.QMediaBindableInterface
	isSubclass bool
}

func (this *QMediaBindableInterface) cPointer() *C.QMediaBindableInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaBindableInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaBindableInterface constructs the type using only CGO pointers.
func newQMediaBindableInterface(h *C.QMediaBindableInterface) *QMediaBindableInterface {
	if h == nil {
		return nil
	}
	return &QMediaBindableInterface{h: h}
}

// UnsafeNewQMediaBindableInterface constructs the type using only unsafe pointers.
func UnsafeNewQMediaBindableInterface(h unsafe.Pointer) *QMediaBindableInterface {
	if h == nil {
		return nil
	}

	return &QMediaBindableInterface{h: (*C.QMediaBindableInterface)(h)}
}

func (this *QMediaBindableInterface) MediaObject() *QMediaObject {
	return UnsafeNewQMediaObject(unsafe.Pointer(C.QMediaBindableInterface_MediaObject(this.h)), nil)
}

// Delete this object from C++ memory.
func (this *QMediaBindableInterface) Delete() {
	C.QMediaBindableInterface_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaBindableInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaBindableInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
