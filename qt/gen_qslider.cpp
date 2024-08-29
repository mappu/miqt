#include <QEvent>
#include <QMetaObject>
#include <QSize>
#include <QSlider>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qslider.h"

#include "gen_qslider.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSlider* QSlider_new() {
	return new QSlider();
}

QSlider* QSlider_new2(uintptr_t orientation) {
	return new QSlider(static_cast<Qt::Orientation>(orientation));
}

QSlider* QSlider_new3(QWidget* parent) {
	return new QSlider(parent);
}

QSlider* QSlider_new4(uintptr_t orientation, QWidget* parent) {
	return new QSlider(static_cast<Qt::Orientation>(orientation), parent);
}

QMetaObject* QSlider_MetaObject(QSlider* self) {
	return (QMetaObject*) const_cast<const QSlider*>(self)->metaObject();
}

void QSlider_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSlider::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSlider_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSlider::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QSlider_SizeHint(QSlider* self) {
	QSize ret = const_cast<const QSlider*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSlider_MinimumSizeHint(QSlider* self) {
	QSize ret = const_cast<const QSlider*>(self)->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QSlider_SetTickPosition(QSlider* self, uintptr_t position) {
	self->setTickPosition(static_cast<QSlider::TickPosition>(position));
}

uintptr_t QSlider_TickPosition(QSlider* self) {
	QSlider::TickPosition ret = const_cast<const QSlider*>(self)->tickPosition();
	return static_cast<uintptr_t>(ret);
}

void QSlider_SetTickInterval(QSlider* self, int ti) {
	self->setTickInterval(static_cast<int>(ti));
}

int QSlider_TickInterval(QSlider* self) {
	return const_cast<const QSlider*>(self)->tickInterval();
}

bool QSlider_Event(QSlider* self, QEvent* event) {
	return self->event(event);
}

void QSlider_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSlider::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSlider_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSlider::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSlider_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSlider::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSlider_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSlider::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSlider_Delete(QSlider* self) {
	delete self;
}

