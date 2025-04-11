#pragma once
#ifndef MIQT_QT6_CBOR_GEN_QCBORVALUE_H
#define MIQT_QT6_CBOR_GEN_QCBORVALUE_H

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
class QCborMap;
class QCborParserError;
class QCborStreamReader;
class QCborStreamWriter;
class QCborValue;
class QCborValueConstRef;
class QCborValueRef;
class QDateTime;
class QJsonValue;
class QRegularExpression;
class QUrl;
class QUuid;
class QVariant;
#else
typedef struct QCborArray QCborArray;
typedef struct QCborMap QCborMap;
typedef struct QCborParserError QCborParserError;
typedef struct QCborStreamReader QCborStreamReader;
typedef struct QCborStreamWriter QCborStreamWriter;
typedef struct QCborValue QCborValue;
typedef struct QCborValueConstRef QCborValueConstRef;
typedef struct QCborValueRef QCborValueRef;
typedef struct QDateTime QDateTime;
typedef struct QJsonValue QJsonValue;
typedef struct QRegularExpression QRegularExpression;
typedef struct QUrl QUrl;
typedef struct QUuid QUuid;
typedef struct QVariant QVariant;
#endif

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
struct miqt_string QCborValue_toCbor(const QCborValue* self);
void QCborValue_toCborWithWriter(const QCborValue* self, QCborStreamWriter* writer);
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
struct miqt_string QCborValue_toCborWithOpt(const QCborValue* self, int opt);
void QCborValue_toCbor2(const QCborValue* self, QCborStreamWriter* writer, int opt);
struct miqt_string QCborValue_toDiagnosticNotationWithOpts(const QCborValue* self, int opts);
void QCborValue_delete(QCborValue* self);

QCborValueConstRef* QCborValueConstRef_new(QCborValueConstRef* param1);
QCborValue* QCborValueConstRef_ToQCborValue(const QCborValueConstRef* self);
int QCborValueConstRef_type(const QCborValueConstRef* self);
bool QCborValueConstRef_isInteger(const QCborValueConstRef* self);
bool QCborValueConstRef_isByteArray(const QCborValueConstRef* self);
bool QCborValueConstRef_isString(const QCborValueConstRef* self);
bool QCborValueConstRef_isArray(const QCborValueConstRef* self);
bool QCborValueConstRef_isMap(const QCborValueConstRef* self);
bool QCborValueConstRef_isTag(const QCborValueConstRef* self);
bool QCborValueConstRef_isFalse(const QCborValueConstRef* self);
bool QCborValueConstRef_isTrue(const QCborValueConstRef* self);
bool QCborValueConstRef_isBool(const QCborValueConstRef* self);
bool QCborValueConstRef_isNull(const QCborValueConstRef* self);
bool QCborValueConstRef_isUndefined(const QCborValueConstRef* self);
bool QCborValueConstRef_isDouble(const QCborValueConstRef* self);
bool QCborValueConstRef_isDateTime(const QCborValueConstRef* self);
bool QCborValueConstRef_isUrl(const QCborValueConstRef* self);
bool QCborValueConstRef_isRegularExpression(const QCborValueConstRef* self);
bool QCborValueConstRef_isUuid(const QCborValueConstRef* self);
bool QCborValueConstRef_isInvalid(const QCborValueConstRef* self);
bool QCborValueConstRef_isContainer(const QCborValueConstRef* self);
bool QCborValueConstRef_isSimpleType(const QCborValueConstRef* self);
bool QCborValueConstRef_isSimpleTypeWithSt(const QCborValueConstRef* self, uint8_t st);
uint8_t QCborValueConstRef_toSimpleType(const QCborValueConstRef* self);
uint64_t QCborValueConstRef_tag(const QCborValueConstRef* self);
QCborValue* QCborValueConstRef_taggedValue(const QCborValueConstRef* self);
long long QCborValueConstRef_toInteger(const QCborValueConstRef* self);
bool QCborValueConstRef_toBool(const QCborValueConstRef* self);
double QCborValueConstRef_toDouble(const QCborValueConstRef* self);
struct miqt_string QCborValueConstRef_toByteArray(const QCborValueConstRef* self);
struct miqt_string QCborValueConstRef_toString(const QCborValueConstRef* self);
QDateTime* QCborValueConstRef_toDateTime(const QCborValueConstRef* self);
QUrl* QCborValueConstRef_toUrl(const QCborValueConstRef* self);
QRegularExpression* QCborValueConstRef_toRegularExpression(const QCborValueConstRef* self);
QUuid* QCborValueConstRef_toUuid(const QCborValueConstRef* self);
QCborArray* QCborValueConstRef_toArray(const QCborValueConstRef* self);
QCborArray* QCborValueConstRef_toArrayWithQCborArray(const QCborValueConstRef* self, QCborArray* a);
QCborMap* QCborValueConstRef_toMap(const QCborValueConstRef* self);
QCborMap* QCborValueConstRef_toMapWithQCborMap(const QCborValueConstRef* self, QCborMap* m);
QCborValue* QCborValueConstRef_operatorSubscript(const QCborValueConstRef* self, struct miqt_string key);
QCborValue* QCborValueConstRef_operatorSubscript2(const QCborValueConstRef* self, long long key);
int QCborValueConstRef_compare(const QCborValueConstRef* self, QCborValue* other);
bool QCborValueConstRef_operatorEqual(const QCborValueConstRef* self, QCborValue* other);
bool QCborValueConstRef_operatorNotEqual(const QCborValueConstRef* self, QCborValue* other);
bool QCborValueConstRef_operatorLesser(const QCborValueConstRef* self, QCborValue* other);
QVariant* QCborValueConstRef_toVariant(const QCborValueConstRef* self);
QJsonValue* QCborValueConstRef_toJsonValue(const QCborValueConstRef* self);
struct miqt_string QCborValueConstRef_toCbor(const QCborValueConstRef* self);
void QCborValueConstRef_toCborWithWriter(const QCborValueConstRef* self, QCborStreamWriter* writer);
struct miqt_string QCborValueConstRef_toDiagnosticNotation(const QCborValueConstRef* self);
uint8_t QCborValueConstRef_toSimpleTypeWithDefaultValue(const QCborValueConstRef* self, uint8_t defaultValue);
uint64_t QCborValueConstRef_tagWithDefaultValue(const QCborValueConstRef* self, uint64_t defaultValue);
QCborValue* QCborValueConstRef_taggedValueWithDefaultValue(const QCborValueConstRef* self, QCborValue* defaultValue);
long long QCborValueConstRef_toIntegerWithDefaultValue(const QCborValueConstRef* self, long long defaultValue);
bool QCborValueConstRef_toBoolWithDefaultValue(const QCborValueConstRef* self, bool defaultValue);
double QCborValueConstRef_toDoubleWithDefaultValue(const QCborValueConstRef* self, double defaultValue);
struct miqt_string QCborValueConstRef_toByteArrayWithDefaultValue(const QCborValueConstRef* self, struct miqt_string defaultValue);
struct miqt_string QCborValueConstRef_toStringWithDefaultValue(const QCborValueConstRef* self, struct miqt_string defaultValue);
QDateTime* QCborValueConstRef_toDateTimeWithDefaultValue(const QCborValueConstRef* self, QDateTime* defaultValue);
QUrl* QCborValueConstRef_toUrlWithDefaultValue(const QCborValueConstRef* self, QUrl* defaultValue);
QRegularExpression* QCborValueConstRef_toRegularExpressionWithDefaultValue(const QCborValueConstRef* self, QRegularExpression* defaultValue);
QUuid* QCborValueConstRef_toUuidWithDefaultValue(const QCborValueConstRef* self, QUuid* defaultValue);
struct miqt_string QCborValueConstRef_toCborWithOpt(const QCborValueConstRef* self, int opt);
void QCborValueConstRef_toCbor2(const QCborValueConstRef* self, QCborStreamWriter* writer, int opt);
struct miqt_string QCborValueConstRef_toDiagnosticNotationWithOpt(const QCborValueConstRef* self, int opt);
void QCborValueConstRef_delete(QCborValueConstRef* self);

