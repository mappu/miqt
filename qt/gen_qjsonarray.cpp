#include <QJsonArray>
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonArray__const_iterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonArray__iterator
#include <QJsonValue>
#include <QJsonValuePtr>
#include <QJsonValueRef>
#include <QJsonValueRefPtr>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qjsonarray.h"
#include "gen_qjsonarray.h"
#include "_cgo_export.h"

QJsonArray* QJsonArray_new() {
	return new QJsonArray();
}

QJsonArray* QJsonArray_new2(QJsonArray* other) {
	return new QJsonArray(*other);
}

void QJsonArray_OperatorAssign(QJsonArray* self, QJsonArray* other) {
	self->operator=(*other);
}

QJsonArray* QJsonArray_FromStringList(struct miqt_array* /* of struct miqt_string* */ list) {
	QList<QString> list_QList;
	list_QList.reserve(list->len);
	miqt_string** list_arr = static_cast<miqt_string**>(list->data);
	for(size_t i = 0; i < list->len; ++i) {
		list_QList.push_back(QString::fromUtf8(& list_arr[i]->data, list_arr[i]->len));
	}
	return new QJsonArray(QJsonArray::fromStringList(list_QList));
}

int QJsonArray_Size(const QJsonArray* self) {
	return self->size();
}

int QJsonArray_Count(const QJsonArray* self) {
	return self->count();
}

bool QJsonArray_IsEmpty(const QJsonArray* self) {
	return self->isEmpty();
}

QJsonValue* QJsonArray_At(const QJsonArray* self, int i) {
	return new QJsonValue(self->at(static_cast<int>(i)));
}

QJsonValue* QJsonArray_First(const QJsonArray* self) {
	return new QJsonValue(self->first());
}

QJsonValue* QJsonArray_Last(const QJsonArray* self) {
	return new QJsonValue(self->last());
}

void QJsonArray_Prepend(QJsonArray* self, QJsonValue* value) {
	self->prepend(*value);
}

void QJsonArray_Append(QJsonArray* self, QJsonValue* value) {
	self->append(*value);
}

void QJsonArray_RemoveAt(QJsonArray* self, int i) {
	self->removeAt(static_cast<int>(i));
}

QJsonValue* QJsonArray_TakeAt(QJsonArray* self, int i) {
	return new QJsonValue(self->takeAt(static_cast<int>(i)));
}

void QJsonArray_RemoveFirst(QJsonArray* self) {
	self->removeFirst();
}

void QJsonArray_RemoveLast(QJsonArray* self) {
	self->removeLast();
}

void QJsonArray_Insert(QJsonArray* self, int i, QJsonValue* value) {
	self->insert(static_cast<int>(i), *value);
}

void QJsonArray_Replace(QJsonArray* self, int i, QJsonValue* value) {
	self->replace(static_cast<int>(i), *value);
}

bool QJsonArray_Contains(const QJsonArray* self, QJsonValue* element) {
	return self->contains(*element);
}

QJsonValueRef* QJsonArray_OperatorSubscript(QJsonArray* self, int i) {
	return new QJsonValueRef(self->operator[](static_cast<int>(i)));
}

QJsonValue* QJsonArray_OperatorSubscriptWithInt(const QJsonArray* self, int i) {
	return new QJsonValue(self->operator[](static_cast<int>(i)));
}

bool QJsonArray_OperatorEqual(const QJsonArray* self, QJsonArray* other) {
	return self->operator==(*other);
}

bool QJsonArray_OperatorNotEqual(const QJsonArray* self, QJsonArray* other) {
	return self->operator!=(*other);
}

void QJsonArray_Swap(QJsonArray* self, QJsonArray* other) {
	self->swap(*other);
}

QJsonArray__iterator* QJsonArray_Begin(QJsonArray* self) {
	return new QJsonArray::iterator(self->begin());
}

QJsonArray__const_iterator* QJsonArray_Begin2(const QJsonArray* self) {
	return new QJsonArray::const_iterator(self->begin());
}

QJsonArray__const_iterator* QJsonArray_ConstBegin(const QJsonArray* self) {
	return new QJsonArray::const_iterator(self->constBegin());
}

QJsonArray__const_iterator* QJsonArray_Cbegin(const QJsonArray* self) {
	return new QJsonArray::const_iterator(self->cbegin());
}

