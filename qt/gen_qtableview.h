#ifndef GEN_QTABLEVIEW_H
#define GEN_QTABLEVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QMetaObject* QTableView_MetaObject(QTableView* self);
void QTableView_Tr(char* s, char** _out, int* _out_Strlen);
void QTableView_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QTableView_SetModel(QTableView* self, QAbstractItemModel* model);
void QTableView_SetRootIndex(QTableView* self, QModelIndex* index);
void QTableView_SetSelectionModel(QTableView* self, QItemSelectionModel* selectionModel);
void QTableView_DoItemsLayout(QTableView* self);
QHeaderView* QTableView_HorizontalHeader(QTableView* self);
QHeaderView* QTableView_VerticalHeader(QTableView* self);
void QTableView_SetHorizontalHeader(QTableView* self, QHeaderView* header);
void QTableView_SetVerticalHeader(QTableView* self, QHeaderView* header);
int QTableView_RowViewportPosition(QTableView* self, int row);
int QTableView_RowAt(QTableView* self, int y);
void QTableView_SetRowHeight(QTableView* self, int row, int height);
int QTableView_RowHeight(QTableView* self, int row);
int QTableView_ColumnViewportPosition(QTableView* self, int column);
int QTableView_ColumnAt(QTableView* self, int x);
void QTableView_SetColumnWidth(QTableView* self, int column, int width);
int QTableView_ColumnWidth(QTableView* self, int column);
bool QTableView_IsRowHidden(QTableView* self, int row);
void QTableView_SetRowHidden(QTableView* self, int row, bool hide);
bool QTableView_IsColumnHidden(QTableView* self, int column);
void QTableView_SetColumnHidden(QTableView* self, int column, bool hide);
void QTableView_SetSortingEnabled(QTableView* self, bool enable);
bool QTableView_IsSortingEnabled(QTableView* self);
bool QTableView_ShowGrid(QTableView* self);
void QTableView_SetWordWrap(QTableView* self, bool on);
bool QTableView_WordWrap(QTableView* self);
void QTableView_SetCornerButtonEnabled(QTableView* self, bool enable);
bool QTableView_IsCornerButtonEnabled(QTableView* self);
QRect* QTableView_VisualRect(QTableView* self, QModelIndex* index);
QModelIndex* QTableView_IndexAt(QTableView* self, QPoint* p);
void QTableView_SetSpan(QTableView* self, int row, int column, int rowSpan, int columnSpan);
int QTableView_RowSpan(QTableView* self, int row, int column);
int QTableView_ColumnSpan(QTableView* self, int row, int column);
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
void QTableView_SortByColumn(QTableView* self, int column);
void QTableView_SetShowGrid(QTableView* self, bool show);
void QTableView_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QTableView_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTableView_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QTableView_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTableView_Delete(QTableView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
