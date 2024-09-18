#ifndef GEN_QGRAPHICSLAYOUTITEM_H
#define GEN_QGRAPHICSLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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

void QGraphicsLayoutItem_SetSizePolicy(QGraphicsLayoutItem* self, QSizePolicy* policy);
void QGraphicsLayoutItem_SetSizePolicy2(QGraphicsLayoutItem* self, int hPolicy, int vPolicy);
QSizePolicy* QGraphicsLayoutItem_SizePolicy(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetMinimumSize(QGraphicsLayoutItem* self, QSizeF* size);
void QGraphicsLayoutItem_SetMinimumSize2(QGraphicsLayoutItem* self, double w, double h);
QSizeF* QGraphicsLayoutItem_MinimumSize(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetMinimumWidth(QGraphicsLayoutItem* self, double width);
double QGraphicsLayoutItem_MinimumWidth(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetMinimumHeight(QGraphicsLayoutItem* self, double height);
double QGraphicsLayoutItem_MinimumHeight(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetPreferredSize(QGraphicsLayoutItem* self, QSizeF* size);
void QGraphicsLayoutItem_SetPreferredSize2(QGraphicsLayoutItem* self, double w, double h);
QSizeF* QGraphicsLayoutItem_PreferredSize(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetPreferredWidth(QGraphicsLayoutItem* self, double width);
double QGraphicsLayoutItem_PreferredWidth(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetPreferredHeight(QGraphicsLayoutItem* self, double height);
double QGraphicsLayoutItem_PreferredHeight(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetMaximumSize(QGraphicsLayoutItem* self, QSizeF* size);
void QGraphicsLayoutItem_SetMaximumSize2(QGraphicsLayoutItem* self, double w, double h);
QSizeF* QGraphicsLayoutItem_MaximumSize(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetMaximumWidth(QGraphicsLayoutItem* self, double width);
double QGraphicsLayoutItem_MaximumWidth(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetMaximumHeight(QGraphicsLayoutItem* self, double height);
double QGraphicsLayoutItem_MaximumHeight(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetGeometry(QGraphicsLayoutItem* self, QRectF* rect);
QRectF* QGraphicsLayoutItem_Geometry(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_GetContentsMargins(const QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom);
QRectF* QGraphicsLayoutItem_ContentsRect(const QGraphicsLayoutItem* self);
QSizeF* QGraphicsLayoutItem_EffectiveSizeHint(const QGraphicsLayoutItem* self, int which);
void QGraphicsLayoutItem_UpdateGeometry(QGraphicsLayoutItem* self);
QGraphicsLayoutItem* QGraphicsLayoutItem_ParentLayoutItem(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetParentLayoutItem(QGraphicsLayoutItem* self, QGraphicsLayoutItem* parent);
bool QGraphicsLayoutItem_IsLayout(const QGraphicsLayoutItem* self);
QGraphicsItem* QGraphicsLayoutItem_GraphicsItem(const QGraphicsLayoutItem* self);
bool QGraphicsLayoutItem_OwnedByLayout(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetSizePolicy3(QGraphicsLayoutItem* self, int hPolicy, int vPolicy, int controlType);
QSizeF* QGraphicsLayoutItem_EffectiveSizeHint2(const QGraphicsLayoutItem* self, int which, QSizeF* constraint);
void QGraphicsLayoutItem_Delete(QGraphicsLayoutItem* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
