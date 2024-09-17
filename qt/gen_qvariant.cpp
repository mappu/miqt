#include <QAssociativeIterable>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAssociativeIterable__const_iterator
#include <QBitArray>
#include <QByteArray>
#include <QChar>
#include <QDataStream>
#include <QDate>
#include <QDateTime>
#include <QEasingCurve>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QLine>
#include <QLineF>
#include <QList>
#include <QLocale>
#include <QModelIndex>
#include <QPersistentModelIndex>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegExp>
#include <QRegularExpression>
#include <QSequentialIterable>
#define WORKAROUND_INNER_CLASS_DEFINITION_QSequentialIterable__const_iterator
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTime>
#include <QUrl>
#include <QUuid>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_QVariant__Handler
#define WORKAROUND_INNER_CLASS_DEFINITION_QVariant__PrivateShared
#include <QVariantComparisonHelper>
#define WORKAROUND_INNER_CLASS_DEFINITION_QtMetaTypePrivate__QAssociativeIterableImpl
#define WORKAROUND_INNER_CLASS_DEFINITION_QtMetaTypePrivate__QSequentialIterableImpl
#include "qvariant.h"
#include "gen_qvariant.h"
#include "_cgo_export.h"

QVariant* QVariant_new() {
	return new QVariant();
}

QVariant* QVariant_new2(uintptr_t typeVal) {
	return new QVariant(static_cast<QVariant::Type>(typeVal));
}

QVariant* QVariant_new3(QVariant* other) {
	return new QVariant(*other);
}

QVariant* QVariant_new4(QDataStream* s) {
	return new QVariant(*s);
}

QVariant* QVariant_new5(int i) {
	return new QVariant(static_cast<int>(i));
}

QVariant* QVariant_new6(unsigned int ui) {
	return new QVariant(static_cast<uint>(ui));
}

QVariant* QVariant_new7(int64_t ll) {
	return new QVariant((qlonglong)(ll));
}

QVariant* QVariant_new8(uint64_t ull) {
	return new QVariant((qulonglong)(ull));
}

QVariant* QVariant_new9(bool b) {
	return new QVariant(b);
}

QVariant* QVariant_new10(double d) {
	return new QVariant(static_cast<double>(d));
}

QVariant* QVariant_new11(float f) {
	return new QVariant(static_cast<float>(f));
}

QVariant* QVariant_new12(const char* str) {
	return new QVariant(str);
}

QVariant* QVariant_new13(QByteArray* bytearray) {
	return new QVariant(*bytearray);
}

QVariant* QVariant_new14(QBitArray* bitarray) {
	return new QVariant(*bitarray);
}

QVariant* QVariant_new15(struct miqt_string* stringVal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	return new QVariant(stringVal_QString);
}

QVariant* QVariant_new16(struct miqt_array* /* of struct miqt_string* */ stringlist) {
	QList<QString> stringlist_QList;
	stringlist_QList.reserve(stringlist->len);
	struct miqt_string** stringlist_arr = static_cast<struct miqt_string**>(stringlist->data);
	for(size_t i = 0; i < stringlist->len; ++i) {
		QString stringlist_arr_i_QString = QString::fromUtf8(&stringlist_arr[i]->data, stringlist_arr[i]->len);
		stringlist_QList.push_back(stringlist_arr_i_QString);
	}
	return new QVariant(stringlist_QList);
}

QVariant* QVariant_new17(QChar* qchar) {
	return new QVariant(*qchar);
}

QVariant* QVariant_new18(QDate* date) {
	return new QVariant(*date);
}

QVariant* QVariant_new19(QTime* time) {
	return new QVariant(*time);
}

QVariant* QVariant_new20(QDateTime* datetime) {
	return new QVariant(*datetime);
}

QVariant* QVariant_new21(QSize* size) {
	return new QVariant(*size);
}

QVariant* QVariant_new22(QSizeF* size) {
	return new QVariant(*size);
}

QVariant* QVariant_new23(QPoint* pt) {
	return new QVariant(*pt);
}

QVariant* QVariant_new24(QPointF* pt) {
	return new QVariant(*pt);
}

QVariant* QVariant_new25(QLine* line) {
	return new QVariant(*line);
}

QVariant* QVariant_new26(QLineF* line) {
	return new QVariant(*line);
}

QVariant* QVariant_new27(QRect* rect) {
	return new QVariant(*rect);
}

QVariant* QVariant_new28(QRectF* rect) {
	return new QVariant(*rect);
}

QVariant* QVariant_new29(QLocale* locale) {
	return new QVariant(*locale);
}

QVariant* QVariant_new30(QRegExp* regExp) {
	return new QVariant(*regExp);
}

QVariant* QVariant_new31(QRegularExpression* re) {
	return new QVariant(*re);
}

