#include <QPaintDevice>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QStylePainter>
#include <QWidget>
#include <qstylepainter.h>
#include "gen_qstylepainter.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QStylePainter* QStylePainter_new(QWidget* w) {
	return new QStylePainter(w);
}

QStylePainter* QStylePainter_new2() {
	return new QStylePainter();
}

QStylePainter* QStylePainter_new3(QPaintDevice* pd, QWidget* w) {
	return new QStylePainter(pd, w);
}

void QStylePainter_virtbase(QStylePainter* src, QPainter** outptr_QPainter) {
	*outptr_QPainter = static_cast<QPainter*>(src);
}

bool QStylePainter_begin(QStylePainter* self, QWidget* w) {
	return self->begin(w);
}

bool QStylePainter_begin2(QStylePainter* self, QPaintDevice* pd, QWidget* w) {
	return self->begin(pd, w);
}

void QStylePainter_drawPrimitive(QStylePainter* self, int pe, QStyleOption* opt) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), *opt);
}

void QStylePainter_drawControl(QStylePainter* self, int ce, QStyleOption* opt) {
	self->drawControl(static_cast<QStyle::ControlElement>(ce), *opt);
}

void QStylePainter_drawComplexControl(QStylePainter* self, int cc, QStyleOptionComplex* opt) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), *opt);
}

void QStylePainter_drawItemText(QStylePainter* self, QRect* r, int flags, QPalette* pal, bool enabled, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawItemText(*r, static_cast<int>(flags), *pal, enabled, text_QString);
}

void QStylePainter_drawItemPixmap(QStylePainter* self, QRect* r, int flags, QPixmap* pixmap) {
	self->drawItemPixmap(*r, static_cast<int>(flags), *pixmap);
}

QStyle* QStylePainter_style(const QStylePainter* self) {
	return self->style();
}

void QStylePainter_drawItemText6(QStylePainter* self, QRect* r, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawItemText(*r, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

void QStylePainter_delete(QStylePainter* self) {
	delete self;
}

