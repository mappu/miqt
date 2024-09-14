#include <QMetaObject>
#include <QPaintDeviceWindow>
#include <QRect>
#include <QRegion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qpaintdevicewindow.h"
#include "gen_qpaintdevicewindow.h"
#include "_cgo_export.h"

QMetaObject* QPaintDeviceWindow_MetaObject(const QPaintDeviceWindow* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QPaintDeviceWindow_Tr(const char* s) {
	QString _ret = QPaintDeviceWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPaintDeviceWindow_TrUtf8(const char* s) {
	QString _ret = QPaintDeviceWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QPaintDeviceWindow_Update(QPaintDeviceWindow* self, QRect* rect) {
	self->update(*rect);
}

void QPaintDeviceWindow_UpdateWithRegion(QPaintDeviceWindow* self, QRegion* region) {
	self->update(*region);
}

void QPaintDeviceWindow_Update2(QPaintDeviceWindow* self) {
	self->update();
}

struct miqt_string* QPaintDeviceWindow_Tr2(const char* s, const char* c) {
	QString _ret = QPaintDeviceWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPaintDeviceWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPaintDeviceWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPaintDeviceWindow_TrUtf82(const char* s, const char* c) {
	QString _ret = QPaintDeviceWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPaintDeviceWindow_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPaintDeviceWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QPaintDeviceWindow_Delete(QPaintDeviceWindow* self) {
	delete self;
}

