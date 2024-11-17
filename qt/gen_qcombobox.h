#pragma once
#ifndef MIQT_QT_GEN_QCOMBOBOX_H
#define MIQT_QT_GEN_QCOMBOBOX_H

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
class QComboBox;
class QCompleter;
class QEvent;
class QIcon;
class QLineEdit;
class QMetaObject;
class QModelIndex;
class QSize;
class QValidator;
class QVariant;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QComboBox QComboBox;
typedef struct QCompleter QCompleter;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QLineEdit QLineEdit;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QSize QSize;
typedef struct QValidator QValidator;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QComboBox* QComboBox_new(QWidget* parent);
QComboBox* QComboBox_new2();
QMetaObject* QComboBox_MetaObject(const QComboBox* self);
void* QComboBox_Metacast(QComboBox* self, const char* param1);
struct miqt_string QComboBox_Tr(const char* s);
struct miqt_string QComboBox_TrUtf8(const char* s);
int QComboBox_MaxVisibleItems(const QComboBox* self);
void QComboBox_SetMaxVisibleItems(QComboBox* self, int maxItems);
int QComboBox_Count(const QComboBox* self);
void QComboBox_SetMaxCount(QComboBox* self, int max);
int QComboBox_MaxCount(const QComboBox* self);
bool QComboBox_AutoCompletion(const QComboBox* self);
void QComboBox_SetAutoCompletion(QComboBox* self, bool enable);
int QComboBox_AutoCompletionCaseSensitivity(const QComboBox* self);
void QComboBox_SetAutoCompletionCaseSensitivity(QComboBox* self, int sensitivity);
bool QComboBox_DuplicatesEnabled(const QComboBox* self);
void QComboBox_SetDuplicatesEnabled(QComboBox* self, bool enable);
void QComboBox_SetFrame(QComboBox* self, bool frame);
bool QComboBox_HasFrame(const QComboBox* self);
int QComboBox_FindText(const QComboBox* self, struct miqt_string text);
int QComboBox_FindData(const QComboBox* self, QVariant* data);
int QComboBox_InsertPolicy(const QComboBox* self);
void QComboBox_SetInsertPolicy(QComboBox* self, int policy);
int QComboBox_SizeAdjustPolicy(const QComboBox* self);
void QComboBox_SetSizeAdjustPolicy(QComboBox* self, int policy);
int QComboBox_MinimumContentsLength(const QComboBox* self);
void QComboBox_SetMinimumContentsLength(QComboBox* self, int characters);
QSize* QComboBox_IconSize(const QComboBox* self);
void QComboBox_SetIconSize(QComboBox* self, QSize* size);
void QComboBox_SetPlaceholderText(QComboBox* self, struct miqt_string placeholderText);
struct miqt_string QComboBox_PlaceholderText(const QComboBox* self);
bool QComboBox_IsEditable(const QComboBox* self);
void QComboBox_SetEditable(QComboBox* self, bool editable);
void QComboBox_SetLineEdit(QComboBox* self, QLineEdit* edit);
QLineEdit* QComboBox_LineEdit(const QComboBox* self);
void QComboBox_SetValidator(QComboBox* self, QValidator* v);
QValidator* QComboBox_Validator(const QComboBox* self);
void QComboBox_SetCompleter(QComboBox* self, QCompleter* c);
QCompleter* QComboBox_Completer(const QComboBox* self);
QAbstractItemDelegate* QComboBox_ItemDelegate(const QComboBox* self);
void QComboBox_SetItemDelegate(QComboBox* self, QAbstractItemDelegate* delegate);
QAbstractItemModel* QComboBox_Model(const QComboBox* self);
void QComboBox_SetModel(QComboBox* self, QAbstractItemModel* model);
QModelIndex* QComboBox_RootModelIndex(const QComboBox* self);
void QComboBox_SetRootModelIndex(QComboBox* self, QModelIndex* index);
int QComboBox_ModelColumn(const QComboBox* self);
void QComboBox_SetModelColumn(QComboBox* self, int visibleColumn);
int QComboBox_CurrentIndex(const QComboBox* self);
struct miqt_string QComboBox_CurrentText(const QComboBox* self);
QVariant* QComboBox_CurrentData(const QComboBox* self);
struct miqt_string QComboBox_ItemText(const QComboBox* self, int index);
QIcon* QComboBox_ItemIcon(const QComboBox* self, int index);
QVariant* QComboBox_ItemData(const QComboBox* self, int index);
void QComboBox_AddItem(QComboBox* self, struct miqt_string text);
void QComboBox_AddItem2(QComboBox* self, QIcon* icon, struct miqt_string text);
void QComboBox_AddItems(QComboBox* self, struct miqt_array /* of struct miqt_string */  texts);
void QComboBox_InsertItem(QComboBox* self, int index, struct miqt_string text);
void QComboBox_InsertItem2(QComboBox* self, int index, QIcon* icon, struct miqt_string text);
void QComboBox_InsertItems(QComboBox* self, int index, struct miqt_array /* of struct miqt_string */  texts);
void QComboBox_InsertSeparator(QComboBox* self, int index);
void QComboBox_RemoveItem(QComboBox* self, int index);
void QComboBox_SetItemText(QComboBox* self, int index, struct miqt_string text);
void QComboBox_SetItemIcon(QComboBox* self, int index, QIcon* icon);
void QComboBox_SetItemData(QComboBox* self, int index, QVariant* value);
QAbstractItemView* QComboBox_View(const QComboBox* self);
void QComboBox_SetView(QComboBox* self, QAbstractItemView* itemView);
QSize* QComboBox_SizeHint(const QComboBox* self);
QSize* QComboBox_MinimumSizeHint(const QComboBox* self);
void QComboBox_ShowPopup(QComboBox* self);
void QComboBox_HidePopup(QComboBox* self);
bool QComboBox_Event(QComboBox* self, QEvent* event);
QVariant* QComboBox_InputMethodQuery(const QComboBox* self, int param1);
QVariant* QComboBox_InputMethodQuery2(const QComboBox* self, int query, QVariant* argument);
void QComboBox_Clear(QComboBox* self);
void QComboBox_ClearEditText(QComboBox* self);
void QComboBox_SetEditText(QComboBox* self, struct miqt_string text);
void QComboBox_SetCurrentIndex(QComboBox* self, int index);
void QComboBox_SetCurrentText(QComboBox* self, struct miqt_string text);
void QComboBox_EditTextChanged(QComboBox* self, struct miqt_string param1);
void QComboBox_connect_EditTextChanged(QComboBox* self, intptr_t slot);
void QComboBox_Activated(QComboBox* self, int index);
void QComboBox_connect_Activated(QComboBox* self, intptr_t slot);
void QComboBox_TextActivated(QComboBox* self, struct miqt_string param1);
void QComboBox_connect_TextActivated(QComboBox* self, intptr_t slot);
void QComboBox_Highlighted(QComboBox* self, int index);
void QComboBox_connect_Highlighted(QComboBox* self, intptr_t slot);
void QComboBox_TextHighlighted(QComboBox* self, struct miqt_string param1);
void QComboBox_connect_TextHighlighted(QComboBox* self, intptr_t slot);
void QComboBox_CurrentIndexChanged(QComboBox* self, int index);
void QComboBox_connect_CurrentIndexChanged(QComboBox* self, intptr_t slot);
void QComboBox_CurrentIndexChangedWithQString(QComboBox* self, struct miqt_string param1);
void QComboBox_connect_CurrentIndexChangedWithQString(QComboBox* self, intptr_t slot);
void QComboBox_CurrentTextChanged(QComboBox* self, struct miqt_string param1);
void QComboBox_connect_CurrentTextChanged(QComboBox* self, intptr_t slot);
void QComboBox_ActivatedWithQString(QComboBox* self, struct miqt_string param1);
void QComboBox_connect_ActivatedWithQString(QComboBox* self, intptr_t slot);
void QComboBox_HighlightedWithQString(QComboBox* self, struct miqt_string param1);
void QComboBox_connect_HighlightedWithQString(QComboBox* self, intptr_t slot);
struct miqt_string QComboBox_Tr2(const char* s, const char* c);
struct miqt_string QComboBox_Tr3(const char* s, const char* c, int n);
struct miqt_string QComboBox_TrUtf82(const char* s, const char* c);
struct miqt_string QComboBox_TrUtf83(const char* s, const char* c, int n);
int QComboBox_FindText2(const QComboBox* self, struct miqt_string text, int flags);
int QComboBox_FindData2(const QComboBox* self, QVariant* data, int role);
int QComboBox_FindData3(const QComboBox* self, QVariant* data, int role, int flags);
QVariant* QComboBox_CurrentData1(const QComboBox* self, int role);
QVariant* QComboBox_ItemData2(const QComboBox* self, int index, int role);
void QComboBox_AddItem22(QComboBox* self, struct miqt_string text, QVariant* userData);
void QComboBox_AddItem3(QComboBox* self, QIcon* icon, struct miqt_string text, QVariant* userData);
void QComboBox_InsertItem3(QComboBox* self, int index, struct miqt_string text, QVariant* userData);
void QComboBox_InsertItem4(QComboBox* self, int index, QIcon* icon, struct miqt_string text, QVariant* userData);
void QComboBox_SetItemData3(QComboBox* self, int index, QVariant* value, int role);
void QComboBox_Delete(QComboBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
