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
QScriptEngine* QScriptClass_Engine(const QScriptClass* self);
int QScriptClass_QueryProperty(QScriptClass* self, QScriptValue* object, QScriptString* name, int flags, unsigned int* id);
QScriptValue* QScriptClass_Property(QScriptClass* self, QScriptValue* object, QScriptString* name, unsigned int id);
void QScriptClass_SetProperty(QScriptClass* self, QScriptValue* object, QScriptString* name, unsigned int id, QScriptValue* value);
int QScriptClass_PropertyFlags(QScriptClass* self, QScriptValue* object, QScriptString* name, unsigned int id);
QScriptClassPropertyIterator* QScriptClass_NewIterator(QScriptClass* self, QScriptValue* object);
QScriptValue* QScriptClass_Prototype(const QScriptClass* self);
struct miqt_string QScriptClass_Name(const QScriptClass* self);
bool QScriptClass_SupportsExtension(const QScriptClass* self, int extension);
QVariant* QScriptClass_Extension(QScriptClass* self, int extension, QVariant* argument);
void QScriptClass_override_virtual_QueryProperty(void* self, intptr_t slot);
int QScriptClass_virtualbase_QueryProperty(void* self, QScriptValue* object, QScriptString* name, int flags, unsigned int* id);
void QScriptClass_override_virtual_Property(void* self, intptr_t slot);
QScriptValue* QScriptClass_virtualbase_Property(void* self, QScriptValue* object, QScriptString* name, unsigned int id);
void QScriptClass_override_virtual_SetProperty(void* self, intptr_t slot);
void QScriptClass_virtualbase_SetProperty(void* self, QScriptValue* object, QScriptString* name, unsigned int id, QScriptValue* value);
void QScriptClass_override_virtual_PropertyFlags(void* self, intptr_t slot);
int QScriptClass_virtualbase_PropertyFlags(void* self, QScriptValue* object, QScriptString* name, unsigned int id);
void QScriptClass_override_virtual_NewIterator(void* self, intptr_t slot);
QScriptClassPropertyIterator* QScriptClass_virtualbase_NewIterator(void* self, QScriptValue* object);
void QScriptClass_override_virtual_Prototype(void* self, intptr_t slot);
QScriptValue* QScriptClass_virtualbase_Prototype(const void* self);
void QScriptClass_override_virtual_Name(void* self, intptr_t slot);
struct miqt_string QScriptClass_virtualbase_Name(const void* self);
void QScriptClass_override_virtual_SupportsExtension(void* self, intptr_t slot);
bool QScriptClass_virtualbase_SupportsExtension(const void* self, int extension);
void QScriptClass_override_virtual_Extension(void* self, intptr_t slot);
QVariant* QScriptClass_virtualbase_Extension(void* self, int extension, QVariant* argument);
void QScriptClass_Delete(QScriptClass* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
