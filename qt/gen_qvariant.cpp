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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

QVariant* QVariant_new15(const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	return new QVariant(stringVal_QString);
}

QVariant* QVariant_new16(char** stringlist, uint64_t* stringlist_Lengths, size_t stringlist_len) {
	QList<QString> stringlist_QList;
	stringlist_QList.reserve(stringlist_len);
	for(size_t i = 0; i < stringlist_len; ++i) {
		stringlist_QList.push_back(QString::fromUtf8(stringlist[i], stringlist_Lengths[i]));
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

uintptr_t QVariant_Type(QVariant* self) {
	QVariant::Type ret = const_cast<const QVariant*>(self)->type();
	return static_cast<uintptr_t>(ret);
}

int QVariant_UserType(QVariant* self) {
	return const_cast<const QVariant*>(self)->userType();
}

const char* QVariant_TypeName(QVariant* self) {
	return (const char*) const_cast<const QVariant*>(self)->typeName();
}

bool QVariant_CanConvert(QVariant* self, int targetTypeId) {
	return const_cast<const QVariant*>(self)->canConvert(static_cast<int>(targetTypeId));
}

bool QVariant_Convert(QVariant* self, int targetTypeId) {
	return self->convert(static_cast<int>(targetTypeId));
}

bool QVariant_IsValid(QVariant* self) {
	return const_cast<const QVariant*>(self)->isValid();
}

bool QVariant_IsNull(QVariant* self) {
	return const_cast<const QVariant*>(self)->isNull();
}

void QVariant_Clear(QVariant* self) {
	self->clear();
}

void QVariant_Detach(QVariant* self) {
	self->detach();
}

bool QVariant_IsDetached(QVariant* self) {
	return const_cast<const QVariant*>(self)->isDetached();
}

int QVariant_ToInt(QVariant* self) {
	return const_cast<const QVariant*>(self)->toInt();
}

unsigned int QVariant_ToUInt(QVariant* self) {
	return const_cast<const QVariant*>(self)->toUInt();
}

int64_t QVariant_ToLongLong(QVariant* self) {
	return const_cast<const QVariant*>(self)->toLongLong();
}

uint64_t QVariant_ToULongLong(QVariant* self) {
	return const_cast<const QVariant*>(self)->toULongLong();
}

bool QVariant_ToBool(QVariant* self) {
	return const_cast<const QVariant*>(self)->toBool();
}

double QVariant_ToDouble(QVariant* self) {
	return const_cast<const QVariant*>(self)->toDouble();
}

float QVariant_ToFloat(QVariant* self) {
	return const_cast<const QVariant*>(self)->toFloat();
}

double QVariant_ToReal(QVariant* self) {
	return const_cast<const QVariant*>(self)->toReal();
}

QByteArray* QVariant_ToByteArray(QVariant* self) {
	QByteArray ret = const_cast<const QVariant*>(self)->toByteArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QBitArray* QVariant_ToBitArray(QVariant* self) {
	QBitArray ret = const_cast<const QVariant*>(self)->toBitArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitArray*>(new QBitArray(ret));
}

void QVariant_ToString(QVariant* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QVariant*>(self)->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QVariant_ToStringList(QVariant* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QVariant*>(self)->toStringList();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

QChar* QVariant_ToChar(QVariant* self) {
	QChar ret = const_cast<const QVariant*>(self)->toChar();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QDate* QVariant_ToDate(QVariant* self) {
	QDate ret = const_cast<const QVariant*>(self)->toDate();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QTime* QVariant_ToTime(QVariant* self) {
	QTime ret = const_cast<const QVariant*>(self)->toTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

QDateTime* QVariant_ToDateTime(QVariant* self) {
	QDateTime ret = const_cast<const QVariant*>(self)->toDateTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QPoint* QVariant_ToPoint(QVariant* self) {
	QPoint ret = const_cast<const QVariant*>(self)->toPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPointF* QVariant_ToPointF(QVariant* self) {
	QPointF ret = const_cast<const QVariant*>(self)->toPointF();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QRect* QVariant_ToRect(QVariant* self) {
	QRect ret = const_cast<const QVariant*>(self)->toRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QSize* QVariant_ToSize(QVariant* self) {
	QSize ret = const_cast<const QVariant*>(self)->toSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSizeF* QVariant_ToSizeF(QVariant* self) {
	QSizeF ret = const_cast<const QVariant*>(self)->toSizeF();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QLine* QVariant_ToLine(QVariant* self) {
	QLine ret = const_cast<const QVariant*>(self)->toLine();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLine*>(new QLine(ret));
}

QLineF* QVariant_ToLineF(QVariant* self) {
	QLineF ret = const_cast<const QVariant*>(self)->toLineF();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLineF*>(new QLineF(ret));
}

QRectF* QVariant_ToRectF(QVariant* self) {
	QRectF ret = const_cast<const QVariant*>(self)->toRectF();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QLocale* QVariant_ToLocale(QVariant* self) {
	QLocale ret = const_cast<const QVariant*>(self)->toLocale();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLocale*>(new QLocale(ret));
}

QRegExp* QVariant_ToRegExp(QVariant* self) {
	QRegExp ret = const_cast<const QVariant*>(self)->toRegExp();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegExp*>(new QRegExp(ret));
}

QRegularExpression* QVariant_ToRegularExpression(QVariant* self) {
	QRegularExpression ret = const_cast<const QVariant*>(self)->toRegularExpression();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(ret));
}

QEasingCurve* QVariant_ToEasingCurve(QVariant* self) {
	QEasingCurve ret = const_cast<const QVariant*>(self)->toEasingCurve();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QEasingCurve*>(new QEasingCurve(ret));
}

QUuid* QVariant_ToUuid(QVariant* self) {
	QUuid ret = const_cast<const QVariant*>(self)->toUuid();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(ret));
}

QUrl* QVariant_ToUrl(QVariant* self) {
	QUrl ret = const_cast<const QVariant*>(self)->toUrl();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

QJsonValue* QVariant_ToJsonValue(QVariant* self) {
	QJsonValue ret = const_cast<const QVariant*>(self)->toJsonValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QJsonObject* QVariant_ToJsonObject(QVariant* self) {
	QJsonObject ret = const_cast<const QVariant*>(self)->toJsonObject();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(ret));
}

QJsonArray* QVariant_ToJsonArray(QVariant* self) {
	QJsonArray ret = const_cast<const QVariant*>(self)->toJsonArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray*>(new QJsonArray(ret));
}

QJsonDocument* QVariant_ToJsonDocument(QVariant* self) {
	QJsonDocument ret = const_cast<const QVariant*>(self)->toJsonDocument();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(ret));
}

QModelIndex* QVariant_ToModelIndex(QVariant* self) {
	QModelIndex ret = const_cast<const QVariant*>(self)->toModelIndex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QPersistentModelIndex* QVariant_ToPersistentModelIndex(QVariant* self) {
	QPersistentModelIndex ret = const_cast<const QVariant*>(self)->toPersistentModelIndex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPersistentModelIndex*>(new QPersistentModelIndex(ret));
}

void QVariant_Load(QVariant* self, QDataStream* ds) {
	self->load(*ds);
}

void QVariant_Save(QVariant* self, QDataStream* ds) {
	const_cast<const QVariant*>(self)->save(*ds);
}

const char* QVariant_TypeToName(int typeId) {
	return (const char*) QVariant::typeToName(static_cast<int>(typeId));
}

uintptr_t QVariant_NameToType(const char* name) {
	QVariant::Type ret = QVariant::nameToType(name);
	return static_cast<uintptr_t>(ret);
}

bool QVariant_OperatorEqual(QVariant* self, QVariant* v) {
	return const_cast<const QVariant*>(self)->operator==(*v);
}

bool QVariant_OperatorNotEqual(QVariant* self, QVariant* v) {
	return const_cast<const QVariant*>(self)->operator!=(*v);
}

bool QVariant_OperatorLesser(QVariant* self, QVariant* v) {
	return const_cast<const QVariant*>(self)->operator<(*v);
}

bool QVariant_OperatorLesserOrEqual(QVariant* self, QVariant* v) {
	return const_cast<const QVariant*>(self)->operator<=(*v);
}

bool QVariant_OperatorGreater(QVariant* self, QVariant* v) {
	return const_cast<const QVariant*>(self)->operator>(*v);
}

bool QVariant_OperatorGreaterOrEqual(QVariant* self, QVariant* v) {
	return const_cast<const QVariant*>(self)->operator>=(*v);
}

int QVariant_ToInt1(QVariant* self, bool* ok) {
	return const_cast<const QVariant*>(self)->toInt(ok);
}

unsigned int QVariant_ToUInt1(QVariant* self, bool* ok) {
	return const_cast<const QVariant*>(self)->toUInt(ok);
}

int64_t QVariant_ToLongLong1(QVariant* self, bool* ok) {
	return const_cast<const QVariant*>(self)->toLongLong(ok);
}

uint64_t QVariant_ToULongLong1(QVariant* self, bool* ok) {
	return const_cast<const QVariant*>(self)->toULongLong(ok);
}

double QVariant_ToDouble1(QVariant* self, bool* ok) {
	return const_cast<const QVariant*>(self)->toDouble(ok);
}

float QVariant_ToFloat1(QVariant* self, bool* ok) {
	return const_cast<const QVariant*>(self)->toFloat(ok);
}

double QVariant_ToReal1(QVariant* self, bool* ok) {
	return const_cast<const QVariant*>(self)->toReal(ok);
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

QSequentialIterable__const_iterator* QSequentialIterable_Begin(QSequentialIterable* self) {
	QSequentialIterable::const_iterator ret = const_cast<const QSequentialIterable*>(self)->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSequentialIterable::const_iterator*>(new QSequentialIterable::const_iterator(ret));
}

QSequentialIterable__const_iterator* QSequentialIterable_End(QSequentialIterable* self) {
	QSequentialIterable::const_iterator ret = const_cast<const QSequentialIterable*>(self)->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSequentialIterable::const_iterator*>(new QSequentialIterable::const_iterator(ret));
}

QVariant* QSequentialIterable_At(QSequentialIterable* self, int idx) {
	QVariant ret = const_cast<const QSequentialIterable*>(self)->at(static_cast<int>(idx));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

int QSequentialIterable_Size(QSequentialIterable* self) {
	return const_cast<const QSequentialIterable*>(self)->size();
}

bool QSequentialIterable_CanReverseIterate(QSequentialIterable* self) {
	return const_cast<const QSequentialIterable*>(self)->canReverseIterate();
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

QAssociativeIterable__const_iterator* QAssociativeIterable_Begin(QAssociativeIterable* self) {
	QAssociativeIterable::const_iterator ret = const_cast<const QAssociativeIterable*>(self)->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAssociativeIterable::const_iterator*>(new QAssociativeIterable::const_iterator(ret));
}

QAssociativeIterable__const_iterator* QAssociativeIterable_End(QAssociativeIterable* self) {
	QAssociativeIterable::const_iterator ret = const_cast<const QAssociativeIterable*>(self)->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAssociativeIterable::const_iterator*>(new QAssociativeIterable::const_iterator(ret));
}

QAssociativeIterable__const_iterator* QAssociativeIterable_Find(QAssociativeIterable* self, QVariant* key) {
	QAssociativeIterable::const_iterator ret = const_cast<const QAssociativeIterable*>(self)->find(*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAssociativeIterable::const_iterator*>(new QAssociativeIterable::const_iterator(ret));
}

QVariant* QAssociativeIterable_Value(QAssociativeIterable* self, QVariant* key) {
	QVariant ret = const_cast<const QAssociativeIterable*>(self)->value(*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

int QAssociativeIterable_Size(QAssociativeIterable* self) {
	return const_cast<const QAssociativeIterable*>(self)->size();
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

QVariant* QSequentialIterable__const_iterator_OperatorMultiply(QSequentialIterable__const_iterator* self) {
	QVariant ret = const_cast<const QSequentialIterable::const_iterator*>(self)->operator*();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QSequentialIterable__const_iterator_OperatorEqual(QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* o) {
	return const_cast<const QSequentialIterable::const_iterator*>(self)->operator==(*o);
}

bool QSequentialIterable__const_iterator_OperatorNotEqual(QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* o) {
	return const_cast<const QSequentialIterable::const_iterator*>(self)->operator!=(*o);
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorPlusPlus(QSequentialIterable__const_iterator* self, int param1) {
	QSequentialIterable::const_iterator ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSequentialIterable::const_iterator*>(new QSequentialIterable::const_iterator(ret));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorMinusMinus(QSequentialIterable__const_iterator* self, int param1) {
	QSequentialIterable::const_iterator ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSequentialIterable::const_iterator*>(new QSequentialIterable::const_iterator(ret));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorPlus(QSequentialIterable__const_iterator* self, int j) {
	QSequentialIterable::const_iterator ret = const_cast<const QSequentialIterable::const_iterator*>(self)->operator+(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSequentialIterable::const_iterator*>(new QSequentialIterable::const_iterator(ret));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorMinus(QSequentialIterable__const_iterator* self, int j) {
	QSequentialIterable::const_iterator ret = const_cast<const QSequentialIterable::const_iterator*>(self)->operator-(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSequentialIterable::const_iterator*>(new QSequentialIterable::const_iterator(ret));
}

void QSequentialIterable__const_iterator_Delete(QSequentialIterable__const_iterator* self) {
	delete self;
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_new(QAssociativeIterable__const_iterator* other) {
	return new QAssociativeIterable::const_iterator(*other);
}

QVariant* QAssociativeIterable__const_iterator_Key(QAssociativeIterable__const_iterator* self) {
	QVariant ret = const_cast<const QAssociativeIterable::const_iterator*>(self)->key();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QVariant* QAssociativeIterable__const_iterator_Value(QAssociativeIterable__const_iterator* self) {
	QVariant ret = const_cast<const QAssociativeIterable::const_iterator*>(self)->value();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QVariant* QAssociativeIterable__const_iterator_OperatorMultiply(QAssociativeIterable__const_iterator* self) {
	QVariant ret = const_cast<const QAssociativeIterable::const_iterator*>(self)->operator*();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QAssociativeIterable__const_iterator_OperatorEqual(QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* o) {
	return const_cast<const QAssociativeIterable::const_iterator*>(self)->operator==(*o);
}

bool QAssociativeIterable__const_iterator_OperatorNotEqual(QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* o) {
	return const_cast<const QAssociativeIterable::const_iterator*>(self)->operator!=(*o);
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorPlusPlus(QAssociativeIterable__const_iterator* self, int param1) {
	QAssociativeIterable::const_iterator ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAssociativeIterable::const_iterator*>(new QAssociativeIterable::const_iterator(ret));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorMinusMinus(QAssociativeIterable__const_iterator* self, int param1) {
	QAssociativeIterable::const_iterator ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAssociativeIterable::const_iterator*>(new QAssociativeIterable::const_iterator(ret));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorPlus(QAssociativeIterable__const_iterator* self, int j) {
	QAssociativeIterable::const_iterator ret = const_cast<const QAssociativeIterable::const_iterator*>(self)->operator+(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAssociativeIterable::const_iterator*>(new QAssociativeIterable::const_iterator(ret));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorMinus(QAssociativeIterable__const_iterator* self, int j) {
	QAssociativeIterable::const_iterator ret = const_cast<const QAssociativeIterable::const_iterator*>(self)->operator-(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAssociativeIterable::const_iterator*>(new QAssociativeIterable::const_iterator(ret));
}

void QAssociativeIterable__const_iterator_Delete(QAssociativeIterable__const_iterator* self) {
	delete self;
}

