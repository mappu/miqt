#pragma once
#ifndef MIQT_QT_GEN_QGRAPHICSLAYOUTITEM_H
#define MIQT_QT_GEN_QGRAPHICSLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGraphicsItem;
class QGraphicsLayoutItem;
class QRectF;
class QSizeF;
class QSizePolicy;
#else
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QSizePolicy QSizePolicy;
#endif

QGraphicsLayoutItem* QGraphicsLayoutItem_new();
QGraphicsLayoutItem* QGraphicsLayoutItem_new2(QGraphicsLayoutItem* parent);
QGraphicsLayoutItem* QGraphicsLayoutItem_new3(QGraphicsLayoutItem* parent, bool isLayout);
void QGraphicsLayoutItem_setSizePolicy(QGraphicsLayoutItem* self, QSizePolicy* policy);
void QGraphicsLayoutItem_setSizePolicy2(QGraphicsLayoutItem* self, int hPolicy, int vPolicy);
QSizePolicy* QGraphicsLayoutItem_sizePolicy(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_setMinimumSize(QGraphicsLayoutItem* self, struct miqt_qsizef size);
void QGraphicsLayoutItem_setMinimumSize2(QGraphicsLayoutItem* self, double w, double h);
struct miqt_qsizef QGraphicsLayoutItem_minimumSize(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_setMinimumWidth(QGraphicsLayoutItem* self, double width);
double QGraphicsLayoutItem_minimumWidth(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_setMinimumHeight(QGraphicsLayoutItem* self, double height);
double QGraphicsLayoutItem_minimumHeight(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_setPreferredSize(QGraphicsLayoutItem* self, struct miqt_qsizef size);
void QGraphicsLayoutItem_setPreferredSize2(QGraphicsLayoutItem* self, double w, double h);
struct miqt_qsizef QGraphicsLayoutItem_preferredSize(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_setPreferredWidth(QGraphicsLayoutItem* self, double width);
double QGraphicsLayoutItem_preferredWidth(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_setPreferredHeight(QGraphicsLayoutItem* self, double height);
double QGraphicsLayoutItem_preferredHeight(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_setMaximumSize(QGraphicsLayoutItem* self, struct miqt_qsizef size);
void QGraphicsLayoutItem_setMaximumSize2(QGraphicsLayoutItem* self, double w, double h);
struct miqt_qsizef QGraphicsLayoutItem_maximumSize(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_setMaximumWidth(QGraphicsLayoutItem* self, double width);
double QGraphicsLayoutItem_maximumWidth(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_setMaximumHeight(QGraphicsLayoutItem* self, double height);
double QGraphicsLayoutItem_maximumHeight(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_setGeometry(QGraphicsLayoutItem* self, struct miqt_qrectf rect);
struct miqt_qrectf QGraphicsLayoutItem_geometry(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_getContentsMargins(const QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom);
struct miqt_qrectf QGraphicsLayoutItem_contentsRect(const QGraphicsLayoutItem* self);
struct miqt_qsizef QGraphicsLayoutItem_effectiveSizeHint(const QGraphicsLayoutItem* self, int which);
void QGraphicsLayoutItem_updateGeometry(QGraphicsLayoutItem* self);
QGraphicsLayoutItem* QGraphicsLayoutItem_parentLayoutItem(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_setParentLayoutItem(QGraphicsLayoutItem* self, QGraphicsLayoutItem* parent);
bool QGraphicsLayoutItem_isLayout(const QGraphicsLayoutItem* self);
QGraphicsItem* QGraphicsLayoutItem_graphicsItem(const QGraphicsLayoutItem* self);
bool QGraphicsLayoutItem_ownedByLayout(const QGraphicsLayoutItem* self);
struct miqt_qsizef QGraphicsLayoutItem_sizeHint(const QGraphicsLayoutItem* self, int which, struct miqt_qsizef constraint);
void QGraphicsLayoutItem_setSizePolicy3(QGraphicsLayoutItem* self, int hPolicy, int vPolicy, int controlType);
struct miqt_qsizef QGraphicsLayoutItem_effectiveSizeHint2(const QGraphicsLayoutItem* self, int which, struct miqt_qsizef constraint);

bool QGraphicsLayoutItem_override_virtual_setGeometry(void* self, intptr_t slot);
void QGraphicsLayoutItem_virtualbase_setGeometry(void* self, struct miqt_qrectf rect);
bool QGraphicsLayoutItem_override_virtual_getContentsMargins(void* self, intptr_t slot);
void QGraphicsLayoutItem_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);
bool QGraphicsLayoutItem_override_virtual_updateGeometry(void* self, intptr_t slot);
void QGraphicsLayoutItem_virtualbase_updateGeometry(void* self);
bool QGraphicsLayoutItem_override_virtual_sizeHint(void* self, intptr_t slot);
struct miqt_qsizef QGraphicsLayoutItem_virtualbase_sizeHint(const void* self, int which, struct miqt_qsizef constraint);

void QGraphicsLayoutItem_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
void QGraphicsLayoutItem_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);

void QGraphicsLayoutItem_delete(QGraphicsLayoutItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