QVariant* QVariant_new32(QEasingCurve* easing) {
	return new QVariant(*easing);
}

QVariant* QVariant_new33(QUuid* uuid) {
	return new QVariant(*uuid);
}

QVariant* QVariant_new34(QUrl* url) {
	return new QVariant(*url);
}

QVariant* QVariant_new35(QJsonValue* jsonValue) {
	return new QVariant(*jsonValue);
}

QVariant* QVariant_new36(QJsonObject* jsonObject) {
	return new QVariant(*jsonObject);
}

QVariant* QVariant_new37(QJsonArray* jsonArray) {
	return new QVariant(*jsonArray);
}

QVariant* QVariant_new38(QJsonDocument* jsonDocument) {
	return new QVariant(*jsonDocument);
}

QVariant* QVariant_new39(QModelIndex* modelIndex) {
	return new QVariant(*modelIndex);
}

QVariant* QVariant_new40(QPersistentModelIndex* modelIndex) {
	return new QVariant(*modelIndex);
}

void QVariant_OperatorAssign(QVariant* self, QVariant* other) {
	self->operator=(*other);
}

void QVariant_Swap(QVariant* self, QVariant* other) {
	self->swap(*other);
}

uintptr_t QVariant_Type(const QVariant* self) {
	QVariant::Type _ret = self->type();
	return static_cast<uintptr_t>(_ret);
}

int QVariant_UserType(const QVariant* self) {
	return self->userType();
}

const char* QVariant_TypeName(const QVariant* self) {
	return (const char*) self->typeName();
}

bool QVariant_CanConvert(const QVariant* self, int targetTypeId) {
	return self->canConvert(static_cast<int>(targetTypeId));
}

bool QVariant_Convert(QVariant* self, int targetTypeId) {
	return self->convert(static_cast<int>(targetTypeId));
}

bool QVariant_IsValid(const QVariant* self) {
	return self->isValid();
}

bool QVariant_IsNull(const QVariant* self) {
	return self->isNull();
}

void QVariant_Clear(QVariant* self) {
	self->clear();
}

void QVariant_Detach(QVariant* self) {
	self->detach();
}

bool QVariant_IsDetached(const QVariant* self) {
	return self->isDetached();
}

int QVariant_ToInt(const QVariant* self) {
	return self->toInt();
}

unsigned int QVariant_ToUInt(const QVariant* self) {
	return self->toUInt();
}

int64_t QVariant_ToLongLong(const QVariant* self) {
	return self->toLongLong();
}

uint64_t QVariant_ToULongLong(const QVariant* self) {
	return self->toULongLong();
}

bool QVariant_ToBool(const QVariant* self) {
	return self->toBool();
}

double QVariant_ToDouble(const QVariant* self) {
	return self->toDouble();
}

float QVariant_ToFloat(const QVariant* self) {
	return self->toFloat();
}

double QVariant_ToReal(const QVariant* self) {
	return self->toReal();
}

QByteArray* QVariant_ToByteArray(const QVariant* self) {
	return new QByteArray(self->toByteArray());
}

QBitArray* QVariant_ToBitArray(const QVariant* self) {
	return new QBitArray(self->toBitArray());
}

