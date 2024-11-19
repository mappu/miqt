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

void QAccessible_InstallActivationObserver(QAccessible__ActivationObserver* param1);
void QAccessible_RemoveActivationObserver(QAccessible__ActivationObserver* param1);
QAccessibleInterface* QAccessible_QueryAccessibleInterface(QObject* param1);
unsigned int QAccessible_UniqueId(QAccessibleInterface* iface);
QAccessibleInterface* QAccessible_AccessibleInterface(unsigned int uniqueId);
unsigned int QAccessible_RegisterAccessibleInterface(QAccessibleInterface* iface);
void QAccessible_DeleteAccessibleInterface(unsigned int uniqueId);
void QAccessible_UpdateAccessibility(QAccessibleEvent* event);
bool QAccessible_IsActive();
void QAccessible_SetActive(bool active);
void QAccessible_SetRootObject(QObject* object);
void QAccessible_Cleanup();
struct miqt_map /* tuple of int and int */  QAccessible_QAccessibleTextBoundaryHelper(QTextCursor* cursor, int boundaryType);
void QAccessible_Delete(QAccessible* self, bool isSubclass);

void QAccessible__State_new(QAccessible__State** outptr_QAccessible__State);
void QAccessible__State_Delete(QAccessible__State* self, bool isSubclass);

void QAccessible__ActivationObserver_AccessibilityActiveChanged(QAccessible__ActivationObserver* self, bool active);
void QAccessible__ActivationObserver_OperatorAssign(QAccessible__ActivationObserver* self, QAccessible__ActivationObserver* param1);
void QAccessible__ActivationObserver_Delete(QAccessible__ActivationObserver* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
