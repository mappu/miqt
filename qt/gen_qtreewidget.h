#pragma once
#ifndef MIQT_QT_GEN_QTREEWIDGET_H
#define MIQT_QT_GEN_QTREEWIDGET_H

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
class QBrush;
class QColor;
class QDataStream;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFont;
class QFrame;
class QIcon;
class QItemSelection;
class QItemSelectionModel;
class QKeyEvent;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QPainter;
class QPoint;
class QRect;
class QRegion;
class QSize;
class QStyleOptionViewItem;
class QTimerEvent;
class QTreeView;
class QTreeWidget;
class QTreeWidgetItem;
class QVariant;
class QWidget;
#else
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QDataStream QDataStream;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QFrame QFrame;
typedef struct QIcon QIcon;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTreeView QTreeView;
typedef struct QTreeWidget QTreeWidget;
typedef struct QTreeWidgetItem QTreeWidgetItem;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

void QTreeWidgetItem_new(QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new2(struct miqt_array /* of struct miqt_string */  strings, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new3(QTreeWidget* treeview, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new4(QTreeWidget* treeview, struct miqt_array /* of struct miqt_string */  strings, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new5(QTreeWidget* treeview, QTreeWidgetItem* after, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new6(QTreeWidgetItem* parent, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new7(QTreeWidgetItem* parent, struct miqt_array /* of struct miqt_string */  strings, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new8(QTreeWidgetItem* parent, QTreeWidgetItem* after, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new9(QTreeWidgetItem* other, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new10(int typeVal, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new11(struct miqt_array /* of struct miqt_string */  strings, int typeVal, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new12(QTreeWidget* treeview, int typeVal, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new13(QTreeWidget* treeview, struct miqt_array /* of struct miqt_string */  strings, int typeVal, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new14(QTreeWidget* treeview, QTreeWidgetItem* after, int typeVal, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new15(QTreeWidgetItem* parent, int typeVal, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new16(QTreeWidgetItem* parent, struct miqt_array /* of struct miqt_string */  strings, int typeVal, QTreeWidgetItem** outptr_QTreeWidgetItem);
void QTreeWidgetItem_new17(QTreeWidgetItem* parent, QTreeWidgetItem* after, int typeVal, QTreeWidgetItem** outptr_QTreeWidgetItem);
QTreeWidgetItem* QTreeWidgetItem_Clone(const QTreeWidgetItem* self);
QTreeWidget* QTreeWidgetItem_TreeWidget(const QTreeWidgetItem* self);
void QTreeWidgetItem_SetSelected(QTreeWidgetItem* self, bool selectVal);
bool QTreeWidgetItem_IsSelected(const QTreeWidgetItem* self);
void QTreeWidgetItem_SetHidden(QTreeWidgetItem* self, bool hide);
bool QTreeWidgetItem_IsHidden(const QTreeWidgetItem* self);
void QTreeWidgetItem_SetExpanded(QTreeWidgetItem* self, bool expand);
bool QTreeWidgetItem_IsExpanded(const QTreeWidgetItem* self);
void QTreeWidgetItem_SetFirstColumnSpanned(QTreeWidgetItem* self, bool span);
bool QTreeWidgetItem_IsFirstColumnSpanned(const QTreeWidgetItem* self);
void QTreeWidgetItem_SetDisabled(QTreeWidgetItem* self, bool disabled);
bool QTreeWidgetItem_IsDisabled(const QTreeWidgetItem* self);
void QTreeWidgetItem_SetChildIndicatorPolicy(QTreeWidgetItem* self, int policy);
int QTreeWidgetItem_ChildIndicatorPolicy(const QTreeWidgetItem* self);
int QTreeWidgetItem_Flags(const QTreeWidgetItem* self);
void QTreeWidgetItem_SetFlags(QTreeWidgetItem* self, int flags);
struct miqt_string QTreeWidgetItem_Text(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetText(QTreeWidgetItem* self, int column, struct miqt_string text);
QIcon* QTreeWidgetItem_Icon(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetIcon(QTreeWidgetItem* self, int column, QIcon* icon);
struct miqt_string QTreeWidgetItem_StatusTip(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetStatusTip(QTreeWidgetItem* self, int column, struct miqt_string statusTip);
struct miqt_string QTreeWidgetItem_ToolTip(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetToolTip(QTreeWidgetItem* self, int column, struct miqt_string toolTip);
struct miqt_string QTreeWidgetItem_WhatsThis(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetWhatsThis(QTreeWidgetItem* self, int column, struct miqt_string whatsThis);
QFont* QTreeWidgetItem_Font(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetFont(QTreeWidgetItem* self, int column, QFont* font);
int QTreeWidgetItem_TextAlignment(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetTextAlignment(QTreeWidgetItem* self, int column, int alignment);
QColor* QTreeWidgetItem_BackgroundColor(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetBackgroundColor(QTreeWidgetItem* self, int column, QColor* color);
QBrush* QTreeWidgetItem_Background(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetBackground(QTreeWidgetItem* self, int column, QBrush* brush);
QColor* QTreeWidgetItem_TextColor(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetTextColor(QTreeWidgetItem* self, int column, QColor* color);
QBrush* QTreeWidgetItem_Foreground(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetForeground(QTreeWidgetItem* self, int column, QBrush* brush);
int QTreeWidgetItem_CheckState(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetCheckState(QTreeWidgetItem* self, int column, int state);
QSize* QTreeWidgetItem_SizeHint(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetSizeHint(QTreeWidgetItem* self, int column, QSize* size);
QVariant* QTreeWidgetItem_Data(const QTreeWidgetItem* self, int column, int role);
void QTreeWidgetItem_SetData(QTreeWidgetItem* self, int column, int role, QVariant* value);
bool QTreeWidgetItem_OperatorLesser(const QTreeWidgetItem* self, QTreeWidgetItem* other);
void QTreeWidgetItem_Read(QTreeWidgetItem* self, QDataStream* in);
void QTreeWidgetItem_Write(const QTreeWidgetItem* self, QDataStream* out);
void QTreeWidgetItem_OperatorAssign(QTreeWidgetItem* self, QTreeWidgetItem* other);
QTreeWidgetItem* QTreeWidgetItem_Parent(const QTreeWidgetItem* self);
QTreeWidgetItem* QTreeWidgetItem_Child(const QTreeWidgetItem* self, int index);
int QTreeWidgetItem_ChildCount(const QTreeWidgetItem* self);
int QTreeWidgetItem_ColumnCount(const QTreeWidgetItem* self);
int QTreeWidgetItem_IndexOfChild(const QTreeWidgetItem* self, QTreeWidgetItem* child);
void QTreeWidgetItem_AddChild(QTreeWidgetItem* self, QTreeWidgetItem* child);
void QTreeWidgetItem_InsertChild(QTreeWidgetItem* self, int index, QTreeWidgetItem* child);
void QTreeWidgetItem_RemoveChild(QTreeWidgetItem* self, QTreeWidgetItem* child);
QTreeWidgetItem* QTreeWidgetItem_TakeChild(QTreeWidgetItem* self, int index);
void QTreeWidgetItem_AddChildren(QTreeWidgetItem* self, struct miqt_array /* of QTreeWidgetItem* */  children);
void QTreeWidgetItem_InsertChildren(QTreeWidgetItem* self, int index, struct miqt_array /* of QTreeWidgetItem* */  children);
struct miqt_array /* of QTreeWidgetItem* */  QTreeWidgetItem_TakeChildren(QTreeWidgetItem* self);
int QTreeWidgetItem_Type(const QTreeWidgetItem* self);
void QTreeWidgetItem_SortChildren(QTreeWidgetItem* self, int column, int order);
void QTreeWidgetItem_override_virtual_Clone(void* self, intptr_t slot);
QTreeWidgetItem* QTreeWidgetItem_virtualbase_Clone(const void* self);
void QTreeWidgetItem_override_virtual_Data(void* self, intptr_t slot);
QVariant* QTreeWidgetItem_virtualbase_Data(const void* self, int column, int role);
void QTreeWidgetItem_override_virtual_SetData(void* self, intptr_t slot);
void QTreeWidgetItem_virtualbase_SetData(void* self, int column, int role, QVariant* value);
void QTreeWidgetItem_override_virtual_OperatorLesser(void* self, intptr_t slot);
bool QTreeWidgetItem_virtualbase_OperatorLesser(const void* self, QTreeWidgetItem* other);
void QTreeWidgetItem_override_virtual_Read(void* self, intptr_t slot);
void QTreeWidgetItem_virtualbase_Read(void* self, QDataStream* in);
void QTreeWidgetItem_override_virtual_Write(void* self, intptr_t slot);
void QTreeWidgetItem_virtualbase_Write(const void* self, QDataStream* out);
void QTreeWidgetItem_Delete(QTreeWidgetItem* self, bool isSubclass);

void QTreeWidget_new(QWidget* parent, QTreeWidget** outptr_QTreeWidget, QTreeView** outptr_QTreeView, QAbstractItemView** outptr_QAbstractItemView, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QTreeWidget_new2(QTreeWidget** outptr_QTreeWidget, QTreeView** outptr_QTreeView, QAbstractItemView** outptr_QAbstractItemView, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QTreeWidget_MetaObject(const QTreeWidget* self);
void* QTreeWidget_Metacast(QTreeWidget* self, const char* param1);
struct miqt_string QTreeWidget_Tr(const char* s);
struct miqt_string QTreeWidget_TrUtf8(const char* s);
int QTreeWidget_ColumnCount(const QTreeWidget* self);
void QTreeWidget_SetColumnCount(QTreeWidget* self, int columns);
QTreeWidgetItem* QTreeWidget_InvisibleRootItem(const QTreeWidget* self);
QTreeWidgetItem* QTreeWidget_TopLevelItem(const QTreeWidget* self, int index);
int QTreeWidget_TopLevelItemCount(const QTreeWidget* self);
void QTreeWidget_InsertTopLevelItem(QTreeWidget* self, int index, QTreeWidgetItem* item);
void QTreeWidget_AddTopLevelItem(QTreeWidget* self, QTreeWidgetItem* item);
QTreeWidgetItem* QTreeWidget_TakeTopLevelItem(QTreeWidget* self, int index);
int QTreeWidget_IndexOfTopLevelItem(const QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_InsertTopLevelItems(QTreeWidget* self, int index, struct miqt_array /* of QTreeWidgetItem* */  items);
void QTreeWidget_AddTopLevelItems(QTreeWidget* self, struct miqt_array /* of QTreeWidgetItem* */  items);
QTreeWidgetItem* QTreeWidget_HeaderItem(const QTreeWidget* self);
void QTreeWidget_SetHeaderItem(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_SetHeaderLabels(QTreeWidget* self, struct miqt_array /* of struct miqt_string */  labels);
void QTreeWidget_SetHeaderLabel(QTreeWidget* self, struct miqt_string label);
QTreeWidgetItem* QTreeWidget_CurrentItem(const QTreeWidget* self);
int QTreeWidget_CurrentColumn(const QTreeWidget* self);
void QTreeWidget_SetCurrentItem(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_SetCurrentItem2(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_SetCurrentItem3(QTreeWidget* self, QTreeWidgetItem* item, int column, int command);
QTreeWidgetItem* QTreeWidget_ItemAt(const QTreeWidget* self, QPoint* p);
QTreeWidgetItem* QTreeWidget_ItemAt2(const QTreeWidget* self, int x, int y);
QRect* QTreeWidget_VisualItemRect(const QTreeWidget* self, QTreeWidgetItem* item);
int QTreeWidget_SortColumn(const QTreeWidget* self);
void QTreeWidget_SortItems(QTreeWidget* self, int column, int order);
void QTreeWidget_EditItem(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_OpenPersistentEditor(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_ClosePersistentEditor(QTreeWidget* self, QTreeWidgetItem* item);
bool QTreeWidget_IsPersistentEditorOpen(const QTreeWidget* self, QTreeWidgetItem* item);
QWidget* QTreeWidget_ItemWidget(const QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_SetItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column, QWidget* widget);
void QTreeWidget_RemoveItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column);
bool QTreeWidget_IsItemSelected(const QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_SetItemSelected(QTreeWidget* self, QTreeWidgetItem* item, bool selectVal);
struct miqt_array /* of QTreeWidgetItem* */  QTreeWidget_SelectedItems(const QTreeWidget* self);
struct miqt_array /* of QTreeWidgetItem* */  QTreeWidget_FindItems(const QTreeWidget* self, struct miqt_string text, int flags);
bool QTreeWidget_IsItemHidden(const QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_SetItemHidden(QTreeWidget* self, QTreeWidgetItem* item, bool hide);
bool QTreeWidget_IsItemExpanded(const QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_SetItemExpanded(QTreeWidget* self, QTreeWidgetItem* item, bool expand);
bool QTreeWidget_IsFirstItemColumnSpanned(const QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_SetFirstItemColumnSpanned(QTreeWidget* self, QTreeWidgetItem* item, bool span);
QTreeWidgetItem* QTreeWidget_ItemAbove(const QTreeWidget* self, QTreeWidgetItem* item);
QTreeWidgetItem* QTreeWidget_ItemBelow(const QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_SetSelectionModel(QTreeWidget* self, QItemSelectionModel* selectionModel);
void QTreeWidget_ScrollToItem(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_ExpandItem(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_CollapseItem(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_Clear(QTreeWidget* self);
void QTreeWidget_ItemPressed(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_connect_ItemPressed(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemClicked(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_connect_ItemClicked(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemDoubleClicked(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_connect_ItemDoubleClicked(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemActivated(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_connect_ItemActivated(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemEntered(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_connect_ItemEntered(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemChanged(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_connect_ItemChanged(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemExpanded(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_connect_ItemExpanded(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemCollapsed(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_connect_ItemCollapsed(QTreeWidget* self, intptr_t slot);
void QTreeWidget_CurrentItemChanged(QTreeWidget* self, QTreeWidgetItem* current, QTreeWidgetItem* previous);
void QTreeWidget_connect_CurrentItemChanged(QTreeWidget* self, intptr_t slot);
void QTreeWidget_ItemSelectionChanged(QTreeWidget* self);
void QTreeWidget_connect_ItemSelectionChanged(QTreeWidget* self, intptr_t slot);
bool QTreeWidget_Event(QTreeWidget* self, QEvent* e);
struct miqt_array /* of struct miqt_string */  QTreeWidget_MimeTypes(const QTreeWidget* self);
QMimeData* QTreeWidget_MimeData(const QTreeWidget* self, struct miqt_array /* of QTreeWidgetItem* */  items);
bool QTreeWidget_DropMimeData(QTreeWidget* self, QTreeWidgetItem* parent, int index, QMimeData* data, int action);
int QTreeWidget_SupportedDropActions(const QTreeWidget* self);
void QTreeWidget_DropEvent(QTreeWidget* self, QDropEvent* event);
struct miqt_string QTreeWidget_Tr2(const char* s, const char* c);
struct miqt_string QTreeWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string QTreeWidget_TrUtf82(const char* s, const char* c);
struct miqt_string QTreeWidget_TrUtf83(const char* s, const char* c, int n);
void QTreeWidget_EditItem2(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_OpenPersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_ClosePersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column);
bool QTreeWidget_IsPersistentEditorOpen2(const QTreeWidget* self, QTreeWidgetItem* item, int column);
struct miqt_array /* of QTreeWidgetItem* */  QTreeWidget_FindItems3(const QTreeWidget* self, struct miqt_string text, int flags, int column);
void QTreeWidget_ScrollToItem2(QTreeWidget* self, QTreeWidgetItem* item, int hint);
void QTreeWidget_override_virtual_SetSelectionModel(void* self, intptr_t slot);
void QTreeWidget_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel);
void QTreeWidget_override_virtual_Event(void* self, intptr_t slot);
bool QTreeWidget_virtualbase_Event(void* self, QEvent* e);
void QTreeWidget_override_virtual_MimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QTreeWidget_virtualbase_MimeTypes(const void* self);
void QTreeWidget_override_virtual_MimeData(void* self, intptr_t slot);
QMimeData* QTreeWidget_virtualbase_MimeData(const void* self, struct miqt_array /* of QTreeWidgetItem* */  items);
void QTreeWidget_override_virtual_DropMimeData(void* self, intptr_t slot);
bool QTreeWidget_virtualbase_DropMimeData(void* self, QTreeWidgetItem* parent, int index, QMimeData* data, int action);
void QTreeWidget_override_virtual_SupportedDropActions(void* self, intptr_t slot);
int QTreeWidget_virtualbase_SupportedDropActions(const void* self);
void QTreeWidget_override_virtual_DropEvent(void* self, intptr_t slot);
void QTreeWidget_virtualbase_DropEvent(void* self, QDropEvent* event);
void QTreeWidget_override_virtual_SetRootIndex(void* self, intptr_t slot);
void QTreeWidget_virtualbase_SetRootIndex(void* self, QModelIndex* index);
void QTreeWidget_override_virtual_KeyboardSearch(void* self, intptr_t slot);
void QTreeWidget_virtualbase_KeyboardSearch(void* self, struct miqt_string search);
void QTreeWidget_override_virtual_VisualRect(void* self, intptr_t slot);
QRect* QTreeWidget_virtualbase_VisualRect(const void* self, QModelIndex* index);
void QTreeWidget_override_virtual_ScrollTo(void* self, intptr_t slot);
void QTreeWidget_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint);
void QTreeWidget_override_virtual_IndexAt(void* self, intptr_t slot);
QModelIndex* QTreeWidget_virtualbase_IndexAt(const void* self, QPoint* p);
void QTreeWidget_override_virtual_DoItemsLayout(void* self, intptr_t slot);
void QTreeWidget_virtualbase_DoItemsLayout(void* self);
void QTreeWidget_override_virtual_Reset(void* self, intptr_t slot);
void QTreeWidget_virtualbase_Reset(void* self);
void QTreeWidget_override_virtual_DataChanged(void* self, intptr_t slot);
void QTreeWidget_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
void QTreeWidget_override_virtual_SelectAll(void* self, intptr_t slot);
void QTreeWidget_virtualbase_SelectAll(void* self);
void QTreeWidget_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot);
void QTreeWidget_virtualbase_VerticalScrollbarValueChanged(void* self, int value);
void QTreeWidget_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QTreeWidget_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
void QTreeWidget_override_virtual_RowsInserted(void* self, intptr_t slot);
void QTreeWidget_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end);
void QTreeWidget_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot);
void QTreeWidget_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);
void QTreeWidget_override_virtual_MoveCursor(void* self, intptr_t slot);
QModelIndex* QTreeWidget_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers);
void QTreeWidget_override_virtual_HorizontalOffset(void* self, intptr_t slot);
int QTreeWidget_virtualbase_HorizontalOffset(const void* self);
void QTreeWidget_override_virtual_VerticalOffset(void* self, intptr_t slot);
int QTreeWidget_virtualbase_VerticalOffset(const void* self);
void QTreeWidget_override_virtual_SetSelection(void* self, intptr_t slot);
void QTreeWidget_virtualbase_SetSelection(void* self, QRect* rect, int command);
void QTreeWidget_override_virtual_VisualRegionForSelection(void* self, intptr_t slot);
QRegion* QTreeWidget_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection);
void QTreeWidget_override_virtual_SelectedIndexes(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QTreeWidget_virtualbase_SelectedIndexes(const void* self);
void QTreeWidget_override_virtual_TimerEvent(void* self, intptr_t slot);
void QTreeWidget_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QTreeWidget_override_virtual_PaintEvent(void* self, intptr_t slot);
void QTreeWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QTreeWidget_override_virtual_DrawRow(void* self, intptr_t slot);
void QTreeWidget_virtualbase_DrawRow(const void* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index);
void QTreeWidget_override_virtual_DrawBranches(void* self, intptr_t slot);
void QTreeWidget_virtualbase_DrawBranches(const void* self, QPainter* painter, QRect* rect, QModelIndex* index);
void QTreeWidget_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QTreeWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QTreeWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QTreeWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QTreeWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QTreeWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QTreeWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QTreeWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QTreeWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QTreeWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QTreeWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QTreeWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QTreeWidget_override_virtual_ViewportEvent(void* self, intptr_t slot);
bool QTreeWidget_virtualbase_ViewportEvent(void* self, QEvent* event);
void QTreeWidget_override_virtual_UpdateGeometries(void* self, intptr_t slot);
void QTreeWidget_virtualbase_UpdateGeometries(void* self);
void QTreeWidget_override_virtual_ViewportSizeHint(void* self, intptr_t slot);
QSize* QTreeWidget_virtualbase_ViewportSizeHint(const void* self);
void QTreeWidget_override_virtual_SizeHintForColumn(void* self, intptr_t slot);
int QTreeWidget_virtualbase_SizeHintForColumn(const void* self, int column);
void QTreeWidget_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot);
void QTreeWidget_virtualbase_HorizontalScrollbarAction(void* self, int action);
void QTreeWidget_override_virtual_IsIndexHidden(void* self, intptr_t slot);
bool QTreeWidget_virtualbase_IsIndexHidden(const void* self, QModelIndex* index);
void QTreeWidget_override_virtual_SelectionChanged(void* self, intptr_t slot);
void QTreeWidget_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);
void QTreeWidget_override_virtual_CurrentChanged(void* self, intptr_t slot);
void QTreeWidget_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous);
void QTreeWidget_Delete(QTreeWidget* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
