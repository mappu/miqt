#include <QJsonObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__const_iterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__iterator
#include <QJsonValue>
#include <QJsonValueConstRef>
#include <QJsonValueRef>
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qjsonobject.h>
#include "gen_qjsonobject.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QJsonObject* QJsonObject_new() {
	return new QJsonObject();
}

QJsonObject* QJsonObject_new2(QJsonObject* other) {
	return new QJsonObject(*other);
}

void QJsonObject_operatorAssign(QJsonObject* self, QJsonObject* other) {
	self->operator=(*other);
}

void QJsonObject_swap(QJsonObject* self, QJsonObject* other) {
	self->swap(*other);
}

QJsonObject* QJsonObject_fromVariantMap(struct miqt_map /* of struct miqt_string to QVariant* */  map) {
	QVariantMap map_QMap;
	struct miqt_string* map_karr = static_cast<struct miqt_string*>(map.keys);
	QVariant** map_varr = static_cast<QVariant**>(map.values);
	for(size_t i = 0; i < map.len; ++i) {
		QString map_karr_i_QString = QString::fromUtf8(map_karr[i].data, map_karr[i].len);
		map_QMap[map_karr_i_QString] = *(map_varr[i]);
	}
	return new QJsonObject(QJsonObject::fromVariantMap(map_QMap));
}

