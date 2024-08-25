#ifndef GEN_QGRAPHICSGRIDLAYOUT_H
#define GEN_QGRAPHICSGRIDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGraphicsGridLayout;
class QGraphicsLayoutItem;
class QRectF;
#else
typedef struct QGraphicsGridLayout QGraphicsGridLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QRectF QRectF;
#endif

QGraphicsGridLayout* QGraphicsGridLayout_new();
QGraphicsGridLayout* QGraphicsGridLayout_new2(QGraphicsLayoutItem* parent);
void QGraphicsGridLayout_SetHorizontalSpacing(QGraphicsGridLayout* self, double spacing);
double QGraphicsGridLayout_HorizontalSpacing(QGraphicsGridLayout* self);
void QGraphicsGridLayout_SetVerticalSpacing(QGraphicsGridLayout* self, double spacing);
double QGraphicsGridLayout_VerticalSpacing(QGraphicsGridLayout* self);
void QGraphicsGridLayout_SetSpacing(QGraphicsGridLayout* self, double spacing);
void QGraphicsGridLayout_SetRowSpacing(QGraphicsGridLayout* self, int row, double spacing);
double QGraphicsGridLayout_RowSpacing(QGraphicsGridLayout* self, int row);
void QGraphicsGridLayout_SetColumnSpacing(QGraphicsGridLayout* self, int column, double spacing);
double QGraphicsGridLayout_ColumnSpacing(QGraphicsGridLayout* self, int column);
void QGraphicsGridLayout_SetRowStretchFactor(QGraphicsGridLayout* self, int row, int stretch);
int QGraphicsGridLayout_RowStretchFactor(QGraphicsGridLayout* self, int row);
void QGraphicsGridLayout_SetColumnStretchFactor(QGraphicsGridLayout* self, int column, int stretch);
int QGraphicsGridLayout_ColumnStretchFactor(QGraphicsGridLayout* self, int column);
void QGraphicsGridLayout_SetRowMinimumHeight(QGraphicsGridLayout* self, int row, double height);
double QGraphicsGridLayout_RowMinimumHeight(QGraphicsGridLayout* self, int row);
void QGraphicsGridLayout_SetRowPreferredHeight(QGraphicsGridLayout* self, int row, double height);
double QGraphicsGridLayout_RowPreferredHeight(QGraphicsGridLayout* self, int row);
void QGraphicsGridLayout_SetRowMaximumHeight(QGraphicsGridLayout* self, int row, double height);
double QGraphicsGridLayout_RowMaximumHeight(QGraphicsGridLayout* self, int row);
void QGraphicsGridLayout_SetRowFixedHeight(QGraphicsGridLayout* self, int row, double height);
void QGraphicsGridLayout_SetColumnMinimumWidth(QGraphicsGridLayout* self, int column, double width);
double QGraphicsGridLayout_ColumnMinimumWidth(QGraphicsGridLayout* self, int column);
void QGraphicsGridLayout_SetColumnPreferredWidth(QGraphicsGridLayout* self, int column, double width);
double QGraphicsGridLayout_ColumnPreferredWidth(QGraphicsGridLayout* self, int column);
void QGraphicsGridLayout_SetColumnMaximumWidth(QGraphicsGridLayout* self, int column, double width);
double QGraphicsGridLayout_ColumnMaximumWidth(QGraphicsGridLayout* self, int column);
void QGraphicsGridLayout_SetColumnFixedWidth(QGraphicsGridLayout* self, int column, double width);
int QGraphicsGridLayout_RowCount(QGraphicsGridLayout* self);
int QGraphicsGridLayout_ColumnCount(QGraphicsGridLayout* self);
QGraphicsLayoutItem* QGraphicsGridLayout_ItemAt(QGraphicsGridLayout* self, int row, int column);
int QGraphicsGridLayout_Count(QGraphicsGridLayout* self);
QGraphicsLayoutItem* QGraphicsGridLayout_ItemAtWithIndex(QGraphicsGridLayout* self, int index);
void QGraphicsGridLayout_RemoveAt(QGraphicsGridLayout* self, int index);
void QGraphicsGridLayout_RemoveItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item);
void QGraphicsGridLayout_Invalidate(QGraphicsGridLayout* self);
void QGraphicsGridLayout_SetGeometry(QGraphicsGridLayout* self, QRectF* rect);
void QGraphicsGridLayout_Delete(QGraphicsGridLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
