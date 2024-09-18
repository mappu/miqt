#ifndef GEN_QTREEWIDGET_H
#define GEN_QTREEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QColor;
class QDataStream;
class QFont;
class QIcon;
class QItemSelectionModel;
class QMetaObject;
class QPoint;
class QRect;
class QSize;
class QTreeWidget;
class QTreeWidgetItem;
class QVariant;
class QWidget;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QDataStream QDataStream;
typedef struct QFont QFont;
typedef struct QIcon QIcon;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QMetaObject QMetaObject;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QTreeWidget QTreeWidget;
typedef struct QTreeWidgetItem QTreeWidgetItem;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QTreeWidgetItem* QTreeWidgetItem_new();
QTreeWidgetItem* QTreeWidgetItem_new2(struct miqt_array* /* of struct miqt_string* */ strings);
QTreeWidgetItem* QTreeWidgetItem_new3(QTreeWidget* treeview);
QTreeWidgetItem* QTreeWidgetItem_new4(QTreeWidget* treeview, struct miqt_array* /* of struct miqt_string* */ strings);
QTreeWidgetItem* QTreeWidgetItem_new5(QTreeWidget* treeview, QTreeWidgetItem* after);
QTreeWidgetItem* QTreeWidgetItem_new6(QTreeWidgetItem* parent);
QTreeWidgetItem* QTreeWidgetItem_new7(QTreeWidgetItem* parent, struct miqt_array* /* of struct miqt_string* */ strings);
QTreeWidgetItem* QTreeWidgetItem_new8(QTreeWidgetItem* parent, QTreeWidgetItem* after);
QTreeWidgetItem* QTreeWidgetItem_new9(QTreeWidgetItem* other);
QTreeWidgetItem* QTreeWidgetItem_new10(int typeVal);
QTreeWidgetItem* QTreeWidgetItem_new11(struct miqt_array* /* of struct miqt_string* */ strings, int typeVal);
QTreeWidgetItem* QTreeWidgetItem_new12(QTreeWidget* treeview, int typeVal);
QTreeWidgetItem* QTreeWidgetItem_new13(QTreeWidget* treeview, struct miqt_array* /* of struct miqt_string* */ strings, int typeVal);
QTreeWidgetItem* QTreeWidgetItem_new14(QTreeWidget* treeview, QTreeWidgetItem* after, int typeVal);
QTreeWidgetItem* QTreeWidgetItem_new15(QTreeWidgetItem* parent, int typeVal);
QTreeWidgetItem* QTreeWidgetItem_new16(QTreeWidgetItem* parent, struct miqt_array* /* of struct miqt_string* */ strings, int typeVal);
QTreeWidgetItem* QTreeWidgetItem_new17(QTreeWidgetItem* parent, QTreeWidgetItem* after, int typeVal);
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
struct miqt_string* QTreeWidgetItem_Text(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetText(QTreeWidgetItem* self, int column, struct miqt_string* text);
QIcon* QTreeWidgetItem_Icon(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetIcon(QTreeWidgetItem* self, int column, QIcon* icon);
struct miqt_string* QTreeWidgetItem_StatusTip(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetStatusTip(QTreeWidgetItem* self, int column, struct miqt_string* statusTip);
struct miqt_string* QTreeWidgetItem_ToolTip(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetToolTip(QTreeWidgetItem* self, int column, struct miqt_string* toolTip);
struct miqt_string* QTreeWidgetItem_WhatsThis(const QTreeWidgetItem* self, int column);
void QTreeWidgetItem_SetWhatsThis(QTreeWidgetItem* self, int column, struct miqt_string* whatsThis);
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
void QTreeWidgetItem_AddChildren(QTreeWidgetItem* self, struct miqt_array* /* of QTreeWidgetItem* */ children);
void QTreeWidgetItem_InsertChildren(QTreeWidgetItem* self, int index, struct miqt_array* /* of QTreeWidgetItem* */ children);
struct miqt_array* QTreeWidgetItem_TakeChildren(QTreeWidgetItem* self);
int QTreeWidgetItem_Type(const QTreeWidgetItem* self);
void QTreeWidgetItem_SortChildren(QTreeWidgetItem* self, int column, int order);
void QTreeWidgetItem_Delete(QTreeWidgetItem* self);

QTreeWidget* QTreeWidget_new();
QTreeWidget* QTreeWidget_new2(QWidget* parent);
QMetaObject* QTreeWidget_MetaObject(const QTreeWidget* self);
struct miqt_string* QTreeWidget_Tr(const char* s);
struct miqt_string* QTreeWidget_TrUtf8(const char* s);
int QTreeWidget_ColumnCount(const QTreeWidget* self);
void QTreeWidget_SetColumnCount(QTreeWidget* self, int columns);
QTreeWidgetItem* QTreeWidget_InvisibleRootItem(const QTreeWidget* self);
QTreeWidgetItem* QTreeWidget_TopLevelItem(const QTreeWidget* self, int index);
int QTreeWidget_TopLevelItemCount(const QTreeWidget* self);
void QTreeWidget_InsertTopLevelItem(QTreeWidget* self, int index, QTreeWidgetItem* item);
void QTreeWidget_AddTopLevelItem(QTreeWidget* self, QTreeWidgetItem* item);
QTreeWidgetItem* QTreeWidget_TakeTopLevelItem(QTreeWidget* self, int index);
int QTreeWidget_IndexOfTopLevelItem(const QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_InsertTopLevelItems(QTreeWidget* self, int index, struct miqt_array* /* of QTreeWidgetItem* */ items);
void QTreeWidget_AddTopLevelItems(QTreeWidget* self, struct miqt_array* /* of QTreeWidgetItem* */ items);
QTreeWidgetItem* QTreeWidget_HeaderItem(const QTreeWidget* self);
void QTreeWidget_SetHeaderItem(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_SetHeaderLabels(QTreeWidget* self, struct miqt_array* /* of struct miqt_string* */ labels);
void QTreeWidget_SetHeaderLabel(QTreeWidget* self, struct miqt_string* label);
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
struct miqt_array* QTreeWidget_SelectedItems(const QTreeWidget* self);
struct miqt_array* QTreeWidget_FindItems(const QTreeWidget* self, struct miqt_string* text, int flags);
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
void QTreeWidget_connect_ItemPressed(QTreeWidget* self, void* slot);
void QTreeWidget_ItemClicked(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_connect_ItemClicked(QTreeWidget* self, void* slot);
void QTreeWidget_ItemDoubleClicked(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_connect_ItemDoubleClicked(QTreeWidget* self, void* slot);
void QTreeWidget_ItemActivated(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_connect_ItemActivated(QTreeWidget* self, void* slot);
void QTreeWidget_ItemEntered(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_connect_ItemEntered(QTreeWidget* self, void* slot);
void QTreeWidget_ItemChanged(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_connect_ItemChanged(QTreeWidget* self, void* slot);
void QTreeWidget_ItemExpanded(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_connect_ItemExpanded(QTreeWidget* self, void* slot);
void QTreeWidget_ItemCollapsed(QTreeWidget* self, QTreeWidgetItem* item);
void QTreeWidget_connect_ItemCollapsed(QTreeWidget* self, void* slot);
void QTreeWidget_CurrentItemChanged(QTreeWidget* self, QTreeWidgetItem* current, QTreeWidgetItem* previous);
void QTreeWidget_connect_CurrentItemChanged(QTreeWidget* self, void* slot);
void QTreeWidget_ItemSelectionChanged(QTreeWidget* self);
void QTreeWidget_connect_ItemSelectionChanged(QTreeWidget* self, void* slot);
struct miqt_string* QTreeWidget_Tr2(const char* s, const char* c);
struct miqt_string* QTreeWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string* QTreeWidget_TrUtf82(const char* s, const char* c);
struct miqt_string* QTreeWidget_TrUtf83(const char* s, const char* c, int n);
void QTreeWidget_EditItem2(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_OpenPersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column);
void QTreeWidget_ClosePersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column);
bool QTreeWidget_IsPersistentEditorOpen2(const QTreeWidget* self, QTreeWidgetItem* item, int column);
struct miqt_array* QTreeWidget_FindItems3(const QTreeWidget* self, struct miqt_string* text, int flags, int column);
void QTreeWidget_ScrollToItem2(QTreeWidget* self, QTreeWidgetItem* item, int hint);
void QTreeWidget_Delete(QTreeWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
