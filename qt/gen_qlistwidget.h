#ifndef GEN_QLISTWIDGET_H
#define GEN_QLISTWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QColor;
class QDataStream;
class QDropEvent;
class QFont;
class QIcon;
class QItemSelectionModel;
class QListWidget;
class QListWidgetItem;
class QMetaObject;
class QPoint;
class QRect;
class QSize;
class QVariant;
class QWidget;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QDataStream QDataStream;
typedef struct QDropEvent QDropEvent;
typedef struct QFont QFont;
typedef struct QIcon QIcon;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QListWidget QListWidget;
typedef struct QListWidgetItem QListWidgetItem;
typedef struct QMetaObject QMetaObject;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QListWidgetItem* QListWidgetItem_new();
QListWidgetItem* QListWidgetItem_new2(const char* text, size_t text_Strlen);
QListWidgetItem* QListWidgetItem_new3(QIcon* icon, const char* text, size_t text_Strlen);
QListWidgetItem* QListWidgetItem_new4(QListWidgetItem* other);
QListWidgetItem* QListWidgetItem_new5(QListWidget* listview);
QListWidgetItem* QListWidgetItem_new6(QListWidget* listview, int typeVal);
QListWidgetItem* QListWidgetItem_new7(const char* text, size_t text_Strlen, QListWidget* listview);
QListWidgetItem* QListWidgetItem_new8(const char* text, size_t text_Strlen, QListWidget* listview, int typeVal);
QListWidgetItem* QListWidgetItem_new9(QIcon* icon, const char* text, size_t text_Strlen, QListWidget* listview);
QListWidgetItem* QListWidgetItem_new10(QIcon* icon, const char* text, size_t text_Strlen, QListWidget* listview, int typeVal);
QListWidgetItem* QListWidgetItem_Clone(const QListWidgetItem* self);
QListWidget* QListWidgetItem_ListWidget(const QListWidgetItem* self);
void QListWidgetItem_SetSelected(QListWidgetItem* self, bool selectVal);
bool QListWidgetItem_IsSelected(const QListWidgetItem* self);
void QListWidgetItem_SetHidden(QListWidgetItem* self, bool hide);
bool QListWidgetItem_IsHidden(const QListWidgetItem* self);
int QListWidgetItem_Flags(const QListWidgetItem* self);
void QListWidgetItem_SetFlags(QListWidgetItem* self, int flags);
void QListWidgetItem_Text(const QListWidgetItem* self, char** _out, int* _out_Strlen);
void QListWidgetItem_SetText(QListWidgetItem* self, const char* text, size_t text_Strlen);
QIcon* QListWidgetItem_Icon(const QListWidgetItem* self);
void QListWidgetItem_SetIcon(QListWidgetItem* self, QIcon* icon);
void QListWidgetItem_StatusTip(const QListWidgetItem* self, char** _out, int* _out_Strlen);
void QListWidgetItem_SetStatusTip(QListWidgetItem* self, const char* statusTip, size_t statusTip_Strlen);
void QListWidgetItem_ToolTip(const QListWidgetItem* self, char** _out, int* _out_Strlen);
void QListWidgetItem_SetToolTip(QListWidgetItem* self, const char* toolTip, size_t toolTip_Strlen);
void QListWidgetItem_WhatsThis(const QListWidgetItem* self, char** _out, int* _out_Strlen);
void QListWidgetItem_SetWhatsThis(QListWidgetItem* self, const char* whatsThis, size_t whatsThis_Strlen);
QFont* QListWidgetItem_Font(const QListWidgetItem* self);
void QListWidgetItem_SetFont(QListWidgetItem* self, QFont* font);
int QListWidgetItem_TextAlignment(const QListWidgetItem* self);
void QListWidgetItem_SetTextAlignment(QListWidgetItem* self, int alignment);
QColor* QListWidgetItem_BackgroundColor(const QListWidgetItem* self);
void QListWidgetItem_SetBackgroundColor(QListWidgetItem* self, QColor* color);
QBrush* QListWidgetItem_Background(const QListWidgetItem* self);
void QListWidgetItem_SetBackground(QListWidgetItem* self, QBrush* brush);
QColor* QListWidgetItem_TextColor(const QListWidgetItem* self);
void QListWidgetItem_SetTextColor(QListWidgetItem* self, QColor* color);
QBrush* QListWidgetItem_Foreground(const QListWidgetItem* self);
void QListWidgetItem_SetForeground(QListWidgetItem* self, QBrush* brush);
uintptr_t QListWidgetItem_CheckState(const QListWidgetItem* self);
void QListWidgetItem_SetCheckState(QListWidgetItem* self, uintptr_t state);
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

