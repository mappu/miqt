#ifndef GEN_QUNDOVIEW_H
#define GEN_QUNDOVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIcon;
class QMetaObject;
class QUndoGroup;
class QUndoStack;
class QUndoView;
class QWidget;
#else
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QUndoGroup QUndoGroup;
typedef struct QUndoStack QUndoStack;
typedef struct QUndoView QUndoView;
typedef struct QWidget QWidget;
#endif

QUndoView* QUndoView_new();
QUndoView* QUndoView_new2(QUndoStack* stack);
QUndoView* QUndoView_new3(QUndoGroup* group);
QUndoView* QUndoView_new4(QWidget* parent);
QUndoView* QUndoView_new5(QUndoStack* stack, QWidget* parent);
QUndoView* QUndoView_new6(QUndoGroup* group, QWidget* parent);
QMetaObject* QUndoView_MetaObject(const QUndoView* self);
void* QUndoView_Metacast(QUndoView* self, const char* param1);
struct miqt_string QUndoView_Tr(const char* s);
struct miqt_string QUndoView_TrUtf8(const char* s);
QUndoStack* QUndoView_Stack(const QUndoView* self);
QUndoGroup* QUndoView_Group(const QUndoView* self);
void QUndoView_SetEmptyLabel(QUndoView* self, struct miqt_string label);
struct miqt_string QUndoView_EmptyLabel(const QUndoView* self);
void QUndoView_SetCleanIcon(QUndoView* self, QIcon* icon);
QIcon* QUndoView_CleanIcon(const QUndoView* self);
void QUndoView_SetStack(QUndoView* self, QUndoStack* stack);
void QUndoView_SetGroup(QUndoView* self, QUndoGroup* group);
struct miqt_string QUndoView_Tr2(const char* s, const char* c);
struct miqt_string QUndoView_Tr3(const char* s, const char* c, int n);
struct miqt_string QUndoView_TrUtf82(const char* s, const char* c);
struct miqt_string QUndoView_TrUtf83(const char* s, const char* c, int n);
void QUndoView_Delete(QUndoView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
