package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qthreadpool.h"
#include <stdlib.h>

*/
import "C"

import (
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

func newQThreadPool(h *C.QThreadPool) *QThreadPool {
	return &QThreadPool{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQThreadPool_U(h unsafe.Pointer) *QThreadPool {
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
	ret := C.QThreadPool_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QThreadPool_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QThreadPool_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QThreadPool_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QThreadPool_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QThreadPool_GlobalInstance() *QThreadPool {
	ret := C.QThreadPool_GlobalInstance()
	return newQThreadPool_U(unsafe.Pointer(ret))
}

func (this *QThreadPool) Start(runnable *QRunnable) {
	C.QThreadPool_Start(this.h, runnable.cPointer())
}

func (this *QThreadPool) TryStart(runnable *QRunnable) bool {
	ret := C.QThreadPool_TryStart(this.h, runnable.cPointer())
	return (bool)(ret)
}

func (this *QThreadPool) ExpiryTimeout() int {
	ret := C.QThreadPool_ExpiryTimeout(this.h)
	return (int)(ret)
}

func (this *QThreadPool) SetExpiryTimeout(expiryTimeout int) {
	C.QThreadPool_SetExpiryTimeout(this.h, (C.int)(expiryTimeout))
}

func (this *QThreadPool) MaxThreadCount() int {
	ret := C.QThreadPool_MaxThreadCount(this.h)
	return (int)(ret)
}

func (this *QThreadPool) SetMaxThreadCount(maxThreadCount int) {
	C.QThreadPool_SetMaxThreadCount(this.h, (C.int)(maxThreadCount))
}

func (this *QThreadPool) ActiveThreadCount() int {
	ret := C.QThreadPool_ActiveThreadCount(this.h)
	return (int)(ret)
}

func (this *QThreadPool) SetStackSize(stackSize uint) {
	C.QThreadPool_SetStackSize(this.h, (C.uint)(stackSize))
}

func (this *QThreadPool) StackSize() uint {
	ret := C.QThreadPool_StackSize(this.h)
	return (uint)(ret)
}

func (this *QThreadPool) ReserveThread() {
	C.QThreadPool_ReserveThread(this.h)
}

func (this *QThreadPool) ReleaseThread() {
	C.QThreadPool_ReleaseThread(this.h)
}

func (this *QThreadPool) WaitForDone() bool {
	ret := C.QThreadPool_WaitForDone(this.h)
	return (bool)(ret)
}

func (this *QThreadPool) Clear() {
	C.QThreadPool_Clear(this.h)
}

func (this *QThreadPool) Contains(thread *QThread) bool {
	ret := C.QThreadPool_Contains(this.h, thread.cPointer())
	return (bool)(ret)
}

func (this *QThreadPool) Cancel(runnable *QRunnable) {
	C.QThreadPool_Cancel(this.h, runnable.cPointer())
}

func (this *QThreadPool) TryTake(runnable *QRunnable) bool {
	ret := C.QThreadPool_TryTake(this.h, runnable.cPointer())
	return (bool)(ret)
}

func QThreadPool_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QThreadPool_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QThreadPool_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QThreadPool_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QThreadPool_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QThreadPool_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QThreadPool_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QThreadPool_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QThreadPool) Start2(runnable *QRunnable, priority int) {
	C.QThreadPool_Start2(this.h, runnable.cPointer(), (C.int)(priority))
}

func (this *QThreadPool) WaitForDone1(msecs int) bool {
	ret := C.QThreadPool_WaitForDone1(this.h, (C.int)(msecs))
	return (bool)(ret)
}

func (this *QThreadPool) Delete() {
	C.QThreadPool_Delete(this.h)
}
