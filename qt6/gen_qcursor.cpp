#include <QBitmap>
#include <QCursor>
#include <QPixmap>
#include <QPoint>
#include <QScreen>
#include <QVariant>
#include <qcursor.h>
#include "gen_qcursor.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QCursor* QCursor_new() {
	return new QCursor();
}

QCursor* QCursor_new2(int shape) {
	return new QCursor(static_cast<Qt::CursorShape>(shape));
}

QCursor* QCursor_new3(QBitmap* bitmap, QBitmap* mask) {
	return new QCursor(*bitmap, *mask);
}

QCursor* QCursor_new4(QPixmap* pixmap) {
	return new QCursor(*pixmap);
}

QCursor* QCursor_new5(QCursor* cursor) {
	return new QCursor(*cursor);
}

QCursor* QCursor_new6(QBitmap* bitmap, QBitmap* mask, int hotX) {
	return new QCursor(*bitmap, *mask, static_cast<int>(hotX));
}

QCursor* QCursor_new7(QBitmap* bitmap, QBitmap* mask, int hotX, int hotY) {
	return new QCursor(*bitmap, *mask, static_cast<int>(hotX), static_cast<int>(hotY));
}

QCursor* QCursor_new8(QPixmap* pixmap, int hotX) {
	return new QCursor(*pixmap, static_cast<int>(hotX));
}

QCursor* QCursor_new9(QPixmap* pixmap, int hotX, int hotY) {
	return new QCursor(*pixmap, static_cast<int>(hotX), static_cast<int>(hotY));
}

void QCursor_operatorAssign(QCursor* self, QCursor* cursor) {
	self->operator=(*cursor);
}

void QCursor_swap(QCursor* self, QCursor* other) {
	self->swap(*other);
}

QVariant* QCursor_ToQVariant(const QCursor* self) {
	return new QVariant(self->operator QVariant());
}

int QCursor_shape(const QCursor* self) {
	Qt::CursorShape _ret = self->shape();
	return static_cast<int>(_ret);
}

void QCursor_setShape(QCursor* self, int newShape) {
	self->setShape(static_cast<Qt::CursorShape>(newShape));
}

QBitmap* QCursor_bitmap(const QCursor* self, int param1) {
	return new QBitmap(self->bitmap(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QBitmap* QCursor_mask(const QCursor* self, int param1) {
	return new QBitmap(self->mask(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QBitmap* QCursor_bitmap2(const QCursor* self) {
	return new QBitmap(self->bitmap());
}

QBitmap* QCursor_mask2(const QCursor* self) {
	return new QBitmap(self->mask());
}

QPixmap* QCursor_pixmap(const QCursor* self) {
	return new QPixmap(self->pixmap());
}

QPoint* QCursor_hotSpot(const QCursor* self) {
	return new QPoint(self->hotSpot());
}

QPoint* QCursor_pos() {
	return new QPoint(QCursor::pos());
}

QPoint* QCursor_posWithScreen(QScreen* screen) {
	return new QPoint(QCursor::pos(screen));
}

void QCursor_setPos(int x, int y) {
	QCursor::setPos(static_cast<int>(x), static_cast<int>(y));
}

void QCursor_setPos2(QScreen* screen, int x, int y) {
	QCursor::setPos(screen, static_cast<int>(x), static_cast<int>(y));
}

void QCursor_setPosWithQPoint(QPoint* p) {
	QCursor::setPos(*p);
}

void QCursor_setPos3(QScreen* screen, QPoint* p) {
	QCursor::setPos(screen, *p);
}

void QCursor_delete(QCursor* self) {
	delete self;
}

