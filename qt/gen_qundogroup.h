#ifndef GEN_QUNDOGROUP_H
#define GEN_QUNDOGROUP_H

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
class QUndoGroup;
class QUndoStack;
#else
typedef struct QAction QAction;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUndoGroup QUndoGroup;
typedef struct QUndoStack QUndoStack;
#endif

QUndoGroup* QUndoGroup_new();
QUndoGroup* QUndoGroup_new2(QObject* parent);
QMetaObject* QUndoGroup_MetaObject(QUndoGroup* self);
void QUndoGroup_Tr(const char* s, char** _out, int* _out_Strlen);
void QUndoGroup_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QUndoGroup_AddStack(QUndoGroup* self, QUndoStack* stack);
void QUndoGroup_RemoveStack(QUndoGroup* self, QUndoStack* stack);
void QUndoGroup_Stacks(QUndoGroup* self, QUndoStack*** _out, size_t* _out_len);
QUndoStack* QUndoGroup_ActiveStack(QUndoGroup* self);
QAction* QUndoGroup_CreateUndoAction(QUndoGroup* self, QObject* parent);
QAction* QUndoGroup_CreateRedoAction(QUndoGroup* self, QObject* parent);
bool QUndoGroup_CanUndo(QUndoGroup* self);
bool QUndoGroup_CanRedo(QUndoGroup* self);
void QUndoGroup_UndoText(QUndoGroup* self, char** _out, int* _out_Strlen);
void QUndoGroup_RedoText(QUndoGroup* self, char** _out, int* _out_Strlen);
bool QUndoGroup_IsClean(QUndoGroup* self);
void QUndoGroup_Undo(QUndoGroup* self);
void QUndoGroup_Redo(QUndoGroup* self);
void QUndoGroup_SetActiveStack(QUndoGroup* self, QUndoStack* stack);
void QUndoGroup_ActiveStackChanged(QUndoGroup* self, QUndoStack* stack);
void QUndoGroup_connect_ActiveStackChanged(QUndoGroup* self, void* slot);
void QUndoGroup_IndexChanged(QUndoGroup* self, int idx);
void QUndoGroup_connect_IndexChanged(QUndoGroup* self, void* slot);
void QUndoGroup_CleanChanged(QUndoGroup* self, bool clean);
void QUndoGroup_connect_CleanChanged(QUndoGroup* self, void* slot);
void QUndoGroup_CanUndoChanged(QUndoGroup* self, bool canUndo);
void QUndoGroup_connect_CanUndoChanged(QUndoGroup* self, void* slot);
void QUndoGroup_CanRedoChanged(QUndoGroup* self, bool canRedo);
void QUndoGroup_connect_CanRedoChanged(QUndoGroup* self, void* slot);
void QUndoGroup_UndoTextChanged(QUndoGroup* self, const char* undoText, size_t undoText_Strlen);
void QUndoGroup_connect_UndoTextChanged(QUndoGroup* self, void* slot);
void QUndoGroup_RedoTextChanged(QUndoGroup* self, const char* redoText, size_t redoText_Strlen);
void QUndoGroup_connect_RedoTextChanged(QUndoGroup* self, void* slot);
void QUndoGroup_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QUndoGroup_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QUndoGroup_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QUndoGroup_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
QAction* QUndoGroup_CreateUndoAction2(QUndoGroup* self, QObject* parent, const char* prefix, size_t prefix_Strlen);
QAction* QUndoGroup_CreateRedoAction2(QUndoGroup* self, QObject* parent, const char* prefix, size_t prefix_Strlen);
void QUndoGroup_Delete(QUndoGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
