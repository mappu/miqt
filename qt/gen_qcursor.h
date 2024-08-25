#ifndef GEN_QCURSOR_H
#define GEN_QCURSOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBitmap;
class QCursor;
class QPixmap;
class QPoint;
class QScreen;
#else
typedef struct QBitmap QBitmap;
typedef struct QCursor QCursor;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QScreen QScreen;
#endif

QCursor* QCursor_new();
QCursor* QCursor_new2(QBitmap* bitmap, QBitmap* mask);
QCursor* QCursor_new3(QPixmap* pixmap);
QCursor* QCursor_new4(QCursor* cursor);
QCursor* QCursor_new5(QBitmap* bitmap, QBitmap* mask, int hotX);
QCursor* QCursor_new6(QBitmap* bitmap, QBitmap* mask, int hotX, int hotY);
QCursor* QCursor_new7(QPixmap* pixmap, int hotX);
QCursor* QCursor_new8(QPixmap* pixmap, int hotX, int hotY);
void QCursor_OperatorAssign(QCursor* self, QCursor* cursor);
void QCursor_Swap(QCursor* self, QCursor* other);
QBitmap* QCursor_Bitmap(QCursor* self);
QBitmap* QCursor_Mask(QCursor* self);
QPixmap* QCursor_Pixmap(QCursor* self);
QPoint* QCursor_HotSpot(QCursor* self);
QPoint* QCursor_Pos();
QPoint* QCursor_PosWithScreen(QScreen* screen);
void QCursor_SetPos(int x, int y);
void QCursor_SetPos2(QScreen* screen, int x, int y);
void QCursor_SetPosWithQPoint(QPoint* p);
void QCursor_SetPos3(QScreen* screen, QPoint* p);
void QCursor_Delete(QCursor* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
