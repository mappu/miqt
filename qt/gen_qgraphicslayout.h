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
void QGraphicsLayout_setContentsMargins(QGraphicsLayout* self, double left, double top, double right, double bottom);
void QGraphicsLayout_getContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom);
void QGraphicsLayout_activate(QGraphicsLayout* self);
bool QGraphicsLayout_isActivated(const QGraphicsLayout* self);
void QGraphicsLayout_invalidate(QGraphicsLayout* self);
void QGraphicsLayout_updateGeometry(QGraphicsLayout* self);
void QGraphicsLayout_widgetEvent(QGraphicsLayout* self, QEvent* e);
int QGraphicsLayout_count(const QGraphicsLayout* self);
QGraphicsLayoutItem* QGraphicsLayout_itemAt(const QGraphicsLayout* self, int i);
void QGraphicsLayout_removeAt(QGraphicsLayout* self, int index);
void QGraphicsLayout_setInstantInvalidatePropagation(bool enable);
bool QGraphicsLayout_instantInvalidatePropagation();
bool QGraphicsLayout_override_virtual_getContentsMargins(void* self, intptr_t slot);
void QGraphicsLayout_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);
bool QGraphicsLayout_override_virtual_invalidate(void* self, intptr_t slot);
void QGraphicsLayout_virtualbase_invalidate(void* self);
bool QGraphicsLayout_override_virtual_updateGeometry(void* self, intptr_t slot);
void QGraphicsLayout_virtualbase_updateGeometry(void* self);
bool QGraphicsLayout_override_virtual_widgetEvent(void* self, intptr_t slot);
void QGraphicsLayout_virtualbase_widgetEvent(void* self, QEvent* e);
bool QGraphicsLayout_override_virtual_count(void* self, intptr_t slot);
int QGraphicsLayout_virtualbase_count(const void* self);
bool QGraphicsLayout_override_virtual_itemAt(void* self, intptr_t slot);
QGraphicsLayoutItem* QGraphicsLayout_virtualbase_itemAt(const void* self, int i);
bool QGraphicsLayout_override_virtual_removeAt(void* self, intptr_t slot);
void QGraphicsLayout_virtualbase_removeAt(void* self, int index);
bool QGraphicsLayout_override_virtual_setGeometry(void* self, intptr_t slot);
void QGraphicsLayout_virtualbase_setGeometry(void* self, QRectF* rect);
bool QGraphicsLayout_override_virtual_sizeHint(void* self, intptr_t slot);
QSizeF* QGraphicsLayout_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint);
void QGraphicsLayout_delete(QGraphicsLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