QCborValueRef* QCborValueRef_new(QCborValueRef* param1);
void QCborValueRef_virtbase(QCborValueRef* src, QCborValueConstRef** outptr_QCborValueConstRef);
void QCborValueRef_operatorAssign(QCborValueRef* self, QCborValue* other);
void QCborValueRef_operatorAssignWithOther(QCborValueRef* self, QCborValueRef* other);
QCborValueRef* QCborValueRef_operatorSubscript(QCborValueRef* self, long long key);
QCborValueRef* QCborValueRef_operatorSubscript2(QCborValueRef* self, struct miqt_string key);
QCborValue* QCborValueRef_ToQCborValue(const QCborValueRef* self);
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
uint8_t QCborValueRef_toSimpleType(const QCborValueRef* self);
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
QCborValue* QCborValueRef_operatorSubscript3(const QCborValueRef* self, struct miqt_string key);
QCborValue* QCborValueRef_operatorSubscript5(const QCborValueRef* self, long long key);
int QCborValueRef_compare(const QCborValueRef* self, QCborValue* other);
bool QCborValueRef_operatorEqual(const QCborValueRef* self, QCborValue* other);
bool QCborValueRef_operatorNotEqual(const QCborValueRef* self, QCborValue* other);
bool QCborValueRef_operatorLesser(const QCborValueRef* self, QCborValue* other);
QVariant* QCborValueRef_toVariant(const QCborValueRef* self);
QJsonValue* QCborValueRef_toJsonValue(const QCborValueRef* self);
struct miqt_string QCborValueRef_toCbor(QCborValueRef* self);
void QCborValueRef_toCborWithWriter(QCborValueRef* self, QCborStreamWriter* writer);
struct miqt_string QCborValueRef_toDiagnosticNotation(QCborValueRef* self);
uint8_t QCborValueRef_toSimpleTypeWithDefaultValue(const QCborValueRef* self, uint8_t defaultValue);
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
