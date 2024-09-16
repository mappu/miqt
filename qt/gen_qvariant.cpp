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
	miqt_string** stringlist_arr = static_cast<miqt_string**>(stringlist->data);
	for(size_t i = 0; i < stringlist->len; ++i) {
		stringlist_QList.push_back(QString::fromUtf8(& stringlist_arr[i]->data, stringlist_arr[i]->len));
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
	QByteArray _ret = self->toByteArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

QBitArray* QVariant_ToBitArray(const QVariant* self) {
	QBitArray _ret = self->toBitArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitArray*>(new QBitArray(_ret));
}

struct miqt_string* QVariant_ToString(const QVariant* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_array* QVariant_ToStringList(const QVariant* self) {
	QStringList _ret = self->toStringList();
	// Convert QStringList from C++ memory to manually-managed C memory
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
	QChar _ret = self->toChar();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(_ret));
}

QDate* QVariant_ToDate(const QVariant* self) {
	QDate _ret = self->toDate();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(_ret));
}

QTime* QVariant_ToTime(const QVariant* self) {
	QTime _ret = self->toTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(_ret));
}

QDateTime* QVariant_ToDateTime(const QVariant* self) {
	QDateTime _ret = self->toDateTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(_ret));
}

QPoint* QVariant_ToPoint(const QVariant* self) {
	QPoint _ret = self->toPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(_ret));
}

QPointF* QVariant_ToPointF(const QVariant* self) {
	QPointF _ret = self->toPointF();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

QRect* QVariant_ToRect(const QVariant* self) {
	QRect _ret = self->toRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QSize* QVariant_ToSize(const QVariant* self) {
	QSize _ret = self->toSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

QSizeF* QVariant_ToSizeF(const QVariant* self) {
	QSizeF _ret = self->toSizeF();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(_ret));
}

QLine* QVariant_ToLine(const QVariant* self) {
	QLine _ret = self->toLine();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLine*>(new QLine(_ret));
}

QLineF* QVariant_ToLineF(const QVariant* self) {
	QLineF _ret = self->toLineF();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLineF*>(new QLineF(_ret));
}

QRectF* QVariant_ToRectF(const QVariant* self) {
	QRectF _ret = self->toRectF();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QLocale* QVariant_ToLocale(const QVariant* self) {
	QLocale _ret = self->toLocale();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLocale*>(new QLocale(_ret));
}

QRegExp* QVariant_ToRegExp(const QVariant* self) {
	QRegExp _ret = self->toRegExp();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegExp*>(new QRegExp(_ret));
}

QRegularExpression* QVariant_ToRegularExpression(const QVariant* self) {
	QRegularExpression _ret = self->toRegularExpression();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(_ret));
}

QEasingCurve* QVariant_ToEasingCurve(const QVariant* self) {
	QEasingCurve _ret = self->toEasingCurve();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QEasingCurve*>(new QEasingCurve(_ret));
}

QUuid* QVariant_ToUuid(const QVariant* self) {
	QUuid _ret = self->toUuid();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(_ret));
}

QUrl* QVariant_ToUrl(const QVariant* self) {
	QUrl _ret = self->toUrl();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(_ret));
}

QJsonValue* QVariant_ToJsonValue(const QVariant* self) {
	QJsonValue _ret = self->toJsonValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(_ret));
}

QJsonObject* QVariant_ToJsonObject(const QVariant* self) {
	QJsonObject _ret = self->toJsonObject();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(_ret));
}

QJsonArray* QVariant_ToJsonArray(const QVariant* self) {
	QJsonArray _ret = self->toJsonArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray*>(new QJsonArray(_ret));
}

QJsonDocument* QVariant_ToJsonDocument(const QVariant* self) {
	QJsonDocument _ret = self->toJsonDocument();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(_ret));
}

