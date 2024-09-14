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
#include "_cgo_export.h"

QProxyStyle* QProxyStyle_new() {
	return new QProxyStyle();
}

QProxyStyle* QProxyStyle_new2(struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QProxyStyle(key_QString);
}

QProxyStyle* QProxyStyle_new3(QStyle* style) {
	return new QProxyStyle(style);
}

QMetaObject* QProxyStyle_MetaObject(const QProxyStyle* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QProxyStyle_Tr(const char* s) {
	QString _ret = QProxyStyle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QProxyStyle_TrUtf8(const char* s) {
	QString _ret = QProxyStyle::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QStyle* QProxyStyle_BaseStyle(const QProxyStyle* self) {
	return self->baseStyle();
}

void QProxyStyle_SetBaseStyle(QProxyStyle* self, QStyle* style) {
	self->setBaseStyle(style);
}

void QProxyStyle_DrawPrimitive(const QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(element), option, painter);
}

void QProxyStyle_DrawControl(const QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter) {
	self->drawControl(static_cast<QStyle::ControlElement>(element), option, painter);
}

void QProxyStyle_DrawComplexControl(const QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPainter* painter) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(control), option, painter);
}

void QProxyStyle_DrawItemText(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString);
}

void QProxyStyle_DrawItemPixmap(const QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
	self->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

QSize* QProxyStyle_SizeFromContents(const QProxyStyle* self, uintptr_t typeVal, QStyleOption* option, QSize* size, QWidget* widget) {
	QSize _ret = self->sizeFromContents(static_cast<QStyle::ContentsType>(typeVal), option, *size, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

QRect* QProxyStyle_SubElementRect(const QProxyStyle* self, uintptr_t element, QStyleOption* option, QWidget* widget) {
	QRect _ret = self->subElementRect(static_cast<QStyle::SubElement>(element), option, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRect* QProxyStyle_SubControlRect(const QProxyStyle* self, uintptr_t cc, QStyleOptionComplex* opt, uintptr_t sc, QWidget* widget) {
	QRect _ret = self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRect* QProxyStyle_ItemTextRect(const QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRect _ret = self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRect* QProxyStyle_ItemPixmapRect(const QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap) {
	QRect _ret = self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

uintptr_t QProxyStyle_HitTestComplexControl(const QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPoint* pos) {
	QStyle::SubControl _ret = self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(control), option, *pos);
	return static_cast<uintptr_t>(_ret);
}

int QProxyStyle_StyleHint(const QProxyStyle* self, uintptr_t hint) {
	return self->styleHint(static_cast<QStyle::StyleHint>(hint));
}

int QProxyStyle_PixelMetric(const QProxyStyle* self, uintptr_t metric) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric));
}

int QProxyStyle_LayoutSpacing(const QProxyStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation));
}

QIcon* QProxyStyle_StandardIcon(const QProxyStyle* self, uintptr_t standardIcon) {
	QIcon _ret = self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(_ret));
}

QPixmap* QProxyStyle_StandardPixmap(const QProxyStyle* self, uintptr_t standardPixmap, QStyleOption* opt) {
	QPixmap _ret = self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QProxyStyle_GeneratedIconPixmap(const QProxyStyle* self, uintptr_t iconMode, QPixmap* pixmap, QStyleOption* opt) {
	QPixmap _ret = self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPalette* QProxyStyle_StandardPalette(const QProxyStyle* self) {
	QPalette _ret = self->standardPalette();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPalette*>(new QPalette(_ret));
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

struct miqt_string* QProxyStyle_Tr2(const char* s, const char* c) {
	QString _ret = QProxyStyle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QProxyStyle_Tr3(const char* s, const char* c, int n) {
	QString _ret = QProxyStyle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QProxyStyle_TrUtf82(const char* s, const char* c) {
	QString _ret = QProxyStyle::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QProxyStyle_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QProxyStyle::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QProxyStyle_DrawPrimitive4(const QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter, QWidget* widget) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(element), option, painter, widget);
}

void QProxyStyle_DrawControl4(const QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter, QWidget* widget) {
	self->drawControl(static_cast<QStyle::ControlElement>(element), option, painter, widget);
}

void QProxyStyle_DrawComplexControl4(const QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(control), option, painter, widget);
}

void QProxyStyle_DrawItemText7(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string* text, uintptr_t textRole) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

uintptr_t QProxyStyle_HitTestComplexControl4(const QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget) {
	QStyle::SubControl _ret = self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(control), option, *pos, widget);
	return static_cast<uintptr_t>(_ret);
}

int QProxyStyle_StyleHint2(const QProxyStyle* self, uintptr_t hint, QStyleOption* option) {
	return self->styleHint(static_cast<QStyle::StyleHint>(hint), option);
}

int QProxyStyle_StyleHint3(const QProxyStyle* self, uintptr_t hint, QStyleOption* option, QWidget* widget) {
	return self->styleHint(static_cast<QStyle::StyleHint>(hint), option, widget);
}

int QProxyStyle_StyleHint4(const QProxyStyle* self, uintptr_t hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData) {
	return self->styleHint(static_cast<QStyle::StyleHint>(hint), option, widget, returnData);
}

int QProxyStyle_PixelMetric2(const QProxyStyle* self, uintptr_t metric, QStyleOption* option) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option);
}

int QProxyStyle_PixelMetric3(const QProxyStyle* self, uintptr_t metric, QStyleOption* option, QWidget* widget) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
}

int QProxyStyle_LayoutSpacing4(const QProxyStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option);
}

int QProxyStyle_LayoutSpacing5(const QProxyStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option, QWidget* widget) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

QIcon* QProxyStyle_StandardIcon2(const QProxyStyle* self, uintptr_t standardIcon, QStyleOption* option) {
	QIcon _ret = self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(_ret));
}

QIcon* QProxyStyle_StandardIcon3(const QProxyStyle* self, uintptr_t standardIcon, QStyleOption* option, QWidget* widget) {
	QIcon _ret = self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(_ret));
}

QPixmap* QProxyStyle_StandardPixmap3(const QProxyStyle* self, uintptr_t standardPixmap, QStyleOption* opt, QWidget* widget) {
	QPixmap _ret = self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

void QProxyStyle_Delete(QProxyStyle* self) {
	delete self;
}

