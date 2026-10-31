package qt6

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
	QFutureInterfaceBase__NoState    QFutureInterfaceBase__State = 0
	QFutureInterfaceBase__Running    QFutureInterfaceBase__State = 1
	QFutureInterfaceBase__Started    QFutureInterfaceBase__State = 2
	QFutureInterfaceBase__Finished   QFutureInterfaceBase__State = 4
	QFutureInterfaceBase__Canceled   QFutureInterfaceBase__State = 8
	QFutureInterfaceBase__Suspending QFutureInterfaceBase__State = 16
	QFutureInterfaceBase__Suspended  QFutureInterfaceBase__State = 32
	QFutureInterfaceBase__Throttled  QFutureInterfaceBase__State = 64
	QFutureInterfaceBase__Pending    QFutureInterfaceBase__State = 128
)

type QFutureInterfaceBase__CancelMode int

const (
	QFutureInterfaceBase__CancelOnly      QFutureInterfaceBase__CancelMode = 0
	QFutureInterfaceBase__CancelAndFinish QFutureInterfaceBase__CancelMode = 1
)

type QFutureInterfaceBase struct {
	h  *C.QFutureInterfaceBase
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QFutureInterfaceBase) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QFutureInterfaceBase) cPointer() *C.QFutureInterfaceBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFutureInterfaceBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFutureInterfaceBase constructs the type using only CGO pointers.
func newQFutureInterfaceBase(h *C.QFutureInterfaceBase) *QFutureInterfaceBase {
	if h == nil {
		return nil
	}

	return &QFutureInterfaceBase{h: h}
}

// UnsafeNewQFutureInterfaceBase constructs the type using only unsafe pointers.
func UnsafeNewQFutureInterfaceBase(h unsafe.Pointer) *QFutureInterfaceBase {
	return newQFutureInterfaceBase((*C.QFutureInterfaceBase)(h))
}

// NewQFutureInterfaceBase constructs a new QFutureInterfaceBase object.
func NewQFutureInterfaceBase() *QFutureInterfaceBase {

	return newQFutureInterfaceBase(C.QFutureInterfaceBase_new())
}

// NewQFutureInterfaceBase2 constructs a new QFutureInterfaceBase object.
func NewQFutureInterfaceBase2(other *QFutureInterfaceBase) *QFutureInterfaceBase {
	defer runtime.KeepAlive(other)

	return newQFutureInterfaceBase(C.QFutureInterfaceBase_new2(other.cPointer()))
}

// NewQFutureInterfaceBase3 constructs a new QFutureInterfaceBase object.
func NewQFutureInterfaceBase3(initialState QFutureInterfaceBase__State) *QFutureInterfaceBase {

	return newQFutureInterfaceBase(C.QFutureInterfaceBase_new3((C.int)(initialState)))
}

func (this *QFutureInterfaceBase) OperatorAssign(other *QFutureInterfaceBase) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QFutureInterfaceBase_operatorAssign(this.h, other.cPointer())
}

func (this *QFutureInterfaceBase) ReportStarted() {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_reportStarted(this.h)
}

func (this *QFutureInterfaceBase) ReportFinished() {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_reportFinished(this.h)
}

func (this *QFutureInterfaceBase) ReportCanceled() {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_reportCanceled(this.h)
}

func (this *QFutureInterfaceBase) ReportResultsReady(beginIndex int, endIndex int) {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_reportResultsReady(this.h, (C.int)(beginIndex), (C.int)(endIndex))
}

func (this *QFutureInterfaceBase) SetRunnable(runnable *QRunnable) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(runnable)
	C.QFutureInterfaceBase_setRunnable(this.h, runnable.cPointer())
}

func (this *QFutureInterfaceBase) SetThreadPool(pool *QThreadPool) {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_setThreadPool(this.h, pool.cPointer())
}

func (this *QFutureInterfaceBase) ThreadPool() *QThreadPool {
	defer runtime.KeepAlive(this)
	return newQThreadPool(C.QFutureInterfaceBase_threadPool(this.h))
}

func (this *QFutureInterfaceBase) SetFilterMode(enable bool) {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_setFilterMode(this.h, (C.bool)(enable))
}

func (this *QFutureInterfaceBase) SetProgressRange(minimum int, maximum int) {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_setProgressRange(this.h, (C.int)(minimum), (C.int)(maximum))
}

func (this *QFutureInterfaceBase) ProgressMinimum() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QFutureInterfaceBase_progressMinimum(this.h))
}

func (this *QFutureInterfaceBase) ProgressMaximum() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QFutureInterfaceBase_progressMaximum(this.h))
}

func (this *QFutureInterfaceBase) IsProgressUpdateNeeded() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_isProgressUpdateNeeded(this.h))
}

func (this *QFutureInterfaceBase) SetProgressValue(progressValue int) {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_setProgressValue(this.h, (C.int)(progressValue))
}

func (this *QFutureInterfaceBase) ProgressValue() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QFutureInterfaceBase_progressValue(this.h))
}

