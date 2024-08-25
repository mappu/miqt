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
class QByteArrayDataPtr;
class QByteRef;
#else
typedef struct QByteArray QByteArray;
typedef struct QByteArrayDataPtr QByteArrayDataPtr;
typedef struct QByteRef QByteRef;
#endif

QByteArrayDataPtr* QByteArrayDataPtr_new();
QByteArrayDataPtr* QByteArrayDataPtr_new2(QByteArrayDataPtr* param1);
void QByteArrayDataPtr_Delete(QByteArrayDataPtr* self);

QByteArray* QByteArray_new();
QByteArray* QByteArray_new2(char* param1);
QByteArray* QByteArray_new3(int size, char c);
QByteArray* QByteArray_new4(QByteArray* param1);
QByteArray* QByteArray_new5(QByteArrayDataPtr* dd);
QByteArray* QByteArray_new6(char* param1, int size);
void QByteArray_OperatorAssign(QByteArray* self, QByteArray* param1);
void QByteArray_OperatorAssignWithStr(QByteArray* self, char* str);
void QByteArray_Swap(QByteArray* self, QByteArray* other);
int QByteArray_Size(QByteArray* self);
bool QByteArray_IsEmpty(QByteArray* self);
void QByteArray_Resize(QByteArray* self, int size);
QByteArray* QByteArray_Fill(QByteArray* self, char c);
int QByteArray_Capacity(QByteArray* self);
void QByteArray_Reserve(QByteArray* self, int size);
void QByteArray_Squeeze(QByteArray* self);
char* QByteArray_Data(QByteArray* self);
char* QByteArray_Data2(QByteArray* self);
char* QByteArray_ConstData(QByteArray* self);
void QByteArray_Detach(QByteArray* self);
bool QByteArray_IsDetached(QByteArray* self);
bool QByteArray_IsSharedWith(QByteArray* self, QByteArray* other);
void QByteArray_Clear(QByteArray* self);
char QByteArray_At(QByteArray* self, int i);
char QByteArray_OperatorSubscript(QByteArray* self, int i);
char QByteArray_OperatorSubscriptWithUint(QByteArray* self, unsigned int i);
QByteRef* QByteArray_OperatorSubscriptWithInt(QByteArray* self, int i);
QByteRef* QByteArray_OperatorSubscript2(QByteArray* self, unsigned int i);
char QByteArray_Front(QByteArray* self);
QByteRef* QByteArray_Front2(QByteArray* self);
char QByteArray_Back(QByteArray* self);
QByteRef* QByteArray_Back2(QByteArray* self);
int QByteArray_IndexOf(QByteArray* self, char c);
int QByteArray_IndexOfWithChar(QByteArray* self, char* c);
int QByteArray_IndexOfWithQByteArray(QByteArray* self, QByteArray* a);
int QByteArray_LastIndexOf(QByteArray* self, char c);
int QByteArray_LastIndexOfWithChar(QByteArray* self, char* c);
int QByteArray_LastIndexOfWithQByteArray(QByteArray* self, QByteArray* a);
bool QByteArray_Contains(QByteArray* self, char c);
bool QByteArray_ContainsWithChar(QByteArray* self, char* a);
bool QByteArray_ContainsWithQByteArray(QByteArray* self, QByteArray* a);
int QByteArray_Count(QByteArray* self, char c);
int QByteArray_CountWithChar(QByteArray* self, char* a);
int QByteArray_CountWithQByteArray(QByteArray* self, QByteArray* a);
QByteArray* QByteArray_Left(QByteArray* self, int lenVal);
QByteArray* QByteArray_Right(QByteArray* self, int lenVal);
QByteArray* QByteArray_Mid(QByteArray* self, int index);
QByteArray* QByteArray_Chopped(QByteArray* self, int lenVal);
bool QByteArray_StartsWith(QByteArray* self, QByteArray* a);
bool QByteArray_StartsWithWithChar(QByteArray* self, char c);
bool QByteArray_StartsWith2(QByteArray* self, char* c);
bool QByteArray_EndsWith(QByteArray* self, QByteArray* a);
bool QByteArray_EndsWithWithChar(QByteArray* self, char c);
bool QByteArray_EndsWith2(QByteArray* self, char* c);
bool QByteArray_IsUpper(QByteArray* self);
bool QByteArray_IsLower(QByteArray* self);
void QByteArray_Truncate(QByteArray* self, int pos);
void QByteArray_Chop(QByteArray* self, int n);
QByteArray* QByteArray_ToLower(QByteArray* self);
QByteArray* QByteArray_ToUpper(QByteArray* self);
QByteArray* QByteArray_Trimmed(QByteArray* self);
QByteArray* QByteArray_Simplified(QByteArray* self);
QByteArray* QByteArray_LeftJustified(QByteArray* self, int width);
QByteArray* QByteArray_RightJustified(QByteArray* self, int width);
QByteArray* QByteArray_Prepend(QByteArray* self, char c);
QByteArray* QByteArray_Prepend2(QByteArray* self, int count, char c);
QByteArray* QByteArray_PrependWithChar(QByteArray* self, char* s);
QByteArray* QByteArray_Prepend3(QByteArray* self, char* s, int lenVal);
QByteArray* QByteArray_PrependWithQByteArray(QByteArray* self, QByteArray* a);
QByteArray* QByteArray_Append(QByteArray* self, char c);
QByteArray* QByteArray_Append2(QByteArray* self, int count, char c);
QByteArray* QByteArray_AppendWithChar(QByteArray* self, char* s);
QByteArray* QByteArray_Append3(QByteArray* self, char* s, int lenVal);
QByteArray* QByteArray_AppendWithQByteArray(QByteArray* self, QByteArray* a);
QByteArray* QByteArray_Insert(QByteArray* self, int i, char c);
QByteArray* QByteArray_Insert2(QByteArray* self, int i, int count, char c);
QByteArray* QByteArray_Insert3(QByteArray* self, int i, char* s);
QByteArray* QByteArray_Insert4(QByteArray* self, int i, char* s, int lenVal);
QByteArray* QByteArray_Insert5(QByteArray* self, int i, QByteArray* a);
QByteArray* QByteArray_Remove(QByteArray* self, int index, int lenVal);
QByteArray* QByteArray_Replace(QByteArray* self, int index, int lenVal, char* s);
QByteArray* QByteArray_Replace2(QByteArray* self, int index, int lenVal, char* s, int alen);
QByteArray* QByteArray_Replace3(QByteArray* self, int index, int lenVal, QByteArray* s);
QByteArray* QByteArray_Replace4(QByteArray* self, char before, char* after);
QByteArray* QByteArray_Replace5(QByteArray* self, char before, QByteArray* after);
QByteArray* QByteArray_Replace6(QByteArray* self, char* before, char* after);
QByteArray* QByteArray_Replace7(QByteArray* self, char* before, int bsize, char* after, int asize);
QByteArray* QByteArray_Replace8(QByteArray* self, QByteArray* before, QByteArray* after);
QByteArray* QByteArray_Replace9(QByteArray* self, QByteArray* before, char* after);
QByteArray* QByteArray_Replace10(QByteArray* self, char* before, QByteArray* after);
QByteArray* QByteArray_Replace11(QByteArray* self, char before, char after);
QByteArray* QByteArray_OperatorPlusAssign(QByteArray* self, char c);
QByteArray* QByteArray_OperatorPlusAssignWithChar(QByteArray* self, char* s);
QByteArray* QByteArray_OperatorPlusAssignWithQByteArray(QByteArray* self, QByteArray* a);
void QByteArray_Split(QByteArray* self, char sep, QByteArray*** _out, size_t* _out_len);
QByteArray* QByteArray_Repeated(QByteArray* self, int times);
QByteArray* QByteArray_AppendWithQString(QByteArray* self, const char* s, size_t s_Strlen);
QByteArray* QByteArray_Insert6(QByteArray* self, int i, const char* s, size_t s_Strlen);
QByteArray* QByteArray_Replace12(QByteArray* self, const char* before, size_t before_Strlen, char* after);
QByteArray* QByteArray_Replace13(QByteArray* self, char c, const char* after, size_t after_Strlen);
QByteArray* QByteArray_Replace14(QByteArray* self, const char* before, size_t before_Strlen, QByteArray* after);
QByteArray* QByteArray_OperatorPlusAssignWithQString(QByteArray* self, const char* s, size_t s_Strlen);
int QByteArray_IndexOfWithQString(QByteArray* self, const char* s, size_t s_Strlen);
int QByteArray_LastIndexOfWithQString(QByteArray* self, const char* s, size_t s_Strlen);
bool QByteArray_OperatorEqual(QByteArray* self, const char* s2, size_t s2_Strlen);
bool QByteArray_OperatorNotEqual(QByteArray* self, const char* s2, size_t s2_Strlen);
bool QByteArray_OperatorLesser(QByteArray* self, const char* s2, size_t s2_Strlen);
bool QByteArray_OperatorGreater(QByteArray* self, const char* s2, size_t s2_Strlen);
bool QByteArray_OperatorLesserOrEqual(QByteArray* self, const char* s2, size_t s2_Strlen);
bool QByteArray_OperatorGreaterOrEqual(QByteArray* self, const char* s2, size_t s2_Strlen);
int16_t QByteArray_ToShort(QByteArray* self);
uint16_t QByteArray_ToUShort(QByteArray* self);
int QByteArray_ToInt(QByteArray* self);
unsigned int QByteArray_ToUInt(QByteArray* self);
long QByteArray_ToLong(QByteArray* self);
unsigned long QByteArray_ToULong(QByteArray* self);
int64_t QByteArray_ToLongLong(QByteArray* self);
uint64_t QByteArray_ToULongLong(QByteArray* self);
float QByteArray_ToFloat(QByteArray* self);
double QByteArray_ToDouble(QByteArray* self);
QByteArray* QByteArray_ToBase64(QByteArray* self);
QByteArray* QByteArray_ToHex(QByteArray* self);
QByteArray* QByteArray_ToHexWithSeparator(QByteArray* self, char separator);
QByteArray* QByteArray_ToPercentEncoding(QByteArray* self);
QByteArray* QByteArray_SetNum(QByteArray* self, int16_t param1);
QByteArray* QByteArray_SetNumWithUshort(QByteArray* self, uint16_t param1);
QByteArray* QByteArray_SetNumWithInt(QByteArray* self, int param1);
QByteArray* QByteArray_SetNumWithUint(QByteArray* self, unsigned int param1);
QByteArray* QByteArray_SetNumWithQlonglong(QByteArray* self, int64_t param1);
QByteArray* QByteArray_SetNumWithQulonglong(QByteArray* self, uint64_t param1);
QByteArray* QByteArray_SetNumWithFloat(QByteArray* self, float param1);
QByteArray* QByteArray_SetNumWithDouble(QByteArray* self, double param1);
QByteArray* QByteArray_SetRawData(QByteArray* self, char* a, unsigned int n);
QByteArray* QByteArray_Number(int param1);
QByteArray* QByteArray_NumberWithUint(unsigned int param1);
QByteArray* QByteArray_NumberWithQlonglong(int64_t param1);
QByteArray* QByteArray_NumberWithQulonglong(uint64_t param1);
QByteArray* QByteArray_NumberWithDouble(double param1);
QByteArray* QByteArray_FromRawData(char* param1, int size);
QByteArray* QByteArray_FromBase64(QByteArray* base64);
QByteArray* QByteArray_FromHex(QByteArray* hexEncoded);
QByteArray* QByteArray_FromPercentEncoding(QByteArray* pctEncoded);
void QByteArray_PushBack(QByteArray* self, char c);
void QByteArray_PushBackWithChar(QByteArray* self, char* c);
void QByteArray_PushBackWithQByteArray(QByteArray* self, QByteArray* a);
void QByteArray_PushFront(QByteArray* self, char c);
void QByteArray_PushFrontWithChar(QByteArray* self, char* c);
void QByteArray_PushFrontWithQByteArray(QByteArray* self, QByteArray* a);
void QByteArray_ShrinkToFit(QByteArray* self);
int QByteArray_Count2(QByteArray* self);
int QByteArray_Length(QByteArray* self);
bool QByteArray_IsNull(QByteArray* self);
QByteArray* QByteArray_Fill2(QByteArray* self, char c, int size);
int QByteArray_IndexOf2(QByteArray* self, char c, int from);
int QByteArray_IndexOf22(QByteArray* self, char* c, int from);
int QByteArray_IndexOf23(QByteArray* self, QByteArray* a, int from);
int QByteArray_LastIndexOf2(QByteArray* self, char c, int from);
int QByteArray_LastIndexOf22(QByteArray* self, char* c, int from);
int QByteArray_LastIndexOf23(QByteArray* self, QByteArray* a, int from);
QByteArray* QByteArray_Mid2(QByteArray* self, int index, int lenVal);
QByteArray* QByteArray_LeftJustified2(QByteArray* self, int width, char fill);
QByteArray* QByteArray_LeftJustified3(QByteArray* self, int width, char fill, bool truncate);
QByteArray* QByteArray_RightJustified2(QByteArray* self, int width, char fill);
QByteArray* QByteArray_RightJustified3(QByteArray* self, int width, char fill, bool truncate);
int QByteArray_IndexOf24(QByteArray* self, const char* s, size_t s_Strlen, int from);
int QByteArray_LastIndexOf24(QByteArray* self, const char* s, size_t s_Strlen, int from);
int16_t QByteArray_ToShort1(QByteArray* self, bool* ok);
int16_t QByteArray_ToShort2(QByteArray* self, bool* ok, int base);
uint16_t QByteArray_ToUShort1(QByteArray* self, bool* ok);
uint16_t QByteArray_ToUShort2(QByteArray* self, bool* ok, int base);
int QByteArray_ToInt1(QByteArray* self, bool* ok);
int QByteArray_ToInt2(QByteArray* self, bool* ok, int base);
unsigned int QByteArray_ToUInt1(QByteArray* self, bool* ok);
unsigned int QByteArray_ToUInt2(QByteArray* self, bool* ok, int base);
long QByteArray_ToLong1(QByteArray* self, bool* ok);
long QByteArray_ToLong2(QByteArray* self, bool* ok, int base);
unsigned long QByteArray_ToULong1(QByteArray* self, bool* ok);
unsigned long QByteArray_ToULong2(QByteArray* self, bool* ok, int base);
int64_t QByteArray_ToLongLong1(QByteArray* self, bool* ok);
int64_t QByteArray_ToLongLong2(QByteArray* self, bool* ok, int base);
uint64_t QByteArray_ToULongLong1(QByteArray* self, bool* ok);
uint64_t QByteArray_ToULongLong2(QByteArray* self, bool* ok, int base);
float QByteArray_ToFloat1(QByteArray* self, bool* ok);
double QByteArray_ToDouble1(QByteArray* self, bool* ok);
QByteArray* QByteArray_ToPercentEncoding1(QByteArray* self, QByteArray* exclude);
QByteArray* QByteArray_ToPercentEncoding2(QByteArray* self, QByteArray* exclude, QByteArray* include);
QByteArray* QByteArray_ToPercentEncoding3(QByteArray* self, QByteArray* exclude, QByteArray* include, char percent);
QByteArray* QByteArray_SetNum2(QByteArray* self, int16_t param1, int base);
QByteArray* QByteArray_SetNum22(QByteArray* self, uint16_t param1, int base);
QByteArray* QByteArray_SetNum23(QByteArray* self, int param1, int base);
QByteArray* QByteArray_SetNum24(QByteArray* self, unsigned int param1, int base);
QByteArray* QByteArray_SetNum25(QByteArray* self, int64_t param1, int base);
QByteArray* QByteArray_SetNum26(QByteArray* self, uint64_t param1, int base);
QByteArray* QByteArray_SetNum27(QByteArray* self, float param1, char f);
QByteArray* QByteArray_SetNum3(QByteArray* self, float param1, char f, int prec);
QByteArray* QByteArray_SetNum28(QByteArray* self, double param1, char f);
QByteArray* QByteArray_SetNum32(QByteArray* self, double param1, char f, int prec);
QByteArray* QByteArray_Number2(int param1, int base);
QByteArray* QByteArray_Number22(unsigned int param1, int base);
QByteArray* QByteArray_Number23(int64_t param1, int base);
QByteArray* QByteArray_Number24(uint64_t param1, int base);
QByteArray* QByteArray_Number25(double param1, char f);
QByteArray* QByteArray_Number3(double param1, char f, int prec);
QByteArray* QByteArray_FromPercentEncoding2(QByteArray* pctEncoded, char percent);
void QByteArray_Delete(QByteArray* self);

QByteRef* QByteRef_new(QByteRef* param1);
void QByteRef_OperatorAssign(QByteRef* self, char c);
void QByteRef_OperatorAssignWithQByteRef(QByteRef* self, QByteRef* c);
bool QByteRef_OperatorEqual(QByteRef* self, char c);
bool QByteRef_OperatorNotEqual(QByteRef* self, char c);
bool QByteRef_OperatorGreater(QByteRef* self, char c);
bool QByteRef_OperatorGreaterOrEqual(QByteRef* self, char c);
bool QByteRef_OperatorLesser(QByteRef* self, char c);
bool QByteRef_OperatorLesserOrEqual(QByteRef* self, char c);
void QByteRef_Delete(QByteRef* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
