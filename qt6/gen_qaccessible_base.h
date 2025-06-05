#pragma once
#ifndef MIQT_QT6_GEN_QACCESSIBLE_BASE_H
#define MIQT_QT6_GEN_QACCESSIBLE_BASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAccessible;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__ActivationObserver)
typedef QAccessible::ActivationObserver QAccessible__ActivationObserver;
#else
class QAccessible__ActivationObserver;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State)
typedef QAccessible::State QAccessible__State;
#else
class QAccessible__State;
#endif
class QAccessibleEvent;
class QAccessibleInterface;
class QObject;
class QTextCursor;
#else
typedef struct QAccessible QAccessible;
typedef struct QAccessible__ActivationObserver QAccessible__ActivationObserver;
typedef struct QAccessible__State QAccessible__State;
typedef struct QAccessibleEvent QAccessibleEvent;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QObject QObject;
typedef struct QTextCursor QTextCursor;
#endif

void QAccessible_installActivationObserver(QAccessible__ActivationObserver* param1);
void QAccessible_removeActivationObserver(QAccessible__ActivationObserver* param1);
QAccessibleInterface* QAccessible_queryAccessibleInterface(QObject* param1);
unsigned int QAccessible_uniqueId(QAccessibleInterface* iface);
QAccessibleInterface* QAccessible_accessibleInterface(unsigned int uniqueId);
unsigned int QAccessible_registerAccessibleInterface(QAccessibleInterface* iface);
void QAccessible_deleteAccessibleInterface(unsigned int uniqueId);
void QAccessible_updateAccessibility(QAccessibleEvent* event);
bool QAccessible_isActive();
void QAccessible_setActive(bool active);
void QAccessible_setRootObject(QObject* object);
void QAccessible_cleanup();
struct miqt_map /* tuple of int and int */  QAccessible_qAccessibleTextBoundaryHelper(QTextCursor* cursor, int boundaryType);

void QAccessible_delete(QAccessible* self);

QAccessible__State* QAccessible__State_new();
void QAccessible__State_delete(QAccessible__State* self);

void QAccessible__ActivationObserver_accessibilityActiveChanged(QAccessible__ActivationObserver* self, bool active);
void QAccessible__ActivationObserver_operatorAssign(QAccessible__ActivationObserver* self, QAccessible__ActivationObserver* param1);

void QAccessible__ActivationObserver_delete(QAccessible__ActivationObserver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
