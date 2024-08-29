#include <QCommandLinkButton>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qcommandlinkbutton.h"

#include "gen_qcommandlinkbutton.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCommandLinkButton* QCommandLinkButton_new() {
	return new QCommandLinkButton();
}

QCommandLinkButton* QCommandLinkButton_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QCommandLinkButton(text_QString);
}

QCommandLinkButton* QCommandLinkButton_new3(const char* text, size_t text_Strlen, const char* description, size_t description_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	return new QCommandLinkButton(text_QString, description_QString);
}

QCommandLinkButton* QCommandLinkButton_new4(QWidget* parent) {
	return new QCommandLinkButton(parent);
}

QCommandLinkButton* QCommandLinkButton_new5(const char* text, size_t text_Strlen, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QCommandLinkButton(text_QString, parent);
}

QCommandLinkButton* QCommandLinkButton_new6(const char* text, size_t text_Strlen, const char* description, size_t description_Strlen, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	return new QCommandLinkButton(text_QString, description_QString, parent);
}

QMetaObject* QCommandLinkButton_MetaObject(QCommandLinkButton* self) {
	return (QMetaObject*) const_cast<const QCommandLinkButton*>(self)->metaObject();
}

void QCommandLinkButton_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QCommandLinkButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLinkButton_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QCommandLinkButton::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLinkButton_Description(QCommandLinkButton* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCommandLinkButton*>(self)->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLinkButton_SetDescription(QCommandLinkButton* self, const char* description, size_t description_Strlen) {
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	self->setDescription(description_QString);
}

void QCommandLinkButton_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QCommandLinkButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLinkButton_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCommandLinkButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLinkButton_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QCommandLinkButton::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLinkButton_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCommandLinkButton::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLinkButton_Delete(QCommandLinkButton* self) {
	delete self;
}

