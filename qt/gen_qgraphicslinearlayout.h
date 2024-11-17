#pragma once
#ifndef MIQT_QT_GEN_QGRAPHICSLINEARLAYOUT_H
#define MIQT_QT_GEN_QGRAPHICSLINEARLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGraphicsLayoutItem;
class QGraphicsLinearLayout;
class QRectF;
class QSizeF;
#else
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QGraphicsLinearLayout QGraphicsLinearLayout;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
#endif

QGraphicsLinearLayout* QGraphicsLinearLayout_new();
QGraphicsLinearLayout* QGraphicsLinearLayout_new2(int orientation);
QGraphicsLinearLayout* QGraphicsLinearLayout_new3(QGraphicsLayoutItem* parent);
QGraphicsLinearLayout* QGraphicsLinearLayout_new4(int orientation, QGraphicsLayoutItem* parent);
void QGraphicsLinearLayout_SetOrientation(QGraphicsLinearLayout* self, int orientation);
int QGraphicsLinearLayout_Orientation(const QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_AddItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_AddStretch(QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_InsertItem(QGraphicsLinearLayout* self, int index, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_InsertStretch(QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_RemoveItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_RemoveAt(QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_SetSpacing(QGraphicsLinearLayout* self, double spacing);
double QGraphicsLinearLayout_Spacing(const QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_SetItemSpacing(QGraphicsLinearLayout* self, int index, double spacing);
double QGraphicsLinearLayout_ItemSpacing(const QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_SetStretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int stretch);
int QGraphicsLinearLayout_StretchFactor(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_SetAlignment(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int alignment);
int QGraphicsLinearLayout_Alignment(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_SetGeometry(QGraphicsLinearLayout* self, QRectF* rect);
int QGraphicsLinearLayout_Count(const QGraphicsLinearLayout* self);
QGraphicsLayoutItem* QGraphicsLinearLayout_ItemAt(const QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_Invalidate(QGraphicsLinearLayout* self);
QSizeF* QGraphicsLinearLayout_SizeHint(const QGraphicsLinearLayout* self, int which);
void QGraphicsLinearLayout_Dump(const QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_AddStretch1(QGraphicsLinearLayout* self, int stretch);
void QGraphicsLinearLayout_InsertStretch2(QGraphicsLinearLayout* self, int index, int stretch);
QSizeF* QGraphicsLinearLayout_SizeHint2(const QGraphicsLinearLayout* self, int which, QSizeF* constraint);
void QGraphicsLinearLayout_Dump1(const QGraphicsLinearLayout* self, int indent);
void QGraphicsLinearLayout_Delete(QGraphicsLinearLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
