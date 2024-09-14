package qt

/*

#include "gen_qfuturewatcher.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFutureWatcherBase struct {
	h *C.QFutureWatcherBase
	*QObject
}

func (this *QFutureWatcherBase) cPointer() *C.QFutureWatcherBase {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFutureWatcherBase(h *C.QFutureWatcherBase) *QFutureWatcherBase {
	if h == nil {
		return nil
	}
	return &QFutureWatcherBase{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQFutureWatcherBase_U(h unsafe.Pointer) *QFutureWatcherBase {
	return newQFutureWatcherBase((*C.QFutureWatcherBase)(h))
}

func (this *QFutureWatcherBase) MetaObject() *QMetaObject {
	_ret := C.QFutureWatcherBase_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QFutureWatcherBase_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFutureWatcherBase_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFutureWatcherBase_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFutureWatcherBase_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFutureWatcherBase) ProgressValue() int {
	_ret := C.QFutureWatcherBase_ProgressValue(this.h)
	return (int)(_ret)
}

func (this *QFutureWatcherBase) ProgressMinimum() int {
	_ret := C.QFutureWatcherBase_ProgressMinimum(this.h)
	return (int)(_ret)
}

func (this *QFutureWatcherBase) ProgressMaximum() int {
	_ret := C.QFutureWatcherBase_ProgressMaximum(this.h)
	return (int)(_ret)
}

func (this *QFutureWatcherBase) ProgressText() string {
	var _ms *C.struct_miqt_string = C.QFutureWatcherBase_ProgressText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFutureWatcherBase) IsStarted() bool {
	_ret := C.QFutureWatcherBase_IsStarted(this.h)
	return (bool)(_ret)
}

func (this *QFutureWatcherBase) IsFinished() bool {
	_ret := C.QFutureWatcherBase_IsFinished(this.h)
	return (bool)(_ret)
}

func (this *QFutureWatcherBase) IsRunning() bool {
	_ret := C.QFutureWatcherBase_IsRunning(this.h)
	return (bool)(_ret)
}

func (this *QFutureWatcherBase) IsCanceled() bool {
	_ret := C.QFutureWatcherBase_IsCanceled(this.h)
	return (bool)(_ret)
}

func (this *QFutureWatcherBase) IsPaused() bool {
	_ret := C.QFutureWatcherBase_IsPaused(this.h)
	return (bool)(_ret)
}

func (this *QFutureWatcherBase) WaitForFinished() {
	C.QFutureWatcherBase_WaitForFinished(this.h)
}

func (this *QFutureWatcherBase) SetPendingResultsLimit(limit int) {
	C.QFutureWatcherBase_SetPendingResultsLimit(this.h, (C.int)(limit))
}

func (this *QFutureWatcherBase) Event(event *QEvent) bool {
	_ret := C.QFutureWatcherBase_Event(this.h, event.cPointer())
	return (bool)(_ret)
}

func (this *QFutureWatcherBase) Started() {
	C.QFutureWatcherBase_Started(this.h)
}
func (this *QFutureWatcherBase) OnStarted(slot func()) {
	C.QFutureWatcherBase_connect_Started(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QFutureWatcherBase_Started
func miqt_exec_callback_QFutureWatcherBase_Started(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) Finished() {
	C.QFutureWatcherBase_Finished(this.h)
}
func (this *QFutureWatcherBase) OnFinished(slot func()) {
	C.QFutureWatcherBase_connect_Finished(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QFutureWatcherBase_Finished
func miqt_exec_callback_QFutureWatcherBase_Finished(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) Canceled() {
	C.QFutureWatcherBase_Canceled(this.h)
}
func (this *QFutureWatcherBase) OnCanceled(slot func()) {
	C.QFutureWatcherBase_connect_Canceled(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QFutureWatcherBase_Canceled
func miqt_exec_callback_QFutureWatcherBase_Canceled(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) Paused() {
	C.QFutureWatcherBase_Paused(this.h)
}
func (this *QFutureWatcherBase) OnPaused(slot func()) {
	C.QFutureWatcherBase_connect_Paused(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QFutureWatcherBase_Paused
func miqt_exec_callback_QFutureWatcherBase_Paused(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) Resumed() {
	C.QFutureWatcherBase_Resumed(this.h)
}
func (this *QFutureWatcherBase) OnResumed(slot func()) {
	C.QFutureWatcherBase_connect_Resumed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QFutureWatcherBase_Resumed
func miqt_exec_callback_QFutureWatcherBase_Resumed(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) ResultReadyAt(resultIndex int) {
	C.QFutureWatcherBase_ResultReadyAt(this.h, (C.int)(resultIndex))
}
func (this *QFutureWatcherBase) OnResultReadyAt(slot func(resultIndex int)) {
	C.QFutureWatcherBase_connect_ResultReadyAt(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QFutureWatcherBase_ResultReadyAt
func miqt_exec_callback_QFutureWatcherBase_ResultReadyAt(cb *C.void, resultIndex C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(resultIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	resultIndex_ret := resultIndex
	slotval1 := (int)(resultIndex_ret)

	gofunc(slotval1)
}

func (this *QFutureWatcherBase) ResultsReadyAt(beginIndex int, endIndex int) {
	C.QFutureWatcherBase_ResultsReadyAt(this.h, (C.int)(beginIndex), (C.int)(endIndex))
}
func (this *QFutureWatcherBase) OnResultsReadyAt(slot func(beginIndex int, endIndex int)) {
	C.QFutureWatcherBase_connect_ResultsReadyAt(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QFutureWatcherBase_ResultsReadyAt
func miqt_exec_callback_QFutureWatcherBase_ResultsReadyAt(cb *C.void, beginIndex C.int, endIndex C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(beginIndex int, endIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	beginIndex_ret := beginIndex
	slotval1 := (int)(beginIndex_ret)

	endIndex_ret := endIndex
	slotval2 := (int)(endIndex_ret)

	gofunc(slotval1, slotval2)
}

func (this *QFutureWatcherBase) ProgressRangeChanged(minimum int, maximum int) {
	C.QFutureWatcherBase_ProgressRangeChanged(this.h, (C.int)(minimum), (C.int)(maximum))
}
func (this *QFutureWatcherBase) OnProgressRangeChanged(slot func(minimum int, maximum int)) {
	C.QFutureWatcherBase_connect_ProgressRangeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QFutureWatcherBase_ProgressRangeChanged
func miqt_exec_callback_QFutureWatcherBase_ProgressRangeChanged(cb *C.void, minimum C.int, maximum C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(minimum int, maximum int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	minimum_ret := minimum
	slotval1 := (int)(minimum_ret)

	maximum_ret := maximum
	slotval2 := (int)(maximum_ret)

	gofunc(slotval1, slotval2)
}

func (this *QFutureWatcherBase) ProgressValueChanged(progressValue int) {
	C.QFutureWatcherBase_ProgressValueChanged(this.h, (C.int)(progressValue))
}
func (this *QFutureWatcherBase) OnProgressValueChanged(slot func(progressValue int)) {
	C.QFutureWatcherBase_connect_ProgressValueChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QFutureWatcherBase_ProgressValueChanged
func miqt_exec_callback_QFutureWatcherBase_ProgressValueChanged(cb *C.void, progressValue C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(progressValue int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	progressValue_ret := progressValue
	slotval1 := (int)(progressValue_ret)

	gofunc(slotval1)
}

func (this *QFutureWatcherBase) ProgressTextChanged(progressText string) {
	progressText_ms := miqt_strdupg(progressText)
	defer C.free(progressText_ms)
	C.QFutureWatcherBase_ProgressTextChanged(this.h, (*C.struct_miqt_string)(progressText_ms))
}
func (this *QFutureWatcherBase) OnProgressTextChanged(slot func(progressText string)) {
	C.QFutureWatcherBase_connect_ProgressTextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QFutureWatcherBase_ProgressTextChanged
func miqt_exec_callback_QFutureWatcherBase_ProgressTextChanged(cb *C.void, progressText *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(progressText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var progressText_ms *C.struct_miqt_string = progressText
	progressText_ret := C.GoStringN(&progressText_ms.data, C.int(int64(progressText_ms.len)))
	C.free(unsafe.Pointer(progressText_ms))
	slotval1 := progressText_ret

	gofunc(slotval1)
}

func (this *QFutureWatcherBase) Cancel() {
	C.QFutureWatcherBase_Cancel(this.h)
}

func (this *QFutureWatcherBase) SetPaused(paused bool) {
	C.QFutureWatcherBase_SetPaused(this.h, (C.bool)(paused))
}

func (this *QFutureWatcherBase) Pause() {
	C.QFutureWatcherBase_Pause(this.h)
}

func (this *QFutureWatcherBase) Resume() {
	C.QFutureWatcherBase_Resume(this.h)
}

func (this *QFutureWatcherBase) TogglePaused() {
	C.QFutureWatcherBase_TogglePaused(this.h)
}

func QFutureWatcherBase_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFutureWatcherBase_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFutureWatcherBase_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFutureWatcherBase_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFutureWatcherBase_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFutureWatcherBase_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFutureWatcherBase_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFutureWatcherBase_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QFutureWatcherBase) Delete() {
	C.QFutureWatcherBase_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFutureWatcherBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QFutureWatcherBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
