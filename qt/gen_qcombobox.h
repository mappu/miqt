#ifndef GEN_QCOMBOBOX_H
#define GEN_QCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QComboBox* QComboBox_new();
QComboBox* QComboBox_new2(QWidget* parent);
QMetaObject* QComboBox_MetaObject(QComboBox* self);
void QComboBox_Tr(const char* s, char** _out, int* _out_Strlen);
void QComboBox_TrUtf8(const char* s, char** _out, int* _out_Strlen);
int QComboBox_MaxVisibleItems(QComboBox* self);
void QComboBox_SetMaxVisibleItems(QComboBox* self, int maxItems);
int QComboBox_Count(QComboBox* self);
void QComboBox_SetMaxCount(QComboBox* self, int max);
int QComboBox_MaxCount(QComboBox* self);
bool QComboBox_AutoCompletion(QComboBox* self);
void QComboBox_SetAutoCompletion(QComboBox* self, bool enable);
uintptr_t QComboBox_AutoCompletionCaseSensitivity(QComboBox* self);
void QComboBox_SetAutoCompletionCaseSensitivity(QComboBox* self, uintptr_t sensitivity);
bool QComboBox_DuplicatesEnabled(QComboBox* self);
void QComboBox_SetDuplicatesEnabled(QComboBox* self, bool enable);
void QComboBox_SetFrame(QComboBox* self, bool frame);
bool QComboBox_HasFrame(QComboBox* self);
int QComboBox_FindText(QComboBox* self, const char* text, size_t text_Strlen);
int QComboBox_FindData(QComboBox* self, QVariant* data);
uintptr_t QComboBox_InsertPolicy(QComboBox* self);
void QComboBox_SetInsertPolicy(QComboBox* self, uintptr_t policy);
uintptr_t QComboBox_SizeAdjustPolicy(QComboBox* self);
void QComboBox_SetSizeAdjustPolicy(QComboBox* self, uintptr_t policy);
int QComboBox_MinimumContentsLength(QComboBox* self);
void QComboBox_SetMinimumContentsLength(QComboBox* self, int characters);
QSize* QComboBox_IconSize(QComboBox* self);
void QComboBox_SetIconSize(QComboBox* self, QSize* size);
void QComboBox_SetPlaceholderText(QComboBox* self, const char* placeholderText, size_t placeholderText_Strlen);
void QComboBox_PlaceholderText(QComboBox* self, char** _out, int* _out_Strlen);
bool QComboBox_IsEditable(QComboBox* self);
void QComboBox_SetEditable(QComboBox* self, bool editable);
void QComboBox_SetLineEdit(QComboBox* self, QLineEdit* edit);
QLineEdit* QComboBox_LineEdit(QComboBox* self);
void QComboBox_SetValidator(QComboBox* self, QValidator* v);
QValidator* QComboBox_Validator(QComboBox* self);
void QComboBox_SetCompleter(QComboBox* self, QCompleter* c);
QCompleter* QComboBox_Completer(QComboBox* self);
QAbstractItemDelegate* QComboBox_ItemDelegate(QComboBox* self);
void QComboBox_SetItemDelegate(QComboBox* self, QAbstractItemDelegate* delegate);
QAbstractItemModel* QComboBox_Model(QComboBox* self);
void QComboBox_SetModel(QComboBox* self, QAbstractItemModel* model);
QModelIndex* QComboBox_RootModelIndex(QComboBox* self);
void QComboBox_SetRootModelIndex(QComboBox* self, QModelIndex* index);
int QComboBox_ModelColumn(QComboBox* self);
void QComboBox_SetModelColumn(QComboBox* self, int visibleColumn);
int QComboBox_CurrentIndex(QComboBox* self);
void QComboBox_CurrentText(QComboBox* self, char** _out, int* _out_Strlen);
QVariant* QComboBox_CurrentData(QComboBox* self);
void QComboBox_ItemText(QComboBox* self, int index, char** _out, int* _out_Strlen);
QIcon* QComboBox_ItemIcon(QComboBox* self, int index);
QVariant* QComboBox_ItemData(QComboBox* self, int index);
void QComboBox_AddItem(QComboBox* self, const char* text, size_t text_Strlen);
void QComboBox_AddItem2(QComboBox* self, QIcon* icon, const char* text, size_t text_Strlen);
void QComboBox_AddItems(QComboBox* self, char** texts, uint64_t* texts_Lengths, size_t texts_len);
void QComboBox_InsertItem(QComboBox* self, int index, const char* text, size_t text_Strlen);
void QComboBox_InsertItem2(QComboBox* self, int index, QIcon* icon, const char* text, size_t text_Strlen);
void QComboBox_InsertItems(QComboBox* self, int index, char** texts, uint64_t* texts_Lengths, size_t texts_len);
void QComboBox_InsertSeparator(QComboBox* self, int index);
void QComboBox_RemoveItem(QComboBox* self, int index);
void QComboBox_SetItemText(QComboBox* self, int index, const char* text, size_t text_Strlen);
void QComboBox_SetItemIcon(QComboBox* self, int index, QIcon* icon);
void QComboBox_SetItemData(QComboBox* self, int index, QVariant* value);
QAbstractItemView* QComboBox_View(QComboBox* self);
void QComboBox_SetView(QComboBox* self, QAbstractItemView* itemView);
QSize* QComboBox_SizeHint(QComboBox* self);
QSize* QComboBox_MinimumSizeHint(QComboBox* self);
void QComboBox_ShowPopup(QComboBox* self);
void QComboBox_HidePopup(QComboBox* self);
bool QComboBox_Event(QComboBox* self, QEvent* event);
QVariant* QComboBox_InputMethodQuery(QComboBox* self, uintptr_t param1);
QVariant* QComboBox_InputMethodQuery2(QComboBox* self, uintptr_t query, QVariant* argument);
void QComboBox_Clear(QComboBox* self);
void QComboBox_ClearEditText(QComboBox* self);
void QComboBox_SetEditText(QComboBox* self, const char* text, size_t text_Strlen);
void QComboBox_SetCurrentIndex(QComboBox* self, int index);
void QComboBox_SetCurrentText(QComboBox* self, const char* text, size_t text_Strlen);
void QComboBox_EditTextChanged(QComboBox* self, const char* param1, size_t param1_Strlen);
void QComboBox_connect_EditTextChanged(QComboBox* self, void* slot);
void QComboBox_Activated(QComboBox* self, int index);
void QComboBox_connect_Activated(QComboBox* self, void* slot);
void QComboBox_TextActivated(QComboBox* self, const char* param1, size_t param1_Strlen);
void QComboBox_connect_TextActivated(QComboBox* self, void* slot);
void QComboBox_Highlighted(QComboBox* self, int index);
void QComboBox_connect_Highlighted(QComboBox* self, void* slot);
void QComboBox_TextHighlighted(QComboBox* self, const char* param1, size_t param1_Strlen);
void QComboBox_connect_TextHighlighted(QComboBox* self, void* slot);
void QComboBox_CurrentIndexChanged(QComboBox* self, int index);
void QComboBox_connect_CurrentIndexChanged(QComboBox* self, void* slot);
void QComboBox_CurrentIndexChangedWithQString(QComboBox* self, const char* param1, size_t param1_Strlen);
void QComboBox_connect_CurrentIndexChangedWithQString(QComboBox* self, void* slot);
void QComboBox_CurrentTextChanged(QComboBox* self, const char* param1, size_t param1_Strlen);
void QComboBox_connect_CurrentTextChanged(QComboBox* self, void* slot);
void QComboBox_ActivatedWithQString(QComboBox* self, const char* param1, size_t param1_Strlen);
void QComboBox_connect_ActivatedWithQString(QComboBox* self, void* slot);
void QComboBox_HighlightedWithQString(QComboBox* self, const char* param1, size_t param1_Strlen);
void QComboBox_connect_HighlightedWithQString(QComboBox* self, void* slot);
void QComboBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QComboBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QComboBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QComboBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
int QComboBox_FindText2(QComboBox* self, const char* text, size_t text_Strlen, int flags);
int QComboBox_FindData2(QComboBox* self, QVariant* data, int role);
int QComboBox_FindData3(QComboBox* self, QVariant* data, int role, int flags);
QVariant* QComboBox_CurrentData1(QComboBox* self, int role);
QVariant* QComboBox_ItemData2(QComboBox* self, int index, int role);
void QComboBox_AddItem22(QComboBox* self, const char* text, size_t text_Strlen, QVariant* userData);
void QComboBox_AddItem3(QComboBox* self, QIcon* icon, const char* text, size_t text_Strlen, QVariant* userData);
void QComboBox_InsertItem3(QComboBox* self, int index, const char* text, size_t text_Strlen, QVariant* userData);
void QComboBox_InsertItem4(QComboBox* self, int index, QIcon* icon, const char* text, size_t text_Strlen, QVariant* userData);
void QComboBox_SetItemData3(QComboBox* self, int index, QVariant* value, int role);
void QComboBox_Delete(QComboBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
