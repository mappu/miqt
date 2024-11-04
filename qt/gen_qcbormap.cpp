#include <QCborMap>
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborMap__ConstIterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborMap__Iterator
#include <QCborValue>
#include <QCborValueRef>
#include <QJsonObject>
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qcbormap.h>
#include "gen_qcbormap.h"
#include "_cgo_export.h"

QCborMap* QCborMap_new() {
	return new QCborMap();
}

QCborMap* QCborMap_new2(QCborMap* other) {
	return new QCborMap(*other);
}

void QCborMap_OperatorAssign(QCborMap* self, QCborMap* other) {
	self->operator=(*other);
}

void QCborMap_Swap(QCborMap* self, QCborMap* other) {
	self->swap(*other);
}

QCborValue* QCborMap_ToCborValue(const QCborMap* self) {
	return new QCborValue(self->toCborValue());
}

ptrdiff_t QCborMap_Size(const QCborMap* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

bool QCborMap_IsEmpty(const QCborMap* self) {
	return self->isEmpty();
}

void QCborMap_Clear(QCborMap* self) {
	self->clear();
}

struct miqt_array QCborMap_Keys(const QCborMap* self) {
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

QCborValue* QCborMap_Value(const QCborMap* self, long long key) {
	return new QCborValue(self->value(static_cast<qint64>(key)));
}

QCborValue* QCborMap_Value2(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValue(self->value(key_QString));
}

QCborValue* QCborMap_Value3(const QCborMap* self, QCborValue* key) {
	return new QCborValue(self->value(*key));
}

QCborValue* QCborMap_OperatorSubscript(const QCborMap* self, long long key) {
	return new QCborValue(self->operator[](static_cast<qint64>(key)));
}

QCborValue* QCborMap_OperatorSubscript2(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValue(self->operator[](key_QString));
}

QCborValue* QCborMap_OperatorSubscript3(const QCborMap* self, QCborValue* key) {
	return new QCborValue(self->operator[](*key));
}

QCborValueRef* QCborMap_OperatorSubscript4(QCborMap* self, long long key) {
	return new QCborValueRef(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborMap_OperatorSubscript6(QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValueRef(self->operator[](key_QString));
}

QCborValueRef* QCborMap_OperatorSubscript7(QCborMap* self, QCborValue* key) {
	return new QCborValueRef(self->operator[](*key));
}

QCborValue* QCborMap_Take(QCborMap* self, long long key) {
	return new QCborValue(self->take(static_cast<qint64>(key)));
}

QCborValue* QCborMap_Take2(QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValue(self->take(key_QString));
}

QCborValue* QCborMap_Take3(QCborMap* self, QCborValue* key) {
	return new QCborValue(self->take(*key));
}

void QCborMap_Remove(QCborMap* self, long long key) {
	self->remove(static_cast<qint64>(key));
}

void QCborMap_Remove2(QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->remove(key_QString);
}

void QCborMap_Remove3(QCborMap* self, QCborValue* key) {
	self->remove(*key);
}

bool QCborMap_Contains(const QCborMap* self, long long key) {
	return self->contains(static_cast<qint64>(key));
}

bool QCborMap_Contains2(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->contains(key_QString);
}

bool QCborMap_Contains3(const QCborMap* self, QCborValue* key) {
	return self->contains(*key);
}

int QCborMap_Compare(const QCborMap* self, QCborMap* other) {
	return self->compare(*other);
}

bool QCborMap_OperatorEqual(const QCborMap* self, QCborMap* other) {
	return self->operator==(*other);
}

bool QCborMap_OperatorNotEqual(const QCborMap* self, QCborMap* other) {
	return self->operator!=(*other);
}

bool QCborMap_OperatorLesser(const QCborMap* self, QCborMap* other) {
	return self->operator<(*other);
}

QCborMap__Iterator* QCborMap_Begin(QCborMap* self) {
	return new QCborMap::Iterator(self->begin());
}

QCborMap__ConstIterator* QCborMap_ConstBegin(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->constBegin());
}

QCborMap__ConstIterator* QCborMap_Begin2(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->begin());
}

QCborMap__ConstIterator* QCborMap_Cbegin(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->cbegin());
}

QCborMap__Iterator* QCborMap_End(QCborMap* self) {
	return new QCborMap::Iterator(self->end());
}

QCborMap__ConstIterator* QCborMap_ConstEnd(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->constEnd());
}

