#include <QMetaObject>
#include <QPrintPreviewDialog>
#include <QPrinter>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qprintpreviewdialog.h>
#include "gen_qprintpreviewdialog.h"
#include "_cgo_export.h"

QPrintPreviewDialog* QPrintPreviewDialog_new() {
	return new QPrintPreviewDialog();
}

QPrintPreviewDialog* QPrintPreviewDialog_new2(QPrinter* printer) {
	return new QPrintPreviewDialog(printer);
}

QPrintPreviewDialog* QPrintPreviewDialog_new3(QWidget* parent) {
	return new QPrintPreviewDialog(parent);
}

QPrintPreviewDialog* QPrintPreviewDialog_new4(QWidget* parent, int flags) {
	return new QPrintPreviewDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QPrintPreviewDialog* QPrintPreviewDialog_new5(QPrinter* printer, QWidget* parent) {
	return new QPrintPreviewDialog(printer, parent);
}

QPrintPreviewDialog* QPrintPreviewDialog_new6(QPrinter* printer, QWidget* parent, int flags) {
	return new QPrintPreviewDialog(printer, parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QPrintPreviewDialog_MetaObject(const QPrintPreviewDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPrintPreviewDialog_Metacast(QPrintPreviewDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPrintPreviewDialog_Tr(const char* s) {
	QString _ret = QPrintPreviewDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPrinter* QPrintPreviewDialog_Printer(QPrintPreviewDialog* self) {
	return self->printer();
}

void QPrintPreviewDialog_SetVisible(QPrintPreviewDialog* self, bool visible) {
	self->setVisible(visible);
}

void QPrintPreviewDialog_Done(QPrintPreviewDialog* self, int result) {
	self->done(static_cast<int>(result));
}

void QPrintPreviewDialog_PaintRequested(QPrintPreviewDialog* self, QPrinter* printer) {
	self->paintRequested(printer);
}

void QPrintPreviewDialog_connect_PaintRequested(QPrintPreviewDialog* self, intptr_t slot) {
	QPrintPreviewDialog::connect(self, static_cast<void (QPrintPreviewDialog::*)(QPrinter*)>(&QPrintPreviewDialog::paintRequested), self, [=](QPrinter* printer) {
		QPrinter* sigval1 = printer;
		miqt_exec_callback_QPrintPreviewDialog_PaintRequested(slot, sigval1);
	});
}

struct miqt_string QPrintPreviewDialog_Tr2(const char* s, const char* c) {
	QString _ret = QPrintPreviewDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPrintPreviewDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrintPreviewDialog_Delete(QPrintPreviewDialog* self) {
	delete self;
}

