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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCommonStyle* QCommonStyle_new() {
	return new QCommonStyle();
}

QMetaObject* QCommonStyle_MetaObject(QCommonStyle* self) {
	return (QMetaObject*) const_cast<const QCommonStyle*>(self)->metaObject();
}

void QCommonStyle_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QCommonStyle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommonStyle_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QCommonStyle::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommonStyle_DrawPrimitive(QCommonStyle* self, uintptr_t pe, QStyleOption* opt, QPainter* p) {
	const_cast<const QCommonStyle*>(self)->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p);
}

void QCommonStyle_DrawControl(QCommonStyle* self, uintptr_t element, QStyleOption* opt, QPainter* p) {
	const_cast<const QCommonStyle*>(self)->drawControl(static_cast<QStyle::ControlElement>(element), opt, p);
}

QRect* QCommonStyle_SubElementRect(QCommonStyle* self, uintptr_t r, QStyleOption* opt) {
	QRect ret = const_cast<const QCommonStyle*>(self)->subElementRect(static_cast<QStyle::SubElement>(r), opt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QCommonStyle_DrawComplexControl(QCommonStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPainter* p) {
	const_cast<const QCommonStyle*>(self)->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p);
}

uintptr_t QCommonStyle_HitTestComplexControl(QCommonStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPoint* pt) {
	QStyle::SubControl ret = const_cast<const QCommonStyle*>(self)->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt);
	return static_cast<uintptr_t>(ret);
}

QRect* QCommonStyle_SubControlRect(QCommonStyle* self, uintptr_t cc, QStyleOptionComplex* opt, uintptr_t sc) {
	QRect ret = const_cast<const QCommonStyle*>(self)->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QSize* QCommonStyle_SizeFromContents(QCommonStyle* self, uintptr_t ct, QStyleOption* opt, QSize* contentsSize) {
	QSize ret = const_cast<const QCommonStyle*>(self)->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QCommonStyle_PixelMetric(QCommonStyle* self, uintptr_t m) {
	return const_cast<const QCommonStyle*>(self)->pixelMetric(static_cast<QStyle::PixelMetric>(m));
}

int QCommonStyle_StyleHint(QCommonStyle* self, uintptr_t sh) {
	return const_cast<const QCommonStyle*>(self)->styleHint(static_cast<QStyle::StyleHint>(sh));
}

QIcon* QCommonStyle_StandardIcon(QCommonStyle* self, uintptr_t standardIcon) {
	QIcon ret = const_cast<const QCommonStyle*>(self)->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

QPixmap* QCommonStyle_StandardPixmap(QCommonStyle* self, uintptr_t sp) {
	QPixmap ret = const_cast<const QCommonStyle*>(self)->standardPixmap(static_cast<QStyle::StandardPixmap>(sp));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QCommonStyle_GeneratedIconPixmap(QCommonStyle* self, uintptr_t iconMode, QPixmap* pixmap, QStyleOption* opt) {
	QPixmap ret = const_cast<const QCommonStyle*>(self)->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

int QCommonStyle_LayoutSpacing(QCommonStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation) {
	return const_cast<const QCommonStyle*>(self)->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation));
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

void QCommonStyle_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QCommonStyle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommonStyle_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCommonStyle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommonStyle_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QCommonStyle::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommonStyle_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCommonStyle::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommonStyle_DrawPrimitive4(QCommonStyle* self, uintptr_t pe, QStyleOption* opt, QPainter* p, QWidget* w) {
	const_cast<const QCommonStyle*>(self)->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
}

void QCommonStyle_DrawControl4(QCommonStyle* self, uintptr_t element, QStyleOption* opt, QPainter* p, QWidget* w) {
	const_cast<const QCommonStyle*>(self)->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
}

QRect* QCommonStyle_SubElementRect3(QCommonStyle* self, uintptr_t r, QStyleOption* opt, QWidget* widget) {
	QRect ret = const_cast<const QCommonStyle*>(self)->subElementRect(static_cast<QStyle::SubElement>(r), opt, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QCommonStyle_DrawComplexControl4(QCommonStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w) {
	const_cast<const QCommonStyle*>(self)->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
}

uintptr_t QCommonStyle_HitTestComplexControl4(QCommonStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w) {
	QStyle::SubControl ret = const_cast<const QCommonStyle*>(self)->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w);
	return static_cast<uintptr_t>(ret);
}

QRect* QCommonStyle_SubControlRect4(QCommonStyle* self, uintptr_t cc, QStyleOptionComplex* opt, uintptr_t sc, QWidget* w) {
	QRect ret = const_cast<const QCommonStyle*>(self)->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QSize* QCommonStyle_SizeFromContents4(QCommonStyle* self, uintptr_t ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget) {
	QSize ret = const_cast<const QCommonStyle*>(self)->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QCommonStyle_PixelMetric2(QCommonStyle* self, uintptr_t m, QStyleOption* opt) {
	return const_cast<const QCommonStyle*>(self)->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt);
}

int QCommonStyle_PixelMetric3(QCommonStyle* self, uintptr_t m, QStyleOption* opt, QWidget* widget) {
	return const_cast<const QCommonStyle*>(self)->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
}

int QCommonStyle_StyleHint2(QCommonStyle* self, uintptr_t sh, QStyleOption* opt) {
	return const_cast<const QCommonStyle*>(self)->styleHint(static_cast<QStyle::StyleHint>(sh), opt);
}

int QCommonStyle_StyleHint3(QCommonStyle* self, uintptr_t sh, QStyleOption* opt, QWidget* w) {
	return const_cast<const QCommonStyle*>(self)->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w);
}

int QCommonStyle_StyleHint4(QCommonStyle* self, uintptr_t sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret) {
	return const_cast<const QCommonStyle*>(self)->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
}

QIcon* QCommonStyle_StandardIcon2(QCommonStyle* self, uintptr_t standardIcon, QStyleOption* opt) {
	QIcon ret = const_cast<const QCommonStyle*>(self)->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

QIcon* QCommonStyle_StandardIcon3(QCommonStyle* self, uintptr_t standardIcon, QStyleOption* opt, QWidget* widget) {
	QIcon ret = const_cast<const QCommonStyle*>(self)->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

QPixmap* QCommonStyle_StandardPixmap2(QCommonStyle* self, uintptr_t sp, QStyleOption* opt) {
	QPixmap ret = const_cast<const QCommonStyle*>(self)->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QCommonStyle_StandardPixmap3(QCommonStyle* self, uintptr_t sp, QStyleOption* opt, QWidget* widget) {
	QPixmap ret = const_cast<const QCommonStyle*>(self)->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

int QCommonStyle_LayoutSpacing4(QCommonStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option) {
	return const_cast<const QCommonStyle*>(self)->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option);
}

int QCommonStyle_LayoutSpacing5(QCommonStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option, QWidget* widget) {
	return const_cast<const QCommonStyle*>(self)->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

void QCommonStyle_Delete(QCommonStyle* self) {
	delete self;
}

