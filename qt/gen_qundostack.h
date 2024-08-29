#ifndef GEN_QUNDOSTACK_H
#define GEN_QUNDOSTACK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QUndoCommand* QUndoCommand_new2(const char* text, size_t text_Strlen);
QUndoCommand* QUndoCommand_new3(QUndoCommand* parent);
QUndoCommand* QUndoCommand_new4(const char* text, size_t text_Strlen, QUndoCommand* parent);
void QUndoCommand_Undo(QUndoCommand* self);
void QUndoCommand_Redo(QUndoCommand* self);
void QUndoCommand_Text(QUndoCommand* self, char** _out, int* _out_Strlen);
void QUndoCommand_ActionText(QUndoCommand* self, char** _out, int* _out_Strlen);
void QUndoCommand_SetText(QUndoCommand* self, const char* text, size_t text_Strlen);
bool QUndoCommand_IsObsolete(QUndoCommand* self);
void QUndoCommand_SetObsolete(QUndoCommand* self, bool obsolete);
int QUndoCommand_Id(QUndoCommand* self);
bool QUndoCommand_MergeWith(QUndoCommand* self, QUndoCommand* other);
int QUndoCommand_ChildCount(QUndoCommand* self);
QUndoCommand* QUndoCommand_Child(QUndoCommand* self, int index);
void QUndoCommand_Delete(QUndoCommand* self);

QUndoStack* QUndoStack_new();
QUndoStack* QUndoStack_new2(QObject* parent);
QMetaObject* QUndoStack_MetaObject(QUndoStack* self);
void QUndoStack_Tr(const char* s, char** _out, int* _out_Strlen);
void QUndoStack_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QUndoStack_Clear(QUndoStack* self);
void QUndoStack_Push(QUndoStack* self, QUndoCommand* cmd);
bool QUndoStack_CanUndo(QUndoStack* self);
bool QUndoStack_CanRedo(QUndoStack* self);
void QUndoStack_UndoText(QUndoStack* self, char** _out, int* _out_Strlen);
void QUndoStack_RedoText(QUndoStack* self, char** _out, int* _out_Strlen);
int QUndoStack_Count(QUndoStack* self);
int QUndoStack_Index(QUndoStack* self);
void QUndoStack_Text(QUndoStack* self, int idx, char** _out, int* _out_Strlen);
QAction* QUndoStack_CreateUndoAction(QUndoStack* self, QObject* parent);
QAction* QUndoStack_CreateRedoAction(QUndoStack* self, QObject* parent);
bool QUndoStack_IsActive(QUndoStack* self);
bool QUndoStack_IsClean(QUndoStack* self);
int QUndoStack_CleanIndex(QUndoStack* self);
void QUndoStack_BeginMacro(QUndoStack* self, const char* text, size_t text_Strlen);
void QUndoStack_EndMacro(QUndoStack* self);
void QUndoStack_SetUndoLimit(QUndoStack* self, int limit);
int QUndoStack_UndoLimit(QUndoStack* self);
QUndoCommand* QUndoStack_Command(QUndoStack* self, int index);
void QUndoStack_SetClean(QUndoStack* self);
void QUndoStack_ResetClean(QUndoStack* self);
void QUndoStack_SetIndex(QUndoStack* self, int idx);
void QUndoStack_Undo(QUndoStack* self);
void QUndoStack_Redo(QUndoStack* self);
void QUndoStack_SetActive(QUndoStack* self);
void QUndoStack_IndexChanged(QUndoStack* self, int idx);
void QUndoStack_connect_IndexChanged(QUndoStack* self, void* slot);
void QUndoStack_CleanChanged(QUndoStack* self, bool clean);
void QUndoStack_connect_CleanChanged(QUndoStack* self, void* slot);
void QUndoStack_CanUndoChanged(QUndoStack* self, bool canUndo);
void QUndoStack_connect_CanUndoChanged(QUndoStack* self, void* slot);
void QUndoStack_CanRedoChanged(QUndoStack* self, bool canRedo);
void QUndoStack_connect_CanRedoChanged(QUndoStack* self, void* slot);
void QUndoStack_UndoTextChanged(QUndoStack* self, const char* undoText, size_t undoText_Strlen);
void QUndoStack_connect_UndoTextChanged(QUndoStack* self, void* slot);
void QUndoStack_RedoTextChanged(QUndoStack* self, const char* redoText, size_t redoText_Strlen);
void QUndoStack_connect_RedoTextChanged(QUndoStack* self, void* slot);
void QUndoStack_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QUndoStack_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QUndoStack_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QUndoStack_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
QAction* QUndoStack_CreateUndoAction2(QUndoStack* self, QObject* parent, const char* prefix, size_t prefix_Strlen);
QAction* QUndoStack_CreateRedoAction2(QUndoStack* self, QObject* parent, const char* prefix, size_t prefix_Strlen);
void QUndoStack_SetActive1(QUndoStack* self, bool active);
void QUndoStack_Delete(QUndoStack* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
