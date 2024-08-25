#include "gen_qtimer.h"
#include "qtimer.h"

#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimer>


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
	return (QMetaObject*) self->metaObject();
}

void QTimer_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTimer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimer_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTimer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QTimer_IsActive(QTimer* self) {
	return self->isActive();
}

int QTimer_TimerId(QTimer* self) {
	return self->timerId();
}

void QTimer_SetInterval(QTimer* self, int msec) {
	self->setInterval(static_cast<int>(msec));
}

int QTimer_Interval(QTimer* self) {
	return self->interval();
}

int QTimer_RemainingTime(QTimer* self) {
	return self->remainingTime();
}

void QTimer_SetSingleShot(QTimer* self, bool singleShot) {
	self->setSingleShot(singleShot);
}

bool QTimer_IsSingleShot(QTimer* self) {
	return self->isSingleShot();
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

void QTimer_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTimer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimer_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTimer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimer_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTimer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimer_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
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

