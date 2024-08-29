#include <QApplication>
#include <QFontMetrics>
#include <QIcon>
#include <QMetaObject>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QProxyStyle>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleHintReturn>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QWidget>
#include "qproxystyle.h"

#include "gen_qproxystyle.h"

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
	return (QMetaObject*) const_cast<const QProxyStyle*>(self)->metaObject();
}

void QProxyStyle_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QProxyStyle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProxyStyle_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QProxyStyle::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QStyle* QProxyStyle_BaseStyle(QProxyStyle* self) {
	return const_cast<const QProxyStyle*>(self)->baseStyle();
}

void QProxyStyle_SetBaseStyle(QProxyStyle* self, QStyle* style) {
	self->setBaseStyle(style);
}

void QProxyStyle_DrawPrimitive(QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter) {
	const_cast<const QProxyStyle*>(self)->drawPrimitive(static_cast<QStyle::PrimitiveElement>(element), option, painter);
}

void QProxyStyle_DrawControl(QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter) {
	const_cast<const QProxyStyle*>(self)->drawControl(static_cast<QStyle::ControlElement>(element), option, painter);
}

void QProxyStyle_DrawComplexControl(QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPainter* painter) {
	const_cast<const QProxyStyle*>(self)->drawComplexControl(static_cast<QStyle::ComplexControl>(control), option, painter);
}

void QProxyStyle_DrawItemText(QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	const_cast<const QProxyStyle*>(self)->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString);
}

void QProxyStyle_DrawItemPixmap(QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
	const_cast<const QProxyStyle*>(self)->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

QSize* QProxyStyle_SizeFromContents(QProxyStyle* self, uintptr_t typeVal, QStyleOption* option, QSize* size, QWidget* widget) {
	QSize ret = const_cast<const QProxyStyle*>(self)->sizeFromContents(static_cast<QStyle::ContentsType>(typeVal), option, *size, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QProxyStyle_SubElementRect(QProxyStyle* self, uintptr_t element, QStyleOption* option, QWidget* widget) {
	QRect ret = const_cast<const QProxyStyle*>(self)->subElementRect(static_cast<QStyle::SubElement>(element), option, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QProxyStyle_SubControlRect(QProxyStyle* self, uintptr_t cc, QStyleOptionComplex* opt, uintptr_t sc, QWidget* widget) {
	QRect ret = const_cast<const QProxyStyle*>(self)->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QProxyStyle_ItemTextRect(QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = const_cast<const QProxyStyle*>(self)->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QProxyStyle_ItemPixmapRect(QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap) {
	QRect ret = const_cast<const QProxyStyle*>(self)->itemPixmapRect(*r, static_cast<int>(flags), *pixmap);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

uintptr_t QProxyStyle_HitTestComplexControl(QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPoint* pos) {
	QStyle::SubControl ret = const_cast<const QProxyStyle*>(self)->hitTestComplexControl(static_cast<QStyle::ComplexControl>(control), option, *pos);
	return static_cast<uintptr_t>(ret);
}

int QProxyStyle_StyleHint(QProxyStyle* self, uintptr_t hint) {
	return const_cast<const QProxyStyle*>(self)->styleHint(static_cast<QStyle::StyleHint>(hint));
}

int QProxyStyle_PixelMetric(QProxyStyle* self, uintptr_t metric) {
	return const_cast<const QProxyStyle*>(self)->pixelMetric(static_cast<QStyle::PixelMetric>(metric));
}

int QProxyStyle_LayoutSpacing(QProxyStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation) {
	return const_cast<const QProxyStyle*>(self)->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation));
}

QIcon* QProxyStyle_StandardIcon(QProxyStyle* self, uintptr_t standardIcon) {
	QIcon ret = const_cast<const QProxyStyle*>(self)->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

QPixmap* QProxyStyle_StandardPixmap(QProxyStyle* self, uintptr_t standardPixmap, QStyleOption* opt) {
	QPixmap ret = const_cast<const QProxyStyle*>(self)->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QProxyStyle_GeneratedIconPixmap(QProxyStyle* self, uintptr_t iconMode, QPixmap* pixmap, QStyleOption* opt) {
	QPixmap ret = const_cast<const QProxyStyle*>(self)->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPalette* QProxyStyle_StandardPalette(QProxyStyle* self) {
	QPalette ret = const_cast<const QProxyStyle*>(self)->standardPalette();
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

void QProxyStyle_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QProxyStyle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProxyStyle_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QProxyStyle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProxyStyle_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QProxyStyle::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProxyStyle_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QProxyStyle::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProxyStyle_DrawPrimitive4(QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter, QWidget* widget) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(element), option, painter, widget);
}

void QProxyStyle_DrawControl4(QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter, QWidget* widget) {
	self->drawControl(static_cast<QStyle::ControlElement>(element), option, painter, widget);
}

void QProxyStyle_DrawComplexControl4(QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(control), option, painter, widget);
}

void QProxyStyle_DrawItemText7(QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, size_t text_Strlen, uintptr_t textRole) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

uintptr_t QProxyStyle_HitTestComplexControl4(QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget) {
	QStyle::SubControl ret = self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(control), option, *pos, widget);
	return static_cast<uintptr_t>(ret);
}

int QProxyStyle_StyleHint2(QProxyStyle* self, uintptr_t hint, QStyleOption* option) {
	return self->styleHint(static_cast<QStyle::StyleHint>(hint), option);
}

int QProxyStyle_StyleHint3(QProxyStyle* self, uintptr_t hint, QStyleOption* option, QWidget* widget) {
	return self->styleHint(static_cast<QStyle::StyleHint>(hint), option, widget);
}

int QProxyStyle_StyleHint4(QProxyStyle* self, uintptr_t hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData) {
	return self->styleHint(static_cast<QStyle::StyleHint>(hint), option, widget, returnData);
}

int QProxyStyle_PixelMetric2(QProxyStyle* self, uintptr_t metric, QStyleOption* option) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option);
}

int QProxyStyle_PixelMetric3(QProxyStyle* self, uintptr_t metric, QStyleOption* option, QWidget* widget) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
}

int QProxyStyle_LayoutSpacing4(QProxyStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option);
}

int QProxyStyle_LayoutSpacing5(QProxyStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option, QWidget* widget) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

QIcon* QProxyStyle_StandardIcon2(QProxyStyle* self, uintptr_t standardIcon, QStyleOption* option) {
	QIcon ret = self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

QIcon* QProxyStyle_StandardIcon3(QProxyStyle* self, uintptr_t standardIcon, QStyleOption* option, QWidget* widget) {
	QIcon ret = self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

QPixmap* QProxyStyle_StandardPixmap3(QProxyStyle* self, uintptr_t standardPixmap, QStyleOption* opt, QWidget* widget) {
	QPixmap ret = self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QProxyStyle_Delete(QProxyStyle* self) {
	delete self;
}

