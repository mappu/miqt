package webengine

/*

#include "gen_qwebengineloadinginfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QWebEngineLoadingInfo__LoadStatus int

const (
	QWebEngineLoadingInfo__LoadStartedStatus   QWebEngineLoadingInfo__LoadStatus = 0
	QWebEngineLoadingInfo__LoadStoppedStatus   QWebEngineLoadingInfo__LoadStatus = 1
	QWebEngineLoadingInfo__LoadSucceededStatus QWebEngineLoadingInfo__LoadStatus = 2
	QWebEngineLoadingInfo__LoadFailedStatus    QWebEngineLoadingInfo__LoadStatus = 3
)

type QWebEngineLoadingInfo__ErrorDomain int

const (
	QWebEngineLoadingInfo__NoErrorDomain          QWebEngineLoadingInfo__ErrorDomain = 0
	QWebEngineLoadingInfo__InternalErrorDomain    QWebEngineLoadingInfo__ErrorDomain = 1
	QWebEngineLoadingInfo__ConnectionErrorDomain  QWebEngineLoadingInfo__ErrorDomain = 2
	QWebEngineLoadingInfo__CertificateErrorDomain QWebEngineLoadingInfo__ErrorDomain = 3
	QWebEngineLoadingInfo__HttpErrorDomain        QWebEngineLoadingInfo__ErrorDomain = 4
	QWebEngineLoadingInfo__FtpErrorDomain         QWebEngineLoadingInfo__ErrorDomain = 5
	QWebEngineLoadingInfo__DnsErrorDomain         QWebEngineLoadingInfo__ErrorDomain = 6
	QWebEngineLoadingInfo__HttpStatusCodeDomain   QWebEngineLoadingInfo__ErrorDomain = 7
)

type QWebEngineLoadingInfo struct {
	h          *C.QWebEngineLoadingInfo
	isSubclass bool
}

func (this *QWebEngineLoadingInfo) cPointer() *C.QWebEngineLoadingInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineLoadingInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineLoadingInfo constructs the type using only CGO pointers.
func newQWebEngineLoadingInfo(h *C.QWebEngineLoadingInfo) *QWebEngineLoadingInfo {
	if h == nil {
		return nil
	}

	return &QWebEngineLoadingInfo{h: h}
}

// UnsafeNewQWebEngineLoadingInfo constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineLoadingInfo(h unsafe.Pointer) *QWebEngineLoadingInfo {
	return newQWebEngineLoadingInfo((*C.QWebEngineLoadingInfo)(h))
}

// NewQWebEngineLoadingInfo constructs a new QWebEngineLoadingInfo object.
func NewQWebEngineLoadingInfo(other *QWebEngineLoadingInfo) *QWebEngineLoadingInfo {

	ret := newQWebEngineLoadingInfo(C.QWebEngineLoadingInfo_new(other.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QWebEngineLoadingInfo) OperatorAssign(other *QWebEngineLoadingInfo) {
	C.QWebEngineLoadingInfo_OperatorAssign(this.h, other.cPointer())
}

func (this *QWebEngineLoadingInfo) Url() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineLoadingInfo_Url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineLoadingInfo) IsErrorPage() bool {
	return (bool)(C.QWebEngineLoadingInfo_IsErrorPage(this.h))
}

func (this *QWebEngineLoadingInfo) Status() QWebEngineLoadingInfo__LoadStatus {
	return (QWebEngineLoadingInfo__LoadStatus)(C.QWebEngineLoadingInfo_Status(this.h))
}

func (this *QWebEngineLoadingInfo) ErrorString() string {
	var _ms C.struct_miqt_string = C.QWebEngineLoadingInfo_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineLoadingInfo) ErrorDomain() QWebEngineLoadingInfo__ErrorDomain {
	return (QWebEngineLoadingInfo__ErrorDomain)(C.QWebEngineLoadingInfo_ErrorDomain(this.h))
}

func (this *QWebEngineLoadingInfo) ErrorCode() int {
	return (int)(C.QWebEngineLoadingInfo_ErrorCode(this.h))
}

// Delete this object from C++ memory.
func (this *QWebEngineLoadingInfo) Delete() {
	C.QWebEngineLoadingInfo_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineLoadingInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineLoadingInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
