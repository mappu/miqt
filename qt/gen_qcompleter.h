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
class QChildEvent;
class QCompleter;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QModelIndex;
class QObject;
class QRect;
class QTimerEvent;
class QWidget;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QChildEvent QChildEvent;
typedef struct QCompleter QCompleter;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QCompleter* QCompleter_new();
QCompleter* QCompleter_new2(QAbstractItemModel* model);
QCompleter* QCompleter_new3(struct miqt_array /* of struct miqt_string */  completions);
QCompleter* QCompleter_new4(QObject* parent);
QCompleter* QCompleter_new5(QAbstractItemModel* model, QObject* parent);
QCompleter* QCompleter_new6(struct miqt_array /* of struct miqt_string */  completions, QObject* parent);
void QCompleter_virtbase(QCompleter* src, QObject** outptr_QObject);
QMetaObject* QCompleter_metaObject(const QCompleter* self);
void* QCompleter_metacast(QCompleter* self, const char* param1);
struct miqt_string QCompleter_tr(const char* s);
struct miqt_string QCompleter_trUtf8(const char* s);
void QCompleter_setWidget(QCompleter* self, QWidget* widget);
QWidget* QCompleter_widget(const QCompleter* self);
void QCompleter_setModel(QCompleter* self, QAbstractItemModel* c);
QAbstractItemModel* QCompleter_model(const QCompleter* self);
void QCompleter_setCompletionMode(QCompleter* self, int mode);
int QCompleter_completionMode(const QCompleter* self);
void QCompleter_setFilterMode(QCompleter* self, int filterMode);
int QCompleter_filterMode(const QCompleter* self);
QAbstractItemView* QCompleter_popup(const QCompleter* self);
void QCompleter_setPopup(QCompleter* self, QAbstractItemView* popup);
void QCompleter_setCaseSensitivity(QCompleter* self, int caseSensitivity);
int QCompleter_caseSensitivity(const QCompleter* self);
void QCompleter_setModelSorting(QCompleter* self, int sorting);
int QCompleter_modelSorting(const QCompleter* self);
void QCompleter_setCompletionColumn(QCompleter* self, int column);
int QCompleter_completionColumn(const QCompleter* self);
void QCompleter_setCompletionRole(QCompleter* self, int role);
int QCompleter_completionRole(const QCompleter* self);
bool QCompleter_wrapAround(const QCompleter* self);
int QCompleter_maxVisibleItems(const QCompleter* self);
void QCompleter_setMaxVisibleItems(QCompleter* self, int maxItems);
int QCompleter_completionCount(const QCompleter* self);
bool QCompleter_setCurrentRow(QCompleter* self, int row);
int QCompleter_currentRow(const QCompleter* self);
QModelIndex* QCompleter_currentIndex(const QCompleter* self);
struct miqt_string QCompleter_currentCompletion(const QCompleter* self);
QAbstractItemModel* QCompleter_completionModel(const QCompleter* self);
struct miqt_string QCompleter_completionPrefix(const QCompleter* self);
void QCompleter_setCompletionPrefix(QCompleter* self, struct miqt_string prefix);
void QCompleter_complete(QCompleter* self);
void QCompleter_setWrapAround(QCompleter* self, bool wrap);
struct miqt_string QCompleter_pathFromIndex(const QCompleter* self, QModelIndex* index);
struct miqt_array /* of struct miqt_string */  QCompleter_splitPath(const QCompleter* self, struct miqt_string path);
bool QCompleter_eventFilter(QCompleter* self, QObject* o, QEvent* e);
bool QCompleter_event(QCompleter* self, QEvent* param1);
void QCompleter_activated(QCompleter* self, struct miqt_string text);
void QCompleter_connect_activated(QCompleter* self, intptr_t slot);
void QCompleter_activatedWithIndex(QCompleter* self, QModelIndex* index);
void QCompleter_connect_activatedWithIndex(QCompleter* self, intptr_t slot);
void QCompleter_highlighted(QCompleter* self, struct miqt_string text);
void QCompleter_connect_highlighted(QCompleter* self, intptr_t slot);
void QCompleter_highlightedWithIndex(QCompleter* self, QModelIndex* index);
void QCompleter_connect_highlightedWithIndex(QCompleter* self, intptr_t slot);
struct miqt_string QCompleter_tr2(const char* s, const char* c);
struct miqt_string QCompleter_tr3(const char* s, const char* c, int n);
struct miqt_string QCompleter_trUtf82(const char* s, const char* c);
struct miqt_string QCompleter_trUtf83(const char* s, const char* c, int n);
void QCompleter_completeWithRect(QCompleter* self, QRect* rect);
bool QCompleter_override_virtual_pathFromIndex(void* self, intptr_t slot);
struct miqt_string QCompleter_virtualbase_pathFromIndex(const void* self, QModelIndex* index);
bool QCompleter_override_virtual_splitPath(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QCompleter_virtualbase_splitPath(const void* self, struct miqt_string path);
bool QCompleter_override_virtual_eventFilter(void* self, intptr_t slot);
bool QCompleter_virtualbase_eventFilter(void* self, QObject* o, QEvent* e);
bool QCompleter_override_virtual_event(void* self, intptr_t slot);
bool QCompleter_virtualbase_event(void* self, QEvent* param1);
bool QCompleter_override_virtual_timerEvent(void* self, intptr_t slot);
void QCompleter_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QCompleter_override_virtual_childEvent(void* self, intptr_t slot);
void QCompleter_virtualbase_childEvent(void* self, QChildEvent* event);
bool QCompleter_override_virtual_customEvent(void* self, intptr_t slot);
void QCompleter_virtualbase_customEvent(void* self, QEvent* event);
bool QCompleter_override_virtual_connectNotify(void* self, intptr_t slot);
void QCompleter_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QCompleter_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QCompleter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QCompleter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QCompleter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QCompleter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QCompleter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QCompleter_delete(QCompleter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
