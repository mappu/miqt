package qwt

/*

#include "gen_qwt_sampling_thread.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtSamplingThread struct {
	h  *C.QwtSamplingThread
	gc *[1]unsafe.Pointer
	*qt.QThread
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtSamplingThread) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtSamplingThread) cPointer() *C.QwtSamplingThread {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtSamplingThread) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtSamplingThread constructs the type using only CGO pointers.
func newQwtSamplingThread(h *C.QwtSamplingThread) *QwtSamplingThread {
	if h == nil {
		return nil
	}
	var outptr_QThread *C.QThread = nil
	C.QwtSamplingThread_virtbase(h, &outptr_QThread)

	return &QwtSamplingThread{h: h,
		QThread: qt.UnsafeNewQThread(unsafe.Pointer(outptr_QThread))}
}

// UnsafeNewQwtSamplingThread constructs the type using only unsafe pointers.
func UnsafeNewQwtSamplingThread(h unsafe.Pointer) *QwtSamplingThread {
	return newQwtSamplingThread((*C.QwtSamplingThread)(h))
}

func (this *QwtSamplingThread) MetaObject() *qt.QMetaObject {
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtSamplingThread_metaObject(this.h)))
}

func (this *QwtSamplingThread) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtSamplingThread_metacast(this.h, param1_Cstring))
}

func QwtSamplingThread_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtSamplingThread_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtSamplingThread_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtSamplingThread_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtSamplingThread) Interval() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtSamplingThread_interval(this.h))
}

func (this *QwtSamplingThread) Elapsed() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtSamplingThread_elapsed(this.h))
}

func (this *QwtSamplingThread) SetInterval(interval float64) {
	defer runtime.KeepAlive(this)
	C.QwtSamplingThread_setInterval(this.h, (C.double)(interval))
}

func (this *QwtSamplingThread) Stop() {
	defer runtime.KeepAlive(this)
	C.QwtSamplingThread_stop(this.h)
}

func QwtSamplingThread_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtSamplingThread_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtSamplingThread_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtSamplingThread_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtSamplingThread_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtSamplingThread_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtSamplingThread_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtSamplingThread_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QwtSamplingThread) Delete() {
	C.QwtSamplingThread_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtSamplingThread) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtSamplingThread_delete((*C.QwtSamplingThread)(gc[0]))
	})
	this.miqtSetGC(gc)
}
