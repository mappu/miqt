#pragma once
#ifndef MIQT_QT_GEN_QUNDOVIEW_H
#define MIQT_QT_GEN_QUNDOVIEW_H

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
class QListView;
class QMetaObject;
class QModelIndex;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QPoint;
class QRect;
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
typedef struct QListView QListView;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
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

void QUndoView_new(QWidget* parent, QUndoView** outptr_QUndoView, QListView** outptr_QListView, QAbstractItemView** outptr_QAbstractItemView, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QUndoView_new2(QUndoView** outptr_QUndoView, QListView** outptr_QListView, QAbstractItemView** outptr_QAbstractItemView, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QUndoView_new3(QUndoStack* stack, QUndoView** outptr_QUndoView, QListView** outptr_QListView, QAbstractItemView** outptr_QAbstractItemView, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QUndoView_new4(QUndoGroup* group, QUndoView** outptr_QUndoView, QListView** outptr_QListView, QAbstractItemView** outptr_QAbstractItemView, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QUndoView_new5(QUndoStack* stack, QWidget* parent, QUndoView** outptr_QUndoView, QListView** outptr_QListView, QAbstractItemView** outptr_QAbstractItemView, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QUndoView_new6(QUndoGroup* group, QWidget* parent, QUndoView** outptr_QUndoView, QListView** outptr_QListView, QAbstractItemView** outptr_QAbstractItemView, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QUndoView_MetaObject(const QUndoView* self);
void* QUndoView_Metacast(QUndoView* self, const char* param1);
struct miqt_string QUndoView_Tr(const char* s);
struct miqt_string QUndoView_TrUtf8(const char* s);
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
struct miqt_string QUndoView_TrUtf82(const char* s, const char* c);
struct miqt_string QUndoView_TrUtf83(const char* s, const char* c, int n);
void QUndoView_override_virtual_VisualRect(void* self, intptr_t slot);
QRect* QUndoView_virtualbase_VisualRect(const void* self, QModelIndex* index);
void QUndoView_override_virtual_ScrollTo(void* self, intptr_t slot);
void QUndoView_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint);
void QUndoView_override_virtual_IndexAt(void* self, intptr_t slot);
QModelIndex* QUndoView_virtualbase_IndexAt(const void* self, QPoint* p);
void QUndoView_override_virtual_DoItemsLayout(void* self, intptr_t slot);
void QUndoView_virtualbase_DoItemsLayout(void* self);
void QUndoView_override_virtual_Reset(void* self, intptr_t slot);
void QUndoView_virtualbase_Reset(void* self);
void QUndoView_override_virtual_SetRootIndex(void* self, intptr_t slot);
void QUndoView_virtualbase_SetRootIndex(void* self, QModelIndex* index);
void QUndoView_override_virtual_Event(void* self, intptr_t slot);
bool QUndoView_virtualbase_Event(void* self, QEvent* e);
void QUndoView_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QUndoView_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
void QUndoView_override_virtual_DataChanged(void* self, intptr_t slot);
void QUndoView_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
void QUndoView_override_virtual_RowsInserted(void* self, intptr_t slot);
void QUndoView_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end);
void QUndoView_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot);
void QUndoView_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);
void QUndoView_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e);
void QUndoView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e);
void QUndoView_override_virtual_WheelEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_WheelEvent(void* self, QWheelEvent* e);
void QUndoView_override_virtual_TimerEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_TimerEvent(void* self, QTimerEvent* e);
void QUndoView_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_ResizeEvent(void* self, QResizeEvent* e);
void QUndoView_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e);
void QUndoView_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e);
void QUndoView_override_virtual_DropEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_DropEvent(void* self, QDropEvent* e);
void QUndoView_override_virtual_StartDrag(void* self, intptr_t slot);
void QUndoView_virtualbase_StartDrag(void* self, int supportedActions);
void QUndoView_override_virtual_ViewOptions(void* self, intptr_t slot);
QStyleOptionViewItem* QUndoView_virtualbase_ViewOptions(const void* self);
void QUndoView_override_virtual_PaintEvent(void* self, intptr_t slot);
void QUndoView_virtualbase_PaintEvent(void* self, QPaintEvent* e);
void QUndoView_override_virtual_HorizontalOffset(void* self, intptr_t slot);
int QUndoView_virtualbase_HorizontalOffset(const void* self);
void QUndoView_override_virtual_VerticalOffset(void* self, intptr_t slot);
int QUndoView_virtualbase_VerticalOffset(const void* self);
void QUndoView_override_virtual_MoveCursor(void* self, intptr_t slot);
QModelIndex* QUndoView_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers);
void QUndoView_override_virtual_SetSelection(void* self, intptr_t slot);
void QUndoView_virtualbase_SetSelection(void* self, QRect* rect, int command);
void QUndoView_override_virtual_SelectedIndexes(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QUndoView_virtualbase_SelectedIndexes(const void* self);
void QUndoView_override_virtual_UpdateGeometries(void* self, intptr_t slot);
void QUndoView_virtualbase_UpdateGeometries(void* self);
void QUndoView_override_virtual_IsIndexHidden(void* self, intptr_t slot);
bool QUndoView_virtualbase_IsIndexHidden(const void* self, QModelIndex* index);
void QUndoView_override_virtual_CurrentChanged(void* self, intptr_t slot);
void QUndoView_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous);
void QUndoView_override_virtual_ViewportSizeHint(void* self, intptr_t slot);
QSize* QUndoView_virtualbase_ViewportSizeHint(const void* self);
void QUndoView_Delete(QUndoView* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
