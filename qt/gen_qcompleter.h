#ifndef GEN_QCOMPLETER_H
#define GEN_QCOMPLETER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QAbstractItemView;
class QCompleter;
class QMetaObject;
class QModelIndex;
class QObject;
class QRect;
class QWidget;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QCompleter QCompleter;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QWidget QWidget;
#endif

QCompleter* QCompleter_new();
QCompleter* QCompleter_new2(QAbstractItemModel* model);
QCompleter* QCompleter_new3(char** completions, uint64_t* completions_Lengths, size_t completions_len);
QCompleter* QCompleter_new4(QObject* parent);
QCompleter* QCompleter_new5(QAbstractItemModel* model, QObject* parent);
QCompleter* QCompleter_new6(char** completions, uint64_t* completions_Lengths, size_t completions_len, QObject* parent);
QMetaObject* QCompleter_MetaObject(QCompleter* self);
void QCompleter_Tr(const char* s, char** _out, int* _out_Strlen);
void QCompleter_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QCompleter_SetWidget(QCompleter* self, QWidget* widget);
QWidget* QCompleter_Widget(QCompleter* self);
void QCompleter_SetModel(QCompleter* self, QAbstractItemModel* c);
QAbstractItemModel* QCompleter_Model(QCompleter* self);
void QCompleter_SetCompletionMode(QCompleter* self, uintptr_t mode);
uintptr_t QCompleter_CompletionMode(QCompleter* self);
void QCompleter_SetFilterMode(QCompleter* self, int filterMode);
int QCompleter_FilterMode(QCompleter* self);
QAbstractItemView* QCompleter_Popup(QCompleter* self);
void QCompleter_SetPopup(QCompleter* self, QAbstractItemView* popup);
void QCompleter_SetCaseSensitivity(QCompleter* self, uintptr_t caseSensitivity);
uintptr_t QCompleter_CaseSensitivity(QCompleter* self);
void QCompleter_SetModelSorting(QCompleter* self, uintptr_t sorting);
uintptr_t QCompleter_ModelSorting(QCompleter* self);
void QCompleter_SetCompletionColumn(QCompleter* self, int column);
int QCompleter_CompletionColumn(QCompleter* self);
void QCompleter_SetCompletionRole(QCompleter* self, int role);
int QCompleter_CompletionRole(QCompleter* self);
bool QCompleter_WrapAround(QCompleter* self);
int QCompleter_MaxVisibleItems(QCompleter* self);
void QCompleter_SetMaxVisibleItems(QCompleter* self, int maxItems);
int QCompleter_CompletionCount(QCompleter* self);
bool QCompleter_SetCurrentRow(QCompleter* self, int row);
int QCompleter_CurrentRow(QCompleter* self);
QModelIndex* QCompleter_CurrentIndex(QCompleter* self);
void QCompleter_CurrentCompletion(QCompleter* self, char** _out, int* _out_Strlen);
QAbstractItemModel* QCompleter_CompletionModel(QCompleter* self);
void QCompleter_CompletionPrefix(QCompleter* self, char** _out, int* _out_Strlen);
void QCompleter_SetCompletionPrefix(QCompleter* self, const char* prefix, size_t prefix_Strlen);
void QCompleter_Complete(QCompleter* self);
void QCompleter_SetWrapAround(QCompleter* self, bool wrap);
void QCompleter_PathFromIndex(QCompleter* self, QModelIndex* index, char** _out, int* _out_Strlen);
void QCompleter_SplitPath(QCompleter* self, const char* path, size_t path_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len);
void QCompleter_Activated(QCompleter* self, const char* text, size_t text_Strlen);
void QCompleter_connect_Activated(QCompleter* self, void* slot);
void QCompleter_ActivatedWithIndex(QCompleter* self, QModelIndex* index);
void QCompleter_connect_ActivatedWithIndex(QCompleter* self, void* slot);
void QCompleter_Highlighted(QCompleter* self, const char* text, size_t text_Strlen);
void QCompleter_connect_Highlighted(QCompleter* self, void* slot);
void QCompleter_HighlightedWithIndex(QCompleter* self, QModelIndex* index);
void QCompleter_connect_HighlightedWithIndex(QCompleter* self, void* slot);
void QCompleter_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QCompleter_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QCompleter_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QCompleter_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QCompleter_Complete1(QCompleter* self, QRect* rect);
void QCompleter_Delete(QCompleter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
