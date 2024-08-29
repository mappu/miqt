#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimer>
#include "qtimer.h"

#include "gen_qtimer.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTimer* QTimer_new() {
	return new QTimer();
}

QTimer* QTimer_new2(QObject* parent) {
	return new QTimer(parent);
}

QMetaObject* QTimer_MetaObject(QTimer* self) {
	return (QMetaObject*) const_cast<const QTimer*>(self)->metaObject();
}

void QTimer_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTimer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimer_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTimer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QTimer_IsActive(QTimer* self) {
	return const_cast<const QTimer*>(self)->isActive();
}

int QTimer_TimerId(QTimer* self) {
	return const_cast<const QTimer*>(self)->timerId();
}

void QTimer_SetInterval(QTimer* self, int msec) {
	self->setInterval(static_cast<int>(msec));
}

int QTimer_Interval(QTimer* self) {
	return const_cast<const QTimer*>(self)->interval();
}

int QTimer_RemainingTime(QTimer* self) {
	return const_cast<const QTimer*>(self)->remainingTime();
}

void QTimer_SetTimerType(QTimer* self, uintptr_t atype) {
	self->setTimerType(static_cast<Qt::TimerType>(atype));
}

uintptr_t QTimer_TimerType(QTimer* self) {
	Qt::TimerType ret = const_cast<const QTimer*>(self)->timerType();
	return static_cast<uintptr_t>(ret);
}

void QTimer_SetSingleShot(QTimer* self, bool singleShot) {
	self->setSingleShot(singleShot);
}

bool QTimer_IsSingleShot(QTimer* self) {
	return const_cast<const QTimer*>(self)->isSingleShot();
}

void QTimer_Start(QTimer* self, int msec) {
	self->start(static_cast<int>(msec));
}

void QTimer_Start2(QTimer* self) {
	self->start();
}

void QTimer_Stop(QTimer* self) {
	self->stop();
}

void QTimer_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTimer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimer_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTimer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimer_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTimer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimer_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTimer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimer_Delete(QTimer* self) {
	delete self;
}