QJsonArray__iterator* QJsonArray_End(QJsonArray* self) {
	return new QJsonArray::iterator(self->end());
}

QJsonArray__const_iterator* QJsonArray_End2(const QJsonArray* self) {
	return new QJsonArray::const_iterator(self->end());
}

QJsonArray__const_iterator* QJsonArray_ConstEnd(const QJsonArray* self) {
	return new QJsonArray::const_iterator(self->constEnd());
}

QJsonArray__const_iterator* QJsonArray_Cend(const QJsonArray* self) {
	return new QJsonArray::const_iterator(self->cend());
}

QJsonArray__iterator* QJsonArray_Insert2(QJsonArray* self, QJsonArray__iterator* before, QJsonValue* value) {
	return new QJsonArray::iterator(self->insert(*before, *value));
}

QJsonArray__iterator* QJsonArray_Erase(QJsonArray* self, QJsonArray__iterator* it) {
	return new QJsonArray::iterator(self->erase(*it));
}

QJsonArray* QJsonArray_OperatorPlus(const QJsonArray* self, QJsonValue* v) {
	return new QJsonArray(self->operator+(*v));
}

QJsonArray* QJsonArray_OperatorPlusAssign(QJsonArray* self, QJsonValue* v) {
	QJsonArray& _ret = self->operator+=(*v);
	// Cast returned reference into pointer
	return &_ret;
}

QJsonArray* QJsonArray_OperatorShiftLeft(QJsonArray* self, QJsonValue* v) {
	QJsonArray& _ret = self->operator<<(*v);
	// Cast returned reference into pointer
	return &_ret;
}

void QJsonArray_PushBack(QJsonArray* self, QJsonValue* t) {
	self->push_back(*t);
}

void QJsonArray_PushFront(QJsonArray* self, QJsonValue* t) {
	self->push_front(*t);
}

void QJsonArray_PopFront(QJsonArray* self) {
	self->pop_front();
}

void QJsonArray_PopBack(QJsonArray* self) {
	self->pop_back();
}

bool QJsonArray_Empty(const QJsonArray* self) {
	return self->empty();
}

void QJsonArray_Delete(QJsonArray* self) {
	delete self;
}

QJsonArray__iterator* QJsonArray__iterator_new() {
	return new QJsonArray::iterator();
}

QJsonArray__iterator* QJsonArray__iterator_new2(QJsonArray* array, int index) {
	return new QJsonArray::iterator(array, static_cast<int>(index));
}

QJsonArray__iterator* QJsonArray__iterator_new3(QJsonArray__iterator* param1) {
	return new QJsonArray::iterator(*param1);
}

QJsonValueRef* QJsonArray__iterator_OperatorMultiply(const QJsonArray__iterator* self) {
	return new QJsonValueRef(self->operator*());
}

QJsonValueRefPtr* QJsonArray__iterator_OperatorMinusGreater(const QJsonArray__iterator* self) {
	return new QJsonValueRefPtr(self->operator->());
}

QJsonValueRef* QJsonArray__iterator_OperatorSubscript(const QJsonArray__iterator* self, int j) {
	return new QJsonValueRef(self->operator[](static_cast<int>(j)));
}

bool QJsonArray__iterator_OperatorEqual(const QJsonArray__iterator* self, QJsonArray__iterator* o) {
	return self->operator==(*o);
}

bool QJsonArray__iterator_OperatorNotEqual(const QJsonArray__iterator* self, QJsonArray__iterator* o) {
	return self->operator!=(*o);
}

bool QJsonArray__iterator_OperatorLesser(const QJsonArray__iterator* self, QJsonArray__iterator* other) {
	return self->operator<(*other);
}

bool QJsonArray__iterator_OperatorLesserOrEqual(const QJsonArray__iterator* self, QJsonArray__iterator* other) {
	return self->operator<=(*other);
}

bool QJsonArray__iterator_OperatorGreater(const QJsonArray__iterator* self, QJsonArray__iterator* other) {
	return self->operator>(*other);
}

bool QJsonArray__iterator_OperatorGreaterOrEqual(const QJsonArray__iterator* self, QJsonArray__iterator* other) {
	return self->operator>=(*other);
}

bool QJsonArray__iterator_OperatorEqualWithQJsonArrayconstIterator(const QJsonArray__iterator* self, QJsonArray__const_iterator* o) {
	return self->operator==(*o);
}

