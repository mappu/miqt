#include <QCommandLinkButton>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionButton>
#include <QWidget>
#include <qcommandlinkbutton.h>
#include "gen_qcommandlinkbutton.h"
#include "_cgo_export.h"

QCommandLinkButton* QCommandLinkButton_new() {
	return new QCommandLinkButton();
}

QCommandLinkButton* QCommandLinkButton_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QCommandLinkButton(text_QString);
}

QCommandLinkButton* QCommandLinkButton_new3(struct miqt_string text, struct miqt_string description) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new QCommandLinkButton(text_QString, description_QString);
}

QCommandLinkButton* QCommandLinkButton_new4(QWidget* parent) {
	return new QCommandLinkButton(parent);
}

QCommandLinkButton* QCommandLinkButton_new5(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QCommandLinkButton(text_QString, parent);
}

QCommandLinkButton* QCommandLinkButton_new6(struct miqt_string text, struct miqt_string description, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new QCommandLinkButton(text_QString, description_QString, parent);
}

QMetaObject* QCommandLinkButton_MetaObject(const QCommandLinkButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCommandLinkButton_Metacast(QCommandLinkButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCommandLinkButton_Tr(const char* s) {
	QString _ret = QCommandLinkButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLinkButton_Description(const QCommandLinkButton* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCommandLinkButton_SetDescription(QCommandLinkButton* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

QSize* QCommandLinkButton_SizeHint(const QCommandLinkButton* self) {
	return new QSize(self->sizeHint());
}

int QCommandLinkButton_HeightForWidth(const QCommandLinkButton* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

QSize* QCommandLinkButton_MinimumSizeHint(const QCommandLinkButton* self) {
	return new QSize(self->minimumSizeHint());
}

void QCommandLinkButton_InitStyleOption(const QCommandLinkButton* self, QStyleOptionButton* option) {
	self->initStyleOption(option);
}

struct miqt_string QCommandLinkButton_Tr2(const char* s, const char* c) {
	QString _ret = QCommandLinkButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLinkButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCommandLinkButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCommandLinkButton_Delete(QCommandLinkButton* self) {
	delete self;
}

