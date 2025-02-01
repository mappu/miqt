#pragma once
#ifndef MIQT_QT_GEN_QABSTRACTITEMVIEW_H
#define MIQT_QT_GEN_QABSTRACTITEMVIEW_H

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
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QHideEvent;
class QInputMethodEvent;
class QItemSelection;
class QItemSelectionModel;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QModelIndex;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QRect;
class QRegion;
class QResizeEvent;
class QShowEvent;
class QSize;
class QStyleOptionViewItem;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QAbstractItemView* QAbstractItemView_new(QWidget* parent);
QAbstractItemView* QAbstractItemView_new2();
void QAbstractItemView_virtbase(QAbstractItemView* src, QAbstractScrollArea** outptr_QAbstractScrollArea);
QMetaObject* QAbstractItemView_metaObject(const QAbstractItemView* self);
void* QAbstractItemView_metacast(QAbstractItemView* self, const char* param1);
struct miqt_string QAbstractItemView_tr(const char* s);
struct miqt_string QAbstractItemView_trUtf8(const char* s);
void QAbstractItemView_setModel(QAbstractItemView* self, QAbstractItemModel* model);
QAbstractItemModel* QAbstractItemView_model(const QAbstractItemView* self);
void QAbstractItemView_setSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel);
QItemSelectionModel* QAbstractItemView_selectionModel(const QAbstractItemView* self);
void QAbstractItemView_setItemDelegate(QAbstractItemView* self, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QAbstractItemView_itemDelegate(const QAbstractItemView* self);
void QAbstractItemView_setSelectionMode(QAbstractItemView* self, int mode);
int QAbstractItemView_selectionMode(const QAbstractItemView* self);
void QAbstractItemView_setSelectionBehavior(QAbstractItemView* self, int behavior);
int QAbstractItemView_selectionBehavior(const QAbstractItemView* self);
QModelIndex* QAbstractItemView_currentIndex(const QAbstractItemView* self);
QModelIndex* QAbstractItemView_rootIndex(const QAbstractItemView* self);
void QAbstractItemView_setEditTriggers(QAbstractItemView* self, int triggers);
int QAbstractItemView_editTriggers(const QAbstractItemView* self);
void QAbstractItemView_setVerticalScrollMode(QAbstractItemView* self, int mode);
int QAbstractItemView_verticalScrollMode(const QAbstractItemView* self);
void QAbstractItemView_resetVerticalScrollMode(QAbstractItemView* self);
void QAbstractItemView_setHorizontalScrollMode(QAbstractItemView* self, int mode);
int QAbstractItemView_horizontalScrollMode(const QAbstractItemView* self);
void QAbstractItemView_resetHorizontalScrollMode(QAbstractItemView* self);
void QAbstractItemView_setAutoScroll(QAbstractItemView* self, bool enable);
bool QAbstractItemView_hasAutoScroll(const QAbstractItemView* self);
void QAbstractItemView_setAutoScrollMargin(QAbstractItemView* self, int margin);
int QAbstractItemView_autoScrollMargin(const QAbstractItemView* self);
void QAbstractItemView_setTabKeyNavigation(QAbstractItemView* self, bool enable);
bool QAbstractItemView_tabKeyNavigation(const QAbstractItemView* self);
void QAbstractItemView_setDropIndicatorShown(QAbstractItemView* self, bool enable);
bool QAbstractItemView_showDropIndicator(const QAbstractItemView* self);
void QAbstractItemView_setDragEnabled(QAbstractItemView* self, bool enable);
bool QAbstractItemView_dragEnabled(const QAbstractItemView* self);
void QAbstractItemView_setDragDropOverwriteMode(QAbstractItemView* self, bool overwrite);
bool QAbstractItemView_dragDropOverwriteMode(const QAbstractItemView* self);
void QAbstractItemView_setDragDropMode(QAbstractItemView* self, int behavior);
int QAbstractItemView_dragDropMode(const QAbstractItemView* self);
void QAbstractItemView_setDefaultDropAction(QAbstractItemView* self, int dropAction);
int QAbstractItemView_defaultDropAction(const QAbstractItemView* self);
void QAbstractItemView_setAlternatingRowColors(QAbstractItemView* self, bool enable);
bool QAbstractItemView_alternatingRowColors(const QAbstractItemView* self);
void QAbstractItemView_setIconSize(QAbstractItemView* self, QSize* size);
QSize* QAbstractItemView_iconSize(const QAbstractItemView* self);
void QAbstractItemView_setTextElideMode(QAbstractItemView* self, int mode);
int QAbstractItemView_textElideMode(const QAbstractItemView* self);
void QAbstractItemView_keyboardSearch(QAbstractItemView* self, struct miqt_string search);
QRect* QAbstractItemView_visualRect(const QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_scrollTo(QAbstractItemView* self, QModelIndex* index, int hint);
QModelIndex* QAbstractItemView_indexAt(const QAbstractItemView* self, QPoint* point);
QSize* QAbstractItemView_sizeHintForIndex(const QAbstractItemView* self, QModelIndex* index);
int QAbstractItemView_sizeHintForRow(const QAbstractItemView* self, int row);
int QAbstractItemView_sizeHintForColumn(const QAbstractItemView* self, int column);
void QAbstractItemView_openPersistentEditor(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_closePersistentEditor(QAbstractItemView* self, QModelIndex* index);
bool QAbstractItemView_isPersistentEditorOpen(const QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_setIndexWidget(QAbstractItemView* self, QModelIndex* index, QWidget* widget);
QWidget* QAbstractItemView_indexWidget(const QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_setItemDelegateForRow(QAbstractItemView* self, int row, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QAbstractItemView_itemDelegateForRow(const QAbstractItemView* self, int row);
void QAbstractItemView_setItemDelegateForColumn(QAbstractItemView* self, int column, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QAbstractItemView_itemDelegateForColumn(const QAbstractItemView* self, int column);
QAbstractItemDelegate* QAbstractItemView_itemDelegateWithIndex(const QAbstractItemView* self, QModelIndex* index);
QVariant* QAbstractItemView_inputMethodQuery(const QAbstractItemView* self, int query);
void QAbstractItemView_reset(QAbstractItemView* self);
void QAbstractItemView_setRootIndex(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_doItemsLayout(QAbstractItemView* self);
void QAbstractItemView_selectAll(QAbstractItemView* self);
void QAbstractItemView_edit(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_clearSelection(QAbstractItemView* self);
void QAbstractItemView_setCurrentIndex(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_scrollToTop(QAbstractItemView* self);
void QAbstractItemView_scrollToBottom(QAbstractItemView* self);
void QAbstractItemView_update(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_dataChanged(QAbstractItemView* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
void QAbstractItemView_rowsInserted(QAbstractItemView* self, QModelIndex* parent, int start, int end);
void QAbstractItemView_rowsAboutToBeRemoved(QAbstractItemView* self, QModelIndex* parent, int start, int end);
void QAbstractItemView_selectionChanged(QAbstractItemView* self, QItemSelection* selected, QItemSelection* deselected);
void QAbstractItemView_currentChanged(QAbstractItemView* self, QModelIndex* current, QModelIndex* previous);
void QAbstractItemView_updateEditorData(QAbstractItemView* self);
void QAbstractItemView_updateEditorGeometries(QAbstractItemView* self);
void QAbstractItemView_updateGeometries(QAbstractItemView* self);
void QAbstractItemView_verticalScrollbarAction(QAbstractItemView* self, int action);
void QAbstractItemView_horizontalScrollbarAction(QAbstractItemView* self, int action);
void QAbstractItemView_verticalScrollbarValueChanged(QAbstractItemView* self, int value);
void QAbstractItemView_horizontalScrollbarValueChanged(QAbstractItemView* self, int value);
void QAbstractItemView_closeEditor(QAbstractItemView* self, QWidget* editor, int hint);
void QAbstractItemView_commitData(QAbstractItemView* self, QWidget* editor);
void QAbstractItemView_editorDestroyed(QAbstractItemView* self, QObject* editor);
void QAbstractItemView_pressed(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_pressed(QAbstractItemView* self, intptr_t slot);
void QAbstractItemView_clicked(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_clicked(QAbstractItemView* self, intptr_t slot);
void QAbstractItemView_doubleClicked(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_doubleClicked(QAbstractItemView* self, intptr_t slot);
void QAbstractItemView_activated(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_activated(QAbstractItemView* self, intptr_t slot);
void QAbstractItemView_entered(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_entered(QAbstractItemView* self, intptr_t slot);
void QAbstractItemView_viewportEntered(QAbstractItemView* self);
void QAbstractItemView_connect_viewportEntered(QAbstractItemView* self, intptr_t slot);
void QAbstractItemView_iconSizeChanged(QAbstractItemView* self, QSize* size);
void QAbstractItemView_connect_iconSizeChanged(QAbstractItemView* self, intptr_t slot);
QModelIndex* QAbstractItemView_moveCursor(QAbstractItemView* self, int cursorAction, int modifiers);
int QAbstractItemView_horizontalOffset(const QAbstractItemView* self);
int QAbstractItemView_verticalOffset(const QAbstractItemView* self);
bool QAbstractItemView_isIndexHidden(const QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_setSelection(QAbstractItemView* self, QRect* rect, int command);
QRegion* QAbstractItemView_visualRegionForSelection(const QAbstractItemView* self, QItemSelection* selection);
struct miqt_array /* of QModelIndex* */  QAbstractItemView_selectedIndexes(const QAbstractItemView* self);
bool QAbstractItemView_edit2(QAbstractItemView* self, QModelIndex* index, int trigger, QEvent* event);
int QAbstractItemView_selectionCommand(const QAbstractItemView* self, QModelIndex* index, QEvent* event);
void QAbstractItemView_startDrag(QAbstractItemView* self, int supportedActions);
QStyleOptionViewItem* QAbstractItemView_viewOptions(const QAbstractItemView* self);
bool QAbstractItemView_focusNextPrevChild(QAbstractItemView* self, bool next);
bool QAbstractItemView_event(QAbstractItemView* self, QEvent* event);
bool QAbstractItemView_viewportEvent(QAbstractItemView* self, QEvent* event);
void QAbstractItemView_mousePressEvent(QAbstractItemView* self, QMouseEvent* event);
void QAbstractItemView_mouseMoveEvent(QAbstractItemView* self, QMouseEvent* event);
void QAbstractItemView_mouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event);
void QAbstractItemView_mouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event);
void QAbstractItemView_dragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event);
void QAbstractItemView_dragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event);
void QAbstractItemView_dragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event);
void QAbstractItemView_dropEvent(QAbstractItemView* self, QDropEvent* event);
void QAbstractItemView_focusInEvent(QAbstractItemView* self, QFocusEvent* event);
void QAbstractItemView_focusOutEvent(QAbstractItemView* self, QFocusEvent* event);
void QAbstractItemView_keyPressEvent(QAbstractItemView* self, QKeyEvent* event);
void QAbstractItemView_resizeEvent(QAbstractItemView* self, QResizeEvent* event);
void QAbstractItemView_timerEvent(QAbstractItemView* self, QTimerEvent* event);
void QAbstractItemView_inputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event);
bool QAbstractItemView_eventFilter(QAbstractItemView* self, QObject* object, QEvent* event);
QSize* QAbstractItemView_viewportSizeHint(const QAbstractItemView* self);
struct miqt_string QAbstractItemView_tr2(const char* s, const char* c);
struct miqt_string QAbstractItemView_tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractItemView_trUtf82(const char* s, const char* c);
struct miqt_string QAbstractItemView_trUtf83(const char* s, const char* c, int n);
bool QAbstractItemView_override_virtual_setModel(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_setModel(void* self, QAbstractItemModel* model);
bool QAbstractItemView_override_virtual_setSelectionModel(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel);
bool QAbstractItemView_override_virtual_keyboardSearch(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_keyboardSearch(void* self, struct miqt_string search);
bool QAbstractItemView_override_virtual_visualRect(void* self, intptr_t slot);
QRect* QAbstractItemView_virtualbase_visualRect(const void* self, QModelIndex* index);
bool QAbstractItemView_override_virtual_scrollTo(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint);
bool QAbstractItemView_override_virtual_indexAt(void* self, intptr_t slot);
QModelIndex* QAbstractItemView_virtualbase_indexAt(const void* self, QPoint* point);
bool QAbstractItemView_override_virtual_sizeHintForRow(void* self, intptr_t slot);
int QAbstractItemView_virtualbase_sizeHintForRow(const void* self, int row);
bool QAbstractItemView_override_virtual_sizeHintForColumn(void* self, intptr_t slot);
int QAbstractItemView_virtualbase_sizeHintForColumn(const void* self, int column);
bool QAbstractItemView_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QAbstractItemView_virtualbase_inputMethodQuery(const void* self, int query);
bool QAbstractItemView_override_virtual_reset(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_reset(void* self);
bool QAbstractItemView_override_virtual_setRootIndex(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_setRootIndex(void* self, QModelIndex* index);
bool QAbstractItemView_override_virtual_doItemsLayout(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_doItemsLayout(void* self);
bool QAbstractItemView_override_virtual_selectAll(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_selectAll(void* self);
bool QAbstractItemView_override_virtual_dataChanged(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
bool QAbstractItemView_override_virtual_rowsInserted(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end);
bool QAbstractItemView_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);
bool QAbstractItemView_override_virtual_selectionChanged(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);
bool QAbstractItemView_override_virtual_currentChanged(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous);
bool QAbstractItemView_override_virtual_updateEditorData(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_updateEditorData(void* self);
bool QAbstractItemView_override_virtual_updateEditorGeometries(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_updateEditorGeometries(void* self);
bool QAbstractItemView_override_virtual_updateGeometries(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_updateGeometries(void* self);
bool QAbstractItemView_override_virtual_verticalScrollbarAction(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_verticalScrollbarAction(void* self, int action);
bool QAbstractItemView_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_horizontalScrollbarAction(void* self, int action);
bool QAbstractItemView_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_verticalScrollbarValueChanged(void* self, int value);
bool QAbstractItemView_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_horizontalScrollbarValueChanged(void* self, int value);
bool QAbstractItemView_override_virtual_closeEditor(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_closeEditor(void* self, QWidget* editor, int hint);
bool QAbstractItemView_override_virtual_commitData(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_commitData(void* self, QWidget* editor);
bool QAbstractItemView_override_virtual_editorDestroyed(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_editorDestroyed(void* self, QObject* editor);
bool QAbstractItemView_override_virtual_moveCursor(void* self, intptr_t slot);
QModelIndex* QAbstractItemView_virtualbase_moveCursor(void* self, int cursorAction, int modifiers);
bool QAbstractItemView_override_virtual_horizontalOffset(void* self, intptr_t slot);
int QAbstractItemView_virtualbase_horizontalOffset(const void* self);
bool QAbstractItemView_override_virtual_verticalOffset(void* self, intptr_t slot);
int QAbstractItemView_virtualbase_verticalOffset(const void* self);
bool QAbstractItemView_override_virtual_isIndexHidden(void* self, intptr_t slot);
bool QAbstractItemView_virtualbase_isIndexHidden(const void* self, QModelIndex* index);
bool QAbstractItemView_override_virtual_setSelection(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_setSelection(void* self, QRect* rect, int command);
bool QAbstractItemView_override_virtual_visualRegionForSelection(void* self, intptr_t slot);
QRegion* QAbstractItemView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection);
bool QAbstractItemView_override_virtual_selectedIndexes(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QAbstractItemView_virtualbase_selectedIndexes(const void* self);
bool QAbstractItemView_override_virtual_edit2(void* self, intptr_t slot);
bool QAbstractItemView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event);
bool QAbstractItemView_override_virtual_selectionCommand(void* self, intptr_t slot);
int QAbstractItemView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event);
bool QAbstractItemView_override_virtual_startDrag(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_startDrag(void* self, int supportedActions);
bool QAbstractItemView_override_virtual_viewOptions(void* self, intptr_t slot);
QStyleOptionViewItem* QAbstractItemView_virtualbase_viewOptions(const void* self);
bool QAbstractItemView_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QAbstractItemView_virtualbase_focusNextPrevChild(void* self, bool next);
bool QAbstractItemView_override_virtual_event(void* self, intptr_t slot);
bool QAbstractItemView_virtualbase_event(void* self, QEvent* event);
bool QAbstractItemView_override_virtual_viewportEvent(void* self, intptr_t slot);
bool QAbstractItemView_virtualbase_viewportEvent(void* self, QEvent* event);
bool QAbstractItemView_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QAbstractItemView_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QAbstractItemView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QAbstractItemView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QAbstractItemView_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QAbstractItemView_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QAbstractItemView_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QAbstractItemView_override_virtual_dropEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QAbstractItemView_override_virtual_focusInEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QAbstractItemView_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QAbstractItemView_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QAbstractItemView_override_virtual_resizeEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QAbstractItemView_override_virtual_timerEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAbstractItemView_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
bool QAbstractItemView_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAbstractItemView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);
bool QAbstractItemView_override_virtual_viewportSizeHint(void* self, intptr_t slot);
QSize* QAbstractItemView_virtualbase_viewportSizeHint(const void* self);
bool QAbstractItemView_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QAbstractItemView_virtualbase_minimumSizeHint(const void* self);
bool QAbstractItemView_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QAbstractItemView_virtualbase_sizeHint(const void* self);
bool QAbstractItemView_override_virtual_setupViewport(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_setupViewport(void* self, QWidget* viewport);
bool QAbstractItemView_override_virtual_paintEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QAbstractItemView_override_virtual_wheelEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
bool QAbstractItemView_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
bool QAbstractItemView_override_virtual_scrollContentsBy(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_scrollContentsBy(void* self, int dx, int dy);
bool QAbstractItemView_override_virtual_changeEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_changeEvent(void* self, QEvent* param1);
bool QAbstractItemView_override_virtual_devType(void* self, intptr_t slot);
int QAbstractItemView_virtualbase_devType(const void* self);
bool QAbstractItemView_override_virtual_setVisible(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_setVisible(void* self, bool visible);
bool QAbstractItemView_override_virtual_heightForWidth(void* self, intptr_t slot);
int QAbstractItemView_virtualbase_heightForWidth(const void* self, int param1);
bool QAbstractItemView_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QAbstractItemView_virtualbase_hasHeightForWidth(const void* self);
bool QAbstractItemView_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QAbstractItemView_virtualbase_paintEngine(const void* self);
bool QAbstractItemView_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QAbstractItemView_override_virtual_enterEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_enterEvent(void* self, QEvent* event);
bool QAbstractItemView_override_virtual_leaveEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_leaveEvent(void* self, QEvent* event);
bool QAbstractItemView_override_virtual_moveEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QAbstractItemView_override_virtual_closeEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QAbstractItemView_override_virtual_tabletEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QAbstractItemView_override_virtual_actionEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QAbstractItemView_override_virtual_showEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_showEvent(void* self, QShowEvent* event);
bool QAbstractItemView_override_virtual_hideEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QAbstractItemView_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QAbstractItemView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QAbstractItemView_override_virtual_metric(void* self, intptr_t slot);
int QAbstractItemView_virtualbase_metric(const void* self, int param1);
bool QAbstractItemView_override_virtual_initPainter(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_initPainter(const void* self, QPainter* painter);
bool QAbstractItemView_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QAbstractItemView_virtualbase_redirected(const void* self, QPoint* offset);
bool QAbstractItemView_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QAbstractItemView_virtualbase_sharedPainter(const void* self);
bool QAbstractItemView_override_virtual_childEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAbstractItemView_override_virtual_customEvent(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_customEvent(void* self, QEvent* event);
bool QAbstractItemView_override_virtual_connectNotify(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAbstractItemView_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAbstractItemView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QAbstractItemView_delete(QAbstractItemView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
