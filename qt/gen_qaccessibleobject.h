#pragma once
#ifndef MIQT_QT_GEN_QACCESSIBLEOBJECT_H
#define MIQT_QT_GEN_QACCESSIBLEOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State)
typedef QAccessible::State QAccessible__State;
#else
class QAccessible__State;
#endif
class QAccessibleApplication;
class QAccessibleInterface;
class QAccessibleObject;
class QObject;
class QRect;
class QWindow;
#else
typedef struct QAccessible__State QAccessible__State;
typedef struct QAccessibleApplication QAccessibleApplication;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessibleObject QAccessibleObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QWindow QWindow;
#endif

bool QAccessibleObject_IsValid(const QAccessibleObject* self);
QObject* QAccessibleObject_Object(const QAccessibleObject* self);
QRect* QAccessibleObject_Rect(const QAccessibleObject* self);
void QAccessibleObject_SetText(QAccessibleObject* self, int t, struct miqt_string text);
QAccessibleInterface* QAccessibleObject_ChildAt(const QAccessibleObject* self, int x, int y);

void QAccessibleApplication_new(QAccessibleApplication** outptr_QAccessibleApplication, QAccessibleObject** outptr_QAccessibleObject, QAccessibleInterface** outptr_QAccessibleInterface);
QWindow* QAccessibleApplication_Window(const QAccessibleApplication* self);
int QAccessibleApplication_ChildCount(const QAccessibleApplication* self);
int QAccessibleApplication_IndexOfChild(const QAccessibleApplication* self, QAccessibleInterface* param1);
QAccessibleInterface* QAccessibleApplication_FocusChild(const QAccessibleApplication* self);
QAccessibleInterface* QAccessibleApplication_Parent(const QAccessibleApplication* self);
QAccessibleInterface* QAccessibleApplication_Child(const QAccessibleApplication* self, int index);
struct miqt_string QAccessibleApplication_Text(const QAccessibleApplication* self, int t);
int QAccessibleApplication_Role(const QAccessibleApplication* self);
QAccessible__State* QAccessibleApplication_State(const QAccessibleApplication* self);
void QAccessibleApplication_override_virtual_Window(void* self, intptr_t slot);
QWindow* QAccessibleApplication_virtualbase_Window(const void* self);
void QAccessibleApplication_override_virtual_ChildCount(void* self, intptr_t slot);
int QAccessibleApplication_virtualbase_ChildCount(const void* self);
void QAccessibleApplication_override_virtual_IndexOfChild(void* self, intptr_t slot);
int QAccessibleApplication_virtualbase_IndexOfChild(const void* self, QAccessibleInterface* param1);
void QAccessibleApplication_override_virtual_FocusChild(void* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_virtualbase_FocusChild(const void* self);
void QAccessibleApplication_override_virtual_Parent(void* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_virtualbase_Parent(const void* self);
void QAccessibleApplication_override_virtual_Child(void* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_virtualbase_Child(const void* self, int index);
void QAccessibleApplication_override_virtual_Text(void* self, intptr_t slot);
struct miqt_string QAccessibleApplication_virtualbase_Text(const void* self, int t);
void QAccessibleApplication_override_virtual_Role(void* self, intptr_t slot);
int QAccessibleApplication_virtualbase_Role(const void* self);
void QAccessibleApplication_override_virtual_State(void* self, intptr_t slot);
QAccessible__State* QAccessibleApplication_virtualbase_State(const void* self);
void QAccessibleApplication_override_virtual_IsValid(void* self, intptr_t slot);
bool QAccessibleApplication_virtualbase_IsValid(const void* self);
void QAccessibleApplication_override_virtual_Object(void* self, intptr_t slot);
QObject* QAccessibleApplication_virtualbase_Object(const void* self);
void QAccessibleApplication_override_virtual_Rect(void* self, intptr_t slot);
QRect* QAccessibleApplication_virtualbase_Rect(const void* self);
void QAccessibleApplication_override_virtual_SetText(void* self, intptr_t slot);
void QAccessibleApplication_virtualbase_SetText(void* self, int t, struct miqt_string text);
void QAccessibleApplication_override_virtual_ChildAt(void* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_virtualbase_ChildAt(const void* self, int x, int y);
void QAccessibleApplication_Delete(QAccessibleApplication* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
