#include "gen_qstylepainter.h"
#include "qstylepainter.h"

#include <QPaintDevice>
#include <QPixmap>
#include <QRect>
#include <QStyle>
#include <QStylePainter>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStylePainter* QStylePainter_new() {
	return new QStylePainter();
}

QStylePainter* QStylePainter_new2(QWidget* w) {
	return new QStylePainter(w);
}

QStylePainter* QStylePainter_new3(QPaintDevice* pd, QWidget* w) {
	return new QStylePainter(pd, w);
}

bool QStylePainter_Begin(QStylePainter* self, QWidget* w) {
	return self->begin(w);
}

bool QStylePainter_Begin2(QStylePainter* self, QPaintDevice* pd, QWidget* w) {
	return self->begin(pd, w);
}

void QStylePainter_DrawItemPixmap(QStylePainter* self, QRect* r, int flags, QPixmap* pixmap) {
	self->drawItemPixmap(*r, static_cast<int>(flags), *pixmap);
}

QStyle* QStylePainter_Style(QStylePainter* self) {
	return self->style();
}

void QStylePainter_Delete(QStylePainter* self) {
	delete self;
}

