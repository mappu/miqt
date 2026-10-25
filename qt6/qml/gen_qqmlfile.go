package qml

/*

#include "gen_qqmlfile.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QQmlFile__Status int

const (
	QQmlFile__Null    QQmlFile__Status = 0
	QQmlFile__Ready   QQmlFile__Status = 1
	QQmlFile__Error   QQmlFile__Status = 2
	QQmlFile__Loading QQmlFile__Status = 3
)

type QQmlFile struct {
	h  *C.QQmlFile
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QQmlFile) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QQmlFile) cPointer() *C.QQmlFile {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlFile) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlFile constructs the type using only CGO pointers.
func newQQmlFile(h *C.QQmlFile) *QQmlFile {
	if h == nil {
		return nil
	}

	return &QQmlFile{h: h}
}

// UnsafeNewQQmlFile constructs the type using only unsafe pointers.
func UnsafeNewQQmlFile(h unsafe.Pointer) *QQmlFile {
	return newQQmlFile((*C.QQmlFile)(h))
}

// NewQQmlFile constructs a new QQmlFile object.
func NewQQmlFile() *QQmlFile {

	return newQQmlFile(C.QQmlFile_new())
}

// NewQQmlFile2 constructs a new QQmlFile object.
func NewQQmlFile2(param1 *QQmlEngine, param2 *qt6.QUrl) *QQmlFile {
	defer runtime.KeepAlive(param1)
	defer runtime.KeepAlive(param2)

	return newQQmlFile(C.QQmlFile_new2(param1.cPointer(), (*C.QUrl)(param2.UnsafePointer())))
}

// NewQQmlFile3 constructs a new QQmlFile object.
func NewQQmlFile3(param1 *QQmlEngine, param2 string) *QQmlFile {
	defer runtime.KeepAlive(param1)
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))

	return newQQmlFile(C.QQmlFile_new3(param1.cPointer(), param2_ms))
}

func (this *QQmlFile) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QQmlFile_isNull(this.h))
}

func (this *QQmlFile) IsReady() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QQmlFile_isReady(this.h))
}

func (this *QQmlFile) IsError() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QQmlFile_isError(this.h))
}

func (this *QQmlFile) IsLoading() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QQmlFile_isLoading(this.h))
}

func (this *QQmlFile) Url() *qt6.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QQmlFile_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlFile) Status() QQmlFile__Status {
	defer runtime.KeepAlive(this)
	return (QQmlFile__Status)(C.QQmlFile_status(this.h))
}

func (this *QQmlFile) Error() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QQmlFile_error(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlFile) Size() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QQmlFile_size(this.h))
}

func (this *QQmlFile) Data() string {
	defer runtime.KeepAlive(this)
	_ret := C.QQmlFile_data(this.h)
	return C.GoString(_ret)
}

func (this *QQmlFile) DataByteArray() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QQmlFile_dataByteArray(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QQmlFile) Load(param1 *QQmlEngine, param2 *qt6.QUrl) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	defer runtime.KeepAlive(param2)
	C.QQmlFile_load(this.h, param1.cPointer(), (*C.QUrl)(param2.UnsafePointer()))
}

func (this *QQmlFile) Load2(param1 *QQmlEngine, param2 string) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	C.QQmlFile_load2(this.h, param1.cPointer(), param2_ms)
}

func (this *QQmlFile) Clear() {
	defer runtime.KeepAlive(this)
	C.QQmlFile_clear(this.h)
}

func (this *QQmlFile) ClearWithQObject(param1 *qt6.QObject) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QQmlFile_clearWithQObject(this.h, (*C.QObject)(param1.UnsafePointer()))
}

func (this *QQmlFile) ConnectFinished(param1 *qt6.QObject, param2 string) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	param2_Cstring := C.CString(param2)
	defer C.free(unsafe.Pointer(param2_Cstring))
	return (bool)(C.QQmlFile_connectFinished(this.h, (*C.QObject)(param1.UnsafePointer()), param2_Cstring))
}

func (this *QQmlFile) ConnectFinished2(param1 *qt6.QObject, param2 int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (bool)(C.QQmlFile_connectFinished2(this.h, (*C.QObject)(param1.UnsafePointer()), (C.int)(param2)))
}

func (this *QQmlFile) ConnectDownloadProgress(param1 *qt6.QObject, param2 string) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	param2_Cstring := C.CString(param2)
	defer C.free(unsafe.Pointer(param2_Cstring))
	return (bool)(C.QQmlFile_connectDownloadProgress(this.h, (*C.QObject)(param1.UnsafePointer()), param2_Cstring))
}

func (this *QQmlFile) ConnectDownloadProgress2(param1 *qt6.QObject, param2 int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (bool)(C.QQmlFile_connectDownloadProgress2(this.h, (*C.QObject)(param1.UnsafePointer()), (C.int)(param2)))
}

func QQmlFile_IsSynchronous(url string) bool {
	url_ms := C.struct_miqt_string{}
	url_ms.data = C.CString(url)
	url_ms.len = C.size_t(len(url))
	defer C.free(unsafe.Pointer(url_ms.data))
	return (bool)(C.QQmlFile_isSynchronous(url_ms))
}

func QQmlFile_IsSynchronousWithUrl(url *qt6.QUrl) bool {
	defer runtime.KeepAlive(url)
	return (bool)(C.QQmlFile_isSynchronousWithUrl((*C.QUrl)(url.UnsafePointer())))
}

func QQmlFile_IsLocalFile(url string) bool {
	url_ms := C.struct_miqt_string{}
	url_ms.data = C.CString(url)
	url_ms.len = C.size_t(len(url))
	defer C.free(unsafe.Pointer(url_ms.data))
	return (bool)(C.QQmlFile_isLocalFile(url_ms))
}

func QQmlFile_IsLocalFileWithUrl(url *qt6.QUrl) bool {
	defer runtime.KeepAlive(url)
	return (bool)(C.QQmlFile_isLocalFileWithUrl((*C.QUrl)(url.UnsafePointer())))
}

func QQmlFile_UrlToLocalFileOrQrc(param1 string) string {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	var _ms C.struct_miqt_string = C.QQmlFile_urlToLocalFileOrQrc(param1_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QQmlFile_UrlToLocalFileOrQrcWithQUrl(param1 *qt6.QUrl) string {
	defer runtime.KeepAlive(param1)
	var _ms C.struct_miqt_string = C.QQmlFile_urlToLocalFileOrQrcWithQUrl((*C.QUrl)(param1.UnsafePointer()))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QQmlFile) Delete() {
	C.QQmlFile_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QQmlFile) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QQmlFile_delete((*C.QQmlFile)(gc[0]))
	})
	this.miqtSetGC(gc)
}
