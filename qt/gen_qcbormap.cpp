#include "gen_qcbormap.h"
#include "qcbormap.h"

#include <QCborMap>
#include <QCborValue>
#include <QCborValueRef>
#include <QJsonObject>
#include <QList>
#include <QString>


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
	QCborValue ret = self->toCborValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

size_t QCborMap_Size(QCborMap* self) {
	return self->size();
}

bool QCborMap_IsEmpty(QCborMap* self) {
	return self->isEmpty();
}

void QCborMap_Clear(QCborMap* self) {
	self->clear();
}

void QCborMap_Keys(QCborMap* self, QCborValue*** _out, size_t* _out_len) {
	QVector<QCborValue> ret = self->keys();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QCborValue** __out = static_cast<QCborValue**>(malloc(sizeof(QCborValue**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QCborValue(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QCborValue* QCborMap_Value(QCborMap* self, int64_t key) {
	QCborValue ret = self->value((qint64)(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_ValueWithKey(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborValue ret = self->value(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_Value2(QCborMap* self, QCborValue* key) {
	QCborValue ret = self->value(*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_OperatorSubscript(QCborMap* self, int64_t key) {
	QCborValue ret = self->operator[]((qint64)(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_OperatorSubscriptWithKey(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborValue ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_OperatorSubscript2(QCborMap* self, QCborValue* key) {
	QCborValue ret = self->operator[](*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValueRef* QCborMap_OperatorSubscript3(QCborMap* self, int64_t key) {
	QCborValueRef ret = self->operator[]((qint64)(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

QCborValueRef* QCborMap_OperatorSubscript4(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborValueRef ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

QCborValueRef* QCborMap_OperatorSubscript5(QCborMap* self, QCborValue* key) {
	QCborValueRef ret = self->operator[](*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

QCborValue* QCborMap_Take(QCborMap* self, int64_t key) {
	QCborValue ret = self->take((qint64)(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_TakeWithKey(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborValue ret = self->take(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborMap_Take2(QCborMap* self, QCborValue* key) {
	QCborValue ret = self->take(*key);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

void QCborMap_Remove(QCborMap* self, int64_t key) {
	self->remove((qint64)(key));
}

void QCborMap_RemoveWithKey(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	self->remove(key_QString);
}

void QCborMap_Remove2(QCborMap* self, QCborValue* key) {
	self->remove(*key);
}

bool QCborMap_Contains(QCborMap* self, int64_t key) {
	return self->contains((qint64)(key));
}

bool QCborMap_ContainsWithKey(QCborMap* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return self->contains(key_QString);
}

bool QCborMap_Contains2(QCborMap* self, QCborValue* key) {
	return self->contains(*key);
}

int QCborMap_Compare(QCborMap* self, QCborMap* other) {
	return self->compare(*other);
}

bool QCborMap_OperatorEqual(QCborMap* self, QCborMap* other) {
	return self->operator==(*other);
}

bool QCborMap_OperatorNotEqual(QCborMap* self, QCborMap* other) {
	return self->operator!=(*other);
}

bool QCborMap_OperatorLesser(QCborMap* self, QCborMap* other) {
	return self->operator<(*other);
}

bool QCborMap_Empty(QCborMap* self) {
	return self->empty();
}

QCborMap* QCborMap_FromJsonObject(QJsonObject* o) {
	QCborMap ret = QCborMap::fromJsonObject(*o);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap*>(new QCborMap(ret));
}

QJsonObject* QCborMap_ToJsonObject(QCborMap* self) {
	QJsonObject ret = self->toJsonObject();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(ret));
}

void QCborMap_Delete(QCborMap* self) {
	delete self;
}

