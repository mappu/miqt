#ifndef GEN_QREGION_H
#define GEN_QREGION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QRegion* QRegion_new2(QRegion* region);
QRegion* QRegion_new3(QBitmap* bitmap);
void QRegion_OperatorAssign(QRegion* self, QRegion* param1);
void QRegion_Swap(QRegion* self, QRegion* other);
bool QRegion_IsEmpty(QRegion* self);
bool QRegion_IsNull(QRegion* self);
bool QRegion_Contains(QRegion* self, QPoint* p);
bool QRegion_ContainsWithQRect(QRegion* self, QRect* r);
void QRegion_Translate(QRegion* self, int dx, int dy);
void QRegion_TranslateWithQPoint(QRegion* self, QPoint* p);
QRegion* QRegion_Translated(QRegion* self, int dx, int dy);
QRegion* QRegion_TranslatedWithQPoint(QRegion* self, QPoint* p);
QRegion* QRegion_United(QRegion* self, QRegion* r);
QRegion* QRegion_UnitedWithQRect(QRegion* self, QRect* r);
QRegion* QRegion_Intersected(QRegion* self, QRegion* r);
QRegion* QRegion_IntersectedWithQRect(QRegion* self, QRect* r);
QRegion* QRegion_Subtracted(QRegion* self, QRegion* r);
QRegion* QRegion_Xored(QRegion* self, QRegion* r);
bool QRegion_Intersects(QRegion* self, QRegion* r);
bool QRegion_IntersectsWithQRect(QRegion* self, QRect* r);
QRect* QRegion_BoundingRect(QRegion* self);
void QRegion_Rects(QRegion* self, QRect*** _out, size_t* _out_len);
void QRegion_SetRects(QRegion* self, QRect* rect, int num);
int QRegion_RectCount(QRegion* self);
QRegion* QRegion_OperatorBitwiseOr(QRegion* self, QRegion* r);
QRegion* QRegion_OperatorPlus(QRegion* self, QRegion* r);
QRegion* QRegion_OperatorPlusWithQRect(QRegion* self, QRect* r);
QRegion* QRegion_OperatorBitwiseAnd(QRegion* self, QRegion* r);
QRegion* QRegion_OperatorBitwiseAndWithQRect(QRegion* self, QRect* r);
QRegion* QRegion_OperatorMinus(QRegion* self, QRegion* r);
QRegion* QRegion_OperatorBitwiseNot(QRegion* self, QRegion* r);
void QRegion_OperatorBitwiseOrAssign(QRegion* self, QRegion* r);
QRegion* QRegion_OperatorPlusAssign(QRegion* self, QRegion* r);
QRegion* QRegion_OperatorPlusAssignWithQRect(QRegion* self, QRect* r);
void QRegion_OperatorBitwiseAndAssign(QRegion* self, QRegion* r);
void QRegion_OperatorBitwiseAndAssignWithQRect(QRegion* self, QRect* r);
QRegion* QRegion_OperatorMinusAssign(QRegion* self, QRegion* r);
void QRegion_OperatorBitwiseNotAssign(QRegion* self, QRegion* r);
bool QRegion_OperatorEqual(QRegion* self, QRegion* r);
bool QRegion_OperatorNotEqual(QRegion* self, QRegion* r);
void QRegion_Delete(QRegion* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
