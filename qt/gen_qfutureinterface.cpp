#include "gen_qfutureinterface.h"
#include "qfutureinterface.h"

#include <QFutureInterfaceBase>
#include <QMutex>
#include <QRunnable>
#include <QString>
#include <QThreadPool>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFutureInterfaceBase* QFutureInterfaceBase_new(QFutureInterfaceBase* other) {
	return new QFutureInterfaceBase(*other);
}

void QFutureInterfaceBase_ReportStarted(QFutureInterfaceBase* self) {
	self->reportStarted();
}

void QFutureInterfaceBase_ReportFinished(QFutureInterfaceBase* self) {
	self->reportFinished();
}

void QFutureInterfaceBase_ReportCanceled(QFutureInterfaceBase* self) {
	self->reportCanceled();
}

void QFutureInterfaceBase_ReportResultsReady(QFutureInterfaceBase* self, int beginIndex, int endIndex) {
	self->reportResultsReady(static_cast<int>(beginIndex), static_cast<int>(endIndex));
}

void QFutureInterfaceBase_SetRunnable(QFutureInterfaceBase* self, QRunnable* runnable) {
	self->setRunnable(runnable);
}

void QFutureInterfaceBase_SetThreadPool(QFutureInterfaceBase* self, QThreadPool* pool) {
	self->setThreadPool(pool);
}

void QFutureInterfaceBase_SetFilterMode(QFutureInterfaceBase* self, bool enable) {
	self->setFilterMode(enable);
}

void QFutureInterfaceBase_SetProgressRange(QFutureInterfaceBase* self, int minimum, int maximum) {
	self->setProgressRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

int QFutureInterfaceBase_ProgressMinimum(QFutureInterfaceBase* self) {
	return self->progressMinimum();
}

int QFutureInterfaceBase_ProgressMaximum(QFutureInterfaceBase* self) {
	return self->progressMaximum();
}

bool QFutureInterfaceBase_IsProgressUpdateNeeded(QFutureInterfaceBase* self) {
	return self->isProgressUpdateNeeded();
}

void QFutureInterfaceBase_SetProgressValue(QFutureInterfaceBase* self, int progressValue) {
	self->setProgressValue(static_cast<int>(progressValue));
}

int QFutureInterfaceBase_ProgressValue(QFutureInterfaceBase* self) {
	return self->progressValue();
}

void QFutureInterfaceBase_SetProgressValueAndText(QFutureInterfaceBase* self, int progressValue, const char* progressText, size_t progressText_Strlen) {
	QString progressText_QString = QString::fromUtf8(progressText, progressText_Strlen);
	self->setProgressValueAndText(static_cast<int>(progressValue), progressText_QString);
}

void QFutureInterfaceBase_ProgressText(QFutureInterfaceBase* self, char** _out, int* _out_Strlen) {
	QString ret = self->progressText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFutureInterfaceBase_SetExpectedResultCount(QFutureInterfaceBase* self, int resultCount) {
	self->setExpectedResultCount(static_cast<int>(resultCount));
}

int QFutureInterfaceBase_ExpectedResultCount(QFutureInterfaceBase* self) {
	return self->expectedResultCount();
}

int QFutureInterfaceBase_ResultCount(QFutureInterfaceBase* self) {
	return self->resultCount();
}

bool QFutureInterfaceBase_IsRunning(QFutureInterfaceBase* self) {
	return self->isRunning();
}

bool QFutureInterfaceBase_IsStarted(QFutureInterfaceBase* self) {
	return self->isStarted();
}

bool QFutureInterfaceBase_IsCanceled(QFutureInterfaceBase* self) {
	return self->isCanceled();
}

bool QFutureInterfaceBase_IsFinished(QFutureInterfaceBase* self) {
	return self->isFinished();
}

bool QFutureInterfaceBase_IsPaused(QFutureInterfaceBase* self) {
	return self->isPaused();
}

bool QFutureInterfaceBase_IsThrottled(QFutureInterfaceBase* self) {
	return self->isThrottled();
}

bool QFutureInterfaceBase_IsResultReadyAt(QFutureInterfaceBase* self, int index) {
	return self->isResultReadyAt(static_cast<int>(index));
}

void QFutureInterfaceBase_Cancel(QFutureInterfaceBase* self) {
	self->cancel();
}

void QFutureInterfaceBase_SetPaused(QFutureInterfaceBase* self, bool paused) {
	self->setPaused(paused);
}

void QFutureInterfaceBase_TogglePaused(QFutureInterfaceBase* self) {
	self->togglePaused();
}

void QFutureInterfaceBase_SetThrottled(QFutureInterfaceBase* self, bool enable) {
	self->setThrottled(enable);
}

void QFutureInterfaceBase_WaitForFinished(QFutureInterfaceBase* self) {
	self->waitForFinished();
}

bool QFutureInterfaceBase_WaitForNextResult(QFutureInterfaceBase* self) {
	return self->waitForNextResult();
}

void QFutureInterfaceBase_WaitForResult(QFutureInterfaceBase* self, int resultIndex) {
	self->waitForResult(static_cast<int>(resultIndex));
}

void QFutureInterfaceBase_WaitForResume(QFutureInterfaceBase* self) {
	self->waitForResume();
}

QMutex* QFutureInterfaceBase_Mutex(QFutureInterfaceBase* self) {
	return self->mutex();
}

QMutex* QFutureInterfaceBase_MutexWithInt(QFutureInterfaceBase* self, int param1) {
	QMutex& ret = self->mutex(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &ret;
}

bool QFutureInterfaceBase_OperatorEqual(QFutureInterfaceBase* self, QFutureInterfaceBase* other) {
	return self->operator==(*other);
}

bool QFutureInterfaceBase_OperatorNotEqual(QFutureInterfaceBase* self, QFutureInterfaceBase* other) {
	return self->operator!=(*other);
}

void QFutureInterfaceBase_OperatorAssign(QFutureInterfaceBase* self, QFutureInterfaceBase* other) {
	self->operator=(*other);
}

void QFutureInterfaceBase_Delete(QFutureInterfaceBase* self) {
	delete self;
}

