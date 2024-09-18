#include <QGroupBox>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qgroupbox.h"
#include "gen_qgroupbox.h"
#include "_cgo_export.h"

QGroupBox* QGroupBox_new() {
	return new QGroupBox();
}

QGroupBox* QGroupBox_new2(struct miqt_string* title) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	return new QGroupBox(title_QString);
}

QGroupBox* QGroupBox_new3(QWidget* parent) {
	return new QGroupBox(parent);
}

QGroupBox* QGroupBox_new4(struct miqt_string* title, QWidget* parent) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	return new QGroupBox(title_QString, parent);
}

QMetaObject* QGroupBox_MetaObject(const QGroupBox* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QGroupBox_Tr(const char* s) {
	QString _ret = QGroupBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGroupBox_TrUtf8(const char* s) {
	QString _ret = QGroupBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGroupBox_Title(const QGroupBox* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QGroupBox_SetTitle(QGroupBox* self, struct miqt_string* title) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	self->setTitle(title_QString);
}

int QGroupBox_Alignment(const QGroupBox* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QGroupBox_SetAlignment(QGroupBox* self, int alignment) {
	self->setAlignment(static_cast<int>(alignment));
}

QSize* QGroupBox_MinimumSizeHint(const QGroupBox* self) {
	return new QSize(self->minimumSizeHint());
}

bool QGroupBox_IsFlat(const QGroupBox* self) {
	return self->isFlat();
}

void QGroupBox_SetFlat(QGroupBox* self, bool flat) {
	self->setFlat(flat);
}

bool QGroupBox_IsCheckable(const QGroupBox* self) {
	return self->isCheckable();
}

void QGroupBox_SetCheckable(QGroupBox* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QGroupBox_IsChecked(const QGroupBox* self) {
	return self->isChecked();
}

void QGroupBox_SetChecked(QGroupBox* self, bool checked) {
	self->setChecked(checked);
}

void QGroupBox_Clicked(QGroupBox* self) {
	self->clicked();
}

void QGroupBox_connect_Clicked(QGroupBox* self, void* slot) {
	QGroupBox::connect(self, static_cast<void (QGroupBox::*)(bool)>(&QGroupBox::clicked), self, [=]() {
		miqt_exec_callback_QGroupBox_Clicked(slot);
	});
}

void QGroupBox_Toggled(QGroupBox* self, bool param1) {
	self->toggled(param1);
}

void QGroupBox_connect_Toggled(QGroupBox* self, void* slot) {
	QGroupBox::connect(self, static_cast<void (QGroupBox::*)(bool)>(&QGroupBox::toggled), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QGroupBox_Toggled(slot, sigval1);
	});
}

struct miqt_string* QGroupBox_Tr2(const char* s, const char* c) {
	QString _ret = QGroupBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGroupBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGroupBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGroupBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QGroupBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGroupBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGroupBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QGroupBox_Clicked1(QGroupBox* self, bool checked) {
	self->clicked(checked);
}

void QGroupBox_connect_Clicked1(QGroupBox* self, void* slot) {
	QGroupBox::connect(self, static_cast<void (QGroupBox::*)(bool)>(&QGroupBox::clicked), self, [=](bool checked) {
		bool sigval1 = checked;
		miqt_exec_callback_QGroupBox_Clicked1(slot, sigval1);
	});
}

void QGroupBox_Delete(QGroupBox* self) {
	delete self;
}

