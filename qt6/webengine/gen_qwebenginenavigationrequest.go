package webengine

/*

#include "gen_qwebenginenavigationrequest.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebEngineNavigationRequest__NavigationType int

const (
	QWebEngineNavigationRequest__LinkClickedNavigation   QWebEngineNavigationRequest__NavigationType = 0
	QWebEngineNavigationRequest__TypedNavigation         QWebEngineNavigationRequest__NavigationType = 1
	QWebEngineNavigationRequest__FormSubmittedNavigation QWebEngineNavigationRequest__NavigationType = 2
	QWebEngineNavigationRequest__BackForwardNavigation   QWebEngineNavigationRequest__NavigationType = 3
	QWebEngineNavigationRequest__ReloadNavigation        QWebEngineNavigationRequest__NavigationType = 4
	QWebEngineNavigationRequest__OtherNavigation         QWebEngineNavigationRequest__NavigationType = 5
	QWebEngineNavigationRequest__RedirectNavigation      QWebEngineNavigationRequest__NavigationType = 6
)

type QWebEngineNavigationRequest__NavigationRequestAction int

const (
	QWebEngineNavigationRequest__AcceptRequest QWebEngineNavigationRequest__NavigationRequestAction = 0
	QWebEngineNavigationRequest__IgnoreRequest QWebEngineNavigationRequest__NavigationRequestAction = 255
)

type QWebEngineNavigationRequest struct {
	h          *C.QWebEngineNavigationRequest
	isSubclass bool
	*qt6.QObject
}

func (this *QWebEngineNavigationRequest) cPointer() *C.QWebEngineNavigationRequest {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineNavigationRequest) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineNavigationRequest constructs the type using only CGO pointers.
func newQWebEngineNavigationRequest(h *C.QWebEngineNavigationRequest) *QWebEngineNavigationRequest {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebEngineNavigationRequest_virtbase(h, &outptr_QObject)

	return &QWebEngineNavigationRequest{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebEngineNavigationRequest constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineNavigationRequest(h unsafe.Pointer) *QWebEngineNavigationRequest {
	return newQWebEngineNavigationRequest((*C.QWebEngineNavigationRequest)(h))
}

func (this *QWebEngineNavigationRequest) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEngineNavigationRequest_MetaObject(this.h)))
}

func (this *QWebEngineNavigationRequest) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebEngineNavigationRequest_Metacast(this.h, param1_Cstring))
}

func QWebEngineNavigationRequest_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineNavigationRequest_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineNavigationRequest) Url() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineNavigationRequest_Url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineNavigationRequest) IsMainFrame() bool {
	return (bool)(C.QWebEngineNavigationRequest_IsMainFrame(this.h))
}

func (this *QWebEngineNavigationRequest) NavigationType() QWebEngineNavigationRequest__NavigationType {
	return (QWebEngineNavigationRequest__NavigationType)(C.QWebEngineNavigationRequest_NavigationType(this.h))
}

func (this *QWebEngineNavigationRequest) Accept() {
	C.QWebEngineNavigationRequest_Accept(this.h)
}

func (this *QWebEngineNavigationRequest) Reject() {
	C.QWebEngineNavigationRequest_Reject(this.h)
}

func (this *QWebEngineNavigationRequest) ActionChanged() {
	C.QWebEngineNavigationRequest_ActionChanged(this.h)
}
func (this *QWebEngineNavigationRequest) OnActionChanged(slot func()) {
	C.QWebEngineNavigationRequest_connect_ActionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineNavigationRequest_ActionChanged
func miqt_exec_callback_QWebEngineNavigationRequest_ActionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QWebEngineNavigationRequest_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineNavigationRequest_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineNavigationRequest_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineNavigationRequest_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebEngineNavigationRequest) Delete() {
	C.QWebEngineNavigationRequest_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineNavigationRequest) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineNavigationRequest) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
