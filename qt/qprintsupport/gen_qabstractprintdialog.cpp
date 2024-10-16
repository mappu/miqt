#include <QAbstractPrintDialog>
#include <QList>
#include <QMetaObject>
#include <QPrinter>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qabstractprintdialog.h>
#include "gen_qabstractprintdialog.h"
#include "_cgo_export.h"

QAbstractPrintDialog* QAbstractPrintDialog_new(QPrinter* printer) {
	return new QAbstractPrintDialog(printer);
}

QAbstractPrintDialog* QAbstractPrintDialog_new2(QPrinter* printer, QWidget* parent) {
	return new QAbstractPrintDialog(printer, parent);
}

QMetaObject* QAbstractPrintDialog_MetaObject(const QAbstractPrintDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractPrintDialog_Metacast(QAbstractPrintDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QAbstractPrintDialog_Tr(const char* s) {
	QString _ret = QAbstractPrintDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractPrintDialog_TrUtf8(const char* s) {
	QString _ret = QAbstractPrintDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QAbstractPrintDialog_AddEnabledOption(QAbstractPrintDialog* self, int option) {
	self->addEnabledOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

void QAbstractPrintDialog_SetEnabledOptions(QAbstractPrintDialog* self, int options) {
	self->setEnabledOptions(static_cast<QAbstractPrintDialog::PrintDialogOptions>(options));
}

int QAbstractPrintDialog_EnabledOptions(const QAbstractPrintDialog* self) {
	QAbstractPrintDialog::PrintDialogOptions _ret = self->enabledOptions();
	return static_cast<int>(_ret);
}

bool QAbstractPrintDialog_IsOptionEnabled(const QAbstractPrintDialog* self, int option) {
	return self->isOptionEnabled(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

void QAbstractPrintDialog_SetOptionTabs(QAbstractPrintDialog* self, struct miqt_array* /* of QWidget* */ tabs) {
	QList<QWidget *> tabs_QList;
	tabs_QList.reserve(tabs->len);
	QWidget** tabs_arr = static_cast<QWidget**>(tabs->data);
	for(size_t i = 0; i < tabs->len; ++i) {
		tabs_QList.push_back(tabs_arr[i]);
	}
	self->setOptionTabs(tabs_QList);
}

void QAbstractPrintDialog_SetPrintRange(QAbstractPrintDialog* self, int rangeVal) {
	self->setPrintRange(static_cast<QAbstractPrintDialog::PrintRange>(rangeVal));
}

int QAbstractPrintDialog_PrintRange(const QAbstractPrintDialog* self) {
	QAbstractPrintDialog::PrintRange _ret = self->printRange();
	return static_cast<int>(_ret);
}

void QAbstractPrintDialog_SetMinMax(QAbstractPrintDialog* self, int min, int max) {
	self->setMinMax(static_cast<int>(min), static_cast<int>(max));
}

int QAbstractPrintDialog_MinPage(const QAbstractPrintDialog* self) {
	return self->minPage();
}

int QAbstractPrintDialog_MaxPage(const QAbstractPrintDialog* self) {
	return self->maxPage();
}

void QAbstractPrintDialog_SetFromTo(QAbstractPrintDialog* self, int fromPage, int toPage) {
	self->setFromTo(static_cast<int>(fromPage), static_cast<int>(toPage));
}

int QAbstractPrintDialog_FromPage(const QAbstractPrintDialog* self) {
	return self->fromPage();
}

int QAbstractPrintDialog_ToPage(const QAbstractPrintDialog* self) {
	return self->toPage();
}

QPrinter* QAbstractPrintDialog_Printer(const QAbstractPrintDialog* self) {
	return self->printer();
}

struct miqt_string* QAbstractPrintDialog_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractPrintDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractPrintDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractPrintDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractPrintDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractPrintDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractPrintDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractPrintDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QAbstractPrintDialog_Delete(QAbstractPrintDialog* self) {
	delete self;
}