QCborMap__ConstIterator* QCborMap_End2(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->end());
}

QCborMap__ConstIterator* QCborMap_Cend(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->cend());
}

QCborMap__Iterator* QCborMap_Erase(QCborMap* self, QCborMap__Iterator* it) {
	return new QCborMap::Iterator(self->erase(*it));
}

QCborMap__Iterator* QCborMap_EraseWithIt(QCborMap* self, QCborMap__ConstIterator* it) {
	return new QCborMap::Iterator(self->erase(*it));
}

QCborValue* QCborMap_Extract(QCborMap* self, QCborMap__Iterator* it) {
	return new QCborValue(self->extract(*it));
}

QCborValue* QCborMap_ExtractWithIt(QCborMap* self, QCborMap__ConstIterator* it) {
	return new QCborValue(self->extract(*it));
}

bool QCborMap_Empty(const QCborMap* self) {
	return self->empty();
}

QCborMap__Iterator* QCborMap_Find(QCborMap* self, long long key) {
	return new QCborMap::Iterator(self->find(static_cast<qint64>(key)));
}

QCborMap__Iterator* QCborMap_Find2(QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborMap::Iterator(self->find(key_QString));
}

QCborMap__Iterator* QCborMap_Find3(QCborMap* self, QCborValue* key) {
	return new QCborMap::Iterator(self->find(*key));
}

QCborMap__ConstIterator* QCborMap_ConstFind(const QCborMap* self, long long key) {
	return new QCborMap::ConstIterator(self->constFind(static_cast<qint64>(key)));
}

QCborMap__ConstIterator* QCborMap_ConstFind2(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborMap::ConstIterator(self->constFind(key_QString));
}

QCborMap__ConstIterator* QCborMap_ConstFind3(const QCborMap* self, QCborValue* key) {
	return new QCborMap::ConstIterator(self->constFind(*key));
}

QCborMap__ConstIterator* QCborMap_Find4(const QCborMap* self, long long key) {
	return new QCborMap::ConstIterator(self->find(static_cast<qint64>(key)));
}

QCborMap__ConstIterator* QCborMap_Find6(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborMap::ConstIterator(self->find(key_QString));
}

QCborMap__ConstIterator* QCborMap_Find7(const QCborMap* self, QCborValue* key) {
	return new QCborMap::ConstIterator(self->find(*key));
}

QCborMap__Iterator* QCborMap_Insert(QCborMap* self, long long key, QCborValue* value_) {
	return new QCborMap::Iterator(self->insert(static_cast<qint64>(key), *value_));
}

QCborMap__Iterator* QCborMap_Insert3(QCborMap* self, struct miqt_string key, QCborValue* value_) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborMap::Iterator(self->insert(key_QString, *value_));
}

QCborMap__Iterator* QCborMap_Insert4(QCborMap* self, QCborValue* key, QCborValue* value_) {
	return new QCborMap::Iterator(self->insert(*key, *value_));
}

QCborMap* QCborMap_FromVariantMap(struct miqt_map mapVal) {
	QVariantMap mapVal_QMap;
	struct miqt_string* mapVal_karr = static_cast<struct miqt_string*>(mapVal.keys);
	QVariant** mapVal_varr = static_cast<QVariant**>(mapVal.values);
	for(size_t i = 0; i < mapVal.len; ++i) {
		QString mapVal_karr_i_QString = QString::fromUtf8(mapVal_karr[i].data, mapVal_karr[i].len);
		mapVal_QMap[mapVal_karr_i_QString] = *(mapVal_varr[i]);
	}
	return new QCborMap(QCborMap::fromVariantMap(mapVal_QMap));
}

