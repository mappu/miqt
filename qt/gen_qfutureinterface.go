package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qfutureinterface.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QFutureInterfaceBase struct {
	h *C.QFutureInterfaceBase
}

func (this *QFutureInterfaceBase) cPointer() *C.QFutureInterfaceBase {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFutureInterfaceBase(h *C.QFutureInterfaceBase) *QFutureInterfaceBase {
	return &QFutureInterfaceBase{h: h}
}

func newQFutureInterfaceBase_U(h unsafe.Pointer) *QFutureInterfaceBase {
	return newQFutureInterfaceBase((*C.QFutureInterfaceBase)(h))
}

// NewQFutureInterfaceBase constructs a new QFutureInterfaceBase object.
func NewQFutureInterfaceBase(other *QFutureInterfaceBase) *QFutureInterfaceBase {
	ret := C.QFutureInterfaceBase_new(other.cPointer())
	return newQFutureInterfaceBase(ret)
}

func (this *QFutureInterfaceBase) ReportStarted() {
	C.QFutureInterfaceBase_ReportStarted(this.h)
}

func (this *QFutureInterfaceBase) ReportFinished() {
	C.QFutureInterfaceBase_ReportFinished(this.h)
}

func (this *QFutureInterfaceBase) ReportCanceled() {
	C.QFutureInterfaceBase_ReportCanceled(this.h)
}

func (this *QFutureInterfaceBase) ReportResultsReady(beginIndex int, endIndex int) {
	C.QFutureInterfaceBase_ReportResultsReady(this.h, (C.int)(beginIndex), (C.int)(endIndex))
}

func (this *QFutureInterfaceBase) SetRunnable(runnable *QRunnable) {
	C.QFutureInterfaceBase_SetRunnable(this.h, runnable.cPointer())
}

func (this *QFutureInterfaceBase) SetThreadPool(pool *QThreadPool) {
	C.QFutureInterfaceBase_SetThreadPool(this.h, pool.cPointer())
}

func (this *QFutureInterfaceBase) SetFilterMode(enable bool) {
	C.QFutureInterfaceBase_SetFilterMode(this.h, (C.bool)(enable))
}

func (this *QFutureInterfaceBase) SetProgressRange(minimum int, maximum int) {
	C.QFutureInterfaceBase_SetProgressRange(this.h, (C.int)(minimum), (C.int)(maximum))
}

func (this *QFutureInterfaceBase) ProgressMinimum() int {
	ret := C.QFutureInterfaceBase_ProgressMinimum(this.h)
	return (int)(ret)
}

func (this *QFutureInterfaceBase) ProgressMaximum() int {
	ret := C.QFutureInterfaceBase_ProgressMaximum(this.h)
	return (int)(ret)
}

func (this *QFutureInterfaceBase) IsProgressUpdateNeeded() bool {
	ret := C.QFutureInterfaceBase_IsProgressUpdateNeeded(this.h)
	return (bool)(ret)
}

func (this *QFutureInterfaceBase) SetProgressValue(progressValue int) {
	C.QFutureInterfaceBase_SetProgressValue(this.h, (C.int)(progressValue))
}

func (this *QFutureInterfaceBase) ProgressValue() int {
	ret := C.QFutureInterfaceBase_ProgressValue(this.h)
	return (int)(ret)
}

func (this *QFutureInterfaceBase) SetProgressValueAndText(progressValue int, progressText string) {
	progressText_Cstring := C.CString(progressText)
	defer C.free(unsafe.Pointer(progressText_Cstring))
	C.QFutureInterfaceBase_SetProgressValueAndText(this.h, (C.int)(progressValue), progressText_Cstring, C.ulong(len(progressText)))
}

func (this *QFutureInterfaceBase) ProgressText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFutureInterfaceBase_ProgressText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFutureInterfaceBase) SetExpectedResultCount(resultCount int) {
	C.QFutureInterfaceBase_SetExpectedResultCount(this.h, (C.int)(resultCount))
}

