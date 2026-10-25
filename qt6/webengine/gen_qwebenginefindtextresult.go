package webengine

/*

#include "gen_qwebenginefindtextresult.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QWebEngineFindTextResult struct {
	h  *C.QWebEngineFindTextResult
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWebEngineFindTextResult) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QWebEngineFindTextResult) cPointer() *C.QWebEngineFindTextResult {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineFindTextResult) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineFindTextResult constructs the type using only CGO pointers.
func newQWebEngineFindTextResult(h *C.QWebEngineFindTextResult) *QWebEngineFindTextResult {
	if h == nil {
		return nil
	}

	return &QWebEngineFindTextResult{h: h}
}

// UnsafeNewQWebEngineFindTextResult constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineFindTextResult(h unsafe.Pointer) *QWebEngineFindTextResult {
	return newQWebEngineFindTextResult((*C.QWebEngineFindTextResult)(h))
}

// NewQWebEngineFindTextResult constructs a new QWebEngineFindTextResult object.
func NewQWebEngineFindTextResult() *QWebEngineFindTextResult {

	return newQWebEngineFindTextResult(C.QWebEngineFindTextResult_new())
}

// NewQWebEngineFindTextResult2 constructs a new QWebEngineFindTextResult object.
func NewQWebEngineFindTextResult2(other *QWebEngineFindTextResult) *QWebEngineFindTextResult {
	defer runtime.KeepAlive(other)

	return newQWebEngineFindTextResult(C.QWebEngineFindTextResult_new2(other.cPointer()))
}

func (this *QWebEngineFindTextResult) NumberOfMatches() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QWebEngineFindTextResult_numberOfMatches(this.h))
}

func (this *QWebEngineFindTextResult) ActiveMatch() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QWebEngineFindTextResult_activeMatch(this.h))
}

func (this *QWebEngineFindTextResult) OperatorAssign(other *QWebEngineFindTextResult) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QWebEngineFindTextResult_operatorAssign(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebEngineFindTextResult) Delete() {
	C.QWebEngineFindTextResult_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWebEngineFindTextResult) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QWebEngineFindTextResult_delete((*C.QWebEngineFindTextResult)(gc[0]))
	})
	this.miqtSetGC(gc)
}
