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

QCborValue* QCborMap_ToCborValue(QCborMap* self) {
	QCborValue ret = const_cast<const QCborMap*>(self)->toCborValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

size_t QCborMap_Size(QCborMap* self) {
	return const_cast<const QCborMap*>(self)->size();
}

bool QCborMap_IsEmpty(QCborMap* self) {
	return const_cast<const QCborMap*>(self)->isEmpty();
}

void QCborMap_Clear(QCborMap* self) {
	self->clear();
}

void QCborMap_Keys(QCborMap* self, QCborValue*** _out, size_t* _out_len) {
	QVector<QCborValue> ret = const_cast<const QCborMap*>(self)->keys();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QCborValue** __out = static_cast<QCborValue**>(malloc(sizeof(QCborValue**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QCborValue(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QCborValue* QCborMap_Value(QCborMap* self, long long key) {
	QCborValue ret = const_cast<const QCborMap*>(self)->value(static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_Value2(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborValue ret = const_cast<const QCborMap*>(self)->value(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_Value3(QCborMap* self, QCborValue* key) {
	QCborValue ret = const_cast<const QCborMap*>(self)->value(*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_OperatorSubscript(QCborMap* self, long long key) {
	QCborValue ret = const_cast<const QCborMap*>(self)->operator[](static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_OperatorSubscript2(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborValue ret = const_cast<const QCborMap*>(self)->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_OperatorSubscript3(QCborMap* self, QCborValue* key) {
	QCborValue ret = const_cast<const QCborMap*>(self)->operator[](*key);
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

bool QCborMap_Contains(QCborMap* self, long long key) {
	return const_cast<const QCborMap*>(self)->contains(static_cast<qint64>(key));
}

bool QCborMap_Contains2(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return const_cast<const QCborMap*>(self)->contains(key_QString);
}

bool QCborMap_Contains3(QCborMap* self, QCborValue* key) {
	return const_cast<const QCborMap*>(self)->contains(*key);
}

int QCborMap_Compare(QCborMap* self, QCborMap* other) {
	return const_cast<const QCborMap*>(self)->compare(*other);
}

bool QCborMap_OperatorEqual(QCborMap* self, QCborMap* other) {
	return const_cast<const QCborMap*>(self)->operator==(*other);
}

bool QCborMap_OperatorNotEqual(QCborMap* self, QCborMap* other) {
	return const_cast<const QCborMap*>(self)->operator!=(*other);
}

bool QCborMap_OperatorLesser(QCborMap* self, QCborMap* other) {
	return const_cast<const QCborMap*>(self)->operator<(*other);
}

QCborMap__Iterator* QCborMap_Begin(QCborMap* self) {
	QCborMap::Iterator ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap__ConstIterator* QCborMap_ConstBegin(QCborMap* self) {
	QCborMap::ConstIterator ret = const_cast<const QCborMap*>(self)->constBegin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_Begin2(QCborMap* self) {
	QCborMap::ConstIterator ret = const_cast<const QCborMap*>(self)->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_Cbegin(QCborMap* self) {
	QCborMap::ConstIterator ret = const_cast<const QCborMap*>(self)->cbegin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__Iterator* QCborMap_End(QCborMap* self) {
	QCborMap::Iterator ret = self->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap__ConstIterator* QCborMap_ConstEnd(QCborMap* self) {
	QCborMap::ConstIterator ret = const_cast<const QCborMap*>(self)->constEnd();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_End2(QCborMap* self) {
	QCborMap::ConstIterator ret = const_cast<const QCborMap*>(self)->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_Cend(QCborMap* self) {
	QCborMap::ConstIterator ret = const_cast<const QCborMap*>(self)->cend();
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

bool QCborMap_Empty(QCborMap* self) {
	return const_cast<const QCborMap*>(self)->empty();
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

QCborMap__ConstIterator* QCborMap_ConstFind(QCborMap* self, long long key) {
	QCborMap::ConstIterator ret = const_cast<const QCborMap*>(self)->constFind(static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_ConstFind2(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborMap::ConstIterator ret = const_cast<const QCborMap*>(self)->constFind(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_ConstFind3(QCborMap* self, QCborValue* key) {
	QCborMap::ConstIterator ret = const_cast<const QCborMap*>(self)->constFind(*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_Find4(QCborMap* self, long long key) {
	QCborMap::ConstIterator ret = const_cast<const QCborMap*>(self)->find(static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_Find6(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborMap::ConstIterator ret = const_cast<const QCborMap*>(self)->find(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap_Find7(QCborMap* self, QCborValue* key) {
	QCborMap::ConstIterator ret = const_cast<const QCborMap*>(self)->find(*key);
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

QJsonObject* QCborMap_ToJsonObject(QCborMap* self) {
	QJsonObject ret = const_cast<const QCborMap*>(self)->toJsonObject();
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

QCborValueRef* QCborMap__Iterator_OperatorMinusGreater(QCborMap__Iterator* self) {
	return const_cast<const QCborMap::Iterator*>(self)->operator->();
}

QCborValue* QCborMap__Iterator_Key(QCborMap__Iterator* self) {
	QCborValue ret = const_cast<const QCborMap::Iterator*>(self)->key();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValueRef* QCborMap__Iterator_Value(QCborMap__Iterator* self) {
	QCborValueRef ret = const_cast<const QCborMap::Iterator*>(self)->value();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

bool QCborMap__Iterator_OperatorEqual(QCborMap__Iterator* self, QCborMap__Iterator* o) {
	return const_cast<const QCborMap::Iterator*>(self)->operator==(*o);
}

bool QCborMap__Iterator_OperatorNotEqual(QCborMap__Iterator* self, QCborMap__Iterator* o) {
	return const_cast<const QCborMap::Iterator*>(self)->operator!=(*o);
}

bool QCborMap__Iterator_OperatorLesser(QCborMap__Iterator* self, QCborMap__Iterator* other) {
	return const_cast<const QCborMap::Iterator*>(self)->operator<(*other);
}

bool QCborMap__Iterator_OperatorLesserOrEqual(QCborMap__Iterator* self, QCborMap__Iterator* other) {
	return const_cast<const QCborMap::Iterator*>(self)->operator<=(*other);
}

bool QCborMap__Iterator_OperatorGreater(QCborMap__Iterator* self, QCborMap__Iterator* other) {
	return const_cast<const QCborMap::Iterator*>(self)->operator>(*other);
}

bool QCborMap__Iterator_OperatorGreaterOrEqual(QCborMap__Iterator* self, QCborMap__Iterator* other) {
	return const_cast<const QCborMap::Iterator*>(self)->operator>=(*other);
}

bool QCborMap__Iterator_OperatorEqualWithQCborMapConstIterator(QCborMap__Iterator* self, QCborMap__ConstIterator* o) {
	return const_cast<const QCborMap::Iterator*>(self)->operator==(*o);
}

bool QCborMap__Iterator_OperatorNotEqualWithQCborMapConstIterator(QCborMap__Iterator* self, QCborMap__ConstIterator* o) {
	return const_cast<const QCborMap::Iterator*>(self)->operator!=(*o);
}

bool QCborMap__Iterator_OperatorLesserWithOther(QCborMap__Iterator* self, QCborMap__ConstIterator* other) {
	return const_cast<const QCborMap::Iterator*>(self)->operator<(*other);
}

bool QCborMap__Iterator_OperatorLesserOrEqualWithOther(QCborMap__Iterator* self, QCborMap__ConstIterator* other) {
	return const_cast<const QCborMap::Iterator*>(self)->operator<=(*other);
}

bool QCborMap__Iterator_OperatorGreaterWithOther(QCborMap__Iterator* self, QCborMap__ConstIterator* other) {
	return const_cast<const QCborMap::Iterator*>(self)->operator>(*other);
}

bool QCborMap__Iterator_OperatorGreaterOrEqualWithOther(QCborMap__Iterator* self, QCborMap__ConstIterator* other) {
	return const_cast<const QCborMap::Iterator*>(self)->operator>=(*other);
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

QCborMap__Iterator* QCborMap__Iterator_OperatorPlus(QCborMap__Iterator* self, size_t j) {
	QCborMap::Iterator ret = const_cast<const QCborMap::Iterator*>(self)->operator+(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

QCborMap__Iterator* QCborMap__Iterator_OperatorMinus(QCborMap__Iterator* self, size_t j) {
	QCborMap::Iterator ret = const_cast<const QCborMap::Iterator*>(self)->operator-(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::Iterator*>(new QCborMap::Iterator(ret));
}

size_t QCborMap__Iterator_OperatorMinusWithQCborMapIterator(QCborMap__Iterator* self, QCborMap__Iterator* j) {
	return const_cast<const QCborMap::Iterator*>(self)->operator-(*j);
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

QCborValueRef* QCborMap__ConstIterator_OperatorMinusGreater(QCborMap__ConstIterator* self) {
	return (QCborValueRef*) const_cast<const QCborMap::ConstIterator*>(self)->operator->();
}

QCborValue* QCborMap__ConstIterator_Key(QCborMap__ConstIterator* self) {
	QCborValue ret = const_cast<const QCborMap::ConstIterator*>(self)->key();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValueRef* QCborMap__ConstIterator_Value(QCborMap__ConstIterator* self) {
	QCborValueRef ret = const_cast<const QCborMap::ConstIterator*>(self)->value();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

bool QCborMap__ConstIterator_OperatorEqual(QCborMap__ConstIterator* self, QCborMap__Iterator* o) {
	return const_cast<const QCborMap::ConstIterator*>(self)->operator==(*o);
}

bool QCborMap__ConstIterator_OperatorNotEqual(QCborMap__ConstIterator* self, QCborMap__Iterator* o) {
	return const_cast<const QCborMap::ConstIterator*>(self)->operator!=(*o);
}

bool QCborMap__ConstIterator_OperatorLesser(QCborMap__ConstIterator* self, QCborMap__Iterator* other) {
	return const_cast<const QCborMap::ConstIterator*>(self)->operator<(*other);
}

bool QCborMap__ConstIterator_OperatorLesserOrEqual(QCborMap__ConstIterator* self, QCborMap__Iterator* other) {
	return const_cast<const QCborMap::ConstIterator*>(self)->operator<=(*other);
}

bool QCborMap__ConstIterator_OperatorGreater(QCborMap__ConstIterator* self, QCborMap__Iterator* other) {
	return const_cast<const QCborMap::ConstIterator*>(self)->operator>(*other);
}

bool QCborMap__ConstIterator_OperatorGreaterOrEqual(QCborMap__ConstIterator* self, QCborMap__Iterator* other) {
	return const_cast<const QCborMap::ConstIterator*>(self)->operator>=(*other);
}

bool QCborMap__ConstIterator_OperatorEqualWithQCborMapConstIterator(QCborMap__ConstIterator* self, QCborMap__ConstIterator* o) {
	return const_cast<const QCborMap::ConstIterator*>(self)->operator==(*o);
}

bool QCborMap__ConstIterator_OperatorNotEqualWithQCborMapConstIterator(QCborMap__ConstIterator* self, QCborMap__ConstIterator* o) {
	return const_cast<const QCborMap::ConstIterator*>(self)->operator!=(*o);
}

bool QCborMap__ConstIterator_OperatorLesserWithOther(QCborMap__ConstIterator* self, QCborMap__ConstIterator* other) {
	return const_cast<const QCborMap::ConstIterator*>(self)->operator<(*other);
}

bool QCborMap__ConstIterator_OperatorLesserOrEqualWithOther(QCborMap__ConstIterator* self, QCborMap__ConstIterator* other) {
	return const_cast<const QCborMap::ConstIterator*>(self)->operator<=(*other);
}

bool QCborMap__ConstIterator_OperatorGreaterWithOther(QCborMap__ConstIterator* self, QCborMap__ConstIterator* other) {
	return const_cast<const QCborMap::ConstIterator*>(self)->operator>(*other);
}

bool QCborMap__ConstIterator_OperatorGreaterOrEqualWithOther(QCborMap__ConstIterator* self, QCborMap__ConstIterator* other) {
	return const_cast<const QCborMap::ConstIterator*>(self)->operator>=(*other);
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

QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlus(QCborMap__ConstIterator* self, size_t j) {
	QCborMap::ConstIterator ret = const_cast<const QCborMap::ConstIterator*>(self)->operator+(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinus(QCborMap__ConstIterator* self, size_t j) {
	QCborMap::ConstIterator ret = const_cast<const QCborMap::ConstIterator*>(self)->operator-(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap::ConstIterator*>(new QCborMap::ConstIterator(ret));
}

size_t QCborMap__ConstIterator_OperatorMinusWithQCborMapConstIterator(QCborMap__ConstIterator* self, QCborMap__ConstIterator* j) {
	return const_cast<const QCborMap::ConstIterator*>(self)->operator-(*j);
}

void QCborMap__ConstIterator_Delete(QCborMap__ConstIterator* self) {
	delete self;
}

