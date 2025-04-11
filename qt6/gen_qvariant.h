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
#endif

QVariant* QVariant_new();
QVariant* QVariant_new2(QMetaType* type);
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
QVariant* QVariant_new14(struct miqt_string string);
QVariant* QVariant_new15(struct miqt_array /* of struct miqt_string */  stringlist);
QVariant* QVariant_new16(QChar* qchar);
QVariant* QVariant_new17(QDate* date);
QVariant* QVariant_new18(QTime* time);
QVariant* QVariant_new19(QDateTime* datetime);
QVariant* QVariant_new20(struct miqt_map /* of struct miqt_string to QVariant* */  map);
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
QVariant* QVariant_new41(int type);
QVariant* QVariant_new42(QMetaType* type, const void* copy);
QVariant* QVariant_new43(struct miqt_array /* of QVariant* */  list);
void QVariant_operatorAssign(QVariant* self, QVariant* other);
void QVariant_swap(QVariant* self, QVariant* other);
int QVariant_userType(const QVariant* self);
int QVariant_typeId(const QVariant* self);
const char* QVariant_typeName(const QVariant* self);
QMetaType* QVariant_metaType(const QVariant* self);
bool QVariant_canConvert(const QVariant* self, QMetaType* targetType);
bool QVariant_convert(QVariant* self, QMetaType* type);
bool QVariant_canView(const QVariant* self, QMetaType* targetType);
bool QVariant_canConvertWithTargetTypeId(const QVariant* self, int targetTypeId);
bool QVariant_convertWithTargetTypeId(QVariant* self, int targetTypeId);
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
int QVariant_type(const QVariant* self);
const char* QVariant_typeToName(int typeId);
int QVariant_nameToType(const char* name);
void* QVariant_data(QVariant* self);
const void* QVariant_constData(const QVariant* self);
const void* QVariant_data2(const QVariant* self);
void QVariant_setValue(QVariant* self, QVariant* avalue);
QPartialOrdering* QVariant_compare(QVariant* lhs, QVariant* rhs);
int QVariant_toIntWithOk(const QVariant* self, bool* ok);
unsigned int QVariant_toUIntWithOk(const QVariant* self, bool* ok);
long long QVariant_toLongLongWithOk(const QVariant* self, bool* ok);
unsigned long long QVariant_toULongLongWithOk(const QVariant* self, bool* ok);
double QVariant_toDoubleWithOk(const QVariant* self, bool* ok);
float QVariant_toFloatWithOk(const QVariant* self, bool* ok);
double QVariant_toRealWithOk(const QVariant* self, bool* ok);
void QVariant_delete(QVariant* self);

QVariantConstPointer* QVariantConstPointer_new(QVariant* variant);
QVariantConstPointer* QVariantConstPointer_new2(QVariantConstPointer* param1);
QVariant* QVariantConstPointer_operatorMultiply(const QVariantConstPointer* self);
QVariant* QVariantConstPointer_operatorMinusGreater(const QVariantConstPointer* self);
void QVariantConstPointer_operatorAssign(QVariantConstPointer* self, QVariantConstPointer* param1);
void QVariantConstPointer_delete(QVariantConstPointer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
