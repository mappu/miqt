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

void QAccessibleObject_virtbase(QAccessibleObject* src, QAccessibleInterface** outptr_QAccessibleInterface);
bool QAccessibleObject_isValid(const QAccessibleObject* self);
QObject* QAccessibleObject_object(const QAccessibleObject* self);
QRect* QAccessibleObject_rect(const QAccessibleObject* self);
void QAccessibleObject_setText(QAccessibleObject* self, int t, struct miqt_string text);
QAccessibleInterface* QAccessibleObject_childAt(const QAccessibleObject* self, int x, int y);

QAccessibleApplication* QAccessibleApplication_new();
void QAccessibleApplication_virtbase(QAccessibleApplication* src, QAccessibleObject** outptr_QAccessibleObject);
QWindow* QAccessibleApplication_window(const QAccessibleApplication* self);
int QAccessibleApplication_childCount(const QAccessibleApplication* self);
int QAccessibleApplication_indexOfChild(const QAccessibleApplication* self, QAccessibleInterface* param1);
QAccessibleInterface* QAccessibleApplication_focusChild(const QAccessibleApplication* self);
QAccessibleInterface* QAccessibleApplication_parent(const QAccessibleApplication* self);
QAccessibleInterface* QAccessibleApplication_child(const QAccessibleApplication* self, int index);
struct miqt_string QAccessibleApplication_text(const QAccessibleApplication* self, int t);
int QAccessibleApplication_role(const QAccessibleApplication* self);
QAccessible__State* QAccessibleApplication_state(const QAccessibleApplication* self);
void QAccessibleApplication_delete(QAccessibleApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
