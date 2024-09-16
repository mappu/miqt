#ifndef GEN_QCBORVALUE_H
#define GEN_QCBORVALUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QCborArray;
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
typedef struct QByteArray QByteArray;
typedef struct QCborArray QCborArray;
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

struct miqt_string* QCborParserError_ErrorString(const QCborParserError* self);
void QCborParserError_Delete(QCborParserError* self);

QCborValue* QCborValue_new();
QCborValue* QCborValue_new2(uintptr_t t_);
QCborValue* QCborValue_new3(bool b_);
QCborValue* QCborValue_new4(int i);
QCborValue* QCborValue_new5(unsigned int u);
QCborValue* QCborValue_new6(long long i);
QCborValue* QCborValue_new7(double v);
QCborValue* QCborValue_new8(QCborSimpleType st);
QCborValue* QCborValue_new9(QByteArray* ba);
QCborValue* QCborValue_new10(struct miqt_string* s);
QCborValue* QCborValue_new11(const char* s);
QCborValue* QCborValue_new12(QCborArray* a);
QCborValue* QCborValue_new13(QCborMap* m);
QCborValue* QCborValue_new14(QCborTag tag);
QCborValue* QCborValue_new15(QCborKnownTags t_);
QCborValue* QCborValue_new16(QDateTime* dt);
QCborValue* QCborValue_new17(QUrl* url);
QCborValue* QCborValue_new18(QRegularExpression* rx);
QCborValue* QCborValue_new19(QUuid* uuid);
QCborValue* QCborValue_new20(QCborValue* other);
QCborValue* QCborValue_new21(QCborTag tag, QCborValue* taggedValue);
QCborValue* QCborValue_new22(QCborKnownTags t_, QCborValue* tv);
void QCborValue_OperatorAssign(QCborValue* self, QCborValue* other);
void QCborValue_Swap(QCborValue* self, QCborValue* other);
uintptr_t QCborValue_Type(const QCborValue* self);
bool QCborValue_IsInteger(const QCborValue* self);
bool QCborValue_IsByteArray(const QCborValue* self);
bool QCborValue_IsString(const QCborValue* self);
bool QCborValue_IsArray(const QCborValue* self);
bool QCborValue_IsMap(const QCborValue* self);
bool QCborValue_IsTag(const QCborValue* self);
bool QCborValue_IsFalse(const QCborValue* self);
bool QCborValue_IsTrue(const QCborValue* self);
bool QCborValue_IsBool(const QCborValue* self);
bool QCborValue_IsNull(const QCborValue* self);
bool QCborValue_IsUndefined(const QCborValue* self);
bool QCborValue_IsDouble(const QCborValue* self);
bool QCborValue_IsDateTime(const QCborValue* self);
bool QCborValue_IsUrl(const QCborValue* self);
bool QCborValue_IsRegularExpression(const QCborValue* self);
bool QCborValue_IsUuid(const QCborValue* self);
bool QCborValue_IsInvalid(const QCborValue* self);
bool QCborValue_IsContainer(const QCborValue* self);
bool QCborValue_IsSimpleType(const QCborValue* self);
bool QCborValue_IsSimpleTypeWithSt(const QCborValue* self, QCborSimpleType st);
QCborSimpleType QCborValue_ToSimpleType(const QCborValue* self);
long long QCborValue_ToInteger(const QCborValue* self);
bool QCborValue_ToBool(const QCborValue* self);
double QCborValue_ToDouble(const QCborValue* self);
QCborTag QCborValue_Tag(const QCborValue* self);
QCborValue* QCborValue_TaggedValue(const QCborValue* self);
QByteArray* QCborValue_ToByteArray(const QCborValue* self);
struct miqt_string* QCborValue_ToString(const QCborValue* self);
QDateTime* QCborValue_ToDateTime(const QCborValue* self);
QUrl* QCborValue_ToUrl(const QCborValue* self);
QRegularExpression* QCborValue_ToRegularExpression(const QCborValue* self);
QUuid* QCborValue_ToUuid(const QCborValue* self);
QCborArray* QCborValue_ToArray(const QCborValue* self);
QCborArray* QCborValue_ToArrayWithDefaultValue(const QCborValue* self, QCborArray* defaultValue);
QCborMap* QCborValue_ToMap(const QCborValue* self);
QCborMap* QCborValue_ToMapWithDefaultValue(const QCborValue* self, QCborMap* defaultValue);
QCborValue* QCborValue_OperatorSubscript(const QCborValue* self, struct miqt_string* key);
QCborValue* QCborValue_OperatorSubscript2(const QCborValue* self, long long key);
QCborValueRef* QCborValue_OperatorSubscript3(QCborValue* self, long long key);
QCborValueRef* QCborValue_OperatorSubscript5(QCborValue* self, struct miqt_string* key);
int QCborValue_Compare(const QCborValue* self, QCborValue* other);
bool QCborValue_OperatorEqual(const QCborValue* self, QCborValue* other);
bool QCborValue_OperatorNotEqual(const QCborValue* self, QCborValue* other);
bool QCborValue_OperatorLesser(const QCborValue* self, QCborValue* other);
QCborValue* QCborValue_FromVariant(QVariant* variant);
QVariant* QCborValue_ToVariant(const QCborValue* self);
QCborValue* QCborValue_FromJsonValue(QJsonValue* v);
QJsonValue* QCborValue_ToJsonValue(const QCborValue* self);
QCborValue* QCborValue_FromCbor(QCborStreamReader* reader);
QCborValue* QCborValue_FromCborWithBa(QByteArray* ba);
QCborValue* QCborValue_FromCbor2(const char* data, size_t lenVal);
QCborValue* QCborValue_FromCbor3(const unsigned char* data, size_t lenVal);
QByteArray* QCborValue_ToCbor(QCborValue* self);
void QCborValue_ToCborWithWriter(QCborValue* self, QCborStreamWriter* writer);
struct miqt_string* QCborValue_ToDiagnosticNotation(const QCborValue* self);
QCborSimpleType QCborValue_ToSimpleType1(const QCborValue* self, QCborSimpleType defaultValue);
long long QCborValue_ToInteger1(const QCborValue* self, long long defaultValue);
bool QCborValue_ToBool1(const QCborValue* self, bool defaultValue);
double QCborValue_ToDouble1(const QCborValue* self, double defaultValue);
QCborTag QCborValue_Tag1(const QCborValue* self, QCborTag defaultValue);
QCborValue* QCborValue_TaggedValue1(const QCborValue* self, QCborValue* defaultValue);
QByteArray* QCborValue_ToByteArray1(const QCborValue* self, QByteArray* defaultValue);
struct miqt_string* QCborValue_ToString1(const QCborValue* self, struct miqt_string* defaultValue);
QDateTime* QCborValue_ToDateTime1(const QCborValue* self, QDateTime* defaultValue);
QUrl* QCborValue_ToUrl1(const QCborValue* self, QUrl* defaultValue);
QRegularExpression* QCborValue_ToRegularExpression1(const QCborValue* self, QRegularExpression* defaultValue);
QUuid* QCborValue_ToUuid1(const QCborValue* self, QUuid* defaultValue);
QCborValue* QCborValue_FromCbor22(QByteArray* ba, QCborParserError* error);
QCborValue* QCborValue_FromCbor32(const char* data, size_t lenVal, QCborParserError* error);
QCborValue* QCborValue_FromCbor33(const unsigned char* data, size_t lenVal, QCborParserError* error);
QByteArray* QCborValue_ToCbor1(QCborValue* self, int opt);
void QCborValue_ToCbor2(QCborValue* self, QCborStreamWriter* writer, int opt);
struct miqt_string* QCborValue_ToDiagnosticNotation1(const QCborValue* self, int opts);
void QCborValue_Delete(QCborValue* self);

