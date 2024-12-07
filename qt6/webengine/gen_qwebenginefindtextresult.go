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
	h          *C.QWebEngineFindTextResult
	isSubclass bool
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

	ret := newQWebEngineFindTextResult(C.QWebEngineFindTextResult_new())
	ret.isSubclass = true
	return ret
}

// NewQWebEngineFindTextResult2 constructs a new QWebEngineFindTextResult object.
func NewQWebEngineFindTextResult2(other *QWebEngineFindTextResult) *QWebEngineFindTextResult {

	ret := newQWebEngineFindTextResult(C.QWebEngineFindTextResult_new2(other.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QWebEngineFindTextResult) NumberOfMatches() int {
	return (int)(C.QWebEngineFindTextResult_NumberOfMatches(this.h))
}

func (this *QWebEngineFindTextResult) ActiveMatch() int {
	return (int)(C.QWebEngineFindTextResult_ActiveMatch(this.h))
}

func (this *QWebEngineFindTextResult) OperatorAssign(other *QWebEngineFindTextResult) {
	C.QWebEngineFindTextResult_OperatorAssign(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebEngineFindTextResult) Delete() {
	C.QWebEngineFindTextResult_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineFindTextResult) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineFindTextResult) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
