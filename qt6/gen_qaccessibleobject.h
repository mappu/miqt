#pragma once
#ifndef MIQT_QT6_GEN_QACCESSIBLEOBJECT_H
#define MIQT_QT6_GEN_QACCESSIBLEOBJECT_H

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

QAccessibleApplication* QAccessibleApplication_new();
QWindow* QAccessibleApplication_Window(const QAccessibleApplication* self);
int QAccessibleApplication_ChildCount(const QAccessibleApplication* self);
int QAccessibleApplication_IndexOfChild(const QAccessibleApplication* self, QAccessibleInterface* param1);
QAccessibleInterface* QAccessibleApplication_FocusChild(const QAccessibleApplication* self);
QAccessibleInterface* QAccessibleApplication_Parent(const QAccessibleApplication* self);
QAccessibleInterface* QAccessibleApplication_Child(const QAccessibleApplication* self, int index);
struct miqt_string QAccessibleApplication_Text(const QAccessibleApplication* self, int t);
int QAccessibleApplication_Role(const QAccessibleApplication* self);
QAccessible__State* QAccessibleApplication_State(const QAccessibleApplication* self);
void QAccessibleApplication_Delete(QAccessibleApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
