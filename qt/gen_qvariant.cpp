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

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QVariant* QVariant_new() {
	return new QVariant();
}

QVariant* QVariant_new2(int type) {
	return new QVariant(static_cast<QVariant::Type>(type));
}

QVariant* QVariant_new3(int typeId, const void* copy) {
	return new QVariant(static_cast<int>(typeId), copy);
}

QVariant* QVariant_new4(int typeId, const void* copy, unsigned int flags) {
	return new QVariant(static_cast<int>(typeId), copy, static_cast<uint>(flags));
}

QVariant* QVariant_new5(QVariant* other) {
	return new QVariant(*other);
}

QVariant* QVariant_new6(QDataStream* s) {
	return new QVariant(*s);
}

QVariant* QVariant_new7(int i) {
	return new QVariant(static_cast<int>(i));
}

QVariant* QVariant_new8(unsigned int ui) {
	return new QVariant(static_cast<uint>(ui));
}

QVariant* QVariant_new9(long long ll) {
	return new QVariant(static_cast<qlonglong>(ll));
}

QVariant* QVariant_new10(unsigned long long ull) {
	return new QVariant(static_cast<qulonglong>(ull));
}

QVariant* QVariant_new11(bool b) {
	return new QVariant(b);
}

QVariant* QVariant_new12(double d) {
	return new QVariant(static_cast<double>(d));
}

QVariant* QVariant_new13(float f) {
	return new QVariant(static_cast<float>(f));
}

QVariant* QVariant_new14(const char* str) {
	return new QVariant(str);
}

QVariant* QVariant_new15(struct miqt_string bytearray) {
	QByteArray bytearray_QByteArray(bytearray.data, bytearray.len);
	return new QVariant(bytearray_QByteArray);
}

QVariant* QVariant_new16(QBitArray* bitarray) {
	return new QVariant(*bitarray);
}

QVariant* QVariant_new17(struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QVariant(string_QString);
}

QVariant* QVariant_new18(struct miqt_array /* of struct miqt_string */  stringlist) {
	QStringList stringlist_QList;
	stringlist_QList.reserve(stringlist.len);
	struct miqt_string* stringlist_arr = static_cast<struct miqt_string*>(stringlist.data);
	for(size_t i = 0; i < stringlist.len; ++i) {
		QString stringlist_arr_i_QString = QString::fromUtf8(stringlist_arr[i].data, stringlist_arr[i].len);
		stringlist_QList.push_back(stringlist_arr_i_QString);
	}
	return new QVariant(stringlist_QList);
}

QVariant* QVariant_new19(QChar* qchar) {
	return new QVariant(*qchar);
}

QVariant* QVariant_new20(QDate* date) {
	return new QVariant(*date);
}

QVariant* QVariant_new21(QTime* time) {
	return new QVariant(*time);
}

QVariant* QVariant_new22(QDateTime* datetime) {
	return new QVariant(*datetime);
}

QVariant* QVariant_new23(struct miqt_map /* of struct miqt_string to QVariant* */  map) {
	QMap<QString, QVariant> map_QMap;
	struct miqt_string* map_karr = static_cast<struct miqt_string*>(map.keys);
	QVariant** map_varr = static_cast<QVariant**>(map.values);
	for(size_t i = 0; i < map.len; ++i) {
		QString map_karr_i_QString = QString::fromUtf8(map_karr[i].data, map_karr[i].len);
		map_QMap[map_karr_i_QString] = *(map_varr[i]);
	}
	return new QVariant(map_QMap);
}

QVariant* QVariant_new24(struct miqt_map /* of struct miqt_string to QVariant* */  hash) {
	QHash<QString, QVariant> hash_QMap;
	hash_QMap.reserve(hash.len);
	struct miqt_string* hash_karr = static_cast<struct miqt_string*>(hash.keys);
	QVariant** hash_varr = static_cast<QVariant**>(hash.values);
	for(size_t i = 0; i < hash.len; ++i) {
		QString hash_karr_i_QString = QString::fromUtf8(hash_karr[i].data, hash_karr[i].len);
		hash_QMap[hash_karr_i_QString] = *(hash_varr[i]);
	}
	return new QVariant(hash_QMap);
}

QVariant* QVariant_new25(QSize* size) {
	return new QVariant(*size);
}

QVariant* QVariant_new26(QSizeF* size) {
	return new QVariant(*size);
}

QVariant* QVariant_new27(QPoint* pt) {
	return new QVariant(*pt);
}

QVariant* QVariant_new28(QPointF* pt) {
	return new QVariant(*pt);
}

QVariant* QVariant_new29(QLine* line) {
	return new QVariant(*line);
}

QVariant* QVariant_new30(QLineF* line) {
	return new QVariant(*line);
}

QVariant* QVariant_new31(QRect* rect) {
	return new QVariant(*rect);
}

