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
#include "_cgo_export.h"

QOffscreenSurface* QOffscreenSurface_new(QScreen* screen, QObject* parent) {
	return new QOffscreenSurface(screen, parent);
}

QOffscreenSurface* QOffscreenSurface_new2() {
	return new QOffscreenSurface();
}

QOffscreenSurface* QOffscreenSurface_new3(QScreen* screen) {
	return new QOffscreenSurface(screen);
}

QMetaObject* QOffscreenSurface_MetaObject(const QOffscreenSurface* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QOffscreenSurface_Tr(const char* s) {
	QString _ret = QOffscreenSurface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QOffscreenSurface_TrUtf8(const char* s) {
	QString _ret = QOffscreenSurface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

uintptr_t QOffscreenSurface_SurfaceType(const QOffscreenSurface* self) {
	QSurface::SurfaceType _ret = self->surfaceType();
	return static_cast<uintptr_t>(_ret);
}

void QOffscreenSurface_Create(QOffscreenSurface* self) {
	self->create();
}

void QOffscreenSurface_Destroy(QOffscreenSurface* self) {
	self->destroy();
}

bool QOffscreenSurface_IsValid(const QOffscreenSurface* self) {
	return self->isValid();
}

void QOffscreenSurface_SetFormat(QOffscreenSurface* self, QSurfaceFormat* format) {
	self->setFormat(*format);
}

QSurfaceFormat* QOffscreenSurface_Format(const QOffscreenSurface* self) {
	return new QSurfaceFormat(self->format());
}

QSurfaceFormat* QOffscreenSurface_RequestedFormat(const QOffscreenSurface* self) {
	return new QSurfaceFormat(self->requestedFormat());
}

QSize* QOffscreenSurface_Size(const QOffscreenSurface* self) {
	return new QSize(self->size());
}

QScreen* QOffscreenSurface_Screen(const QOffscreenSurface* self) {
	return self->screen();
}

void QOffscreenSurface_SetScreen(QOffscreenSurface* self, QScreen* screen) {
	self->setScreen(screen);
}

void QOffscreenSurface_ScreenChanged(QOffscreenSurface* self, QScreen* screen) {
	self->screenChanged(screen);
}

void QOffscreenSurface_connect_ScreenChanged(QOffscreenSurface* self, void* slot) {
	QOffscreenSurface::connect(self, static_cast<void (QOffscreenSurface::*)(QScreen*)>(&QOffscreenSurface::screenChanged), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QOffscreenSurface_ScreenChanged(slot, sigval1);
	});
}

struct miqt_string* QOffscreenSurface_Tr2(const char* s, const char* c) {
	QString _ret = QOffscreenSurface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QOffscreenSurface_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOffscreenSurface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QOffscreenSurface_TrUtf82(const char* s, const char* c) {
	QString _ret = QOffscreenSurface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QOffscreenSurface_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QOffscreenSurface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QOffscreenSurface_Delete(QOffscreenSurface* self) {
	delete self;
}

