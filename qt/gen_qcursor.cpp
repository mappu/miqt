#include <QBitmap>
#include <QCursor>
#include <QPixmap>
#include <QPoint>
#include <QScreen>
#include <qcursor.h>
#include "gen_qcursor.h"
#include "_cgo_export.h"

void QCursor_new(QCursor** outptr_QCursor) {
	QCursor* ret = new QCursor();
	*outptr_QCursor = ret;
}

void QCursor_new2(int shape, QCursor** outptr_QCursor) {
	QCursor* ret = new QCursor(static_cast<Qt::CursorShape>(shape));
	*outptr_QCursor = ret;
}

void QCursor_new3(QBitmap* bitmap, QBitmap* mask, QCursor** outptr_QCursor) {
	QCursor* ret = new QCursor(*bitmap, *mask);
	*outptr_QCursor = ret;
}

void QCursor_new4(QPixmap* pixmap, QCursor** outptr_QCursor) {
	QCursor* ret = new QCursor(*pixmap);
	*outptr_QCursor = ret;
}

void QCursor_new5(QCursor* cursor, QCursor** outptr_QCursor) {
	QCursor* ret = new QCursor(*cursor);
	*outptr_QCursor = ret;
}

void QCursor_new6(QBitmap* bitmap, QBitmap* mask, int hotX, QCursor** outptr_QCursor) {
	QCursor* ret = new QCursor(*bitmap, *mask, static_cast<int>(hotX));
	*outptr_QCursor = ret;
}

void QCursor_new7(QBitmap* bitmap, QBitmap* mask, int hotX, int hotY, QCursor** outptr_QCursor) {
	QCursor* ret = new QCursor(*bitmap, *mask, static_cast<int>(hotX), static_cast<int>(hotY));
	*outptr_QCursor = ret;
}

void QCursor_new8(QPixmap* pixmap, int hotX, QCursor** outptr_QCursor) {
	QCursor* ret = new QCursor(*pixmap, static_cast<int>(hotX));
	*outptr_QCursor = ret;
}

void QCursor_new9(QPixmap* pixmap, int hotX, int hotY, QCursor** outptr_QCursor) {
	QCursor* ret = new QCursor(*pixmap, static_cast<int>(hotX), static_cast<int>(hotY));
	*outptr_QCursor = ret;
}

void QCursor_OperatorAssign(QCursor* self, QCursor* cursor) {
	self->operator=(*cursor);
}

void QCursor_Swap(QCursor* self, QCursor* other) {
	self->swap(*other);
}

int QCursor_Shape(const QCursor* self) {
	Qt::CursorShape _ret = self->shape();
	return static_cast<int>(_ret);
}

void QCursor_SetShape(QCursor* self, int newShape) {
	self->setShape(static_cast<Qt::CursorShape>(newShape));
}

QBitmap* QCursor_Bitmap(const QCursor* self) {
	return (QBitmap*) self->bitmap();
}

QBitmap* QCursor_Mask(const QCursor* self) {
	return (QBitmap*) self->mask();
}

QBitmap* QCursor_BitmapWithQtReturnByValueConstant(const QCursor* self, int param1) {
	return new QBitmap(self->bitmap(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QBitmap* QCursor_MaskWithQtReturnByValueConstant(const QCursor* self, int param1) {
	return new QBitmap(self->mask(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QPixmap* QCursor_Pixmap(const QCursor* self) {
	return new QPixmap(self->pixmap());
}

QPoint* QCursor_HotSpot(const QCursor* self) {
	return new QPoint(self->hotSpot());
}

QPoint* QCursor_Pos() {
	return new QPoint(QCursor::pos());
}

QPoint* QCursor_PosWithScreen(QScreen* screen) {
	return new QPoint(QCursor::pos(screen));
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

void QCursor_Delete(QCursor* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QCursor*>( self );
	} else {
		delete self;
	}
}

