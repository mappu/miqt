#include <QApplication>
#include <QCommonStyle>
#include <QIcon>
#include <QMetaObject>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleHintReturn>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QWidget>
#include "qcommonstyle.h"
#include "gen_qcommonstyle.h"
#include "_cgo_export.h"

QCommonStyle* QCommonStyle_new() {
	return new QCommonStyle();
}

QMetaObject* QCommonStyle_MetaObject(const QCommonStyle* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QCommonStyle_Tr(const char* s) {
	QString _ret = QCommonStyle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCommonStyle_TrUtf8(const char* s) {
	QString _ret = QCommonStyle::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCommonStyle_DrawPrimitive(const QCommonStyle* self, uintptr_t pe, QStyleOption* opt, QPainter* p) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p);
}

void QCommonStyle_DrawControl(const QCommonStyle* self, uintptr_t element, QStyleOption* opt, QPainter* p) {
	self->drawControl(static_cast<QStyle::ControlElement>(element), opt, p);
}

QRect* QCommonStyle_SubElementRect(const QCommonStyle* self, uintptr_t r, QStyleOption* opt) {
	QRect _ret = self->subElementRect(static_cast<QStyle::SubElement>(r), opt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

void QCommonStyle_DrawComplexControl(const QCommonStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPainter* p) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p);
}

uintptr_t QCommonStyle_HitTestComplexControl(const QCommonStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPoint* pt) {
	QStyle::SubControl _ret = self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt);
	return static_cast<uintptr_t>(_ret);
}

QRect* QCommonStyle_SubControlRect(const QCommonStyle* self, uintptr_t cc, QStyleOptionComplex* opt, uintptr_t sc) {
	QRect _ret = self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QSize* QCommonStyle_SizeFromContents(const QCommonStyle* self, uintptr_t ct, QStyleOption* opt, QSize* contentsSize) {
	QSize _ret = self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

int QCommonStyle_PixelMetric(const QCommonStyle* self, uintptr_t m) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(m));
}

int QCommonStyle_StyleHint(const QCommonStyle* self, uintptr_t sh) {
	return self->styleHint(static_cast<QStyle::StyleHint>(sh));
}

QIcon* QCommonStyle_StandardIcon(const QCommonStyle* self, uintptr_t standardIcon) {
	QIcon _ret = self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(_ret));
}

QPixmap* QCommonStyle_StandardPixmap(const QCommonStyle* self, uintptr_t sp) {
	QPixmap _ret = self->standardPixmap(static_cast<QStyle::StandardPixmap>(sp));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QCommonStyle_GeneratedIconPixmap(const QCommonStyle* self, uintptr_t iconMode, QPixmap* pixmap, QStyleOption* opt) {
	QPixmap _ret = self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

int QCommonStyle_LayoutSpacing(const QCommonStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation));
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

struct miqt_string* QCommonStyle_Tr2(const char* s, const char* c) {
	QString _ret = QCommonStyle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCommonStyle_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCommonStyle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCommonStyle_TrUtf82(const char* s, const char* c) {
	QString _ret = QCommonStyle::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCommonStyle_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCommonStyle::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCommonStyle_DrawPrimitive4(const QCommonStyle* self, uintptr_t pe, QStyleOption* opt, QPainter* p, QWidget* w) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
}

void QCommonStyle_DrawControl4(const QCommonStyle* self, uintptr_t element, QStyleOption* opt, QPainter* p, QWidget* w) {
	self->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
}

QRect* QCommonStyle_SubElementRect3(const QCommonStyle* self, uintptr_t r, QStyleOption* opt, QWidget* widget) {
	QRect _ret = self->subElementRect(static_cast<QStyle::SubElement>(r), opt, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

void QCommonStyle_DrawComplexControl4(const QCommonStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
}

uintptr_t QCommonStyle_HitTestComplexControl4(const QCommonStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w) {
	QStyle::SubControl _ret = self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w);
	return static_cast<uintptr_t>(_ret);
}

QRect* QCommonStyle_SubControlRect4(const QCommonStyle* self, uintptr_t cc, QStyleOptionComplex* opt, uintptr_t sc, QWidget* w) {
	QRect _ret = self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QSize* QCommonStyle_SizeFromContents4(const QCommonStyle* self, uintptr_t ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget) {
	QSize _ret = self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

int QCommonStyle_PixelMetric2(const QCommonStyle* self, uintptr_t m, QStyleOption* opt) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt);
}

int QCommonStyle_PixelMetric3(const QCommonStyle* self, uintptr_t m, QStyleOption* opt, QWidget* widget) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
}

int QCommonStyle_StyleHint2(const QCommonStyle* self, uintptr_t sh, QStyleOption* opt) {
	return self->styleHint(static_cast<QStyle::StyleHint>(sh), opt);
}

int QCommonStyle_StyleHint3(const QCommonStyle* self, uintptr_t sh, QStyleOption* opt, QWidget* w) {
	return self->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w);
}

int QCommonStyle_StyleHint4(const QCommonStyle* self, uintptr_t sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret) {
	return self->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
}

QIcon* QCommonStyle_StandardIcon2(const QCommonStyle* self, uintptr_t standardIcon, QStyleOption* opt) {
	QIcon _ret = self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(_ret));
}

QIcon* QCommonStyle_StandardIcon3(const QCommonStyle* self, uintptr_t standardIcon, QStyleOption* opt, QWidget* widget) {
	QIcon _ret = self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(_ret));
}

QPixmap* QCommonStyle_StandardPixmap2(const QCommonStyle* self, uintptr_t sp, QStyleOption* opt) {
	QPixmap _ret = self->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QCommonStyle_StandardPixmap3(const QCommonStyle* self, uintptr_t sp, QStyleOption* opt, QWidget* widget) {
	QPixmap _ret = self->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

int QCommonStyle_LayoutSpacing4(const QCommonStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option);
}

int QCommonStyle_LayoutSpacing5(const QCommonStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option, QWidget* widget) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

void QCommonStyle_Delete(QCommonStyle* self) {
	delete self;
}