bool QJsonArray__iterator_OperatorNotEqualWithQJsonArrayconstIterator(const QJsonArray__iterator* self, QJsonArray__const_iterator* o) {
	return self->operator!=(*o);
}

bool QJsonArray__iterator_OperatorLesserWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other) {
	return self->operator<(*other);
}

bool QJsonArray__iterator_OperatorLesserOrEqualWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other) {
	return self->operator<=(*other);
}

bool QJsonArray__iterator_OperatorGreaterWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other) {
	return self->operator>(*other);
}

bool QJsonArray__iterator_OperatorGreaterOrEqualWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other) {
	return self->operator>=(*other);
}

QJsonArray__iterator* QJsonArray__iterator_OperatorPlusPlus(QJsonArray__iterator* self, int param1) {
	return new QJsonArray::iterator(self->operator++(static_cast<int>(param1)));
}

QJsonArray__iterator* QJsonArray__iterator_OperatorMinusMinus(QJsonArray__iterator* self, int param1) {
	return new QJsonArray::iterator(self->operator--(static_cast<int>(param1)));
}

QJsonArray__iterator* QJsonArray__iterator_OperatorPlus(const QJsonArray__iterator* self, int j) {
	return new QJsonArray::iterator(self->operator+(static_cast<int>(j)));
}

QJsonArray__iterator* QJsonArray__iterator_OperatorMinus(const QJsonArray__iterator* self, int j) {
	return new QJsonArray::iterator(self->operator-(static_cast<int>(j)));
}

int QJsonArray__iterator_OperatorMinusWithQJsonArrayiterator(const QJsonArray__iterator* self, QJsonArray__iterator* j) {
	return self->operator-(*j);
}

void QJsonArray__iterator_Delete(QJsonArray__iterator* self) {
	delete self;
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new() {
	return new QJsonArray::const_iterator();
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new2(QJsonArray* array, int index) {
	return new QJsonArray::const_iterator(array, static_cast<int>(index));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new3(QJsonArray__const_iterator* o) {
	return new QJsonArray::const_iterator(*o);
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new4(QJsonArray__iterator* o) {
	return new QJsonArray::const_iterator(*o);
}

QJsonValue* QJsonArray__const_iterator_OperatorMultiply(const QJsonArray__const_iterator* self) {
	return new QJsonValue(self->operator*());
}

QJsonValuePtr* QJsonArray__const_iterator_OperatorMinusGreater(const QJsonArray__const_iterator* self) {
	return new QJsonValuePtr(self->operator->());
}

QJsonValue* QJsonArray__const_iterator_OperatorSubscript(const QJsonArray__const_iterator* self, int j) {
	return new QJsonValue(self->operator[](static_cast<int>(j)));
}

bool QJsonArray__const_iterator_OperatorEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* o) {
	return self->operator==(*o);
}

bool QJsonArray__const_iterator_OperatorNotEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* o) {
	return self->operator!=(*o);
}

bool QJsonArray__const_iterator_OperatorLesser(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other) {
	return self->operator<(*other);
}

bool QJsonArray__const_iterator_OperatorLesserOrEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other) {
	return self->operator<=(*other);
}

bool QJsonArray__const_iterator_OperatorGreater(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other) {
	return self->operator>(*other);
}

bool QJsonArray__const_iterator_OperatorGreaterOrEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other) {
	return self->operator>=(*other);
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlusPlus(QJsonArray__const_iterator* self, int param1) {
	return new QJsonArray::const_iterator(self->operator++(static_cast<int>(param1)));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinusMinus(QJsonArray__const_iterator* self, int param1) {
	return new QJsonArray::const_iterator(self->operator--(static_cast<int>(param1)));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlus(const QJsonArray__const_iterator* self, int j) {
	return new QJsonArray::const_iterator(self->operator+(static_cast<int>(j)));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinus(const QJsonArray__const_iterator* self, int j) {
	return new QJsonArray::const_iterator(self->operator-(static_cast<int>(j)));
}

int QJsonArray__const_iterator_OperatorMinusWithQJsonArrayconstIterator(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* j) {
	return self->operator-(*j);
}

void QJsonArray__const_iterator_Delete(QJsonArray__const_iterator* self) {
	delete self;
}