QVariant* QVariant_new32(QRectF* rect) {
	return new QVariant(*rect);
}

QVariant* QVariant_new33(QLocale* locale) {
	return new QVariant(*locale);
}

QVariant* QVariant_new34(QRegExp* regExp) {
	return new QVariant(*regExp);
}

QVariant* QVariant_new35(QRegularExpression* re) {
	return new QVariant(*re);
}

QVariant* QVariant_new36(QEasingCurve* easing) {
	return new QVariant(*easing);
}

QVariant* QVariant_new37(QUuid* uuid) {
	return new QVariant(*uuid);
}

QVariant* QVariant_new38(QUrl* url) {
	return new QVariant(*url);
}

QVariant* QVariant_new39(QJsonValue* jsonValue) {
	return new QVariant(*jsonValue);
}

QVariant* QVariant_new40(QJsonObject* jsonObject) {
	return new QVariant(*jsonObject);
}

QVariant* QVariant_new41(QJsonArray* jsonArray) {
	return new QVariant(*jsonArray);
}

QVariant* QVariant_new42(QJsonDocument* jsonDocument) {
	return new QVariant(*jsonDocument);
}

QVariant* QVariant_new43(QModelIndex* modelIndex) {
	return new QVariant(*modelIndex);
}

QVariant* QVariant_new44(QPersistentModelIndex* modelIndex) {
	return new QVariant(*modelIndex);
}

void QVariant_operatorAssign(QVariant* self, QVariant* other) {
	self->operator=(*other);
}

void QVariant_swap(QVariant* self, QVariant* other) {
	self->swap(*other);
}

int QVariant_type(const QVariant* self) {
	QVariant::Type _ret = self->type();
	return static_cast<int>(_ret);
}

int QVariant_userType(const QVariant* self) {
	return self->userType();
}

const char* QVariant_typeName(const QVariant* self) {
	return (const char*) self->typeName();
}

bool QVariant_canConvert(const QVariant* self, int targetTypeId) {
	return self->canConvert(static_cast<int>(targetTypeId));
}

bool QVariant_convert(QVariant* self, int targetTypeId) {
	return self->convert(static_cast<int>(targetTypeId));
}

bool QVariant_isValid(const QVariant* self) {
	return self->isValid();
}

bool QVariant_isNull(const QVariant* self) {
	return self->isNull();
}

void QVariant_clear(QVariant* self) {
	self->clear();
}

void QVariant_detach(QVariant* self) {
	self->detach();
}

bool QVariant_isDetached(const QVariant* self) {
	return self->isDetached();
}

int QVariant_toInt(const QVariant* self) {
	return self->toInt();
}

unsigned int QVariant_toUInt(const QVariant* self) {
	uint _ret = self->toUInt();
	return static_cast<unsigned int>(_ret);
}

long long QVariant_toLongLong(const QVariant* self) {
	qlonglong _ret = self->toLongLong();
	return static_cast<long long>(_ret);
}

unsigned long long QVariant_toULongLong(const QVariant* self) {
	qulonglong _ret = self->toULongLong();
	return static_cast<unsigned long long>(_ret);
}

bool QVariant_toBool(const QVariant* self) {
	return self->toBool();
}

double QVariant_toDouble(const QVariant* self) {
	return self->toDouble();
}

float QVariant_toFloat(const QVariant* self) {
	return self->toFloat();
}

double QVariant_toReal(const QVariant* self) {
	qreal _ret = self->toReal();
	return static_cast<double>(_ret);
}