struct miqt_string* QVariant_ToString(const QVariant* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_array* QVariant_ToStringList(const QVariant* self) {
	QStringList _ret = self->toStringList();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QChar* QVariant_ToChar(const QVariant* self) {
	return new QChar(self->toChar());
}

QDate* QVariant_ToDate(const QVariant* self) {
	return new QDate(self->toDate());
}

QTime* QVariant_ToTime(const QVariant* self) {
	return new QTime(self->toTime());
}

QDateTime* QVariant_ToDateTime(const QVariant* self) {
	return new QDateTime(self->toDateTime());
}

QPoint* QVariant_ToPoint(const QVariant* self) {
	return new QPoint(self->toPoint());
}

QPointF* QVariant_ToPointF(const QVariant* self) {
	return new QPointF(self->toPointF());
}

QRect* QVariant_ToRect(const QVariant* self) {
	return new QRect(self->toRect());
}

QSize* QVariant_ToSize(const QVariant* self) {
	return new QSize(self->toSize());
}

QSizeF* QVariant_ToSizeF(const QVariant* self) {
	return new QSizeF(self->toSizeF());
}

QLine* QVariant_ToLine(const QVariant* self) {
	return new QLine(self->toLine());
}

QLineF* QVariant_ToLineF(const QVariant* self) {
	return new QLineF(self->toLineF());
}

QRectF* QVariant_ToRectF(const QVariant* self) {
	return new QRectF(self->toRectF());
}

QLocale* QVariant_ToLocale(const QVariant* self) {
	return new QLocale(self->toLocale());
}

QRegExp* QVariant_ToRegExp(const QVariant* self) {
	return new QRegExp(self->toRegExp());
}

QRegularExpression* QVariant_ToRegularExpression(const QVariant* self) {
	return new QRegularExpression(self->toRegularExpression());
}

QEasingCurve* QVariant_ToEasingCurve(const QVariant* self) {
	return new QEasingCurve(self->toEasingCurve());
}

QUuid* QVariant_ToUuid(const QVariant* self) {
	return new QUuid(self->toUuid());
}

QUrl* QVariant_ToUrl(const QVariant* self) {
	return new QUrl(self->toUrl());
}

QJsonValue* QVariant_ToJsonValue(const QVariant* self) {
	return new QJsonValue(self->toJsonValue());
}

QJsonObject* QVariant_ToJsonObject(const QVariant* self) {
	return new QJsonObject(self->toJsonObject());
}

QJsonArray* QVariant_ToJsonArray(const QVariant* self) {
	return new QJsonArray(self->toJsonArray());
}

QJsonDocument* QVariant_ToJsonDocument(const QVariant* self) {
	return new QJsonDocument(self->toJsonDocument());
}

QModelIndex* QVariant_ToModelIndex(const QVariant* self) {
	return new QModelIndex(self->toModelIndex());
}

QPersistentModelIndex* QVariant_ToPersistentModelIndex(const QVariant* self) {
	return new QPersistentModelIndex(self->toPersistentModelIndex());
}

void QVariant_Load(QVariant* self, QDataStream* ds) {
	self->load(*ds);
}

void QVariant_Save(const QVariant* self, QDataStream* ds) {
	self->save(*ds);
}

const char* QVariant_TypeToName(int typeId) {
	return (const char*) QVariant::typeToName(static_cast<int>(typeId));
}

uintptr_t QVariant_NameToType(const char* name) {
	QVariant::Type _ret = QVariant::nameToType(name);
	return static_cast<uintptr_t>(_ret);
}

bool QVariant_OperatorEqual(const QVariant* self, QVariant* v) {
	return self->operator==(*v);
}

bool QVariant_OperatorNotEqual(const QVariant* self, QVariant* v) {
	return self->operator!=(*v);
}

bool QVariant_OperatorLesser(const QVariant* self, QVariant* v) {
	return self->operator<(*v);
}

bool QVariant_OperatorLesserOrEqual(const QVariant* self, QVariant* v) {
	return self->operator<=(*v);
}

bool QVariant_OperatorGreater(const QVariant* self, QVariant* v) {
	return self->operator>(*v);
}

bool QVariant_OperatorGreaterOrEqual(const QVariant* self, QVariant* v) {
	return self->operator>=(*v);
}

int QVariant_ToInt1(const QVariant* self, bool* ok) {
	return self->toInt(ok);
}

unsigned int QVariant_ToUInt1(const QVariant* self, bool* ok) {
	return self->toUInt(ok);
}

int64_t QVariant_ToLongLong1(const QVariant* self, bool* ok) {
	return self->toLongLong(ok);
}

uint64_t QVariant_ToULongLong1(const QVariant* self, bool* ok) {
	return self->toULongLong(ok);
}

double QVariant_ToDouble1(const QVariant* self, bool* ok) {
	return self->toDouble(ok);
}

float QVariant_ToFloat1(const QVariant* self, bool* ok) {
	return self->toFloat(ok);
}

double QVariant_ToReal1(const QVariant* self, bool* ok) {
	return self->toReal(ok);
}

void QVariant_Delete(QVariant* self) {
	delete self;
}

QVariantComparisonHelper* QVariantComparisonHelper_new(QVariant* varVal) {
	return new QVariantComparisonHelper(*varVal);
}

QVariantComparisonHelper* QVariantComparisonHelper_new2(QVariantComparisonHelper* param1) {
	return new QVariantComparisonHelper(*param1);
}

void QVariantComparisonHelper_Delete(QVariantComparisonHelper* self) {
	delete self;
}

QSequentialIterable* QSequentialIterable_new(QtMetaTypePrivate__QSequentialIterableImpl* impl) {
	return new QSequentialIterable(*impl);
}

QSequentialIterable* QSequentialIterable_new2(QSequentialIterable* param1) {
	return new QSequentialIterable(*param1);
}

QSequentialIterable__const_iterator* QSequentialIterable_Begin(const QSequentialIterable* self) {
	return new QSequentialIterable::const_iterator(self->begin());
}

QSequentialIterable__const_iterator* QSequentialIterable_End(const QSequentialIterable* self) {
	return new QSequentialIterable::const_iterator(self->end());
}

QVariant* QSequentialIterable_At(const QSequentialIterable* self, int idx) {
	return new QVariant(self->at(static_cast<int>(idx)));
}

int QSequentialIterable_Size(const QSequentialIterable* self) {
	return self->size();
}

bool QSequentialIterable_CanReverseIterate(const QSequentialIterable* self) {
	return self->canReverseIterate();
}

void QSequentialIterable_Delete(QSequentialIterable* self) {
	delete self;
}

QAssociativeIterable* QAssociativeIterable_new(QtMetaTypePrivate__QAssociativeIterableImpl* impl) {
	return new QAssociativeIterable(*impl);
}

QAssociativeIterable* QAssociativeIterable_new2(QAssociativeIterable* param1) {
	return new QAssociativeIterable(*param1);
}

QAssociativeIterable__const_iterator* QAssociativeIterable_Begin(const QAssociativeIterable* self) {
	return new QAssociativeIterable::const_iterator(self->begin());
}

QAssociativeIterable__const_iterator* QAssociativeIterable_End(const QAssociativeIterable* self) {
	return new QAssociativeIterable::const_iterator(self->end());
}

QAssociativeIterable__const_iterator* QAssociativeIterable_Find(const QAssociativeIterable* self, QVariant* key) {
	return new QAssociativeIterable::const_iterator(self->find(*key));
}

QVariant* QAssociativeIterable_Value(const QAssociativeIterable* self, QVariant* key) {
	return new QVariant(self->value(*key));
}

int QAssociativeIterable_Size(const QAssociativeIterable* self) {
	return self->size();
}

void QAssociativeIterable_Delete(QAssociativeIterable* self) {
	delete self;
}

void QVariant__PrivateShared_Delete(QVariant__PrivateShared* self) {
	delete self;
}

void QVariant__Handler_Delete(QVariant__Handler* self) {
	delete self;
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_new(QSequentialIterable__const_iterator* other) {
	return new QSequentialIterable::const_iterator(*other);
}

QVariant* QSequentialIterable__const_iterator_OperatorMultiply(const QSequentialIterable__const_iterator* self) {
	return new QVariant(self->operator*());
}

bool QSequentialIterable__const_iterator_OperatorEqual(const QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* o) {
	return self->operator==(*o);
}

bool QSequentialIterable__const_iterator_OperatorNotEqual(const QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* o) {
	return self->operator!=(*o);
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorPlusPlus(QSequentialIterable__const_iterator* self, int param1) {
	return new QSequentialIterable::const_iterator(self->operator++(static_cast<int>(param1)));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorMinusMinus(QSequentialIterable__const_iterator* self, int param1) {
	return new QSequentialIterable::const_iterator(self->operator--(static_cast<int>(param1)));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorPlus(const QSequentialIterable__const_iterator* self, int j) {
	return new QSequentialIterable::const_iterator(self->operator+(static_cast<int>(j)));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorMinus(const QSequentialIterable__const_iterator* self, int j) {
	return new QSequentialIterable::const_iterator(self->operator-(static_cast<int>(j)));
}

void QSequentialIterable__const_iterator_Delete(QSequentialIterable__const_iterator* self) {
	delete self;
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_new(QAssociativeIterable__const_iterator* other) {
	return new QAssociativeIterable::const_iterator(*other);
}

QVariant* QAssociativeIterable__const_iterator_Key(const QAssociativeIterable__const_iterator* self) {
	return new QVariant(self->key());
}

QVariant* QAssociativeIterable__const_iterator_Value(const QAssociativeIterable__const_iterator* self) {
	return new QVariant(self->value());
}

QVariant* QAssociativeIterable__const_iterator_OperatorMultiply(const QAssociativeIterable__const_iterator* self) {
	return new QVariant(self->operator*());
}

bool QAssociativeIterable__const_iterator_OperatorEqual(const QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* o) {
	return self->operator==(*o);
}

bool QAssociativeIterable__const_iterator_OperatorNotEqual(const QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* o) {
	return self->operator!=(*o);
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorPlusPlus(QAssociativeIterable__const_iterator* self, int param1) {
	return new QAssociativeIterable::const_iterator(self->operator++(static_cast<int>(param1)));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorMinusMinus(QAssociativeIterable__const_iterator* self, int param1) {
	return new QAssociativeIterable::const_iterator(self->operator--(static_cast<int>(param1)));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorPlus(const QAssociativeIterable__const_iterator* self, int j) {
	return new QAssociativeIterable::const_iterator(self->operator+(static_cast<int>(j)));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorMinus(const QAssociativeIterable__const_iterator* self, int j) {
	return new QAssociativeIterable::const_iterator(self->operator-(static_cast<int>(j)));
}

void QAssociativeIterable__const_iterator_Delete(QAssociativeIterable__const_iterator* self) {
	delete self;
}

