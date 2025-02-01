#include <QCborMap>
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborMap__ConstIterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborMap__Iterator
#include <QCborValue>
#include <QCborValueRef>
#include <QJsonObject>
#include <QList>
#include <QMap>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qcbormap.h>
#include "gen_qcbormap.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QCborMap* QCborMap_new() {
	return new QCborMap();
}

QCborMap* QCborMap_new2(QCborMap* other) {
	return new QCborMap(*other);
}

void QCborMap_operatorAssign(QCborMap* self, QCborMap* other) {
	self->operator=(*other);
}

void QCborMap_swap(QCborMap* self, QCborMap* other) {
	self->swap(*other);
}

QCborValue* QCborMap_toCborValue(const QCborMap* self) {
	return new QCborValue(self->toCborValue());
}

ptrdiff_t QCborMap_size(const QCborMap* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

bool QCborMap_isEmpty(const QCborMap* self) {
	return self->isEmpty();
}

void QCborMap_clear(QCborMap* self) {
	self->clear();
}

struct miqt_array /* of QCborValue* */  QCborMap_keys(const QCborMap* self) {
	QVector<QCborValue> _ret = self->keys();
	// Convert QList<> from C++ memory to manually-managed C memory
	QCborValue** _arr = static_cast<QCborValue**>(malloc(sizeof(QCborValue*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QCborValue(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QCborValue* QCborMap_value(const QCborMap* self, long long key) {
	return new QCborValue(self->value(static_cast<qint64>(key)));
}

QCborValue* QCborMap_value2(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValue(self->value(key_QString));
}

QCborValue* QCborMap_value3(const QCborMap* self, QCborValue* key) {
	return new QCborValue(self->value(*key));
}

QCborValue* QCborMap_operatorSubscript(const QCborMap* self, long long key) {
	return new QCborValue(self->operator[](static_cast<qint64>(key)));
}

QCborValue* QCborMap_operatorSubscript2(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValue(self->operator[](key_QString));
}

QCborValue* QCborMap_operatorSubscript3(const QCborMap* self, QCborValue* key) {
	return new QCborValue(self->operator[](*key));
}

QCborValueRef* QCborMap_operatorSubscript4(QCborMap* self, long long key) {
	return new QCborValueRef(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborMap_operatorSubscript6(QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValueRef(self->operator[](key_QString));
}

QCborValueRef* QCborMap_operatorSubscript7(QCborMap* self, QCborValue* key) {
	return new QCborValueRef(self->operator[](*key));
}

QCborValue* QCborMap_take(QCborMap* self, long long key) {
	return new QCborValue(self->take(static_cast<qint64>(key)));
}

QCborValue* QCborMap_take2(QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValue(self->take(key_QString));
}

QCborValue* QCborMap_take3(QCborMap* self, QCborValue* key) {
	return new QCborValue(self->take(*key));
}

void QCborMap_remove(QCborMap* self, long long key) {
	self->remove(static_cast<qint64>(key));
}

void QCborMap_remove2(QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->remove(key_QString);
}

void QCborMap_remove3(QCborMap* self, QCborValue* key) {
	self->remove(*key);
}

bool QCborMap_contains(const QCborMap* self, long long key) {
	return self->contains(static_cast<qint64>(key));
}

bool QCborMap_contains2(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->contains(key_QString);
}

bool QCborMap_contains3(const QCborMap* self, QCborValue* key) {
	return self->contains(*key);
}

int QCborMap_compare(const QCborMap* self, QCborMap* other) {
	return self->compare(*other);
}

bool QCborMap_operatorEqual(const QCborMap* self, QCborMap* other) {
	return (*self == *other);
}

bool QCborMap_operatorNotEqual(const QCborMap* self, QCborMap* other) {
	return (*self != *other);
}

bool QCborMap_operatorLesser(const QCborMap* self, QCborMap* other) {
	return (*self < *other);
}

QCborMap__Iterator* QCborMap_begin(QCborMap* self) {
	return new QCborMap::Iterator(self->begin());
}

QCborMap__ConstIterator* QCborMap_constBegin(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->constBegin());
}

QCborMap__ConstIterator* QCborMap_begin2(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->begin());
}

QCborMap__ConstIterator* QCborMap_cbegin(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->cbegin());
}

QCborMap__Iterator* QCborMap_end(QCborMap* self) {
	return new QCborMap::Iterator(self->end());
}

QCborMap__ConstIterator* QCborMap_constEnd(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->constEnd());
}

QCborMap__ConstIterator* QCborMap_end2(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->end());
}

QCborMap__ConstIterator* QCborMap_cend(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->cend());
}

QCborMap__Iterator* QCborMap_erase(QCborMap* self, QCborMap__Iterator* it) {
	return new QCborMap::Iterator(self->erase(*it));
}

QCborMap__Iterator* QCborMap_eraseWithIt(QCborMap* self, QCborMap__ConstIterator* it) {
	return new QCborMap::Iterator(self->erase(*it));
}

QCborValue* QCborMap_extract(QCborMap* self, QCborMap__Iterator* it) {
	return new QCborValue(self->extract(*it));
}

QCborValue* QCborMap_extractWithIt(QCborMap* self, QCborMap__ConstIterator* it) {
	return new QCborValue(self->extract(*it));
}

bool QCborMap_empty(const QCborMap* self) {
	return self->empty();
}

QCborMap__Iterator* QCborMap_find(QCborMap* self, long long key) {
	return new QCborMap::Iterator(self->find(static_cast<qint64>(key)));
}

QCborMap__Iterator* QCborMap_find2(QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborMap::Iterator(self->find(key_QString));
}

QCborMap__Iterator* QCborMap_find3(QCborMap* self, QCborValue* key) {
	return new QCborMap::Iterator(self->find(*key));
}

QCborMap__ConstIterator* QCborMap_constFind(const QCborMap* self, long long key) {
	return new QCborMap::ConstIterator(self->constFind(static_cast<qint64>(key)));
}

QCborMap__ConstIterator* QCborMap_constFind2(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborMap::ConstIterator(self->constFind(key_QString));
}

QCborMap__ConstIterator* QCborMap_constFind3(const QCborMap* self, QCborValue* key) {
	return new QCborMap::ConstIterator(self->constFind(*key));
}

QCborMap__ConstIterator* QCborMap_find4(const QCborMap* self, long long key) {
	return new QCborMap::ConstIterator(self->find(static_cast<qint64>(key)));
}

QCborMap__ConstIterator* QCborMap_find6(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborMap::ConstIterator(self->find(key_QString));
}

QCborMap__ConstIterator* QCborMap_find7(const QCborMap* self, QCborValue* key) {
	return new QCborMap::ConstIterator(self->find(*key));
}

QCborMap__Iterator* QCborMap_insert(QCborMap* self, long long key, QCborValue* value_) {
	return new QCborMap::Iterator(self->insert(static_cast<qint64>(key), *value_));
}

QCborMap__Iterator* QCborMap_insert3(QCborMap* self, struct miqt_string key, QCborValue* value_) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborMap::Iterator(self->insert(key_QString, *value_));
}

QCborMap__Iterator* QCborMap_insert4(QCborMap* self, QCborValue* key, QCborValue* value_) {
	return new QCborMap::Iterator(self->insert(*key, *value_));
}

QCborMap__Iterator* QCborMap_insertWithQCborMapvalueType(QCborMap* self, struct miqt_map /* tuple of QCborValue* and QCborValue* */  v) {
	QCborMap::value_type v_QPair;
	QCborValue** v_first_arr = static_cast<QCborValue**>(v.keys);
	QCborValue** v_second_arr = static_cast<QCborValue**>(v.values);
	v_QPair.first = *(v_first_arr[0]);
	v_QPair.second = *(v_second_arr[0]);
	return new QCborMap::Iterator(self->insert(v_QPair));
}

QCborMap* QCborMap_fromVariantMap(struct miqt_map /* of struct miqt_string to QVariant* */  map) {
	QVariantMap map_QMap;
	struct miqt_string* map_karr = static_cast<struct miqt_string*>(map.keys);
	QVariant** map_varr = static_cast<QVariant**>(map.values);
	for(size_t i = 0; i < map.len; ++i) {
		QString map_karr_i_QString = QString::fromUtf8(map_karr[i].data, map_karr[i].len);
		map_QMap[map_karr_i_QString] = *(map_varr[i]);
	}
	return new QCborMap(QCborMap::fromVariantMap(map_QMap));
}

QCborMap* QCborMap_fromVariantHash(struct miqt_map /* of struct miqt_string to QVariant* */  hash) {
	QVariantHash hash_QMap;
	hash_QMap.reserve(hash.len);
	struct miqt_string* hash_karr = static_cast<struct miqt_string*>(hash.keys);
	QVariant** hash_varr = static_cast<QVariant**>(hash.values);
	for(size_t i = 0; i < hash.len; ++i) {
		QString hash_karr_i_QString = QString::fromUtf8(hash_karr[i].data, hash_karr[i].len);
		hash_QMap[hash_karr_i_QString] = *(hash_varr[i]);
	}
	return new QCborMap(QCborMap::fromVariantHash(hash_QMap));
}

QCborMap* QCborMap_fromJsonObject(QJsonObject* o) {
	return new QCborMap(QCborMap::fromJsonObject(*o));
}

struct miqt_map /* of struct miqt_string to QVariant* */  QCborMap_toVariantMap(const QCborMap* self) {
	QVariantMap _ret = self->toVariantMap();
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

struct miqt_map /* of struct miqt_string to QVariant* */  QCborMap_toVariantHash(const QCborMap* self) {
	QVariantHash _ret = self->toVariantHash();
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

QJsonObject* QCborMap_toJsonObject(const QCborMap* self) {
	return new QJsonObject(self->toJsonObject());
}

void QCborMap_delete(QCborMap* self) {
	delete self;
}

QCborMap__Iterator* QCborMap__Iterator_new() {
	return new QCborMap::Iterator();
}

QCborMap__Iterator* QCborMap__Iterator_new2(QCborMap__Iterator* param1) {
	return new QCborMap::Iterator(*param1);
}

void QCborMap__Iterator_operatorAssign(QCborMap__Iterator* self, QCborMap__Iterator* other) {
	self->operator=(*other);
}

struct miqt_map /* tuple of QCborValueRef* and QCborValueRef* */  QCborMap__Iterator_operatorMultiply(const QCborMap__Iterator* self) {
	QCborMap::Iterator::value_type _ret = self->operator*();
	// Convert QPair<> from C++ memory to manually-managed C memory
	QCborValueRef** _first_arr = static_cast<QCborValueRef**>(malloc(sizeof(QCborValueRef*)));
	QCborValueRef** _second_arr = static_cast<QCborValueRef**>(malloc(sizeof(QCborValueRef*)));
	_first_arr[0] = new QCborValueRef(_ret.first);
	_second_arr[0] = new QCborValueRef(_ret.second);
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

QCborValueRef* QCborMap__Iterator_operatorMinusGreater(const QCborMap__Iterator* self) {
	return self->operator->();
}

QCborValue* QCborMap__Iterator_key(const QCborMap__Iterator* self) {
	return new QCborValue(self->key());
}

QCborValueRef* QCborMap__Iterator_value(const QCborMap__Iterator* self) {
	return new QCborValueRef(self->value());
}

bool QCborMap__Iterator_operatorEqual(const QCborMap__Iterator* self, QCborMap__Iterator* o) {
	return (*self == *o);
}

bool QCborMap__Iterator_operatorNotEqual(const QCborMap__Iterator* self, QCborMap__Iterator* o) {
	return (*self != *o);
}

bool QCborMap__Iterator_operatorLesser(const QCborMap__Iterator* self, QCborMap__Iterator* other) {
	return (*self < *other);
}

bool QCborMap__Iterator_operatorLesserOrEqual(const QCborMap__Iterator* self, QCborMap__Iterator* other) {
	return (*self <= *other);
}

bool QCborMap__Iterator_operatorGreater(const QCborMap__Iterator* self, QCborMap__Iterator* other) {
	return (*self > *other);
}

bool QCborMap__Iterator_operatorGreaterOrEqual(const QCborMap__Iterator* self, QCborMap__Iterator* other) {
	return (*self >= *other);
}

bool QCborMap__Iterator_operatorEqualWithQCborMapConstIterator(const QCborMap__Iterator* self, QCborMap__ConstIterator* o) {
	return (*self == *o);
}

bool QCborMap__Iterator_operatorNotEqualWithQCborMapConstIterator(const QCborMap__Iterator* self, QCborMap__ConstIterator* o) {
	return (*self != *o);
}

bool QCborMap__Iterator_operatorLesserWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other) {
	return (*self < *other);
}

bool QCborMap__Iterator_operatorLesserOrEqualWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other) {
	return (*self <= *other);
}

bool QCborMap__Iterator_operatorGreaterWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other) {
	return (*self > *other);
}

bool QCborMap__Iterator_operatorGreaterOrEqualWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other) {
	return (*self >= *other);
}

