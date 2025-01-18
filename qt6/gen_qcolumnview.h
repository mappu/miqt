#pragma once
#ifndef MIQT_QT6_GEN_QCOLUMNVIEW_H
#define MIQT_QT6_GEN_QCOLUMNVIEW_H

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
class QColumnView;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QInputMethodEvent;
class QItemSelection;
class QItemSelectionModel;
class QKeyEvent;
class QMetaObject;
class QModelIndex;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPoint;
class QRect;
class QRegion;
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
typedef struct QColumnView QColumnView;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QColumnView* QColumnView_new(QWidget* parent);
QColumnView* QColumnView_new2();
void QColumnView_virtbase(QColumnView* src, QAbstractItemView** outptr_QAbstractItemView);
QMetaObject* QColumnView_MetaObject(const QColumnView* self);
void* QColumnView_Metacast(QColumnView* self, const char* param1);
struct miqt_string QColumnView_Tr(const char* s);
void QColumnView_UpdatePreviewWidget(QColumnView* self, QModelIndex* index);
void QColumnView_connect_UpdatePreviewWidget(QColumnView* self, intptr_t slot);
QModelIndex* QColumnView_IndexAt(const QColumnView* self, QPoint* point);
void QColumnView_ScrollTo(QColumnView* self, QModelIndex* index, int hint);
QSize* QColumnView_SizeHint(const QColumnView* self);
QRect* QColumnView_VisualRect(const QColumnView* self, QModelIndex* index);
void QColumnView_SetModel(QColumnView* self, QAbstractItemModel* model);
void QColumnView_SetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel);
void QColumnView_SetRootIndex(QColumnView* self, QModelIndex* index);
void QColumnView_SelectAll(QColumnView* self);
void QColumnView_SetResizeGripsVisible(QColumnView* self, bool visible);
bool QColumnView_ResizeGripsVisible(const QColumnView* self);
QWidget* QColumnView_PreviewWidget(const QColumnView* self);
void QColumnView_SetPreviewWidget(QColumnView* self, QWidget* widget);
void QColumnView_SetColumnWidths(QColumnView* self, struct miqt_array /* of int */  list);
struct miqt_array /* of int */  QColumnView_ColumnWidths(const QColumnView* self);
bool QColumnView_IsIndexHidden(const QColumnView* self, QModelIndex* index);
QModelIndex* QColumnView_MoveCursor(QColumnView* self, int cursorAction, int modifiers);
void QColumnView_ResizeEvent(QColumnView* self, QResizeEvent* event);
void QColumnView_SetSelection(QColumnView* self, QRect* rect, int command);
QRegion* QColumnView_VisualRegionForSelection(const QColumnView* self, QItemSelection* selection);
int QColumnView_HorizontalOffset(const QColumnView* self);
int QColumnView_VerticalOffset(const QColumnView* self);
void QColumnView_RowsInserted(QColumnView* self, QModelIndex* parent, int start, int end);
void QColumnView_CurrentChanged(QColumnView* self, QModelIndex* current, QModelIndex* previous);
void QColumnView_ScrollContentsBy(QColumnView* self, int dx, int dy);
QAbstractItemView* QColumnView_CreateColumn(QColumnView* self, QModelIndex* rootIndex);
struct miqt_string QColumnView_Tr2(const char* s, const char* c);
struct miqt_string QColumnView_Tr3(const char* s, const char* c, int n);
bool QColumnView_override_virtual_IndexAt(void* self, intptr_t slot);
QModelIndex* QColumnView_virtualbase_IndexAt(const void* self, QPoint* point);
bool QColumnView_override_virtual_ScrollTo(void* self, intptr_t slot);
void QColumnView_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint);
bool QColumnView_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QColumnView_virtualbase_SizeHint(const void* self);
bool QColumnView_override_virtual_VisualRect(void* self, intptr_t slot);
QRect* QColumnView_virtualbase_VisualRect(const void* self, QModelIndex* index);
bool QColumnView_override_virtual_SetModel(void* self, intptr_t slot);
void QColumnView_virtualbase_SetModel(void* self, QAbstractItemModel* model);
bool QColumnView_override_virtual_SetSelectionModel(void* self, intptr_t slot);
void QColumnView_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel);
bool QColumnView_override_virtual_SetRootIndex(void* self, intptr_t slot);
void QColumnView_virtualbase_SetRootIndex(void* self, QModelIndex* index);
bool QColumnView_override_virtual_SelectAll(void* self, intptr_t slot);
void QColumnView_virtualbase_SelectAll(void* self);
bool QColumnView_override_virtual_IsIndexHidden(void* self, intptr_t slot);
bool QColumnView_virtualbase_IsIndexHidden(const void* self, QModelIndex* index);
bool QColumnView_override_virtual_MoveCursor(void* self, intptr_t slot);
QModelIndex* QColumnView_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers);
bool QColumnView_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QColumnView_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QColumnView_override_virtual_SetSelection(void* self, intptr_t slot);
void QColumnView_virtualbase_SetSelection(void* self, QRect* rect, int command);
bool QColumnView_override_virtual_VisualRegionForSelection(void* self, intptr_t slot);
QRegion* QColumnView_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection);
bool QColumnView_override_virtual_HorizontalOffset(void* self, intptr_t slot);
int QColumnView_virtualbase_HorizontalOffset(const void* self);
bool QColumnView_override_virtual_VerticalOffset(void* self, intptr_t slot);
int QColumnView_virtualbase_VerticalOffset(const void* self);
bool QColumnView_override_virtual_RowsInserted(void* self, intptr_t slot);
void QColumnView_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end);
bool QColumnView_override_virtual_CurrentChanged(void* self, intptr_t slot);
void QColumnView_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous);
bool QColumnView_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QColumnView_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
bool QColumnView_override_virtual_CreateColumn(void* self, intptr_t slot);
QAbstractItemView* QColumnView_virtualbase_CreateColumn(void* self, QModelIndex* rootIndex);
bool QColumnView_override_virtual_KeyboardSearch(void* self, intptr_t slot);
void QColumnView_virtualbase_KeyboardSearch(void* self, struct miqt_string search);
bool QColumnView_override_virtual_SizeHintForRow(void* self, intptr_t slot);
int QColumnView_virtualbase_SizeHintForRow(const void* self, int row);
bool QColumnView_override_virtual_SizeHintForColumn(void* self, intptr_t slot);
int QColumnView_virtualbase_SizeHintForColumn(const void* self, int column);
bool QColumnView_override_virtual_ItemDelegateForIndex(void* self, intptr_t slot);
QAbstractItemDelegate* QColumnView_virtualbase_ItemDelegateForIndex(const void* self, QModelIndex* index);
bool QColumnView_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QColumnView_virtualbase_InputMethodQuery(const void* self, int query);
bool QColumnView_override_virtual_Reset(void* self, intptr_t slot);
void QColumnView_virtualbase_Reset(void* self);
bool QColumnView_override_virtual_DoItemsLayout(void* self, intptr_t slot);
void QColumnView_virtualbase_DoItemsLayout(void* self);
bool QColumnView_override_virtual_DataChanged(void* self, intptr_t slot);
void QColumnView_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
bool QColumnView_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot);
void QColumnView_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);
bool QColumnView_override_virtual_SelectionChanged(void* self, intptr_t slot);
void QColumnView_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);
bool QColumnView_override_virtual_UpdateEditorData(void* self, intptr_t slot);
void QColumnView_virtualbase_UpdateEditorData(void* self);
bool QColumnView_override_virtual_UpdateEditorGeometries(void* self, intptr_t slot);
void QColumnView_virtualbase_UpdateEditorGeometries(void* self);
bool QColumnView_override_virtual_UpdateGeometries(void* self, intptr_t slot);
void QColumnView_virtualbase_UpdateGeometries(void* self);
bool QColumnView_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot);
void QColumnView_virtualbase_VerticalScrollbarAction(void* self, int action);
bool QColumnView_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot);
void QColumnView_virtualbase_HorizontalScrollbarAction(void* self, int action);
bool QColumnView_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot);
void QColumnView_virtualbase_VerticalScrollbarValueChanged(void* self, int value);
bool QColumnView_override_virtual_HorizontalScrollbarValueChanged(void* self, intptr_t slot);
void QColumnView_virtualbase_HorizontalScrollbarValueChanged(void* self, int value);
bool QColumnView_override_virtual_CloseEditor(void* self, intptr_t slot);
void QColumnView_virtualbase_CloseEditor(void* self, QWidget* editor, int hint);
bool QColumnView_override_virtual_CommitData(void* self, intptr_t slot);
void QColumnView_virtualbase_CommitData(void* self, QWidget* editor);
bool QColumnView_override_virtual_EditorDestroyed(void* self, intptr_t slot);
void QColumnView_virtualbase_EditorDestroyed(void* self, QObject* editor);
bool QColumnView_override_virtual_SelectedIndexes(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QColumnView_virtualbase_SelectedIndexes(const void* self);
bool QColumnView_override_virtual_Edit2(void* self, intptr_t slot);
bool QColumnView_virtualbase_Edit2(void* self, QModelIndex* index, int trigger, QEvent* event);
bool QColumnView_override_virtual_SelectionCommand(void* self, intptr_t slot);
int QColumnView_virtualbase_SelectionCommand(const void* self, QModelIndex* index, QEvent* event);
bool QColumnView_override_virtual_StartDrag(void* self, intptr_t slot);
void QColumnView_virtualbase_StartDrag(void* self, int supportedActions);
bool QColumnView_override_virtual_InitViewItemOption(void* self, intptr_t slot);
void QColumnView_virtualbase_InitViewItemOption(const void* self, QStyleOptionViewItem* option);
bool QColumnView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QColumnView_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QColumnView_override_virtual_Event(void* self, intptr_t slot);
bool QColumnView_virtualbase_Event(void* self, QEvent* event);
bool QColumnView_override_virtual_ViewportEvent(void* self, intptr_t slot);
bool QColumnView_virtualbase_ViewportEvent(void* self, QEvent* event);
bool QColumnView_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QColumnView_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QColumnView_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QColumnView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QColumnView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QColumnView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QColumnView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QColumnView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QColumnView_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QColumnView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QColumnView_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QColumnView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QColumnView_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QColumnView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QColumnView_override_virtual_DropEvent(void* self, intptr_t slot);
void QColumnView_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QColumnView_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QColumnView_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QColumnView_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QColumnView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QColumnView_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QColumnView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QColumnView_override_virtual_TimerEvent(void* self, intptr_t slot);
void QColumnView_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QColumnView_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QColumnView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event);
bool QColumnView_override_virtual_EventFilter(void* self, intptr_t slot);
bool QColumnView_virtualbase_EventFilter(void* self, QObject* object, QEvent* event);
bool QColumnView_override_virtual_ViewportSizeHint(void* self, intptr_t slot);
QSize* QColumnView_virtualbase_ViewportSizeHint(const void* self);
void QColumnView_Delete(QColumnView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
