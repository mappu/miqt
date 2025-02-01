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

func (this *QFutureWatcherBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFutureWatcherBase constructs the type using only CGO pointers.
func newQFutureWatcherBase(h *C.QFutureWatcherBase) *QFutureWatcherBase {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QFutureWatcherBase_virtbase(h, &outptr_QObject)

	return &QFutureWatcherBase{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQFutureWatcherBase constructs the type using only unsafe pointers.
func UnsafeNewQFutureWatcherBase(h unsafe.Pointer) *QFutureWatcherBase {
	return newQFutureWatcherBase((*C.QFutureWatcherBase)(h))
}

func (this *QFutureWatcherBase) MetaObject() *QMetaObject {
	return newQMetaObject(C.QFutureWatcherBase_metaObject(this.h))
}

func (this *QFutureWatcherBase) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFutureWatcherBase_metacast(this.h, param1_Cstring))
}

func QFutureWatcherBase_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFutureWatcherBase_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFutureWatcherBase_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFutureWatcherBase_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFutureWatcherBase) ProgressValue() int {
	return (int)(C.QFutureWatcherBase_progressValue(this.h))
}

func (this *QFutureWatcherBase) ProgressMinimum() int {
	return (int)(C.QFutureWatcherBase_progressMinimum(this.h))
}

func (this *QFutureWatcherBase) ProgressMaximum() int {
	return (int)(C.QFutureWatcherBase_progressMaximum(this.h))
}

func (this *QFutureWatcherBase) ProgressText() string {
	var _ms C.struct_miqt_string = C.QFutureWatcherBase_progressText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFutureWatcherBase) IsStarted() bool {
	return (bool)(C.QFutureWatcherBase_isStarted(this.h))
}

func (this *QFutureWatcherBase) IsFinished() bool {
	return (bool)(C.QFutureWatcherBase_isFinished(this.h))
}

func (this *QFutureWatcherBase) IsRunning() bool {
	return (bool)(C.QFutureWatcherBase_isRunning(this.h))
}

func (this *QFutureWatcherBase) IsCanceled() bool {
	return (bool)(C.QFutureWatcherBase_isCanceled(this.h))
}

func (this *QFutureWatcherBase) IsPaused() bool {
	return (bool)(C.QFutureWatcherBase_isPaused(this.h))
}

func (this *QFutureWatcherBase) WaitForFinished() {
	C.QFutureWatcherBase_waitForFinished(this.h)
}

func (this *QFutureWatcherBase) SetPendingResultsLimit(limit int) {
	C.QFutureWatcherBase_setPendingResultsLimit(this.h, (C.int)(limit))
}

func (this *QFutureWatcherBase) Event(event *QEvent) bool {
	return (bool)(C.QFutureWatcherBase_event(this.h, event.cPointer()))
}