func (this *QFutureInterfaceBase) SetProgressValueAndText(progressValue int, progressText string) {
	defer runtime.KeepAlive(this)
	progressText_ms := C.struct_miqt_string{}
	progressText_ms.data = C.CString(progressText)
	progressText_ms.len = C.size_t(len(progressText))
	defer C.free(unsafe.Pointer(progressText_ms.data))
	C.QFutureInterfaceBase_setProgressValueAndText(this.h, (C.int)(progressValue), progressText_ms)
}

func (this *QFutureInterfaceBase) ProgressText() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QFutureInterfaceBase_progressText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFutureInterfaceBase) SetExpectedResultCount(resultCount int) {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_setExpectedResultCount(this.h, (C.int)(resultCount))
}

func (this *QFutureInterfaceBase) ExpectedResultCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QFutureInterfaceBase_expectedResultCount(this.h))
}

func (this *QFutureInterfaceBase) ResultCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QFutureInterfaceBase_resultCount(this.h))
}

func (this *QFutureInterfaceBase) QueryState(state QFutureInterfaceBase__State) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_queryState(this.h, (C.int)(state)))
}

func (this *QFutureInterfaceBase) IsRunning() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_isRunning(this.h))
}

func (this *QFutureInterfaceBase) IsStarted() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_isStarted(this.h))
}

func (this *QFutureInterfaceBase) IsCanceled() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_isCanceled(this.h))
}

func (this *QFutureInterfaceBase) IsFinished() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_isFinished(this.h))
}

func (this *QFutureInterfaceBase) IsPaused() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_isPaused(this.h))
}

func (this *QFutureInterfaceBase) SetPaused(paused bool) {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_setPaused(this.h, (C.bool)(paused))
}

func (this *QFutureInterfaceBase) TogglePaused() {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_togglePaused(this.h)
}

func (this *QFutureInterfaceBase) IsSuspending() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_isSuspending(this.h))
}

func (this *QFutureInterfaceBase) IsSuspended() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_isSuspended(this.h))
}

func (this *QFutureInterfaceBase) IsThrottled() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_isThrottled(this.h))
}

func (this *QFutureInterfaceBase) IsResultReadyAt(index int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_isResultReadyAt(this.h, (C.int)(index)))
}

func (this *QFutureInterfaceBase) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_isValid(this.h))
}

func (this *QFutureInterfaceBase) LoadState() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QFutureInterfaceBase_loadState(this.h))
}

func (this *QFutureInterfaceBase) Cancel() {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_cancel(this.h)
}

func (this *QFutureInterfaceBase) CancelAndFinish() {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_cancelAndFinish(this.h)
}

func (this *QFutureInterfaceBase) SetSuspended(suspend bool) {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_setSuspended(this.h, (C.bool)(suspend))
}

func (this *QFutureInterfaceBase) ToggleSuspended() {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_toggleSuspended(this.h)
}

func (this *QFutureInterfaceBase) ReportSuspended() {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_reportSuspended(this.h)
}

func (this *QFutureInterfaceBase) SetThrottled(enable bool) {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_setThrottled(this.h, (C.bool)(enable))
}

func (this *QFutureInterfaceBase) WaitForFinished() {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_waitForFinished(this.h)
}

func (this *QFutureInterfaceBase) WaitForNextResult() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_waitForNextResult(this.h))
}

func (this *QFutureInterfaceBase) WaitForResult(resultIndex int) {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_waitForResult(this.h, (C.int)(resultIndex))
}

func (this *QFutureInterfaceBase) WaitForResume() {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_waitForResume(this.h)
}

func (this *QFutureInterfaceBase) SuspendIfRequested() {
	defer runtime.KeepAlive(this)
	C.QFutureInterfaceBase_suspendIfRequested(this.h)
}

func (this *QFutureInterfaceBase) Mutex() *QMutex {
	defer runtime.KeepAlive(this)
	_ret := newQMutex(C.QFutureInterfaceBase_mutex(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QFutureInterfaceBase) HasException() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_hasException(this.h))
}

func (this *QFutureInterfaceBase) OperatorEqual(other *QFutureInterfaceBase) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QFutureInterfaceBase_operatorEqual(this.h, other.cPointer()))
}

func (this *QFutureInterfaceBase) OperatorNotEqual(other *QFutureInterfaceBase) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QFutureInterfaceBase_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QFutureInterfaceBase) Swap(other *QFutureInterfaceBase) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QFutureInterfaceBase_swap(this.h, other.cPointer())
}

func (this *QFutureInterfaceBase) IsChainCanceled() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFutureInterfaceBase_isChainCanceled(this.h))
}

// Delete this object from C++ memory.
func (this *QFutureInterfaceBase) Delete() {
	C.QFutureInterfaceBase_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QFutureInterfaceBase) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QFutureInterfaceBase_delete((*C.QFutureInterfaceBase)(gc[0]))
	})
	this.miqtSetGC(gc)
}
