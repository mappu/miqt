#ifndef GEN_QBYTEARRAY_H
#define GEN_QBYTEARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QByteArray__FromBase64Result)
typedef QByteArray::FromBase64Result QByteArray__FromBase64Result;
#else
class QByteArray__FromBase64Result;
#endif
class QByteArrayDataPtr;
class QByteRef;
#else
typedef struct QByteArray QByteArray;
typedef struct QByteArray__FromBase64Result QByteArray__FromBase64Result;
typedef struct QByteArrayDataPtr QByteArrayDataPtr;
typedef struct QByteRef QByteRef;
#endif

QByteArrayDataPtr* QByteArrayDataPtr_new();
QByteArrayDataPtr* QByteArrayDataPtr_new2(QByteArrayDataPtr* param1);
void QByteArrayDataPtr_Delete(QByteArrayDataPtr* self);

QByteArray* QByteArray_new();
QByteArray* QByteArray_new2(const char* param1);
QByteArray* QByteArray_new3(int size, char c);
QByteArray* QByteArray_new4(int size, uintptr_t param2);
QByteArray* QByteArray_new5(QByteArray* param1);
QByteArray* QByteArray_new6(QByteArrayDataPtr* dd);
QByteArray* QByteArray_new7(const char* param1, int size);
void QByteArray_OperatorAssign(QByteArray* self, QByteArray* param1);
void QByteArray_OperatorAssignWithStr(QByteArray* self, const char* str);
void QByteArray_Swap(QByteArray* self, QByteArray* other);
int QByteArray_Size(const QByteArray* self);
bool QByteArray_IsEmpty(const QByteArray* self);
void QByteArray_Resize(QByteArray* self, int size);
QByteArray* QByteArray_Fill(QByteArray* self, char c);
int QByteArray_Capacity(const QByteArray* self);
void QByteArray_Reserve(QByteArray* self, int size);
void QByteArray_Squeeze(QByteArray* self);
char* QByteArray_Data(QByteArray* self);
const char* QByteArray_Data2(const QByteArray* self);
const char* QByteArray_ConstData(const QByteArray* self);
void QByteArray_Detach(QByteArray* self);
bool QByteArray_IsDetached(const QByteArray* self);
bool QByteArray_IsSharedWith(const QByteArray* self, QByteArray* other);
void QByteArray_Clear(QByteArray* self);
char QByteArray_At(const QByteArray* self, int i);
char QByteArray_OperatorSubscript(const QByteArray* self, int i);
char QByteArray_OperatorSubscriptWithUint(const QByteArray* self, unsigned int i);
QByteRef* QByteArray_OperatorSubscriptWithInt(QByteArray* self, int i);
QByteRef* QByteArray_OperatorSubscript2(QByteArray* self, unsigned int i);
char QByteArray_Front(const QByteArray* self);
QByteRef* QByteArray_Front2(QByteArray* self);
char QByteArray_Back(const QByteArray* self);
QByteRef* QByteArray_Back2(QByteArray* self);
int QByteArray_IndexOf(const QByteArray* self, char c);
int QByteArray_IndexOfWithChar(const QByteArray* self, const char* c);
int QByteArray_IndexOfWithQByteArray(const QByteArray* self, QByteArray* a);
int QByteArray_LastIndexOf(const QByteArray* self, char c);
int QByteArray_LastIndexOfWithChar(const QByteArray* self, const char* c);
int QByteArray_LastIndexOfWithQByteArray(const QByteArray* self, QByteArray* a);
bool QByteArray_Contains(const QByteArray* self, char c);
bool QByteArray_ContainsWithChar(const QByteArray* self, const char* a);
bool QByteArray_ContainsWithQByteArray(const QByteArray* self, QByteArray* a);
int QByteArray_Count(const QByteArray* self, char c);
int QByteArray_CountWithChar(const QByteArray* self, const char* a);
int QByteArray_CountWithQByteArray(const QByteArray* self, QByteArray* a);
int QByteArray_Compare(const QByteArray* self, const char* c);
int QByteArray_CompareWithQByteArray(const QByteArray* self, QByteArray* a);
QByteArray* QByteArray_Left(const QByteArray* self, int lenVal);
QByteArray* QByteArray_Right(const QByteArray* self, int lenVal);
QByteArray* QByteArray_Mid(const QByteArray* self, int index);
QByteArray* QByteArray_Chopped(const QByteArray* self, int lenVal);
bool QByteArray_StartsWith(const QByteArray* self, QByteArray* a);
bool QByteArray_StartsWithWithChar(const QByteArray* self, char c);
bool QByteArray_StartsWith2(const QByteArray* self, const char* c);
bool QByteArray_EndsWith(const QByteArray* self, QByteArray* a);
bool QByteArray_EndsWithWithChar(const QByteArray* self, char c);
bool QByteArray_EndsWith2(const QByteArray* self, const char* c);
bool QByteArray_IsUpper(const QByteArray* self);
bool QByteArray_IsLower(const QByteArray* self);
void QByteArray_Truncate(QByteArray* self, int pos);
void QByteArray_Chop(QByteArray* self, int n);
QByteArray* QByteArray_ToLower(const QByteArray* self);
QByteArray* QByteArray_ToUpper(const QByteArray* self);
QByteArray* QByteArray_Trimmed(const QByteArray* self);
QByteArray* QByteArray_Simplified(const QByteArray* self);
QByteArray* QByteArray_LeftJustified(const QByteArray* self, int width);
QByteArray* QByteArray_RightJustified(const QByteArray* self, int width);
QByteArray* QByteArray_Prepend(QByteArray* self, char c);
QByteArray* QByteArray_Prepend2(QByteArray* self, int count, char c);
QByteArray* QByteArray_PrependWithChar(QByteArray* self, const char* s);
QByteArray* QByteArray_Prepend3(QByteArray* self, const char* s, int lenVal);
QByteArray* QByteArray_PrependWithQByteArray(QByteArray* self, QByteArray* a);
QByteArray* QByteArray_Append(QByteArray* self, char c);
QByteArray* QByteArray_Append2(QByteArray* self, int count, char c);
QByteArray* QByteArray_AppendWithChar(QByteArray* self, const char* s);
QByteArray* QByteArray_Append3(QByteArray* self, const char* s, int lenVal);
QByteArray* QByteArray_AppendWithQByteArray(QByteArray* self, QByteArray* a);
QByteArray* QByteArray_Insert(QByteArray* self, int i, char c);
QByteArray* QByteArray_Insert2(QByteArray* self, int i, int count, char c);
QByteArray* QByteArray_Insert3(QByteArray* self, int i, const char* s);
QByteArray* QByteArray_Insert4(QByteArray* self, int i, const char* s, int lenVal);
QByteArray* QByteArray_Insert5(QByteArray* self, int i, QByteArray* a);
QByteArray* QByteArray_Remove(QByteArray* self, int index, int lenVal);
QByteArray* QByteArray_Replace(QByteArray* self, int index, int lenVal, const char* s);
QByteArray* QByteArray_Replace2(QByteArray* self, int index, int lenVal, const char* s, int alen);
QByteArray* QByteArray_Replace3(QByteArray* self, int index, int lenVal, QByteArray* s);
QByteArray* QByteArray_Replace4(QByteArray* self, char before, const char* after);
QByteArray* QByteArray_Replace5(QByteArray* self, char before, QByteArray* after);
QByteArray* QByteArray_Replace6(QByteArray* self, const char* before, const char* after);
QByteArray* QByteArray_Replace7(QByteArray* self, const char* before, int bsize, const char* after, int asize);
QByteArray* QByteArray_Replace8(QByteArray* self, QByteArray* before, QByteArray* after);
QByteArray* QByteArray_Replace9(QByteArray* self, QByteArray* before, const char* after);
QByteArray* QByteArray_Replace10(QByteArray* self, const char* before, QByteArray* after);
QByteArray* QByteArray_Replace11(QByteArray* self, char before, char after);
QByteArray* QByteArray_OperatorPlusAssign(QByteArray* self, char c);
QByteArray* QByteArray_OperatorPlusAssignWithChar(QByteArray* self, const char* s);
QByteArray* QByteArray_OperatorPlusAssignWithQByteArray(QByteArray* self, QByteArray* a);
void QByteArray_Split(const QByteArray* self, char sep, QByteArray*** _out, size_t* _out_len);
QByteArray* QByteArray_Repeated(const QByteArray* self, int times);
QByteArray* QByteArray_AppendWithQString(QByteArray* self, const char* s, size_t s_Strlen);
QByteArray* QByteArray_Insert6(QByteArray* self, int i, const char* s, size_t s_Strlen);
QByteArray* QByteArray_Replace12(QByteArray* self, const char* before, size_t before_Strlen, const char* after);
QByteArray* QByteArray_Replace13(QByteArray* self, char c, const char* after, size_t after_Strlen);
QByteArray* QByteArray_Replace14(QByteArray* self, const char* before, size_t before_Strlen, QByteArray* after);
QByteArray* QByteArray_OperatorPlusAssignWithQString(QByteArray* self, const char* s, size_t s_Strlen);
int QByteArray_IndexOfWithQString(const QByteArray* self, const char* s, size_t s_Strlen);
int QByteArray_LastIndexOfWithQString(const QByteArray* self, const char* s, size_t s_Strlen);
bool QByteArray_OperatorEqual(const QByteArray* self, const char* s2, size_t s2_Strlen);
bool QByteArray_OperatorNotEqual(const QByteArray* self, const char* s2, size_t s2_Strlen);
bool QByteArray_OperatorLesser(const QByteArray* self, const char* s2, size_t s2_Strlen);
bool QByteArray_OperatorGreater(const QByteArray* self, const char* s2, size_t s2_Strlen);
bool QByteArray_OperatorLesserOrEqual(const QByteArray* self, const char* s2, size_t s2_Strlen);
bool QByteArray_OperatorGreaterOrEqual(const QByteArray* self, const char* s2, size_t s2_Strlen);
int16_t QByteArray_ToShort(const QByteArray* self);
uint16_t QByteArray_ToUShort(const QByteArray* self);
int QByteArray_ToInt(const QByteArray* self);
unsigned int QByteArray_ToUInt(const QByteArray* self);
long QByteArray_ToLong(const QByteArray* self);
unsigned long QByteArray_ToULong(const QByteArray* self);
int64_t QByteArray_ToLongLong(const QByteArray* self);
uint64_t QByteArray_ToULongLong(const QByteArray* self);
float QByteArray_ToFloat(const QByteArray* self);
double QByteArray_ToDouble(const QByteArray* self);
QByteArray* QByteArray_ToBase64(const QByteArray* self, int options);
QByteArray* QByteArray_ToBase642(const QByteArray* self);
QByteArray* QByteArray_ToHex(const QByteArray* self);
QByteArray* QByteArray_ToHexWithSeparator(const QByteArray* self, char separator);
QByteArray* QByteArray_ToPercentEncoding(const QByteArray* self);
QByteArray* QByteArray_SetNum(QByteArray* self, int16_t param1);
QByteArray* QByteArray_SetNumWithUshort(QByteArray* self, uint16_t param1);
QByteArray* QByteArray_SetNumWithInt(QByteArray* self, int param1);
QByteArray* QByteArray_SetNumWithUint(QByteArray* self, unsigned int param1);
QByteArray* QByteArray_SetNumWithQlonglong(QByteArray* self, long long param1);
QByteArray* QByteArray_SetNumWithQulonglong(QByteArray* self, unsigned long long param1);
QByteArray* QByteArray_SetNumWithFloat(QByteArray* self, float param1);
QByteArray* QByteArray_SetNumWithDouble(QByteArray* self, double param1);
QByteArray* QByteArray_SetRawData(QByteArray* self, const char* a, unsigned int n);
QByteArray* QByteArray_Number(int param1);
QByteArray* QByteArray_NumberWithUint(unsigned int param1);
QByteArray* QByteArray_NumberWithQlonglong(long long param1);
QByteArray* QByteArray_NumberWithQulonglong(unsigned long long param1);
QByteArray* QByteArray_NumberWithDouble(double param1);
QByteArray* QByteArray_FromRawData(const char* param1, int size);
QByteArray__FromBase64Result* QByteArray_FromBase64Encoding(QByteArray* base64);
QByteArray* QByteArray_FromBase64(QByteArray* base64, int options);
QByteArray* QByteArray_FromBase64WithBase64(QByteArray* base64);
QByteArray* QByteArray_FromHex(QByteArray* hexEncoded);
QByteArray* QByteArray_FromPercentEncoding(QByteArray* pctEncoded);
char* QByteArray_Begin(QByteArray* self);
const char* QByteArray_Begin2(const QByteArray* self);
const char* QByteArray_Cbegin(const QByteArray* self);
const char* QByteArray_ConstBegin(const QByteArray* self);
char* QByteArray_End(QByteArray* self);
const char* QByteArray_End2(const QByteArray* self);
const char* QByteArray_Cend(const QByteArray* self);
const char* QByteArray_ConstEnd(const QByteArray* self);
void QByteArray_PushBack(QByteArray* self, char c);
void QByteArray_PushBackWithChar(QByteArray* self, const char* c);
void QByteArray_PushBackWithQByteArray(QByteArray* self, QByteArray* a);
void QByteArray_PushFront(QByteArray* self, char c);
void QByteArray_PushFrontWithChar(QByteArray* self, const char* c);
void QByteArray_PushFrontWithQByteArray(QByteArray* self, QByteArray* a);
void QByteArray_ShrinkToFit(QByteArray* self);
int QByteArray_Count2(const QByteArray* self);
int QByteArray_Length(const QByteArray* self);
bool QByteArray_IsNull(const QByteArray* self);
QByteArray* QByteArray_Fill2(QByteArray* self, char c, int size);
int QByteArray_IndexOf2(const QByteArray* self, char c, int from);
int QByteArray_IndexOf22(const QByteArray* self, const char* c, int from);
int QByteArray_IndexOf23(const QByteArray* self, QByteArray* a, int from);
int QByteArray_LastIndexOf2(const QByteArray* self, char c, int from);
int QByteArray_LastIndexOf22(const QByteArray* self, const char* c, int from);
int QByteArray_LastIndexOf23(const QByteArray* self, QByteArray* a, int from);
int QByteArray_Compare2(const QByteArray* self, const char* c, uintptr_t cs);
int QByteArray_Compare22(const QByteArray* self, QByteArray* a, uintptr_t cs);
QByteArray* QByteArray_Mid2(const QByteArray* self, int index, int lenVal);
QByteArray* QByteArray_LeftJustified2(const QByteArray* self, int width, char fill);
QByteArray* QByteArray_LeftJustified3(const QByteArray* self, int width, char fill, bool truncate);
QByteArray* QByteArray_RightJustified2(const QByteArray* self, int width, char fill);
QByteArray* QByteArray_RightJustified3(const QByteArray* self, int width, char fill, bool truncate);
int QByteArray_IndexOf24(const QByteArray* self, const char* s, size_t s_Strlen, int from);
int QByteArray_LastIndexOf24(const QByteArray* self, const char* s, size_t s_Strlen, int from);
int16_t QByteArray_ToShort1(const QByteArray* self, bool* ok);
int16_t QByteArray_ToShort2(const QByteArray* self, bool* ok, int base);
uint16_t QByteArray_ToUShort1(const QByteArray* self, bool* ok);
uint16_t QByteArray_ToUShort2(const QByteArray* self, bool* ok, int base);
int QByteArray_ToInt1(const QByteArray* self, bool* ok);
int QByteArray_ToInt2(const QByteArray* self, bool* ok, int base);
unsigned int QByteArray_ToUInt1(const QByteArray* self, bool* ok);
unsigned int QByteArray_ToUInt2(const QByteArray* self, bool* ok, int base);
long QByteArray_ToLong1(const QByteArray* self, bool* ok);
long QByteArray_ToLong2(const QByteArray* self, bool* ok, int base);
unsigned long QByteArray_ToULong1(const QByteArray* self, bool* ok);
unsigned long QByteArray_ToULong2(const QByteArray* self, bool* ok, int base);
int64_t QByteArray_ToLongLong1(const QByteArray* self, bool* ok);
int64_t QByteArray_ToLongLong2(const QByteArray* self, bool* ok, int base);
uint64_t QByteArray_ToULongLong1(const QByteArray* self, bool* ok);
uint64_t QByteArray_ToULongLong2(const QByteArray* self, bool* ok, int base);
float QByteArray_ToFloat1(const QByteArray* self, bool* ok);
double QByteArray_ToDouble1(const QByteArray* self, bool* ok);
QByteArray* QByteArray_ToPercentEncoding1(const QByteArray* self, QByteArray* exclude);
QByteArray* QByteArray_ToPercentEncoding2(const QByteArray* self, QByteArray* exclude, QByteArray* include);
QByteArray* QByteArray_ToPercentEncoding3(const QByteArray* self, QByteArray* exclude, QByteArray* include, char percent);
QByteArray* QByteArray_SetNum2(QByteArray* self, int16_t param1, int base);
QByteArray* QByteArray_SetNum22(QByteArray* self, uint16_t param1, int base);
QByteArray* QByteArray_SetNum23(QByteArray* self, int param1, int base);
QByteArray* QByteArray_SetNum24(QByteArray* self, unsigned int param1, int base);
QByteArray* QByteArray_SetNum25(QByteArray* self, long long param1, int base);
QByteArray* QByteArray_SetNum26(QByteArray* self, unsigned long long param1, int base);
QByteArray* QByteArray_SetNum27(QByteArray* self, float param1, char f);
QByteArray* QByteArray_SetNum3(QByteArray* self, float param1, char f, int prec);
QByteArray* QByteArray_SetNum28(QByteArray* self, double param1, char f);
QByteArray* QByteArray_SetNum32(QByteArray* self, double param1, char f, int prec);
QByteArray* QByteArray_Number2(int param1, int base);
QByteArray* QByteArray_Number22(unsigned int param1, int base);
QByteArray* QByteArray_Number23(long long param1, int base);
QByteArray* QByteArray_Number24(unsigned long long param1, int base);
QByteArray* QByteArray_Number25(double param1, char f);
QByteArray* QByteArray_Number3(double param1, char f, int prec);
QByteArray__FromBase64Result* QByteArray_FromBase64Encoding2(QByteArray* base64, int options);
QByteArray* QByteArray_FromPercentEncoding2(QByteArray* pctEncoded, char percent);
void QByteArray_Delete(QByteArray* self);

