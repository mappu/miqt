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

QVariant* QVariant_new();
QVariant* QVariant_new2(int type);
QVariant* QVariant_new3(int typeId, const void* copy);
QVariant* QVariant_new4(int typeId, const void* copy, unsigned int flags);
QVariant* QVariant_new5(QVariant* other);
QVariant* QVariant_new6(QDataStream* s);
QVariant* QVariant_new7(int i);
QVariant* QVariant_new8(unsigned int ui);
QVariant* QVariant_new9(long long ll);
QVariant* QVariant_new10(unsigned long long ull);
QVariant* QVariant_new11(bool b);
QVariant* QVariant_new12(double d);
QVariant* QVariant_new13(float f);
QVariant* QVariant_new14(const char* str);
QVariant* QVariant_new15(struct miqt_string bytearray);
QVariant* QVariant_new16(QBitArray* bitarray);
QVariant* QVariant_new17(struct miqt_string string);
QVariant* QVariant_new18(struct miqt_array /* of struct miqt_string */  stringlist);
QVariant* QVariant_new19(QChar* qchar);
QVariant* QVariant_new20(QDate* date);
QVariant* QVariant_new21(QTime* time);
QVariant* QVariant_new22(QDateTime* datetime);
QVariant* QVariant_new23(struct miqt_map /* of struct miqt_string to QVariant* */  map);
QVariant* QVariant_new24(struct miqt_map /* of struct miqt_string to QVariant* */  hash);
QVariant* QVariant_new25(QSize* size);
QVariant* QVariant_new26(QSizeF* size);
QVariant* QVariant_new27(QPoint* pt);
QVariant* QVariant_new28(QPointF* pt);
QVariant* QVariant_new29(QLine* line);
QVariant* QVariant_new30(QLineF* line);
QVariant* QVariant_new31(QRect* rect);
QVariant* QVariant_new32(QRectF* rect);
QVariant* QVariant_new33(QLocale* locale);
QVariant* QVariant_new34(QRegExp* regExp);
QVariant* QVariant_new35(QRegularExpression* re);
QVariant* QVariant_new36(QEasingCurve* easing);
QVariant* QVariant_new37(QUuid* uuid);
QVariant* QVariant_new38(QUrl* url);
QVariant* QVariant_new39(QJsonValue* jsonValue);
QVariant* QVariant_new40(QJsonObject* jsonObject);
QVariant* QVariant_new41(QJsonArray* jsonArray);
QVariant* QVariant_new42(QJsonDocument* jsonDocument);
QVariant* QVariant_new43(QModelIndex* modelIndex);
QVariant* QVariant_new44(QPersistentModelIndex* modelIndex);
QVariant* QVariant_new45(struct miqt_array /* of QVariant* */  list);
void QVariant_operatorAssign(QVariant* self, QVariant* other);
void QVariant_swap(QVariant* self, QVariant* other);
int QVariant_type(const QVariant* self);
int QVariant_userType(const QVariant* self);
const char* QVariant_typeName(const QVariant* self);
bool QVariant_canConvert(const QVariant* self, int targetTypeId);
bool QVariant_convert(QVariant* self, int targetTypeId);
bool QVariant_isValid(const QVariant* self);
bool QVariant_isNull(const QVariant* self);
void QVariant_clear(QVariant* self);
void QVariant_detach(QVariant* self);
bool QVariant_isDetached(const QVariant* self);
int QVariant_toInt(const QVariant* self);
unsigned int QVariant_toUInt(const QVariant* self);
long long QVariant_toLongLong(const QVariant* self);
unsigned long long QVariant_toULongLong(const QVariant* self);
bool QVariant_toBool(const QVariant* self);
double QVariant_toDouble(const QVariant* self);
float QVariant_toFloat(const QVariant* self);
double QVariant_toReal(const QVariant* self);
struct miqt_string QVariant_toByteArray(const QVariant* self);
QBitArray* QVariant_toBitArray(const QVariant* self);
struct miqt_string QVariant_toString(const QVariant* self);
struct miqt_array /* of struct miqt_string */  QVariant_toStringList(const QVariant* self);
QChar* QVariant_toChar(const QVariant* self);
QDate* QVariant_toDate(const QVariant* self);
QTime* QVariant_toTime(const QVariant* self);
QDateTime* QVariant_toDateTime(const QVariant* self);
struct miqt_array /* of QVariant* */  QVariant_toList(const QVariant* self);
struct miqt_map /* of struct miqt_string to QVariant* */  QVariant_toMap(const QVariant* self);
struct miqt_map /* of struct miqt_string to QVariant* */  QVariant_toHash(const QVariant* self);
QPoint* QVariant_toPoint(const QVariant* self);
QPointF* QVariant_toPointF(const QVariant* self);
QRect* QVariant_toRect(const QVariant* self);
QSize* QVariant_toSize(const QVariant* self);
QSizeF* QVariant_toSizeF(const QVariant* self);
QLine* QVariant_toLine(const QVariant* self);
QLineF* QVariant_toLineF(const QVariant* self);
QRectF* QVariant_toRectF(const QVariant* self);
QLocale* QVariant_toLocale(const QVariant* self);
QRegExp* QVariant_toRegExp(const QVariant* self);
QRegularExpression* QVariant_toRegularExpression(const QVariant* self);
QEasingCurve* QVariant_toEasingCurve(const QVariant* self);
QUuid* QVariant_toUuid(const QVariant* self);
QUrl* QVariant_toUrl(const QVariant* self);
QJsonValue* QVariant_toJsonValue(const QVariant* self);
QJsonObject* QVariant_toJsonObject(const QVariant* self);
QJsonArray* QVariant_toJsonArray(const QVariant* self);
QJsonDocument* QVariant_toJsonDocument(const QVariant* self);
QModelIndex* QVariant_toModelIndex(const QVariant* self);
QPersistentModelIndex* QVariant_toPersistentModelIndex(const QVariant* self);
void QVariant_load(QVariant* self, QDataStream* ds);
void QVariant_save(const QVariant* self, QDataStream* ds);
const char* QVariant_typeToName(int typeId);
int QVariant_nameToType(const char* name);
void* QVariant_data(QVariant* self);
const void* QVariant_constData(const QVariant* self);
const void* QVariant_data2(const QVariant* self);
bool QVariant_operatorEqual(const QVariant* self, QVariant* v);
bool QVariant_operatorNotEqual(const QVariant* self, QVariant* v);
bool QVariant_operatorLesser(const QVariant* self, QVariant* v);
bool QVariant_operatorLesserOrEqual(const QVariant* self, QVariant* v);
bool QVariant_operatorGreater(const QVariant* self, QVariant* v);
bool QVariant_operatorGreaterOrEqual(const QVariant* self, QVariant* v);
int QVariant_toIntWithOk(const QVariant* self, bool* ok);
unsigned int QVariant_toUIntWithOk(const QVariant* self, bool* ok);
long long QVariant_toLongLongWithOk(const QVariant* self, bool* ok);
unsigned long long QVariant_toULongLongWithOk(const QVariant* self, bool* ok);
double QVariant_toDoubleWithOk(const QVariant* self, bool* ok);
float QVariant_toFloatWithOk(const QVariant* self, bool* ok);
double QVariant_toRealWithOk(const QVariant* self, bool* ok);

