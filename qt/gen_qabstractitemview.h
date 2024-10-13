#ifndef GEN_QABSTRACTITEMVIEW_H
#define GEN_QABSTRACTITEMVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemDelegate;
class QAbstractItemModel;
class QAbstractItemView;
class QItemSelectionModel;
class QMetaObject;
class QModelIndex;
class QPoint;
class QRect;
class QSize;
class QVariant;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QMetaObject* QAbstractItemView_MetaObject(const QAbstractItemView* self);
void* QAbstractItemView_Metacast(QAbstractItemView* self, const char* param1);
struct miqt_string* QAbstractItemView_Tr(const char* s);
struct miqt_string* QAbstractItemView_TrUtf8(const char* s);
void QAbstractItemView_SetModel(QAbstractItemView* self, QAbstractItemModel* model);
QAbstractItemModel* QAbstractItemView_Model(const QAbstractItemView* self);
void QAbstractItemView_SetSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel);
QItemSelectionModel* QAbstractItemView_SelectionModel(const QAbstractItemView* self);
void QAbstractItemView_SetItemDelegate(QAbstractItemView* self, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QAbstractItemView_ItemDelegate(const QAbstractItemView* self);
void QAbstractItemView_SetSelectionMode(QAbstractItemView* self, int mode);
int QAbstractItemView_SelectionMode(const QAbstractItemView* self);
void QAbstractItemView_SetSelectionBehavior(QAbstractItemView* self, int behavior);
int QAbstractItemView_SelectionBehavior(const QAbstractItemView* self);
QModelIndex* QAbstractItemView_CurrentIndex(const QAbstractItemView* self);
QModelIndex* QAbstractItemView_RootIndex(const QAbstractItemView* self);
void QAbstractItemView_SetEditTriggers(QAbstractItemView* self, int triggers);
int QAbstractItemView_EditTriggers(const QAbstractItemView* self);
void QAbstractItemView_SetVerticalScrollMode(QAbstractItemView* self, int mode);
int QAbstractItemView_VerticalScrollMode(const QAbstractItemView* self);
void QAbstractItemView_ResetVerticalScrollMode(QAbstractItemView* self);
void QAbstractItemView_SetHorizontalScrollMode(QAbstractItemView* self, int mode);
int QAbstractItemView_HorizontalScrollMode(const QAbstractItemView* self);
void QAbstractItemView_ResetHorizontalScrollMode(QAbstractItemView* self);
void QAbstractItemView_SetAutoScroll(QAbstractItemView* self, bool enable);
bool QAbstractItemView_HasAutoScroll(const QAbstractItemView* self);
void QAbstractItemView_SetAutoScrollMargin(QAbstractItemView* self, int margin);
int QAbstractItemView_AutoScrollMargin(const QAbstractItemView* self);
void QAbstractItemView_SetTabKeyNavigation(QAbstractItemView* self, bool enable);
bool QAbstractItemView_TabKeyNavigation(const QAbstractItemView* self);
void QAbstractItemView_SetDropIndicatorShown(QAbstractItemView* self, bool enable);
bool QAbstractItemView_ShowDropIndicator(const QAbstractItemView* self);
void QAbstractItemView_SetDragEnabled(QAbstractItemView* self, bool enable);
bool QAbstractItemView_DragEnabled(const QAbstractItemView* self);
void QAbstractItemView_SetDragDropOverwriteMode(QAbstractItemView* self, bool overwrite);
bool QAbstractItemView_DragDropOverwriteMode(const QAbstractItemView* self);
void QAbstractItemView_SetDragDropMode(QAbstractItemView* self, int behavior);
int QAbstractItemView_DragDropMode(const QAbstractItemView* self);
void QAbstractItemView_SetDefaultDropAction(QAbstractItemView* self, int dropAction);
int QAbstractItemView_DefaultDropAction(const QAbstractItemView* self);
void QAbstractItemView_SetAlternatingRowColors(QAbstractItemView* self, bool enable);
bool QAbstractItemView_AlternatingRowColors(const QAbstractItemView* self);
void QAbstractItemView_SetIconSize(QAbstractItemView* self, QSize* size);
QSize* QAbstractItemView_IconSize(const QAbstractItemView* self);
void QAbstractItemView_SetTextElideMode(QAbstractItemView* self, int mode);
int QAbstractItemView_TextElideMode(const QAbstractItemView* self);
void QAbstractItemView_KeyboardSearch(QAbstractItemView* self, struct miqt_string* search);
QRect* QAbstractItemView_VisualRect(const QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_ScrollTo(QAbstractItemView* self, QModelIndex* index);
QModelIndex* QAbstractItemView_IndexAt(const QAbstractItemView* self, QPoint* point);
QSize* QAbstractItemView_SizeHintForIndex(const QAbstractItemView* self, QModelIndex* index);
int QAbstractItemView_SizeHintForRow(const QAbstractItemView* self, int row);
int QAbstractItemView_SizeHintForColumn(const QAbstractItemView* self, int column);
void QAbstractItemView_OpenPersistentEditor(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_ClosePersistentEditor(QAbstractItemView* self, QModelIndex* index);
bool QAbstractItemView_IsPersistentEditorOpen(const QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_SetIndexWidget(QAbstractItemView* self, QModelIndex* index, QWidget* widget);
QWidget* QAbstractItemView_IndexWidget(const QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_SetItemDelegateForRow(QAbstractItemView* self, int row, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QAbstractItemView_ItemDelegateForRow(const QAbstractItemView* self, int row);
void QAbstractItemView_SetItemDelegateForColumn(QAbstractItemView* self, int column, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QAbstractItemView_ItemDelegateForColumn(const QAbstractItemView* self, int column);
QAbstractItemDelegate* QAbstractItemView_ItemDelegateWithIndex(const QAbstractItemView* self, QModelIndex* index);
QVariant* QAbstractItemView_InputMethodQuery(const QAbstractItemView* self, int query);
void QAbstractItemView_Reset(QAbstractItemView* self);
void QAbstractItemView_SetRootIndex(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_DoItemsLayout(QAbstractItemView* self);
void QAbstractItemView_SelectAll(QAbstractItemView* self);
void QAbstractItemView_Edit(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_ClearSelection(QAbstractItemView* self);
void QAbstractItemView_SetCurrentIndex(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_ScrollToTop(QAbstractItemView* self);
void QAbstractItemView_ScrollToBottom(QAbstractItemView* self);
void QAbstractItemView_Update(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_Pressed(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_Pressed(QAbstractItemView* self, intptr_t slot);
void QAbstractItemView_Clicked(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_Clicked(QAbstractItemView* self, intptr_t slot);
void QAbstractItemView_DoubleClicked(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_DoubleClicked(QAbstractItemView* self, intptr_t slot);
void QAbstractItemView_Activated(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_Activated(QAbstractItemView* self, intptr_t slot);
void QAbstractItemView_Entered(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_Entered(QAbstractItemView* self, intptr_t slot);
void QAbstractItemView_ViewportEntered(QAbstractItemView* self);
void QAbstractItemView_connect_ViewportEntered(QAbstractItemView* self, intptr_t slot);
void QAbstractItemView_IconSizeChanged(QAbstractItemView* self, QSize* size);
void QAbstractItemView_connect_IconSizeChanged(QAbstractItemView* self, intptr_t slot);
struct miqt_string* QAbstractItemView_Tr2(const char* s, const char* c);
struct miqt_string* QAbstractItemView_Tr3(const char* s, const char* c, int n);
struct miqt_string* QAbstractItemView_TrUtf82(const char* s, const char* c);
struct miqt_string* QAbstractItemView_TrUtf83(const char* s, const char* c, int n);
void QAbstractItemView_ScrollTo2(QAbstractItemView* self, QModelIndex* index, int hint);
void QAbstractItemView_Delete(QAbstractItemView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
