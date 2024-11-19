#pragma once
#ifndef MIQT_QT_GEN_QVARIANT_H
#define MIQT_QT_GEN_QVARIANT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAssociativeIterable__const_iterator)
typedef QAssociativeIterable::const_iterator QAssociativeIterable__const_iterator;
#else
class QAssociativeIterable__const_iterator;
#endif
class QBitArray;
class QByteArray;
class QChar;
class QDataStream;
class QDate;
class QDateTime;
class QEasingCurve;
class QJsonArray;
class QJsonDocument;
class QJsonObject;
class QJsonValue;
class QLine;
class QLineF;
class QLocale;
class QModelIndex;
class QPersistentModelIndex;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QRegExp;
class QRegularExpression;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QSequentialIterable__const_iterator)
typedef QSequentialIterable::const_iterator QSequentialIterable__const_iterator;
#else
class QSequentialIterable__const_iterator;
#endif
class QSize;
class QSizeF;
class QTime;
class QUrl;
class QUuid;
class QVariant;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QVariant__Handler)
typedef QVariant::Handler QVariant__Handler;
#else
class QVariant__Handler;
#endif
class QVariantComparisonHelper;
#else
typedef struct QAssociativeIterable__const_iterator QAssociativeIterable__const_iterator;
typedef struct QBitArray QBitArray;
typedef struct QByteArray QByteArray;
typedef struct QChar QChar;
typedef struct QDataStream QDataStream;
typedef struct QDate QDate;
typedef struct QDateTime QDateTime;
typedef struct QEasingCurve QEasingCurve;
typedef struct QJsonArray QJsonArray;
typedef struct QJsonDocument QJsonDocument;
typedef struct QJsonObject QJsonObject;
typedef struct QJsonValue QJsonValue;
typedef struct QLine QLine;
typedef struct QLineF QLineF;
typedef struct QLocale QLocale;
typedef struct QModelIndex QModelIndex;
typedef struct QPersistentModelIndex QPersistentModelIndex;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegExp QRegExp;
typedef struct QRegularExpression QRegularExpression;
typedef struct QSequentialIterable__const_iterator QSequentialIterable__const_iterator;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTime QTime;
typedef struct QUrl QUrl;
typedef struct QUuid QUuid;
typedef struct QVariant QVariant;
typedef struct QVariant__Handler QVariant__Handler;
typedef struct QVariantComparisonHelper QVariantComparisonHelper;
#endif

