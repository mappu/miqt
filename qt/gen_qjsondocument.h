#ifndef GEN_QJSONDOCUMENT_H
#define GEN_QJSONDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QJsonArray;
class QJsonDocument;
class QJsonObject;
class QJsonParseError;
class QJsonValue;
class QVariant;
#else
typedef struct QByteArray QByteArray;
typedef struct QJsonArray QJsonArray;
typedef struct QJsonDocument QJsonDocument;
typedef struct QJsonObject QJsonObject;
typedef struct QJsonParseError QJsonParseError;
typedef struct QJsonValue QJsonValue;
typedef struct QVariant QVariant;
#endif

void QJsonParseError_ErrorString(QJsonParseError* self, char** _out, int* _out_Strlen);
void QJsonParseError_Delete(QJsonParseError* self);

QJsonDocument* QJsonDocument_new();
QJsonDocument* QJsonDocument_new2(QJsonObject* object);
QJsonDocument* QJsonDocument_new3(QJsonArray* array);
QJsonDocument* QJsonDocument_new4(QJsonDocument* other);
void QJsonDocument_OperatorAssign(QJsonDocument* self, QJsonDocument* other);
void QJsonDocument_Swap(QJsonDocument* self, QJsonDocument* other);
char* QJsonDocument_RawData(QJsonDocument* self, int* size);
QByteArray* QJsonDocument_ToBinaryData(QJsonDocument* self);
QJsonDocument* QJsonDocument_FromVariant(QVariant* variant);
QVariant* QJsonDocument_ToVariant(QJsonDocument* self);
QJsonDocument* QJsonDocument_FromJson(QByteArray* json);
QByteArray* QJsonDocument_ToJson(QJsonDocument* self);
bool QJsonDocument_IsEmpty(QJsonDocument* self);
bool QJsonDocument_IsArray(QJsonDocument* self);
bool QJsonDocument_IsObject(QJsonDocument* self);
QJsonObject* QJsonDocument_Object(QJsonDocument* self);
QJsonArray* QJsonDocument_Array(QJsonDocument* self);
void QJsonDocument_SetObject(QJsonDocument* self, QJsonObject* object);
void QJsonDocument_SetArray(QJsonDocument* self, QJsonArray* array);
QJsonValue* QJsonDocument_OperatorSubscript(QJsonDocument* self, const char* key, size_t key_Strlen);
QJsonValue* QJsonDocument_OperatorSubscriptWithInt(QJsonDocument* self, int i);
bool QJsonDocument_OperatorEqual(QJsonDocument* self, QJsonDocument* other);
bool QJsonDocument_OperatorNotEqual(QJsonDocument* self, QJsonDocument* other);
bool QJsonDocument_IsNull(QJsonDocument* self);
QJsonDocument* QJsonDocument_FromJson2(QByteArray* json, QJsonParseError* error);
void QJsonDocument_Delete(QJsonDocument* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
