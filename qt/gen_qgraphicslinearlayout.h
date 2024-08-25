#ifndef GEN_QGRAPHICSLINEARLAYOUT_H
#define GEN_QGRAPHICSLINEARLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGraphicsLayoutItem;
class QGraphicsLinearLayout;
class QRectF;
#else
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QGraphicsLinearLayout QGraphicsLinearLayout;
typedef struct QRectF QRectF;
#endif

QGraphicsLinearLayout* QGraphicsLinearLayout_new();
QGraphicsLinearLayout* QGraphicsLinearLayout_new2(QGraphicsLayoutItem* parent);
void QGraphicsLinearLayout_AddItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_AddStretch(QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_InsertItem(QGraphicsLinearLayout* self, int index, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_InsertStretch(QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_RemoveItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_RemoveAt(QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_SetSpacing(QGraphicsLinearLayout* self, double spacing);
double QGraphicsLinearLayout_Spacing(QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_SetItemSpacing(QGraphicsLinearLayout* self, int index, double spacing);
double QGraphicsLinearLayout_ItemSpacing(QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_SetStretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int stretch);
int QGraphicsLinearLayout_StretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_SetGeometry(QGraphicsLinearLayout* self, QRectF* rect);
int QGraphicsLinearLayout_Count(QGraphicsLinearLayout* self);
QGraphicsLayoutItem* QGraphicsLinearLayout_ItemAt(QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_Invalidate(QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_Dump(QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_AddStretch1(QGraphicsLinearLayout* self, int stretch);
void QGraphicsLinearLayout_InsertStretch2(QGraphicsLinearLayout* self, int index, int stretch);
void QGraphicsLinearLayout_Dump1(QGraphicsLinearLayout* self, int indent);
void QGraphicsLinearLayout_Delete(QGraphicsLinearLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
