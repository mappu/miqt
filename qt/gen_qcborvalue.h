#ifndef GEN_QCBORVALUE_H
#define GEN_QCBORVALUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

void QCborParserError_ErrorString(QCborParserError* self, char** _out, int* _out_Strlen);
void QCborParserError_Delete(QCborParserError* self);

QCborValue* QCborValue_new();
QCborValue* QCborValue_new2(uintptr_t t_);
QCborValue* QCborValue_new3(bool b_);
QCborValue* QCborValue_new4(int i);
QCborValue* QCborValue_new5(unsigned int u);
QCborValue* QCborValue_new6(long long i);
QCborValue* QCborValue_new7(double v);
QCborValue* QCborValue_new8(QByteArray* ba);
QCborValue* QCborValue_new9(const char* s, size_t s_Strlen);
QCborValue* QCborValue_new10(const char* s);
QCborValue* QCborValue_new11(QCborArray* a);
QCborValue* QCborValue_new12(QCborMap* m);
QCborValue* QCborValue_new13(QDateTime* dt);
QCborValue* QCborValue_new14(QUrl* url);
QCborValue* QCborValue_new15(QRegularExpression* rx);
QCborValue* QCborValue_new16(QUuid* uuid);
QCborValue* QCborValue_new17(QCborValue* other);
void QCborValue_OperatorAssign(QCborValue* self, QCborValue* other);
void QCborValue_Swap(QCborValue* self, QCborValue* other);
uintptr_t QCborValue_Type(QCborValue* self);
bool QCborValue_IsInteger(QCborValue* self);
bool QCborValue_IsByteArray(QCborValue* self);
bool QCborValue_IsString(QCborValue* self);
bool QCborValue_IsArray(QCborValue* self);
bool QCborValue_IsMap(QCborValue* self);
bool QCborValue_IsTag(QCborValue* self);
bool QCborValue_IsFalse(QCborValue* self);
bool QCborValue_IsTrue(QCborValue* self);
bool QCborValue_IsBool(QCborValue* self);
bool QCborValue_IsNull(QCborValue* self);
bool QCborValue_IsUndefined(QCborValue* self);
bool QCborValue_IsDouble(QCborValue* self);
bool QCborValue_IsDateTime(QCborValue* self);
bool QCborValue_IsUrl(QCborValue* self);
bool QCborValue_IsRegularExpression(QCborValue* self);
bool QCborValue_IsUuid(QCborValue* self);
bool QCborValue_IsInvalid(QCborValue* self);
bool QCborValue_IsContainer(QCborValue* self);
bool QCborValue_IsSimpleType(QCborValue* self);
long long QCborValue_ToInteger(QCborValue* self);
bool QCborValue_ToBool(QCborValue* self);
double QCborValue_ToDouble(QCborValue* self);
QCborValue* QCborValue_TaggedValue(QCborValue* self);
QByteArray* QCborValue_ToByteArray(QCborValue* self);
void QCborValue_ToString(QCborValue* self, char** _out, int* _out_Strlen);
QDateTime* QCborValue_ToDateTime(QCborValue* self);
QUrl* QCborValue_ToUrl(QCborValue* self);
QRegularExpression* QCborValue_ToRegularExpression(QCborValue* self);
QUuid* QCborValue_ToUuid(QCborValue* self);
QCborArray* QCborValue_ToArray(QCborValue* self);
QCborArray* QCborValue_ToArrayWithDefaultValue(QCborValue* self, QCborArray* defaultValue);
QCborMap* QCborValue_ToMap(QCborValue* self);
QCborMap* QCborValue_ToMapWithDefaultValue(QCborValue* self, QCborMap* defaultValue);
QCborValue* QCborValue_OperatorSubscript(QCborValue* self, const char* key, size_t key_Strlen);
QCborValue* QCborValue_OperatorSubscript2(QCborValue* self, long long key);
QCborValueRef* QCborValue_OperatorSubscript3(QCborValue* self, long long key);
QCborValueRef* QCborValue_OperatorSubscript5(QCborValue* self, const char* key, size_t key_Strlen);
int QCborValue_Compare(QCborValue* self, QCborValue* other);
bool QCborValue_OperatorEqual(QCborValue* self, QCborValue* other);
bool QCborValue_OperatorNotEqual(QCborValue* self, QCborValue* other);
bool QCborValue_OperatorLesser(QCborValue* self, QCborValue* other);
QCborValue* QCborValue_FromVariant(QVariant* variant);
QVariant* QCborValue_ToVariant(QCborValue* self);
QCborValue* QCborValue_FromJsonValue(QJsonValue* v);
QJsonValue* QCborValue_ToJsonValue(QCborValue* self);
QCborValue* QCborValue_FromCbor(QCborStreamReader* reader);
QCborValue* QCborValue_FromCborWithBa(QByteArray* ba);
QCborValue* QCborValue_FromCbor2(const char* data, size_t lenVal);
QCborValue* QCborValue_FromCbor3(const unsigned char* data, size_t lenVal);
QByteArray* QCborValue_ToCbor(QCborValue* self);
void QCborValue_ToCborWithWriter(QCborValue* self, QCborStreamWriter* writer);
void QCborValue_ToDiagnosticNotation(QCborValue* self, char** _out, int* _out_Strlen);
long long QCborValue_ToInteger1(QCborValue* self, long long defaultValue);
bool QCborValue_ToBool1(QCborValue* self, bool defaultValue);
double QCborValue_ToDouble1(QCborValue* self, double defaultValue);
QCborValue* QCborValue_TaggedValue1(QCborValue* self, QCborValue* defaultValue);
QByteArray* QCborValue_ToByteArray1(QCborValue* self, QByteArray* defaultValue);
void QCborValue_ToString1(QCborValue* self, const char* defaultValue, size_t defaultValue_Strlen, char** _out, int* _out_Strlen);
QDateTime* QCborValue_ToDateTime1(QCborValue* self, QDateTime* defaultValue);
QUrl* QCborValue_ToUrl1(QCborValue* self, QUrl* defaultValue);
QRegularExpression* QCborValue_ToRegularExpression1(QCborValue* self, QRegularExpression* defaultValue);
QUuid* QCborValue_ToUuid1(QCborValue* self, QUuid* defaultValue);
QCborValue* QCborValue_FromCbor22(QByteArray* ba, QCborParserError* error);
QCborValue* QCborValue_FromCbor32(const char* data, size_t lenVal, QCborParserError* error);
QCborValue* QCborValue_FromCbor33(const unsigned char* data, size_t lenVal, QCborParserError* error);
QByteArray* QCborValue_ToCbor1(QCborValue* self, int opt);
void QCborValue_ToCbor2(QCborValue* self, QCborStreamWriter* writer, int opt);
void QCborValue_ToDiagnosticNotation1(QCborValue* self, int opts, char** _out, int* _out_Strlen);
void QCborValue_Delete(QCborValue* self);

