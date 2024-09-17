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
#include "_cgo_export.h"

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

struct miqt_array* QJsonObject_Keys(const QJsonObject* self) {
	QStringList _ret = self->keys();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
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

QJsonValue* QJsonObject_Value(const QJsonObject* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QJsonValue(self->value(key_QString));
}

QJsonValue* QJsonObject_OperatorSubscript(const QJsonObject* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QJsonValue(self->operator[](key_QString));
}

QJsonValueRef* QJsonObject_OperatorSubscriptWithKey(QJsonObject* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QJsonValueRef(self->operator[](key_QString));
}

void QJsonObject_Remove(QJsonObject* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	self->remove(key_QString);
}

QJsonValue* QJsonObject_Take(QJsonObject* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QJsonValue(self->take(key_QString));
}

bool QJsonObject_Contains(const QJsonObject* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return self->contains(key_QString);
}

bool QJsonObject_OperatorEqual(const QJsonObject* self, QJsonObject* other) {
	return self->operator==(*other);
}

bool QJsonObject_OperatorNotEqual(const QJsonObject* self, QJsonObject* other) {
	return self->operator!=(*other);
}

QJsonObject__iterator* QJsonObject_Begin(QJsonObject* self) {
	return new QJsonObject::iterator(self->begin());
}

QJsonObject__const_iterator* QJsonObject_Begin2(const QJsonObject* self) {
	return new QJsonObject::const_iterator(self->begin());
}

QJsonObject__const_iterator* QJsonObject_ConstBegin(const QJsonObject* self) {
	return new QJsonObject::const_iterator(self->constBegin());
}

QJsonObject__iterator* QJsonObject_End(QJsonObject* self) {
	return new QJsonObject::iterator(self->end());
}

QJsonObject__const_iterator* QJsonObject_End2(const QJsonObject* self) {
	return new QJsonObject::const_iterator(self->end());
}

QJsonObject__const_iterator* QJsonObject_ConstEnd(const QJsonObject* self) {
	return new QJsonObject::const_iterator(self->constEnd());
}

QJsonObject__iterator* QJsonObject_Erase(QJsonObject* self, QJsonObject__iterator* it) {
	return new QJsonObject::iterator(self->erase(*it));
}

QJsonObject__iterator* QJsonObject_Find(QJsonObject* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QJsonObject::iterator(self->find(key_QString));
}

QJsonObject__const_iterator* QJsonObject_FindWithKey(const QJsonObject* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QJsonObject::const_iterator(self->find(key_QString));
}

QJsonObject__const_iterator* QJsonObject_ConstFind(const QJsonObject* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QJsonObject::const_iterator(self->constFind(key_QString));
}

QJsonObject__iterator* QJsonObject_Insert(QJsonObject* self, struct miqt_string* key, QJsonValue* value) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QJsonObject::iterator(self->insert(key_QString, *value));
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

struct miqt_string* QJsonObject__iterator_Key(const QJsonObject__iterator* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QJsonValueRef* QJsonObject__iterator_Value(const QJsonObject__iterator* self) {
	return new QJsonValueRef(self->value());
}

QJsonValueRef* QJsonObject__iterator_OperatorMultiply(const QJsonObject__iterator* self) {
	return new QJsonValueRef(self->operator*());
}

QJsonValueRefPtr* QJsonObject__iterator_OperatorMinusGreater(const QJsonObject__iterator* self) {
	return new QJsonValueRefPtr(self->operator->());
}

QJsonValueRef* QJsonObject__iterator_OperatorSubscript(QJsonObject__iterator* self, int j) {
	return new QJsonValueRef(self->operator[](static_cast<int>(j)));
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
	return new QJsonObject::iterator(self->operator++(static_cast<int>(param1)));
}

QJsonObject__iterator* QJsonObject__iterator_OperatorMinusMinus(QJsonObject__iterator* self, int param1) {
	return new QJsonObject::iterator(self->operator--(static_cast<int>(param1)));
}

QJsonObject__iterator* QJsonObject__iterator_OperatorPlus(const QJsonObject__iterator* self, int j) {
	return new QJsonObject::iterator(self->operator+(static_cast<int>(j)));
}

QJsonObject__iterator* QJsonObject__iterator_OperatorMinus(const QJsonObject__iterator* self, int j) {
	return new QJsonObject::iterator(self->operator-(static_cast<int>(j)));
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

struct miqt_string* QJsonObject__const_iterator_Key(const QJsonObject__const_iterator* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QJsonValue* QJsonObject__const_iterator_Value(const QJsonObject__const_iterator* self) {
	return new QJsonValue(self->value());
}

QJsonValue* QJsonObject__const_iterator_OperatorMultiply(const QJsonObject__const_iterator* self) {
	return new QJsonValue(self->operator*());
}

QJsonValuePtr* QJsonObject__const_iterator_OperatorMinusGreater(const QJsonObject__const_iterator* self) {
	return new QJsonValuePtr(self->operator->());
}

QJsonValue* QJsonObject__const_iterator_OperatorSubscript(QJsonObject__const_iterator* self, int j) {
	return new QJsonValue(self->operator[](static_cast<int>(j)));
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
	return new QJsonObject::const_iterator(self->operator++(static_cast<int>(param1)));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinusMinus(QJsonObject__const_iterator* self, int param1) {
	return new QJsonObject::const_iterator(self->operator--(static_cast<int>(param1)));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlus(const QJsonObject__const_iterator* self, int j) {
	return new QJsonObject::const_iterator(self->operator+(static_cast<int>(j)));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinus(const QJsonObject__const_iterator* self, int j) {
	return new QJsonObject::const_iterator(self->operator-(static_cast<int>(j)));
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

