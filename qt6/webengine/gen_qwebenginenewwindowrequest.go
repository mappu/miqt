package webengine

/*

#include "gen_qwebenginenewwindowrequest.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QWebEngineNewWindowRequest__DestinationType int

const (
	QWebEngineNewWindowRequest__InNewWindow        QWebEngineNewWindowRequest__DestinationType = 0
	QWebEngineNewWindowRequest__InNewTab           QWebEngineNewWindowRequest__DestinationType = 1
	QWebEngineNewWindowRequest__InNewDialog        QWebEngineNewWindowRequest__DestinationType = 2
	QWebEngineNewWindowRequest__InNewBackgroundTab QWebEngineNewWindowRequest__DestinationType = 3
)

type QWebEngineNewWindowRequest struct {
	h *C.QWebEngineNewWindowRequest
	*qt6.QObject
}

func (this *QWebEngineNewWindowRequest) cPointer() *C.QWebEngineNewWindowRequest {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineNewWindowRequest) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineNewWindowRequest constructs the type using only CGO pointers.
func newQWebEngineNewWindowRequest(h *C.QWebEngineNewWindowRequest) *QWebEngineNewWindowRequest {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebEngineNewWindowRequest_virtbase(h, &outptr_QObject)

	return &QWebEngineNewWindowRequest{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebEngineNewWindowRequest constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineNewWindowRequest(h unsafe.Pointer) *QWebEngineNewWindowRequest {
	return newQWebEngineNewWindowRequest((*C.QWebEngineNewWindowRequest)(h))
}

func (this *QWebEngineNewWindowRequest) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEngineNewWindowRequest_metaObject(this.h)))
}

func (this *QWebEngineNewWindowRequest) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebEngineNewWindowRequest_metacast(this.h, param1_Cstring))
}

func QWebEngineNewWindowRequest_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineNewWindowRequest_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineNewWindowRequest) Destination() QWebEngineNewWindowRequest__DestinationType {
	return (QWebEngineNewWindowRequest__DestinationType)(C.QWebEngineNewWindowRequest_destination(this.h))
}

func (this *QWebEngineNewWindowRequest) RequestedUrl() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineNewWindowRequest_requestedUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineNewWindowRequest) RequestedGeometry() *qt6.QRect {
	_goptr := qt6.UnsafeNewQRect(unsafe.Pointer(C.QWebEngineNewWindowRequest_requestedGeometry(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineNewWindowRequest) IsUserInitiated() bool {
	return (bool)(C.QWebEngineNewWindowRequest_isUserInitiated(this.h))
}

func (this *QWebEngineNewWindowRequest) OpenIn(param1 *QWebEnginePage) {
	C.QWebEngineNewWindowRequest_openIn(this.h, param1.cPointer())
}

func QWebEngineNewWindowRequest_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineNewWindowRequest_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineNewWindowRequest_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineNewWindowRequest_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebEngineNewWindowRequest) Delete() {
	C.QWebEngineNewWindowRequest_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineNewWindowRequest) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineNewWindowRequest) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
