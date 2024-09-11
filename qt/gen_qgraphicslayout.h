#ifndef GEN_QGRAPHICSLAYOUT_H
#define GEN_QGRAPHICSLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
class QGraphicsLayout;
class QGraphicsLayoutItem;
#else
typedef struct QEvent QEvent;
typedef struct QGraphicsLayout QGraphicsLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
#endif

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
void QGraphicsLayout_Delete(QGraphicsLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
