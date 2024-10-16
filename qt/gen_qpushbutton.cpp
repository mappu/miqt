#include <QIcon>
#include <QMenu>
#include <QMetaObject>
#include <QPushButton>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qpushbutton.h>
#include "gen_qpushbutton.h"
#include "_cgo_export.h"

QPushButton* QPushButton_new() {
	return new QPushButton();
}

QPushButton* QPushButton_new2(struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QPushButton(text_QString);
}

QPushButton* QPushButton_new3(QIcon* icon, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QPushButton(*icon, text_QString);
}

QPushButton* QPushButton_new4(QWidget* parent) {
	return new QPushButton(parent);
}

QPushButton* QPushButton_new5(struct miqt_string* text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QPushButton(text_QString, parent);
}

QPushButton* QPushButton_new6(QIcon* icon, struct miqt_string* text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QPushButton(*icon, text_QString, parent);
}

QMetaObject* QPushButton_MetaObject(const QPushButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPushButton_Metacast(QPushButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QPushButton_Tr(const char* s) {
	QString _ret = QPushButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPushButton_TrUtf8(const char* s) {
	QString _ret = QPushButton::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QSize* QPushButton_SizeHint(const QPushButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QPushButton_MinimumSizeHint(const QPushButton* self) {
	return new QSize(self->minimumSizeHint());
}

bool QPushButton_AutoDefault(const QPushButton* self) {
	return self->autoDefault();
}

void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault) {
	self->setAutoDefault(autoDefault);
}

bool QPushButton_IsDefault(const QPushButton* self) {
	return self->isDefault();
}

void QPushButton_SetDefault(QPushButton* self, bool defaultVal) {
	self->setDefault(defaultVal);
}

void QPushButton_SetMenu(QPushButton* self, QMenu* menu) {
	self->setMenu(menu);
}

QMenu* QPushButton_Menu(const QPushButton* self) {
	return self->menu();
}

void QPushButton_SetFlat(QPushButton* self, bool flat) {
	self->setFlat(flat);
}

bool QPushButton_IsFlat(const QPushButton* self) {
	return self->isFlat();
}

void QPushButton_ShowMenu(QPushButton* self) {
	self->showMenu();
}

struct miqt_string* QPushButton_Tr2(const char* s, const char* c) {
	QString _ret = QPushButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPushButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPushButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPushButton_TrUtf82(const char* s, const char* c) {
	QString _ret = QPushButton::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPushButton_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPushButton::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QPushButton_Delete(QPushButton* self) {
	delete self;
}

