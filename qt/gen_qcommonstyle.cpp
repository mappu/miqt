#include "gen_qcommonstyle.h"
#include "qcommonstyle.h"

#include <QApplication>
#include <QCommonStyle>
#include <QMetaObject>
#include <QPalette>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCommonStyle* QCommonStyle_new() {
	return new QCommonStyle();
}

QMetaObject* QCommonStyle_MetaObject(QCommonStyle* self) {
	return (QMetaObject*) self->metaObject();
}

void QCommonStyle_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QCommonStyle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommonStyle_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QCommonStyle::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommonStyle_Polish(QCommonStyle* self, QPalette* param1) {
	self->polish(*param1);
}

void QCommonStyle_PolishWithApp(QCommonStyle* self, QApplication* app) {
	self->polish(app);
}

void QCommonStyle_PolishWithWidget(QCommonStyle* self, QWidget* widget) {
	self->polish(widget);
}

void QCommonStyle_Unpolish(QCommonStyle* self, QWidget* widget) {
	self->unpolish(widget);
}

void QCommonStyle_UnpolishWithApplication(QCommonStyle* self, QApplication* application) {
	self->unpolish(application);
}

void QCommonStyle_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QCommonStyle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommonStyle_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCommonStyle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommonStyle_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QCommonStyle::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommonStyle_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCommonStyle::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommonStyle_Delete(QCommonStyle* self) {
	delete self;
}