QCborMap__Iterator* QCborMap__Iterator_operatorPlusPlus(QCborMap__Iterator* self) {
	QCborMap::Iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__Iterator* QCborMap__Iterator_operatorPlusPlusWithInt(QCborMap__Iterator* self, int param1) {
	return new QCborMap::Iterator(self->operator++(static_cast<int>(param1)));
}

QCborMap__Iterator* QCborMap__Iterator_operatorMinusMinus(QCborMap__Iterator* self) {
	QCborMap::Iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__Iterator* QCborMap__Iterator_operatorMinusMinusWithInt(QCborMap__Iterator* self, int param1) {
	return new QCborMap::Iterator(self->operator--(static_cast<int>(param1)));
}

QCborMap__Iterator* QCborMap__Iterator_operatorPlusAssign(QCborMap__Iterator* self, ptrdiff_t j) {
	QCborMap::Iterator& _ret = self->operator+=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__Iterator* QCborMap__Iterator_operatorMinusAssign(QCborMap__Iterator* self, ptrdiff_t j) {
	QCborMap::Iterator& _ret = self->operator-=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__Iterator* QCborMap__Iterator_operatorPlus(const QCborMap__Iterator* self, ptrdiff_t j) {
	return new QCborMap::Iterator(self->operator+((qsizetype)(j)));
}

QCborMap__Iterator* QCborMap__Iterator_operatorMinus(const QCborMap__Iterator* self, ptrdiff_t j) {
	return new QCborMap::Iterator(self->operator-((qsizetype)(j)));
}

ptrdiff_t QCborMap__Iterator_operatorMinusWithQCborMapIterator(const QCborMap__Iterator* self, QCborMap__Iterator* j) {
	qsizetype _ret = self->operator-(*j);
	return static_cast<ptrdiff_t>(_ret);
}

void QCborMap__Iterator_delete(QCborMap__Iterator* self) {
	delete self;
}

QCborMap__ConstIterator* QCborMap__ConstIterator_new() {
	return new QCborMap::ConstIterator();
}

QCborMap__ConstIterator* QCborMap__ConstIterator_new2(QCborMap__ConstIterator* param1) {
	return new QCborMap::ConstIterator(*param1);
}

void QCborMap__ConstIterator_operatorAssign(QCborMap__ConstIterator* self, QCborMap__ConstIterator* other) {
	self->operator=(*other);
}

struct miqt_map /* tuple of QCborValueRef* and QCborValueRef* */  QCborMap__ConstIterator_operatorMultiply(const QCborMap__ConstIterator* self) {
	QCborMap::ConstIterator::value_type _ret = self->operator*();
	// Convert QPair<> from C++ memory to manually-managed C memory
	QCborValueRef** _first_arr = static_cast<QCborValueRef**>(malloc(sizeof(QCborValueRef*)));
	QCborValueRef** _second_arr = static_cast<QCborValueRef**>(malloc(sizeof(QCborValueRef*)));
	_first_arr[0] = new QCborValueRef(_ret.first);
	_second_arr[0] = new QCborValueRef(_ret.second);
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

QCborValueRef* QCborMap__ConstIterator_operatorMinusGreater(const QCborMap__ConstIterator* self) {
	return (QCborValueRef*) self->operator->();
}

QCborValue* QCborMap__ConstIterator_key(const QCborMap__ConstIterator* self) {
	return new QCborValue(self->key());
}

QCborValueRef* QCborMap__ConstIterator_value(const QCborMap__ConstIterator* self) {
	return new QCborValueRef(self->value());
}

bool QCborMap__ConstIterator_operatorEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* o) {
	return (*self == *o);
}

bool QCborMap__ConstIterator_operatorNotEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* o) {
	return (*self != *o);
}

bool QCborMap__ConstIterator_operatorLesser(const QCborMap__ConstIterator* self, QCborMap__Iterator* other) {
	return (*self < *other);
}

bool QCborMap__ConstIterator_operatorLesserOrEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* other) {
	return (*self <= *other);
}

bool QCborMap__ConstIterator_operatorGreater(const QCborMap__ConstIterator* self, QCborMap__Iterator* other) {
	return (*self > *other);
}

bool QCborMap__ConstIterator_operatorGreaterOrEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* other) {
	return (*self >= *other);
}

bool QCborMap__ConstIterator_operatorEqualWithQCborMapConstIterator(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* o) {
	return (*self == *o);
}

bool QCborMap__ConstIterator_operatorNotEqualWithQCborMapConstIterator(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* o) {
	return (*self != *o);
}

bool QCborMap__ConstIterator_operatorLesserWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other) {
	return (*self < *other);
}

