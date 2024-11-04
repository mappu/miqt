#ifndef GEN_QACTIONGROUP_H
#define GEN_QACTIONGROUP_H

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
class QActionGroup;
class QIcon;
class QMetaObject;
class QObject;
#else
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QActionGroup* QActionGroup_new(QObject* parent);
QMetaObject* QActionGroup_MetaObject(const QActionGroup* self);
void* QActionGroup_Metacast(QActionGroup* self, const char* param1);
struct miqt_string QActionGroup_Tr(const char* s);
QAction* QActionGroup_AddAction(QActionGroup* self, QAction* a);
QAction* QActionGroup_AddActionWithText(QActionGroup* self, struct miqt_string text);
QAction* QActionGroup_AddAction2(QActionGroup* self, QIcon* icon, struct miqt_string text);
void QActionGroup_RemoveAction(QActionGroup* self, QAction* a);
struct miqt_array QActionGroup_Actions(const QActionGroup* self);
QAction* QActionGroup_CheckedAction(const QActionGroup* self);
bool QActionGroup_IsExclusive(const QActionGroup* self);
bool QActionGroup_IsEnabled(const QActionGroup* self);
bool QActionGroup_IsVisible(const QActionGroup* self);
int QActionGroup_ExclusionPolicy(const QActionGroup* self);
void QActionGroup_SetEnabled(QActionGroup* self, bool enabled);
void QActionGroup_SetDisabled(QActionGroup* self, bool b);
void QActionGroup_SetVisible(QActionGroup* self, bool visible);
void QActionGroup_SetExclusive(QActionGroup* self, bool exclusive);
void QActionGroup_SetExclusionPolicy(QActionGroup* self, int policy);
void QActionGroup_Triggered(QActionGroup* self, QAction* param1);
void QActionGroup_connect_Triggered(QActionGroup* self, intptr_t slot);
void QActionGroup_Hovered(QActionGroup* self, QAction* param1);
void QActionGroup_connect_Hovered(QActionGroup* self, intptr_t slot);
struct miqt_string QActionGroup_Tr2(const char* s, const char* c);
struct miqt_string QActionGroup_Tr3(const char* s, const char* c, int n);
void QActionGroup_Delete(QActionGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