QByteRef* QByteRef_new(QByteRef* param1);
void QByteRef_OperatorAssign(QByteRef* self, char c);
void QByteRef_OperatorAssignWithQByteRef(QByteRef* self, QByteRef* c);
bool QByteRef_OperatorEqual(const QByteRef* self, char c);
bool QByteRef_OperatorNotEqual(const QByteRef* self, char c);
bool QByteRef_OperatorGreater(const QByteRef* self, char c);
bool QByteRef_OperatorGreaterOrEqual(const QByteRef* self, char c);
bool QByteRef_OperatorLesser(const QByteRef* self, char c);
bool QByteRef_OperatorLesserOrEqual(const QByteRef* self, char c);
void QByteRef_Delete(QByteRef* self);

QByteArray__FromBase64Result* QByteArray__FromBase64Result_new(QByteArray__FromBase64Result* param1);
void QByteArray__FromBase64Result_Swap(QByteArray__FromBase64Result* self, QByteArray__FromBase64Result* other);
QByteArray* QByteArray__FromBase64Result_OperatorMultiply(QByteArray__FromBase64Result* self);
QByteArray* QByteArray__FromBase64Result_OperatorMultiply2(const QByteArray__FromBase64Result* self);
void QByteArray__FromBase64Result_Delete(QByteArray__FromBase64Result* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
