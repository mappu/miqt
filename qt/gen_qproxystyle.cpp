#include "gen_qproxystyle.h"
#include "qproxystyle.h"

#include <QApplication>
#include <QFontMetrics>
#include <QMetaObject>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QProxyStyle>
#include <QRect>
#include <QString>
#include <QStyle>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QProxyStyle* QProxyStyle_new() {
	return new QProxyStyle();
}

QProxyStyle* QProxyStyle_new2(const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return new QProxyStyle(key_QString);
}

QProxyStyle* QProxyStyle_new3(QStyle* style) {
	return new QProxyStyle(style);
}

QMetaObject* QProxyStyle_MetaObject(QProxyStyle* self) {
	return (QMetaObject*) self->metaObject();
}

void QProxyStyle_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QProxyStyle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProxyStyle_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QProxyStyle::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QStyle* QProxyStyle_BaseStyle(QProxyStyle* self) {
	return self->baseStyle();
}

void QProxyStyle_SetBaseStyle(QProxyStyle* self, QStyle* style) {
	self->setBaseStyle(style);
}

void QProxyStyle_DrawItemPixmap(QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
	self->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

QRect* QProxyStyle_ItemTextRect(QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QProxyStyle_ItemPixmapRect(QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap) {
	QRect ret = self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QPalette* QProxyStyle_StandardPalette(QProxyStyle* self) {
	QPalette ret = self->standardPalette();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPalette*>(new QPalette(ret));
}

void QProxyStyle_Polish(QProxyStyle* self, QWidget* widget) {
	self->polish(widget);
}

void QProxyStyle_PolishWithPal(QProxyStyle* self, QPalette* pal) {
	self->polish(*pal);
}

void QProxyStyle_PolishWithApp(QProxyStyle* self, QApplication* app) {
	self->polish(app);
}

void QProxyStyle_Unpolish(QProxyStyle* self, QWidget* widget) {
	self->unpolish(widget);
}

void QProxyStyle_UnpolishWithApp(QProxyStyle* self, QApplication* app) {
	self->unpolish(app);
}

void QProxyStyle_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QProxyStyle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProxyStyle_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QProxyStyle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProxyStyle_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QProxyStyle::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProxyStyle_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QProxyStyle::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProxyStyle_Delete(QProxyStyle* self) {
	delete self;
}

