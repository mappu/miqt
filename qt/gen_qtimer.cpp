#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimer>
#include "qtimer.h"
#include "gen_qtimer.h"
#include "_cgo_export.h"

QTimer* QTimer_new() {
	return new QTimer();
}

QTimer* QTimer_new2(QObject* parent) {
	return new QTimer(parent);
}

QMetaObject* QTimer_MetaObject(const QTimer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTimer_Metacast(QTimer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QTimer_Tr(const char* s) {
	QString _ret = QTimer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimer_TrUtf8(const char* s) {
	QString _ret = QTimer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QTimer_IsActive(const QTimer* self) {
	return self->isActive();
}

int QTimer_TimerId(const QTimer* self) {
	return self->timerId();
}

void QTimer_SetInterval(QTimer* self, int msec) {
	self->setInterval(static_cast<int>(msec));
}

int QTimer_Interval(const QTimer* self) {
	return self->interval();
}

int QTimer_RemainingTime(const QTimer* self) {
	return self->remainingTime();
}

void QTimer_SetTimerType(QTimer* self, int atype) {
	self->setTimerType(static_cast<Qt::TimerType>(atype));
}

int QTimer_TimerType(const QTimer* self) {
	Qt::TimerType _ret = self->timerType();
	return static_cast<int>(_ret);
}

void QTimer_SetSingleShot(QTimer* self, bool singleShot) {
	self->setSingleShot(singleShot);
}

bool QTimer_IsSingleShot(const QTimer* self) {
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

struct miqt_string* QTimer_Tr2(const char* s, const char* c) {
	QString _ret = QTimer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTimer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimer_TrUtf82(const char* s, const char* c) {
	QString _ret = QTimer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimer_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTimer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTimer_Delete(QTimer* self) {
	delete self;
}

