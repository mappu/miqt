#include "gen_qjsonobject.h"
#include "qjsonobject.h"

#include <QJsonObject>
#include <QJsonValue>
#include <QJsonValueRef>
#include <QList>
#include <QString>


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

void QJsonObject_Keys(QJsonObject* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->keys();
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

int QJsonObject_Size(QJsonObject* self) {
	return self->size();
}

int QJsonObject_Count(QJsonObject* self) {
	return self->count();
}

int QJsonObject_Length(QJsonObject* self) {
	return self->length();
}

bool QJsonObject_IsEmpty(QJsonObject* self) {
	return self->isEmpty();
}

QJsonValue* QJsonObject_Value(QJsonObject* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QJsonValue ret = self->value(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QJsonValue* QJsonObject_OperatorSubscript(QJsonObject* self, const char* key, size_t key_Strlen) {
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

bool QJsonObject_Contains(QJsonObject* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return self->contains(key_QString);
}

bool QJsonObject_OperatorEqual(QJsonObject* self, QJsonObject* other) {
	return self->operator==(*other);
}

bool QJsonObject_OperatorNotEqual(QJsonObject* self, QJsonObject* other) {
	return self->operator!=(*other);
}

bool QJsonObject_Empty(QJsonObject* self) {
	return self->empty();
}

void QJsonObject_Delete(QJsonObject* self) {
	delete self;
}

