package webengine

/*

#include "gen_qwebenginedownloaditem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebEngineDownloadItem__DownloadState int

const (
	QWebEngineDownloadItem__DownloadRequested   QWebEngineDownloadItem__DownloadState = 0
	QWebEngineDownloadItem__DownloadInProgress  QWebEngineDownloadItem__DownloadState = 1
	QWebEngineDownloadItem__DownloadCompleted   QWebEngineDownloadItem__DownloadState = 2
	QWebEngineDownloadItem__DownloadCancelled   QWebEngineDownloadItem__DownloadState = 3
	QWebEngineDownloadItem__DownloadInterrupted QWebEngineDownloadItem__DownloadState = 4
)

type QWebEngineDownloadItem__SavePageFormat int

const (
	QWebEngineDownloadItem__UnknownSaveFormat      QWebEngineDownloadItem__SavePageFormat = -1
	QWebEngineDownloadItem__SingleHtmlSaveFormat   QWebEngineDownloadItem__SavePageFormat = 0
	QWebEngineDownloadItem__CompleteHtmlSaveFormat QWebEngineDownloadItem__SavePageFormat = 1
	QWebEngineDownloadItem__MimeHtmlSaveFormat     QWebEngineDownloadItem__SavePageFormat = 2
)

type QWebEngineDownloadItem__DownloadInterruptReason int

const (
	QWebEngineDownloadItem__NoReason                QWebEngineDownloadItem__DownloadInterruptReason = 0
	QWebEngineDownloadItem__FileFailed              QWebEngineDownloadItem__DownloadInterruptReason = 1
	QWebEngineDownloadItem__FileAccessDenied        QWebEngineDownloadItem__DownloadInterruptReason = 2
	QWebEngineDownloadItem__FileNoSpace             QWebEngineDownloadItem__DownloadInterruptReason = 3
	QWebEngineDownloadItem__FileNameTooLong         QWebEngineDownloadItem__DownloadInterruptReason = 5
	QWebEngineDownloadItem__FileTooLarge            QWebEngineDownloadItem__DownloadInterruptReason = 6
	QWebEngineDownloadItem__FileVirusInfected       QWebEngineDownloadItem__DownloadInterruptReason = 7
	QWebEngineDownloadItem__FileTransientError      QWebEngineDownloadItem__DownloadInterruptReason = 10
	QWebEngineDownloadItem__FileBlocked             QWebEngineDownloadItem__DownloadInterruptReason = 11
	QWebEngineDownloadItem__FileSecurityCheckFailed QWebEngineDownloadItem__DownloadInterruptReason = 12
	QWebEngineDownloadItem__FileTooShort            QWebEngineDownloadItem__DownloadInterruptReason = 13
	QWebEngineDownloadItem__FileHashMismatch        QWebEngineDownloadItem__DownloadInterruptReason = 14
	QWebEngineDownloadItem__NetworkFailed           QWebEngineDownloadItem__DownloadInterruptReason = 20
	QWebEngineDownloadItem__NetworkTimeout          QWebEngineDownloadItem__DownloadInterruptReason = 21
	QWebEngineDownloadItem__NetworkDisconnected     QWebEngineDownloadItem__DownloadInterruptReason = 22
	QWebEngineDownloadItem__NetworkServerDown       QWebEngineDownloadItem__DownloadInterruptReason = 23
	QWebEngineDownloadItem__NetworkInvalidRequest   QWebEngineDownloadItem__DownloadInterruptReason = 24
	QWebEngineDownloadItem__ServerFailed            QWebEngineDownloadItem__DownloadInterruptReason = 30
	QWebEngineDownloadItem__ServerBadContent        QWebEngineDownloadItem__DownloadInterruptReason = 33
	QWebEngineDownloadItem__ServerUnauthorized      QWebEngineDownloadItem__DownloadInterruptReason = 34
	QWebEngineDownloadItem__ServerCertProblem       QWebEngineDownloadItem__DownloadInterruptReason = 35
	QWebEngineDownloadItem__ServerForbidden         QWebEngineDownloadItem__DownloadInterruptReason = 36
	QWebEngineDownloadItem__ServerUnreachable       QWebEngineDownloadItem__DownloadInterruptReason = 37
	QWebEngineDownloadItem__UserCanceled            QWebEngineDownloadItem__DownloadInterruptReason = 40
)

type QWebEngineDownloadItem__DownloadType int

const (
	QWebEngineDownloadItem__Attachment        QWebEngineDownloadItem__DownloadType = 0
	QWebEngineDownloadItem__DownloadAttribute QWebEngineDownloadItem__DownloadType = 1
	QWebEngineDownloadItem__UserRequested     QWebEngineDownloadItem__DownloadType = 2
	QWebEngineDownloadItem__SavePage          QWebEngineDownloadItem__DownloadType = 3
)

type QWebEngineDownloadItem struct {
	h          *C.QWebEngineDownloadItem
	isSubclass bool
	*qt.QObject
}

func (this *QWebEngineDownloadItem) cPointer() *C.QWebEngineDownloadItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineDownloadItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineDownloadItem constructs the type using only CGO pointers.
func newQWebEngineDownloadItem(h *C.QWebEngineDownloadItem) *QWebEngineDownloadItem {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebEngineDownloadItem_virtbase(h, &outptr_QObject)

	return &QWebEngineDownloadItem{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebEngineDownloadItem constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineDownloadItem(h unsafe.Pointer) *QWebEngineDownloadItem {
	return newQWebEngineDownloadItem((*C.QWebEngineDownloadItem)(h))
}

func (this *QWebEngineDownloadItem) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEngineDownloadItem_MetaObject(this.h)))
}

func (this *QWebEngineDownloadItem) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebEngineDownloadItem_Metacast(this.h, param1_Cstring))
}

func QWebEngineDownloadItem_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineDownloadItem_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineDownloadItem_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineDownloadItem_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineDownloadItem) Id() uint {
	return (uint)(C.QWebEngineDownloadItem_Id(this.h))
}

func (this *QWebEngineDownloadItem) State() QWebEngineDownloadItem__DownloadState {
	return (QWebEngineDownloadItem__DownloadState)(C.QWebEngineDownloadItem_State(this.h))
}

func (this *QWebEngineDownloadItem) TotalBytes() int64 {
	return (int64)(C.QWebEngineDownloadItem_TotalBytes(this.h))
}

func (this *QWebEngineDownloadItem) ReceivedBytes() int64 {
	return (int64)(C.QWebEngineDownloadItem_ReceivedBytes(this.h))
}

func (this *QWebEngineDownloadItem) Url() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineDownloadItem_Url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineDownloadItem) MimeType() string {
	var _ms C.struct_miqt_string = C.QWebEngineDownloadItem_MimeType(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineDownloadItem) Path() string {
	var _ms C.struct_miqt_string = C.QWebEngineDownloadItem_Path(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineDownloadItem) SetPath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QWebEngineDownloadItem_SetPath(this.h, path_ms)
}

func (this *QWebEngineDownloadItem) IsFinished() bool {
	return (bool)(C.QWebEngineDownloadItem_IsFinished(this.h))
}

func (this *QWebEngineDownloadItem) IsPaused() bool {
	return (bool)(C.QWebEngineDownloadItem_IsPaused(this.h))
}

func (this *QWebEngineDownloadItem) SavePageFormat() QWebEngineDownloadItem__SavePageFormat {
	return (QWebEngineDownloadItem__SavePageFormat)(C.QWebEngineDownloadItem_SavePageFormat(this.h))
}

func (this *QWebEngineDownloadItem) SetSavePageFormat(format QWebEngineDownloadItem__SavePageFormat) {
	C.QWebEngineDownloadItem_SetSavePageFormat(this.h, (C.int)(format))
}

func (this *QWebEngineDownloadItem) Type() QWebEngineDownloadItem__DownloadType {
	return (QWebEngineDownloadItem__DownloadType)(C.QWebEngineDownloadItem_Type(this.h))
}

func (this *QWebEngineDownloadItem) InterruptReason() QWebEngineDownloadItem__DownloadInterruptReason {
	return (QWebEngineDownloadItem__DownloadInterruptReason)(C.QWebEngineDownloadItem_InterruptReason(this.h))
}

func (this *QWebEngineDownloadItem) InterruptReasonString() string {
	var _ms C.struct_miqt_string = C.QWebEngineDownloadItem_InterruptReasonString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineDownloadItem) IsSavePageDownload() bool {
	return (bool)(C.QWebEngineDownloadItem_IsSavePageDownload(this.h))
}

func (this *QWebEngineDownloadItem) SuggestedFileName() string {
	var _ms C.struct_miqt_string = C.QWebEngineDownloadItem_SuggestedFileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineDownloadItem) DownloadDirectory() string {
	var _ms C.struct_miqt_string = C.QWebEngineDownloadItem_DownloadDirectory(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineDownloadItem) SetDownloadDirectory(directory string) {
	directory_ms := C.struct_miqt_string{}
	directory_ms.data = C.CString(directory)
	directory_ms.len = C.size_t(len(directory))
	defer C.free(unsafe.Pointer(directory_ms.data))
	C.QWebEngineDownloadItem_SetDownloadDirectory(this.h, directory_ms)
}

func (this *QWebEngineDownloadItem) DownloadFileName() string {
	var _ms C.struct_miqt_string = C.QWebEngineDownloadItem_DownloadFileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineDownloadItem) SetDownloadFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QWebEngineDownloadItem_SetDownloadFileName(this.h, fileName_ms)
}

func (this *QWebEngineDownloadItem) Page() *QWebEnginePage {
	return newQWebEnginePage(C.QWebEngineDownloadItem_Page(this.h))
}

func (this *QWebEngineDownloadItem) Accept() {
	C.QWebEngineDownloadItem_Accept(this.h)
}

func (this *QWebEngineDownloadItem) Cancel() {
	C.QWebEngineDownloadItem_Cancel(this.h)
}

func (this *QWebEngineDownloadItem) Pause() {
	C.QWebEngineDownloadItem_Pause(this.h)
}

func (this *QWebEngineDownloadItem) Resume() {
	C.QWebEngineDownloadItem_Resume(this.h)
}

func (this *QWebEngineDownloadItem) Finished() {
	C.QWebEngineDownloadItem_Finished(this.h)
}
func (this *QWebEngineDownloadItem) OnFinished(slot func()) {
	C.QWebEngineDownloadItem_connect_Finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineDownloadItem_Finished
func miqt_exec_callback_QWebEngineDownloadItem_Finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEngineDownloadItem) StateChanged(state QWebEngineDownloadItem__DownloadState) {
	C.QWebEngineDownloadItem_StateChanged(this.h, (C.int)(state))
}
func (this *QWebEngineDownloadItem) OnStateChanged(slot func(state QWebEngineDownloadItem__DownloadState)) {
	C.QWebEngineDownloadItem_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineDownloadItem_StateChanged
func miqt_exec_callback_QWebEngineDownloadItem_StateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QWebEngineDownloadItem__DownloadState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebEngineDownloadItem__DownloadState)(state)

	gofunc(slotval1)
}

func (this *QWebEngineDownloadItem) DownloadProgress(bytesReceived int64, bytesTotal int64) {
	C.QWebEngineDownloadItem_DownloadProgress(this.h, (C.longlong)(bytesReceived), (C.longlong)(bytesTotal))
}
func (this *QWebEngineDownloadItem) OnDownloadProgress(slot func(bytesReceived int64, bytesTotal int64)) {
	C.QWebEngineDownloadItem_connect_DownloadProgress(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineDownloadItem_DownloadProgress
func miqt_exec_callback_QWebEngineDownloadItem_DownloadProgress(cb C.intptr_t, bytesReceived C.longlong, bytesTotal C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(bytesReceived int64, bytesTotal int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(bytesReceived)

	slotval2 := (int64)(bytesTotal)

	gofunc(slotval1, slotval2)
}

func (this *QWebEngineDownloadItem) IsPausedChanged(isPaused bool) {
	C.QWebEngineDownloadItem_IsPausedChanged(this.h, (C.bool)(isPaused))
}
func (this *QWebEngineDownloadItem) OnIsPausedChanged(slot func(isPaused bool)) {
	C.QWebEngineDownloadItem_connect_IsPausedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineDownloadItem_IsPausedChanged
func miqt_exec_callback_QWebEngineDownloadItem_IsPausedChanged(cb C.intptr_t, isPaused C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(isPaused bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(isPaused)

	gofunc(slotval1)
}

func QWebEngineDownloadItem_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineDownloadItem_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineDownloadItem_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineDownloadItem_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineDownloadItem_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineDownloadItem_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineDownloadItem_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineDownloadItem_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebEngineDownloadItem) Delete() {
	C.QWebEngineDownloadItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineDownloadItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineDownloadItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
