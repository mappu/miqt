#pragma once
#ifndef MIQT_QT_GEN_QGRAPHICSLAYOUT_H
#define MIQT_QT_GEN_QGRAPHICSLAYOUT_H

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
class QRectF;
class QSizeF;
#else
typedef struct QEvent QEvent;
typedef struct QGraphicsLayout QGraphicsLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
#endif

QGraphicsLayout* QGraphicsLayout_new();
QGraphicsLayout* QGraphicsLayout_new2(QGraphicsLayoutItem* parent);
void QGraphicsLayout_virtbase(QGraphicsLayout* src, QGraphicsLayoutItem** outptr_QGraphicsLayoutItem);
void QGraphicsLayout_SetContentsMargins(QGraphicsLayout* self, double left, double top, double right, double bottom);
void QGraphicsLayout_GetContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom);
void QGraphicsLayout_Activate(QGraphicsLayout* self);
bool QGraphicsLayout_IsActivated(const QGraphicsLayout* self);
void QGraphicsLayout_Invalidate(QGraphicsLayout* self);
void QGraphicsLayout_UpdateGeometry(QGraphicsLayout* self);
void QGraphicsLayout_WidgetEvent(QGraphicsLayout* self, QEvent* e);
int QGraphicsLayout_Count(const QGraphicsLayout* self);
QGraphicsLayoutItem* QGraphicsLayout_ItemAt(const QGraphicsLayout* self, int i);
void QGraphicsLayout_RemoveAt(QGraphicsLayout* self, int index);
void QGraphicsLayout_SetInstantInvalidatePropagation(bool enable);
bool QGraphicsLayout_InstantInvalidatePropagation();
bool QGraphicsLayout_override_virtual_GetContentsMargins(void* self, intptr_t slot);
void QGraphicsLayout_virtualbase_GetContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);
bool QGraphicsLayout_override_virtual_Invalidate(void* self, intptr_t slot);
void QGraphicsLayout_virtualbase_Invalidate(void* self);
bool QGraphicsLayout_override_virtual_UpdateGeometry(void* self, intptr_t slot);
void QGraphicsLayout_virtualbase_UpdateGeometry(void* self);
bool QGraphicsLayout_override_virtual_WidgetEvent(void* self, intptr_t slot);
void QGraphicsLayout_virtualbase_WidgetEvent(void* self, QEvent* e);
bool QGraphicsLayout_override_virtual_Count(void* self, intptr_t slot);
int QGraphicsLayout_virtualbase_Count(const void* self);
bool QGraphicsLayout_override_virtual_ItemAt(void* self, intptr_t slot);
QGraphicsLayoutItem* QGraphicsLayout_virtualbase_ItemAt(const void* self, int i);
bool QGraphicsLayout_override_virtual_RemoveAt(void* self, intptr_t slot);
void QGraphicsLayout_virtualbase_RemoveAt(void* self, int index);
bool QGraphicsLayout_override_virtual_SetGeometry(void* self, intptr_t slot);
void QGraphicsLayout_virtualbase_SetGeometry(void* self, QRectF* rect);
bool QGraphicsLayout_override_virtual_SizeHint(void* self, intptr_t slot);
QSizeF* QGraphicsLayout_virtualbase_SizeHint(const void* self, int which, QSizeF* constraint);
void QGraphicsLayout_Delete(QGraphicsLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
