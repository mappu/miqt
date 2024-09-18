#include <QDialog>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qdialog.h"
#include "gen_qdialog.h"
#include "_cgo_export.h"

QDialog* QDialog_new() {
	return new QDialog();
}

QDialog* QDialog_new2(QWidget* parent) {
	return new QDialog(parent);
}

QDialog* QDialog_new3(QWidget* parent, int f) {
	return new QDialog(parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QDialog_MetaObject(const QDialog* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QDialog_Tr(const char* s) {
	QString _ret = QDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDialog_TrUtf8(const char* s) {
	QString _ret = QDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QDialog_Result(const QDialog* self) {
	return self->result();
}

void QDialog_SetVisible(QDialog* self, bool visible) {
	self->setVisible(visible);
}

void QDialog_SetOrientation(QDialog* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QDialog_Orientation(const QDialog* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QDialog_SetExtension(QDialog* self, QWidget* extension) {
	self->setExtension(extension);
}

QWidget* QDialog_Extension(const QDialog* self) {
	return self->extension();
}

QSize* QDialog_SizeHint(const QDialog* self) {
	return new QSize(self->sizeHint());
}

QSize* QDialog_MinimumSizeHint(const QDialog* self) {
	return new QSize(self->minimumSizeHint());
}

void QDialog_SetSizeGripEnabled(QDialog* self, bool sizeGripEnabled) {
	self->setSizeGripEnabled(sizeGripEnabled);
}

bool QDialog_IsSizeGripEnabled(const QDialog* self) {
	return self->isSizeGripEnabled();
}

void QDialog_SetModal(QDialog* self, bool modal) {
	self->setModal(modal);
}

void QDialog_SetResult(QDialog* self, int r) {
	self->setResult(static_cast<int>(r));
}

void QDialog_Finished(QDialog* self, int result) {
	self->finished(static_cast<int>(result));
}

void QDialog_connect_Finished(QDialog* self, void* slot) {
	QDialog::connect(self, static_cast<void (QDialog::*)(int)>(&QDialog::finished), self, [=](int result) {
		int sigval1 = result;
		miqt_exec_callback_QDialog_Finished(slot, sigval1);
	});
}

void QDialog_Accepted(QDialog* self) {
	self->accepted();
}

void QDialog_connect_Accepted(QDialog* self, void* slot) {
	QDialog::connect(self, static_cast<void (QDialog::*)()>(&QDialog::accepted), self, [=]() {
		miqt_exec_callback_QDialog_Accepted(slot);
	});
}

void QDialog_Rejected(QDialog* self) {
	self->rejected();
}

void QDialog_connect_Rejected(QDialog* self, void* slot) {
	QDialog::connect(self, static_cast<void (QDialog::*)()>(&QDialog::rejected), self, [=]() {
		miqt_exec_callback_QDialog_Rejected(slot);
	});
}

void QDialog_Open(QDialog* self) {
	self->open();
}

int QDialog_Exec(QDialog* self) {
	return self->exec();
}

void QDialog_Done(QDialog* self, int param1) {
	self->done(static_cast<int>(param1));
}

void QDialog_Accept(QDialog* self) {
	self->accept();
}

void QDialog_Reject(QDialog* self) {
	self->reject();
}

void QDialog_ShowExtension(QDialog* self, bool param1) {
	self->showExtension(param1);
}

struct miqt_string* QDialog_Tr2(const char* s, const char* c) {
	QString _ret = QDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QDialog_Delete(QDialog* self) {
	delete self;
}

