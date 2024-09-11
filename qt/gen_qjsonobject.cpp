#include <QJsonObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__const_iterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__iterator
#include <QJsonValue>
#include <QJsonValuePtr>
#include <QJsonValueRef>
#include <QJsonValueRefPtr>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qjsonobject.h"

#include "gen_qjsonobject.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QJsonObject* QJsonObject_new() {
	return new QJsonObject();
}

QJsonObject* QJsonObject_new2(QJsonObject* other) {
	return new QJsonObject(*other);
}

void QJsonObject_OperatorAssign(QJsonObject* self, QJsonObject* other) {
	self->operator=(*other);
}

void QJsonObject_Swap(QJsonObject* self, QJsonObject* other) {
	self->swap(*other);
}

void QJsonObject_Keys(const QJsonObject* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = self->keys();
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

int QJsonObject_Size(const QJsonObject* self) {
	return self->size();
}

int QJsonObject_Count(const QJsonObject* self) {
	return self->count();
}

int QJsonObject_Length(const QJsonObject* self) {
	return self->length();
}

bool QJsonObject_IsEmpty(const QJsonObject* self) {
	return self->isEmpty();
}

QJsonValue* QJsonObject_Value(const QJsonObject* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QJsonValue ret = self->value(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QJsonValue* QJsonObject_OperatorSubscript(const QJsonObject* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QJsonValue ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QJsonValueRef* QJsonObject_OperatorSubscriptWithKey(QJsonObject* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QJsonValueRef ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValueRef*>(new QJsonValueRef(ret));
}

void QJsonObject_Remove(QJsonObject* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	self->remove(key_QString);
}

QJsonValue* QJsonObject_Take(QJsonObject* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QJsonValue ret = self->take(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

bool QJsonObject_Contains(const QJsonObject* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return self->contains(key_QString);
}

bool QJsonObject_OperatorEqual(const QJsonObject* self, QJsonObject* other) {
	return self->operator==(*other);
}

bool QJsonObject_OperatorNotEqual(const QJsonObject* self, QJsonObject* other) {
	return self->operator!=(*other);
}

QJsonObject__iterator* QJsonObject_Begin(QJsonObject* self) {
	QJsonObject::iterator ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::iterator*>(new QJsonObject::iterator(ret));
}

QJsonObject__const_iterator* QJsonObject_Begin2(const QJsonObject* self) {
	QJsonObject::const_iterator ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::const_iterator*>(new QJsonObject::const_iterator(ret));
}

QJsonObject__const_iterator* QJsonObject_ConstBegin(const QJsonObject* self) {
	QJsonObject::const_iterator ret = self->constBegin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::const_iterator*>(new QJsonObject::const_iterator(ret));
}

QJsonObject__iterator* QJsonObject_End(QJsonObject* self) {
	QJsonObject::iterator ret = self->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::iterator*>(new QJsonObject::iterator(ret));
}

QJsonObject__const_iterator* QJsonObject_End2(const QJsonObject* self) {
	QJsonObject::const_iterator ret = self->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::const_iterator*>(new QJsonObject::const_iterator(ret));
}

QJsonObject__const_iterator* QJsonObject_ConstEnd(const QJsonObject* self) {
	QJsonObject::const_iterator ret = self->constEnd();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::const_iterator*>(new QJsonObject::const_iterator(ret));
}

QJsonObject__iterator* QJsonObject_Erase(QJsonObject* self, QJsonObject__iterator* it) {
	QJsonObject::iterator ret = self->erase(*it);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::iterator*>(new QJsonObject::iterator(ret));
}

QJsonObject__iterator* QJsonObject_Find(QJsonObject* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QJsonObject::iterator ret = self->find(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::iterator*>(new QJsonObject::iterator(ret));
}

QJsonObject__const_iterator* QJsonObject_FindWithKey(const QJsonObject* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QJsonObject::const_iterator ret = self->find(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::const_iterator*>(new QJsonObject::const_iterator(ret));
}

QJsonObject__const_iterator* QJsonObject_ConstFind(const QJsonObject* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QJsonObject::const_iterator ret = self->constFind(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::const_iterator*>(new QJsonObject::const_iterator(ret));
}

QJsonObject__iterator* QJsonObject_Insert(QJsonObject* self, const char* key, size_t key_Strlen, QJsonValue* value) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QJsonObject::iterator ret = self->insert(key_QString, *value);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::iterator*>(new QJsonObject::iterator(ret));
}

bool QJsonObject_Empty(const QJsonObject* self) {
	return self->empty();
}

void QJsonObject_Delete(QJsonObject* self) {
	delete self;
}

QJsonObject__iterator* QJsonObject__iterator_new() {
	return new QJsonObject::iterator();
}

QJsonObject__iterator* QJsonObject__iterator_new2(QJsonObject* obj, int index) {
	return new QJsonObject::iterator(obj, static_cast<int>(index));
}

QJsonObject__iterator* QJsonObject__iterator_new3(QJsonObject__iterator* param1) {
	return new QJsonObject::iterator(*param1);
}

void QJsonObject__iterator_Key(const QJsonObject__iterator* self, char** _out, int* _out_Strlen) {
	QString ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QJsonValueRef* QJsonObject__iterator_Value(const QJsonObject__iterator* self) {
	QJsonValueRef ret = self->value();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValueRef*>(new QJsonValueRef(ret));
}

QJsonValueRef* QJsonObject__iterator_OperatorMultiply(const QJsonObject__iterator* self) {
	QJsonValueRef ret = self->operator*();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValueRef*>(new QJsonValueRef(ret));
}

QJsonValueRefPtr* QJsonObject__iterator_OperatorMinusGreater(const QJsonObject__iterator* self) {
	QJsonValueRefPtr ret = self->operator->();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValueRefPtr*>(new QJsonValueRefPtr(ret));
}

QJsonValueRef* QJsonObject__iterator_OperatorSubscript(QJsonObject__iterator* self, int j) {
	QJsonValueRef ret = self->operator[](static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValueRef*>(new QJsonValueRef(ret));
}

bool QJsonObject__iterator_OperatorEqual(const QJsonObject__iterator* self, QJsonObject__iterator* other) {
	return self->operator==(*other);
}

bool QJsonObject__iterator_OperatorNotEqual(const QJsonObject__iterator* self, QJsonObject__iterator* other) {
	return self->operator!=(*other);
}

bool QJsonObject__iterator_OperatorLesser(const QJsonObject__iterator* self, QJsonObject__iterator* other) {
	return self->operator<(*other);
}

bool QJsonObject__iterator_OperatorLesserOrEqual(const QJsonObject__iterator* self, QJsonObject__iterator* other) {
	return self->operator<=(*other);
}

bool QJsonObject__iterator_OperatorGreater(const QJsonObject__iterator* self, QJsonObject__iterator* other) {
	return self->operator>(*other);
}

bool QJsonObject__iterator_OperatorGreaterOrEqual(const QJsonObject__iterator* self, QJsonObject__iterator* other) {
	return self->operator>=(*other);
}

QJsonObject__iterator* QJsonObject__iterator_OperatorPlusPlus(QJsonObject__iterator* self, int param1) {
	QJsonObject::iterator ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::iterator*>(new QJsonObject::iterator(ret));
}

QJsonObject__iterator* QJsonObject__iterator_OperatorMinusMinus(QJsonObject__iterator* self, int param1) {
	QJsonObject::iterator ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::iterator*>(new QJsonObject::iterator(ret));
}

QJsonObject__iterator* QJsonObject__iterator_OperatorPlus(const QJsonObject__iterator* self, int j) {
	QJsonObject::iterator ret = self->operator+(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::iterator*>(new QJsonObject::iterator(ret));
}

QJsonObject__iterator* QJsonObject__iterator_OperatorMinus(const QJsonObject__iterator* self, int j) {
	QJsonObject::iterator ret = self->operator-(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::iterator*>(new QJsonObject::iterator(ret));
}

int QJsonObject__iterator_OperatorMinusWithQJsonObjectiterator(const QJsonObject__iterator* self, QJsonObject__iterator* j) {
	return self->operator-(*j);
}

bool QJsonObject__iterator_OperatorEqualWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other) {
	return self->operator==(*other);
}

bool QJsonObject__iterator_OperatorNotEqualWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other) {
	return self->operator!=(*other);
}

bool QJsonObject__iterator_OperatorLesserWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other) {
	return self->operator<(*other);
}

bool QJsonObject__iterator_OperatorLesserOrEqualWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other) {
	return self->operator<=(*other);
}

bool QJsonObject__iterator_OperatorGreaterWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other) {
	return self->operator>(*other);
}

bool QJsonObject__iterator_OperatorGreaterOrEqualWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other) {
	return self->operator>=(*other);
}

void QJsonObject__iterator_Delete(QJsonObject__iterator* self) {
	delete self;
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new() {
	return new QJsonObject::const_iterator();
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new2(QJsonObject* obj, int index) {
	return new QJsonObject::const_iterator(obj, static_cast<int>(index));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new3(QJsonObject__iterator* other) {
	return new QJsonObject::const_iterator(*other);
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new4(QJsonObject__const_iterator* param1) {
	return new QJsonObject::const_iterator(*param1);
}

void QJsonObject__const_iterator_Key(const QJsonObject__const_iterator* self, char** _out, int* _out_Strlen) {
	QString ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QJsonValue* QJsonObject__const_iterator_Value(const QJsonObject__const_iterator* self) {
	QJsonValue ret = self->value();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QJsonValue* QJsonObject__const_iterator_OperatorMultiply(const QJsonObject__const_iterator* self) {
	QJsonValue ret = self->operator*();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QJsonValuePtr* QJsonObject__const_iterator_OperatorMinusGreater(const QJsonObject__const_iterator* self) {
	QJsonValuePtr ret = self->operator->();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValuePtr*>(new QJsonValuePtr(ret));
}

QJsonValue* QJsonObject__const_iterator_OperatorSubscript(QJsonObject__const_iterator* self, int j) {
	QJsonValue ret = self->operator[](static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

bool QJsonObject__const_iterator_OperatorEqual(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other) {
	return self->operator==(*other);
}

bool QJsonObject__const_iterator_OperatorNotEqual(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other) {
	return self->operator!=(*other);
}

bool QJsonObject__const_iterator_OperatorLesser(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other) {
	return self->operator<(*other);
}

bool QJsonObject__const_iterator_OperatorLesserOrEqual(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other) {
	return self->operator<=(*other);
}

bool QJsonObject__const_iterator_OperatorGreater(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other) {
	return self->operator>(*other);
}

bool QJsonObject__const_iterator_OperatorGreaterOrEqual(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other) {
	return self->operator>=(*other);
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlusPlus(QJsonObject__const_iterator* self, int param1) {
	QJsonObject::const_iterator ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::const_iterator*>(new QJsonObject::const_iterator(ret));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinusMinus(QJsonObject__const_iterator* self, int param1) {
	QJsonObject::const_iterator ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::const_iterator*>(new QJsonObject::const_iterator(ret));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlus(const QJsonObject__const_iterator* self, int j) {
	QJsonObject::const_iterator ret = self->operator+(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::const_iterator*>(new QJsonObject::const_iterator(ret));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinus(const QJsonObject__const_iterator* self, int j) {
	QJsonObject::const_iterator ret = self->operator-(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject::const_iterator*>(new QJsonObject::const_iterator(ret));
}

int QJsonObject__const_iterator_OperatorMinusWithQJsonObjectconstIterator(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* j) {
	return self->operator-(*j);
}

bool QJsonObject__const_iterator_OperatorEqualWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other) {
	return self->operator==(*other);
}

bool QJsonObject__const_iterator_OperatorNotEqualWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other) {
	return self->operator!=(*other);
}

bool QJsonObject__const_iterator_OperatorLesserWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other) {
	return self->operator<(*other);
}

bool QJsonObject__const_iterator_OperatorLesserOrEqualWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other) {
	return self->operator<=(*other);
}

bool QJsonObject__const_iterator_OperatorGreaterWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other) {
	return self->operator>(*other);
}

bool QJsonObject__const_iterator_OperatorGreaterOrEqualWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other) {
	return self->operator>=(*other);
}

void QJsonObject__const_iterator_Delete(QJsonObject__const_iterator* self) {
	delete self;
}

