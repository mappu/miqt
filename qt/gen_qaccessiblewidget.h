#pragma once
#ifndef MIQT_QT_GEN_QACCESSIBLEWIDGET_H
#define MIQT_QT_GEN_QACCESSIBLEWIDGET_H

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
class QAccessibleActionInterface;
class QAccessibleInterface;
class QAccessibleObject;
class QAccessibleWidget;
class QColor;
class QObject;
class QRect;
class QWidget;
class QWindow;
#else
typedef struct QAccessible__State QAccessible__State;
typedef struct QAccessibleActionInterface QAccessibleActionInterface;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessibleObject QAccessibleObject;
typedef struct QAccessibleWidget QAccessibleWidget;
typedef struct QColor QColor;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

QAccessibleWidget* QAccessibleWidget_new(QWidget* o);
QAccessibleWidget* QAccessibleWidget_new2(QWidget* o, int r);
QAccessibleWidget* QAccessibleWidget_new3(QWidget* o, int r, struct miqt_string name);
void QAccessibleWidget_virtbase(QAccessibleWidget* src, QAccessibleObject** outptr_QAccessibleObject, QAccessibleActionInterface** outptr_QAccessibleActionInterface);
bool QAccessibleWidget_isValid(const QAccessibleWidget* self);
QWindow* QAccessibleWidget_window(const QAccessibleWidget* self);
int QAccessibleWidget_childCount(const QAccessibleWidget* self);
int QAccessibleWidget_indexOfChild(const QAccessibleWidget* self, QAccessibleInterface* child);
struct miqt_array /* of struct miqt_map  tuple of QAccessibleInterface* and int   */  QAccessibleWidget_relations(const QAccessibleWidget* self, int match);
QAccessibleInterface* QAccessibleWidget_focusChild(const QAccessibleWidget* self);
QRect* QAccessibleWidget_rect(const QAccessibleWidget* self);
QAccessibleInterface* QAccessibleWidget_parent(const QAccessibleWidget* self);
QAccessibleInterface* QAccessibleWidget_child(const QAccessibleWidget* self, int index);
struct miqt_string QAccessibleWidget_text(const QAccessibleWidget* self, int t);
int QAccessibleWidget_role(const QAccessibleWidget* self);
QAccessible__State* QAccessibleWidget_state(const QAccessibleWidget* self);
QColor* QAccessibleWidget_foregroundColor(const QAccessibleWidget* self);
QColor* QAccessibleWidget_backgroundColor(const QAccessibleWidget* self);
void* QAccessibleWidget_interfaceCast(QAccessibleWidget* self, int t);
struct miqt_array /* of struct miqt_string */  QAccessibleWidget_actionNames(const QAccessibleWidget* self);
void QAccessibleWidget_doAction(QAccessibleWidget* self, struct miqt_string actionName);
struct miqt_array /* of struct miqt_string */  QAccessibleWidget_keyBindingsForAction(const QAccessibleWidget* self, struct miqt_string actionName);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