QCborValueRef* QCborValueRef_new(QCborValueRef* param1);
void QCborValueRef_OperatorAssign(QCborValueRef* self, QCborValue* other);
void QCborValueRef_OperatorAssignWithOther(QCborValueRef* self, QCborValueRef* other);
uintptr_t QCborValueRef_Type(QCborValueRef* self);
bool QCborValueRef_IsInteger(QCborValueRef* self);
bool QCborValueRef_IsByteArray(QCborValueRef* self);
bool QCborValueRef_IsString(QCborValueRef* self);
bool QCborValueRef_IsArray(QCborValueRef* self);
bool QCborValueRef_IsMap(QCborValueRef* self);
bool QCborValueRef_IsTag(QCborValueRef* self);
bool QCborValueRef_IsFalse(QCborValueRef* self);
bool QCborValueRef_IsTrue(QCborValueRef* self);
bool QCborValueRef_IsBool(QCborValueRef* self);
bool QCborValueRef_IsNull(QCborValueRef* self);
bool QCborValueRef_IsUndefined(QCborValueRef* self);
bool QCborValueRef_IsDouble(QCborValueRef* self);
bool QCborValueRef_IsDateTime(QCborValueRef* self);
bool QCborValueRef_IsUrl(QCborValueRef* self);
bool QCborValueRef_IsRegularExpression(QCborValueRef* self);
bool QCborValueRef_IsUuid(QCborValueRef* self);
bool QCborValueRef_IsInvalid(QCborValueRef* self);
bool QCborValueRef_IsContainer(QCborValueRef* self);
bool QCborValueRef_IsSimpleType(QCborValueRef* self);
QCborValue* QCborValueRef_TaggedValue(QCborValueRef* self);
long long QCborValueRef_ToInteger(QCborValueRef* self);
bool QCborValueRef_ToBool(QCborValueRef* self);
double QCborValueRef_ToDouble(QCborValueRef* self);
QByteArray* QCborValueRef_ToByteArray(QCborValueRef* self);
void QCborValueRef_ToString(QCborValueRef* self, char** _out, int* _out_Strlen);
QDateTime* QCborValueRef_ToDateTime(QCborValueRef* self);
QUrl* QCborValueRef_ToUrl(QCborValueRef* self);
QRegularExpression* QCborValueRef_ToRegularExpression(QCborValueRef* self);
QUuid* QCborValueRef_ToUuid(QCborValueRef* self);
QCborArray* QCborValueRef_ToArray(QCborValueRef* self);
QCborArray* QCborValueRef_ToArrayWithQCborArray(QCborValueRef* self, QCborArray* a);
QCborMap* QCborValueRef_ToMap(QCborValueRef* self);
QCborMap* QCborValueRef_ToMapWithQCborMap(QCborValueRef* self, QCborMap* m);
QCborValue* QCborValueRef_OperatorSubscript(QCborValueRef* self, const char* key, size_t key_Strlen);
QCborValue* QCborValueRef_OperatorSubscript2(QCborValueRef* self, long long key);
QCborValueRef* QCborValueRef_OperatorSubscript3(QCborValueRef* self, long long key);
QCborValueRef* QCborValueRef_OperatorSubscript5(QCborValueRef* self, const char* key, size_t key_Strlen);
int QCborValueRef_Compare(QCborValueRef* self, QCborValue* other);
bool QCborValueRef_OperatorEqual(QCborValueRef* self, QCborValue* other);
bool QCborValueRef_OperatorNotEqual(QCborValueRef* self, QCborValue* other);
bool QCborValueRef_OperatorLesser(QCborValueRef* self, QCborValue* other);
QVariant* QCborValueRef_ToVariant(QCborValueRef* self);
QJsonValue* QCborValueRef_ToJsonValue(QCborValueRef* self);
QByteArray* QCborValueRef_ToCbor(QCborValueRef* self);
void QCborValueRef_ToCborWithWriter(QCborValueRef* self, QCborStreamWriter* writer);
void QCborValueRef_ToDiagnosticNotation(QCborValueRef* self, char** _out, int* _out_Strlen);
QCborValue* QCborValueRef_TaggedValue1(QCborValueRef* self, QCborValue* defaultValue);
long long QCborValueRef_ToInteger1(QCborValueRef* self, long long defaultValue);
bool QCborValueRef_ToBool1(QCborValueRef* self, bool defaultValue);
double QCborValueRef_ToDouble1(QCborValueRef* self, double defaultValue);
QByteArray* QCborValueRef_ToByteArray1(QCborValueRef* self, QByteArray* defaultValue);
void QCborValueRef_ToString1(QCborValueRef* self, const char* defaultValue, size_t defaultValue_Strlen, char** _out, int* _out_Strlen);
QDateTime* QCborValueRef_ToDateTime1(QCborValueRef* self, QDateTime* defaultValue);
QUrl* QCborValueRef_ToUrl1(QCborValueRef* self, QUrl* defaultValue);
QRegularExpression* QCborValueRef_ToRegularExpression1(QCborValueRef* self, QRegularExpression* defaultValue);
QUuid* QCborValueRef_ToUuid1(QCborValueRef* self, QUuid* defaultValue);
QByteArray* QCborValueRef_ToCbor1(QCborValueRef* self, int opt);
void QCborValueRef_ToCbor2(QCborValueRef* self, QCborStreamWriter* writer, int opt);
void QCborValueRef_ToDiagnosticNotation1(QCborValueRef* self, int opt, char** _out, int* _out_Strlen);
void QCborValueRef_Delete(QCborValueRef* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
