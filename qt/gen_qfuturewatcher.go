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
	h          *C.QFutureWatcherBase
	isSubclass bool
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
func newQFutureWatcherBase(h *C.QFutureWatcherBase, h_QObject *C.QObject) *QFutureWatcherBase {
	if h == nil {
		return nil
	}
	return &QFutureWatcherBase{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQFutureWatcherBase constructs the type using only unsafe pointers.
func UnsafeNewQFutureWatcherBase(h unsafe.Pointer, h_QObject unsafe.Pointer) *QFutureWatcherBase {
	if h == nil {
		return nil
	}

	return &QFutureWatcherBase{h: (*C.QFutureWatcherBase)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

func (this *QFutureWatcherBase) MetaObject() *QMetaObject {
	return newQMetaObject(C.QFutureWatcherBase_MetaObject(this.h))
}

func (this *QFutureWatcherBase) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFutureWatcherBase_Metacast(this.h, param1_Cstring))
}

func QFutureWatcherBase_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFutureWatcherBase_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFutureWatcherBase_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFutureWatcherBase_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFutureWatcherBase) ProgressValue() int {
	return (int)(C.QFutureWatcherBase_ProgressValue(this.h))
}

func (this *QFutureWatcherBase) ProgressMinimum() int {
	return (int)(C.QFutureWatcherBase_ProgressMinimum(this.h))
}

func (this *QFutureWatcherBase) ProgressMaximum() int {
	return (int)(C.QFutureWatcherBase_ProgressMaximum(this.h))
}

func (this *QFutureWatcherBase) ProgressText() string {
	var _ms C.struct_miqt_string = C.QFutureWatcherBase_ProgressText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFutureWatcherBase) IsStarted() bool {
	return (bool)(C.QFutureWatcherBase_IsStarted(this.h))
}

func (this *QFutureWatcherBase) IsFinished() bool {
	return (bool)(C.QFutureWatcherBase_IsFinished(this.h))
}

func (this *QFutureWatcherBase) IsRunning() bool {
	return (bool)(C.QFutureWatcherBase_IsRunning(this.h))
}

func (this *QFutureWatcherBase) IsCanceled() bool {
	return (bool)(C.QFutureWatcherBase_IsCanceled(this.h))
}

func (this *QFutureWatcherBase) IsPaused() bool {
	return (bool)(C.QFutureWatcherBase_IsPaused(this.h))
}

func (this *QFutureWatcherBase) WaitForFinished() {
	C.QFutureWatcherBase_WaitForFinished(this.h)
}

func (this *QFutureWatcherBase) SetPendingResultsLimit(limit int) {
	C.QFutureWatcherBase_SetPendingResultsLimit(this.h, (C.int)(limit))
}

func (this *QFutureWatcherBase) Event(event *QEvent) bool {
	return (bool)(C.QFutureWatcherBase_Event(this.h, event.cPointer()))
}

func (this *QFutureWatcherBase) Started() {
	C.QFutureWatcherBase_Started(this.h)
}
func (this *QFutureWatcherBase) OnStarted(slot func()) {
	C.QFutureWatcherBase_connect_Started(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_Started
func miqt_exec_callback_QFutureWatcherBase_Started(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) Finished() {
	C.QFutureWatcherBase_Finished(this.h)
}
func (this *QFutureWatcherBase) OnFinished(slot func()) {
	C.QFutureWatcherBase_connect_Finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_Finished
func miqt_exec_callback_QFutureWatcherBase_Finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) Canceled() {
	C.QFutureWatcherBase_Canceled(this.h)
}
func (this *QFutureWatcherBase) OnCanceled(slot func()) {
	C.QFutureWatcherBase_connect_Canceled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_Canceled
func miqt_exec_callback_QFutureWatcherBase_Canceled(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) Paused() {
	C.QFutureWatcherBase_Paused(this.h)
}
func (this *QFutureWatcherBase) OnPaused(slot func()) {
	C.QFutureWatcherBase_connect_Paused(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_Paused
func miqt_exec_callback_QFutureWatcherBase_Paused(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) Resumed() {
	C.QFutureWatcherBase_Resumed(this.h)
}
func (this *QFutureWatcherBase) OnResumed(slot func()) {
	C.QFutureWatcherBase_connect_Resumed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_Resumed
func miqt_exec_callback_QFutureWatcherBase_Resumed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QFutureWatcherBase) ResultReadyAt(resultIndex int) {
	C.QFutureWatcherBase_ResultReadyAt(this.h, (C.int)(resultIndex))
}
func (this *QFutureWatcherBase) OnResultReadyAt(slot func(resultIndex int)) {
	C.QFutureWatcherBase_connect_ResultReadyAt(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_ResultReadyAt
func miqt_exec_callback_QFutureWatcherBase_ResultReadyAt(cb C.intptr_t, resultIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(resultIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(resultIndex)

	gofunc(slotval1)
}

func (this *QFutureWatcherBase) ResultsReadyAt(beginIndex int, endIndex int) {
	C.QFutureWatcherBase_ResultsReadyAt(this.h, (C.int)(beginIndex), (C.int)(endIndex))
}
func (this *QFutureWatcherBase) OnResultsReadyAt(slot func(beginIndex int, endIndex int)) {
	C.QFutureWatcherBase_connect_ResultsReadyAt(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_ResultsReadyAt
func miqt_exec_callback_QFutureWatcherBase_ResultsReadyAt(cb C.intptr_t, beginIndex C.int, endIndex C.int) {
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
	C.QFutureWatcherBase_ProgressRangeChanged(this.h, (C.int)(minimum), (C.int)(maximum))
}
func (this *QFutureWatcherBase) OnProgressRangeChanged(slot func(minimum int, maximum int)) {
	C.QFutureWatcherBase_connect_ProgressRangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_ProgressRangeChanged
func miqt_exec_callback_QFutureWatcherBase_ProgressRangeChanged(cb C.intptr_t, minimum C.int, maximum C.int) {
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
	C.QFutureWatcherBase_ProgressValueChanged(this.h, (C.int)(progressValue))
}
func (this *QFutureWatcherBase) OnProgressValueChanged(slot func(progressValue int)) {
	C.QFutureWatcherBase_connect_ProgressValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_ProgressValueChanged
func miqt_exec_callback_QFutureWatcherBase_ProgressValueChanged(cb C.intptr_t, progressValue C.int) {
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
	C.QFutureWatcherBase_ProgressTextChanged(this.h, progressText_ms)
}
func (this *QFutureWatcherBase) OnProgressTextChanged(slot func(progressText string)) {
	C.QFutureWatcherBase_connect_ProgressTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFutureWatcherBase_ProgressTextChanged
func miqt_exec_callback_QFutureWatcherBase_ProgressTextChanged(cb C.intptr_t, progressText C.struct_miqt_string) {
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
	var _ms C.struct_miqt_string = C.QFutureWatcherBase_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFutureWatcherBase_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFutureWatcherBase_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFutureWatcherBase_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFutureWatcherBase_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFutureWatcherBase_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFutureWatcherBase_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QFutureWatcherBase) Delete() {
	C.QFutureWatcherBase_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFutureWatcherBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QFutureWatcherBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
