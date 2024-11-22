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
#include <QMap>
#include <QModelIndex>
#include <QPersistentModelIndex>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegExp>
#include <QRegularExpression>
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
#include <QVariantComparisonHelper>
#include <qvariant.h>
#include "gen_qvariant.h"
#include "_cgo_export.h"

void QVariant_new(QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant();
	*outptr_QVariant = ret;
}

void QVariant_new2(int typeVal, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(static_cast<QVariant::Type>(typeVal));
	*outptr_QVariant = ret;
}

void QVariant_new3(int typeId, const void* copyVal, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(static_cast<int>(typeId), copyVal);
	*outptr_QVariant = ret;
}

void QVariant_new4(int typeId, const void* copyVal, unsigned int flags, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(static_cast<int>(typeId), copyVal, static_cast<uint>(flags));
	*outptr_QVariant = ret;
}

void QVariant_new5(QVariant* other, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*other);
	*outptr_QVariant = ret;
}

void QVariant_new6(QDataStream* s, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*s);
	*outptr_QVariant = ret;
}

void QVariant_new7(int i, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(static_cast<int>(i));
	*outptr_QVariant = ret;
}

void QVariant_new8(unsigned int ui, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(static_cast<uint>(ui));
	*outptr_QVariant = ret;
}

void QVariant_new9(long long ll, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(static_cast<qlonglong>(ll));
	*outptr_QVariant = ret;
}

void QVariant_new10(unsigned long long ull, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(static_cast<qulonglong>(ull));
	*outptr_QVariant = ret;
}

void QVariant_new11(bool b, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(b);
	*outptr_QVariant = ret;
}

void QVariant_new12(double d, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(static_cast<double>(d));
	*outptr_QVariant = ret;
}

void QVariant_new13(float f, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(static_cast<float>(f));
	*outptr_QVariant = ret;
}

void QVariant_new14(const char* str, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(str);
	*outptr_QVariant = ret;
}

void QVariant_new15(struct miqt_string bytearray, QVariant** outptr_QVariant) {
	QByteArray bytearray_QByteArray(bytearray.data, bytearray.len);
	QVariant* ret = new QVariant(bytearray_QByteArray);
	*outptr_QVariant = ret;
}

void QVariant_new16(QBitArray* bitarray, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*bitarray);
	*outptr_QVariant = ret;
}

void QVariant_new17(struct miqt_string stringVal, QVariant** outptr_QVariant) {
	QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
	QVariant* ret = new QVariant(stringVal_QString);
	*outptr_QVariant = ret;
}

void QVariant_new18(struct miqt_array /* of struct miqt_string */  stringlist, QVariant** outptr_QVariant) {
	QStringList stringlist_QList;
	stringlist_QList.reserve(stringlist.len);
	struct miqt_string* stringlist_arr = static_cast<struct miqt_string*>(stringlist.data);
	for(size_t i = 0; i < stringlist.len; ++i) {
		QString stringlist_arr_i_QString = QString::fromUtf8(stringlist_arr[i].data, stringlist_arr[i].len);
		stringlist_QList.push_back(stringlist_arr_i_QString);
	}
	QVariant* ret = new QVariant(stringlist_QList);
	*outptr_QVariant = ret;
}

void QVariant_new19(QChar* qchar, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*qchar);
	*outptr_QVariant = ret;
}

void QVariant_new20(QDate* date, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*date);
	*outptr_QVariant = ret;
}

void QVariant_new21(QTime* time, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*time);
	*outptr_QVariant = ret;
}

void QVariant_new22(QDateTime* datetime, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*datetime);
	*outptr_QVariant = ret;
}

void QVariant_new23(struct miqt_map /* of struct miqt_string to QVariant* */  mapVal, QVariant** outptr_QVariant) {
	QMap<QString, QVariant> mapVal_QMap;
	struct miqt_string* mapVal_karr = static_cast<struct miqt_string*>(mapVal.keys);
	QVariant** mapVal_varr = static_cast<QVariant**>(mapVal.values);
	for(size_t i = 0; i < mapVal.len; ++i) {
		QString mapVal_karr_i_QString = QString::fromUtf8(mapVal_karr[i].data, mapVal_karr[i].len);
		mapVal_QMap[mapVal_karr_i_QString] = *(mapVal_varr[i]);
	}
	QVariant* ret = new QVariant(mapVal_QMap);
	*outptr_QVariant = ret;
}

