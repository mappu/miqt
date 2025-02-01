#pragma once
#ifndef MIQT_QT_GEN_QUNDOSTACK_H
#define MIQT_QT_GEN_QUNDOSTACK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QUndoCommand;
class QUndoStack;
#else
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUndoCommand QUndoCommand;
typedef struct QUndoStack QUndoStack;
#endif

QUndoCommand* QUndoCommand_new();
QUndoCommand* QUndoCommand_new2(struct miqt_string text);
QUndoCommand* QUndoCommand_new3(QUndoCommand* parent);
QUndoCommand* QUndoCommand_new4(struct miqt_string text, QUndoCommand* parent);
void QUndoCommand_undo(QUndoCommand* self);
void QUndoCommand_redo(QUndoCommand* self);
struct miqt_string QUndoCommand_text(const QUndoCommand* self);
struct miqt_string QUndoCommand_actionText(const QUndoCommand* self);
void QUndoCommand_setText(QUndoCommand* self, struct miqt_string text);
bool QUndoCommand_isObsolete(const QUndoCommand* self);
void QUndoCommand_setObsolete(QUndoCommand* self, bool obsolete);
int QUndoCommand_id(const QUndoCommand* self);
bool QUndoCommand_mergeWith(QUndoCommand* self, QUndoCommand* other);
int QUndoCommand_childCount(const QUndoCommand* self);
QUndoCommand* QUndoCommand_child(const QUndoCommand* self, int index);
bool QUndoCommand_override_virtual_undo(void* self, intptr_t slot);
void QUndoCommand_virtualbase_undo(void* self);
bool QUndoCommand_override_virtual_redo(void* self, intptr_t slot);
void QUndoCommand_virtualbase_redo(void* self);
bool QUndoCommand_override_virtual_id(void* self, intptr_t slot);
int QUndoCommand_virtualbase_id(const void* self);
bool QUndoCommand_override_virtual_mergeWith(void* self, intptr_t slot);
bool QUndoCommand_virtualbase_mergeWith(void* self, QUndoCommand* other);
void QUndoCommand_delete(QUndoCommand* self);

QUndoStack* QUndoStack_new();
QUndoStack* QUndoStack_new2(QObject* parent);
void QUndoStack_virtbase(QUndoStack* src, QObject** outptr_QObject);
QMetaObject* QUndoStack_metaObject(const QUndoStack* self);
void* QUndoStack_metacast(QUndoStack* self, const char* param1);
struct miqt_string QUndoStack_tr(const char* s);
struct miqt_string QUndoStack_trUtf8(const char* s);
void QUndoStack_clear(QUndoStack* self);
void QUndoStack_push(QUndoStack* self, QUndoCommand* cmd);
bool QUndoStack_canUndo(const QUndoStack* self);
bool QUndoStack_canRedo(const QUndoStack* self);
struct miqt_string QUndoStack_undoText(const QUndoStack* self);
struct miqt_string QUndoStack_redoText(const QUndoStack* self);
int QUndoStack_count(const QUndoStack* self);
int QUndoStack_index(const QUndoStack* self);
struct miqt_string QUndoStack_text(const QUndoStack* self, int idx);
QAction* QUndoStack_createUndoAction(const QUndoStack* self, QObject* parent);
QAction* QUndoStack_createRedoAction(const QUndoStack* self, QObject* parent);
bool QUndoStack_isActive(const QUndoStack* self);
bool QUndoStack_isClean(const QUndoStack* self);
int QUndoStack_cleanIndex(const QUndoStack* self);
void QUndoStack_beginMacro(QUndoStack* self, struct miqt_string text);
void QUndoStack_endMacro(QUndoStack* self);
void QUndoStack_setUndoLimit(QUndoStack* self, int limit);
int QUndoStack_undoLimit(const QUndoStack* self);
QUndoCommand* QUndoStack_command(const QUndoStack* self, int index);
void QUndoStack_setClean(QUndoStack* self);
void QUndoStack_resetClean(QUndoStack* self);
void QUndoStack_setIndex(QUndoStack* self, int idx);
void QUndoStack_undo(QUndoStack* self);
void QUndoStack_redo(QUndoStack* self);
void QUndoStack_setActive(QUndoStack* self);
void QUndoStack_indexChanged(QUndoStack* self, int idx);
void QUndoStack_connect_indexChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_cleanChanged(QUndoStack* self, bool clean);
void QUndoStack_connect_cleanChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_canUndoChanged(QUndoStack* self, bool canUndo);
void QUndoStack_connect_canUndoChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_canRedoChanged(QUndoStack* self, bool canRedo);
void QUndoStack_connect_canRedoChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_undoTextChanged(QUndoStack* self, struct miqt_string undoText);
void QUndoStack_connect_undoTextChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_redoTextChanged(QUndoStack* self, struct miqt_string redoText);
void QUndoStack_connect_redoTextChanged(QUndoStack* self, intptr_t slot);
struct miqt_string QUndoStack_tr2(const char* s, const char* c);
struct miqt_string QUndoStack_tr3(const char* s, const char* c, int n);
struct miqt_string QUndoStack_trUtf82(const char* s, const char* c);
struct miqt_string QUndoStack_trUtf83(const char* s, const char* c, int n);
QAction* QUndoStack_createUndoAction2(const QUndoStack* self, QObject* parent, struct miqt_string prefix);
QAction* QUndoStack_createRedoAction2(const QUndoStack* self, QObject* parent, struct miqt_string prefix);
void QUndoStack_setActive1(QUndoStack* self, bool active);
bool QUndoStack_override_virtual_event(void* self, intptr_t slot);
bool QUndoStack_virtualbase_event(void* self, QEvent* event);
bool QUndoStack_override_virtual_eventFilter(void* self, intptr_t slot);
bool QUndoStack_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QUndoStack_override_virtual_timerEvent(void* self, intptr_t slot);
void QUndoStack_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QUndoStack_override_virtual_childEvent(void* self, intptr_t slot);
void QUndoStack_virtualbase_childEvent(void* self, QChildEvent* event);
bool QUndoStack_override_virtual_customEvent(void* self, intptr_t slot);
void QUndoStack_virtualbase_customEvent(void* self, QEvent* event);
bool QUndoStack_override_virtual_connectNotify(void* self, intptr_t slot);
void QUndoStack_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QUndoStack_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QUndoStack_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QUndoStack_delete(QUndoStack* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
