#include <QApplication>
#include <QFontMetrics>
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
#include <QStyle>
#include <QStyleHintReturn>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QWidget>
#include "qstyle.h"

#include "gen_qstyle.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QStyle_MetaObject(QStyle* self) {
	return (QMetaObject*) const_cast<const QStyle*>(self)->metaObject();
}

void QStyle_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QStyle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyle_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
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
	QRect ret = const_cast<const QStyle*>(self)->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QStyle_ItemPixmapRect(QStyle* self, QRect* r, int flags, QPixmap* pixmap) {
	QRect ret = const_cast<const QStyle*>(self)->itemPixmapRect(*r, static_cast<int>(flags), *pixmap);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QStyle_DrawItemText(QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	const_cast<const QStyle*>(self)->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString);
}

void QStyle_DrawItemPixmap(QStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
	const_cast<const QStyle*>(self)->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

QPalette* QStyle_StandardPalette(QStyle* self) {
	QPalette ret = const_cast<const QStyle*>(self)->standardPalette();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPalette*>(new QPalette(ret));
}

void QStyle_DrawPrimitive(QStyle* self, uintptr_t pe, QStyleOption* opt, QPainter* p) {
	const_cast<const QStyle*>(self)->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p);
}

void QStyle_DrawControl(QStyle* self, uintptr_t element, QStyleOption* opt, QPainter* p) {
	const_cast<const QStyle*>(self)->drawControl(static_cast<QStyle::ControlElement>(element), opt, p);
}

QRect* QStyle_SubElementRect(QStyle* self, uintptr_t subElement, QStyleOption* option) {
	QRect ret = const_cast<const QStyle*>(self)->subElementRect(static_cast<QStyle::SubElement>(subElement), option);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QStyle_DrawComplexControl(QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPainter* p) {
	const_cast<const QStyle*>(self)->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p);
}

uintptr_t QStyle_HitTestComplexControl(QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPoint* pt) {
	QStyle::SubControl ret = const_cast<const QStyle*>(self)->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt);
	return static_cast<uintptr_t>(ret);
}

