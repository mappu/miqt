#ifndef GEN_QVARIANT_H
#define GEN_QVARIANT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAssociativeIterable;
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
class QSequentialIterable;
class QSize;
class QSizeF;
class QTime;
class QUrl;
class QUuid;
class QVariant;
class QVariantComparisonHelper;
#else
typedef struct QAssociativeIterable QAssociativeIterable;
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
typedef struct QSequentialIterable QSequentialIterable;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTime QTime;
typedef struct QUrl QUrl;
typedef struct QUuid QUuid;
typedef struct QVariant QVariant;
typedef struct QVariantComparisonHelper QVariantComparisonHelper;
#endif

QVariant* QVariant_new();
QVariant* QVariant_new2(QVariant* other);
QVariant* QVariant_new3(QDataStream* s);
QVariant* QVariant_new4(int i);
QVariant* QVariant_new5(unsigned int ui);
QVariant* QVariant_new6(int64_t ll);
QVariant* QVariant_new7(uint64_t ull);
QVariant* QVariant_new8(bool b);
QVariant* QVariant_new9(double d);
QVariant* QVariant_new10(float f);
QVariant* QVariant_new11(char* str);
QVariant* QVariant_new12(QByteArray* bytearray);
QVariant* QVariant_new13(QBitArray* bitarray);
QVariant* QVariant_new14(const char* stringVal, size_t stringVal_Strlen);
QVariant* QVariant_new15(char** stringlist, uint64_t* stringlist_Lengths, size_t stringlist_len);
QVariant* QVariant_new16(QChar* qchar);
QVariant* QVariant_new17(QDate* date);
QVariant* QVariant_new18(QTime* time);
QVariant* QVariant_new19(QDateTime* datetime);
QVariant* QVariant_new20(QSize* size);
QVariant* QVariant_new21(QSizeF* size);
QVariant* QVariant_new22(QPoint* pt);
QVariant* QVariant_new23(QPointF* pt);
QVariant* QVariant_new24(QLine* line);
QVariant* QVariant_new25(QLineF* line);
QVariant* QVariant_new26(QRect* rect);
QVariant* QVariant_new27(QRectF* rect);
QVariant* QVariant_new28(QLocale* locale);
QVariant* QVariant_new29(QRegExp* regExp);
QVariant* QVariant_new30(QRegularExpression* re);
QVariant* QVariant_new31(QEasingCurve* easing);
QVariant* QVariant_new32(QUuid* uuid);
QVariant* QVariant_new33(QUrl* url);
QVariant* QVariant_new34(QJsonValue* jsonValue);
QVariant* QVariant_new35(QJsonObject* jsonObject);
QVariant* QVariant_new36(QJsonArray* jsonArray);
QVariant* QVariant_new37(QJsonDocument* jsonDocument);
QVariant* QVariant_new38(QModelIndex* modelIndex);
QVariant* QVariant_new39(QPersistentModelIndex* modelIndex);
void QVariant_OperatorAssign(QVariant* self, QVariant* other);
void QVariant_Swap(QVariant* self, QVariant* other);
int QVariant_UserType(QVariant* self);
char* QVariant_TypeName(QVariant* self);
bool QVariant_CanConvert(QVariant* self, int targetTypeId);
bool QVariant_Convert(QVariant* self, int targetTypeId);
bool QVariant_IsValid(QVariant* self);
bool QVariant_IsNull(QVariant* self);
void QVariant_Clear(QVariant* self);
void QVariant_Detach(QVariant* self);
bool QVariant_IsDetached(QVariant* self);
int QVariant_ToInt(QVariant* self);
unsigned int QVariant_ToUInt(QVariant* self);
int64_t QVariant_ToLongLong(QVariant* self);
uint64_t QVariant_ToULongLong(QVariant* self);
bool QVariant_ToBool(QVariant* self);
double QVariant_ToDouble(QVariant* self);
float QVariant_ToFloat(QVariant* self);
double QVariant_ToReal(QVariant* self);
QByteArray* QVariant_ToByteArray(QVariant* self);
QBitArray* QVariant_ToBitArray(QVariant* self);
void QVariant_ToString(QVariant* self, char** _out, int* _out_Strlen);
void QVariant_ToStringList(QVariant* self, char*** _out, int** _out_Lengths, size_t* _out_len);
QChar* QVariant_ToChar(QVariant* self);
QDate* QVariant_ToDate(QVariant* self);
QTime* QVariant_ToTime(QVariant* self);
QDateTime* QVariant_ToDateTime(QVariant* self);
QPoint* QVariant_ToPoint(QVariant* self);
QPointF* QVariant_ToPointF(QVariant* self);
QRect* QVariant_ToRect(QVariant* self);
QSize* QVariant_ToSize(QVariant* self);
QSizeF* QVariant_ToSizeF(QVariant* self);
QLine* QVariant_ToLine(QVariant* self);
QLineF* QVariant_ToLineF(QVariant* self);
QRectF* QVariant_ToRectF(QVariant* self);
QLocale* QVariant_ToLocale(QVariant* self);
QRegExp* QVariant_ToRegExp(QVariant* self);
QRegularExpression* QVariant_ToRegularExpression(QVariant* self);
QEasingCurve* QVariant_ToEasingCurve(QVariant* self);
QUuid* QVariant_ToUuid(QVariant* self);
QUrl* QVariant_ToUrl(QVariant* self);
QJsonValue* QVariant_ToJsonValue(QVariant* self);
QJsonObject* QVariant_ToJsonObject(QVariant* self);
QJsonArray* QVariant_ToJsonArray(QVariant* self);
QJsonDocument* QVariant_ToJsonDocument(QVariant* self);
QModelIndex* QVariant_ToModelIndex(QVariant* self);
QPersistentModelIndex* QVariant_ToPersistentModelIndex(QVariant* self);
void QVariant_Load(QVariant* self, QDataStream* ds);
void QVariant_Save(QVariant* self, QDataStream* ds);
char* QVariant_TypeToName(int typeId);
bool QVariant_OperatorEqual(QVariant* self, QVariant* v);
bool QVariant_OperatorNotEqual(QVariant* self, QVariant* v);
bool QVariant_OperatorLesser(QVariant* self, QVariant* v);
bool QVariant_OperatorLesserOrEqual(QVariant* self, QVariant* v);
bool QVariant_OperatorGreater(QVariant* self, QVariant* v);
bool QVariant_OperatorGreaterOrEqual(QVariant* self, QVariant* v);
int QVariant_ToInt1(QVariant* self, bool* ok);
unsigned int QVariant_ToUInt1(QVariant* self, bool* ok);
int64_t QVariant_ToLongLong1(QVariant* self, bool* ok);
uint64_t QVariant_ToULongLong1(QVariant* self, bool* ok);
double QVariant_ToDouble1(QVariant* self, bool* ok);
float QVariant_ToFloat1(QVariant* self, bool* ok);
double QVariant_ToReal1(QVariant* self, bool* ok);
void QVariant_Delete(QVariant* self);

QVariantComparisonHelper* QVariantComparisonHelper_new(QVariant* varVal);
QVariantComparisonHelper* QVariantComparisonHelper_new2(QVariantComparisonHelper* param1);
void QVariantComparisonHelper_Delete(QVariantComparisonHelper* self);

QSequentialIterable* QSequentialIterable_new(QSequentialIterable* param1);
QVariant* QSequentialIterable_At(QSequentialIterable* self, int idx);
int QSequentialIterable_Size(QSequentialIterable* self);
bool QSequentialIterable_CanReverseIterate(QSequentialIterable* self);
void QSequentialIterable_Delete(QSequentialIterable* self);

QAssociativeIterable* QAssociativeIterable_new(QAssociativeIterable* param1);
QVariant* QAssociativeIterable_Value(QAssociativeIterable* self, QVariant* key);
int QAssociativeIterable_Size(QAssociativeIterable* self);
void QAssociativeIterable_Delete(QAssociativeIterable* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
