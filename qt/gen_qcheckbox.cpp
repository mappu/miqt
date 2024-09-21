#include <QCheckBox>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qcheckbox.h"
#include "gen_qcheckbox.h"
#include "_cgo_export.h"

QCheckBox* QCheckBox_new() {
	return new QCheckBox();
}

QCheckBox* QCheckBox_new2(struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QCheckBox(text_QString);
}

QCheckBox* QCheckBox_new3(QWidget* parent) {
	return new QCheckBox(parent);
}

QCheckBox* QCheckBox_new4(struct miqt_string* text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QCheckBox(text_QString, parent);
}

QMetaObject* QCheckBox_MetaObject(const QCheckBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCheckBox_Metacast(QCheckBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QCheckBox_Tr(const char* s) {
	QString _ret = QCheckBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCheckBox_TrUtf8(const char* s) {
	QString _ret = QCheckBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QSize* QCheckBox_SizeHint(const QCheckBox* self) {
	return new QSize(self->sizeHint());
}

QSize* QCheckBox_MinimumSizeHint(const QCheckBox* self) {
	return new QSize(self->minimumSizeHint());
}

void QCheckBox_SetTristate(QCheckBox* self) {
	self->setTristate();
}

bool QCheckBox_IsTristate(const QCheckBox* self) {
	return self->isTristate();
}

int QCheckBox_CheckState(const QCheckBox* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QCheckBox_SetCheckState(QCheckBox* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

void QCheckBox_StateChanged(QCheckBox* self, int param1) {
	self->stateChanged(static_cast<int>(param1));
}

void QCheckBox_connect_StateChanged(QCheckBox* self, void* slot) {
	QCheckBox::connect(self, static_cast<void (QCheckBox::*)(int)>(&QCheckBox::stateChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QCheckBox_StateChanged(slot, sigval1);
	});
}

struct miqt_string* QCheckBox_Tr2(const char* s, const char* c) {
	QString _ret = QCheckBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCheckBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCheckBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCheckBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QCheckBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCheckBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCheckBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCheckBox_SetTristate1(QCheckBox* self, bool y) {
	self->setTristate(y);
}

void QCheckBox_Delete(QCheckBox* self) {
	delete self;
}

