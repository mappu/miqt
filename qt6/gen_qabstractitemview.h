#pragma once
#ifndef MIQT_QT6_GEN_QABSTRACTITEMVIEW_H
#define MIQT_QT6_GEN_QABSTRACTITEMVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemDelegate;
class QAbstractItemModel;
class QAbstractItemView;
class QAbstractScrollArea;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QInputMethodEvent;
class QItemSelectionModel;
class QKeyEvent;
class QMetaObject;
class QModelIndex;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPoint;
class QRect;
class QResizeEvent;
class QSize;
class QStyleOptionViewItem;
class QTimerEvent;
class QVariant;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QMetaObject* QAbstractItemView_MetaObject(const QAbstractItemView* self);
void* QAbstractItemView_Metacast(QAbstractItemView* self, const char* param1);
struct miqt_string QAbstractItemView_Tr(const char* s);
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
void QAbstractItemView_KeyboardSearch(QAbstractItemView* self, struct miqt_string search);
QRect* QAbstractItemView_VisualRect(const QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_ScrollTo(QAbstractItemView* self, QModelIndex* index, int hint);
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
QAbstractItemDelegate* QAbstractItemView_ItemDelegateForIndex(const QAbstractItemView* self, QModelIndex* index);
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
void QAbstractItemView_DataChanged(QAbstractItemView* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
void QAbstractItemView_RowsInserted(QAbstractItemView* self, QModelIndex* parent, int start, int end);
void QAbstractItemView_RowsAboutToBeRemoved(QAbstractItemView* self, QModelIndex* parent, int start, int end);
void QAbstractItemView_CurrentChanged(QAbstractItemView* self, QModelIndex* current, QModelIndex* previous);
void QAbstractItemView_UpdateEditorData(QAbstractItemView* self);
void QAbstractItemView_UpdateEditorGeometries(QAbstractItemView* self);
void QAbstractItemView_UpdateGeometries(QAbstractItemView* self);
void QAbstractItemView_VerticalScrollbarAction(QAbstractItemView* self, int action);
void QAbstractItemView_HorizontalScrollbarAction(QAbstractItemView* self, int action);
void QAbstractItemView_VerticalScrollbarValueChanged(QAbstractItemView* self, int value);
void QAbstractItemView_HorizontalScrollbarValueChanged(QAbstractItemView* self, int value);
void QAbstractItemView_CloseEditor(QAbstractItemView* self, QWidget* editor, int hint);
void QAbstractItemView_CommitData(QAbstractItemView* self, QWidget* editor);
void QAbstractItemView_EditorDestroyed(QAbstractItemView* self, QObject* editor);
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
QModelIndex* QAbstractItemView_MoveCursor(QAbstractItemView* self, int cursorAction, int modifiers);
int QAbstractItemView_HorizontalOffset(const QAbstractItemView* self);
int QAbstractItemView_VerticalOffset(const QAbstractItemView* self);
bool QAbstractItemView_IsIndexHidden(const QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_SetSelection(QAbstractItemView* self, QRect* rect, int command);
struct miqt_array /* of QModelIndex* */  QAbstractItemView_SelectedIndexes(const QAbstractItemView* self);
bool QAbstractItemView_Edit2(QAbstractItemView* self, QModelIndex* index, int trigger, QEvent* event);
int QAbstractItemView_SelectionCommand(const QAbstractItemView* self, QModelIndex* index, QEvent* event);
void QAbstractItemView_StartDrag(QAbstractItemView* self, int supportedActions);
void QAbstractItemView_InitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option);
bool QAbstractItemView_FocusNextPrevChild(QAbstractItemView* self, bool next);
bool QAbstractItemView_Event(QAbstractItemView* self, QEvent* event);
bool QAbstractItemView_ViewportEvent(QAbstractItemView* self, QEvent* event);
void QAbstractItemView_MousePressEvent(QAbstractItemView* self, QMouseEvent* event);
void QAbstractItemView_MouseMoveEvent(QAbstractItemView* self, QMouseEvent* event);
void QAbstractItemView_MouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event);
void QAbstractItemView_MouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event);
void QAbstractItemView_DragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event);
void QAbstractItemView_DragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event);
void QAbstractItemView_DragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event);
void QAbstractItemView_DropEvent(QAbstractItemView* self, QDropEvent* event);
void QAbstractItemView_FocusInEvent(QAbstractItemView* self, QFocusEvent* event);
void QAbstractItemView_FocusOutEvent(QAbstractItemView* self, QFocusEvent* event);
void QAbstractItemView_KeyPressEvent(QAbstractItemView* self, QKeyEvent* event);
void QAbstractItemView_ResizeEvent(QAbstractItemView* self, QResizeEvent* event);
void QAbstractItemView_TimerEvent(QAbstractItemView* self, QTimerEvent* event);
void QAbstractItemView_InputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event);
bool QAbstractItemView_EventFilter(QAbstractItemView* self, QObject* object, QEvent* event);
QSize* QAbstractItemView_ViewportSizeHint(const QAbstractItemView* self);
struct miqt_string QAbstractItemView_Tr2(const char* s, const char* c);
struct miqt_string QAbstractItemView_Tr3(const char* s, const char* c, int n);
void QAbstractItemView_Delete(QAbstractItemView* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
