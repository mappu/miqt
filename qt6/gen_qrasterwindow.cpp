#include <QMetaObject>
#include <QRasterWindow>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWindow>
#include <qrasterwindow.h>
#include "gen_qrasterwindow.h"
#include "_cgo_export.h"

QRasterWindow* QRasterWindow_new() {
	return new QRasterWindow();
}

QRasterWindow* QRasterWindow_new2(QWindow* parent) {
	return new QRasterWindow(parent);
}

QMetaObject* QRasterWindow_MetaObject(const QRasterWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRasterWindow_Metacast(QRasterWindow* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRasterWindow_Tr(const char* s) {
	QString _ret = QRasterWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRasterWindow_Tr2(const char* s, const char* c) {
	QString _ret = QRasterWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRasterWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRasterWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRasterWindow_Delete(QRasterWindow* self) {
	delete self;
}

