#include <QEvent>
#include <QMetaObject>
#include <QSize>
#include <QSlider>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qslider.h>
#include "gen_qslider.h"
#include "_cgo_export.h"

QSlider* QSlider_new(QWidget* parent) {
	return new QSlider(parent);
}

QSlider* QSlider_new2() {
	return new QSlider();
}

QSlider* QSlider_new3(int orientation) {
	return new QSlider(static_cast<Qt::Orientation>(orientation));
}

QSlider* QSlider_new4(int orientation, QWidget* parent) {
	return new QSlider(static_cast<Qt::Orientation>(orientation), parent);
}

QMetaObject* QSlider_MetaObject(const QSlider* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSlider_Metacast(QSlider* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSlider_Tr(const char* s) {
	QString _ret = QSlider::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSlider_TrUtf8(const char* s) {
	QString _ret = QSlider::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QSlider_SizeHint(const QSlider* self) {
	return new QSize(self->sizeHint());
}

QSize* QSlider_MinimumSizeHint(const QSlider* self) {
	return new QSize(self->minimumSizeHint());
}

void QSlider_SetTickPosition(QSlider* self, int position) {
	self->setTickPosition(static_cast<QSlider::TickPosition>(position));
}

int QSlider_TickPosition(const QSlider* self) {
	QSlider::TickPosition _ret = self->tickPosition();
	return static_cast<int>(_ret);
}

void QSlider_SetTickInterval(QSlider* self, int ti) {
	self->setTickInterval(static_cast<int>(ti));
}

int QSlider_TickInterval(const QSlider* self) {
	return self->tickInterval();
}

bool QSlider_Event(QSlider* self, QEvent* event) {
	return self->event(event);
}

struct miqt_string QSlider_Tr2(const char* s, const char* c) {
	QString _ret = QSlider::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSlider_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSlider::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSlider_TrUtf82(const char* s, const char* c) {
	QString _ret = QSlider::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSlider_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSlider::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSlider_Delete(QSlider* self) {
	delete self;
}