void QVariant_new24(struct miqt_map /* of struct miqt_string to QVariant* */  hash, QVariant** outptr_QVariant) {
	QHash<QString, QVariant> hash_QMap;
	hash_QMap.reserve(hash.len);
	struct miqt_string* hash_karr = static_cast<struct miqt_string*>(hash.keys);
	QVariant** hash_varr = static_cast<QVariant**>(hash.values);
	for(size_t i = 0; i < hash.len; ++i) {
		QString hash_karr_i_QString = QString::fromUtf8(hash_karr[i].data, hash_karr[i].len);
		hash_QMap[hash_karr_i_QString] = *(hash_varr[i]);
	}
	QVariant* ret = new QVariant(hash_QMap);
	*outptr_QVariant = ret;
}

void QVariant_new25(QSize* size, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*size);
	*outptr_QVariant = ret;
}

void QVariant_new26(QSizeF* size, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*size);
	*outptr_QVariant = ret;
}

void QVariant_new27(QPoint* pt, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*pt);
	*outptr_QVariant = ret;
}

void QVariant_new28(QPointF* pt, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*pt);
	*outptr_QVariant = ret;
}

void QVariant_new29(QLine* line, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*line);
	*outptr_QVariant = ret;
}

void QVariant_new30(QLineF* line, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*line);
	*outptr_QVariant = ret;
}

void QVariant_new31(QRect* rect, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*rect);
	*outptr_QVariant = ret;
}

void QVariant_new32(QRectF* rect, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*rect);
	*outptr_QVariant = ret;
}

void QVariant_new33(QLocale* locale, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*locale);
	*outptr_QVariant = ret;
}

void QVariant_new34(QRegExp* regExp, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*regExp);
	*outptr_QVariant = ret;
}

void QVariant_new35(QRegularExpression* re, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*re);
	*outptr_QVariant = ret;
}

void QVariant_new36(QEasingCurve* easing, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*easing);
	*outptr_QVariant = ret;
}

void QVariant_new37(QUuid* uuid, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*uuid);
	*outptr_QVariant = ret;
}

void QVariant_new38(QUrl* url, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*url);
	*outptr_QVariant = ret;
}

void QVariant_new39(QJsonValue* jsonValue, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*jsonValue);
	*outptr_QVariant = ret;
}

void QVariant_new40(QJsonObject* jsonObject, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*jsonObject);
	*outptr_QVariant = ret;
}

void QVariant_new41(QJsonArray* jsonArray, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*jsonArray);
	*outptr_QVariant = ret;
}

void QVariant_new42(QJsonDocument* jsonDocument, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*jsonDocument);
	*outptr_QVariant = ret;
}

void QVariant_new43(QModelIndex* modelIndex, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*modelIndex);
	*outptr_QVariant = ret;
}

void QVariant_new44(QPersistentModelIndex* modelIndex, QVariant** outptr_QVariant) {
	QVariant* ret = new QVariant(*modelIndex);
	*outptr_QVariant = ret;
}

void QVariant_OperatorAssign(QVariant* self, QVariant* other) {
	self->operator=(*other);
}

void QVariant_Swap(QVariant* self, QVariant* other) {
	self->swap(*other);
}

int QVariant_Type(const QVariant* self) {
	QVariant::Type _ret = self->type();
	return static_cast<int>(_ret);
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
	uint _ret = self->toUInt();
	return static_cast<unsigned int>(_ret);
}

long long QVariant_ToLongLong(const QVariant* self) {
	qlonglong _ret = self->toLongLong();
	return static_cast<long long>(_ret);
}

unsigned long long QVariant_ToULongLong(const QVariant* self) {
	qulonglong _ret = self->toULongLong();
	return static_cast<unsigned long long>(_ret);
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
	qreal _ret = self->toReal();
	return static_cast<double>(_ret);
}