struct miqt_map /* of struct miqt_string to QVariant* */  QJsonObject_toVariantMap(const QJsonObject* self) {
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

QJsonObject* QJsonObject_fromVariantHash(struct miqt_map /* of struct miqt_string to QVariant* */  map) {
	QVariantHash map_QMap;
	map_QMap.reserve(map.len);
	struct miqt_string* map_karr = static_cast<struct miqt_string*>(map.keys);
	QVariant** map_varr = static_cast<QVariant**>(map.values);
	for(size_t i = 0; i < map.len; ++i) {
		QString map_karr_i_QString = QString::fromUtf8(map_karr[i].data, map_karr[i].len);
		map_QMap[map_karr_i_QString] = *(map_varr[i]);
	}
	return new QJsonObject(QJsonObject::fromVariantHash(map_QMap));
}

struct miqt_map /* of struct miqt_string to QVariant* */  QJsonObject_toVariantHash(const QJsonObject* self) {
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

struct miqt_array /* of struct miqt_string */  QJsonObject_keys(const QJsonObject* self) {
	QStringList _ret = self->keys();
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

ptrdiff_t QJsonObject_size(const QJsonObject* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QJsonObject_count(const QJsonObject* self) {
	qsizetype _ret = self->count();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QJsonObject_length(const QJsonObject* self) {
	qsizetype _ret = self->length();
	return static_cast<ptrdiff_t>(_ret);
}

bool QJsonObject_isEmpty(const QJsonObject* self) {
	return self->isEmpty();
}

QJsonValue* QJsonObject_value(const QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonValue(self->value(key_QString));
}

QJsonValue* QJsonObject_operatorSubscript(const QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonValue(self->operator[](key_QString));
}

QJsonValueRef* QJsonObject_operatorSubscriptWithKey(QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonValueRef(self->operator[](key_QString));
}

void QJsonObject_remove(QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->remove(key_QString);
}

QJsonValue* QJsonObject_take(QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonValue(self->take(key_QString));
}

bool QJsonObject_contains(const QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->contains(key_QString);
}

bool QJsonObject_operatorEqual(const QJsonObject* self, QJsonObject* other) {
	return (*self == *other);
}

bool QJsonObject_operatorNotEqual(const QJsonObject* self, QJsonObject* other) {
	return (*self != *other);
}

QJsonObject__iterator* QJsonObject_begin(QJsonObject* self) {
	return new QJsonObject::iterator(self->begin());
}

QJsonObject__const_iterator* QJsonObject_begin2(const QJsonObject* self) {
	return new QJsonObject::const_iterator(self->begin());
}

QJsonObject__const_iterator* QJsonObject_constBegin(const QJsonObject* self) {
	return new QJsonObject::const_iterator(self->constBegin());
}

QJsonObject__iterator* QJsonObject_end(QJsonObject* self) {
	return new QJsonObject::iterator(self->end());
}

QJsonObject__const_iterator* QJsonObject_end2(const QJsonObject* self) {
	return new QJsonObject::const_iterator(self->end());
}

QJsonObject__const_iterator* QJsonObject_constEnd(const QJsonObject* self) {
	return new QJsonObject::const_iterator(self->constEnd());
}

QJsonObject__iterator* QJsonObject_erase(QJsonObject* self, QJsonObject__iterator* it) {
	return new QJsonObject::iterator(self->erase(*it));
}

QJsonObject__iterator* QJsonObject_find(QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonObject::iterator(self->find(key_QString));
}

QJsonObject__const_iterator* QJsonObject_findWithKey(const QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonObject::const_iterator(self->find(key_QString));
}

QJsonObject__const_iterator* QJsonObject_constFind(const QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonObject::const_iterator(self->constFind(key_QString));
}

QJsonObject__iterator* QJsonObject_insert(QJsonObject* self, struct miqt_string key, QJsonValue* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonObject::iterator(self->insert(key_QString, *value));
}

bool QJsonObject_empty(const QJsonObject* self) {
	return self->empty();
}

void QJsonObject_delete(QJsonObject* self) {
	delete self;
}

QJsonObject__iterator* QJsonObject__iterator_new() {
	return new QJsonObject::iterator();
}

QJsonObject__iterator* QJsonObject__iterator_new2(QJsonObject* obj, ptrdiff_t index) {
	return new QJsonObject::iterator(obj, (qsizetype)(index));
}

QJsonObject__iterator* QJsonObject__iterator_new3(QJsonObject__iterator* other) {
	return new QJsonObject::iterator(*other);
}

void QJsonObject__iterator_operatorAssign(QJsonObject__iterator* self, QJsonObject__iterator* other) {
	self->operator=(*other);
}

struct miqt_string QJsonObject__iterator_key(const QJsonObject__iterator* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QJsonValueRef* QJsonObject__iterator_value(const QJsonObject__iterator* self) {
	return new QJsonValueRef(self->value());
}

QJsonValueRef* QJsonObject__iterator_operatorMultiply(const QJsonObject__iterator* self) {
	return new QJsonValueRef(self->operator*());
}

QJsonValueConstRef* QJsonObject__iterator_operatorMinusGreater(const QJsonObject__iterator* self) {
	return (QJsonValueConstRef*) self->operator->();
}

QJsonValueRef* QJsonObject__iterator_operatorMinusGreater2(QJsonObject__iterator* self) {
	return self->operator->();
}

QJsonValueRef* QJsonObject__iterator_operatorSubscript(const QJsonObject__iterator* self, ptrdiff_t j) {
	return new QJsonValueRef(self->operator[]((qsizetype)(j)));
}

bool QJsonObject__iterator_operatorEqual(const QJsonObject__iterator* self, QJsonObject__iterator* other) {
	return (*self == *other);
}

bool QJsonObject__iterator_operatorNotEqual(const QJsonObject__iterator* self, QJsonObject__iterator* other) {
	return (*self != *other);
}

bool QJsonObject__iterator_operatorLesser(const QJsonObject__iterator* self, QJsonObject__iterator* other) {
	return (*self < *other);
}

bool QJsonObject__iterator_operatorLesserOrEqual(const QJsonObject__iterator* self, QJsonObject__iterator* other) {
	return (*self <= *other);
}

bool QJsonObject__iterator_operatorGreater(const QJsonObject__iterator* self, QJsonObject__iterator* other) {
	return (*self > *other);
}

bool QJsonObject__iterator_operatorGreaterOrEqual(const QJsonObject__iterator* self, QJsonObject__iterator* other) {
	return (*self >= *other);
}

QJsonObject__iterator* QJsonObject__iterator_operatorPlusPlus(QJsonObject__iterator* self) {
	QJsonObject::iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QJsonObject__iterator* QJsonObject__iterator_operatorPlusPlusWithInt(QJsonObject__iterator* self, int param1) {
	return new QJsonObject::iterator(self->operator++(static_cast<int>(param1)));
}

QJsonObject__iterator* QJsonObject__iterator_operatorMinusMinus(QJsonObject__iterator* self) {
	QJsonObject::iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QJsonObject__iterator* QJsonObject__iterator_operatorMinusMinusWithInt(QJsonObject__iterator* self, int param1) {
	return new QJsonObject::iterator(self->operator--(static_cast<int>(param1)));
}

QJsonObject__iterator* QJsonObject__iterator_operatorPlus(const QJsonObject__iterator* self, ptrdiff_t j) {
	return new QJsonObject::iterator(self->operator+((qsizetype)(j)));
}

QJsonObject__iterator* QJsonObject__iterator_operatorMinus(const QJsonObject__iterator* self, ptrdiff_t j) {
	return new QJsonObject::iterator(self->operator-((qsizetype)(j)));
}

QJsonObject__iterator* QJsonObject__iterator_operatorPlusAssign(QJsonObject__iterator* self, ptrdiff_t j) {
	QJsonObject::iterator& _ret = self->operator+=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

QJsonObject__iterator* QJsonObject__iterator_operatorMinusAssign(QJsonObject__iterator* self, ptrdiff_t j) {
	QJsonObject::iterator& _ret = self->operator-=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

ptrdiff_t QJsonObject__iterator_operatorMinusWithQJsonObjectiterator(const QJsonObject__iterator* self, QJsonObject__iterator* j) {
	qsizetype _ret = self->operator-(*j);
	return static_cast<ptrdiff_t>(_ret);
}

bool QJsonObject__iterator_operatorEqualWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other) {
	return (*self == *other);
}

bool QJsonObject__iterator_operatorNotEqualWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other) {
	return (*self != *other);
}

bool QJsonObject__iterator_operatorLesserWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other) {
	return (*self < *other);
}

bool QJsonObject__iterator_operatorLesserOrEqualWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other) {
	return (*self <= *other);
}

bool QJsonObject__iterator_operatorGreaterWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other) {
	return (*self > *other);
}

bool QJsonObject__iterator_operatorGreaterOrEqualWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other) {
	return (*self >= *other);
}

void QJsonObject__iterator_delete(QJsonObject__iterator* self) {
	delete self;
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new() {
	return new QJsonObject::const_iterator();
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new2(QJsonObject* obj, ptrdiff_t index) {
	return new QJsonObject::const_iterator(obj, (qsizetype)(index));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new3(QJsonObject__iterator* other) {
	return new QJsonObject::const_iterator(*other);
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new4(QJsonObject__const_iterator* other) {
	return new QJsonObject::const_iterator(*other);
}

void QJsonObject__const_iterator_operatorAssign(QJsonObject__const_iterator* self, QJsonObject__const_iterator* other) {
	self->operator=(*other);
}

struct miqt_string QJsonObject__const_iterator_key(const QJsonObject__const_iterator* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QJsonValueConstRef* QJsonObject__const_iterator_value(const QJsonObject__const_iterator* self) {
	return new QJsonValueConstRef(self->value());
}

QJsonValueConstRef* QJsonObject__const_iterator_operatorMultiply(const QJsonObject__const_iterator* self) {
	return new QJsonValueConstRef(self->operator*());
}

QJsonValueConstRef* QJsonObject__const_iterator_operatorMinusGreater(const QJsonObject__const_iterator* self) {
	return (QJsonValueConstRef*) self->operator->();
}

QJsonValueConstRef* QJsonObject__const_iterator_operatorSubscript(const QJsonObject__const_iterator* self, ptrdiff_t j) {
	return new QJsonValueConstRef(self->operator[]((qsizetype)(j)));
}

bool QJsonObject__const_iterator_operatorEqual(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other) {
	return (*self == *other);
}

bool QJsonObject__const_iterator_operatorNotEqual(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other) {
	return (*self != *other);
}

bool QJsonObject__const_iterator_operatorLesser(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other) {
	return (*self < *other);
}

bool QJsonObject__const_iterator_operatorLesserOrEqual(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other) {
	return (*self <= *other);
}

bool QJsonObject__const_iterator_operatorGreater(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other) {
	return (*self > *other);
}

bool QJsonObject__const_iterator_operatorGreaterOrEqual(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other) {
	return (*self >= *other);
}

QJsonObject__const_iterator* QJsonObject__const_iterator_operatorPlusPlus(QJsonObject__const_iterator* self) {
	QJsonObject::const_iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QJsonObject__const_iterator* QJsonObject__const_iterator_operatorPlusPlusWithInt(QJsonObject__const_iterator* self, int param1) {
	return new QJsonObject::const_iterator(self->operator++(static_cast<int>(param1)));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_operatorMinusMinus(QJsonObject__const_iterator* self) {
	QJsonObject::const_iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QJsonObject__const_iterator* QJsonObject__const_iterator_operatorMinusMinusWithInt(QJsonObject__const_iterator* self, int param1) {
	return new QJsonObject::const_iterator(self->operator--(static_cast<int>(param1)));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_operatorPlus(const QJsonObject__const_iterator* self, ptrdiff_t j) {
	return new QJsonObject::const_iterator(self->operator+((qsizetype)(j)));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_operatorMinus(const QJsonObject__const_iterator* self, ptrdiff_t j) {
	return new QJsonObject::const_iterator(self->operator-((qsizetype)(j)));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_operatorPlusAssign(QJsonObject__const_iterator* self, ptrdiff_t j) {
	QJsonObject::const_iterator& _ret = self->operator+=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

QJsonObject__const_iterator* QJsonObject__const_iterator_operatorMinusAssign(QJsonObject__const_iterator* self, ptrdiff_t j) {
	QJsonObject::const_iterator& _ret = self->operator-=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

ptrdiff_t QJsonObject__const_iterator_operatorMinusWithQJsonObjectconstIterator(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* j) {
	qsizetype _ret = self->operator-(*j);
	return static_cast<ptrdiff_t>(_ret);
}

bool QJsonObject__const_iterator_operatorEqualWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other) {
	return (*self == *other);
}

bool QJsonObject__const_iterator_operatorNotEqualWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other) {
	return (*self != *other);
}

bool QJsonObject__const_iterator_operatorLesserWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other) {
	return (*self < *other);
}

bool QJsonObject__const_iterator_operatorLesserOrEqualWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other) {
	return (*self <= *other);
}

bool QJsonObject__const_iterator_operatorGreaterWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other) {
	return (*self > *other);
}

bool QJsonObject__const_iterator_operatorGreaterOrEqualWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other) {
	return (*self >= *other);
}

void QJsonObject__const_iterator_delete(QJsonObject__const_iterator* self) {
	delete self;
}

