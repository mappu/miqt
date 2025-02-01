#include <QEvent>
#include <QFutureWatcherBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfuturewatcher.h>
#include "gen_qfuturewatcher.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QFutureWatcherBase_started(intptr_t);
void miqt_exec_callback_QFutureWatcherBase_finished(intptr_t);
void miqt_exec_callback_QFutureWatcherBase_canceled(intptr_t);
void miqt_exec_callback_QFutureWatcherBase_paused(intptr_t);
void miqt_exec_callback_QFutureWatcherBase_suspending(intptr_t);
void miqt_exec_callback_QFutureWatcherBase_suspended(intptr_t);
void miqt_exec_callback_QFutureWatcherBase_resumed(intptr_t);
void miqt_exec_callback_QFutureWatcherBase_resultReadyAt(intptr_t, int);
void miqt_exec_callback_QFutureWatcherBase_resultsReadyAt(intptr_t, int, int);
void miqt_exec_callback_QFutureWatcherBase_progressRangeChanged(intptr_t, int, int);
void miqt_exec_callback_QFutureWatcherBase_progressValueChanged(intptr_t, int);
void miqt_exec_callback_QFutureWatcherBase_progressTextChanged(intptr_t, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

void QFutureWatcherBase_virtbase(QFutureWatcherBase* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QFutureWatcherBase_metaObject(const QFutureWatcherBase* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFutureWatcherBase_metacast(QFutureWatcherBase* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFutureWatcherBase_tr(const char* s) {
	QString _ret = QFutureWatcherBase::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QFutureWatcherBase_progressValue(const QFutureWatcherBase* self) {
	return self->progressValue();
}

int QFutureWatcherBase_progressMinimum(const QFutureWatcherBase* self) {
	return self->progressMinimum();
}

int QFutureWatcherBase_progressMaximum(const QFutureWatcherBase* self) {
	return self->progressMaximum();
}

struct miqt_string QFutureWatcherBase_progressText(const QFutureWatcherBase* self) {
	QString _ret = self->progressText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFutureWatcherBase_isStarted(const QFutureWatcherBase* self) {
	return self->isStarted();
}

bool QFutureWatcherBase_isFinished(const QFutureWatcherBase* self) {
	return self->isFinished();
}

bool QFutureWatcherBase_isRunning(const QFutureWatcherBase* self) {
	return self->isRunning();
}

bool QFutureWatcherBase_isCanceled(const QFutureWatcherBase* self) {
	return self->isCanceled();
}

bool QFutureWatcherBase_isPaused(const QFutureWatcherBase* self) {
	return self->isPaused();
}

bool QFutureWatcherBase_isSuspending(const QFutureWatcherBase* self) {
	return self->isSuspending();
}

bool QFutureWatcherBase_isSuspended(const QFutureWatcherBase* self) {
	return self->isSuspended();
}

void QFutureWatcherBase_waitForFinished(QFutureWatcherBase* self) {
	self->waitForFinished();
}

void QFutureWatcherBase_setPendingResultsLimit(QFutureWatcherBase* self, int limit) {
	self->setPendingResultsLimit(static_cast<int>(limit));
}

bool QFutureWatcherBase_event(QFutureWatcherBase* self, QEvent* event) {
	return self->event(event);
}

void QFutureWatcherBase_started(QFutureWatcherBase* self) {
	self->started();
}

void QFutureWatcherBase_connect_started(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::started), self, [=]() {
		miqt_exec_callback_QFutureWatcherBase_started(slot);
	});
}

void QFutureWatcherBase_finished(QFutureWatcherBase* self) {
	self->finished();
}

void QFutureWatcherBase_connect_finished(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::finished), self, [=]() {
		miqt_exec_callback_QFutureWatcherBase_finished(slot);
	});
}

void QFutureWatcherBase_canceled(QFutureWatcherBase* self) {
	self->canceled();
}

void QFutureWatcherBase_connect_canceled(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::canceled), self, [=]() {
		miqt_exec_callback_QFutureWatcherBase_canceled(slot);
	});
}

void QFutureWatcherBase_paused(QFutureWatcherBase* self) {
	self->paused();
}

void QFutureWatcherBase_connect_paused(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::paused), self, [=]() {
		miqt_exec_callback_QFutureWatcherBase_paused(slot);
	});
}

void QFutureWatcherBase_suspending(QFutureWatcherBase* self) {
	self->suspending();
}

void QFutureWatcherBase_connect_suspending(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::suspending), self, [=]() {
		miqt_exec_callback_QFutureWatcherBase_suspending(slot);
	});
}

void QFutureWatcherBase_suspended(QFutureWatcherBase* self) {
	self->suspended();
}

