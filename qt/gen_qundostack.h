#ifndef GEN_QUNDOSTACK_H
#define GEN_QUNDOSTACK_H

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
class QMetaObject;
class QObject;
class QUndoCommand;
class QUndoStack;
#else
typedef struct QAction QAction;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUndoCommand QUndoCommand;
typedef struct QUndoStack QUndoStack;
#endif

QUndoCommand* QUndoCommand_new();
QUndoCommand* QUndoCommand_new2(struct miqt_string text);
QUndoCommand* QUndoCommand_new3(QUndoCommand* parent);
QUndoCommand* QUndoCommand_new4(struct miqt_string text, QUndoCommand* parent);
void QUndoCommand_Undo(QUndoCommand* self);
void QUndoCommand_Redo(QUndoCommand* self);
struct miqt_string QUndoCommand_Text(const QUndoCommand* self);
struct miqt_string QUndoCommand_ActionText(const QUndoCommand* self);
void QUndoCommand_SetText(QUndoCommand* self, struct miqt_string text);
bool QUndoCommand_IsObsolete(const QUndoCommand* self);
void QUndoCommand_SetObsolete(QUndoCommand* self, bool obsolete);
int QUndoCommand_Id(const QUndoCommand* self);
bool QUndoCommand_MergeWith(QUndoCommand* self, QUndoCommand* other);
int QUndoCommand_ChildCount(const QUndoCommand* self);
QUndoCommand* QUndoCommand_Child(const QUndoCommand* self, int index);
void QUndoCommand_Delete(QUndoCommand* self);

QUndoStack* QUndoStack_new();
QUndoStack* QUndoStack_new2(QObject* parent);
QMetaObject* QUndoStack_MetaObject(const QUndoStack* self);
void* QUndoStack_Metacast(QUndoStack* self, const char* param1);
struct miqt_string QUndoStack_Tr(const char* s);
struct miqt_string QUndoStack_TrUtf8(const char* s);
void QUndoStack_Clear(QUndoStack* self);
void QUndoStack_Push(QUndoStack* self, QUndoCommand* cmd);
bool QUndoStack_CanUndo(const QUndoStack* self);
bool QUndoStack_CanRedo(const QUndoStack* self);
struct miqt_string QUndoStack_UndoText(const QUndoStack* self);
struct miqt_string QUndoStack_RedoText(const QUndoStack* self);
int QUndoStack_Count(const QUndoStack* self);
int QUndoStack_Index(const QUndoStack* self);
struct miqt_string QUndoStack_Text(const QUndoStack* self, int idx);
QAction* QUndoStack_CreateUndoAction(const QUndoStack* self, QObject* parent);
QAction* QUndoStack_CreateRedoAction(const QUndoStack* self, QObject* parent);
bool QUndoStack_IsActive(const QUndoStack* self);
bool QUndoStack_IsClean(const QUndoStack* self);
int QUndoStack_CleanIndex(const QUndoStack* self);
void QUndoStack_BeginMacro(QUndoStack* self, struct miqt_string text);
void QUndoStack_EndMacro(QUndoStack* self);
void QUndoStack_SetUndoLimit(QUndoStack* self, int limit);
int QUndoStack_UndoLimit(const QUndoStack* self);
QUndoCommand* QUndoStack_Command(const QUndoStack* self, int index);
void QUndoStack_SetClean(QUndoStack* self);
void QUndoStack_ResetClean(QUndoStack* self);
void QUndoStack_SetIndex(QUndoStack* self, int idx);
void QUndoStack_Undo(QUndoStack* self);
void QUndoStack_Redo(QUndoStack* self);
void QUndoStack_SetActive(QUndoStack* self);
void QUndoStack_IndexChanged(QUndoStack* self, int idx);
void QUndoStack_connect_IndexChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_CleanChanged(QUndoStack* self, bool clean);
void QUndoStack_connect_CleanChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_CanUndoChanged(QUndoStack* self, bool canUndo);
void QUndoStack_connect_CanUndoChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_CanRedoChanged(QUndoStack* self, bool canRedo);
void QUndoStack_connect_CanRedoChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_UndoTextChanged(QUndoStack* self, struct miqt_string undoText);
void QUndoStack_connect_UndoTextChanged(QUndoStack* self, intptr_t slot);
void QUndoStack_RedoTextChanged(QUndoStack* self, struct miqt_string redoText);
void QUndoStack_connect_RedoTextChanged(QUndoStack* self, intptr_t slot);
struct miqt_string QUndoStack_Tr2(const char* s, const char* c);
struct miqt_string QUndoStack_Tr3(const char* s, const char* c, int n);
struct miqt_string QUndoStack_TrUtf82(const char* s, const char* c);
struct miqt_string QUndoStack_TrUtf83(const char* s, const char* c, int n);
QAction* QUndoStack_CreateUndoAction2(const QUndoStack* self, QObject* parent, struct miqt_string prefix);
QAction* QUndoStack_CreateRedoAction2(const QUndoStack* self, QObject* parent, struct miqt_string prefix);
void QUndoStack_SetActive1(QUndoStack* self, bool active);
void QUndoStack_Delete(QUndoStack* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
