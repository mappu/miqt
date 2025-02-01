#include <QFutureInterfaceBase>
#include <QMutex>
#include <QRunnable>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThreadPool>
#include <qfutureinterface.h>
#include "gen_qfutureinterface.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QFutureInterfaceBase* QFutureInterfaceBase_new() {
	return new QFutureInterfaceBase();
}

QFutureInterfaceBase* QFutureInterfaceBase_new2(QFutureInterfaceBase* other) {
	return new QFutureInterfaceBase(*other);
}

QFutureInterfaceBase* QFutureInterfaceBase_new3(int initialState) {
	return new QFutureInterfaceBase(static_cast<QFutureInterfaceBase::State>(initialState));
}

void QFutureInterfaceBase_reportStarted(QFutureInterfaceBase* self) {
	self->reportStarted();
}

void QFutureInterfaceBase_reportFinished(QFutureInterfaceBase* self) {
	self->reportFinished();
}

void QFutureInterfaceBase_reportCanceled(QFutureInterfaceBase* self) {
	self->reportCanceled();
}

void QFutureInterfaceBase_reportResultsReady(QFutureInterfaceBase* self, int beginIndex, int endIndex) {
	self->reportResultsReady(static_cast<int>(beginIndex), static_cast<int>(endIndex));
}

void QFutureInterfaceBase_setRunnable(QFutureInterfaceBase* self, QRunnable* runnable) {
	self->setRunnable(runnable);
}

void QFutureInterfaceBase_setThreadPool(QFutureInterfaceBase* self, QThreadPool* pool) {
	self->setThreadPool(pool);
}

void QFutureInterfaceBase_setFilterMode(QFutureInterfaceBase* self, bool enable) {
	self->setFilterMode(enable);
}

void QFutureInterfaceBase_setProgressRange(QFutureInterfaceBase* self, int minimum, int maximum) {
	self->setProgressRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

int QFutureInterfaceBase_progressMinimum(const QFutureInterfaceBase* self) {
	return self->progressMinimum();
}

int QFutureInterfaceBase_progressMaximum(const QFutureInterfaceBase* self) {
	return self->progressMaximum();
}

bool QFutureInterfaceBase_isProgressUpdateNeeded(const QFutureInterfaceBase* self) {
	return self->isProgressUpdateNeeded();
}

void QFutureInterfaceBase_setProgressValue(QFutureInterfaceBase* self, int progressValue) {
	self->setProgressValue(static_cast<int>(progressValue));
}

int QFutureInterfaceBase_progressValue(const QFutureInterfaceBase* self) {
	return self->progressValue();
}

void QFutureInterfaceBase_setProgressValueAndText(QFutureInterfaceBase* self, int progressValue, struct miqt_string progressText) {
	QString progressText_QString = QString::fromUtf8(progressText.data, progressText.len);
	self->setProgressValueAndText(static_cast<int>(progressValue), progressText_QString);
}

struct miqt_string QFutureInterfaceBase_progressText(const QFutureInterfaceBase* self) {
	QString _ret = self->progressText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFutureInterfaceBase_setExpectedResultCount(QFutureInterfaceBase* self, int resultCount) {
	self->setExpectedResultCount(static_cast<int>(resultCount));
}

int QFutureInterfaceBase_expectedResultCount(QFutureInterfaceBase* self) {
	return self->expectedResultCount();
}

int QFutureInterfaceBase_resultCount(const QFutureInterfaceBase* self) {
	return self->resultCount();
}

bool QFutureInterfaceBase_queryState(const QFutureInterfaceBase* self, int state) {
	return self->queryState(static_cast<QFutureInterfaceBase::State>(state));
}

bool QFutureInterfaceBase_isRunning(const QFutureInterfaceBase* self) {
	return self->isRunning();
}

bool QFutureInterfaceBase_isStarted(const QFutureInterfaceBase* self) {
	return self->isStarted();
}

bool QFutureInterfaceBase_isCanceled(const QFutureInterfaceBase* self) {
	return self->isCanceled();
}

bool QFutureInterfaceBase_isFinished(const QFutureInterfaceBase* self) {
	return self->isFinished();
}

bool QFutureInterfaceBase_isPaused(const QFutureInterfaceBase* self) {
	return self->isPaused();
}

bool QFutureInterfaceBase_isThrottled(const QFutureInterfaceBase* self) {
	return self->isThrottled();
}

bool QFutureInterfaceBase_isResultReadyAt(const QFutureInterfaceBase* self, int index) {
	return self->isResultReadyAt(static_cast<int>(index));
}

void QFutureInterfaceBase_cancel(QFutureInterfaceBase* self) {
	self->cancel();
}

void QFutureInterfaceBase_setPaused(QFutureInterfaceBase* self, bool paused) {
	self->setPaused(paused);
}

void QFutureInterfaceBase_togglePaused(QFutureInterfaceBase* self) {
	self->togglePaused();
}

void QFutureInterfaceBase_setThrottled(QFutureInterfaceBase* self, bool enable) {
	self->setThrottled(enable);
}

void QFutureInterfaceBase_waitForFinished(QFutureInterfaceBase* self) {
	self->waitForFinished();
}

bool QFutureInterfaceBase_waitForNextResult(QFutureInterfaceBase* self) {
	return self->waitForNextResult();
}

void QFutureInterfaceBase_waitForResult(QFutureInterfaceBase* self, int resultIndex) {
	self->waitForResult(static_cast<int>(resultIndex));
}

void QFutureInterfaceBase_waitForResume(QFutureInterfaceBase* self) {
	self->waitForResume();
}

QMutex* QFutureInterfaceBase_mutex(const QFutureInterfaceBase* self) {
	return self->mutex();
}

QMutex* QFutureInterfaceBase_mutexWithInt(const QFutureInterfaceBase* self, int param1) {
	QMutex& _ret = self->mutex(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

bool QFutureInterfaceBase_operatorEqual(const QFutureInterfaceBase* self, QFutureInterfaceBase* other) {
	return (*self == *other);
}

bool QFutureInterfaceBase_operatorNotEqual(const QFutureInterfaceBase* self, QFutureInterfaceBase* other) {
	return (*self != *other);
}

void QFutureInterfaceBase_operatorAssign(QFutureInterfaceBase* self, QFutureInterfaceBase* other) {
	self->operator=(*other);
}

void QFutureInterfaceBase_delete(QFutureInterfaceBase* self) {
	delete self;
}

