#pragma once
#ifndef MIQT_QT_CBOR_GEN_QCBORVALUE_H
#define MIQT_QT_CBOR_GEN_QCBORVALUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCborArray;
class QCborError;
class QCborMap;
class QCborParserError;
class QCborStreamReader;
class QCborStreamWriter;
class QCborValue;
class QCborValueRef;
class QDateTime;
class QJsonValue;
class QRegularExpression;
class QUrl;
class QUuid;
class QVariant;
#else
typedef struct QCborArray QCborArray;
typedef struct QCborError QCborError;
typedef struct QCborMap QCborMap;
typedef struct QCborParserError QCborParserError;
typedef struct QCborStreamReader QCborStreamReader;
typedef struct QCborStreamWriter QCborStreamWriter;
typedef struct QCborValue QCborValue;
typedef struct QCborValueRef QCborValueRef;
typedef struct QDateTime QDateTime;
typedef struct QJsonValue QJsonValue;
typedef struct QRegularExpression QRegularExpression;
typedef struct QUrl QUrl;
typedef struct QUuid QUuid;
typedef struct QVariant QVariant;
#endif

long long QCborParserError_offset(const QCborParserError* self);
void QCborParserError_setOffset(QCborParserError* self, long long offset);
QCborError* QCborParserError_error(const QCborParserError* self);
void QCborParserError_setError(QCborParserError* self, QCborError* error);
struct miqt_string QCborParserError_errorString(const QCborParserError* self);

void QCborParserError_delete(QCborParserError* self);

