#include <QCborMap>
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborMap__ConstIterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborMap__Iterator
#include <QCborValue>
#include <QCborValueRef>
#include <QJsonObject>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qcbormap.h"

#include "gen_qcbormap.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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
	QCborValue ret = self->toCborValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

size_t QCborMap_Size(const QCborMap* self) {
	return self->size();
}

bool QCborMap_IsEmpty(const QCborMap* self) {
	return self->isEmpty();
}

void QCborMap_Clear(QCborMap* self) {
	self->clear();
}

void QCborMap_Keys(const QCborMap* self, QCborValue*** _out, size_t* _out_len) {
	QVector<QCborValue> ret = self->keys();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QCborValue** __out = static_cast<QCborValue**>(malloc(sizeof(QCborValue**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QCborValue(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QCborValue* QCborMap_Value(const QCborMap* self, long long key) {
	QCborValue ret = self->value(static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_Value2(const QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborValue ret = self->value(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_Value3(const QCborMap* self, QCborValue* key) {
	QCborValue ret = self->value(*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_OperatorSubscript(const QCborMap* self, long long key) {
	QCborValue ret = self->operator[](static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_OperatorSubscript2(const QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborValue ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_OperatorSubscript3(const QCborMap* self, QCborValue* key) {
	QCborValue ret = self->operator[](*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValueRef* QCborMap_OperatorSubscript4(QCborMap* self, long long key) {
	QCborValueRef ret = self->operator[](static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

QCborValueRef* QCborMap_OperatorSubscript6(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborValueRef ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

QCborValueRef* QCborMap_OperatorSubscript7(QCborMap* self, QCborValue* key) {
	QCborValueRef ret = self->operator[](*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

QCborValue* QCborMap_Take(QCborMap* self, long long key) {
	QCborValue ret = self->take(static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_Take2(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborValue ret = self->take(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_Take3(QCborMap* self, QCborValue* key) {
	QCborValue ret = self->take(*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

void QCborMap_Remove(QCborMap* self, long long key) {
	self->remove(static_cast<qint64>(key));
}

void QCborMap_Remove2(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	self->remove(key_QString);
}

void QCborMap_Remove3(QCborMap* self, QCborValue* key) {
	self->remove(*key);
}

bool QCborMap_Contains(const QCborMap* self, long long key) {
	return self->contains(static_cast<qint64>(key));
}

bool QCborMap_Contains2(const QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
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
	QCborMap::Iterator ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap__ConstIterator* QCborMap_ConstBegin(const QCborMap* self) {
	QCborMap::ConstIterator ret = self->constBegin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_Begin2(const QCborMap* self) {
	QCborMap::ConstIterator ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_Cbegin(const QCborMap* self) {
	QCborMap::ConstIterator ret = self->cbegin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__Iterator* QCborMap_End(QCborMap* self) {
	QCborMap::Iterator ret = self->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap__ConstIterator* QCborMap_ConstEnd(const QCborMap* self) {
	QCborMap::ConstIterator ret = self->constEnd();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_End2(const QCborMap* self) {
	QCborMap::ConstIterator ret = self->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_Cend(const QCborMap* self) {
	QCborMap::ConstIterator ret = self->cend();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__Iterator* QCborMap_Erase(QCborMap* self, QCborMap__Iterator* it) {
	QCborMap::Iterator ret = self->erase(*it);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap__Iterator* QCborMap_EraseWithIt(QCborMap* self, QCborMap__ConstIterator* it) {
	QCborMap::Iterator ret = self->erase(*it);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborValue* QCborMap_Extract(QCborMap* self, QCborMap__Iterator* it) {
	QCborValue ret = self->extract(*it);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_ExtractWithIt(QCborMap* self, QCborMap__ConstIterator* it) {
	QCborValue ret = self->extract(*it);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

bool QCborMap_Empty(const QCborMap* self) {
	return self->empty();
}

QCborMap__Iterator* QCborMap_Find(QCborMap* self, long long key) {
	QCborMap::Iterator ret = self->find(static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap__Iterator* QCborMap_Find2(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborMap::Iterator ret = self->find(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap__Iterator* QCborMap_Find3(QCborMap* self, QCborValue* key) {
	QCborMap::Iterator ret = self->find(*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap__ConstIterator* QCborMap_ConstFind(const QCborMap* self, long long key) {
	QCborMap::ConstIterator ret = self->constFind(static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_ConstFind2(const QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborMap::ConstIterator ret = self->constFind(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_ConstFind3(const QCborMap* self, QCborValue* key) {
	QCborMap::ConstIterator ret = self->constFind(*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_Find4(const QCborMap* self, long long key) {
	QCborMap::ConstIterator ret = self->find(static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_Find6(const QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborMap::ConstIterator ret = self->find(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_Find7(const QCborMap* self, QCborValue* key) {
	QCborMap::ConstIterator ret = self->find(*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__Iterator* QCborMap_Insert(QCborMap* self, long long key, QCborValue* value_) {
	QCborMap::Iterator ret = self->insert(static_cast<qint64>(key), *value_);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap__Iterator* QCborMap_Insert3(QCborMap* self, const char* key, size_t key_Strlen, QCborValue* value_) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborMap::Iterator ret = self->insert(key_QString, *value_);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap__Iterator* QCborMap_Insert4(QCborMap* self, QCborValue* key, QCborValue* value_) {
	QCborMap::Iterator ret = self->insert(*key, *value_);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap* QCborMap_FromJsonObject(QJsonObject* o) {
	QCborMap ret = QCborMap::fromJsonObject(*o);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap*>(new QCborMap(ret));
}

QJsonObject* QCborMap_ToJsonObject(const QCborMap* self) {
	QJsonObject ret = self->toJsonObject();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(ret));
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

QCborValueRef* QCborMap__Iterator_OperatorMinusGreater(const QCborMap__Iterator* self) {
	return self->operator->();
}

QCborValue* QCborMap__Iterator_Key(const QCborMap__Iterator* self) {
	QCborValue ret = self->key();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValueRef* QCborMap__Iterator_Value(const QCborMap__Iterator* self) {
	QCborValueRef ret = self->value();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
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

QCborMap__Iterator* QCborMap__Iterator_OperatorPlusPlus(QCborMap__Iterator* self, int param1) {
	QCborMap::Iterator ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap__Iterator* QCborMap__Iterator_OperatorMinusMinus(QCborMap__Iterator* self, int param1) {
	QCborMap::Iterator ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap__Iterator* QCborMap__Iterator_OperatorPlus(const QCborMap__Iterator* self, size_t j) {
	QCborMap::Iterator ret = self->operator+(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap__Iterator* QCborMap__Iterator_OperatorMinus(const QCborMap__Iterator* self, size_t j) {
	QCborMap::Iterator ret = self->operator-(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

size_t QCborMap__Iterator_OperatorMinusWithQCborMapIterator(const QCborMap__Iterator* self, QCborMap__Iterator* j) {
	return self->operator-(*j);
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

QCborValueRef* QCborMap__ConstIterator_OperatorMinusGreater(const QCborMap__ConstIterator* self) {
	return (QCborValueRef*) self->operator->();
}

QCborValue* QCborMap__ConstIterator_Key(const QCborMap__ConstIterator* self) {
	QCborValue ret = self->key();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValueRef* QCborMap__ConstIterator_Value(const QCborMap__ConstIterator* self) {
	QCborValueRef ret = self->value();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
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

QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlusPlus(QCborMap__ConstIterator* self, int param1) {
	QCborMap::ConstIterator ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinusMinus(QCborMap__ConstIterator* self, int param1) {
	QCborMap::ConstIterator ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlus(const QCborMap__ConstIterator* self, size_t j) {
	QCborMap::ConstIterator ret = self->operator+(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinus(const QCborMap__ConstIterator* self, size_t j) {
	QCborMap::ConstIterator ret = self->operator-(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

size_t QCborMap__ConstIterator_OperatorMinusWithQCborMapConstIterator(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* j) {
	return self->operator-(*j);
}

void QCborMap__ConstIterator_Delete(QCborMap__ConstIterator* self) {
	delete self;
}

