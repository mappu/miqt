package qt

/*

#include "gen_qeventloop.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QEventLoop__ProcessEventsFlag int

const (
	QEventLoop__AllEvents              QEventLoop__ProcessEventsFlag = 0
	QEventLoop__ExcludeUserInputEvents QEventLoop__ProcessEventsFlag = 1
	QEventLoop__ExcludeSocketNotifiers QEventLoop__ProcessEventsFlag = 2
	QEventLoop__WaitForMoreEvents      QEventLoop__ProcessEventsFlag = 4
	QEventLoop__X11ExcludeTimers       QEventLoop__ProcessEventsFlag = 8
	QEventLoop__EventLoopExec          QEventLoop__ProcessEventsFlag = 32
	QEventLoop__DialogExec             QEventLoop__ProcessEventsFlag = 64
)

type QEventLoop struct {
	h *C.QEventLoop
	*QObject
}

func (this *QEventLoop) cPointer() *C.QEventLoop {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QEventLoop) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQEventLoop(h *C.QEventLoop) *QEventLoop {
	if h == nil {
		return nil
	}
	return &QEventLoop{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQEventLoop(h unsafe.Pointer) *QEventLoop {
	return newQEventLoop((*C.QEventLoop)(h))
}

// NewQEventLoop constructs a new QEventLoop object.
func NewQEventLoop() *QEventLoop {
	ret := C.QEventLoop_new()
	return newQEventLoop(ret)
}

// NewQEventLoop2 constructs a new QEventLoop object.
func NewQEventLoop2(parent *QObject) *QEventLoop {
	ret := C.QEventLoop_new2(parent.cPointer())
	return newQEventLoop(ret)
}

func (this *QEventLoop) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QEventLoop_MetaObject(this.h)))
}

func (this *QEventLoop) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QEventLoop_Metacast(this.h, param1_Cstring))
}

func QEventLoop_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventLoop_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QEventLoop) ProcessEvents() bool {
	return (bool)(C.QEventLoop_ProcessEvents(this.h))
}

func (this *QEventLoop) ProcessEvents2(flags QEventLoop__ProcessEventsFlag, maximumTime int) {
	C.QEventLoop_ProcessEvents2(this.h, (C.int)(flags), (C.int)(maximumTime))
}

func (this *QEventLoop) Exec() int {
	return (int)(C.QEventLoop_Exec(this.h))
}

func (this *QEventLoop) Exit() {
	C.QEventLoop_Exit(this.h)
}

func (this *QEventLoop) IsRunning() bool {
	return (bool)(C.QEventLoop_IsRunning(this.h))
}

func (this *QEventLoop) WakeUp() {
	C.QEventLoop_WakeUp(this.h)
}

func (this *QEventLoop) Event(event *QEvent) bool {
	return (bool)(C.QEventLoop_Event(this.h, event.cPointer()))
}

func (this *QEventLoop) Quit() {
	C.QEventLoop_Quit(this.h)
}

func QEventLoop_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventLoop_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventLoop_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventLoop_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QEventLoop) ProcessEvents1(flags QEventLoop__ProcessEventsFlag) bool {
	return (bool)(C.QEventLoop_ProcessEvents1(this.h, (C.int)(flags)))
}

func (this *QEventLoop) Exec1(flags QEventLoop__ProcessEventsFlag) int {
	return (int)(C.QEventLoop_Exec1(this.h, (C.int)(flags)))
}

func (this *QEventLoop) Exit1(returnCode int) {
	C.QEventLoop_Exit1(this.h, (C.int)(returnCode))
}

// Delete this object from C++ memory.
func (this *QEventLoop) Delete() {
	C.QEventLoop_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QEventLoop) GoGC() {
	runtime.SetFinalizer(this, func(this *QEventLoop) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QEventLoopLocker struct {
	h *C.QEventLoopLocker
}

func (this *QEventLoopLocker) cPointer() *C.QEventLoopLocker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QEventLoopLocker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQEventLoopLocker(h *C.QEventLoopLocker) *QEventLoopLocker {
	if h == nil {
		return nil
	}
	return &QEventLoopLocker{h: h}
}

func UnsafeNewQEventLoopLocker(h unsafe.Pointer) *QEventLoopLocker {
	return newQEventLoopLocker((*C.QEventLoopLocker)(h))
}

// NewQEventLoopLocker constructs a new QEventLoopLocker object.
func NewQEventLoopLocker() *QEventLoopLocker {
	ret := C.QEventLoopLocker_new()
	return newQEventLoopLocker(ret)
}

// NewQEventLoopLocker2 constructs a new QEventLoopLocker object.
func NewQEventLoopLocker2(loop *QEventLoop) *QEventLoopLocker {
	ret := C.QEventLoopLocker_new2(loop.cPointer())
	return newQEventLoopLocker(ret)
}

// NewQEventLoopLocker3 constructs a new QEventLoopLocker object.
func NewQEventLoopLocker3(thread *QThread) *QEventLoopLocker {
	ret := C.QEventLoopLocker_new3(thread.cPointer())
	return newQEventLoopLocker(ret)
}

// Delete this object from C++ memory.
func (this *QEventLoopLocker) Delete() {
	C.QEventLoopLocker_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QEventLoopLocker) GoGC() {
	runtime.SetFinalizer(this, func(this *QEventLoopLocker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
