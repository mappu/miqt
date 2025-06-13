#pragma once
#ifndef MIQT_QT_GEN_QJSONDOCUMENT_H
#define MIQT_QT_GEN_QJSONDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QJsonArray;
class QJsonDocument;
class QJsonObject;
class QJsonParseError;
class QJsonValue;
class QVariant;
#else
typedef struct QJsonArray QJsonArray;
typedef struct QJsonDocument QJsonDocument;
typedef struct QJsonObject QJsonObject;
typedef struct QJsonParseError QJsonParseError;
typedef struct QJsonValue QJsonValue;
typedef struct QVariant QVariant;
#endif

struct miqt_string QJsonParseError_errorString(const QJsonParseError* self);

void QJsonParseError_delete(QJsonParseError* self);

QJsonDocument* QJsonDocument_new();
QJsonDocument* QJsonDocument_new2(QJsonObject* object);
QJsonDocument* QJsonDocument_new3(QJsonArray* array);
QJsonDocument* QJsonDocument_new4(QJsonDocument* other);
void QJsonDocument_operatorAssign(QJsonDocument* self, QJsonDocument* other);
void QJsonDocument_swap(QJsonDocument* self, QJsonDocument* other);
QJsonDocument* QJsonDocument_fromRawData(const char* data, int size);
const char* QJsonDocument_rawData(const QJsonDocument* self, int* size);
QJsonDocument* QJsonDocument_fromBinaryData(struct miqt_string data);
struct miqt_string QJsonDocument_toBinaryData(const QJsonDocument* self);
QJsonDocument* QJsonDocument_fromVariant(QVariant* variant);
QVariant* QJsonDocument_toVariant(const QJsonDocument* self);
QJsonDocument* QJsonDocument_fromJson(struct miqt_string json);
struct miqt_string QJsonDocument_toJson(const QJsonDocument* self);
struct miqt_string QJsonDocument_toJsonWithFormat(const QJsonDocument* self, int format);
bool QJsonDocument_isEmpty(const QJsonDocument* self);
bool QJsonDocument_isArray(const QJsonDocument* self);
bool QJsonDocument_isObject(const QJsonDocument* self);
QJsonObject* QJsonDocument_object(const QJsonDocument* self);
QJsonArray* QJsonDocument_array(const QJsonDocument* self);
void QJsonDocument_setObject(QJsonDocument* self, QJsonObject* object);
void QJsonDocument_setArray(QJsonDocument* self, QJsonArray* array);
QJsonValue* QJsonDocument_operatorSubscript(const QJsonDocument* self, struct miqt_string key);
QJsonValue* QJsonDocument_operatorSubscriptWithInt(const QJsonDocument* self, int i);
bool QJsonDocument_operatorEqual(const QJsonDocument* self, QJsonDocument* other);
bool QJsonDocument_operatorNotEqual(const QJsonDocument* self, QJsonDocument* other);
bool QJsonDocument_isNull(const QJsonDocument* self);
QJsonDocument* QJsonDocument_fromRawData2(const char* data, int size, int validation);
QJsonDocument* QJsonDocument_fromBinaryData2(struct miqt_string data, int validation);
QJsonDocument* QJsonDocument_fromJson2(struct miqt_string json, QJsonParseError* error);

void QJsonDocument_delete(QJsonDocument* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
