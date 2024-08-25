#include "gen_qslider.h"
#include "qslider.h"

#include <QEvent>
#include <QMetaObject>
#include <QSize>
#include <QSlider>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSlider* QSlider_new() {
	return new QSlider();
}

QSlider* QSlider_new2(QWidget* parent) {
	return new QSlider(parent);
}

QMetaObject* QSlider_MetaObject(QSlider* self) {
	return (QMetaObject*) self->metaObject();
}

void QSlider_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSlider::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSlider_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSlider::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QSlider_SizeHint(QSlider* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSlider_MinimumSizeHint(QSlider* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QSlider_SetTickInterval(QSlider* self, int ti) {
	self->setTickInterval(static_cast<int>(ti));
}

int QSlider_TickInterval(QSlider* self) {
	return self->tickInterval();
}

bool QSlider_Event(QSlider* self, QEvent* event) {
	return self->event(event);
}

void QSlider_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSlider::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSlider_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSlider::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSlider_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSlider::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSlider_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
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

