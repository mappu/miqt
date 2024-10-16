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

struct miqt_string* QRasterWindow_Tr(const char* s) {
	QString _ret = QRasterWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRasterWindow_TrUtf8(const char* s) {
	QString _ret = QRasterWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRasterWindow_Tr2(const char* s, const char* c) {
	QString _ret = QRasterWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRasterWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRasterWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRasterWindow_TrUtf82(const char* s, const char* c) {
	QString _ret = QRasterWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRasterWindow_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRasterWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QRasterWindow_Delete(QRasterWindow* self) {
	delete self;
}