void QFutureWatcherBase_connect_suspended(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::suspended), self, [=]() {
		miqt_exec_callback_QFutureWatcherBase_suspended(slot);
	});
}

void QFutureWatcherBase_resumed(QFutureWatcherBase* self) {
	self->resumed();
}

void QFutureWatcherBase_connect_resumed(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::resumed), self, [=]() {
		miqt_exec_callback_QFutureWatcherBase_resumed(slot);
	});
}

void QFutureWatcherBase_resultReadyAt(QFutureWatcherBase* self, int resultIndex) {
	self->resultReadyAt(static_cast<int>(resultIndex));
}

void QFutureWatcherBase_connect_resultReadyAt(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(int)>(&QFutureWatcherBase::resultReadyAt), self, [=](int resultIndex) {
		int sigval1 = resultIndex;
		miqt_exec_callback_QFutureWatcherBase_resultReadyAt(slot, sigval1);
	});
}

void QFutureWatcherBase_resultsReadyAt(QFutureWatcherBase* self, int beginIndex, int endIndex) {
	self->resultsReadyAt(static_cast<int>(beginIndex), static_cast<int>(endIndex));
}

void QFutureWatcherBase_connect_resultsReadyAt(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(int, int)>(&QFutureWatcherBase::resultsReadyAt), self, [=](int beginIndex, int endIndex) {
		int sigval1 = beginIndex;
		int sigval2 = endIndex;
		miqt_exec_callback_QFutureWatcherBase_resultsReadyAt(slot, sigval1, sigval2);
	});
}

void QFutureWatcherBase_progressRangeChanged(QFutureWatcherBase* self, int minimum, int maximum) {
	self->progressRangeChanged(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QFutureWatcherBase_connect_progressRangeChanged(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(int, int)>(&QFutureWatcherBase::progressRangeChanged), self, [=](int minimum, int maximum) {
		int sigval1 = minimum;
		int sigval2 = maximum;
		miqt_exec_callback_QFutureWatcherBase_progressRangeChanged(slot, sigval1, sigval2);
	});
}

void QFutureWatcherBase_progressValueChanged(QFutureWatcherBase* self, int progressValue) {
	self->progressValueChanged(static_cast<int>(progressValue));
}

void QFutureWatcherBase_connect_progressValueChanged(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(int)>(&QFutureWatcherBase::progressValueChanged), self, [=](int progressValue) {
		int sigval1 = progressValue;
		miqt_exec_callback_QFutureWatcherBase_progressValueChanged(slot, sigval1);
	});
}

void QFutureWatcherBase_progressTextChanged(QFutureWatcherBase* self, struct miqt_string progressText) {
	QString progressText_QString = QString::fromUtf8(progressText.data, progressText.len);
	self->progressTextChanged(progressText_QString);
}

void QFutureWatcherBase_connect_progressTextChanged(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(const QString&)>(&QFutureWatcherBase::progressTextChanged), self, [=](const QString& progressText) {
		const QString progressText_ret = progressText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray progressText_b = progressText_ret.toUtf8();
		struct miqt_string progressText_ms;
		progressText_ms.len = progressText_b.length();
		progressText_ms.data = static_cast<char*>(malloc(progressText_ms.len));
		memcpy(progressText_ms.data, progressText_b.data(), progressText_ms.len);
		struct miqt_string sigval1 = progressText_ms;
		miqt_exec_callback_QFutureWatcherBase_progressTextChanged(slot, sigval1);
	});
}

void QFutureWatcherBase_cancel(QFutureWatcherBase* self) {
	self->cancel();
}

void QFutureWatcherBase_setSuspended(QFutureWatcherBase* self, bool suspend) {
	self->setSuspended(suspend);
}

void QFutureWatcherBase_suspend(QFutureWatcherBase* self) {
	self->suspend();
}

void QFutureWatcherBase_resume(QFutureWatcherBase* self) {
	self->resume();
}

void QFutureWatcherBase_toggleSuspended(QFutureWatcherBase* self) {
	self->toggleSuspended();
}

void QFutureWatcherBase_setPaused(QFutureWatcherBase* self, bool paused) {
	self->setPaused(paused);
}

void QFutureWatcherBase_pause(QFutureWatcherBase* self) {
	self->pause();
}

void QFutureWatcherBase_togglePaused(QFutureWatcherBase* self) {
	self->togglePaused();
}

struct miqt_string QFutureWatcherBase_tr2(const char* s, const char* c) {
	QString _ret = QFutureWatcherBase::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFutureWatcherBase_tr3(const char* s, const char* c, int n) {
	QString _ret = QFutureWatcherBase::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFutureWatcherBase_delete(QFutureWatcherBase* self) {
	delete self;
}

