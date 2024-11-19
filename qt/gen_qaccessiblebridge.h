#pragma once
#ifndef MIQT_QT_GEN_QACCESSIBLEBRIDGE_H
#define MIQT_QT_GEN_QACCESSIBLEBRIDGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAccessibleBridge;
class QAccessibleBridgePlugin;
class QAccessibleEvent;
class QAccessibleInterface;
class QMetaObject;
class QObject;
#else
typedef struct QAccessibleBridge QAccessibleBridge;
typedef struct QAccessibleBridgePlugin QAccessibleBridgePlugin;
typedef struct QAccessibleEvent QAccessibleEvent;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QAccessibleBridge_SetRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject);
void QAccessibleBridge_NotifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event);
void QAccessibleBridge_OperatorAssign(QAccessibleBridge* self, QAccessibleBridge* param1);
void QAccessibleBridge_Delete(QAccessibleBridge* self, bool isSubclass);

QMetaObject* QAccessibleBridgePlugin_MetaObject(const QAccessibleBridgePlugin* self);
void* QAccessibleBridgePlugin_Metacast(QAccessibleBridgePlugin* self, const char* param1);
struct miqt_string QAccessibleBridgePlugin_Tr(const char* s);
struct miqt_string QAccessibleBridgePlugin_TrUtf8(const char* s);
QAccessibleBridge* QAccessibleBridgePlugin_Create(QAccessibleBridgePlugin* self, struct miqt_string key);
struct miqt_string QAccessibleBridgePlugin_Tr2(const char* s, const char* c);
struct miqt_string QAccessibleBridgePlugin_Tr3(const char* s, const char* c, int n);
struct miqt_string QAccessibleBridgePlugin_TrUtf82(const char* s, const char* c);
struct miqt_string QAccessibleBridgePlugin_TrUtf83(const char* s, const char* c, int n);
void QAccessibleBridgePlugin_Delete(QAccessibleBridgePlugin* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