func (this *QFutureWatcherBase) Started() {
	C.QFutureWatcherBase_started(this.h)
}
func (this *QFutureWatcherBase) OnStarted(slot func()) {
	C.QFutureWatcherBase_connect_started(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_started
func miqt_exec_callback_QFutureWatcherBase_started(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) Finished() {
	C.QFutureWatcherBase_finished(this.h)
}
func (this *QFutureWatcherBase) OnFinished(slot func()) {
	C.QFutureWatcherBase_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_finished
func miqt_exec_callback_QFutureWatcherBase_finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) Canceled() {
	C.QFutureWatcherBase_canceled(this.h)
}
func (this *QFutureWatcherBase) OnCanceled(slot func()) {
	C.QFutureWatcherBase_connect_canceled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_canceled
func miqt_exec_callback_QFutureWatcherBase_canceled(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) Paused() {
	C.QFutureWatcherBase_paused(this.h)
}
func (this *QFutureWatcherBase) OnPaused(slot func()) {
	C.QFutureWatcherBase_connect_paused(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_paused
func miqt_exec_callback_QFutureWatcherBase_paused(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) Resumed() {
	C.QFutureWatcherBase_resumed(this.h)
}
func (this *QFutureWatcherBase) OnResumed(slot func()) {
	C.QFutureWatcherBase_connect_resumed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_resumed
func miqt_exec_callback_QFutureWatcherBase_resumed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) ResultReadyAt(resultIndex int) {
	C.QFutureWatcherBase_resultReadyAt(this.h, (C.int)(resultIndex))
}
func (this *QFutureWatcherBase) OnResultReadyAt(slot func(resultIndex int)) {
	C.QFutureWatcherBase_connect_resultReadyAt(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_resultReadyAt
func miqt_exec_callback_QFutureWatcherBase_resultReadyAt(cb C.intptr_t, resultIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(resultIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(resultIndex)

	gofunc(slotval1)
}

func (this *QFutureWatcherBase) ResultsReadyAt(beginIndex int, endIndex int) {
	C.QFutureWatcherBase_resultsReadyAt(this.h, (C.int)(beginIndex), (C.int)(endIndex))
}
func (this *QFutureWatcherBase) OnResultsReadyAt(slot func(beginIndex int, endIndex int)) {
	C.QFutureWatcherBase_connect_resultsReadyAt(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_resultsReadyAt
func miqt_exec_callback_QFutureWatcherBase_resultsReadyAt(cb C.intptr_t, beginIndex C.int, endIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(beginIndex int, endIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(beginIndex)

	slotval2 := (int)(endIndex)

	gofunc(slotval1, slotval2)
}

func (this *QFutureWatcherBase) ProgressRangeChanged(minimum int, maximum int) {
	C.QFutureWatcherBase_progressRangeChanged(this.h, (C.int)(minimum), (C.int)(maximum))
}
func (this *QFutureWatcherBase) OnProgressRangeChanged(slot func(minimum int, maximum int)) {
	C.QFutureWatcherBase_connect_progressRangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_progressRangeChanged
func miqt_exec_callback_QFutureWatcherBase_progressRangeChanged(cb C.intptr_t, minimum C.int, maximum C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(minimum int, maximum int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(minimum)

	slotval2 := (int)(maximum)

	gofunc(slotval1, slotval2)
}

func (this *QFutureWatcherBase) ProgressValueChanged(progressValue int) {
	C.QFutureWatcherBase_progressValueChanged(this.h, (C.int)(progressValue))
}
func (this *QFutureWatcherBase) OnProgressValueChanged(slot func(progressValue int)) {
	C.QFutureWatcherBase_connect_progressValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_progressValueChanged
func miqt_exec_callback_QFutureWatcherBase_progressValueChanged(cb C.intptr_t, progressValue C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(progressValue int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(progressValue)

	gofunc(slotval1)
}

func (this *QFutureWatcherBase) ProgressTextChanged(progressText string) {
	progressText_ms := C.struct_miqt_string{}
	progressText_ms.data = C.CString(progressText)
	progressText_ms.len = C.size_t(len(progressText))
	defer C.free(unsafe.Pointer(progressText_ms.data))
	C.QFutureWatcherBase_progressTextChanged(this.h, progressText_ms)
}
func (this *QFutureWatcherBase) OnProgressTextChanged(slot func(progressText string)) {
	C.QFutureWatcherBase_connect_progressTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_progressTextChanged
func miqt_exec_callback_QFutureWatcherBase_progressTextChanged(cb C.intptr_t, progressText C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(progressText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var progressText_ms C.struct_miqt_string = progressText
	progressText_ret := C.GoStringN(progressText_ms.data, C.int(int64(progressText_ms.len)))
	C.free(unsafe.Pointer(progressText_ms.data))
	slotval1 := progressText_ret

	gofunc(slotval1)
}

func (this *QFutureWatcherBase) Cancel() {
	C.QFutureWatcherBase_cancel(this.h)
}

func (this *QFutureWatcherBase) SetPaused(paused bool) {
	C.QFutureWatcherBase_setPaused(this.h, (C.bool)(paused))
}

func (this *QFutureWatcherBase) Pause() {
	C.QFutureWatcherBase_pause(this.h)
}

func (this *QFutureWatcherBase) Resume() {
	C.QFutureWatcherBase_resume(this.h)
}

func (this *QFutureWatcherBase) TogglePaused() {
	C.QFutureWatcherBase_togglePaused(this.h)
}

func QFutureWatcherBase_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFutureWatcherBase_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFutureWatcherBase_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFutureWatcherBase_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFutureWatcherBase_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFutureWatcherBase_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFutureWatcherBase_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFutureWatcherBase_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QFutureWatcherBase) Delete() {
	C.QFutureWatcherBase_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFutureWatcherBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QFutureWatcherBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