QRect* QStyle_SubControlRect(QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, uintptr_t sc) {
	QRect ret = const_cast<const QStyle*>(self)->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

int QStyle_PixelMetric(QStyle* self, uintptr_t metric) {
	return const_cast<const QStyle*>(self)->pixelMetric(static_cast<QStyle::PixelMetric>(metric));
}

QSize* QStyle_SizeFromContents(QStyle* self, uintptr_t ct, QStyleOption* opt, QSize* contentsSize) {
	QSize ret = const_cast<const QStyle*>(self)->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QStyle_StyleHint(QStyle* self, uintptr_t stylehint) {
	return const_cast<const QStyle*>(self)->styleHint(static_cast<QStyle::StyleHint>(stylehint));
}

QPixmap* QStyle_StandardPixmap(QStyle* self, uintptr_t standardPixmap) {
	QPixmap ret = const_cast<const QStyle*>(self)->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QIcon* QStyle_StandardIcon(QStyle* self, uintptr_t standardIcon) {
	QIcon ret = const_cast<const QStyle*>(self)->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

QPixmap* QStyle_GeneratedIconPixmap(QStyle* self, uintptr_t iconMode, QPixmap* pixmap, QStyleOption* opt) {
	QPixmap ret = const_cast<const QStyle*>(self)->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QRect* QStyle_VisualRect(uintptr_t direction, QRect* boundingRect, QRect* logicalRect) {
	QRect ret = QStyle::visualRect(static_cast<Qt::LayoutDirection>(direction), *boundingRect, *logicalRect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QPoint* QStyle_VisualPos(uintptr_t direction, QRect* boundingRect, QPoint* logicalPos) {
	QPoint ret = QStyle::visualPos(static_cast<Qt::LayoutDirection>(direction), *boundingRect, *logicalPos);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

int QStyle_SliderPositionFromValue(int min, int max, int val, int space) {
	return QStyle::sliderPositionFromValue(static_cast<int>(min), static_cast<int>(max), static_cast<int>(val), static_cast<int>(space));
}

int QStyle_SliderValueFromPosition(int min, int max, int pos, int space) {
	return QStyle::sliderValueFromPosition(static_cast<int>(min), static_cast<int>(max), static_cast<int>(pos), static_cast<int>(space));
}

int QStyle_VisualAlignment(uintptr_t direction, int alignment) {
	Qt::Alignment ret = QStyle::visualAlignment(static_cast<Qt::LayoutDirection>(direction), static_cast<Qt::Alignment>(alignment));
	return static_cast<int>(ret);
}

QRect* QStyle_AlignedRect(uintptr_t direction, int alignment, QSize* size, QRect* rectangle) {
	QRect ret = QStyle::alignedRect(static_cast<Qt::LayoutDirection>(direction), static_cast<Qt::Alignment>(alignment), *size, *rectangle);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

int QStyle_LayoutSpacing(QStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation) {
	return const_cast<const QStyle*>(self)->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation));
}

int QStyle_CombinedLayoutSpacing(QStyle* self, int controls1, int controls2, uintptr_t orientation) {
	return const_cast<const QStyle*>(self)->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation));
}

QStyle* QStyle_Proxy(QStyle* self) {
	return (QStyle*) const_cast<const QStyle*>(self)->proxy();
}

void QStyle_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStyle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyle_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStyle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyle_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStyle::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyle_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStyle::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyle_DrawItemText7(QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, size_t text_Strlen, uintptr_t textRole) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

void QStyle_DrawPrimitive4(QStyle* self, uintptr_t pe, QStyleOption* opt, QPainter* p, QWidget* w) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
}

void QStyle_DrawControl4(QStyle* self, uintptr_t element, QStyleOption* opt, QPainter* p, QWidget* w) {
	self->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
}

QRect* QStyle_SubElementRect3(QStyle* self, uintptr_t subElement, QStyleOption* option, QWidget* widget) {
	QRect ret = self->subElementRect(static_cast<QStyle::SubElement>(subElement), option, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QStyle_DrawComplexControl4(QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPainter* p, QWidget* widget) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
}

uintptr_t QStyle_HitTestComplexControl4(QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* widget) {
	QStyle::SubControl ret = self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, widget);
	return static_cast<uintptr_t>(ret);
}

QRect* QStyle_SubControlRect4(QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, uintptr_t sc, QWidget* widget) {
	QRect ret = self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

int QStyle_PixelMetric2(QStyle* self, uintptr_t metric, QStyleOption* option) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option);
}

int QStyle_PixelMetric3(QStyle* self, uintptr_t metric, QStyleOption* option, QWidget* widget) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
}

QSize* QStyle_SizeFromContents4(QStyle* self, uintptr_t ct, QStyleOption* opt, QSize* contentsSize, QWidget* w) {
	QSize ret = self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, w);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QStyle_StyleHint2(QStyle* self, uintptr_t stylehint, QStyleOption* opt) {
	return self->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt);
}

int QStyle_StyleHint3(QStyle* self, uintptr_t stylehint, QStyleOption* opt, QWidget* widget) {
	return self->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget);
}

int QStyle_StyleHint4(QStyle* self, uintptr_t stylehint, QStyleOption* opt, QWidget* widget, QStyleHintReturn* returnData) {
	return self->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget, returnData);
}

QPixmap* QStyle_StandardPixmap2(QStyle* self, uintptr_t standardPixmap, QStyleOption* opt) {
	QPixmap ret = self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QStyle_StandardPixmap3(QStyle* self, uintptr_t standardPixmap, QStyleOption* opt, QWidget* widget) {
	QPixmap ret = self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QIcon* QStyle_StandardIcon2(QStyle* self, uintptr_t standardIcon, QStyleOption* option) {
	QIcon ret = self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

QIcon* QStyle_StandardIcon3(QStyle* self, uintptr_t standardIcon, QStyleOption* option, QWidget* widget) {
	QIcon ret = self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

int QStyle_SliderPositionFromValue5(int min, int max, int val, int space, bool upsideDown) {
	return QStyle::sliderPositionFromValue(static_cast<int>(min), static_cast<int>(max), static_cast<int>(val), static_cast<int>(space), upsideDown);
}

int QStyle_SliderValueFromPosition5(int min, int max, int pos, int space, bool upsideDown) {
	return QStyle::sliderValueFromPosition(static_cast<int>(min), static_cast<int>(max), static_cast<int>(pos), static_cast<int>(space), upsideDown);
}

int QStyle_LayoutSpacing4(QStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option);
}

int QStyle_LayoutSpacing5(QStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option, QWidget* widget) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

int QStyle_CombinedLayoutSpacing4(QStyle* self, int controls1, int controls2, uintptr_t orientation, QStyleOption* option) {
	return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation), option);
}

int QStyle_CombinedLayoutSpacing5(QStyle* self, int controls1, int controls2, uintptr_t orientation, QStyleOption* option, QWidget* widget) {
	return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation), option, widget);
}

void QStyle_Delete(QStyle* self) {
	delete self;
}

