#ifndef GEN_QTREEVIEW_H
#define GEN_QTREEVIEW_H

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
class QTreeView;
class QWidget;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QHeaderView QHeaderView;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QTreeView QTreeView;
typedef struct QWidget QWidget;
#endif

QTreeView* QTreeView_new();
QTreeView* QTreeView_new2(QWidget* parent);
QMetaObject* QTreeView_MetaObject(const QTreeView* self);
void* QTreeView_Metacast(QTreeView* self, const char* param1);
struct miqt_string* QTreeView_Tr(const char* s);
struct miqt_string* QTreeView_TrUtf8(const char* s);
void QTreeView_SetModel(QTreeView* self, QAbstractItemModel* model);
void QTreeView_SetRootIndex(QTreeView* self, QModelIndex* index);
void QTreeView_SetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel);
QHeaderView* QTreeView_Header(const QTreeView* self);
void QTreeView_SetHeader(QTreeView* self, QHeaderView* header);
int QTreeView_AutoExpandDelay(const QTreeView* self);
void QTreeView_SetAutoExpandDelay(QTreeView* self, int delay);
int QTreeView_Indentation(const QTreeView* self);
void QTreeView_SetIndentation(QTreeView* self, int i);
void QTreeView_ResetIndentation(QTreeView* self);
bool QTreeView_RootIsDecorated(const QTreeView* self);
void QTreeView_SetRootIsDecorated(QTreeView* self, bool show);
bool QTreeView_UniformRowHeights(const QTreeView* self);
void QTreeView_SetUniformRowHeights(QTreeView* self, bool uniform);
bool QTreeView_ItemsExpandable(const QTreeView* self);
void QTreeView_SetItemsExpandable(QTreeView* self, bool enable);
bool QTreeView_ExpandsOnDoubleClick(const QTreeView* self);
void QTreeView_SetExpandsOnDoubleClick(QTreeView* self, bool enable);
int QTreeView_ColumnViewportPosition(const QTreeView* self, int column);
int QTreeView_ColumnWidth(const QTreeView* self, int column);
void QTreeView_SetColumnWidth(QTreeView* self, int column, int width);
int QTreeView_ColumnAt(const QTreeView* self, int x);
bool QTreeView_IsColumnHidden(const QTreeView* self, int column);
void QTreeView_SetColumnHidden(QTreeView* self, int column, bool hide);
bool QTreeView_IsHeaderHidden(const QTreeView* self);
void QTreeView_SetHeaderHidden(QTreeView* self, bool hide);
bool QTreeView_IsRowHidden(const QTreeView* self, int row, QModelIndex* parent);
void QTreeView_SetRowHidden(QTreeView* self, int row, QModelIndex* parent, bool hide);
bool QTreeView_IsFirstColumnSpanned(const QTreeView* self, int row, QModelIndex* parent);
void QTreeView_SetFirstColumnSpanned(QTreeView* self, int row, QModelIndex* parent, bool span);
bool QTreeView_IsExpanded(const QTreeView* self, QModelIndex* index);
void QTreeView_SetExpanded(QTreeView* self, QModelIndex* index, bool expand);
void QTreeView_SetSortingEnabled(QTreeView* self, bool enable);
bool QTreeView_IsSortingEnabled(const QTreeView* self);
void QTreeView_SetAnimated(QTreeView* self, bool enable);
bool QTreeView_IsAnimated(const QTreeView* self);
void QTreeView_SetAllColumnsShowFocus(QTreeView* self, bool enable);
bool QTreeView_AllColumnsShowFocus(const QTreeView* self);
void QTreeView_SetWordWrap(QTreeView* self, bool on);
bool QTreeView_WordWrap(const QTreeView* self);
void QTreeView_SetTreePosition(QTreeView* self, int logicalIndex);
int QTreeView_TreePosition(const QTreeView* self);
void QTreeView_KeyboardSearch(QTreeView* self, struct miqt_string* search);
QRect* QTreeView_VisualRect(const QTreeView* self, QModelIndex* index);
void QTreeView_ScrollTo(QTreeView* self, QModelIndex* index);
QModelIndex* QTreeView_IndexAt(const QTreeView* self, QPoint* p);
QModelIndex* QTreeView_IndexAbove(const QTreeView* self, QModelIndex* index);
QModelIndex* QTreeView_IndexBelow(const QTreeView* self, QModelIndex* index);
void QTreeView_DoItemsLayout(QTreeView* self);
void QTreeView_Reset(QTreeView* self);
void QTreeView_DataChanged(QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight);
void QTreeView_SelectAll(QTreeView* self);
void QTreeView_Expanded(QTreeView* self, QModelIndex* index);
void QTreeView_connect_Expanded(QTreeView* self, intptr_t slot);
void QTreeView_Collapsed(QTreeView* self, QModelIndex* index);
void QTreeView_connect_Collapsed(QTreeView* self, intptr_t slot);
void QTreeView_HideColumn(QTreeView* self, int column);
void QTreeView_ShowColumn(QTreeView* self, int column);
void QTreeView_Expand(QTreeView* self, QModelIndex* index);
void QTreeView_Collapse(QTreeView* self, QModelIndex* index);
void QTreeView_ResizeColumnToContents(QTreeView* self, int column);
void QTreeView_SortByColumn(QTreeView* self, int column);
void QTreeView_SortByColumn2(QTreeView* self, int column, int order);
void QTreeView_ExpandAll(QTreeView* self);
void QTreeView_ExpandRecursively(QTreeView* self, QModelIndex* index);
void QTreeView_CollapseAll(QTreeView* self);
void QTreeView_ExpandToDepth(QTreeView* self, int depth);
struct miqt_string* QTreeView_Tr2(const char* s, const char* c);
struct miqt_string* QTreeView_Tr3(const char* s, const char* c, int n);
struct miqt_string* QTreeView_TrUtf82(const char* s, const char* c);
struct miqt_string* QTreeView_TrUtf83(const char* s, const char* c, int n);
void QTreeView_ScrollTo2(QTreeView* self, QModelIndex* index, int hint);
void QTreeView_DataChanged3(QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array* /* of int */ roles);
void QTreeView_ExpandRecursively2(QTreeView* self, QModelIndex* index, int depth);
void QTreeView_Delete(QTreeView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
