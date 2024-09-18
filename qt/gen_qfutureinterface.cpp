#include <QFutureInterfaceBase>
#include <QMutex>
#include <QRunnable>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThreadPool>
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ExceptionStore
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ResultStoreBase
#include "qfutureinterface.h"
#include "gen_qfutureinterface.h"
#include "_cgo_export.h"

QFutureInterfaceBase* QFutureInterfaceBase_new() {
	return new QFutureInterfaceBase();
}

QFutureInterfaceBase* QFutureInterfaceBase_new2(QFutureInterfaceBase* other) {
	return new QFutureInterfaceBase(*other);
}

QFutureInterfaceBase* QFutureInterfaceBase_new3(int initialState) {
	return new QFutureInterfaceBase(static_cast<QFutureInterfaceBase::State>(initialState));
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

int QFutureInterfaceBase_ProgressMinimum(const QFutureInterfaceBase* self) {
	return self->progressMinimum();
}

int QFutureInterfaceBase_ProgressMaximum(const QFutureInterfaceBase* self) {
	return self->progressMaximum();
}

bool QFutureInterfaceBase_IsProgressUpdateNeeded(const QFutureInterfaceBase* self) {
	return self->isProgressUpdateNeeded();
}

void QFutureInterfaceBase_SetProgressValue(QFutureInterfaceBase* self, int progressValue) {
	self->setProgressValue(static_cast<int>(progressValue));
}

int QFutureInterfaceBase_ProgressValue(const QFutureInterfaceBase* self) {
	return self->progressValue();
}

void QFutureInterfaceBase_SetProgressValueAndText(QFutureInterfaceBase* self, int progressValue, struct miqt_string* progressText) {
	QString progressText_QString = QString::fromUtf8(&progressText->data, progressText->len);
	self->setProgressValueAndText(static_cast<int>(progressValue), progressText_QString);
}

struct miqt_string* QFutureInterfaceBase_ProgressText(const QFutureInterfaceBase* self) {
	QString _ret = self->progressText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QFutureInterfaceBase_SetExpectedResultCount(QFutureInterfaceBase* self, int resultCount) {
	self->setExpectedResultCount(static_cast<int>(resultCount));
}

int QFutureInterfaceBase_ExpectedResultCount(QFutureInterfaceBase* self) {
	return self->expectedResultCount();
}

int QFutureInterfaceBase_ResultCount(const QFutureInterfaceBase* self) {
	return self->resultCount();
}

bool QFutureInterfaceBase_QueryState(const QFutureInterfaceBase* self, int state) {
	return self->queryState(static_cast<QFutureInterfaceBase::State>(state));
}

bool QFutureInterfaceBase_IsRunning(const QFutureInterfaceBase* self) {
	return self->isRunning();
}

bool QFutureInterfaceBase_IsStarted(const QFutureInterfaceBase* self) {
	return self->isStarted();
}

bool QFutureInterfaceBase_IsCanceled(const QFutureInterfaceBase* self) {
	return self->isCanceled();
}

bool QFutureInterfaceBase_IsFinished(const QFutureInterfaceBase* self) {
	return self->isFinished();
}

bool QFutureInterfaceBase_IsPaused(const QFutureInterfaceBase* self) {
	return self->isPaused();
}

bool QFutureInterfaceBase_IsThrottled(const QFutureInterfaceBase* self) {
	return self->isThrottled();
}

bool QFutureInterfaceBase_IsResultReadyAt(const QFutureInterfaceBase* self, int index) {
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

QMutex* QFutureInterfaceBase_Mutex(const QFutureInterfaceBase* self) {
	return self->mutex();
}

QMutex* QFutureInterfaceBase_MutexWithInt(const QFutureInterfaceBase* self, int param1) {
	QMutex& _ret = self->mutex(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QtPrivate__ExceptionStore* QFutureInterfaceBase_ExceptionStore(QFutureInterfaceBase* self) {
	QtPrivate::ExceptionStore& _ret = self->exceptionStore();
	// Cast returned reference into pointer
	return &_ret;
}

QtPrivate__ResultStoreBase* QFutureInterfaceBase_ResultStoreBase(QFutureInterfaceBase* self) {
	QtPrivate::ResultStoreBase& _ret = self->resultStoreBase();
	// Cast returned reference into pointer
	return &_ret;
}

QtPrivate__ResultStoreBase* QFutureInterfaceBase_ResultStoreBase2(const QFutureInterfaceBase* self) {
	const QtPrivate::ResultStoreBase& _ret = self->resultStoreBase();
	// Cast returned reference into pointer
	return const_cast<QtPrivate::ResultStoreBase*>(&_ret);
}

bool QFutureInterfaceBase_OperatorEqual(const QFutureInterfaceBase* self, QFutureInterfaceBase* other) {
	return self->operator==(*other);
}

bool QFutureInterfaceBase_OperatorNotEqual(const QFutureInterfaceBase* self, QFutureInterfaceBase* other) {
	return self->operator!=(*other);
}

void QFutureInterfaceBase_OperatorAssign(QFutureInterfaceBase* self, QFutureInterfaceBase* other) {
	self->operator=(*other);
}

void QFutureInterfaceBase_Delete(QFutureInterfaceBase* self) {
	delete self;
}

