package webengine

/*

#include "gen_qwebenginenotification.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebEngineNotification struct {
	h          *C.QWebEngineNotification
	isSubclass bool
	*qt.QObject
}

func (this *QWebEngineNotification) cPointer() *C.QWebEngineNotification {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineNotification) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineNotification constructs the type using only CGO pointers.
func newQWebEngineNotification(h *C.QWebEngineNotification) *QWebEngineNotification {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebEngineNotification_virtbase(h, &outptr_QObject)

	return &QWebEngineNotification{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebEngineNotification constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineNotification(h unsafe.Pointer) *QWebEngineNotification {
	return newQWebEngineNotification((*C.QWebEngineNotification)(h))
}

func (this *QWebEngineNotification) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEngineNotification_MetaObject(this.h)))
}

func (this *QWebEngineNotification) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebEngineNotification_Metacast(this.h, param1_Cstring))
}

func QWebEngineNotification_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineNotification_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineNotification_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineNotification_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineNotification) Matches(other *QWebEngineNotification) bool {
	return (bool)(C.QWebEngineNotification_Matches(this.h, other.cPointer()))
}

func (this *QWebEngineNotification) Origin() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineNotification_Origin(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineNotification) Icon() *qt.QImage {
	_goptr := qt.UnsafeNewQImage(unsafe.Pointer(C.QWebEngineNotification_Icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineNotification) Title() string {
	var _ms C.struct_miqt_string = C.QWebEngineNotification_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineNotification) Message() string {
	var _ms C.struct_miqt_string = C.QWebEngineNotification_Message(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineNotification) Tag() string {
	var _ms C.struct_miqt_string = C.QWebEngineNotification_Tag(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineNotification) Language() string {
	var _ms C.struct_miqt_string = C.QWebEngineNotification_Language(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineNotification) Direction() qt.LayoutDirection {
	return (qt.LayoutDirection)(C.QWebEngineNotification_Direction(this.h))
}

func (this *QWebEngineNotification) Show() {
	C.QWebEngineNotification_Show(this.h)
}

func (this *QWebEngineNotification) Click() {
	C.QWebEngineNotification_Click(this.h)
}

func (this *QWebEngineNotification) Close() {
	C.QWebEngineNotification_Close(this.h)
}

func (this *QWebEngineNotification) Closed() {
	C.QWebEngineNotification_Closed(this.h)
}
func (this *QWebEngineNotification) OnClosed(slot func()) {
	C.QWebEngineNotification_connect_Closed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineNotification_Closed
func miqt_exec_callback_QWebEngineNotification_Closed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QWebEngineNotification_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineNotification_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineNotification_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineNotification_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineNotification_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineNotification_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineNotification_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineNotification_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebEngineNotification) Delete() {
	C.QWebEngineNotification_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineNotification) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineNotification) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
