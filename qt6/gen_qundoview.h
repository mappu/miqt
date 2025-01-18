#pragma once
#ifndef MIQT_QT6_GEN_QUNDOVIEW_H
#define MIQT_QT6_GEN_QUNDOVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemView;
class QAbstractScrollArea;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFrame;
class QIcon;
class QItemSelection;
class QListView;
class QMetaObject;
class QModelIndex;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QPoint;
class QRect;
class QRegion;
class QResizeEvent;
class QSize;
class QStyleOptionViewItem;
class QTimerEvent;
class QUndoGroup;
class QUndoStack;
class QUndoView;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFrame QFrame;
typedef struct QIcon QIcon;
typedef struct QItemSelection QItemSelection;
typedef struct QListView QListView;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUndoGroup QUndoGroup;
typedef struct QUndoStack QUndoStack;
typedef struct QUndoView QUndoView;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QUndoView* QUndoView_new(QWidget* parent);
QUndoView* QUndoView_new2();
QUndoView* QUndoView_new3(QUndoStack* stack);
QUndoView* QUndoView_new4(QUndoGroup* group);
QUndoView* QUndoView_new5(QUndoStack* stack, QWidget* parent);
QUndoView* QUndoView_new6(QUndoGroup* group, QWidget* parent);
void QUndoView_virtbase(QUndoView* src, QListView** outptr_QListView);
QMetaObject* QUndoView_MetaObject(const QUndoView* self);
void* QUndoView_Metacast(QUndoView* self, const char* param1);
struct miqt_string QUndoView_Tr(const char* s);
QUndoStack* QUndoView_Stack(const QUndoView* self);
QUndoGroup* QUndoView_Group(const QUndoView* self);
void QUndoView_SetEmptyLabel(QUndoView* self, struct miqt_string label);
struct miqt_string QUndoView_EmptyLabel(const QUndoView* self);
void QUndoView_SetCleanIcon(QUndoView* self, QIcon* icon);
QIcon* QUndoView_CleanIcon(const QUndoView* self);
void QUndoView_SetStack(QUndoView* self, QUndoStack* stack);
void QUndoView_SetGroup(QUndoView* self, QUndoGroup* group);
struct miqt_string QUndoView_Tr2(const char* s, const char* c);
struct miqt_string QUndoView_Tr3(const char* s, const char* c, int n);
bool QUndoView_override_virtual_VisualRect(void* self, intptr_t slot);
QRect* QUndoView_virtualbase_VisualRect(const void* self, QModelIndex* index);
bool QUndoView_override_virtual_ScrollTo(void* self, intptr_t slot);
void QUndoView_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint);
bool QUndoView_override_virtual_IndexAt(void* self, intptr_t slot);
QModelIndex* QUndoView_virtualbase_IndexAt(const void* self, QPoint* p);
bool QUndoView_override_virtual_DoItemsLayout(void* self, intptr_t slot);
void QUndoView_virtualbase_DoItemsLayout(void* self);
bool QUndoView_override_virtual_Reset(void* self, intptr_t slot);
void QUndoView_virtualbase_Reset(void* self);
bool QUndoView_override_virtual_SetRootIndex(void* self, intptr_t slot);
void QUndoView_virtualbase_SetRootIndex(void* self, QModelIndex* index);
bool QUndoView_override_virtual_Event(void* self, intptr_t slot);
bool QUndoView_virtualbase_Event(void* self, QEvent* e);
bool QUndoView_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QUndoView_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
bool QUndoView_override_virtual_DataChanged(void* self, intptr_t slot);
void QUndoView_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
bool QUndoView_override_virtual_RowsInserted(void* self, intptr_t slot);
void QUndoView_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end);
bool QUndoView_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot);
void QUndoView_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);
bool QUndoView_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e);
bool QUndoView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e);
bool QUndoView_override_virtual_WheelEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_WheelEvent(void* self, QWheelEvent* e);
bool QUndoView_override_virtual_TimerEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_TimerEvent(void* self, QTimerEvent* e);
bool QUndoView_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_ResizeEvent(void* self, QResizeEvent* e);
bool QUndoView_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e);
bool QUndoView_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e);
bool QUndoView_override_virtual_DropEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_DropEvent(void* self, QDropEvent* e);
bool QUndoView_override_virtual_StartDrag(void* self, intptr_t slot);
void QUndoView_virtualbase_StartDrag(void* self, int supportedActions);
bool QUndoView_override_virtual_InitViewItemOption(void* self, intptr_t slot);
void QUndoView_virtualbase_InitViewItemOption(const void* self, QStyleOptionViewItem* option);
bool QUndoView_override_virtual_PaintEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_PaintEvent(void* self, QPaintEvent* e);
bool QUndoView_override_virtual_HorizontalOffset(void* self, intptr_t slot);
int QUndoView_virtualbase_HorizontalOffset(const void* self);
bool QUndoView_override_virtual_VerticalOffset(void* self, intptr_t slot);
int QUndoView_virtualbase_VerticalOffset(const void* self);
bool QUndoView_override_virtual_MoveCursor(void* self, intptr_t slot);
QModelIndex* QUndoView_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers);
bool QUndoView_override_virtual_SetSelection(void* self, intptr_t slot);
void QUndoView_virtualbase_SetSelection(void* self, QRect* rect, int command);
bool QUndoView_override_virtual_VisualRegionForSelection(void* self, intptr_t slot);
QRegion* QUndoView_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection);
bool QUndoView_override_virtual_SelectedIndexes(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QUndoView_virtualbase_SelectedIndexes(const void* self);
bool QUndoView_override_virtual_UpdateGeometries(void* self, intptr_t slot);
void QUndoView_virtualbase_UpdateGeometries(void* self);
bool QUndoView_override_virtual_IsIndexHidden(void* self, intptr_t slot);
bool QUndoView_virtualbase_IsIndexHidden(const void* self, QModelIndex* index);
bool QUndoView_override_virtual_SelectionChanged(void* self, intptr_t slot);
void QUndoView_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);
bool QUndoView_override_virtual_CurrentChanged(void* self, intptr_t slot);
void QUndoView_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous);
bool QUndoView_override_virtual_ViewportSizeHint(void* self, intptr_t slot);
QSize* QUndoView_virtualbase_ViewportSizeHint(const void* self);
void QUndoView_Delete(QUndoView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
