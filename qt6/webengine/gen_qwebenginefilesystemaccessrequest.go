package webengine

/*

#include "gen_qwebenginefilesystemaccessrequest.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QWebEngineFileSystemAccessRequest__HandleType int

const (
	QWebEngineFileSystemAccessRequest__File      QWebEngineFileSystemAccessRequest__HandleType = 0
	QWebEngineFileSystemAccessRequest__Directory QWebEngineFileSystemAccessRequest__HandleType = 1
)

type QWebEngineFileSystemAccessRequest__AccessFlag int

const (
	QWebEngineFileSystemAccessRequest__Read  QWebEngineFileSystemAccessRequest__AccessFlag = 1
	QWebEngineFileSystemAccessRequest__Write QWebEngineFileSystemAccessRequest__AccessFlag = 2
)

type QWebEngineFileSystemAccessRequest struct {
	h *C.QWebEngineFileSystemAccessRequest
}

func (this *QWebEngineFileSystemAccessRequest) cPointer() *C.QWebEngineFileSystemAccessRequest {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineFileSystemAccessRequest) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineFileSystemAccessRequest constructs the type using only CGO pointers.
func newQWebEngineFileSystemAccessRequest(h *C.QWebEngineFileSystemAccessRequest) *QWebEngineFileSystemAccessRequest {
	if h == nil {
		return nil
	}

	return &QWebEngineFileSystemAccessRequest{h: h}
}

// UnsafeNewQWebEngineFileSystemAccessRequest constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineFileSystemAccessRequest(h unsafe.Pointer) *QWebEngineFileSystemAccessRequest {
	return newQWebEngineFileSystemAccessRequest((*C.QWebEngineFileSystemAccessRequest)(h))
}

// NewQWebEngineFileSystemAccessRequest constructs a new QWebEngineFileSystemAccessRequest object.
func NewQWebEngineFileSystemAccessRequest(other *QWebEngineFileSystemAccessRequest) *QWebEngineFileSystemAccessRequest {

	return newQWebEngineFileSystemAccessRequest(C.QWebEngineFileSystemAccessRequest_new(other.cPointer()))
}

func (this *QWebEngineFileSystemAccessRequest) OperatorAssign(other *QWebEngineFileSystemAccessRequest) {
	C.QWebEngineFileSystemAccessRequest_OperatorAssign(this.h, other.cPointer())
}

func (this *QWebEngineFileSystemAccessRequest) Swap(other *QWebEngineFileSystemAccessRequest) {
	C.QWebEngineFileSystemAccessRequest_Swap(this.h, other.cPointer())
}

func (this *QWebEngineFileSystemAccessRequest) Accept() {
	C.QWebEngineFileSystemAccessRequest_Accept(this.h)
}

func (this *QWebEngineFileSystemAccessRequest) Reject() {
	C.QWebEngineFileSystemAccessRequest_Reject(this.h)
}

func (this *QWebEngineFileSystemAccessRequest) Origin() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineFileSystemAccessRequest_Origin(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineFileSystemAccessRequest) FilePath() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineFileSystemAccessRequest_FilePath(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineFileSystemAccessRequest) HandleType() QWebEngineFileSystemAccessRequest__HandleType {
	return (QWebEngineFileSystemAccessRequest__HandleType)(C.QWebEngineFileSystemAccessRequest_HandleType(this.h))
}

func (this *QWebEngineFileSystemAccessRequest) AccessFlags() QWebEngineFileSystemAccessRequest__AccessFlag {
	return (QWebEngineFileSystemAccessRequest__AccessFlag)(C.QWebEngineFileSystemAccessRequest_AccessFlags(this.h))
}

// Delete this object from C++ memory.
func (this *QWebEngineFileSystemAccessRequest) Delete() {
	C.QWebEngineFileSystemAccessRequest_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineFileSystemAccessRequest) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineFileSystemAccessRequest) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