QModelIndex* QVariant_ToModelIndex(const QVariant* self) {
	QModelIndex _ret = self->toModelIndex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QPersistentModelIndex* QVariant_ToPersistentModelIndex(const QVariant* self) {
	QPersistentModelIndex _ret = self->toPersistentModelIndex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPersistentModelIndex*>(new QPersistentModelIndex(_ret));
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
	QSequentialIterable::const_iterator _ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSequentialIterable::const_iterator*>(new QSequentialIterable::const_iterator(_ret));
}

QSequentialIterable__const_iterator* QSequentialIterable_End(const QSequentialIterable* self) {
	QSequentialIterable::const_iterator _ret = self->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSequentialIterable::const_iterator*>(new QSequentialIterable::const_iterator(_ret));
}

QVariant* QSequentialIterable_At(const QSequentialIterable* self, int idx) {
	QVariant _ret = self->at(static_cast<int>(idx));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
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
	QAssociativeIterable::const_iterator _ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAssociativeIterable::const_iterator*>(new QAssociativeIterable::const_iterator(_ret));
}

QAssociativeIterable__const_iterator* QAssociativeIterable_End(const QAssociativeIterable* self) {
	QAssociativeIterable::const_iterator _ret = self->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAssociativeIterable::const_iterator*>(new QAssociativeIterable::const_iterator(_ret));
}

QAssociativeIterable__const_iterator* QAssociativeIterable_Find(const QAssociativeIterable* self, QVariant* key) {
	QAssociativeIterable::const_iterator _ret = self->find(*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAssociativeIterable::const_iterator*>(new QAssociativeIterable::const_iterator(_ret));
}

QVariant* QAssociativeIterable_Value(const QAssociativeIterable* self, QVariant* key) {
	QVariant _ret = self->value(*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
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
	QVariant _ret = self->operator*();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

bool QSequentialIterable__const_iterator_OperatorEqual(const QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* o) {
	return self->operator==(*o);
}

bool QSequentialIterable__const_iterator_OperatorNotEqual(const QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* o) {
	return self->operator!=(*o);
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorPlusPlus(QSequentialIterable__const_iterator* self, int param1) {
	QSequentialIterable::const_iterator _ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSequentialIterable::const_iterator*>(new QSequentialIterable::const_iterator(_ret));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorMinusMinus(QSequentialIterable__const_iterator* self, int param1) {
	QSequentialIterable::const_iterator _ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSequentialIterable::const_iterator*>(new QSequentialIterable::const_iterator(_ret));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorPlus(const QSequentialIterable__const_iterator* self, int j) {
	QSequentialIterable::const_iterator _ret = self->operator+(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSequentialIterable::const_iterator*>(new QSequentialIterable::const_iterator(_ret));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorMinus(const QSequentialIterable__const_iterator* self, int j) {
	QSequentialIterable::const_iterator _ret = self->operator-(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSequentialIterable::const_iterator*>(new QSequentialIterable::const_iterator(_ret));
}

void QSequentialIterable__const_iterator_Delete(QSequentialIterable__const_iterator* self) {
	delete self;
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_new(QAssociativeIterable__const_iterator* other) {
	return new QAssociativeIterable::const_iterator(*other);
}

QVariant* QAssociativeIterable__const_iterator_Key(const QAssociativeIterable__const_iterator* self) {
	QVariant _ret = self->key();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

QVariant* QAssociativeIterable__const_iterator_Value(const QAssociativeIterable__const_iterator* self) {
	QVariant _ret = self->value();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

QVariant* QAssociativeIterable__const_iterator_OperatorMultiply(const QAssociativeIterable__const_iterator* self) {
	QVariant _ret = self->operator*();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

bool QAssociativeIterable__const_iterator_OperatorEqual(const QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* o) {
	return self->operator==(*o);
}

bool QAssociativeIterable__const_iterator_OperatorNotEqual(const QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* o) {
	return self->operator!=(*o);
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorPlusPlus(QAssociativeIterable__const_iterator* self, int param1) {
	QAssociativeIterable::const_iterator _ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAssociativeIterable::const_iterator*>(new QAssociativeIterable::const_iterator(_ret));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorMinusMinus(QAssociativeIterable__const_iterator* self, int param1) {
	QAssociativeIterable::const_iterator _ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAssociativeIterable::const_iterator*>(new QAssociativeIterable::const_iterator(_ret));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorPlus(const QAssociativeIterable__const_iterator* self, int j) {
	QAssociativeIterable::const_iterator _ret = self->operator+(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAssociativeIterable::const_iterator*>(new QAssociativeIterable::const_iterator(_ret));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorMinus(const QAssociativeIterable__const_iterator* self, int j) {
	QAssociativeIterable::const_iterator _ret = self->operator-(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAssociativeIterable::const_iterator*>(new QAssociativeIterable::const_iterator(_ret));
}

void QAssociativeIterable__const_iterator_Delete(QAssociativeIterable__const_iterator* self) {
	delete self;
}

