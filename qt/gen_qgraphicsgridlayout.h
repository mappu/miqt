#ifndef GEN_QGRAPHICSGRIDLAYOUT_H
#define GEN_QGRAPHICSGRIDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGraphicsGridLayout;
class QGraphicsLayoutItem;
class QRectF;
class QSizeF;
#else
typedef struct QGraphicsGridLayout QGraphicsGridLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
#endif

QGraphicsGridLayout* QGraphicsGridLayout_new();
QGraphicsGridLayout* QGraphicsGridLayout_new2(QGraphicsLayoutItem* parent);
void QGraphicsGridLayout_AddItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan);
void QGraphicsGridLayout_AddItem2(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column);
void QGraphicsGridLayout_SetHorizontalSpacing(QGraphicsGridLayout* self, double spacing);
double QGraphicsGridLayout_HorizontalSpacing(const QGraphicsGridLayout* self);
void QGraphicsGridLayout_SetVerticalSpacing(QGraphicsGridLayout* self, double spacing);
double QGraphicsGridLayout_VerticalSpacing(const QGraphicsGridLayout* self);
void QGraphicsGridLayout_SetSpacing(QGraphicsGridLayout* self, double spacing);
void QGraphicsGridLayout_SetRowSpacing(QGraphicsGridLayout* self, int row, double spacing);
double QGraphicsGridLayout_RowSpacing(const QGraphicsGridLayout* self, int row);
void QGraphicsGridLayout_SetColumnSpacing(QGraphicsGridLayout* self, int column, double spacing);
double QGraphicsGridLayout_ColumnSpacing(const QGraphicsGridLayout* self, int column);
void QGraphicsGridLayout_SetRowStretchFactor(QGraphicsGridLayout* self, int row, int stretch);
int QGraphicsGridLayout_RowStretchFactor(const QGraphicsGridLayout* self, int row);
void QGraphicsGridLayout_SetColumnStretchFactor(QGraphicsGridLayout* self, int column, int stretch);
int QGraphicsGridLayout_ColumnStretchFactor(const QGraphicsGridLayout* self, int column);
void QGraphicsGridLayout_SetRowMinimumHeight(QGraphicsGridLayout* self, int row, double height);
double QGraphicsGridLayout_RowMinimumHeight(const QGraphicsGridLayout* self, int row);
void QGraphicsGridLayout_SetRowPreferredHeight(QGraphicsGridLayout* self, int row, double height);
double QGraphicsGridLayout_RowPreferredHeight(const QGraphicsGridLayout* self, int row);
void QGraphicsGridLayout_SetRowMaximumHeight(QGraphicsGridLayout* self, int row, double height);
double QGraphicsGridLayout_RowMaximumHeight(const QGraphicsGridLayout* self, int row);
void QGraphicsGridLayout_SetRowFixedHeight(QGraphicsGridLayout* self, int row, double height);
void QGraphicsGridLayout_SetColumnMinimumWidth(QGraphicsGridLayout* self, int column, double width);
double QGraphicsGridLayout_ColumnMinimumWidth(const QGraphicsGridLayout* self, int column);
void QGraphicsGridLayout_SetColumnPreferredWidth(QGraphicsGridLayout* self, int column, double width);
double QGraphicsGridLayout_ColumnPreferredWidth(const QGraphicsGridLayout* self, int column);
void QGraphicsGridLayout_SetColumnMaximumWidth(QGraphicsGridLayout* self, int column, double width);
double QGraphicsGridLayout_ColumnMaximumWidth(const QGraphicsGridLayout* self, int column);
void QGraphicsGridLayout_SetColumnFixedWidth(QGraphicsGridLayout* self, int column, double width);
void QGraphicsGridLayout_SetRowAlignment(QGraphicsGridLayout* self, int row, int alignment);
int QGraphicsGridLayout_RowAlignment(const QGraphicsGridLayout* self, int row);
void QGraphicsGridLayout_SetColumnAlignment(QGraphicsGridLayout* self, int column, int alignment);
int QGraphicsGridLayout_ColumnAlignment(const QGraphicsGridLayout* self, int column);
void QGraphicsGridLayout_SetAlignment(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int alignment);
int QGraphicsGridLayout_Alignment(const QGraphicsGridLayout* self, QGraphicsLayoutItem* item);
int QGraphicsGridLayout_RowCount(const QGraphicsGridLayout* self);
int QGraphicsGridLayout_ColumnCount(const QGraphicsGridLayout* self);
QGraphicsLayoutItem* QGraphicsGridLayout_ItemAt(const QGraphicsGridLayout* self, int row, int column);
int QGraphicsGridLayout_Count(const QGraphicsGridLayout* self);
QGraphicsLayoutItem* QGraphicsGridLayout_ItemAtWithIndex(const QGraphicsGridLayout* self, int index);
void QGraphicsGridLayout_RemoveAt(QGraphicsGridLayout* self, int index);
void QGraphicsGridLayout_RemoveItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item);
void QGraphicsGridLayout_Invalidate(QGraphicsGridLayout* self);
void QGraphicsGridLayout_SetGeometry(QGraphicsGridLayout* self, QRectF* rect);
QSizeF* QGraphicsGridLayout_SizeHint(const QGraphicsGridLayout* self, int which);
void QGraphicsGridLayout_AddItem6(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int alignment);
void QGraphicsGridLayout_AddItem4(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int alignment);
QSizeF* QGraphicsGridLayout_SizeHint2(const QGraphicsGridLayout* self, int which, QSizeF* constraint);
void QGraphicsGridLayout_Delete(QGraphicsGridLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
