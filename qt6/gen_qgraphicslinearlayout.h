#pragma once
#ifndef MIQT_QT6_GEN_QGRAPHICSLINEARLAYOUT_H
#define MIQT_QT6_GEN_QGRAPHICSLINEARLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
class QGraphicsLayout;
class QGraphicsLayoutItem;
class QGraphicsLinearLayout;
class QRectF;
class QSizeF;
#else
typedef struct QEvent QEvent;
typedef struct QGraphicsLayout QGraphicsLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QGraphicsLinearLayout QGraphicsLinearLayout;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
#endif

QGraphicsLinearLayout* QGraphicsLinearLayout_new();
QGraphicsLinearLayout* QGraphicsLinearLayout_new2(int orientation);
QGraphicsLinearLayout* QGraphicsLinearLayout_new3(QGraphicsLayoutItem* parent);
QGraphicsLinearLayout* QGraphicsLinearLayout_new4(int orientation, QGraphicsLayoutItem* parent);
void QGraphicsLinearLayout_virtbase(QGraphicsLinearLayout* src, QGraphicsLayout** outptr_QGraphicsLayout);
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
QSizeF* QGraphicsLinearLayout_SizeHint(const QGraphicsLinearLayout* self, int which, QSizeF* constraint);
void QGraphicsLinearLayout_Dump(const QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_AddStretch1(QGraphicsLinearLayout* self, int stretch);
void QGraphicsLinearLayout_InsertStretch2(QGraphicsLinearLayout* self, int index, int stretch);
void QGraphicsLinearLayout_Dump1(const QGraphicsLinearLayout* self, int indent);
void QGraphicsLinearLayout_override_virtual_RemoveAt(void* self, intptr_t slot);
void QGraphicsLinearLayout_virtualbase_RemoveAt(void* self, int index);
void QGraphicsLinearLayout_override_virtual_SetGeometry(void* self, intptr_t slot);
void QGraphicsLinearLayout_virtualbase_SetGeometry(void* self, QRectF* rect);
void QGraphicsLinearLayout_override_virtual_Count(void* self, intptr_t slot);
int QGraphicsLinearLayout_virtualbase_Count(const void* self);
void QGraphicsLinearLayout_override_virtual_ItemAt(void* self, intptr_t slot);
QGraphicsLayoutItem* QGraphicsLinearLayout_virtualbase_ItemAt(const void* self, int index);
void QGraphicsLinearLayout_override_virtual_Invalidate(void* self, intptr_t slot);
void QGraphicsLinearLayout_virtualbase_Invalidate(void* self);
void QGraphicsLinearLayout_override_virtual_SizeHint(void* self, intptr_t slot);
QSizeF* QGraphicsLinearLayout_virtualbase_SizeHint(const void* self, int which, QSizeF* constraint);
void QGraphicsLinearLayout_override_virtual_GetContentsMargins(void* self, intptr_t slot);
void QGraphicsLinearLayout_virtualbase_GetContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);
void QGraphicsLinearLayout_override_virtual_UpdateGeometry(void* self, intptr_t slot);
void QGraphicsLinearLayout_virtualbase_UpdateGeometry(void* self);
void QGraphicsLinearLayout_override_virtual_WidgetEvent(void* self, intptr_t slot);
void QGraphicsLinearLayout_virtualbase_WidgetEvent(void* self, QEvent* e);
void QGraphicsLinearLayout_Delete(QGraphicsLinearLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