bool QCborMap__ConstIterator_operatorLesserOrEqualWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other) {
	return (*self <= *other);
}

bool QCborMap__ConstIterator_operatorGreaterWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other) {
	return (*self > *other);
}

bool QCborMap__ConstIterator_operatorGreaterOrEqualWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other) {
	return (*self >= *other);
}

QCborMap__ConstIterator* QCborMap__ConstIterator_operatorPlusPlus(QCborMap__ConstIterator* self) {
	QCborMap::ConstIterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__ConstIterator* QCborMap__ConstIterator_operatorPlusPlusWithInt(QCborMap__ConstIterator* self, int param1) {
	return new QCborMap::ConstIterator(self->operator++(static_cast<int>(param1)));
}

QCborMap__ConstIterator* QCborMap__ConstIterator_operatorMinusMinus(QCborMap__ConstIterator* self) {
	QCborMap::ConstIterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__ConstIterator* QCborMap__ConstIterator_operatorMinusMinusWithInt(QCborMap__ConstIterator* self, int param1) {
	return new QCborMap::ConstIterator(self->operator--(static_cast<int>(param1)));
}

QCborMap__ConstIterator* QCborMap__ConstIterator_operatorPlusAssign(QCborMap__ConstIterator* self, ptrdiff_t j) {
	QCborMap::ConstIterator& _ret = self->operator+=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__ConstIterator* QCborMap__ConstIterator_operatorMinusAssign(QCborMap__ConstIterator* self, ptrdiff_t j) {
	QCborMap::ConstIterator& _ret = self->operator-=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__ConstIterator* QCborMap__ConstIterator_operatorPlus(const QCborMap__ConstIterator* self, ptrdiff_t j) {
	return new QCborMap::ConstIterator(self->operator+((qsizetype)(j)));
}

QCborMap__ConstIterator* QCborMap__ConstIterator_operatorMinus(const QCborMap__ConstIterator* self, ptrdiff_t j) {
	return new QCborMap::ConstIterator(self->operator-((qsizetype)(j)));
}

ptrdiff_t QCborMap__ConstIterator_operatorMinusWithQCborMapConstIterator(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* j) {
	qsizetype _ret = self->operator-(*j);
	return static_cast<ptrdiff_t>(_ret);
}

void QCborMap__ConstIterator_delete(QCborMap__ConstIterator* self) {
	delete self;
}

