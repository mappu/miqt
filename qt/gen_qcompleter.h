#pragma once
#ifndef MIQT_QT_GEN_QCOMPLETER_H
#define MIQT_QT_GEN_QCOMPLETER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
QCompleter* QCompleter_new3(struct miqt_array /* of struct miqt_string */  completions);
QCompleter* QCompleter_new4(QObject* parent);
QCompleter* QCompleter_new5(QAbstractItemModel* model, QObject* parent);
QCompleter* QCompleter_new6(struct miqt_array /* of struct miqt_string */  completions, QObject* parent);
QMetaObject* QCompleter_MetaObject(const QCompleter* self);
void* QCompleter_Metacast(QCompleter* self, const char* param1);
struct miqt_string QCompleter_Tr(const char* s);
struct miqt_string QCompleter_TrUtf8(const char* s);
void QCompleter_SetWidget(QCompleter* self, QWidget* widget);
QWidget* QCompleter_Widget(const QCompleter* self);
void QCompleter_SetModel(QCompleter* self, QAbstractItemModel* c);
QAbstractItemModel* QCompleter_Model(const QCompleter* self);
void QCompleter_SetCompletionMode(QCompleter* self, int mode);
int QCompleter_CompletionMode(const QCompleter* self);
void QCompleter_SetFilterMode(QCompleter* self, int filterMode);
int QCompleter_FilterMode(const QCompleter* self);
QAbstractItemView* QCompleter_Popup(const QCompleter* self);
void QCompleter_SetPopup(QCompleter* self, QAbstractItemView* popup);
void QCompleter_SetCaseSensitivity(QCompleter* self, int caseSensitivity);
int QCompleter_CaseSensitivity(const QCompleter* self);
void QCompleter_SetModelSorting(QCompleter* self, int sorting);
int QCompleter_ModelSorting(const QCompleter* self);
void QCompleter_SetCompletionColumn(QCompleter* self, int column);
int QCompleter_CompletionColumn(const QCompleter* self);
void QCompleter_SetCompletionRole(QCompleter* self, int role);
int QCompleter_CompletionRole(const QCompleter* self);
bool QCompleter_WrapAround(const QCompleter* self);
int QCompleter_MaxVisibleItems(const QCompleter* self);
void QCompleter_SetMaxVisibleItems(QCompleter* self, int maxItems);
int QCompleter_CompletionCount(const QCompleter* self);
bool QCompleter_SetCurrentRow(QCompleter* self, int row);
int QCompleter_CurrentRow(const QCompleter* self);
QModelIndex* QCompleter_CurrentIndex(const QCompleter* self);
struct miqt_string QCompleter_CurrentCompletion(const QCompleter* self);
QAbstractItemModel* QCompleter_CompletionModel(const QCompleter* self);
struct miqt_string QCompleter_CompletionPrefix(const QCompleter* self);
void QCompleter_SetCompletionPrefix(QCompleter* self, struct miqt_string prefix);
void QCompleter_Complete(QCompleter* self);
void QCompleter_SetWrapAround(QCompleter* self, bool wrap);
struct miqt_string QCompleter_PathFromIndex(const QCompleter* self, QModelIndex* index);
struct miqt_array /* of struct miqt_string */  QCompleter_SplitPath(const QCompleter* self, struct miqt_string path);
void QCompleter_Activated(QCompleter* self, struct miqt_string text);
void QCompleter_connect_Activated(QCompleter* self, intptr_t slot);
void QCompleter_ActivatedWithIndex(QCompleter* self, QModelIndex* index);
void QCompleter_connect_ActivatedWithIndex(QCompleter* self, intptr_t slot);
void QCompleter_Highlighted(QCompleter* self, struct miqt_string text);
void QCompleter_connect_Highlighted(QCompleter* self, intptr_t slot);
void QCompleter_HighlightedWithIndex(QCompleter* self, QModelIndex* index);
void QCompleter_connect_HighlightedWithIndex(QCompleter* self, intptr_t slot);
struct miqt_string QCompleter_Tr2(const char* s, const char* c);
struct miqt_string QCompleter_Tr3(const char* s, const char* c, int n);
struct miqt_string QCompleter_TrUtf82(const char* s, const char* c);
struct miqt_string QCompleter_TrUtf83(const char* s, const char* c, int n);
void QCompleter_Complete1(QCompleter* self, QRect* rect);
void QCompleter_Delete(QCompleter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
