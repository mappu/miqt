package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qeventloop.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
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

func newQEventLoop(h *C.QEventLoop) *QEventLoop {
	return &QEventLoop{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQEventLoop_U(h unsafe.Pointer) *QEventLoop {
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
	ret := C.QEventLoop_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QEventLoop_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QEventLoop_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QEventLoop_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QEventLoop_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QEventLoop) ProcessEvents() bool {
	ret := C.QEventLoop_ProcessEvents(this.h)
	return (bool)(ret)
}

func (this *QEventLoop) ProcessEvents2(flags int, maximumTime int) {
	C.QEventLoop_ProcessEvents2(this.h, (C.int)(flags), (C.int)(maximumTime))
}

func (this *QEventLoop) Exec() int {
	ret := C.QEventLoop_Exec(this.h)
	return (int)(ret)
}

func (this *QEventLoop) Exit() {
	C.QEventLoop_Exit(this.h)
}

func (this *QEventLoop) IsRunning() bool {
	ret := C.QEventLoop_IsRunning(this.h)
	return (bool)(ret)
}

func (this *QEventLoop) WakeUp() {
	C.QEventLoop_WakeUp(this.h)
}

func (this *QEventLoop) Event(event *QEvent) bool {
	ret := C.QEventLoop_Event(this.h, event.cPointer())
	return (bool)(ret)
}

func (this *QEventLoop) Quit() {
	C.QEventLoop_Quit(this.h)
}

func QEventLoop_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QEventLoop_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QEventLoop_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QEventLoop_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QEventLoop_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QEventLoop_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QEventLoop_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QEventLoop_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QEventLoop) ProcessEvents1(flags int) bool {
	ret := C.QEventLoop_ProcessEvents1(this.h, (C.int)(flags))
	return (bool)(ret)
}

func (this *QEventLoop) Exec1(flags int) int {
	ret := C.QEventLoop_Exec1(this.h, (C.int)(flags))
	return (int)(ret)
}

func (this *QEventLoop) Exit1(returnCode int) {
	C.QEventLoop_Exit1(this.h, (C.int)(returnCode))
}

func (this *QEventLoop) Delete() {
	C.QEventLoop_Delete(this.h)
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

func newQEventLoopLocker(h *C.QEventLoopLocker) *QEventLoopLocker {
	return &QEventLoopLocker{h: h}
}

func newQEventLoopLocker_U(h unsafe.Pointer) *QEventLoopLocker {
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

func (this *QEventLoopLocker) Delete() {
	C.QEventLoopLocker_Delete(this.h)
}