void QVariant_new(QVariant** outptr_QVariant);
void QVariant_new2(int typeVal, QVariant** outptr_QVariant);
void QVariant_new3(int typeId, const void* copyVal, QVariant** outptr_QVariant);
void QVariant_new4(int typeId, const void* copyVal, unsigned int flags, QVariant** outptr_QVariant);
void QVariant_new5(QVariant* other, QVariant** outptr_QVariant);
void QVariant_new6(QDataStream* s, QVariant** outptr_QVariant);
void QVariant_new7(int i, QVariant** outptr_QVariant);
void QVariant_new8(unsigned int ui, QVariant** outptr_QVariant);
void QVariant_new9(long long ll, QVariant** outptr_QVariant);
void QVariant_new10(unsigned long long ull, QVariant** outptr_QVariant);
void QVariant_new11(bool b, QVariant** outptr_QVariant);
void QVariant_new12(double d, QVariant** outptr_QVariant);
void QVariant_new13(float f, QVariant** outptr_QVariant);
void QVariant_new14(const char* str, QVariant** outptr_QVariant);
void QVariant_new15(struct miqt_string bytearray, QVariant** outptr_QVariant);
void QVariant_new16(QBitArray* bitarray, QVariant** outptr_QVariant);
void QVariant_new17(struct miqt_string stringVal, QVariant** outptr_QVariant);
void QVariant_new18(struct miqt_array /* of struct miqt_string */  stringlist, QVariant** outptr_QVariant);
void QVariant_new19(QChar* qchar, QVariant** outptr_QVariant);
void QVariant_new20(QDate* date, QVariant** outptr_QVariant);
void QVariant_new21(QTime* time, QVariant** outptr_QVariant);
void QVariant_new22(QDateTime* datetime, QVariant** outptr_QVariant);
void QVariant_new23(struct miqt_map /* of struct miqt_string to QVariant* */  mapVal, QVariant** outptr_QVariant);
void QVariant_new24(struct miqt_map /* of struct miqt_string to QVariant* */  hash, QVariant** outptr_QVariant);
void QVariant_new25(QSize* size, QVariant** outptr_QVariant);
void QVariant_new26(QSizeF* size, QVariant** outptr_QVariant);
void QVariant_new27(QPoint* pt, QVariant** outptr_QVariant);
void QVariant_new28(QPointF* pt, QVariant** outptr_QVariant);
void QVariant_new29(QLine* line, QVariant** outptr_QVariant);
void QVariant_new30(QLineF* line, QVariant** outptr_QVariant);
void QVariant_new31(QRect* rect, QVariant** outptr_QVariant);
void QVariant_new32(QRectF* rect, QVariant** outptr_QVariant);
void QVariant_new33(QLocale* locale, QVariant** outptr_QVariant);
void QVariant_new34(QRegExp* regExp, QVariant** outptr_QVariant);
void QVariant_new35(QRegularExpression* re, QVariant** outptr_QVariant);
void QVariant_new36(QEasingCurve* easing, QVariant** outptr_QVariant);
void QVariant_new37(QUuid* uuid, QVariant** outptr_QVariant);
void QVariant_new38(QUrl* url, QVariant** outptr_QVariant);
void QVariant_new39(QJsonValue* jsonValue, QVariant** outptr_QVariant);
void QVariant_new40(QJsonObject* jsonObject, QVariant** outptr_QVariant);
void QVariant_new41(QJsonArray* jsonArray, QVariant** outptr_QVariant);
void QVariant_new42(QJsonDocument* jsonDocument, QVariant** outptr_QVariant);
void QVariant_new43(QModelIndex* modelIndex, QVariant** outptr_QVariant);
void QVariant_new44(QPersistentModelIndex* modelIndex, QVariant** outptr_QVariant);
void QVariant_OperatorAssign(QVariant* self, QVariant* other);
void QVariant_Swap(QVariant* self, QVariant* other);
int QVariant_Type(const QVariant* self);
int QVariant_UserType(const QVariant* self);
const char* QVariant_TypeName(const QVariant* self);
bool QVariant_CanConvert(const QVariant* self, int targetTypeId);
bool QVariant_Convert(QVariant* self, int targetTypeId);
bool QVariant_IsValid(const QVariant* self);
bool QVariant_IsNull(const QVariant* self);
void QVariant_Clear(QVariant* self);
void QVariant_Detach(QVariant* self);
bool QVariant_IsDetached(const QVariant* self);
int QVariant_ToInt(const QVariant* self);
unsigned int QVariant_ToUInt(const QVariant* self);
long long QVariant_ToLongLong(const QVariant* self);
unsigned long long QVariant_ToULongLong(const QVariant* self);
bool QVariant_ToBool(const QVariant* self);
double QVariant_ToDouble(const QVariant* self);
float QVariant_ToFloat(const QVariant* self);
double QVariant_ToReal(const QVariant* self);
struct miqt_string QVariant_ToByteArray(const QVariant* self);
QBitArray* QVariant_ToBitArray(const QVariant* self);
struct miqt_string QVariant_ToString(const QVariant* self);
struct miqt_array /* of struct miqt_string */  QVariant_ToStringList(const QVariant* self);
QChar* QVariant_ToChar(const QVariant* self);
QDate* QVariant_ToDate(const QVariant* self);
QTime* QVariant_ToTime(const QVariant* self);
QDateTime* QVariant_ToDateTime(const QVariant* self);
struct miqt_map /* of struct miqt_string to QVariant* */  QVariant_ToMap(const QVariant* self);
struct miqt_map /* of struct miqt_string to QVariant* */  QVariant_ToHash(const QVariant* self);
QPoint* QVariant_ToPoint(const QVariant* self);
QPointF* QVariant_ToPointF(const QVariant* self);
QRect* QVariant_ToRect(const QVariant* self);
QSize* QVariant_ToSize(const QVariant* self);
QSizeF* QVariant_ToSizeF(const QVariant* self);
QLine* QVariant_ToLine(const QVariant* self);
QLineF* QVariant_ToLineF(const QVariant* self);
QRectF* QVariant_ToRectF(const QVariant* self);
QLocale* QVariant_ToLocale(const QVariant* self);
QRegExp* QVariant_ToRegExp(const QVariant* self);
QRegularExpression* QVariant_ToRegularExpression(const QVariant* self);
QEasingCurve* QVariant_ToEasingCurve(const QVariant* self);
QUuid* QVariant_ToUuid(const QVariant* self);
QUrl* QVariant_ToUrl(const QVariant* self);
QJsonValue* QVariant_ToJsonValue(const QVariant* self);
QJsonObject* QVariant_ToJsonObject(const QVariant* self);
QJsonArray* QVariant_ToJsonArray(const QVariant* self);
QJsonDocument* QVariant_ToJsonDocument(const QVariant* self);
QModelIndex* QVariant_ToModelIndex(const QVariant* self);
QPersistentModelIndex* QVariant_ToPersistentModelIndex(const QVariant* self);
void QVariant_Load(QVariant* self, QDataStream* ds);
void QVariant_Save(const QVariant* self, QDataStream* ds);
const char* QVariant_TypeToName(int typeId);
int QVariant_NameToType(const char* name);
void* QVariant_Data(QVariant* self);
const void* QVariant_ConstData(const QVariant* self);
const void* QVariant_Data2(const QVariant* self);
bool QVariant_OperatorEqual(const QVariant* self, QVariant* v);
bool QVariant_OperatorNotEqual(const QVariant* self, QVariant* v);
bool QVariant_OperatorLesser(const QVariant* self, QVariant* v);
bool QVariant_OperatorLesserOrEqual(const QVariant* self, QVariant* v);
bool QVariant_OperatorGreater(const QVariant* self, QVariant* v);
bool QVariant_OperatorGreaterOrEqual(const QVariant* self, QVariant* v);
int QVariant_ToInt1(const QVariant* self, bool* ok);
unsigned int QVariant_ToUInt1(const QVariant* self, bool* ok);
long long QVariant_ToLongLong1(const QVariant* self, bool* ok);
unsigned long long QVariant_ToULongLong1(const QVariant* self, bool* ok);
double QVariant_ToDouble1(const QVariant* self, bool* ok);
float QVariant_ToFloat1(const QVariant* self, bool* ok);
double QVariant_ToReal1(const QVariant* self, bool* ok);
void QVariant_Delete(QVariant* self, bool isSubclass);

