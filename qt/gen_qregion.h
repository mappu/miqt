#ifndef GEN_QREGION_H
#define GEN_QREGION_H

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
#else
typedef struct QBitmap QBitmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
#endif

QRegion* QRegion_new();
QRegion* QRegion_new2(int x, int y, int w, int h);
QRegion* QRegion_new3(QRect* r);
QRegion* QRegion_new4(QRegion* region);
QRegion* QRegion_new5(QBitmap* bitmap);
QRegion* QRegion_new6(int x, int y, int w, int h, int t);
QRegion* QRegion_new7(QRect* r, int t);
void QRegion_OperatorAssign(QRegion* self, QRegion* param1);
void QRegion_Swap(QRegion* self, QRegion* other);
bool QRegion_IsEmpty(const QRegion* self);
bool QRegion_IsNull(const QRegion* self);
QRect* QRegion_Begin(const QRegion* self);
QRect* QRegion_Cbegin(const QRegion* self);
QRect* QRegion_End(const QRegion* self);
QRect* QRegion_Cend(const QRegion* self);
bool QRegion_Contains(const QRegion* self, QPoint* p);
bool QRegion_ContainsWithQRect(const QRegion* self, QRect* r);
void QRegion_Translate(QRegion* self, int dx, int dy);
void QRegion_TranslateWithQPoint(QRegion* self, QPoint* p);
QRegion* QRegion_Translated(const QRegion* self, int dx, int dy);
QRegion* QRegion_TranslatedWithQPoint(const QRegion* self, QPoint* p);
QRegion* QRegion_United(const QRegion* self, QRegion* r);
QRegion* QRegion_UnitedWithQRect(const QRegion* self, QRect* r);
QRegion* QRegion_Intersected(const QRegion* self, QRegion* r);
QRegion* QRegion_IntersectedWithQRect(const QRegion* self, QRect* r);
QRegion* QRegion_Subtracted(const QRegion* self, QRegion* r);
QRegion* QRegion_Xored(const QRegion* self, QRegion* r);
bool QRegion_Intersects(const QRegion* self, QRegion* r);
bool QRegion_IntersectsWithQRect(const QRegion* self, QRect* r);
QRect* QRegion_BoundingRect(const QRegion* self);
struct miqt_array* QRegion_Rects(const QRegion* self);
void QRegion_SetRects(QRegion* self, QRect* rect, int num);
int QRegion_RectCount(const QRegion* self);
QRegion* QRegion_OperatorBitwiseOr(const QRegion* self, QRegion* r);
QRegion* QRegion_OperatorPlus(const QRegion* self, QRegion* r);
QRegion* QRegion_OperatorPlusWithQRect(const QRegion* self, QRect* r);
QRegion* QRegion_OperatorBitwiseAnd(const QRegion* self, QRegion* r);
QRegion* QRegion_OperatorBitwiseAndWithQRect(const QRegion* self, QRect* r);
QRegion* QRegion_OperatorMinus(const QRegion* self, QRegion* r);
QRegion* QRegion_OperatorBitwiseNot(const QRegion* self, QRegion* r);
void QRegion_OperatorBitwiseOrAssign(QRegion* self, QRegion* r);
QRegion* QRegion_OperatorPlusAssign(QRegion* self, QRegion* r);
QRegion* QRegion_OperatorPlusAssignWithQRect(QRegion* self, QRect* r);
void QRegion_OperatorBitwiseAndAssign(QRegion* self, QRegion* r);
void QRegion_OperatorBitwiseAndAssignWithQRect(QRegion* self, QRect* r);
QRegion* QRegion_OperatorMinusAssign(QRegion* self, QRegion* r);
void QRegion_OperatorBitwiseNotAssign(QRegion* self, QRegion* r);
bool QRegion_OperatorEqual(const QRegion* self, QRegion* r);
bool QRegion_OperatorNotEqual(const QRegion* self, QRegion* r);
void QRegion_Delete(QRegion* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