QCborValueRef* QCborValueRef_new(QCborValueRef* param1);
void QCborValueRef_OperatorAssign(QCborValueRef* self, QCborValue* other);
void QCborValueRef_OperatorAssignWithOther(QCborValueRef* self, QCborValueRef* other);
uintptr_t QCborValueRef_Type(const QCborValueRef* self);
bool QCborValueRef_IsInteger(const QCborValueRef* self);
bool QCborValueRef_IsByteArray(const QCborValueRef* self);
bool QCborValueRef_IsString(const QCborValueRef* self);
bool QCborValueRef_IsArray(const QCborValueRef* self);
bool QCborValueRef_IsMap(const QCborValueRef* self);
bool QCborValueRef_IsTag(const QCborValueRef* self);
bool QCborValueRef_IsFalse(const QCborValueRef* self);
bool QCborValueRef_IsTrue(const QCborValueRef* self);
bool QCborValueRef_IsBool(const QCborValueRef* self);
bool QCborValueRef_IsNull(const QCborValueRef* self);
bool QCborValueRef_IsUndefined(const QCborValueRef* self);
bool QCborValueRef_IsDouble(const QCborValueRef* self);
bool QCborValueRef_IsDateTime(const QCborValueRef* self);
bool QCborValueRef_IsUrl(const QCborValueRef* self);
bool QCborValueRef_IsRegularExpression(const QCborValueRef* self);
bool QCborValueRef_IsUuid(const QCborValueRef* self);
bool QCborValueRef_IsInvalid(const QCborValueRef* self);
bool QCborValueRef_IsContainer(const QCborValueRef* self);
bool QCborValueRef_IsSimpleType(const QCborValueRef* self);
bool QCborValueRef_IsSimpleTypeWithSt(const QCborValueRef* self, QCborSimpleType st);
QCborTag QCborValueRef_Tag(const QCborValueRef* self);
QCborValue* QCborValueRef_TaggedValue(const QCborValueRef* self);
long long QCborValueRef_ToInteger(const QCborValueRef* self);
bool QCborValueRef_ToBool(const QCborValueRef* self);
double QCborValueRef_ToDouble(const QCborValueRef* self);
QByteArray* QCborValueRef_ToByteArray(const QCborValueRef* self);
struct miqt_string* QCborValueRef_ToString(const QCborValueRef* self);
QDateTime* QCborValueRef_ToDateTime(const QCborValueRef* self);
QUrl* QCborValueRef_ToUrl(const QCborValueRef* self);
QRegularExpression* QCborValueRef_ToRegularExpression(const QCborValueRef* self);
QUuid* QCborValueRef_ToUuid(const QCborValueRef* self);
QCborArray* QCborValueRef_ToArray(const QCborValueRef* self);
QCborArray* QCborValueRef_ToArrayWithQCborArray(const QCborValueRef* self, QCborArray* a);
QCborMap* QCborValueRef_ToMap(const QCborValueRef* self);
QCborMap* QCborValueRef_ToMapWithQCborMap(const QCborValueRef* self, QCborMap* m);
QCborValue* QCborValueRef_OperatorSubscript(const QCborValueRef* self, struct miqt_string* key);
QCborValue* QCborValueRef_OperatorSubscript2(const QCborValueRef* self, long long key);
QCborValueRef* QCborValueRef_OperatorSubscript3(QCborValueRef* self, long long key);
QCborValueRef* QCborValueRef_OperatorSubscript5(QCborValueRef* self, struct miqt_string* key);
int QCborValueRef_Compare(const QCborValueRef* self, QCborValue* other);
bool QCborValueRef_OperatorEqual(const QCborValueRef* self, QCborValue* other);
bool QCborValueRef_OperatorNotEqual(const QCborValueRef* self, QCborValue* other);
bool QCborValueRef_OperatorLesser(const QCborValueRef* self, QCborValue* other);
QVariant* QCborValueRef_ToVariant(const QCborValueRef* self);
QJsonValue* QCborValueRef_ToJsonValue(const QCborValueRef* self);
QByteArray* QCborValueRef_ToCbor(QCborValueRef* self);
void QCborValueRef_ToCborWithWriter(QCborValueRef* self, QCborStreamWriter* writer);
struct miqt_string* QCborValueRef_ToDiagnosticNotation(QCborValueRef* self);
QCborTag QCborValueRef_Tag1(const QCborValueRef* self, QCborTag defaultValue);
QCborValue* QCborValueRef_TaggedValue1(const QCborValueRef* self, QCborValue* defaultValue);
long long QCborValueRef_ToInteger1(const QCborValueRef* self, long long defaultValue);
bool QCborValueRef_ToBool1(const QCborValueRef* self, bool defaultValue);
double QCborValueRef_ToDouble1(const QCborValueRef* self, double defaultValue);
QByteArray* QCborValueRef_ToByteArray1(const QCborValueRef* self, QByteArray* defaultValue);
struct miqt_string* QCborValueRef_ToString1(const QCborValueRef* self, struct miqt_string* defaultValue);
QDateTime* QCborValueRef_ToDateTime1(const QCborValueRef* self, QDateTime* defaultValue);
QUrl* QCborValueRef_ToUrl1(const QCborValueRef* self, QUrl* defaultValue);
QRegularExpression* QCborValueRef_ToRegularExpression1(const QCborValueRef* self, QRegularExpression* defaultValue);
QUuid* QCborValueRef_ToUuid1(const QCborValueRef* self, QUuid* defaultValue);
QByteArray* QCborValueRef_ToCbor1(QCborValueRef* self, int opt);
void QCborValueRef_ToCbor2(QCborValueRef* self, QCborStreamWriter* writer, int opt);
struct miqt_string* QCborValueRef_ToDiagnosticNotation1(QCborValueRef* self, int opt);
void QCborValueRef_Delete(QCborValueRef* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
