#pragma once
#ifndef MIQT_QT_GEN_QREGION_H
#define MIQT_QT_GEN_QREGION_H

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
class QPoint;
class QRect;
class QRegion;
class QVariant;
#else
typedef struct QBitmap QBitmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QVariant QVariant;
#endif

QRegion* QRegion_new();
QRegion* QRegion_new2(int x, int y, int w, int h);
QRegion* QRegion_new3(QRect* r);
QRegion* QRegion_new4(QRegion* region);
QRegion* QRegion_new5(QBitmap* bitmap);
QRegion* QRegion_new6(int x, int y, int w, int h, int t);
QRegion* QRegion_new7(QRect* r, int t);
void QRegion_operatorAssign(QRegion* self, QRegion* param1);
void QRegion_swap(QRegion* self, QRegion* other);
bool QRegion_isEmpty(const QRegion* self);
bool QRegion_isNull(const QRegion* self);
QRect* QRegion_begin(const QRegion* self);
QRect* QRegion_cbegin(const QRegion* self);
QRect* QRegion_end(const QRegion* self);
QRect* QRegion_cend(const QRegion* self);
bool QRegion_contains(const QRegion* self, QPoint* p);
bool QRegion_containsWithQRect(const QRegion* self, QRect* r);
void QRegion_translate(QRegion* self, int dx, int dy);
void QRegion_translateWithQPoint(QRegion* self, QPoint* p);
QRegion* QRegion_translated(const QRegion* self, int dx, int dy);
QRegion* QRegion_translatedWithQPoint(const QRegion* self, QPoint* p);
QRegion* QRegion_united(const QRegion* self, QRegion* r);
QRegion* QRegion_unitedWithQRect(const QRegion* self, QRect* r);
QRegion* QRegion_intersected(const QRegion* self, QRegion* r);
QRegion* QRegion_intersectedWithQRect(const QRegion* self, QRect* r);
QRegion* QRegion_subtracted(const QRegion* self, QRegion* r);
QRegion* QRegion_xored(const QRegion* self, QRegion* r);
bool QRegion_intersects(const QRegion* self, QRegion* r);
bool QRegion_intersectsWithQRect(const QRegion* self, QRect* r);
QRect* QRegion_boundingRect(const QRegion* self);
struct miqt_array /* of QRect* */  QRegion_rects(const QRegion* self);
void QRegion_setRects(QRegion* self, QRect* rect, int num);
int QRegion_rectCount(const QRegion* self);
QRegion* QRegion_operatorBitwiseOr(const QRegion* self, QRegion* r);
QRegion* QRegion_operatorPlus(const QRegion* self, QRegion* r);
QRegion* QRegion_operatorPlusWithQRect(const QRegion* self, QRect* r);
QRegion* QRegion_operatorBitwiseAnd(const QRegion* self, QRegion* r);
QRegion* QRegion_operatorBitwiseAndWithQRect(const QRegion* self, QRect* r);
QRegion* QRegion_operatorMinus(const QRegion* self, QRegion* r);
QRegion* QRegion_operatorBitwiseNot(const QRegion* self, QRegion* r);
void QRegion_operatorBitwiseOrAssign(QRegion* self, QRegion* r);
QRegion* QRegion_operatorPlusAssign(QRegion* self, QRegion* r);
QRegion* QRegion_operatorPlusAssignWithQRect(QRegion* self, QRect* r);
void QRegion_operatorBitwiseAndAssign(QRegion* self, QRegion* r);
void QRegion_operatorBitwiseAndAssignWithQRect(QRegion* self, QRect* r);
QRegion* QRegion_operatorMinusAssign(QRegion* self, QRegion* r);
void QRegion_operatorBitwiseNotAssign(QRegion* self, QRegion* r);
bool QRegion_operatorEqual(const QRegion* self, QRegion* r);
bool QRegion_operatorNotEqual(const QRegion* self, QRegion* r);
QVariant* QRegion_ToQVariant(const QRegion* self);
void QRegion_delete(QRegion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
