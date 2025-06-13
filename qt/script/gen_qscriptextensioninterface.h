#pragma once
#ifndef MIQT_QT_SCRIPT_GEN_QSCRIPTEXTENSIONINTERFACE_H
#define MIQT_QT_SCRIPT_GEN_QSCRIPTEXTENSIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFactoryInterface;
class QScriptEngine;
class QScriptExtensionInterface;
#else
typedef struct QFactoryInterface QFactoryInterface;
typedef struct QScriptEngine QScriptEngine;
typedef struct QScriptExtensionInterface QScriptExtensionInterface;
#endif

QScriptExtensionInterface* QScriptExtensionInterface_new(QScriptExtensionInterface* param1);
void QScriptExtensionInterface_virtbase(QScriptExtensionInterface* src, QFactoryInterface** outptr_QFactoryInterface);
void QScriptExtensionInterface_initialize(QScriptExtensionInterface* self, struct miqt_string key, QScriptEngine* engine);
void QScriptExtensionInterface_operatorAssign(QScriptExtensionInterface* self, QScriptExtensionInterface* param1);

bool QScriptExtensionInterface_override_virtual_initialize(void* self, intptr_t slot);
void QScriptExtensionInterface_virtualbase_initialize(void* self, struct miqt_string key, QScriptEngine* engine);
bool QScriptExtensionInterface_override_virtual_keys(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QScriptExtensionInterface_virtualbase_keys(const void* self);

void QScriptExtensionInterface_delete(QScriptExtensionInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
