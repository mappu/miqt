#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLEXTENSIONINTERFACE_H
#define MIQT_QT6_QML_GEN_QQMLEXTENSIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QQmlEngine;
class QQmlEngineExtensionInterface;
class QQmlExtensionInterface;
class QQmlTypesExtensionInterface;
#else
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlEngineExtensionInterface QQmlEngineExtensionInterface;
typedef struct QQmlExtensionInterface QQmlExtensionInterface;
typedef struct QQmlTypesExtensionInterface QQmlTypesExtensionInterface;
#endif

QQmlTypesExtensionInterface* QQmlTypesExtensionInterface_new(QQmlTypesExtensionInterface* param1);
void QQmlTypesExtensionInterface_registerTypes(QQmlTypesExtensionInterface* self, const char* uri);
void QQmlTypesExtensionInterface_operatorAssign(QQmlTypesExtensionInterface* self, QQmlTypesExtensionInterface* param1);
bool QQmlTypesExtensionInterface_override_virtual_registerTypes(void* self, intptr_t slot);
void QQmlTypesExtensionInterface_virtualbase_registerTypes(void* self, const char* uri);
void QQmlTypesExtensionInterface_delete(QQmlTypesExtensionInterface* self);

QQmlExtensionInterface* QQmlExtensionInterface_new(QQmlExtensionInterface* param1);
void QQmlExtensionInterface_virtbase(QQmlExtensionInterface* src, QQmlTypesExtensionInterface** outptr_QQmlTypesExtensionInterface);
void QQmlExtensionInterface_initializeEngine(QQmlExtensionInterface* self, QQmlEngine* engine, const char* uri);
void QQmlExtensionInterface_operatorAssign(QQmlExtensionInterface* self, QQmlExtensionInterface* param1);
bool QQmlExtensionInterface_override_virtual_initializeEngine(void* self, intptr_t slot);
void QQmlExtensionInterface_virtualbase_initializeEngine(void* self, QQmlEngine* engine, const char* uri);
bool QQmlExtensionInterface_override_virtual_registerTypes(void* self, intptr_t slot);
void QQmlExtensionInterface_virtualbase_registerTypes(void* self, const char* uri);
void QQmlExtensionInterface_delete(QQmlExtensionInterface* self);

void QQmlEngineExtensionInterface_initializeEngine(QQmlEngineExtensionInterface* self, QQmlEngine* engine, const char* uri);
void QQmlEngineExtensionInterface_operatorAssign(QQmlEngineExtensionInterface* self, QQmlEngineExtensionInterface* param1);
void QQmlEngineExtensionInterface_delete(QQmlEngineExtensionInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
