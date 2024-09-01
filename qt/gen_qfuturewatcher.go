package qt

/*

#include "gen_qfuturewatcher.h"
#include <stdlib.h>

*/
import "C"

import (
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
	ret := C.QFutureWatcherBase_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QFutureWatcherBase_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFutureWatcherBase_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFutureWatcherBase_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFutureWatcherBase_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFutureWatcherBase) ProgressValue() int {
	ret := C.QFutureWatcherBase_ProgressValue(this.h)
	return (int)(ret)
}

func (this *QFutureWatcherBase) ProgressMinimum() int {
	ret := C.QFutureWatcherBase_ProgressMinimum(this.h)
	return (int)(ret)
}

func (this *QFutureWatcherBase) ProgressMaximum() int {
	ret := C.QFutureWatcherBase_ProgressMaximum(this.h)
	return (int)(ret)
}

func (this *QFutureWatcherBase) ProgressText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFutureWatcherBase_ProgressText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFutureWatcherBase) IsStarted() bool {
	ret := C.QFutureWatcherBase_IsStarted(this.h)
	return (bool)(ret)
}

func (this *QFutureWatcherBase) IsFinished() bool {
	ret := C.QFutureWatcherBase_IsFinished(this.h)
	return (bool)(ret)
}

func (this *QFutureWatcherBase) IsRunning() bool {
	ret := C.QFutureWatcherBase_IsRunning(this.h)
	return (bool)(ret)
}

func (this *QFutureWatcherBase) IsCanceled() bool {
	ret := C.QFutureWatcherBase_IsCanceled(this.h)
	return (bool)(ret)
}

func (this *QFutureWatcherBase) IsPaused() bool {
	ret := C.QFutureWatcherBase_IsPaused(this.h)
	return (bool)(ret)
}

func (this *QFutureWatcherBase) WaitForFinished() {
	C.QFutureWatcherBase_WaitForFinished(this.h)
}

func (this *QFutureWatcherBase) SetPendingResultsLimit(limit int) {
	C.QFutureWatcherBase_SetPendingResultsLimit(this.h, (C.int)(limit))
}

func (this *QFutureWatcherBase) Event(event *QEvent) bool {
	ret := C.QFutureWatcherBase_Event(this.h, event.cPointer())
	return (bool)(ret)
}

func (this *QFutureWatcherBase) Started() {
	C.QFutureWatcherBase_Started(this.h)
}

func (this *QFutureWatcherBase) OnStarted(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFutureWatcherBase_connect_Started(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFutureWatcherBase) Finished() {
	C.QFutureWatcherBase_Finished(this.h)
}

func (this *QFutureWatcherBase) OnFinished(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFutureWatcherBase_connect_Finished(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFutureWatcherBase) Canceled() {
	C.QFutureWatcherBase_Canceled(this.h)
}

func (this *QFutureWatcherBase) OnCanceled(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFutureWatcherBase_connect_Canceled(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFutureWatcherBase) Paused() {
	C.QFutureWatcherBase_Paused(this.h)
}

func (this *QFutureWatcherBase) OnPaused(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFutureWatcherBase_connect_Paused(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFutureWatcherBase) Resumed() {
	C.QFutureWatcherBase_Resumed(this.h)
}

func (this *QFutureWatcherBase) OnResumed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFutureWatcherBase_connect_Resumed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFutureWatcherBase) ResultReadyAt(resultIndex int) {
	C.QFutureWatcherBase_ResultReadyAt(this.h, (C.int)(resultIndex))
}

func (this *QFutureWatcherBase) OnResultReadyAt(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFutureWatcherBase_connect_ResultReadyAt(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFutureWatcherBase) ResultsReadyAt(beginIndex int, endIndex int) {
	C.QFutureWatcherBase_ResultsReadyAt(this.h, (C.int)(beginIndex), (C.int)(endIndex))
}

func (this *QFutureWatcherBase) OnResultsReadyAt(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFutureWatcherBase_connect_ResultsReadyAt(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFutureWatcherBase) ProgressRangeChanged(minimum int, maximum int) {
	C.QFutureWatcherBase_ProgressRangeChanged(this.h, (C.int)(minimum), (C.int)(maximum))
}

func (this *QFutureWatcherBase) OnProgressRangeChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFutureWatcherBase_connect_ProgressRangeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFutureWatcherBase) ProgressValueChanged(progressValue int) {
	C.QFutureWatcherBase_ProgressValueChanged(this.h, (C.int)(progressValue))
}

func (this *QFutureWatcherBase) OnProgressValueChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFutureWatcherBase_connect_ProgressValueChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFutureWatcherBase) ProgressTextChanged(progressText string) {
	progressText_Cstring := C.CString(progressText)
	defer C.free(unsafe.Pointer(progressText_Cstring))
	C.QFutureWatcherBase_ProgressTextChanged(this.h, progressText_Cstring, C.size_t(len(progressText)))
}

func (this *QFutureWatcherBase) OnProgressTextChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFutureWatcherBase_connect_ProgressTextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFutureWatcherBase_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFutureWatcherBase_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFutureWatcherBase_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFutureWatcherBase_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFutureWatcherBase_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFutureWatcherBase_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFutureWatcherBase_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFutureWatcherBase) Delete() {
	C.QFutureWatcherBase_Delete(this.h)
}
