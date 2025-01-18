package webengine

/*

#include "gen_qwebenginedownloadrequest.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebEngineDownloadRequest__DownloadState int

const (
	QWebEngineDownloadRequest__DownloadRequested   QWebEngineDownloadRequest__DownloadState = 0
	QWebEngineDownloadRequest__DownloadInProgress  QWebEngineDownloadRequest__DownloadState = 1
	QWebEngineDownloadRequest__DownloadCompleted   QWebEngineDownloadRequest__DownloadState = 2
	QWebEngineDownloadRequest__DownloadCancelled   QWebEngineDownloadRequest__DownloadState = 3
	QWebEngineDownloadRequest__DownloadInterrupted QWebEngineDownloadRequest__DownloadState = 4
)

type QWebEngineDownloadRequest__SavePageFormat int

const (
	QWebEngineDownloadRequest__UnknownSaveFormat      QWebEngineDownloadRequest__SavePageFormat = -1
	QWebEngineDownloadRequest__SingleHtmlSaveFormat   QWebEngineDownloadRequest__SavePageFormat = 0
	QWebEngineDownloadRequest__CompleteHtmlSaveFormat QWebEngineDownloadRequest__SavePageFormat = 1
	QWebEngineDownloadRequest__MimeHtmlSaveFormat     QWebEngineDownloadRequest__SavePageFormat = 2
)

type QWebEngineDownloadRequest__DownloadInterruptReason int

const (
	QWebEngineDownloadRequest__NoReason                QWebEngineDownloadRequest__DownloadInterruptReason = 0
	QWebEngineDownloadRequest__FileFailed              QWebEngineDownloadRequest__DownloadInterruptReason = 1
	QWebEngineDownloadRequest__FileAccessDenied        QWebEngineDownloadRequest__DownloadInterruptReason = 2
	QWebEngineDownloadRequest__FileNoSpace             QWebEngineDownloadRequest__DownloadInterruptReason = 3
	QWebEngineDownloadRequest__FileNameTooLong         QWebEngineDownloadRequest__DownloadInterruptReason = 5
	QWebEngineDownloadRequest__FileTooLarge            QWebEngineDownloadRequest__DownloadInterruptReason = 6
	QWebEngineDownloadRequest__FileVirusInfected       QWebEngineDownloadRequest__DownloadInterruptReason = 7
	QWebEngineDownloadRequest__FileTransientError      QWebEngineDownloadRequest__DownloadInterruptReason = 10
	QWebEngineDownloadRequest__FileBlocked             QWebEngineDownloadRequest__DownloadInterruptReason = 11
	QWebEngineDownloadRequest__FileSecurityCheckFailed QWebEngineDownloadRequest__DownloadInterruptReason = 12
	QWebEngineDownloadRequest__FileTooShort            QWebEngineDownloadRequest__DownloadInterruptReason = 13
	QWebEngineDownloadRequest__FileHashMismatch        QWebEngineDownloadRequest__DownloadInterruptReason = 14
	QWebEngineDownloadRequest__NetworkFailed           QWebEngineDownloadRequest__DownloadInterruptReason = 20
	QWebEngineDownloadRequest__NetworkTimeout          QWebEngineDownloadRequest__DownloadInterruptReason = 21
	QWebEngineDownloadRequest__NetworkDisconnected     QWebEngineDownloadRequest__DownloadInterruptReason = 22
	QWebEngineDownloadRequest__NetworkServerDown       QWebEngineDownloadRequest__DownloadInterruptReason = 23
	QWebEngineDownloadRequest__NetworkInvalidRequest   QWebEngineDownloadRequest__DownloadInterruptReason = 24
	QWebEngineDownloadRequest__ServerFailed            QWebEngineDownloadRequest__DownloadInterruptReason = 30
	QWebEngineDownloadRequest__ServerBadContent        QWebEngineDownloadRequest__DownloadInterruptReason = 33
	QWebEngineDownloadRequest__ServerUnauthorized      QWebEngineDownloadRequest__DownloadInterruptReason = 34
	QWebEngineDownloadRequest__ServerCertProblem       QWebEngineDownloadRequest__DownloadInterruptReason = 35
	QWebEngineDownloadRequest__ServerForbidden         QWebEngineDownloadRequest__DownloadInterruptReason = 36
	QWebEngineDownloadRequest__ServerUnreachable       QWebEngineDownloadRequest__DownloadInterruptReason = 37
	QWebEngineDownloadRequest__UserCanceled            QWebEngineDownloadRequest__DownloadInterruptReason = 40
)

type QWebEngineDownloadRequest struct {
	h          *C.QWebEngineDownloadRequest
	isSubclass bool
	*qt6.QObject
}

func (this *QWebEngineDownloadRequest) cPointer() *C.QWebEngineDownloadRequest {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineDownloadRequest) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineDownloadRequest constructs the type using only CGO pointers.
func newQWebEngineDownloadRequest(h *C.QWebEngineDownloadRequest) *QWebEngineDownloadRequest {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebEngineDownloadRequest_virtbase(h, &outptr_QObject)

	return &QWebEngineDownloadRequest{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebEngineDownloadRequest constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineDownloadRequest(h unsafe.Pointer) *QWebEngineDownloadRequest {
	return newQWebEngineDownloadRequest((*C.QWebEngineDownloadRequest)(h))
}

func (this *QWebEngineDownloadRequest) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEngineDownloadRequest_MetaObject(this.h)))
}

func (this *QWebEngineDownloadRequest) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebEngineDownloadRequest_Metacast(this.h, param1_Cstring))
}

func QWebEngineDownloadRequest_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineDownloadRequest_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineDownloadRequest) Id() uint {
	return (uint)(C.QWebEngineDownloadRequest_Id(this.h))
}

func (this *QWebEngineDownloadRequest) State() QWebEngineDownloadRequest__DownloadState {
	return (QWebEngineDownloadRequest__DownloadState)(C.QWebEngineDownloadRequest_State(this.h))
}

func (this *QWebEngineDownloadRequest) TotalBytes() int64 {
	return (int64)(C.QWebEngineDownloadRequest_TotalBytes(this.h))
}

func (this *QWebEngineDownloadRequest) ReceivedBytes() int64 {
	return (int64)(C.QWebEngineDownloadRequest_ReceivedBytes(this.h))
}

func (this *QWebEngineDownloadRequest) Url() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineDownloadRequest_Url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineDownloadRequest) MimeType() string {
	var _ms C.struct_miqt_string = C.QWebEngineDownloadRequest_MimeType(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineDownloadRequest) IsFinished() bool {
	return (bool)(C.QWebEngineDownloadRequest_IsFinished(this.h))
}

func (this *QWebEngineDownloadRequest) IsPaused() bool {
	return (bool)(C.QWebEngineDownloadRequest_IsPaused(this.h))
}

func (this *QWebEngineDownloadRequest) SavePageFormat() QWebEngineDownloadRequest__SavePageFormat {
	return (QWebEngineDownloadRequest__SavePageFormat)(C.QWebEngineDownloadRequest_SavePageFormat(this.h))
}

func (this *QWebEngineDownloadRequest) SetSavePageFormat(format QWebEngineDownloadRequest__SavePageFormat) {
	C.QWebEngineDownloadRequest_SetSavePageFormat(this.h, (C.int)(format))
}

func (this *QWebEngineDownloadRequest) InterruptReason() QWebEngineDownloadRequest__DownloadInterruptReason {
	return (QWebEngineDownloadRequest__DownloadInterruptReason)(C.QWebEngineDownloadRequest_InterruptReason(this.h))
}

func (this *QWebEngineDownloadRequest) InterruptReasonString() string {
	var _ms C.struct_miqt_string = C.QWebEngineDownloadRequest_InterruptReasonString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineDownloadRequest) IsSavePageDownload() bool {
	return (bool)(C.QWebEngineDownloadRequest_IsSavePageDownload(this.h))
}

func (this *QWebEngineDownloadRequest) SuggestedFileName() string {
	var _ms C.struct_miqt_string = C.QWebEngineDownloadRequest_SuggestedFileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineDownloadRequest) DownloadDirectory() string {
	var _ms C.struct_miqt_string = C.QWebEngineDownloadRequest_DownloadDirectory(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineDownloadRequest) SetDownloadDirectory(directory string) {
	directory_ms := C.struct_miqt_string{}
	directory_ms.data = C.CString(directory)
	directory_ms.len = C.size_t(len(directory))
	defer C.free(unsafe.Pointer(directory_ms.data))
	C.QWebEngineDownloadRequest_SetDownloadDirectory(this.h, directory_ms)
}

func (this *QWebEngineDownloadRequest) DownloadFileName() string {
	var _ms C.struct_miqt_string = C.QWebEngineDownloadRequest_DownloadFileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineDownloadRequest) SetDownloadFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QWebEngineDownloadRequest_SetDownloadFileName(this.h, fileName_ms)
}

func (this *QWebEngineDownloadRequest) Page() *QWebEnginePage {
	return newQWebEnginePage(C.QWebEngineDownloadRequest_Page(this.h))
}

func (this *QWebEngineDownloadRequest) Accept() {
	C.QWebEngineDownloadRequest_Accept(this.h)
}

func (this *QWebEngineDownloadRequest) Cancel() {
	C.QWebEngineDownloadRequest_Cancel(this.h)
}

func (this *QWebEngineDownloadRequest) Pause() {
	C.QWebEngineDownloadRequest_Pause(this.h)
}

func (this *QWebEngineDownloadRequest) Resume() {
	C.QWebEngineDownloadRequest_Resume(this.h)
}

func (this *QWebEngineDownloadRequest) StateChanged(state QWebEngineDownloadRequest__DownloadState) {
	C.QWebEngineDownloadRequest_StateChanged(this.h, (C.int)(state))
}
func (this *QWebEngineDownloadRequest) OnStateChanged(slot func(state QWebEngineDownloadRequest__DownloadState)) {
	C.QWebEngineDownloadRequest_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineDownloadRequest_StateChanged
func miqt_exec_callback_QWebEngineDownloadRequest_StateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QWebEngineDownloadRequest__DownloadState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebEngineDownloadRequest__DownloadState)(state)

	gofunc(slotval1)
}

func (this *QWebEngineDownloadRequest) SavePageFormatChanged() {
	C.QWebEngineDownloadRequest_SavePageFormatChanged(this.h)
}
func (this *QWebEngineDownloadRequest) OnSavePageFormatChanged(slot func()) {
	C.QWebEngineDownloadRequest_connect_SavePageFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineDownloadRequest_SavePageFormatChanged
func miqt_exec_callback_QWebEngineDownloadRequest_SavePageFormatChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEngineDownloadRequest) ReceivedBytesChanged() {
	C.QWebEngineDownloadRequest_ReceivedBytesChanged(this.h)
}
func (this *QWebEngineDownloadRequest) OnReceivedBytesChanged(slot func()) {
	C.QWebEngineDownloadRequest_connect_ReceivedBytesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineDownloadRequest_ReceivedBytesChanged
func miqt_exec_callback_QWebEngineDownloadRequest_ReceivedBytesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEngineDownloadRequest) TotalBytesChanged() {
	C.QWebEngineDownloadRequest_TotalBytesChanged(this.h)
}
func (this *QWebEngineDownloadRequest) OnTotalBytesChanged(slot func()) {
	C.QWebEngineDownloadRequest_connect_TotalBytesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineDownloadRequest_TotalBytesChanged
func miqt_exec_callback_QWebEngineDownloadRequest_TotalBytesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEngineDownloadRequest) InterruptReasonChanged() {
	C.QWebEngineDownloadRequest_InterruptReasonChanged(this.h)
}
func (this *QWebEngineDownloadRequest) OnInterruptReasonChanged(slot func()) {
	C.QWebEngineDownloadRequest_connect_InterruptReasonChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineDownloadRequest_InterruptReasonChanged
func miqt_exec_callback_QWebEngineDownloadRequest_InterruptReasonChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEngineDownloadRequest) IsFinishedChanged() {
	C.QWebEngineDownloadRequest_IsFinishedChanged(this.h)
}
func (this *QWebEngineDownloadRequest) OnIsFinishedChanged(slot func()) {
	C.QWebEngineDownloadRequest_connect_IsFinishedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineDownloadRequest_IsFinishedChanged
func miqt_exec_callback_QWebEngineDownloadRequest_IsFinishedChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEngineDownloadRequest) IsPausedChanged() {
	C.QWebEngineDownloadRequest_IsPausedChanged(this.h)
}
func (this *QWebEngineDownloadRequest) OnIsPausedChanged(slot func()) {
	C.QWebEngineDownloadRequest_connect_IsPausedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineDownloadRequest_IsPausedChanged
func miqt_exec_callback_QWebEngineDownloadRequest_IsPausedChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEngineDownloadRequest) DownloadDirectoryChanged() {
	C.QWebEngineDownloadRequest_DownloadDirectoryChanged(this.h)
}
func (this *QWebEngineDownloadRequest) OnDownloadDirectoryChanged(slot func()) {
	C.QWebEngineDownloadRequest_connect_DownloadDirectoryChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineDownloadRequest_DownloadDirectoryChanged
func miqt_exec_callback_QWebEngineDownloadRequest_DownloadDirectoryChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEngineDownloadRequest) DownloadFileNameChanged() {
	C.QWebEngineDownloadRequest_DownloadFileNameChanged(this.h)
}
func (this *QWebEngineDownloadRequest) OnDownloadFileNameChanged(slot func()) {
	C.QWebEngineDownloadRequest_connect_DownloadFileNameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineDownloadRequest_DownloadFileNameChanged
func miqt_exec_callback_QWebEngineDownloadRequest_DownloadFileNameChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QWebEngineDownloadRequest_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineDownloadRequest_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineDownloadRequest_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineDownloadRequest_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebEngineDownloadRequest) Delete() {
	C.QWebEngineDownloadRequest_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineDownloadRequest) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineDownloadRequest) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
