#ifndef GEN_QTABLEVIEW_H
#define GEN_QTABLEVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QHeaderView;
class QItemSelectionModel;
class QMetaObject;
class QModelIndex;
class QPoint;
class QRect;
class QTableView;
class QWidget;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QHeaderView QHeaderView;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QTableView QTableView;
typedef struct QWidget QWidget;
#endif

QTableView* QTableView_new();
QTableView* QTableView_new2(QWidget* parent);
QMetaObject* QTableView_MetaObject(const QTableView* self);
void* QTableView_Metacast(QTableView* self, const char* param1);
struct miqt_string QTableView_Tr(const char* s);
void QTableView_SetModel(QTableView* self, QAbstractItemModel* model);
void QTableView_SetRootIndex(QTableView* self, QModelIndex* index);
void QTableView_SetSelectionModel(QTableView* self, QItemSelectionModel* selectionModel);
void QTableView_DoItemsLayout(QTableView* self);
QHeaderView* QTableView_HorizontalHeader(const QTableView* self);
QHeaderView* QTableView_VerticalHeader(const QTableView* self);
void QTableView_SetHorizontalHeader(QTableView* self, QHeaderView* header);
void QTableView_SetVerticalHeader(QTableView* self, QHeaderView* header);
int QTableView_RowViewportPosition(const QTableView* self, int row);
int QTableView_RowAt(const QTableView* self, int y);
void QTableView_SetRowHeight(QTableView* self, int row, int height);
int QTableView_RowHeight(const QTableView* self, int row);
int QTableView_ColumnViewportPosition(const QTableView* self, int column);
int QTableView_ColumnAt(const QTableView* self, int x);
void QTableView_SetColumnWidth(QTableView* self, int column, int width);
int QTableView_ColumnWidth(const QTableView* self, int column);
bool QTableView_IsRowHidden(const QTableView* self, int row);
void QTableView_SetRowHidden(QTableView* self, int row, bool hide);
bool QTableView_IsColumnHidden(const QTableView* self, int column);
void QTableView_SetColumnHidden(QTableView* self, int column, bool hide);
void QTableView_SetSortingEnabled(QTableView* self, bool enable);
bool QTableView_IsSortingEnabled(const QTableView* self);
bool QTableView_ShowGrid(const QTableView* self);
int QTableView_GridStyle(const QTableView* self);
void QTableView_SetGridStyle(QTableView* self, int style);
void QTableView_SetWordWrap(QTableView* self, bool on);
bool QTableView_WordWrap(const QTableView* self);
void QTableView_SetCornerButtonEnabled(QTableView* self, bool enable);
bool QTableView_IsCornerButtonEnabled(const QTableView* self);
QRect* QTableView_VisualRect(const QTableView* self, QModelIndex* index);
void QTableView_ScrollTo(QTableView* self, QModelIndex* index);
QModelIndex* QTableView_IndexAt(const QTableView* self, QPoint* p);
void QTableView_SetSpan(QTableView* self, int row, int column, int rowSpan, int columnSpan);
int QTableView_RowSpan(const QTableView* self, int row, int column);
int QTableView_ColumnSpan(const QTableView* self, int row, int column);
void QTableView_ClearSpans(QTableView* self);
void QTableView_SelectRow(QTableView* self, int row);
void QTableView_SelectColumn(QTableView* self, int column);
void QTableView_HideRow(QTableView* self, int row);
void QTableView_HideColumn(QTableView* self, int column);
void QTableView_ShowRow(QTableView* self, int row);
void QTableView_ShowColumn(QTableView* self, int column);
void QTableView_ResizeRowToContents(QTableView* self, int row);
void QTableView_ResizeRowsToContents(QTableView* self);
void QTableView_ResizeColumnToContents(QTableView* self, int column);
void QTableView_ResizeColumnsToContents(QTableView* self);
void QTableView_SortByColumn(QTableView* self, int column, int order);
void QTableView_SetShowGrid(QTableView* self, bool show);
struct miqt_string QTableView_Tr2(const char* s, const char* c);
struct miqt_string QTableView_Tr3(const char* s, const char* c, int n);
void QTableView_ScrollTo2(QTableView* self, QModelIndex* index, int hint);
void QTableView_Delete(QTableView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
