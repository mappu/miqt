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
void QGraphicsLinearLayout_setOrientation(QGraphicsLinearLayout* self, int orientation);
int QGraphicsLinearLayout_orientation(const QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_addItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_addStretch(QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_insertItem(QGraphicsLinearLayout* self, int index, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_insertStretch(QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_removeItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_removeAt(QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_setSpacing(QGraphicsLinearLayout* self, double spacing);
double QGraphicsLinearLayout_spacing(const QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_setItemSpacing(QGraphicsLinearLayout* self, int index, double spacing);
double QGraphicsLinearLayout_itemSpacing(const QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_setStretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int stretch);
int QGraphicsLinearLayout_stretchFactor(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_setAlignment(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int alignment);
int QGraphicsLinearLayout_alignment(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_setGeometry(QGraphicsLinearLayout* self, QRectF* rect);
int QGraphicsLinearLayout_count(const QGraphicsLinearLayout* self);
QGraphicsLayoutItem* QGraphicsLinearLayout_itemAt(const QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_invalidate(QGraphicsLinearLayout* self);
QSizeF* QGraphicsLinearLayout_sizeHint(const QGraphicsLinearLayout* self, int which, QSizeF* constraint);
void QGraphicsLinearLayout_dump(const QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_addStretch1(QGraphicsLinearLayout* self, int stretch);
void QGraphicsLinearLayout_insertStretch2(QGraphicsLinearLayout* self, int index, int stretch);
void QGraphicsLinearLayout_dump1(const QGraphicsLinearLayout* self, int indent);
bool QGraphicsLinearLayout_override_virtual_removeAt(void* self, intptr_t slot);
void QGraphicsLinearLayout_virtualbase_removeAt(void* self, int index);
bool QGraphicsLinearLayout_override_virtual_setGeometry(void* self, intptr_t slot);
void QGraphicsLinearLayout_virtualbase_setGeometry(void* self, QRectF* rect);
bool QGraphicsLinearLayout_override_virtual_count(void* self, intptr_t slot);
int QGraphicsLinearLayout_virtualbase_count(const void* self);
bool QGraphicsLinearLayout_override_virtual_itemAt(void* self, intptr_t slot);
QGraphicsLayoutItem* QGraphicsLinearLayout_virtualbase_itemAt(const void* self, int index);
bool QGraphicsLinearLayout_override_virtual_invalidate(void* self, intptr_t slot);
void QGraphicsLinearLayout_virtualbase_invalidate(void* self);
bool QGraphicsLinearLayout_override_virtual_sizeHint(void* self, intptr_t slot);
QSizeF* QGraphicsLinearLayout_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint);
bool QGraphicsLinearLayout_override_virtual_getContentsMargins(void* self, intptr_t slot);
void QGraphicsLinearLayout_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);
bool QGraphicsLinearLayout_override_virtual_updateGeometry(void* self, intptr_t slot);
void QGraphicsLinearLayout_virtualbase_updateGeometry(void* self);
bool QGraphicsLinearLayout_override_virtual_widgetEvent(void* self, intptr_t slot);
void QGraphicsLinearLayout_virtualbase_widgetEvent(void* self, QEvent* e);
bool QGraphicsLinearLayout_override_virtual_isEmpty(void* self, intptr_t slot);
bool QGraphicsLinearLayout_virtualbase_isEmpty(const void* self);
void QGraphicsLinearLayout_delete(QGraphicsLinearLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
