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
#include "_cgo_export.h"

QMetaObject* QStyle_MetaObject(const QStyle* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QStyle_Tr(const char* s) {
	QString _ret = QStyle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStyle_TrUtf8(const char* s) {
	QString _ret = QStyle::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

QRect* QStyle_ItemTextRect(const QStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
}

QRect* QStyle_ItemPixmapRect(const QStyle* self, QRect* r, int flags, QPixmap* pixmap) {
	return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
}

void QStyle_DrawItemText(const QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString);
}

void QStyle_DrawItemPixmap(const QStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
	self->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

QPalette* QStyle_StandardPalette(const QStyle* self) {
	return new QPalette(self->standardPalette());
}

void QStyle_DrawPrimitive(const QStyle* self, uintptr_t pe, QStyleOption* opt, QPainter* p) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p);
}

void QStyle_DrawControl(const QStyle* self, uintptr_t element, QStyleOption* opt, QPainter* p) {
	self->drawControl(static_cast<QStyle::ControlElement>(element), opt, p);
}

QRect* QStyle_SubElementRect(const QStyle* self, uintptr_t subElement, QStyleOption* option) {
	return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(subElement), option));
}

void QStyle_DrawComplexControl(const QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPainter* p) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p);
}

uintptr_t QStyle_HitTestComplexControl(const QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPoint* pt) {
	QStyle::SubControl _ret = self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt);
	return static_cast<uintptr_t>(_ret);
}

QRect* QStyle_SubControlRect(const QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, uintptr_t sc) {
	return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc)));
}

int QStyle_PixelMetric(const QStyle* self, uintptr_t metric) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric));
}

QSize* QStyle_SizeFromContents(const QStyle* self, uintptr_t ct, QStyleOption* opt, QSize* contentsSize) {
	return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize));
}

int QStyle_StyleHint(const QStyle* self, uintptr_t stylehint) {
	return self->styleHint(static_cast<QStyle::StyleHint>(stylehint));
}

QPixmap* QStyle_StandardPixmap(const QStyle* self, uintptr_t standardPixmap) {
	return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap)));
}

QIcon* QStyle_StandardIcon(const QStyle* self, uintptr_t standardIcon) {
	return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon)));
}

QPixmap* QStyle_GeneratedIconPixmap(const QStyle* self, uintptr_t iconMode, QPixmap* pixmap, QStyleOption* opt) {
	return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
}

QRect* QStyle_VisualRect(uintptr_t direction, QRect* boundingRect, QRect* logicalRect) {
	return new QRect(QStyle::visualRect(static_cast<Qt::LayoutDirection>(direction), *boundingRect, *logicalRect));
}

QPoint* QStyle_VisualPos(uintptr_t direction, QRect* boundingRect, QPoint* logicalPos) {
	return new QPoint(QStyle::visualPos(static_cast<Qt::LayoutDirection>(direction), *boundingRect, *logicalPos));
}

int QStyle_SliderPositionFromValue(int min, int max, int val, int space) {
	return QStyle::sliderPositionFromValue(static_cast<int>(min), static_cast<int>(max), static_cast<int>(val), static_cast<int>(space));
}

int QStyle_SliderValueFromPosition(int min, int max, int pos, int space) {
	return QStyle::sliderValueFromPosition(static_cast<int>(min), static_cast<int>(max), static_cast<int>(pos), static_cast<int>(space));
}

int QStyle_VisualAlignment(uintptr_t direction, int alignment) {
	Qt::Alignment _ret = QStyle::visualAlignment(static_cast<Qt::LayoutDirection>(direction), static_cast<Qt::Alignment>(alignment));
	return static_cast<int>(_ret);
}

QRect* QStyle_AlignedRect(uintptr_t direction, int alignment, QSize* size, QRect* rectangle) {
	return new QRect(QStyle::alignedRect(static_cast<Qt::LayoutDirection>(direction), static_cast<Qt::Alignment>(alignment), *size, *rectangle));
}

int QStyle_LayoutSpacing(const QStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation));
}