QCborValue* QCborValue_new();
QCborValue* QCborValue_new2(int t_);
QCborValue* QCborValue_new3(bool b_);
QCborValue* QCborValue_new4(int i);
QCborValue* QCborValue_new5(unsigned int u);
QCborValue* QCborValue_new6(long long i);
QCborValue* QCborValue_new7(double v);
QCborValue* QCborValue_new8(uint8_t st);
QCborValue* QCborValue_new9(struct miqt_string ba);
QCborValue* QCborValue_new10(struct miqt_string s);
QCborValue* QCborValue_new11(const char* s);
QCborValue* QCborValue_new12(QCborArray* a);
QCborValue* QCborValue_new13(QCborMap* m);
QCborValue* QCborValue_new14(uint64_t tag);
QCborValue* QCborValue_new15(int t_);
QCborValue* QCborValue_new16(QDateTime* dt);
QCborValue* QCborValue_new17(QUrl* url);
QCborValue* QCborValue_new18(QRegularExpression* rx);
QCborValue* QCborValue_new19(QUuid* uuid);
QCborValue* QCborValue_new20(QCborValue* other);
QCborValue* QCborValue_new21(uint64_t tag, QCborValue* taggedValue);
QCborValue* QCborValue_new22(int t_, QCborValue* tv);
void QCborValue_operatorAssign(QCborValue* self, QCborValue* other);
void QCborValue_swap(QCborValue* self, QCborValue* other);
int QCborValue_type(const QCborValue* self);
bool QCborValue_isInteger(const QCborValue* self);
bool QCborValue_isByteArray(const QCborValue* self);
bool QCborValue_isString(const QCborValue* self);
bool QCborValue_isArray(const QCborValue* self);
bool QCborValue_isMap(const QCborValue* self);
bool QCborValue_isTag(const QCborValue* self);
bool QCborValue_isFalse(const QCborValue* self);
bool QCborValue_isTrue(const QCborValue* self);
bool QCborValue_isBool(const QCborValue* self);
bool QCborValue_isNull(const QCborValue* self);
bool QCborValue_isUndefined(const QCborValue* self);
bool QCborValue_isDouble(const QCborValue* self);
bool QCborValue_isDateTime(const QCborValue* self);
bool QCborValue_isUrl(const QCborValue* self);
bool QCborValue_isRegularExpression(const QCborValue* self);
bool QCborValue_isUuid(const QCborValue* self);
bool QCborValue_isInvalid(const QCborValue* self);
bool QCborValue_isContainer(const QCborValue* self);
bool QCborValue_isSimpleType(const QCborValue* self);
bool QCborValue_isSimpleTypeWithSt(const QCborValue* self, uint8_t st);
uint8_t QCborValue_toSimpleType(const QCborValue* self);
long long QCborValue_toInteger(const QCborValue* self);
bool QCborValue_toBool(const QCborValue* self);
double QCborValue_toDouble(const QCborValue* self);
uint64_t QCborValue_tag(const QCborValue* self);
QCborValue* QCborValue_taggedValue(const QCborValue* self);
struct miqt_string QCborValue_toByteArray(const QCborValue* self);
struct miqt_string QCborValue_toString(const QCborValue* self);
QDateTime* QCborValue_toDateTime(const QCborValue* self);
QUrl* QCborValue_toUrl(const QCborValue* self);
QRegularExpression* QCborValue_toRegularExpression(const QCborValue* self);
QUuid* QCborValue_toUuid(const QCborValue* self);
QCborArray* QCborValue_toArray(const QCborValue* self);
QCborArray* QCborValue_toArrayWithDefaultValue(const QCborValue* self, QCborArray* defaultValue);
QCborMap* QCborValue_toMap(const QCborValue* self);
QCborMap* QCborValue_toMapWithDefaultValue(const QCborValue* self, QCborMap* defaultValue);
QCborValue* QCborValue_operatorSubscript(const QCborValue* self, struct miqt_string key);
QCborValue* QCborValue_operatorSubscript2(const QCborValue* self, long long key);
QCborValueRef* QCborValue_operatorSubscript3(QCborValue* self, long long key);
QCborValueRef* QCborValue_operatorSubscript5(QCborValue* self, struct miqt_string key);
int QCborValue_compare(const QCborValue* self, QCborValue* other);
bool QCborValue_operatorEqual(const QCborValue* self, QCborValue* other);
bool QCborValue_operatorNotEqual(const QCborValue* self, QCborValue* other);
bool QCborValue_operatorLesser(const QCborValue* self, QCborValue* other);
QCborValue* QCborValue_fromVariant(QVariant* variant);
QVariant* QCborValue_toVariant(const QCborValue* self);
QCborValue* QCborValue_fromJsonValue(QJsonValue* v);
QJsonValue* QCborValue_toJsonValue(const QCborValue* self);
QCborValue* QCborValue_fromCbor(QCborStreamReader* reader);
QCborValue* QCborValue_fromCborWithBa(struct miqt_string ba);
QCborValue* QCborValue_fromCbor2(const char* data, ptrdiff_t len);
QCborValue* QCborValue_fromCbor3(const unsigned char* data, ptrdiff_t len);
struct miqt_string QCborValue_toCbor(QCborValue* self);
void QCborValue_toCborWithWriter(QCborValue* self, QCborStreamWriter* writer);
struct miqt_string QCborValue_toDiagnosticNotation(const QCborValue* self);
uint8_t QCborValue_toSimpleTypeWithDefaultValue(const QCborValue* self, uint8_t defaultValue);
long long QCborValue_toIntegerWithDefaultValue(const QCborValue* self, long long defaultValue);
bool QCborValue_toBoolWithDefaultValue(const QCborValue* self, bool defaultValue);
double QCborValue_toDoubleWithDefaultValue(const QCborValue* self, double defaultValue);
uint64_t QCborValue_tagWithDefaultValue(const QCborValue* self, uint64_t defaultValue);
QCborValue* QCborValue_taggedValueWithDefaultValue(const QCborValue* self, QCborValue* defaultValue);
struct miqt_string QCborValue_toByteArrayWithDefaultValue(const QCborValue* self, struct miqt_string defaultValue);
struct miqt_string QCborValue_toStringWithDefaultValue(const QCborValue* self, struct miqt_string defaultValue);
QDateTime* QCborValue_toDateTimeWithDefaultValue(const QCborValue* self, QDateTime* defaultValue);
QUrl* QCborValue_toUrlWithDefaultValue(const QCborValue* self, QUrl* defaultValue);
QRegularExpression* QCborValue_toRegularExpressionWithDefaultValue(const QCborValue* self, QRegularExpression* defaultValue);
QUuid* QCborValue_toUuidWithDefaultValue(const QCborValue* self, QUuid* defaultValue);
QCborValue* QCborValue_fromCbor4(struct miqt_string ba, QCborParserError* error);
QCborValue* QCborValue_fromCbor5(const char* data, ptrdiff_t len, QCborParserError* error);
QCborValue* QCborValue_fromCbor6(const unsigned char* data, ptrdiff_t len, QCborParserError* error);
struct miqt_string QCborValue_toCborWithOpt(QCborValue* self, int opt);
void QCborValue_toCbor2(QCborValue* self, QCborStreamWriter* writer, int opt);
struct miqt_string QCborValue_toDiagnosticNotationWithOpts(const QCborValue* self, int opts);

void QCborValue_delete(QCborValue* self);