QCborMap* QCborMap_FromVariantHash(struct miqt_map hash) {
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

QCborMap* QCborMap_FromJsonObject(QJsonObject* o) {
	return new QCborMap(QCborMap::fromJsonObject(*o));
}

struct miqt_map QCborMap_ToVariantMap(const QCborMap* self) {
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

struct miqt_map QCborMap_ToVariantHash(const QCborMap* self) {
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

QJsonObject* QCborMap_ToJsonObject(const QCborMap* self) {
	return new QJsonObject(self->toJsonObject());
}

void QCborMap_Delete(QCborMap* self) {
	delete self;
}

QCborMap__Iterator* QCborMap__Iterator_new() {
	return new QCborMap::Iterator();
}

QCborMap__Iterator* QCborMap__Iterator_new2(QCborMap__Iterator* param1) {
	return new QCborMap::Iterator(*param1);
}

void QCborMap__Iterator_OperatorAssign(QCborMap__Iterator* self, QCborMap__Iterator* other) {
	self->operator=(*other);
}

QCborValueRef* QCborMap__Iterator_OperatorMinusGreater(const QCborMap__Iterator* self) {
	return self->operator->();
}

QCborValue* QCborMap__Iterator_Key(const QCborMap__Iterator* self) {
	return new QCborValue(self->key());
}

QCborValueRef* QCborMap__Iterator_Value(const QCborMap__Iterator* self) {
	return new QCborValueRef(self->value());
}

bool QCborMap__Iterator_OperatorEqual(const QCborMap__Iterator* self, QCborMap__Iterator* o) {
	return self->operator==(*o);
}

bool QCborMap__Iterator_OperatorNotEqual(const QCborMap__Iterator* self, QCborMap__Iterator* o) {
	return self->operator!=(*o);
}

bool QCborMap__Iterator_OperatorLesser(const QCborMap__Iterator* self, QCborMap__Iterator* other) {
	return self->operator<(*other);
}

bool QCborMap__Iterator_OperatorLesserOrEqual(const QCborMap__Iterator* self, QCborMap__Iterator* other) {
	return self->operator<=(*other);
}

bool QCborMap__Iterator_OperatorGreater(const QCborMap__Iterator* self, QCborMap__Iterator* other) {
	return self->operator>(*other);
}

bool QCborMap__Iterator_OperatorGreaterOrEqual(const QCborMap__Iterator* self, QCborMap__Iterator* other) {
	return self->operator>=(*other);
}

bool QCborMap__Iterator_OperatorEqualWithQCborMapConstIterator(const QCborMap__Iterator* self, QCborMap__ConstIterator* o) {
	return self->operator==(*o);
}

bool QCborMap__Iterator_OperatorNotEqualWithQCborMapConstIterator(const QCborMap__Iterator* self, QCborMap__ConstIterator* o) {
	return self->operator!=(*o);
}

bool QCborMap__Iterator_OperatorLesserWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other) {
	return self->operator<(*other);
}

bool QCborMap__Iterator_OperatorLesserOrEqualWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other) {
	return self->operator<=(*other);
}

bool QCborMap__Iterator_OperatorGreaterWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other) {
	return self->operator>(*other);
}

bool QCborMap__Iterator_OperatorGreaterOrEqualWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other) {
	return self->operator>=(*other);
}