struct miqt_string QVariant_toByteArray(const QVariant* self) {
	QByteArray _qb = self->toByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QBitArray* QVariant_toBitArray(const QVariant* self) {
	return new QBitArray(self->toBitArray());
}

struct miqt_string QVariant_toString(const QVariant* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QVariant_toStringList(const QVariant* self) {
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

QChar* QVariant_toChar(const QVariant* self) {
	return new QChar(self->toChar());
}

QDate* QVariant_toDate(const QVariant* self) {
	return new QDate(self->toDate());
}

QTime* QVariant_toTime(const QVariant* self) {
	return new QTime(self->toTime());
}

QDateTime* QVariant_toDateTime(const QVariant* self) {
	return new QDateTime(self->toDateTime());
}

struct miqt_map /* of struct miqt_string to QVariant* */  QVariant_toMap(const QVariant* self) {
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

struct miqt_map /* of struct miqt_string to QVariant* */  QVariant_toHash(const QVariant* self) {
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

QPoint* QVariant_toPoint(const QVariant* self) {
	return new QPoint(self->toPoint());
}

QPointF* QVariant_toPointF(const QVariant* self) {
	return new QPointF(self->toPointF());
}

QRect* QVariant_toRect(const QVariant* self) {
	return new QRect(self->toRect());
}

QSize* QVariant_toSize(const QVariant* self) {
	return new QSize(self->toSize());
}

QSizeF* QVariant_toSizeF(const QVariant* self) {
	return new QSizeF(self->toSizeF());
}

QLine* QVariant_toLine(const QVariant* self) {
	return new QLine(self->toLine());
}

QLineF* QVariant_toLineF(const QVariant* self) {
	return new QLineF(self->toLineF());
}

QRectF* QVariant_toRectF(const QVariant* self) {
	return new QRectF(self->toRectF());
}

QLocale* QVariant_toLocale(const QVariant* self) {
	return new QLocale(self->toLocale());
}

QRegExp* QVariant_toRegExp(const QVariant* self) {
	return new QRegExp(self->toRegExp());
}

QRegularExpression* QVariant_toRegularExpression(const QVariant* self) {
	return new QRegularExpression(self->toRegularExpression());
}

QEasingCurve* QVariant_toEasingCurve(const QVariant* self) {
	return new QEasingCurve(self->toEasingCurve());
}

QUuid* QVariant_toUuid(const QVariant* self) {
	return new QUuid(self->toUuid());
}

QUrl* QVariant_toUrl(const QVariant* self) {
	return new QUrl(self->toUrl());
}

QJsonValue* QVariant_toJsonValue(const QVariant* self) {
	return new QJsonValue(self->toJsonValue());
}

QJsonObject* QVariant_toJsonObject(const QVariant* self) {
	return new QJsonObject(self->toJsonObject());
}

QJsonArray* QVariant_toJsonArray(const QVariant* self) {
	return new QJsonArray(self->toJsonArray());
}

QJsonDocument* QVariant_toJsonDocument(const QVariant* self) {
	return new QJsonDocument(self->toJsonDocument());
}

QModelIndex* QVariant_toModelIndex(const QVariant* self) {
	return new QModelIndex(self->toModelIndex());
}

QPersistentModelIndex* QVariant_toPersistentModelIndex(const QVariant* self) {
	return new QPersistentModelIndex(self->toPersistentModelIndex());
}

void QVariant_load(QVariant* self, QDataStream* ds) {
	self->load(*ds);
}

void QVariant_save(const QVariant* self, QDataStream* ds) {
	self->save(*ds);
}

const char* QVariant_typeToName(int typeId) {
	return (const char*) QVariant::typeToName(static_cast<int>(typeId));
}

int QVariant_nameToType(const char* name) {
	QVariant::Type _ret = QVariant::nameToType(name);
	return static_cast<int>(_ret);
}

void* QVariant_data(QVariant* self) {
	return self->data();
}

const void* QVariant_constData(const QVariant* self) {
	return (const void*) self->constData();
}

const void* QVariant_data2(const QVariant* self) {
	return (const void*) self->data();
}

bool QVariant_operatorEqual(const QVariant* self, QVariant* v) {
	return (*self == *v);
}

bool QVariant_operatorNotEqual(const QVariant* self, QVariant* v) {
	return (*self != *v);
}

bool QVariant_operatorLesser(const QVariant* self, QVariant* v) {
	return (*self < *v);
}

bool QVariant_operatorLesserOrEqual(const QVariant* self, QVariant* v) {
	return (*self <= *v);
}

bool QVariant_operatorGreater(const QVariant* self, QVariant* v) {
	return (*self > *v);
}

bool QVariant_operatorGreaterOrEqual(const QVariant* self, QVariant* v) {
	return (*self >= *v);
}

int QVariant_toInt1(const QVariant* self, bool* ok) {
	return self->toInt(ok);
}

unsigned int QVariant_toUInt1(const QVariant* self, bool* ok) {
	uint _ret = self->toUInt(ok);
	return static_cast<unsigned int>(_ret);
}

long long QVariant_toLongLong1(const QVariant* self, bool* ok) {
	qlonglong _ret = self->toLongLong(ok);
	return static_cast<long long>(_ret);
}

unsigned long long QVariant_toULongLong1(const QVariant* self, bool* ok) {
	qulonglong _ret = self->toULongLong(ok);
	return static_cast<unsigned long long>(_ret);
}

double QVariant_toDouble1(const QVariant* self, bool* ok) {
	return self->toDouble(ok);
}

float QVariant_toFloat1(const QVariant* self, bool* ok) {
	return self->toFloat(ok);
}

double QVariant_toReal1(const QVariant* self, bool* ok) {
	qreal _ret = self->toReal(ok);
	return static_cast<double>(_ret);
}

void QVariant_delete(QVariant* self) {
	delete self;
}

QVariantComparisonHelper* QVariantComparisonHelper_new(QVariant* var) {
	return new QVariantComparisonHelper(*var);
}

QVariantComparisonHelper* QVariantComparisonHelper_new2(QVariantComparisonHelper* param1) {
	return new QVariantComparisonHelper(*param1);
}

void QVariantComparisonHelper_delete(QVariantComparisonHelper* self) {
	delete self;
}

void QVariant__Handler_delete(QVariant__Handler* self) {
	delete self;
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_new(QSequentialIterable__const_iterator* other) {
	return new QSequentialIterable::const_iterator(*other);
}

void QSequentialIterable__const_iterator_operatorAssign(QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* other) {
	self->operator=(*other);
}

QVariant* QSequentialIterable__const_iterator_operatorMultiply(const QSequentialIterable__const_iterator* self) {
	return new QVariant(self->operator*());
}

bool QSequentialIterable__const_iterator_operatorEqual(const QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* o) {
	return (*self == *o);
}

bool QSequentialIterable__const_iterator_operatorNotEqual(const QSequentialIterable__const_iterator* self, QSequentialIterable__const_iterator* o) {
	return (*self != *o);
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorPlusPlus(QSequentialIterable__const_iterator* self) {
	QSequentialIterable::const_iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorPlusPlusWithInt(QSequentialIterable__const_iterator* self, int param1) {
	return new QSequentialIterable::const_iterator(self->operator++(static_cast<int>(param1)));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorMinusMinus(QSequentialIterable__const_iterator* self) {
	QSequentialIterable::const_iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorMinusMinusWithInt(QSequentialIterable__const_iterator* self, int param1) {
	return new QSequentialIterable::const_iterator(self->operator--(static_cast<int>(param1)));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorPlusAssign(QSequentialIterable__const_iterator* self, int j) {
	QSequentialIterable::const_iterator& _ret = self->operator+=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorMinusAssign(QSequentialIterable__const_iterator* self, int j) {
	QSequentialIterable::const_iterator& _ret = self->operator-=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorPlus(const QSequentialIterable__const_iterator* self, int j) {
	return new QSequentialIterable::const_iterator(self->operator+(static_cast<int>(j)));
}

QSequentialIterable__const_iterator* QSequentialIterable__const_iterator_operatorMinus(const QSequentialIterable__const_iterator* self, int j) {
	return new QSequentialIterable::const_iterator(self->operator-(static_cast<int>(j)));
}

void QSequentialIterable__const_iterator_delete(QSequentialIterable__const_iterator* self) {
	delete self;
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_new(QAssociativeIterable__const_iterator* other) {
	return new QAssociativeIterable::const_iterator(*other);
}

void QAssociativeIterable__const_iterator_operatorAssign(QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* other) {
	self->operator=(*other);
}

QVariant* QAssociativeIterable__const_iterator_key(const QAssociativeIterable__const_iterator* self) {
	return new QVariant(self->key());
}

QVariant* QAssociativeIterable__const_iterator_value(const QAssociativeIterable__const_iterator* self) {
	return new QVariant(self->value());
}

QVariant* QAssociativeIterable__const_iterator_operatorMultiply(const QAssociativeIterable__const_iterator* self) {
	return new QVariant(self->operator*());
}

bool QAssociativeIterable__const_iterator_operatorEqual(const QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* o) {
	return (*self == *o);
}

bool QAssociativeIterable__const_iterator_operatorNotEqual(const QAssociativeIterable__const_iterator* self, QAssociativeIterable__const_iterator* o) {
	return (*self != *o);
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorPlusPlus(QAssociativeIterable__const_iterator* self) {
	QAssociativeIterable::const_iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorPlusPlusWithInt(QAssociativeIterable__const_iterator* self, int param1) {
	return new QAssociativeIterable::const_iterator(self->operator++(static_cast<int>(param1)));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorMinusMinus(QAssociativeIterable__const_iterator* self) {
	QAssociativeIterable::const_iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorMinusMinusWithInt(QAssociativeIterable__const_iterator* self, int param1) {
	return new QAssociativeIterable::const_iterator(self->operator--(static_cast<int>(param1)));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorPlusAssign(QAssociativeIterable__const_iterator* self, int j) {
	QAssociativeIterable::const_iterator& _ret = self->operator+=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorMinusAssign(QAssociativeIterable__const_iterator* self, int j) {
	QAssociativeIterable::const_iterator& _ret = self->operator-=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorPlus(const QAssociativeIterable__const_iterator* self, int j) {
	return new QAssociativeIterable::const_iterator(self->operator+(static_cast<int>(j)));
}

QAssociativeIterable__const_iterator* QAssociativeIterable__const_iterator_operatorMinus(const QAssociativeIterable__const_iterator* self, int j) {
	return new QAssociativeIterable::const_iterator(self->operator-(static_cast<int>(j)));
}

void QAssociativeIterable__const_iterator_delete(QAssociativeIterable__const_iterator* self) {
	delete self;
}

