package qt

/*

#include "gen_qfutureinterface.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFutureInterfaceBase__State int

const (
	QFutureInterfaceBase__State__NoState   QFutureInterfaceBase__State = 0
	QFutureInterfaceBase__State__Running   QFutureInterfaceBase__State = 1
	QFutureInterfaceBase__State__Started   QFutureInterfaceBase__State = 2
	QFutureInterfaceBase__State__Finished  QFutureInterfaceBase__State = 4
	QFutureInterfaceBase__State__Canceled  QFutureInterfaceBase__State = 8
	QFutureInterfaceBase__State__Paused    QFutureInterfaceBase__State = 16
	QFutureInterfaceBase__State__Throttled QFutureInterfaceBase__State = 32
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
	if h == nil {
		return nil
	}
	return &QFutureInterfaceBase{h: h}
}

func newQFutureInterfaceBase_U(h unsafe.Pointer) *QFutureInterfaceBase {
	return newQFutureInterfaceBase((*C.QFutureInterfaceBase)(h))
}

// NewQFutureInterfaceBase constructs a new QFutureInterfaceBase object.
func NewQFutureInterfaceBase() *QFutureInterfaceBase {
	ret := C.QFutureInterfaceBase_new()
	return newQFutureInterfaceBase(ret)
}

// NewQFutureInterfaceBase2 constructs a new QFutureInterfaceBase object.
func NewQFutureInterfaceBase2(other *QFutureInterfaceBase) *QFutureInterfaceBase {
	ret := C.QFutureInterfaceBase_new2(other.cPointer())
	return newQFutureInterfaceBase(ret)
}

// NewQFutureInterfaceBase3 constructs a new QFutureInterfaceBase object.
func NewQFutureInterfaceBase3(initialState QFutureInterfaceBase__State) *QFutureInterfaceBase {
	ret := C.QFutureInterfaceBase_new3((C.uintptr_t)(initialState))
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
	_ret := C.QFutureInterfaceBase_ProgressMinimum(this.h)
	return (int)(_ret)
}

func (this *QFutureInterfaceBase) ProgressMaximum() int {
	_ret := C.QFutureInterfaceBase_ProgressMaximum(this.h)
	return (int)(_ret)
}

func (this *QFutureInterfaceBase) IsProgressUpdateNeeded() bool {
	_ret := C.QFutureInterfaceBase_IsProgressUpdateNeeded(this.h)
	return (bool)(_ret)
}

func (this *QFutureInterfaceBase) SetProgressValue(progressValue int) {
	C.QFutureInterfaceBase_SetProgressValue(this.h, (C.int)(progressValue))
}

func (this *QFutureInterfaceBase) ProgressValue() int {
	_ret := C.QFutureInterfaceBase_ProgressValue(this.h)
	return (int)(_ret)
}

func (this *QFutureInterfaceBase) SetProgressValueAndText(progressValue int, progressText string) {
	progressText_ms := miqt_strdupg(progressText)
	defer C.free(progressText_ms)
	C.QFutureInterfaceBase_SetProgressValueAndText(this.h, (C.int)(progressValue), (*C.struct_miqt_string)(progressText_ms))
}

func (this *QFutureInterfaceBase) ProgressText() string {
	var _ms *C.struct_miqt_string = C.QFutureInterfaceBase_ProgressText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFutureInterfaceBase) SetExpectedResultCount(resultCount int) {
	C.QFutureInterfaceBase_SetExpectedResultCount(this.h, (C.int)(resultCount))
}

func (this *QFutureInterfaceBase) ExpectedResultCount() int {
	_ret := C.QFutureInterfaceBase_ExpectedResultCount(this.h)
	return (int)(_ret)
}

func (this *QFutureInterfaceBase) ResultCount() int {
	_ret := C.QFutureInterfaceBase_ResultCount(this.h)
	return (int)(_ret)
}

func (this *QFutureInterfaceBase) QueryState(state QFutureInterfaceBase__State) bool {
	_ret := C.QFutureInterfaceBase_QueryState(this.h, (C.uintptr_t)(state))
	return (bool)(_ret)
}

func (this *QFutureInterfaceBase) IsRunning() bool {
	_ret := C.QFutureInterfaceBase_IsRunning(this.h)
	return (bool)(_ret)
}

func (this *QFutureInterfaceBase) IsStarted() bool {
	_ret := C.QFutureInterfaceBase_IsStarted(this.h)
	return (bool)(_ret)
}

func (this *QFutureInterfaceBase) IsCanceled() bool {
	_ret := C.QFutureInterfaceBase_IsCanceled(this.h)
	return (bool)(_ret)
}

func (this *QFutureInterfaceBase) IsFinished() bool {
	_ret := C.QFutureInterfaceBase_IsFinished(this.h)
	return (bool)(_ret)
}

func (this *QFutureInterfaceBase) IsPaused() bool {
	_ret := C.QFutureInterfaceBase_IsPaused(this.h)
	return (bool)(_ret)
}

func (this *QFutureInterfaceBase) IsThrottled() bool {
	_ret := C.QFutureInterfaceBase_IsThrottled(this.h)
	return (bool)(_ret)
}

func (this *QFutureInterfaceBase) IsResultReadyAt(index int) bool {
	_ret := C.QFutureInterfaceBase_IsResultReadyAt(this.h, (C.int)(index))
	return (bool)(_ret)
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
	_ret := C.QFutureInterfaceBase_WaitForNextResult(this.h)
	return (bool)(_ret)
}

func (this *QFutureInterfaceBase) WaitForResult(resultIndex int) {
	C.QFutureInterfaceBase_WaitForResult(this.h, (C.int)(resultIndex))
}

func (this *QFutureInterfaceBase) WaitForResume() {
	C.QFutureInterfaceBase_WaitForResume(this.h)
}

func (this *QFutureInterfaceBase) Mutex() *QMutex {
	_ret := C.QFutureInterfaceBase_Mutex(this.h)
	return newQMutex_U(unsafe.Pointer(_ret))
}

func (this *QFutureInterfaceBase) MutexWithInt(param1 int) *QMutex {
	_ret := C.QFutureInterfaceBase_MutexWithInt(this.h, (C.int)(param1))
	return newQMutex_U(unsafe.Pointer(_ret))
}

func (this *QFutureInterfaceBase) ExceptionStore() *QtPrivate__ExceptionStore {
	_ret := C.QFutureInterfaceBase_ExceptionStore(this.h)
	return newQtPrivate__ExceptionStore_U(unsafe.Pointer(_ret))
}

func (this *QFutureInterfaceBase) OperatorEqual(other *QFutureInterfaceBase) bool {
	_ret := C.QFutureInterfaceBase_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QFutureInterfaceBase) OperatorNotEqual(other *QFutureInterfaceBase) bool {
	_ret := C.QFutureInterfaceBase_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QFutureInterfaceBase) OperatorAssign(other *QFutureInterfaceBase) {
	C.QFutureInterfaceBase_OperatorAssign(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QFutureInterfaceBase) Delete() {
	C.QFutureInterfaceBase_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFutureInterfaceBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QFutureInterfaceBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
