#pragma once
#ifndef MIQT_QT_SCRIPT_GEN_QSCRIPTVALUE_H
#define MIQT_QT_SCRIPT_GEN_QSCRIPTVALUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDateTime;
class QMetaObject;
class QObject;
class QRegExp;
class QScriptClass;
class QScriptEngine;
class QScriptString;
class QScriptValue;
class QVariant;
#else
typedef struct QDateTime QDateTime;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegExp QRegExp;
typedef struct QScriptClass QScriptClass;
typedef struct QScriptEngine QScriptEngine;
typedef struct QScriptString QScriptString;
typedef struct QScriptValue QScriptValue;
typedef struct QVariant QVariant;
#endif

QScriptValue* QScriptValue_new();
QScriptValue* QScriptValue_new2(QScriptValue* other);
QScriptValue* QScriptValue_new3(QScriptEngine* engine, int val);
QScriptValue* QScriptValue_new4(QScriptEngine* engine, bool val);
QScriptValue* QScriptValue_new5(QScriptEngine* engine, int val);
QScriptValue* QScriptValue_new6(QScriptEngine* engine, unsigned int val);
QScriptValue* QScriptValue_new7(QScriptEngine* engine, double val);
QScriptValue* QScriptValue_new8(QScriptEngine* engine, struct miqt_string val);
QScriptValue* QScriptValue_new9(QScriptEngine* engine, const char* val);
QScriptValue* QScriptValue_new10(int value);
QScriptValue* QScriptValue_new11(bool value);
QScriptValue* QScriptValue_new12(int value);
QScriptValue* QScriptValue_new13(unsigned int value);
QScriptValue* QScriptValue_new14(double value);
QScriptValue* QScriptValue_new15(struct miqt_string value);
QScriptValue* QScriptValue_new16(const char* value);
void QScriptValue_OperatorAssign(QScriptValue* self, QScriptValue* other);
QScriptEngine* QScriptValue_Engine(const QScriptValue* self);
bool QScriptValue_IsValid(const QScriptValue* self);
bool QScriptValue_IsBool(const QScriptValue* self);
bool QScriptValue_IsBoolean(const QScriptValue* self);
bool QScriptValue_IsNumber(const QScriptValue* self);
bool QScriptValue_IsFunction(const QScriptValue* self);
bool QScriptValue_IsNull(const QScriptValue* self);
bool QScriptValue_IsString(const QScriptValue* self);
bool QScriptValue_IsUndefined(const QScriptValue* self);
bool QScriptValue_IsVariant(const QScriptValue* self);
bool QScriptValue_IsQObject(const QScriptValue* self);
bool QScriptValue_IsQMetaObject(const QScriptValue* self);
bool QScriptValue_IsObject(const QScriptValue* self);
bool QScriptValue_IsDate(const QScriptValue* self);
bool QScriptValue_IsRegExp(const QScriptValue* self);
bool QScriptValue_IsArray(const QScriptValue* self);
bool QScriptValue_IsError(const QScriptValue* self);
struct miqt_string QScriptValue_ToString(const QScriptValue* self);
double QScriptValue_ToNumber(const QScriptValue* self);
bool QScriptValue_ToBool(const QScriptValue* self);
bool QScriptValue_ToBoolean(const QScriptValue* self);
double QScriptValue_ToInteger(const QScriptValue* self);
int QScriptValue_ToInt32(const QScriptValue* self);
unsigned int QScriptValue_ToUInt32(const QScriptValue* self);
uint16_t QScriptValue_ToUInt16(const QScriptValue* self);
QVariant* QScriptValue_ToVariant(const QScriptValue* self);
QObject* QScriptValue_ToQObject(const QScriptValue* self);
QMetaObject* QScriptValue_ToQMetaObject(const QScriptValue* self);
QScriptValue* QScriptValue_ToObject(const QScriptValue* self);
QDateTime* QScriptValue_ToDateTime(const QScriptValue* self);
QRegExp* QScriptValue_ToRegExp(const QScriptValue* self);
bool QScriptValue_InstanceOf(const QScriptValue* self, QScriptValue* other);
bool QScriptValue_LessThan(const QScriptValue* self, QScriptValue* other);
bool QScriptValue_Equals(const QScriptValue* self, QScriptValue* other);
bool QScriptValue_StrictlyEquals(const QScriptValue* self, QScriptValue* other);
QScriptValue* QScriptValue_Prototype(const QScriptValue* self);
void QScriptValue_SetPrototype(QScriptValue* self, QScriptValue* prototype);
QScriptValue* QScriptValue_Scope(const QScriptValue* self);
void QScriptValue_SetScope(QScriptValue* self, QScriptValue* scope);
QScriptValue* QScriptValue_Property(const QScriptValue* self, struct miqt_string name);
void QScriptValue_SetProperty(QScriptValue* self, struct miqt_string name, QScriptValue* value);
QScriptValue* QScriptValue_PropertyWithArrayIndex(const QScriptValue* self, unsigned int arrayIndex);
void QScriptValue_SetProperty2(QScriptValue* self, unsigned int arrayIndex, QScriptValue* value);
QScriptValue* QScriptValue_PropertyWithName(const QScriptValue* self, QScriptString* name);
void QScriptValue_SetProperty3(QScriptValue* self, QScriptString* name, QScriptValue* value);
int QScriptValue_PropertyFlags(const QScriptValue* self, struct miqt_string name);
int QScriptValue_PropertyFlagsWithName(const QScriptValue* self, QScriptString* name);
QScriptValue* QScriptValue_Call(QScriptValue* self);
QScriptValue* QScriptValue_Call2(QScriptValue* self, QScriptValue* thisObject, QScriptValue* arguments);
QScriptValue* QScriptValue_Construct(QScriptValue* self);
QScriptValue* QScriptValue_ConstructWithArguments(QScriptValue* self, QScriptValue* arguments);
QScriptValue* QScriptValue_Data(const QScriptValue* self);
void QScriptValue_SetData(QScriptValue* self, QScriptValue* data);
QScriptClass* QScriptValue_ScriptClass(const QScriptValue* self);
void QScriptValue_SetScriptClass(QScriptValue* self, QScriptClass* scriptClass);
long long QScriptValue_ObjectId(const QScriptValue* self);
QScriptValue* QScriptValue_Property2(const QScriptValue* self, struct miqt_string name, int* mode);
void QScriptValue_SetProperty32(QScriptValue* self, struct miqt_string name, QScriptValue* value, int* flags);
QScriptValue* QScriptValue_Property22(const QScriptValue* self, unsigned int arrayIndex, int* mode);
void QScriptValue_SetProperty33(QScriptValue* self, unsigned int arrayIndex, QScriptValue* value, int* flags);
QScriptValue* QScriptValue_Property23(const QScriptValue* self, QScriptString* name, int* mode);
void QScriptValue_SetProperty34(QScriptValue* self, QScriptString* name, QScriptValue* value, int* flags);
int QScriptValue_PropertyFlags2(const QScriptValue* self, struct miqt_string name, int* mode);
int QScriptValue_PropertyFlags22(const QScriptValue* self, QScriptString* name, int* mode);
QScriptValue* QScriptValue_Call1(QScriptValue* self, QScriptValue* thisObject);
QScriptValue* QScriptValue_Call22(QScriptValue* self, QScriptValue* thisObject, struct miqt_array /* of QScriptValue* */  args);
QScriptValue* QScriptValue_Construct1(QScriptValue* self, struct miqt_array /* of QScriptValue* */  args);
void QScriptValue_Delete(QScriptValue* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
