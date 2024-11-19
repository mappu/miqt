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
#include "_cgo_export.h"

QMetaObject* QFutureWatcherBase_MetaObject(const QFutureWatcherBase* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFutureWatcherBase_Metacast(QFutureWatcherBase* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFutureWatcherBase_Tr(const char* s) {
	QString _ret = QFutureWatcherBase::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFutureWatcherBase_TrUtf8(const char* s) {
	QString _ret = QFutureWatcherBase::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QFutureWatcherBase_ProgressValue(const QFutureWatcherBase* self) {
	return self->progressValue();
}

int QFutureWatcherBase_ProgressMinimum(const QFutureWatcherBase* self) {
	return self->progressMinimum();
}

int QFutureWatcherBase_ProgressMaximum(const QFutureWatcherBase* self) {
	return self->progressMaximum();
}

struct miqt_string QFutureWatcherBase_ProgressText(const QFutureWatcherBase* self) {
	QString _ret = self->progressText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFutureWatcherBase_IsStarted(const QFutureWatcherBase* self) {
	return self->isStarted();
}

bool QFutureWatcherBase_IsFinished(const QFutureWatcherBase* self) {
	return self->isFinished();
}

bool QFutureWatcherBase_IsRunning(const QFutureWatcherBase* self) {
	return self->isRunning();
}

bool QFutureWatcherBase_IsCanceled(const QFutureWatcherBase* self) {
	return self->isCanceled();
}

bool QFutureWatcherBase_IsPaused(const QFutureWatcherBase* self) {
	return self->isPaused();
}

void QFutureWatcherBase_WaitForFinished(QFutureWatcherBase* self) {
	self->waitForFinished();
}

void QFutureWatcherBase_SetPendingResultsLimit(QFutureWatcherBase* self, int limit) {
	self->setPendingResultsLimit(static_cast<int>(limit));
}

bool QFutureWatcherBase_Event(QFutureWatcherBase* self, QEvent* event) {
	return self->event(event);
}

void QFutureWatcherBase_Started(QFutureWatcherBase* self) {
	self->started();
}

void QFutureWatcherBase_connect_Started(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::started), self, [=]() {
		miqt_exec_callback_QFutureWatcherBase_Started(slot);
	});
}

void QFutureWatcherBase_Finished(QFutureWatcherBase* self) {
	self->finished();
}

void QFutureWatcherBase_connect_Finished(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::finished), self, [=]() {
		miqt_exec_callback_QFutureWatcherBase_Finished(slot);
	});
}

void QFutureWatcherBase_Canceled(QFutureWatcherBase* self) {
	self->canceled();
}

void QFutureWatcherBase_connect_Canceled(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::canceled), self, [=]() {
		miqt_exec_callback_QFutureWatcherBase_Canceled(slot);
	});
}

void QFutureWatcherBase_Paused(QFutureWatcherBase* self) {
	self->paused();
}

void QFutureWatcherBase_connect_Paused(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::paused), self, [=]() {
		miqt_exec_callback_QFutureWatcherBase_Paused(slot);
	});
}

void QFutureWatcherBase_Resumed(QFutureWatcherBase* self) {
	self->resumed();
}

void QFutureWatcherBase_connect_Resumed(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::resumed), self, [=]() {
		miqt_exec_callback_QFutureWatcherBase_Resumed(slot);
	});
}

void QFutureWatcherBase_ResultReadyAt(QFutureWatcherBase* self, int resultIndex) {
	self->resultReadyAt(static_cast<int>(resultIndex));
}

void QFutureWatcherBase_connect_ResultReadyAt(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(int)>(&QFutureWatcherBase::resultReadyAt), self, [=](int resultIndex) {
		int sigval1 = resultIndex;
		miqt_exec_callback_QFutureWatcherBase_ResultReadyAt(slot, sigval1);
	});
}

void QFutureWatcherBase_ResultsReadyAt(QFutureWatcherBase* self, int beginIndex, int endIndex) {
	self->resultsReadyAt(static_cast<int>(beginIndex), static_cast<int>(endIndex));
}

void QFutureWatcherBase_connect_ResultsReadyAt(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(int, int)>(&QFutureWatcherBase::resultsReadyAt), self, [=](int beginIndex, int endIndex) {
		int sigval1 = beginIndex;
		int sigval2 = endIndex;
		miqt_exec_callback_QFutureWatcherBase_ResultsReadyAt(slot, sigval1, sigval2);
	});
}

void QFutureWatcherBase_ProgressRangeChanged(QFutureWatcherBase* self, int minimum, int maximum) {
	self->progressRangeChanged(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QFutureWatcherBase_connect_ProgressRangeChanged(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(int, int)>(&QFutureWatcherBase::progressRangeChanged), self, [=](int minimum, int maximum) {
		int sigval1 = minimum;
		int sigval2 = maximum;
		miqt_exec_callback_QFutureWatcherBase_ProgressRangeChanged(slot, sigval1, sigval2);
	});
}

void QFutureWatcherBase_ProgressValueChanged(QFutureWatcherBase* self, int progressValue) {
	self->progressValueChanged(static_cast<int>(progressValue));
}

void QFutureWatcherBase_connect_ProgressValueChanged(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(int)>(&QFutureWatcherBase::progressValueChanged), self, [=](int progressValue) {
		int sigval1 = progressValue;
		miqt_exec_callback_QFutureWatcherBase_ProgressValueChanged(slot, sigval1);
	});
}

void QFutureWatcherBase_ProgressTextChanged(QFutureWatcherBase* self, struct miqt_string progressText) {
	QString progressText_QString = QString::fromUtf8(progressText.data, progressText.len);
	self->progressTextChanged(progressText_QString);
}

void QFutureWatcherBase_connect_ProgressTextChanged(QFutureWatcherBase* self, intptr_t slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(const QString&)>(&QFutureWatcherBase::progressTextChanged), self, [=](const QString& progressText) {
		const QString progressText_ret = progressText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray progressText_b = progressText_ret.toUtf8();
		struct miqt_string progressText_ms;
		progressText_ms.len = progressText_b.length();
		progressText_ms.data = static_cast<char*>(malloc(progressText_ms.len));
		memcpy(progressText_ms.data, progressText_b.data(), progressText_ms.len);
		struct miqt_string sigval1 = progressText_ms;
		miqt_exec_callback_QFutureWatcherBase_ProgressTextChanged(slot, sigval1);
	});
}

void QFutureWatcherBase_Cancel(QFutureWatcherBase* self) {
	self->cancel();
}

void QFutureWatcherBase_SetPaused(QFutureWatcherBase* self, bool paused) {
	self->setPaused(paused);
}

void QFutureWatcherBase_Pause(QFutureWatcherBase* self) {
	self->pause();
}

void QFutureWatcherBase_Resume(QFutureWatcherBase* self) {
	self->resume();
}

void QFutureWatcherBase_TogglePaused(QFutureWatcherBase* self) {
	self->togglePaused();
}

struct miqt_string QFutureWatcherBase_Tr2(const char* s, const char* c) {
	QString _ret = QFutureWatcherBase::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFutureWatcherBase_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFutureWatcherBase::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFutureWatcherBase_TrUtf82(const char* s, const char* c) {
	QString _ret = QFutureWatcherBase::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFutureWatcherBase_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QFutureWatcherBase::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFutureWatcherBase_Delete(QFutureWatcherBase* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QFutureWatcherBase*>( self );
	} else {
		delete self;
	}
}

