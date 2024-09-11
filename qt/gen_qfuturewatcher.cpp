#include <QEvent>
#include <QFutureWatcherBase>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qfuturewatcher.h"

#include "gen_qfuturewatcher.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QFutureWatcherBase_MetaObject(const QFutureWatcherBase* self) {
	return (QMetaObject*) self->metaObject();
}

void QFutureWatcherBase_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QFutureWatcherBase::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFutureWatcherBase_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QFutureWatcherBase::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

void QFutureWatcherBase_ProgressText(const QFutureWatcherBase* self, char** _out, int* _out_Strlen) {
	QString ret = self->progressText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

void QFutureWatcherBase_connect_Started(QFutureWatcherBase* self, void* slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::started), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFutureWatcherBase_Finished(QFutureWatcherBase* self) {
	self->finished();
}

void QFutureWatcherBase_connect_Finished(QFutureWatcherBase* self, void* slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::finished), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFutureWatcherBase_Canceled(QFutureWatcherBase* self) {
	self->canceled();
}

void QFutureWatcherBase_connect_Canceled(QFutureWatcherBase* self, void* slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::canceled), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFutureWatcherBase_Paused(QFutureWatcherBase* self) {
	self->paused();
}

void QFutureWatcherBase_connect_Paused(QFutureWatcherBase* self, void* slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::paused), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFutureWatcherBase_Resumed(QFutureWatcherBase* self) {
	self->resumed();
}

void QFutureWatcherBase_connect_Resumed(QFutureWatcherBase* self, void* slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)()>(&QFutureWatcherBase::resumed), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFutureWatcherBase_ResultReadyAt(QFutureWatcherBase* self, int resultIndex) {
	self->resultReadyAt(static_cast<int>(resultIndex));
}

void QFutureWatcherBase_connect_ResultReadyAt(QFutureWatcherBase* self, void* slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(int)>(&QFutureWatcherBase::resultReadyAt), self, [=](int resultIndex) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFutureWatcherBase_ResultsReadyAt(QFutureWatcherBase* self, int beginIndex, int endIndex) {
	self->resultsReadyAt(static_cast<int>(beginIndex), static_cast<int>(endIndex));
}

void QFutureWatcherBase_connect_ResultsReadyAt(QFutureWatcherBase* self, void* slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(int, int)>(&QFutureWatcherBase::resultsReadyAt), self, [=](int beginIndex, int endIndex) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFutureWatcherBase_ProgressRangeChanged(QFutureWatcherBase* self, int minimum, int maximum) {
	self->progressRangeChanged(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QFutureWatcherBase_connect_ProgressRangeChanged(QFutureWatcherBase* self, void* slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(int, int)>(&QFutureWatcherBase::progressRangeChanged), self, [=](int minimum, int maximum) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFutureWatcherBase_ProgressValueChanged(QFutureWatcherBase* self, int progressValue) {
	self->progressValueChanged(static_cast<int>(progressValue));
}

void QFutureWatcherBase_connect_ProgressValueChanged(QFutureWatcherBase* self, void* slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(int)>(&QFutureWatcherBase::progressValueChanged), self, [=](int progressValue) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFutureWatcherBase_ProgressTextChanged(QFutureWatcherBase* self, const char* progressText, size_t progressText_Strlen) {
	QString progressText_QString = QString::fromUtf8(progressText, progressText_Strlen);
	self->progressTextChanged(progressText_QString);
}

void QFutureWatcherBase_connect_ProgressTextChanged(QFutureWatcherBase* self, void* slot) {
	QFutureWatcherBase::connect(self, static_cast<void (QFutureWatcherBase::*)(const QString&)>(&QFutureWatcherBase::progressTextChanged), self, [=](const QString& progressText) {
		miqt_exec_callback(slot, 0, nullptr);
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

void QFutureWatcherBase_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QFutureWatcherBase::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFutureWatcherBase_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFutureWatcherBase::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFutureWatcherBase_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QFutureWatcherBase::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFutureWatcherBase_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFutureWatcherBase::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFutureWatcherBase_Delete(QFutureWatcherBase* self) {
	delete self;
}