int QStyle_CombinedLayoutSpacing(const QStyle* self, int controls1, int controls2, uintptr_t orientation) {
	return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation));
}

QStyle* QStyle_Proxy(const QStyle* self) {
	return (QStyle*) self->proxy();
}

struct miqt_string* QStyle_Tr2(const char* s, const char* c) {
	QString _ret = QStyle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStyle_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStyle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStyle_TrUtf82(const char* s, const char* c) {
	QString _ret = QStyle::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStyle_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QStyle::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QStyle_DrawItemText7(const QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string* text, uintptr_t textRole) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

void QStyle_DrawPrimitive4(const QStyle* self, uintptr_t pe, QStyleOption* opt, QPainter* p, QWidget* w) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
}

void QStyle_DrawControl4(const QStyle* self, uintptr_t element, QStyleOption* opt, QPainter* p, QWidget* w) {
	self->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
}

QRect* QStyle_SubElementRect3(const QStyle* self, uintptr_t subElement, QStyleOption* option, QWidget* widget) {
	return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(subElement), option, widget));
}

void QStyle_DrawComplexControl4(const QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPainter* p, QWidget* widget) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
}

uintptr_t QStyle_HitTestComplexControl4(const QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* widget) {
	QStyle::SubControl _ret = self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, widget);
	return static_cast<uintptr_t>(_ret);
}

QRect* QStyle_SubControlRect4(const QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, uintptr_t sc, QWidget* widget) {
	return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
}

int QStyle_PixelMetric2(const QStyle* self, uintptr_t metric, QStyleOption* option) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option);
}

int QStyle_PixelMetric3(const QStyle* self, uintptr_t metric, QStyleOption* option, QWidget* widget) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
}

QSize* QStyle_SizeFromContents4(const QStyle* self, uintptr_t ct, QStyleOption* opt, QSize* contentsSize, QWidget* w) {
	return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, w));
}

int QStyle_StyleHint2(const QStyle* self, uintptr_t stylehint, QStyleOption* opt) {
	return self->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt);
}

int QStyle_StyleHint3(const QStyle* self, uintptr_t stylehint, QStyleOption* opt, QWidget* widget) {
	return self->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget);
}

int QStyle_StyleHint4(const QStyle* self, uintptr_t stylehint, QStyleOption* opt, QWidget* widget, QStyleHintReturn* returnData) {
	return self->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget, returnData);
}

QPixmap* QStyle_StandardPixmap2(const QStyle* self, uintptr_t standardPixmap, QStyleOption* opt) {
	return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt));
}

QPixmap* QStyle_StandardPixmap3(const QStyle* self, uintptr_t standardPixmap, QStyleOption* opt, QWidget* widget) {
	return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
}

QIcon* QStyle_StandardIcon2(const QStyle* self, uintptr_t standardIcon, QStyleOption* option) {
	return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option));
}

QIcon* QStyle_StandardIcon3(const QStyle* self, uintptr_t standardIcon, QStyleOption* option, QWidget* widget) {
	return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
}

int QStyle_SliderPositionFromValue5(int min, int max, int val, int space, bool upsideDown) {
	return QStyle::sliderPositionFromValue(static_cast<int>(min), static_cast<int>(max), static_cast<int>(val), static_cast<int>(space), upsideDown);
}

int QStyle_SliderValueFromPosition5(int min, int max, int pos, int space, bool upsideDown) {
	return QStyle::sliderValueFromPosition(static_cast<int>(min), static_cast<int>(max), static_cast<int>(pos), static_cast<int>(space), upsideDown);
}

int QStyle_LayoutSpacing4(const QStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option);
}

int QStyle_LayoutSpacing5(const QStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option, QWidget* widget) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

int QStyle_CombinedLayoutSpacing4(const QStyle* self, int controls1, int controls2, uintptr_t orientation, QStyleOption* option) {
	return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation), option);
}

int QStyle_CombinedLayoutSpacing5(const QStyle* self, int controls1, int controls2, uintptr_t orientation, QStyleOption* option, QWidget* widget) {
	return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation), option, widget);
}

void QStyle_Delete(QStyle* self) {
	delete self;
}

