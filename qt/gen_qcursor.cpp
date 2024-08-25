#include "gen_qcursor.h"
#include "qcursor.h"

#include <QBitmap>
#include <QCursor>
#include <QPixmap>
#include <QPoint>
#include <QScreen>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCursor* QCursor_new() {
	return new QCursor();
}

QCursor* QCursor_new2(QBitmap* bitmap, QBitmap* mask) {
	return new QCursor(*bitmap, *mask);
}

QCursor* QCursor_new3(QPixmap* pixmap) {
	return new QCursor(*pixmap);
}

QCursor* QCursor_new4(QCursor* cursor) {
	return new QCursor(*cursor);
}

QCursor* QCursor_new5(QBitmap* bitmap, QBitmap* mask, int hotX) {
	return new QCursor(*bitmap, *mask, static_cast<int>(hotX));
}

QCursor* QCursor_new6(QBitmap* bitmap, QBitmap* mask, int hotX, int hotY) {
	return new QCursor(*bitmap, *mask, static_cast<int>(hotX), static_cast<int>(hotY));
}

QCursor* QCursor_new7(QPixmap* pixmap, int hotX) {
	return new QCursor(*pixmap, static_cast<int>(hotX));
}

QCursor* QCursor_new8(QPixmap* pixmap, int hotX, int hotY) {
	return new QCursor(*pixmap, static_cast<int>(hotX), static_cast<int>(hotY));
}

void QCursor_OperatorAssign(QCursor* self, QCursor* cursor) {
	self->operator=(*cursor);
}

void QCursor_Swap(QCursor* self, QCursor* other) {
	self->swap(*other);
}

QBitmap* QCursor_Bitmap(QCursor* self) {
	return (QBitmap*) self->bitmap();
}

QBitmap* QCursor_Mask(QCursor* self) {
	return (QBitmap*) self->mask();
}

QPixmap* QCursor_Pixmap(QCursor* self) {
	QPixmap ret = self->pixmap();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPoint* QCursor_HotSpot(QCursor* self) {
	QPoint ret = self->hotSpot();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QCursor_Pos() {
	QPoint ret = QCursor::pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QCursor_PosWithScreen(QScreen* screen) {
	QPoint ret = QCursor::pos(screen);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QCursor_SetPos(int x, int y) {
	QCursor::setPos(static_cast<int>(x), static_cast<int>(y));
}

void QCursor_SetPos2(QScreen* screen, int x, int y) {
	QCursor::setPos(screen, static_cast<int>(x), static_cast<int>(y));
}

void QCursor_SetPosWithQPoint(QPoint* p) {
	QCursor::setPos(*p);
}

void QCursor_SetPos3(QScreen* screen, QPoint* p) {
	QCursor::setPos(screen, *p);
}

void QCursor_Delete(QCursor* self) {
	delete self;
}