struct miqt_string QVariant_ToByteArray(const QVariant* self) {
	QByteArray _qb = self->toByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QBitArray* QVariant_ToBitArray(const QVariant* self) {
	return new QBitArray(self->toBitArray());
}

struct miqt_string QVariant_ToString(const QVariant* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QVariant_ToStringList(const QVariant* self) {
	QStringList _ret = self->toStringList();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
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

struct miqt_map /* of struct miqt_string to QVariant* */  QVariant_ToMap(const QVariant* self) {
	QMap<QString, QVariant> _ret = self->toMap();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _mapkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _mapkey_b = _mapkey_ret.toUtf8();
		struct miqt_string _mapkey_ms;
		_mapkey_ms.len = _mapkey_b.length();
		_mapkey_ms.data = static_cast<char*>(malloc(_mapkey_ms.len));
		memcpy(_mapkey_ms.data, _mapkey_b.data(), _mapkey_ms.len);
		_karr[_ctr] = _mapkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

struct miqt_map /* of struct miqt_string to QVariant* */  QVariant_ToHash(const QVariant* self) {
	QHash<QString, QVariant> _ret = self->toHash();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _hashkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _hashkey_b = _hashkey_ret.toUtf8();
		struct miqt_string _hashkey_ms;
		_hashkey_ms.len = _hashkey_b.length();
		_hashkey_ms.data = static_cast<char*>(malloc(_hashkey_ms.len));
		memcpy(_hashkey_ms.data, _hashkey_b.data(), _hashkey_ms.len);
		_karr[_ctr] = _hashkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
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

int QVariant_NameToType(const char* name) {
	QVariant::Type _ret = QVariant::nameToType(name);
	return static_cast<int>(_ret);
}

void* QVariant_Data(QVariant* self) {
	return self->data();
}

const void* QVariant_ConstData(const QVariant* self) {
	return (const void*) self->constData();
}

const void* QVariant_Data2(const QVariant* self) {
	return (const void*) self->data();
}

bool QVariant_OperatorEqual(const QVariant* self, QVariant* v) {
	return (*self == *v);
}

bool QVariant_OperatorNotEqual(const QVariant* self, QVariant* v) {
	return (*self != *v);
}

bool QVariant_OperatorLesser(const QVariant* self, QVariant* v) {
	return (*self < *v);
}

bool QVariant_OperatorLesserOrEqual(const QVariant* self, QVariant* v) {
	return (*self <= *v);
}

bool QVariant_OperatorGreater(const QVariant* self, QVariant* v) {
	return (*self > *v);
}

bool QVariant_OperatorGreaterOrEqual(const QVariant* self, QVariant* v) {
	return (*self >= *v);
}

int QVariant_ToInt1(const QVariant* self, bool* ok) {
	return self->toInt(ok);
}

unsigned int QVariant_ToUInt1(const QVariant* self, bool* ok) {
	uint _ret = self->toUInt(ok);
	return static_cast<unsigned int>(_ret);
}

long long QVariant_ToLongLong1(const QVariant* self, bool* ok) {
	qlonglong _ret = self->toLongLong(ok);
	return static_cast<long long>(_ret);
}

unsigned long long QVariant_ToULongLong1(const QVariant* self, bool* ok) {
	qulonglong _ret = self->toULongLong(ok);
	return static_cast<unsigned long long>(_ret);
}

double QVariant_ToDouble1(const QVariant* self, bool* ok) {
	return self->toDouble(ok);
}

float QVariant_ToFloat1(const QVariant* self, bool* ok) {
	return self->toFloat(ok);
}

double QVariant_ToReal1(const QVariant* self, bool* ok) {
	qreal _ret = self->toReal(ok);
	return static_cast<double>(_ret);
}

void QVariant_Delete(QVariant* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QVariant*>( self );
	} else {
		delete self;
	}
}

void QVariantComparisonHelper_new(QVariant* varVal, QVariantComparisonHelper** outptr_QVariantComparisonHelper) {
	QVariantComparisonHelper* ret = new QVariantComparisonHelper(*varVal);
	*outptr_QVariantComparisonHelper = ret;
}

void QVariantComparisonHelper_new2(QVariantComparisonHelper* param1, QVariantComparisonHelper** outptr_QVariantComparisonHelper) {
	QVariantComparisonHelper* ret = new QVariantComparisonHelper(*param1);
	*outptr_QVariantComparisonHelper = ret;
}

void QVariantComparisonHelper_Delete(QVariantComparisonHelper* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QVariantComparisonHelper*>( self );
	} else {
		delete self;
	}
}

void QVariant__Handler_Delete(QVariant__Handler* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QVariant::Handler*>( self );
	} else {
		delete self;
	}
}

void QSequentialIterable__const_iterator_new(QSequentialIterable__const_iterator* other, QSequentialIterable__const_iterator** outptr_QSequentialIterable__const_iterator) {
	QSequentialIterable::const_iterator* ret = new QSequentialIterable::const_iterator(*other);
	*outptr_QSequentialIterable__const_iterator = ret;
}

void QSequentialIterable__const_iterator_OperatorAssign(QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* other) {
	self->operator=(*other);
}

QVariant* QSequentialIterable__const_iterator_OperatorMultiply(const QSequentialIterable__const_iterator* self) {
	return new QVariant(self->operator*());
}

bool QSequentialIterable__const_iterator_OperatorEqual(const QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* o) {
	return (*self == *o);
}

bool QSequentialIterable__const_iterator_OperatorNotEqual(const QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* o) {
	return (*self != *o);
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorPlusPlus(QSequentialIterable__const_iterator* self) {
	QSequentialIterable::const_iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorPlusPlusWithInt(QSequentialIterable__const_iterator* self, int param1) {
	return new QSequentialIterable::const_iterator(self->operator++(static_cast<int>(param1)));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorMinusMinus(QSequentialIterable__const_iterator* self) {
	QSequentialIterable::const_iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorMinusMinusWithInt(QSequentialIterable__const_iterator* self, int param1) {
	return new QSequentialIterable::const_iterator(self->operator--(static_cast<int>(param1)));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorPlusAssign(QSequentialIterable__const_iterator* self, int j) {
	QSequentialIterable::const_iterator& _ret = self->operator+=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorMinusAssign(QSequentialIterable__const_iterator* self, int j) {
	QSequentialIterable::const_iterator& _ret = self->operator-=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorPlus(const QSequentialIterable__const_iterator* self, int j) {
	return new QSequentialIterable::const_iterator(self->operator+(static_cast<int>(j)));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_OperatorMinus(const QSequentialIterable__const_iterator* self, int j) {
	return new QSequentialIterable::const_iterator(self->operator-(static_cast<int>(j)));
}

void QSequentialIterable__const_iterator_Delete(QSequentialIterable__const_iterator* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QSequentialIterable::const_iterator*>( self );
	} else {
		delete self;
	}
}

void QAssociativeIterable__const_iterator_new(QAssociativeIterable__const_iterator* other, QAssociativeIterable__const_iterator** outptr_QAssociativeIterable__const_iterator) {
	QAssociativeIterable::const_iterator* ret = new QAssociativeIterable::const_iterator(*other);
	*outptr_QAssociativeIterable__const_iterator = ret;
}

void QAssociativeIterable__const_iterator_OperatorAssign(QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* other) {
	self->operator=(*other);
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
	return (*self == *o);
}

bool QAssociativeIterable__const_iterator_OperatorNotEqual(const QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* o) {
	return (*self != *o);
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorPlusPlus(QAssociativeIterable__const_iterator* self) {
	QAssociativeIterable::const_iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorPlusPlusWithInt(QAssociativeIterable__const_iterator* self, int param1) {
	return new QAssociativeIterable::const_iterator(self->operator++(static_cast<int>(param1)));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorMinusMinus(QAssociativeIterable__const_iterator* self) {
	QAssociativeIterable::const_iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorMinusMinusWithInt(QAssociativeIterable__const_iterator* self, int param1) {
	return new QAssociativeIterable::const_iterator(self->operator--(static_cast<int>(param1)));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorPlusAssign(QAssociativeIterable__const_iterator* self, int j) {
	QAssociativeIterable::const_iterator& _ret = self->operator+=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorMinusAssign(QAssociativeIterable__const_iterator* self, int j) {
	QAssociativeIterable::const_iterator& _ret = self->operator-=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorPlus(const QAssociativeIterable__const_iterator* self, int j) {
	return new QAssociativeIterable::const_iterator(self->operator+(static_cast<int>(j)));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_OperatorMinus(const QAssociativeIterable__const_iterator* self, int j) {
	return new QAssociativeIterable::const_iterator(self->operator-(static_cast<int>(j)));
}

void QAssociativeIterable__const_iterator_Delete(QAssociativeIterable__const_iterator* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAssociativeIterable::const_iterator*>( self );
	} else {
		delete self;
	}
}

