#include <QMetaObject>
#include <QPageSetupDialog>
#include <QPrinter>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qpagesetupdialog.h>
#include "gen_qpagesetupdialog.h"
#include "_cgo_export.h"

QPageSetupDialog* QPageSetupDialog_new(QPrinter* printer) {
	return new QPageSetupDialog(printer);
}

QPageSetupDialog* QPageSetupDialog_new2() {
	return new QPageSetupDialog();
}

QPageSetupDialog* QPageSetupDialog_new3(QPrinter* printer, QWidget* parent) {
	return new QPageSetupDialog(printer, parent);
}

QPageSetupDialog* QPageSetupDialog_new4(QWidget* parent) {
	return new QPageSetupDialog(parent);
}

QMetaObject* QPageSetupDialog_MetaObject(const QPageSetupDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPageSetupDialog_Metacast(QPageSetupDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPageSetupDialog_Tr(const char* s) {
	QString _ret = QPageSetupDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_TrUtf8(const char* s) {
	QString _ret = QPageSetupDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPageSetupDialog_Exec(QPageSetupDialog* self) {
	return self->exec();
}

void QPageSetupDialog_Done(QPageSetupDialog* self, int result) {
	self->done(static_cast<int>(result));
}

QPrinter* QPageSetupDialog_Printer(QPageSetupDialog* self) {
	return self->printer();
}

struct miqt_string QPageSetupDialog_Tr2(const char* s, const char* c) {
	QString _ret = QPageSetupDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPageSetupDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QPageSetupDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPageSetupDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPageSetupDialog_Delete(QPageSetupDialog* self) {
	delete self;
}

