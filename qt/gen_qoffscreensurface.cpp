#include <QMetaObject>
#include <QObject>
#include <QOffscreenSurface>
#include <QScreen>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurfaceFormat>
#include "qoffscreensurface.h"

#include "gen_qoffscreensurface.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QOffscreenSurface* QOffscreenSurface_new(QScreen* screen, QObject* parent) {
	return new QOffscreenSurface(screen, parent);
}

QOffscreenSurface* QOffscreenSurface_new2() {
	return new QOffscreenSurface();
}

QOffscreenSurface* QOffscreenSurface_new3(QScreen* screen) {
	return new QOffscreenSurface(screen);
}

QMetaObject* QOffscreenSurface_MetaObject(QOffscreenSurface* self) {
	return (QMetaObject*) const_cast<const QOffscreenSurface*>(self)->metaObject();
}

void QOffscreenSurface_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QOffscreenSurface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QOffscreenSurface_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QOffscreenSurface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QOffscreenSurface_SurfaceType(QOffscreenSurface* self) {
	QSurface::SurfaceType ret = const_cast<const QOffscreenSurface*>(self)->surfaceType();
	return static_cast<uintptr_t>(ret);
}

void QOffscreenSurface_Create(QOffscreenSurface* self) {
	self->create();
}

void QOffscreenSurface_Destroy(QOffscreenSurface* self) {
	self->destroy();
}

bool QOffscreenSurface_IsValid(QOffscreenSurface* self) {
	return const_cast<const QOffscreenSurface*>(self)->isValid();
}

void QOffscreenSurface_SetFormat(QOffscreenSurface* self, QSurfaceFormat* format) {
	self->setFormat(*format);
}

QSurfaceFormat* QOffscreenSurface_Format(QOffscreenSurface* self) {
	QSurfaceFormat ret = const_cast<const QOffscreenSurface*>(self)->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSurfaceFormat*>(new QSurfaceFormat(ret));
}

QSurfaceFormat* QOffscreenSurface_RequestedFormat(QOffscreenSurface* self) {
	QSurfaceFormat ret = const_cast<const QOffscreenSurface*>(self)->requestedFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSurfaceFormat*>(new QSurfaceFormat(ret));
}

QSize* QOffscreenSurface_Size(QOffscreenSurface* self) {
	QSize ret = const_cast<const QOffscreenSurface*>(self)->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QScreen* QOffscreenSurface_Screen(QOffscreenSurface* self) {
	return const_cast<const QOffscreenSurface*>(self)->screen();
}

void QOffscreenSurface_SetScreen(QOffscreenSurface* self, QScreen* screen) {
	self->setScreen(screen);
}

void QOffscreenSurface_ScreenChanged(QOffscreenSurface* self, QScreen* screen) {
	self->screenChanged(screen);
}

void QOffscreenSurface_connect_ScreenChanged(QOffscreenSurface* self, void* slot) {
	QOffscreenSurface::connect(self, static_cast<void (QOffscreenSurface::*)(QScreen*)>(&QOffscreenSurface::screenChanged), self, [=](QScreen* screen) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QOffscreenSurface_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QOffscreenSurface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QOffscreenSurface_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QOffscreenSurface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QOffscreenSurface_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QOffscreenSurface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QOffscreenSurface_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QOffscreenSurface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QOffscreenSurface_Delete(QOffscreenSurface* self) {
	delete self;
}

