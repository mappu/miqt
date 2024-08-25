#include "gen_qstyle.h"
#include "qstyle.h"

#include <QApplication>
#include <QFontMetrics>
#include <QMetaObject>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QRect>
#include <QString>
#include <QStyle>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QStyle_MetaObject(QStyle* self) {
	return (QMetaObject*) self->metaObject();
}

void QStyle_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QStyle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyle_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QStyle::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyle_Polish(QStyle* self, QWidget* widget) {
	self->polish(widget);
}

void QStyle_Unpolish(QStyle* self, QWidget* widget) {
	self->unpolish(widget);
}

void QStyle_PolishWithApplication(QStyle* self, QApplication* application) {
	self->polish(application);
}

void QStyle_UnpolishWithApplication(QStyle* self, QApplication* application) {
	self->unpolish(application);
}

void QStyle_PolishWithPalette(QStyle* self, QPalette* palette) {
	self->polish(*palette);
}

QRect* QStyle_ItemTextRect(QStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QStyle_ItemPixmapRect(QStyle* self, QRect* r, int flags, QPixmap* pixmap) {
	QRect ret = self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QStyle_DrawItemPixmap(QStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
	self->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

QPalette* QStyle_StandardPalette(QStyle* self) {
	QPalette ret = self->standardPalette();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPalette*>(new QPalette(ret));
}

int QStyle_SliderPositionFromValue(int min, int max, int val, int space) {
	return QStyle::sliderPositionFromValue(static_cast<int>(min), static_cast<int>(max), static_cast<int>(val), static_cast<int>(space));
}

int QStyle_SliderValueFromPosition(int min, int max, int pos, int space) {
	return QStyle::sliderValueFromPosition(static_cast<int>(min), static_cast<int>(max), static_cast<int>(pos), static_cast<int>(space));
}

QStyle* QStyle_Proxy(QStyle* self) {
	return (QStyle*) self->proxy();
}

void QStyle_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QStyle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyle_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStyle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyle_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QStyle::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyle_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStyle::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QStyle_SliderPositionFromValue5(int min, int max, int val, int space, bool upsideDown) {
	return QStyle::sliderPositionFromValue(static_cast<int>(min), static_cast<int>(max), static_cast<int>(val), static_cast<int>(space), upsideDown);
}

int QStyle_SliderValueFromPosition5(int min, int max, int pos, int space, bool upsideDown) {
	return QStyle::sliderValueFromPosition(static_cast<int>(min), static_cast<int>(max), static_cast<int>(pos), static_cast<int>(space), upsideDown);
}

void QStyle_Delete(QStyle* self) {
	delete self;
}

