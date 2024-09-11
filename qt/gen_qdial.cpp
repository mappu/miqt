#include <QDial>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qdial.h"

#include "gen_qdial.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QDial* QDial_new() {
	return new QDial();
}

QDial* QDial_new2(QWidget* parent) {
	return new QDial(parent);
}

QMetaObject* QDial_MetaObject(const QDial* self) {
	return (QMetaObject*) self->metaObject();
}

void QDial_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QDial::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDial_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QDial::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QDial_Wrapping(const QDial* self) {
	return self->wrapping();
}

int QDial_NotchSize(const QDial* self) {
	return self->notchSize();
}

void QDial_SetNotchTarget(QDial* self, double target) {
	self->setNotchTarget(static_cast<double>(target));
}

double QDial_NotchTarget(const QDial* self) {
	return self->notchTarget();
}

bool QDial_NotchesVisible(const QDial* self) {
	return self->notchesVisible();
}

QSize* QDial_SizeHint(const QDial* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QDial_MinimumSizeHint(const QDial* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QDial_SetNotchesVisible(QDial* self, bool visible) {
	self->setNotchesVisible(visible);
}

void QDial_SetWrapping(QDial* self, bool on) {
	self->setWrapping(on);
}

void QDial_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QDial::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDial_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDial::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDial_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QDial::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDial_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDial::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDial_Delete(QDial* self) {
	delete self;
}

