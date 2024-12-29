#pragma once
#ifndef MIQT_QT6_GEN_QVARIANT_H
#define MIQT_QT6_GEN_QVARIANT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBitArray;
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
class QMetaType;
class QModelIndex;
class QPartialOrdering;
class QPersistentModelIndex;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QRegularExpression;
class QSize;
class QSizeF;
class QTime;
class QUrl;
class QUuid;
class QVariant;
class QVariantConstPointer;
class QColor;
#else
typedef struct QBitArray QBitArray;
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
typedef struct QMetaType QMetaType;
typedef struct QModelIndex QModelIndex;
typedef struct QPartialOrdering QPartialOrdering;
typedef struct QPersistentModelIndex QPersistentModelIndex;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegularExpression QRegularExpression;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTime QTime;
typedef struct QUrl QUrl;
typedef struct QUuid QUuid;
typedef struct QVariant QVariant;
typedef struct QVariantConstPointer QVariantConstPointer;
typedef struct QColor QColor;
#endif

QVariant* QVariant_new();
QVariant* QVariant_new2(QMetaType* typeVal);
QVariant* QVariant_new3(QVariant* other);
QVariant* QVariant_new4(int i);
QVariant* QVariant_new5(unsigned int ui);
QVariant* QVariant_new6(long long ll);
QVariant* QVariant_new7(unsigned long long ull);
QVariant* QVariant_new8(bool b);
QVariant* QVariant_new9(double d);
QVariant* QVariant_new10(float f);
QVariant* QVariant_new11(const char* str);
QVariant* QVariant_new12(struct miqt_string bytearray);
QVariant* QVariant_new13(QBitArray* bitarray);
QVariant* QVariant_new14(struct miqt_string stringVal);
QVariant* QVariant_new15(struct miqt_array /* of struct miqt_string */  stringlist);
QVariant* QVariant_new16(QChar* qchar);
QVariant* QVariant_new17(QDate* date);
QVariant* QVariant_new18(QTime* time);
QVariant* QVariant_new19(QDateTime* datetime);
QVariant* QVariant_new20(struct miqt_map /* of struct miqt_string to QVariant* */  mapVal);
QVariant* QVariant_new21(struct miqt_map /* of struct miqt_string to QVariant* */  hash);
QVariant* QVariant_new22(QSize* size);
QVariant* QVariant_new23(QSizeF* size);
QVariant* QVariant_new24(QPoint* pt);
QVariant* QVariant_new25(QPointF* pt);
QVariant* QVariant_new26(QLine* line);
QVariant* QVariant_new27(QLineF* line);
QVariant* QVariant_new28(QRect* rect);
QVariant* QVariant_new29(QRectF* rect);
QVariant* QVariant_new30(QLocale* locale);
QVariant* QVariant_new31(QRegularExpression* re);
QVariant* QVariant_new32(QEasingCurve* easing);
QVariant* QVariant_new33(QUuid* uuid);
QVariant* QVariant_new34(QUrl* url);
QVariant* QVariant_new35(QJsonValue* jsonValue);
QVariant* QVariant_new36(QJsonObject* jsonObject);
QVariant* QVariant_new37(QJsonArray* jsonArray);
QVariant* QVariant_new38(QJsonDocument* jsonDocument);
QVariant* QVariant_new39(QModelIndex* modelIndex);
QVariant* QVariant_new40(QPersistentModelIndex* modelIndex);
QVariant* QVariant_new41(int typeVal);
QVariant* QVariant_new42(QMetaType* typeVal, const void* copyVal);
QVariant* QVariant_new4099(QColor* color);
void QVariant_OperatorAssign(QVariant* self, QVariant* other);
void QVariant_Swap(QVariant* self, QVariant* other);
int QVariant_UserType(const QVariant* self);
int QVariant_TypeId(const QVariant* self);
const char* QVariant_TypeName(const QVariant* self);
QMetaType* QVariant_MetaType(const QVariant* self);
bool QVariant_CanConvert(const QVariant* self, QMetaType* targetType);
bool QVariant_Convert(QVariant* self, QMetaType* typeVal);
bool QVariant_CanView(const QVariant* self, QMetaType* targetType);
bool QVariant_CanConvertWithTargetTypeId(const QVariant* self, int targetTypeId);
bool QVariant_ConvertWithTargetTypeId(QVariant* self, int targetTypeId);
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
int QVariant_Type(const QVariant* self);
const char* QVariant_TypeToName(int typeId);
int QVariant_NameToType(const char* name);
void* QVariant_Data(QVariant* self);
const void* QVariant_ConstData(const QVariant* self);
const void* QVariant_Data2(const QVariant* self);
void QVariant_SetValue(QVariant* self, QVariant* avalue);
QPartialOrdering* QVariant_Compare(QVariant* lhs, QVariant* rhs);
int QVariant_ToInt1(const QVariant* self, bool* ok);
unsigned int QVariant_ToUInt1(const QVariant* self, bool* ok);
long long QVariant_ToLongLong1(const QVariant* self, bool* ok);
unsigned long long QVariant_ToULongLong1(const QVariant* self, bool* ok);
double QVariant_ToDouble1(const QVariant* self, bool* ok);
float QVariant_ToFloat1(const QVariant* self, bool* ok);
double QVariant_ToReal1(const QVariant* self, bool* ok);
void QVariant_Delete(QVariant* self, bool isSubclass);

QVariantConstPointer* QVariantConstPointer_new(QVariant* variant);
QVariantConstPointer* QVariantConstPointer_new2(QVariantConstPointer* param1);
QVariant* QVariantConstPointer_OperatorMultiply(const QVariantConstPointer* self);
QVariant* QVariantConstPointer_OperatorMinusGreater(const QVariantConstPointer* self);
void QVariantConstPointer_OperatorAssign(QVariantConstPointer* self, QVariantConstPointer* param1);
void QVariantConstPointer_Delete(QVariantConstPointer* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
