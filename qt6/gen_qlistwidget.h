#pragma once
#ifndef MIQT_QT6_GEN_QLISTWIDGET_H
#define MIQT_QT6_GEN_QLISTWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QDataStream;
class QFont;
class QIcon;
class QItemSelectionModel;
class QListWidget;
class QListWidgetItem;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QPoint;
class QRect;
class QSize;
class QVariant;
class QWidget;
#else
typedef struct QBrush QBrush;
typedef struct QDataStream QDataStream;
typedef struct QFont QFont;
typedef struct QIcon QIcon;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QListWidget QListWidget;
typedef struct QListWidgetItem QListWidgetItem;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QListWidgetItem* QListWidgetItem_new();
QListWidgetItem* QListWidgetItem_new2(struct miqt_string text);
QListWidgetItem* QListWidgetItem_new3(QIcon* icon, struct miqt_string text);
QListWidgetItem* QListWidgetItem_new4(QListWidgetItem* other);
QListWidgetItem* QListWidgetItem_new5(QListWidget* listview);
QListWidgetItem* QListWidgetItem_new6(QListWidget* listview, int typeVal);
QListWidgetItem* QListWidgetItem_new7(struct miqt_string text, QListWidget* listview);
QListWidgetItem* QListWidgetItem_new8(struct miqt_string text, QListWidget* listview, int typeVal);
QListWidgetItem* QListWidgetItem_new9(QIcon* icon, struct miqt_string text, QListWidget* listview);
QListWidgetItem* QListWidgetItem_new10(QIcon* icon, struct miqt_string text, QListWidget* listview, int typeVal);
QListWidgetItem* QListWidgetItem_Clone(const QListWidgetItem* self);
QListWidget* QListWidgetItem_ListWidget(const QListWidgetItem* self);
void QListWidgetItem_SetSelected(QListWidgetItem* self, bool selectVal);
bool QListWidgetItem_IsSelected(const QListWidgetItem* self);
void QListWidgetItem_SetHidden(QListWidgetItem* self, bool hide);
bool QListWidgetItem_IsHidden(const QListWidgetItem* self);
int QListWidgetItem_Flags(const QListWidgetItem* self);
void QListWidgetItem_SetFlags(QListWidgetItem* self, int flags);
struct miqt_string QListWidgetItem_Text(const QListWidgetItem* self);
void QListWidgetItem_SetText(QListWidgetItem* self, struct miqt_string text);
QIcon* QListWidgetItem_Icon(const QListWidgetItem* self);
void QListWidgetItem_SetIcon(QListWidgetItem* self, QIcon* icon);
struct miqt_string QListWidgetItem_StatusTip(const QListWidgetItem* self);
void QListWidgetItem_SetStatusTip(QListWidgetItem* self, struct miqt_string statusTip);
struct miqt_string QListWidgetItem_ToolTip(const QListWidgetItem* self);
void QListWidgetItem_SetToolTip(QListWidgetItem* self, struct miqt_string toolTip);
struct miqt_string QListWidgetItem_WhatsThis(const QListWidgetItem* self);
void QListWidgetItem_SetWhatsThis(QListWidgetItem* self, struct miqt_string whatsThis);
QFont* QListWidgetItem_Font(const QListWidgetItem* self);
void QListWidgetItem_SetFont(QListWidgetItem* self, QFont* font);
int QListWidgetItem_TextAlignment(const QListWidgetItem* self);
void QListWidgetItem_SetTextAlignment(QListWidgetItem* self, int alignment);
void QListWidgetItem_SetTextAlignmentWithAlignment(QListWidgetItem* self, int alignment);
void QListWidgetItem_SetTextAlignment2(QListWidgetItem* self, int alignment);
QBrush* QListWidgetItem_Background(const QListWidgetItem* self);
void QListWidgetItem_SetBackground(QListWidgetItem* self, QBrush* brush);
QBrush* QListWidgetItem_Foreground(const QListWidgetItem* self);
void QListWidgetItem_SetForeground(QListWidgetItem* self, QBrush* brush);
int QListWidgetItem_CheckState(const QListWidgetItem* self);
void QListWidgetItem_SetCheckState(QListWidgetItem* self, int state);
QSize* QListWidgetItem_SizeHint(const QListWidgetItem* self);
void QListWidgetItem_SetSizeHint(QListWidgetItem* self, QSize* size);
QVariant* QListWidgetItem_Data(const QListWidgetItem* self, int role);
void QListWidgetItem_SetData(QListWidgetItem* self, int role, QVariant* value);
bool QListWidgetItem_OperatorLesser(const QListWidgetItem* self, QListWidgetItem* other);
void QListWidgetItem_Read(QListWidgetItem* self, QDataStream* in);
void QListWidgetItem_Write(const QListWidgetItem* self, QDataStream* out);
void QListWidgetItem_OperatorAssign(QListWidgetItem* self, QListWidgetItem* other);
int QListWidgetItem_Type(const QListWidgetItem* self);
void QListWidgetItem_Delete(QListWidgetItem* self);