QCborValueRef* QCborValueRef_new(QCborValueRef* param1);
QCborValue* QCborValueRef_ToQCborValue(const QCborValueRef* self);
void QCborValueRef_operatorAssign(QCborValueRef* self, QCborValue* other);
void QCborValueRef_operatorAssignWithOther(QCborValueRef* self, QCborValueRef* other);
int QCborValueRef_type(const QCborValueRef* self);
bool QCborValueRef_isInteger(const QCborValueRef* self);
bool QCborValueRef_isByteArray(const QCborValueRef* self);
bool QCborValueRef_isString(const QCborValueRef* self);
bool QCborValueRef_isArray(const QCborValueRef* self);
bool QCborValueRef_isMap(const QCborValueRef* self);
bool QCborValueRef_isTag(const QCborValueRef* self);
bool QCborValueRef_isFalse(const QCborValueRef* self);
bool QCborValueRef_isTrue(const QCborValueRef* self);
bool QCborValueRef_isBool(const QCborValueRef* self);
bool QCborValueRef_isNull(const QCborValueRef* self);
bool QCborValueRef_isUndefined(const QCborValueRef* self);
bool QCborValueRef_isDouble(const QCborValueRef* self);
bool QCborValueRef_isDateTime(const QCborValueRef* self);
bool QCborValueRef_isUrl(const QCborValueRef* self);
bool QCborValueRef_isRegularExpression(const QCborValueRef* self);
bool QCborValueRef_isUuid(const QCborValueRef* self);
bool QCborValueRef_isInvalid(const QCborValueRef* self);
bool QCborValueRef_isContainer(const QCborValueRef* self);
bool QCborValueRef_isSimpleType(const QCborValueRef* self);
bool QCborValueRef_isSimpleTypeWithSt(const QCborValueRef* self, uint8_t st);
uint64_t QCborValueRef_tag(const QCborValueRef* self);
QCborValue* QCborValueRef_taggedValue(const QCborValueRef* self);
long long QCborValueRef_toInteger(const QCborValueRef* self);
bool QCborValueRef_toBool(const QCborValueRef* self);
double QCborValueRef_toDouble(const QCborValueRef* self);
struct miqt_string QCborValueRef_toByteArray(const QCborValueRef* self);
struct miqt_string QCborValueRef_toString(const QCborValueRef* self);
QDateTime* QCborValueRef_toDateTime(const QCborValueRef* self);
QUrl* QCborValueRef_toUrl(const QCborValueRef* self);
QRegularExpression* QCborValueRef_toRegularExpression(const QCborValueRef* self);
QUuid* QCborValueRef_toUuid(const QCborValueRef* self);
QCborArray* QCborValueRef_toArray(const QCborValueRef* self);
QCborArray* QCborValueRef_toArrayWithQCborArray(const QCborValueRef* self, QCborArray* a);
QCborMap* QCborValueRef_toMap(const QCborValueRef* self);
QCborMap* QCborValueRef_toMapWithQCborMap(const QCborValueRef* self, QCborMap* m);
QCborValue* QCborValueRef_operatorSubscript(const QCborValueRef* self, struct miqt_string key);
QCborValue* QCborValueRef_operatorSubscript2(const QCborValueRef* self, long long key);
QCborValueRef* QCborValueRef_operatorSubscript3(QCborValueRef* self, long long key);
QCborValueRef* QCborValueRef_operatorSubscript5(QCborValueRef* self, struct miqt_string key);
int QCborValueRef_compare(const QCborValueRef* self, QCborValue* other);
bool QCborValueRef_operatorEqual(const QCborValueRef* self, QCborValue* other);
bool QCborValueRef_operatorNotEqual(const QCborValueRef* self, QCborValue* other);
bool QCborValueRef_operatorLesser(const QCborValueRef* self, QCborValue* other);
QVariant* QCborValueRef_toVariant(const QCborValueRef* self);
QJsonValue* QCborValueRef_toJsonValue(const QCborValueRef* self);
struct miqt_string QCborValueRef_toCbor(QCborValueRef* self);
void QCborValueRef_toCborWithWriter(QCborValueRef* self, QCborStreamWriter* writer);
struct miqt_string QCborValueRef_toDiagnosticNotation(QCborValueRef* self);
uint64_t QCborValueRef_tagWithDefaultValue(const QCborValueRef* self, uint64_t defaultValue);
QCborValue* QCborValueRef_taggedValueWithDefaultValue(const QCborValueRef* self, QCborValue* defaultValue);
long long QCborValueRef_toIntegerWithDefaultValue(const QCborValueRef* self, long long defaultValue);
bool QCborValueRef_toBoolWithDefaultValue(const QCborValueRef* self, bool defaultValue);
double QCborValueRef_toDoubleWithDefaultValue(const QCborValueRef* self, double defaultValue);
struct miqt_string QCborValueRef_toByteArrayWithDefaultValue(const QCborValueRef* self, struct miqt_string defaultValue);
struct miqt_string QCborValueRef_toStringWithDefaultValue(const QCborValueRef* self, struct miqt_string defaultValue);
QDateTime* QCborValueRef_toDateTimeWithDefaultValue(const QCborValueRef* self, QDateTime* defaultValue);
QUrl* QCborValueRef_toUrlWithDefaultValue(const QCborValueRef* self, QUrl* defaultValue);
QRegularExpression* QCborValueRef_toRegularExpressionWithDefaultValue(const QCborValueRef* self, QRegularExpression* defaultValue);
QUuid* QCborValueRef_toUuidWithDefaultValue(const QCborValueRef* self, QUuid* defaultValue);
struct miqt_string QCborValueRef_toCborWithOpt(QCborValueRef* self, int opt);
void QCborValueRef_toCbor2(QCborValueRef* self, QCborStreamWriter* writer, int opt);
struct miqt_string QCborValueRef_toDiagnosticNotationWithOpt(QCborValueRef* self, int opt);

void QCborValueRef_delete(QCborValueRef* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
