#pragma once
#ifndef MIQT_QT_GEN_QCURSOR_H
#define MIQT_QT_GEN_QCURSOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBitmap;
class QCursor;
class QPixmap;
class QPoint;
class QScreen;
class QVariant;
#else
typedef struct QBitmap QBitmap;
typedef struct QCursor QCursor;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QScreen QScreen;
typedef struct QVariant QVariant;
#endif

QCursor* QCursor_new();
QCursor* QCursor_new2(int shape);
QCursor* QCursor_new3(QBitmap* bitmap, QBitmap* mask);
QCursor* QCursor_new4(QPixmap* pixmap);
QCursor* QCursor_new5(QCursor* cursor);
QCursor* QCursor_new6(QBitmap* bitmap, QBitmap* mask, int hotX);
QCursor* QCursor_new7(QBitmap* bitmap, QBitmap* mask, int hotX, int hotY);
QCursor* QCursor_new8(QPixmap* pixmap, int hotX);
QCursor* QCursor_new9(QPixmap* pixmap, int hotX, int hotY);
void QCursor_operatorAssign(QCursor* self, QCursor* cursor);
void QCursor_swap(QCursor* self, QCursor* other);
QVariant* QCursor_ToQVariant(const QCursor* self);
int QCursor_shape(const QCursor* self);
void QCursor_setShape(QCursor* self, int newShape);
QBitmap* QCursor_bitmap(const QCursor* self);
QBitmap* QCursor_mask(const QCursor* self);
QBitmap* QCursor_bitmapWithQtReturnByValueConstant(const QCursor* self, int param1);
QBitmap* QCursor_maskWithQtReturnByValueConstant(const QCursor* self, int param1);
QPixmap* QCursor_pixmap(const QCursor* self);
QPoint* QCursor_hotSpot(const QCursor* self);
QPoint* QCursor_pos();
QPoint* QCursor_posWithScreen(QScreen* screen);
void QCursor_setPos(int x, int y);
void QCursor_setPos2(QScreen* screen, int x, int y);
void QCursor_setPosWithQPoint(QPoint* p);
void QCursor_setPos3(QScreen* screen, QPoint* p);
void QCursor_delete(QCursor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
