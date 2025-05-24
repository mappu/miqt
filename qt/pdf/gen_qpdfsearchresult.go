package pdf

/*

#include "gen_qpdfsearchresult.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QPdfSearchResult struct {
	h *C.QPdfSearchResult
	*QPdfDestination
}

func (this *QPdfSearchResult) cPointer() *C.QPdfSearchResult {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPdfSearchResult) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPdfSearchResult constructs the type using only CGO pointers.
func newQPdfSearchResult(h *C.QPdfSearchResult) *QPdfSearchResult {
	if h == nil {
		return nil
	}
	var outptr_QPdfDestination *C.QPdfDestination = nil
	C.QPdfSearchResult_virtbase(h, &outptr_QPdfDestination)

	return &QPdfSearchResult{h: h,
		QPdfDestination: newQPdfDestination(outptr_QPdfDestination)}
}

// UnsafeNewQPdfSearchResult constructs the type using only unsafe pointers.
func UnsafeNewQPdfSearchResult(h unsafe.Pointer) *QPdfSearchResult {
	return newQPdfSearchResult((*C.QPdfSearchResult)(h))
}

// NewQPdfSearchResult constructs a new QPdfSearchResult object.
func NewQPdfSearchResult() *QPdfSearchResult {

	return newQPdfSearchResult(C.QPdfSearchResult_new())
}

// NewQPdfSearchResult2 constructs a new QPdfSearchResult object.
func NewQPdfSearchResult2(param1 *QPdfSearchResult) *QPdfSearchResult {

	return newQPdfSearchResult(C.QPdfSearchResult_new2(param1.cPointer()))
}

func (this *QPdfSearchResult) ContextBefore() string {
	var _ms C.struct_miqt_string = C.QPdfSearchResult_contextBefore(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfSearchResult) ContextAfter() string {
	var _ms C.struct_miqt_string = C.QPdfSearchResult_contextAfter(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfSearchResult) Rectangles() []qt.QRectF {
	var _ma C.struct_miqt_array = C.QPdfSearchResult_rectangles(this.h)
	_ret := make([]qt.QRectF, int(_ma.len))
	_outCast := (*[0xffff]*C.QRectF)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(_outCast[i]))
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QPdfSearchResult) OperatorAssign(param1 *QPdfSearchResult) {
	C.QPdfSearchResult_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QPdfSearchResult) Delete() {
	C.QPdfSearchResult_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPdfSearchResult) GoGC() {
	runtime.SetFinalizer(this, func(this *QPdfSearchResult) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