QListWidget* QListWidget_new();
QListWidget* QListWidget_new2(QWidget* parent);
QMetaObject* QListWidget_MetaObject(const QListWidget* self);
void QListWidget_Tr(const char* s, char** _out, int* _out_Strlen);
void QListWidget_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QListWidget_SetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel);
QListWidgetItem* QListWidget_Item(const QListWidget* self, int row);
int QListWidget_Row(const QListWidget* self, QListWidgetItem* item);
void QListWidget_InsertItem(QListWidget* self, int row, QListWidgetItem* item);
void QListWidget_InsertItem2(QListWidget* self, int row, const char* label, size_t label_Strlen);
void QListWidget_InsertItems(QListWidget* self, int row, char** labels, uint64_t* labels_Lengths, size_t labels_len);
void QListWidget_AddItem(QListWidget* self, const char* label, size_t label_Strlen);
void QListWidget_AddItemWithItem(QListWidget* self, QListWidgetItem* item);
void QListWidget_AddItems(QListWidget* self, char** labels, uint64_t* labels_Lengths, size_t labels_len);
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
bool QListWidget_IsItemSelected(const QListWidget* self, QListWidgetItem* item);
void QListWidget_SetItemSelected(QListWidget* self, QListWidgetItem* item, bool selectVal);
void QListWidget_SelectedItems(const QListWidget* self, QListWidgetItem*** _out, size_t* _out_len);
void QListWidget_FindItems(const QListWidget* self, const char* text, size_t text_Strlen, int flags, QListWidgetItem*** _out, size_t* _out_len);
bool QListWidget_IsItemHidden(const QListWidget* self, QListWidgetItem* item);
void QListWidget_SetItemHidden(QListWidget* self, QListWidgetItem* item, bool hide);
void QListWidget_DropEvent(QListWidget* self, QDropEvent* event);
void QListWidget_ScrollToItem(QListWidget* self, QListWidgetItem* item);
void QListWidget_Clear(QListWidget* self);
void QListWidget_ItemPressed(QListWidget* self, QListWidgetItem* item);
void QListWidget_connect_ItemPressed(QListWidget* self, void* slot);
void QListWidget_ItemClicked(QListWidget* self, QListWidgetItem* item);
void QListWidget_connect_ItemClicked(QListWidget* self, void* slot);
void QListWidget_ItemDoubleClicked(QListWidget* self, QListWidgetItem* item);
void QListWidget_connect_ItemDoubleClicked(QListWidget* self, void* slot);
void QListWidget_ItemActivated(QListWidget* self, QListWidgetItem* item);
void QListWidget_connect_ItemActivated(QListWidget* self, void* slot);
void QListWidget_ItemEntered(QListWidget* self, QListWidgetItem* item);
void QListWidget_connect_ItemEntered(QListWidget* self, void* slot);
void QListWidget_ItemChanged(QListWidget* self, QListWidgetItem* item);
void QListWidget_connect_ItemChanged(QListWidget* self, void* slot);
void QListWidget_CurrentItemChanged(QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous);
void QListWidget_connect_CurrentItemChanged(QListWidget* self, void* slot);
void QListWidget_CurrentTextChanged(QListWidget* self, const char* currentText, size_t currentText_Strlen);
void QListWidget_connect_CurrentTextChanged(QListWidget* self, void* slot);
void QListWidget_CurrentRowChanged(QListWidget* self, int currentRow);
void QListWidget_connect_CurrentRowChanged(QListWidget* self, void* slot);
void QListWidget_ItemSelectionChanged(QListWidget* self);
void QListWidget_connect_ItemSelectionChanged(QListWidget* self, void* slot);
void QListWidget_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QListWidget_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QListWidget_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QListWidget_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QListWidget_SortItems1(QListWidget* self, uintptr_t order);
void QListWidget_ScrollToItem2(QListWidget* self, QListWidgetItem* item, uintptr_t hint);
void QListWidget_Delete(QListWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
