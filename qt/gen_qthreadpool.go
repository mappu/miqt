package qt

/*

#include "gen_qthreadpool.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QThreadPool struct {
	h *C.QThreadPool
	*QObject
}

func (this *QThreadPool) cPointer() *C.QThreadPool {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QThreadPool) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQThreadPool(h *C.QThreadPool) *QThreadPool {
	if h == nil {
		return nil
	}
	return &QThreadPool{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQThreadPool(h unsafe.Pointer) *QThreadPool {
	return newQThreadPool((*C.QThreadPool)(h))
}

// NewQThreadPool constructs a new QThreadPool object.
func NewQThreadPool() *QThreadPool {
	ret := C.QThreadPool_new()
	return newQThreadPool(ret)
}

// NewQThreadPool2 constructs a new QThreadPool object.
func NewQThreadPool2(parent *QObject) *QThreadPool {
	ret := C.QThreadPool_new2(parent.cPointer())
	return newQThreadPool(ret)
}

func (this *QThreadPool) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QThreadPool_MetaObject(this.h)))
}

func (this *QThreadPool) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QThreadPool_Metacast(this.h, param1_Cstring))
}

func QThreadPool_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QThreadPool_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThreadPool_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QThreadPool_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThreadPool_GlobalInstance() *QThreadPool {
	return UnsafeNewQThreadPool(unsafe.Pointer(C.QThreadPool_GlobalInstance()))
}

func (this *QThreadPool) Start(runnable *QRunnable) {
	C.QThreadPool_Start(this.h, runnable.cPointer())
}

func (this *QThreadPool) TryStart(runnable *QRunnable) bool {
	return (bool)(C.QThreadPool_TryStart(this.h, runnable.cPointer()))
}

func (this *QThreadPool) ExpiryTimeout() int {
	return (int)(C.QThreadPool_ExpiryTimeout(this.h))
}

func (this *QThreadPool) SetExpiryTimeout(expiryTimeout int) {
	C.QThreadPool_SetExpiryTimeout(this.h, (C.int)(expiryTimeout))
}

func (this *QThreadPool) MaxThreadCount() int {
	return (int)(C.QThreadPool_MaxThreadCount(this.h))
}

func (this *QThreadPool) SetMaxThreadCount(maxThreadCount int) {
	C.QThreadPool_SetMaxThreadCount(this.h, (C.int)(maxThreadCount))
}

func (this *QThreadPool) ActiveThreadCount() int {
	return (int)(C.QThreadPool_ActiveThreadCount(this.h))
}

func (this *QThreadPool) SetStackSize(stackSize uint) {
	C.QThreadPool_SetStackSize(this.h, (C.uint)(stackSize))
}

func (this *QThreadPool) StackSize() uint {
	return (uint)(C.QThreadPool_StackSize(this.h))
}

func (this *QThreadPool) ReserveThread() {
	C.QThreadPool_ReserveThread(this.h)
}

func (this *QThreadPool) ReleaseThread() {
	C.QThreadPool_ReleaseThread(this.h)
}

func (this *QThreadPool) WaitForDone() bool {
	return (bool)(C.QThreadPool_WaitForDone(this.h))
}

func (this *QThreadPool) Clear() {
	C.QThreadPool_Clear(this.h)
}

func (this *QThreadPool) Contains(thread *QThread) bool {
	return (bool)(C.QThreadPool_Contains(this.h, thread.cPointer()))
}

func (this *QThreadPool) Cancel(runnable *QRunnable) {
	C.QThreadPool_Cancel(this.h, runnable.cPointer())
}

func (this *QThreadPool) TryTake(runnable *QRunnable) bool {
	return (bool)(C.QThreadPool_TryTake(this.h, runnable.cPointer()))
}

func QThreadPool_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThreadPool_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThreadPool_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThreadPool_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThreadPool_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThreadPool_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThreadPool_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThreadPool_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QThreadPool) Start2(runnable *QRunnable, priority int) {
	C.QThreadPool_Start2(this.h, runnable.cPointer(), (C.int)(priority))
}

func (this *QThreadPool) WaitForDone1(msecs int) bool {
	return (bool)(C.QThreadPool_WaitForDone1(this.h, (C.int)(msecs)))
}

// Delete this object from C++ memory.
func (this *QThreadPool) Delete() {
	C.QThreadPool_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QThreadPool) GoGC() {
	runtime.SetFinalizer(this, func(this *QThreadPool) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
