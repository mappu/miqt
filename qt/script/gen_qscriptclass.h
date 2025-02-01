#pragma once
#ifndef MIQT_QT_SCRIPT_GEN_QSCRIPTCLASS_H
#define MIQT_QT_SCRIPT_GEN_QSCRIPTCLASS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QScriptClass;
class QScriptClassPropertyIterator;
class QScriptEngine;
class QScriptString;
class QScriptValue;
class QVariant;
#else
typedef struct QScriptClass QScriptClass;
typedef struct QScriptClassPropertyIterator QScriptClassPropertyIterator;
typedef struct QScriptEngine QScriptEngine;
typedef struct QScriptString QScriptString;
typedef struct QScriptValue QScriptValue;
typedef struct QVariant QVariant;
#endif

QScriptClass* QScriptClass_new(QScriptEngine* engine);
QScriptEngine* QScriptClass_engine(const QScriptClass* self);
int QScriptClass_queryProperty(QScriptClass* self, QScriptValue* object, QScriptString* name, int flags, unsigned int* id);
QScriptValue* QScriptClass_property(QScriptClass* self, QScriptValue* object, QScriptString* name, unsigned int id);
void QScriptClass_setProperty(QScriptClass* self, QScriptValue* object, QScriptString* name, unsigned int id, QScriptValue* value);
int QScriptClass_propertyFlags(QScriptClass* self, QScriptValue* object, QScriptString* name, unsigned int id);
QScriptClassPropertyIterator* QScriptClass_newIterator(QScriptClass* self, QScriptValue* object);
QScriptValue* QScriptClass_prototype(const QScriptClass* self);
struct miqt_string QScriptClass_name(const QScriptClass* self);
bool QScriptClass_supportsExtension(const QScriptClass* self, int extension);
QVariant* QScriptClass_extension(QScriptClass* self, int extension, QVariant* argument);
bool QScriptClass_override_virtual_queryProperty(void* self, intptr_t slot);
int QScriptClass_virtualbase_queryProperty(void* self, QScriptValue* object, QScriptString* name, int flags, unsigned int* id);
bool QScriptClass_override_virtual_property(void* self, intptr_t slot);
QScriptValue* QScriptClass_virtualbase_property(void* self, QScriptValue* object, QScriptString* name, unsigned int id);
bool QScriptClass_override_virtual_setProperty(void* self, intptr_t slot);
void QScriptClass_virtualbase_setProperty(void* self, QScriptValue* object, QScriptString* name, unsigned int id, QScriptValue* value);
bool QScriptClass_override_virtual_propertyFlags(void* self, intptr_t slot);
int QScriptClass_virtualbase_propertyFlags(void* self, QScriptValue* object, QScriptString* name, unsigned int id);
bool QScriptClass_override_virtual_newIterator(void* self, intptr_t slot);
QScriptClassPropertyIterator* QScriptClass_virtualbase_newIterator(void* self, QScriptValue* object);
bool QScriptClass_override_virtual_prototype(void* self, intptr_t slot);
QScriptValue* QScriptClass_virtualbase_prototype(const void* self);
bool QScriptClass_override_virtual_name(void* self, intptr_t slot);
struct miqt_string QScriptClass_virtualbase_name(const void* self);
bool QScriptClass_override_virtual_supportsExtension(void* self, intptr_t slot);
bool QScriptClass_virtualbase_supportsExtension(const void* self, int extension);
bool QScriptClass_override_virtual_extension(void* self, intptr_t slot);
QVariant* QScriptClass_virtualbase_extension(void* self, int extension, QVariant* argument);
void QScriptClass_delete(QScriptClass* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