QCborMap__Iterator* QCborMap__Iterator_OperatorPlusPlus(QCborMap__Iterator* self) {
	QCborMap::Iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__Iterator* QCborMap__Iterator_OperatorPlusPlusWithInt(QCborMap__Iterator* self, int param1) {
	return new QCborMap::Iterator(self->operator++(static_cast<int>(param1)));
}

QCborMap__Iterator* QCborMap__Iterator_OperatorMinusMinus(QCborMap__Iterator* self) {
	QCborMap::Iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__Iterator* QCborMap__Iterator_OperatorMinusMinusWithInt(QCborMap__Iterator* self, int param1) {
	return new QCborMap::Iterator(self->operator--(static_cast<int>(param1)));
}

QCborMap__Iterator* QCborMap__Iterator_OperatorPlusAssign(QCborMap__Iterator* self, ptrdiff_t j) {
	QCborMap::Iterator& _ret = self->operator+=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__Iterator* QCborMap__Iterator_OperatorMinusAssign(QCborMap__Iterator* self, ptrdiff_t j) {
	QCborMap::Iterator& _ret = self->operator-=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__Iterator* QCborMap__Iterator_OperatorPlus(const QCborMap__Iterator* self, ptrdiff_t j) {
	return new QCborMap::Iterator(self->operator+((qsizetype)(j)));
}

QCborMap__Iterator* QCborMap__Iterator_OperatorMinus(const QCborMap__Iterator* self, ptrdiff_t j) {
	return new QCborMap::Iterator(self->operator-((qsizetype)(j)));
}

ptrdiff_t QCborMap__Iterator_OperatorMinusWithQCborMapIterator(const QCborMap__Iterator* self, QCborMap__Iterator* j) {
	qsizetype _ret = self->operator-(*j);
	return static_cast<ptrdiff_t>(_ret);
}

void QCborMap__Iterator_Delete(QCborMap__Iterator* self) {
	delete self;
}

QCborMap__ConstIterator* QCborMap__ConstIterator_new() {
	return new QCborMap::ConstIterator();
}

QCborMap__ConstIterator* QCborMap__ConstIterator_new2(QCborMap__ConstIterator* param1) {
	return new QCborMap::ConstIterator(*param1);
}

void QCborMap__ConstIterator_OperatorAssign(QCborMap__ConstIterator* self, QCborMap__ConstIterator* other) {
	self->operator=(*other);
}

QCborValueRef* QCborMap__ConstIterator_OperatorMinusGreater(const QCborMap__ConstIterator* self) {
	return (QCborValueRef*) self->operator->();
}

QCborValue* QCborMap__ConstIterator_Key(const QCborMap__ConstIterator* self) {
	return new QCborValue(self->key());
}

QCborValueRef* QCborMap__ConstIterator_Value(const QCborMap__ConstIterator* self) {
	return new QCborValueRef(self->value());
}

bool QCborMap__ConstIterator_OperatorEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* o) {
	return self->operator==(*o);
}

bool QCborMap__ConstIterator_OperatorNotEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* o) {
	return self->operator!=(*o);
}

bool QCborMap__ConstIterator_OperatorLesser(const QCborMap__ConstIterator* self, QCborMap__Iterator* other) {
	return self->operator<(*other);
}

bool QCborMap__ConstIterator_OperatorLesserOrEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* other) {
	return self->operator<=(*other);
}

bool QCborMap__ConstIterator_OperatorGreater(const QCborMap__ConstIterator* self, QCborMap__Iterator* other) {
	return self->operator>(*other);
}

bool QCborMap__ConstIterator_OperatorGreaterOrEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* other) {
	return self->operator>=(*other);
}

bool QCborMap__ConstIterator_OperatorEqualWithQCborMapConstIterator(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* o) {
	return self->operator==(*o);
}

bool QCborMap__ConstIterator_OperatorNotEqualWithQCborMapConstIterator(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* o) {
	return self->operator!=(*o);
}

bool QCborMap__ConstIterator_OperatorLesserWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other) {
	return self->operator<(*other);
}

bool QCborMap__ConstIterator_OperatorLesserOrEqualWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other) {
	return self->operator<=(*other);
}

bool QCborMap__ConstIterator_OperatorGreaterWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other) {
	return self->operator>(*other);
}

bool QCborMap__ConstIterator_OperatorGreaterOrEqualWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other) {
	return self->operator>=(*other);
}

QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlusPlus(QCborMap__ConstIterator* self) {
	QCborMap::ConstIterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlusPlusWithInt(QCborMap__ConstIterator* self, int param1) {
	return new QCborMap::ConstIterator(self->operator++(static_cast<int>(param1)));
}

QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinusMinus(QCborMap__ConstIterator* self) {
	QCborMap::ConstIterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinusMinusWithInt(QCborMap__ConstIterator* self, int param1) {
	return new QCborMap::ConstIterator(self->operator--(static_cast<int>(param1)));
}

QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlusAssign(QCborMap__ConstIterator* self, ptrdiff_t j) {
	QCborMap::ConstIterator& _ret = self->operator+=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinusAssign(QCborMap__ConstIterator* self, ptrdiff_t j) {
	QCborMap::ConstIterator& _ret = self->operator-=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlus(const QCborMap__ConstIterator* self, ptrdiff_t j) {
	return new QCborMap::ConstIterator(self->operator+((qsizetype)(j)));
}

QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinus(const QCborMap__ConstIterator* self, ptrdiff_t j) {
	return new QCborMap::ConstIterator(self->operator-((qsizetype)(j)));
}

ptrdiff_t QCborMap__ConstIterator_OperatorMinusWithQCborMapConstIterator(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* j) {
	qsizetype _ret = self->operator-(*j);
	return static_cast<ptrdiff_t>(_ret);
}

void QCborMap__ConstIterator_Delete(QCborMap__ConstIterator* self) {
	delete self;
}