func (this *QFutureInterfaceBase) ExpectedResultCount() int {
	ret := C.QFutureInterfaceBase_ExpectedResultCount(this.h)
	return (int)(ret)
}

func (this *QFutureInterfaceBase) ResultCount() int {
	ret := C.QFutureInterfaceBase_ResultCount(this.h)
	return (int)(ret)
}

func (this *QFutureInterfaceBase) IsRunning() bool {
	ret := C.QFutureInterfaceBase_IsRunning(this.h)
	return (bool)(ret)
}

func (this *QFutureInterfaceBase) IsStarted() bool {
	ret := C.QFutureInterfaceBase_IsStarted(this.h)
	return (bool)(ret)
}

func (this *QFutureInterfaceBase) IsCanceled() bool {
	ret := C.QFutureInterfaceBase_IsCanceled(this.h)
	return (bool)(ret)
}

func (this *QFutureInterfaceBase) IsFinished() bool {
	ret := C.QFutureInterfaceBase_IsFinished(this.h)
	return (bool)(ret)
}

func (this *QFutureInterfaceBase) IsPaused() bool {
	ret := C.QFutureInterfaceBase_IsPaused(this.h)
	return (bool)(ret)
}

func (this *QFutureInterfaceBase) IsThrottled() bool {
	ret := C.QFutureInterfaceBase_IsThrottled(this.h)
	return (bool)(ret)
}

func (this *QFutureInterfaceBase) IsResultReadyAt(index int) bool {
	ret := C.QFutureInterfaceBase_IsResultReadyAt(this.h, (C.int)(index))
	return (bool)(ret)
}

func (this *QFutureInterfaceBase) Cancel() {
	C.QFutureInterfaceBase_Cancel(this.h)
}

func (this *QFutureInterfaceBase) SetPaused(paused bool) {
	C.QFutureInterfaceBase_SetPaused(this.h, (C.bool)(paused))
}

func (this *QFutureInterfaceBase) TogglePaused() {
	C.QFutureInterfaceBase_TogglePaused(this.h)
}

func (this *QFutureInterfaceBase) SetThrottled(enable bool) {
	C.QFutureInterfaceBase_SetThrottled(this.h, (C.bool)(enable))
}

func (this *QFutureInterfaceBase) WaitForFinished() {
	C.QFutureInterfaceBase_WaitForFinished(this.h)
}

func (this *QFutureInterfaceBase) WaitForNextResult() bool {
	ret := C.QFutureInterfaceBase_WaitForNextResult(this.h)
	return (bool)(ret)
}

func (this *QFutureInterfaceBase) WaitForResult(resultIndex int) {
	C.QFutureInterfaceBase_WaitForResult(this.h, (C.int)(resultIndex))
}

func (this *QFutureInterfaceBase) WaitForResume() {
	C.QFutureInterfaceBase_WaitForResume(this.h)
}

func (this *QFutureInterfaceBase) Mutex() *QMutex {
	ret := C.QFutureInterfaceBase_Mutex(this.h)
	return newQMutex_U(unsafe.Pointer(ret))
}

func (this *QFutureInterfaceBase) MutexWithInt(param1 int) *QMutex {
	ret := C.QFutureInterfaceBase_MutexWithInt(this.h, (C.int)(param1))
	return newQMutex_U(unsafe.Pointer(ret))
}

func (this *QFutureInterfaceBase) OperatorEqual(other *QFutureInterfaceBase) bool {
	ret := C.QFutureInterfaceBase_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QFutureInterfaceBase) OperatorNotEqual(other *QFutureInterfaceBase) bool {
	ret := C.QFutureInterfaceBase_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QFutureInterfaceBase) OperatorAssign(other *QFutureInterfaceBase) {
	C.QFutureInterfaceBase_OperatorAssign(this.h, other.cPointer())
}

func (this *QFutureInterfaceBase) Delete() {
	C.QFutureInterfaceBase_Delete(this.h)
}
