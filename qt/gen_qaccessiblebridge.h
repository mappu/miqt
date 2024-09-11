#ifndef GEN_QACCESSIBLEBRIDGE_H
#define GEN_QACCESSIBLEBRIDGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAccessibleBridge;
class QAccessibleBridgePlugin;
class QAccessibleEvent;
class QAccessibleInterface;
class QMetaObject;
#else
typedef struct QAccessibleBridge QAccessibleBridge;
typedef struct QAccessibleBridgePlugin QAccessibleBridgePlugin;
typedef struct QAccessibleEvent QAccessibleEvent;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QMetaObject QMetaObject;
#endif

void QAccessibleBridge_SetRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject);
void QAccessibleBridge_NotifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event);
void QAccessibleBridge_OperatorAssign(QAccessibleBridge* self, QAccessibleBridge* param1);
void QAccessibleBridge_Delete(QAccessibleBridge* self);

QMetaObject* QAccessibleBridgePlugin_MetaObject(const QAccessibleBridgePlugin* self);
void QAccessibleBridgePlugin_Tr(const char* s, char** _out, int* _out_Strlen);
void QAccessibleBridgePlugin_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QAccessibleBridge* QAccessibleBridgePlugin_Create(QAccessibleBridgePlugin* self, const char* key, size_t key_Strlen);
void QAccessibleBridgePlugin_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAccessibleBridgePlugin_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAccessibleBridgePlugin_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAccessibleBridgePlugin_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAccessibleBridgePlugin_Delete(QAccessibleBridgePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