void QVariant_delete(QVariant* self);

QVariantComparisonHelper* QVariantComparisonHelper_new(QVariant* var);
QVariantComparisonHelper* QVariantComparisonHelper_new2(QVariantComparisonHelper* param1);
void QVariantComparisonHelper_delete(QVariantComparisonHelper* self);

void QVariant__Handler_delete(QVariant__Handler* self);

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_new(QSequentialIterable__const_iterator* other);
void QSequentialIterable__const_iterator_operatorAssign(QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* other);
QVariant* QSequentialIterable__const_iterator_operatorMultiply(const QSequentialIterable__const_iterator* self);
bool QSequentialIterable__const_iterator_operatorEqual(const QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* o);
bool QSequentialIterable__const_iterator_operatorNotEqual(const QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* o);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorPlusPlus(QSequentialIterable__const_iterator* self);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorPlusPlusWithInt(QSequentialIterable__const_iterator* self, int param1);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorMinusMinus(QSequentialIterable__const_iterator* self);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorMinusMinusWithInt(QSequentialIterable__const_iterator* self, int param1);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorPlusAssign(QSequentialIterable__const_iterator* self, int j);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorMinusAssign(QSequentialIterable__const_iterator* self, int j);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorPlus(const QSequentialIterable__const_iterator* self, int j);
QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorMinus(const QSequentialIterable__const_iterator* self, int j);

void QSequentialIterable__const_iterator_delete(QSequentialIterable__const_iterator* self);

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_new(QAssociativeIterable__const_iterator* other);
void QAssociativeIterable__const_iterator_operatorAssign(QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* other);
QVariant* QAssociativeIterable__const_iterator_key(const QAssociativeIterable__const_iterator* self);
QVariant* QAssociativeIterable__const_iterator_value(const QAssociativeIterable__const_iterator* self);
QVariant* QAssociativeIterable__const_iterator_operatorMultiply(const QAssociativeIterable__const_iterator* self);
bool QAssociativeIterable__const_iterator_operatorEqual(const QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* o);
bool QAssociativeIterable__const_iterator_operatorNotEqual(const QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* o);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorPlusPlus(QAssociativeIterable__const_iterator* self);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorPlusPlusWithInt(QAssociativeIterable__const_iterator* self, int param1);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorMinusMinus(QAssociativeIterable__const_iterator* self);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorMinusMinusWithInt(QAssociativeIterable__const_iterator* self, int param1);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorPlusAssign(QAssociativeIterable__const_iterator* self, int j);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorMinusAssign(QAssociativeIterable__const_iterator* self, int j);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorPlus(const QAssociativeIterable__const_iterator* self, int j);
QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorMinus(const QAssociativeIterable__const_iterator* self, int j);

void QAssociativeIterable__const_iterator_delete(QAssociativeIterable__const_iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