QListWidget* QListWidget_new(QWidget* parent);
QListWidget* QListWidget_new2();
QMetaObject* QListWidget_MetaObject(const QListWidget* self);
void* QListWidget_Metacast(QListWidget* self, const char* param1);
struct miqt_string QListWidget_Tr(const char* s);
void QListWidget_SetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel);
QListWidgetItem* QListWidget_Item(const QListWidget* self, int row);
int QListWidget_Row(const QListWidget* self, QListWidgetItem* item);
void QListWidget_InsertItem(QListWidget* self, int row, QListWidgetItem* item);
void QListWidget_InsertItem2(QListWidget* self, int row, struct miqt_string label);
void QListWidget_InsertItems(QListWidget* self, int row, struct miqt_array /* of struct miqt_string */  labels);
void QListWidget_AddItem(QListWidget* self, struct miqt_string label);
void QListWidget_AddItemWithItem(QListWidget* self, QListWidgetItem* item);
void QListWidget_AddItems(QListWidget* self, struct miqt_array /* of struct miqt_string */  labels);
QListWidgetItem* QListWidget_TakeItem(QListWidget* self, int row);
int QListWidget_Count(const QListWidget* self);
QListWidgetItem* QListWidget_CurrentItem(const QListWidget* self);
void QListWidget_SetCurrentItem(QListWidget* self, QListWidgetItem* item);
void QListWidget_SetCurrentItem2(QListWidget* self, QListWidgetItem* item, int command);
int QListWidget_CurrentRow(const QListWidget* self);
void QListWidget_SetCurrentRow(QListWidget* self, int row);
void QListWidget_SetCurrentRow2(QListWidget* self, int row, int command);
QListWidgetItem* QListWidget_ItemAt(const QListWidget* self, QPoint* p);
QListWidgetItem* QListWidget_ItemAt2(const QListWidget* self, int x, int y);
QRect* QListWidget_VisualItemRect(const QListWidget* self, QListWidgetItem* item);
void QListWidget_SortItems(QListWidget* self);
void QListWidget_SetSortingEnabled(QListWidget* self, bool enable);
bool QListWidget_IsSortingEnabled(const QListWidget* self);
void QListWidget_EditItem(QListWidget* self, QListWidgetItem* item);
void QListWidget_OpenPersistentEditor(QListWidget* self, QListWidgetItem* item);
void QListWidget_ClosePersistentEditor(QListWidget* self, QListWidgetItem* item);
bool QListWidget_IsPersistentEditorOpen(const QListWidget* self, QListWidgetItem* item);
QWidget* QListWidget_ItemWidget(const QListWidget* self, QListWidgetItem* item);
void QListWidget_SetItemWidget(QListWidget* self, QListWidgetItem* item, QWidget* widget);
void QListWidget_RemoveItemWidget(QListWidget* self, QListWidgetItem* item);
struct miqt_array /* of QListWidgetItem* */  QListWidget_SelectedItems(const QListWidget* self);
struct miqt_array /* of QListWidgetItem* */  QListWidget_FindItems(const QListWidget* self, struct miqt_string text, int flags);
struct miqt_array /* of QListWidgetItem* */  QListWidget_Items(const QListWidget* self, QMimeData* data);
QModelIndex* QListWidget_IndexFromItem(const QListWidget* self, QListWidgetItem* item);
QListWidgetItem* QListWidget_ItemFromIndex(const QListWidget* self, QModelIndex* index);
void QListWidget_ScrollToItem(QListWidget* self, QListWidgetItem* item);
void QListWidget_Clear(QListWidget* self);
void QListWidget_ItemPressed(QListWidget* self, QListWidgetItem* item);
void QListWidget_connect_ItemPressed(QListWidget* self, intptr_t slot);
void QListWidget_ItemClicked(QListWidget* self, QListWidgetItem* item);
void QListWidget_connect_ItemClicked(QListWidget* self, intptr_t slot);
void QListWidget_ItemDoubleClicked(QListWidget* self, QListWidgetItem* item);
void QListWidget_connect_ItemDoubleClicked(QListWidget* self, intptr_t slot);
void QListWidget_ItemActivated(QListWidget* self, QListWidgetItem* item);
void QListWidget_connect_ItemActivated(QListWidget* self, intptr_t slot);
void QListWidget_ItemEntered(QListWidget* self, QListWidgetItem* item);
void QListWidget_connect_ItemEntered(QListWidget* self, intptr_t slot);
void QListWidget_ItemChanged(QListWidget* self, QListWidgetItem* item);
void QListWidget_connect_ItemChanged(QListWidget* self, intptr_t slot);
void QListWidget_CurrentItemChanged(QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous);
void QListWidget_connect_CurrentItemChanged(QListWidget* self, intptr_t slot);
void QListWidget_CurrentTextChanged(QListWidget* self, struct miqt_string currentText);
void QListWidget_connect_CurrentTextChanged(QListWidget* self, intptr_t slot);
void QListWidget_CurrentRowChanged(QListWidget* self, int currentRow);
void QListWidget_connect_CurrentRowChanged(QListWidget* self, intptr_t slot);
void QListWidget_ItemSelectionChanged(QListWidget* self);
void QListWidget_connect_ItemSelectionChanged(QListWidget* self, intptr_t slot);
struct miqt_string QListWidget_Tr2(const char* s, const char* c);
struct miqt_string QListWidget_Tr3(const char* s, const char* c, int n);
void QListWidget_SortItems1(QListWidget* self, int order);
void QListWidget_ScrollToItem2(QListWidget* self, QListWidgetItem* item, int hint);
void QListWidget_Delete(QListWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
