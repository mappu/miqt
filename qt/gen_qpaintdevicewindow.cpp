#include <QEvent>
#include <QExposeEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPaintEvent>
#include <QRect>
#include <QRegion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurface>
#include <QWindow>
#include <qpaintdevicewindow.h>
#include "gen_qpaintdevicewindow.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QPaintDeviceWindow_virtbase(QPaintDeviceWindow* src, QWindow** outptr_QWindow, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QWindow = static_cast<QWindow*>(src);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

QMetaObject* QPaintDeviceWindow_metaObject(const QPaintDeviceWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPaintDeviceWindow_metacast(QPaintDeviceWindow* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPaintDeviceWindow_tr(const char* s) {
	QString _ret = QPaintDeviceWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPaintDeviceWindow_trUtf8(const char* s) {
	QString _ret = QPaintDeviceWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPaintDeviceWindow_update(QPaintDeviceWindow* self, QRect* rect) {
	self->update(*rect);
}

void QPaintDeviceWindow_updateWithRegion(QPaintDeviceWindow* self, QRegion* region) {
	self->update(*region);
}

void QPaintDeviceWindow_update2(QPaintDeviceWindow* self) {
	self->update();
}

struct miqt_string QPaintDeviceWindow_tr2(const char* s, const char* c) {
	QString _ret = QPaintDeviceWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPaintDeviceWindow_tr3(const char* s, const char* c, int n) {
	QString _ret = QPaintDeviceWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPaintDeviceWindow_trUtf82(const char* s, const char* c) {
	QString _ret = QPaintDeviceWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPaintDeviceWindow_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPaintDeviceWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPaintDeviceWindow_delete(QPaintDeviceWindow* self) {
	delete self;
}

