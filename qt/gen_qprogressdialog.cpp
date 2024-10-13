#include <QLabel>
#include <QMetaObject>
#include <QProgressBar>
#include <QProgressDialog>
#include <QPushButton>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qprogressdialog.h"
#include "gen_qprogressdialog.h"
#include "_cgo_export.h"

QProgressDialog* QProgressDialog_new() {
	return new QProgressDialog();
}

QProgressDialog* QProgressDialog_new2(struct miqt_string* labelText, struct miqt_string* cancelButtonText, int minimum, int maximum) {
	QString labelText_QString = QString::fromUtf8(&labelText->data, labelText->len);
	QString cancelButtonText_QString = QString::fromUtf8(&cancelButtonText->data, cancelButtonText->len);
	return new QProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum));
}

QProgressDialog* QProgressDialog_new3(QWidget* parent) {
	return new QProgressDialog(parent);
}

QProgressDialog* QProgressDialog_new4(QWidget* parent, int flags) {
	return new QProgressDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QProgressDialog* QProgressDialog_new5(struct miqt_string* labelText, struct miqt_string* cancelButtonText, int minimum, int maximum, QWidget* parent) {
	QString labelText_QString = QString::fromUtf8(&labelText->data, labelText->len);
	QString cancelButtonText_QString = QString::fromUtf8(&cancelButtonText->data, cancelButtonText->len);
	return new QProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum), parent);
}

QProgressDialog* QProgressDialog_new6(struct miqt_string* labelText, struct miqt_string* cancelButtonText, int minimum, int maximum, QWidget* parent, int flags) {
	QString labelText_QString = QString::fromUtf8(&labelText->data, labelText->len);
	QString cancelButtonText_QString = QString::fromUtf8(&cancelButtonText->data, cancelButtonText->len);
	return new QProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum), parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QProgressDialog_MetaObject(const QProgressDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QProgressDialog_Metacast(QProgressDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QProgressDialog_Tr(const char* s) {
	QString _ret = QProgressDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QProgressDialog_TrUtf8(const char* s) {
	QString _ret = QProgressDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QProgressDialog_SetLabel(QProgressDialog* self, QLabel* label) {
	self->setLabel(label);
}

void QProgressDialog_SetCancelButton(QProgressDialog* self, QPushButton* button) {
	self->setCancelButton(button);
}

void QProgressDialog_SetBar(QProgressDialog* self, QProgressBar* bar) {
	self->setBar(bar);
}

bool QProgressDialog_WasCanceled(const QProgressDialog* self) {
	return self->wasCanceled();
}

int QProgressDialog_Minimum(const QProgressDialog* self) {
	return self->minimum();
}

int QProgressDialog_Maximum(const QProgressDialog* self) {
	return self->maximum();
}

int QProgressDialog_Value(const QProgressDialog* self) {
	return self->value();
}

QSize* QProgressDialog_SizeHint(const QProgressDialog* self) {
	return new QSize(self->sizeHint());
}

struct miqt_string* QProgressDialog_LabelText(const QProgressDialog* self) {
	QString _ret = self->labelText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QProgressDialog_MinimumDuration(const QProgressDialog* self) {
	return self->minimumDuration();
}

void QProgressDialog_SetAutoReset(QProgressDialog* self, bool reset) {
	self->setAutoReset(reset);
}

bool QProgressDialog_AutoReset(const QProgressDialog* self) {
	return self->autoReset();
}

void QProgressDialog_SetAutoClose(QProgressDialog* self, bool close) {
	self->setAutoClose(close);
}

bool QProgressDialog_AutoClose(const QProgressDialog* self) {
	return self->autoClose();
}

void QProgressDialog_Cancel(QProgressDialog* self) {
	self->cancel();
}

void QProgressDialog_Reset(QProgressDialog* self) {
	self->reset();
}

void QProgressDialog_SetMaximum(QProgressDialog* self, int maximum) {
	self->setMaximum(static_cast<int>(maximum));
}

void QProgressDialog_SetMinimum(QProgressDialog* self, int minimum) {
	self->setMinimum(static_cast<int>(minimum));
}

void QProgressDialog_SetRange(QProgressDialog* self, int minimum, int maximum) {
	self->setRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QProgressDialog_SetValue(QProgressDialog* self, int progress) {
	self->setValue(static_cast<int>(progress));
}

void QProgressDialog_SetLabelText(QProgressDialog* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->setLabelText(text_QString);
}

void QProgressDialog_SetCancelButtonText(QProgressDialog* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->setCancelButtonText(text_QString);
}

void QProgressDialog_SetMinimumDuration(QProgressDialog* self, int ms) {
	self->setMinimumDuration(static_cast<int>(ms));
}

void QProgressDialog_Canceled(QProgressDialog* self) {
	self->canceled();
}

void QProgressDialog_connect_Canceled(QProgressDialog* self, intptr_t slot) {
	QProgressDialog::connect(self, static_cast<void (QProgressDialog::*)()>(&QProgressDialog::canceled), self, [=]() {
		miqt_exec_callback_QProgressDialog_Canceled(slot);
	});
}

struct miqt_string* QProgressDialog_Tr2(const char* s, const char* c) {
	QString _ret = QProgressDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QProgressDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QProgressDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QProgressDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QProgressDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QProgressDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QProgressDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QProgressDialog_Delete(QProgressDialog* self) {
	delete self;
}