void QVariantComparisonHelper_new(QVariant* varVal, QVariantComparisonHelper** outptr_QVariantComparisonHelper);
void QVariantComparisonHelper_new2(QVariantComparisonHelper* param1, QVariantComparisonHelper** outptr_QVariantComparisonHelper);
void QVariantComparisonHelper_Delete(QVariantComparisonHelper* self, bool isSubclass);

void QVariant__Handler_Delete(QVariant__Handler* self, bool isSubclass);

void QSequentialIterable__const_iterator_new(QSequentialIterable__const_iterator* other, QSequentialIterable__const_iterator** outptr_QSequentialIterable__const_iterator);
void QSequentialIterable__const_iterator_OperatorAssign(QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* other);
QVariant* QSequentialIterable__const_iterator_OperatorMultiply(const QSequentialIterable__const_iterator* self);
bool QSequentialIterable__const_iterator_OperatorEqual(const QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* o);
bool QSequentialIterable__const_iterator_OperatorNotEqual(const QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* o);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorPlusPlus(QSequentialIterable__const_iterator* self);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorPlusPlusWithInt(QSequentialIterable__const_iterator* self, int param1);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorMinusMinus(QSequentialIterable__const_iterator* self);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorMinusMinusWithInt(QSequentialIterable__const_iterator* self, int param1);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorPlusAssign(QSequentialIterable__const_iterator* self, int j);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorMinusAssign(QSequentialIterable__const_iterator* self, int j);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorPlus(const QSequentialIterable__const_iterator* self, int j);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorMinus(const QSequentialIterable__const_iterator* self, int j);
void QSequentialIterable__const_iterator_Delete(QSequentialIterable__const_iterator* self, bool isSubclass);

void QAssociativeIterable__const_iterator_new(QAssociativeIterable__const_iterator* other, QAssociativeIterable__const_iterator** outptr_QAssociativeIterable__const_iterator);
void QAssociativeIterable__const_iterator_OperatorAssign(QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* other);
QVariant* QAssociativeIterable__const_iterator_Key(const QAssociativeIterable__const_iterator* self);
QVariant* QAssociativeIterable__const_iterator_Value(const QAssociativeIterable__const_iterator* self);
QVariant* QAssociativeIterable__const_iterator_OperatorMultiply(const QAssociativeIterable__const_iterator* self);
bool QAssociativeIterable__const_iterator_OperatorEqual(const QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* o);
bool QAssociativeIterable__const_iterator_OperatorNotEqual(const QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* o);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorPlusPlus(QAssociativeIterable__const_iterator* self);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorPlusPlusWithInt(QAssociativeIterable__const_iterator* self, int param1);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorMinusMinus(QAssociativeIterable__const_iterator* self);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorMinusMinusWithInt(QAssociativeIterable__const_iterator* self, int param1);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorPlusAssign(QAssociativeIterable__const_iterator* self, int j);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorMinusAssign(QAssociativeIterable__const_iterator* self, int j);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorPlus(const QAssociativeIterable__const_iterator* self, int j);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorMinus(const QAssociativeIterable__const_iterator* self, int j);
void QAssociativeIterable__const_iterator_Delete(QAssociativeIterable__const_iterator* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
