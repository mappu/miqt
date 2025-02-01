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
#include <qjsonarray.h>
#include "gen_qjsonarray.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QJsonArray* QJsonArray_new() {
	return new QJsonArray();
}

QJsonArray* QJsonArray_new2(QJsonArray* other) {
	return new QJsonArray(*other);
}

void QJsonArray_operatorAssign(QJsonArray* self, QJsonArray* other) {
	self->operator=(*other);
}

QJsonArray* QJsonArray_fromStringList(struct miqt_array /* of struct miqt_string */  list) {
	QStringList list_QList;
	list_QList.reserve(list.len);
	struct miqt_string* list_arr = static_cast<struct miqt_string*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
		list_QList.push_back(list_arr_i_QString);
	}
	return new QJsonArray(QJsonArray::fromStringList(list_QList));
}

int QJsonArray_size(const QJsonArray* self) {
	return self->size();
}

int QJsonArray_count(const QJsonArray* self) {
	return self->count();
}

bool QJsonArray_isEmpty(const QJsonArray* self) {
	return self->isEmpty();
}

QJsonValue* QJsonArray_at(const QJsonArray* self, int i) {
	return new QJsonValue(self->at(static_cast<int>(i)));
}

QJsonValue* QJsonArray_first(const QJsonArray* self) {
	return new QJsonValue(self->first());
}

QJsonValue* QJsonArray_last(const QJsonArray* self) {
	return new QJsonValue(self->last());
}

void QJsonArray_prepend(QJsonArray* self, QJsonValue* value) {
	self->prepend(*value);
}

void QJsonArray_append(QJsonArray* self, QJsonValue* value) {
	self->append(*value);
}

void QJsonArray_removeAt(QJsonArray* self, int i) {
	self->removeAt(static_cast<int>(i));
}

QJsonValue* QJsonArray_takeAt(QJsonArray* self, int i) {
	return new QJsonValue(self->takeAt(static_cast<int>(i)));
}

void QJsonArray_removeFirst(QJsonArray* self) {
	self->removeFirst();
}

void QJsonArray_removeLast(QJsonArray* self) {
	self->removeLast();
}

void QJsonArray_insert(QJsonArray* self, int i, QJsonValue* value) {
	self->insert(static_cast<int>(i), *value);
}

void QJsonArray_replace(QJsonArray* self, int i, QJsonValue* value) {
	self->replace(static_cast<int>(i), *value);
}

bool QJsonArray_contains(const QJsonArray* self, QJsonValue* element) {
	return self->contains(*element);
}

QJsonValueRef* QJsonArray_operatorSubscript(QJsonArray* self, int i) {
	return new QJsonValueRef(self->operator[](static_cast<int>(i)));
}

QJsonValue* QJsonArray_operatorSubscriptWithInt(const QJsonArray* self, int i) {
	return new QJsonValue(self->operator[](static_cast<int>(i)));
}

bool QJsonArray_operatorEqual(const QJsonArray* self, QJsonArray* other) {
	return (*self == *other);
}

bool QJsonArray_operatorNotEqual(const QJsonArray* self, QJsonArray* other) {
	return (*self != *other);
}

void QJsonArray_swap(QJsonArray* self, QJsonArray* other) {
	self->swap(*other);
}

QJsonArray__iterator* QJsonArray_begin(QJsonArray* self) {
	return new QJsonArray::iterator(self->begin());
}

QJsonArray__const_iterator* QJsonArray_begin2(const QJsonArray* self) {
	return new QJsonArray::const_iterator(self->begin());
}

QJsonArray__const_iterator* QJsonArray_constBegin(const QJsonArray* self) {
	return new QJsonArray::const_iterator(self->constBegin());
}

QJsonArray__const_iterator* QJsonArray_cbegin(const QJsonArray* self) {
	return new QJsonArray::const_iterator(self->cbegin());
}

QJsonArray__iterator* QJsonArray_end(QJsonArray* self) {
	return new QJsonArray::iterator(self->end());
}

QJsonArray__const_iterator* QJsonArray_end2(const QJsonArray* self) {
	return new QJsonArray::const_iterator(self->end());
}

QJsonArray__const_iterator* QJsonArray_constEnd(const QJsonArray* self) {
	return new QJsonArray::const_iterator(self->constEnd());
}

QJsonArray__const_iterator* QJsonArray_cend(const QJsonArray* self) {
	return new QJsonArray::const_iterator(self->cend());
}

QJsonArray__iterator* QJsonArray_insert2(QJsonArray* self, QJsonArray__iterator* before, QJsonValue* value) {
	return new QJsonArray::iterator(self->insert(*before, *value));
}

QJsonArray__iterator* QJsonArray_erase(QJsonArray* self, QJsonArray__iterator* it) {
	return new QJsonArray::iterator(self->erase(*it));
}

QJsonArray* QJsonArray_operatorPlus(const QJsonArray* self, QJsonValue* v) {
	return new QJsonArray(self->operator+(*v));
}

QJsonArray* QJsonArray_operatorPlusAssign(QJsonArray* self, QJsonValue* v) {
	QJsonArray& _ret = self->operator+=(*v);
	// Cast returned reference into pointer
	return &_ret;
}

QJsonArray* QJsonArray_operatorShiftLeft(QJsonArray* self, QJsonValue* v) {
	QJsonArray& _ret = self->operator<<(*v);
	// Cast returned reference into pointer
	return &_ret;
}

void QJsonArray_pushBack(QJsonArray* self, QJsonValue* t) {
	self->push_back(*t);
}

void QJsonArray_pushFront(QJsonArray* self, QJsonValue* t) {
	self->push_front(*t);
}

void QJsonArray_popFront(QJsonArray* self) {
	self->pop_front();
}

void QJsonArray_popBack(QJsonArray* self) {
	self->pop_back();
}

bool QJsonArray_empty(const QJsonArray* self) {
	return self->empty();
}

void QJsonArray_delete(QJsonArray* self) {
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

QJsonValueRef* QJsonArray__iterator_operatorMultiply(const QJsonArray__iterator* self) {
	return new QJsonValueRef(self->operator*());
}

QJsonValueRefPtr* QJsonArray__iterator_operatorMinusGreater(const QJsonArray__iterator* self) {
	return new QJsonValueRefPtr(self->operator->());
}

QJsonValueRef* QJsonArray__iterator_operatorSubscript(const QJsonArray__iterator* self, int j) {
	return new QJsonValueRef(self->operator[](static_cast<int>(j)));
}

bool QJsonArray__iterator_operatorEqual(const QJsonArray__iterator* self, QJsonArray__iterator* o) {
	return (*self == *o);
}

bool QJsonArray__iterator_operatorNotEqual(const QJsonArray__iterator* self, QJsonArray__iterator* o) {
	return (*self != *o);
}

bool QJsonArray__iterator_operatorLesser(const QJsonArray__iterator* self, QJsonArray__iterator* other) {
	return (*self < *other);
}

bool QJsonArray__iterator_operatorLesserOrEqual(const QJsonArray__iterator* self, QJsonArray__iterator* other) {
	return (*self <= *other);
}

bool QJsonArray__iterator_operatorGreater(const QJsonArray__iterator* self, QJsonArray__iterator* other) {
	return (*self > *other);
}

bool QJsonArray__iterator_operatorGreaterOrEqual(const QJsonArray__iterator* self, QJsonArray__iterator* other) {
	return (*self >= *other);
}

bool QJsonArray__iterator_operatorEqualWithQJsonArrayconstIterator(const QJsonArray__iterator* self, QJsonArray__const_iterator* o) {
	return (*self == *o);
}

bool QJsonArray__iterator_operatorNotEqualWithQJsonArrayconstIterator(const QJsonArray__iterator* self, QJsonArray__const_iterator* o) {
	return (*self != *o);
}

bool QJsonArray__iterator_operatorLesserWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other) {
	return (*self < *other);
}

bool QJsonArray__iterator_operatorLesserOrEqualWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other) {
	return (*self <= *other);
}

bool QJsonArray__iterator_operatorGreaterWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other) {
	return (*self > *other);
}

bool QJsonArray__iterator_operatorGreaterOrEqualWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other) {
	return (*self >= *other);
}

QJsonArray__iterator* QJsonArray__iterator_operatorPlusPlus(QJsonArray__iterator* self) {
	QJsonArray::iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QJsonArray__iterator* QJsonArray__iterator_operatorPlusPlusWithInt(QJsonArray__iterator* self, int param1) {
	return new QJsonArray::iterator(self->operator++(static_cast<int>(param1)));
}

QJsonArray__iterator* QJsonArray__iterator_operatorMinusMinus(QJsonArray__iterator* self) {
	QJsonArray::iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QJsonArray__iterator* QJsonArray__iterator_operatorMinusMinusWithInt(QJsonArray__iterator* self, int param1) {
	return new QJsonArray::iterator(self->operator--(static_cast<int>(param1)));
}

QJsonArray__iterator* QJsonArray__iterator_operatorPlusAssign(QJsonArray__iterator* self, int j) {
	QJsonArray::iterator& _ret = self->operator+=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QJsonArray__iterator* QJsonArray__iterator_operatorMinusAssign(QJsonArray__iterator* self, int j) {
	QJsonArray::iterator& _ret = self->operator-=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QJsonArray__iterator* QJsonArray__iterator_operatorPlus(const QJsonArray__iterator* self, int j) {
	return new QJsonArray::iterator(self->operator+(static_cast<int>(j)));
}

QJsonArray__iterator* QJsonArray__iterator_operatorMinus(const QJsonArray__iterator* self, int j) {
	return new QJsonArray::iterator(self->operator-(static_cast<int>(j)));
}

int QJsonArray__iterator_operatorMinusWithQJsonArrayiterator(const QJsonArray__iterator* self, QJsonArray__iterator* j) {
	return self->operator-(*j);
}

void QJsonArray__iterator_delete(QJsonArray__iterator* self) {
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

QJsonValue* QJsonArray__const_iterator_operatorMultiply(const QJsonArray__const_iterator* self) {
	return new QJsonValue(self->operator*());
}

QJsonValuePtr* QJsonArray__const_iterator_operatorMinusGreater(const QJsonArray__const_iterator* self) {
	return new QJsonValuePtr(self->operator->());
}

QJsonValue* QJsonArray__const_iterator_operatorSubscript(const QJsonArray__const_iterator* self, int j) {
	return new QJsonValue(self->operator[](static_cast<int>(j)));
}

bool QJsonArray__const_iterator_operatorEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* o) {
	return (*self == *o);
}

bool QJsonArray__const_iterator_operatorNotEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* o) {
	return (*self != *o);
}

bool QJsonArray__const_iterator_operatorLesser(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other) {
	return (*self < *other);
}

bool QJsonArray__const_iterator_operatorLesserOrEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other) {
	return (*self <= *other);
}

bool QJsonArray__const_iterator_operatorGreater(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other) {
	return (*self > *other);
}

bool QJsonArray__const_iterator_operatorGreaterOrEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other) {
	return (*self >= *other);
}

QJsonArray__const_iterator* QJsonArray__const_iterator_operatorPlusPlus(QJsonArray__const_iterator* self) {
	QJsonArray::const_iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QJsonArray__const_iterator* QJsonArray__const_iterator_operatorPlusPlusWithInt(QJsonArray__const_iterator* self, int param1) {
	return new QJsonArray::const_iterator(self->operator++(static_cast<int>(param1)));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_operatorMinusMinus(QJsonArray__const_iterator* self) {
	QJsonArray::const_iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QJsonArray__const_iterator* QJsonArray__const_iterator_operatorMinusMinusWithInt(QJsonArray__const_iterator* self, int param1) {
	return new QJsonArray::const_iterator(self->operator--(static_cast<int>(param1)));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_operatorPlusAssign(QJsonArray__const_iterator* self, int j) {
	QJsonArray::const_iterator& _ret = self->operator+=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QJsonArray__const_iterator* QJsonArray__const_iterator_operatorMinusAssign(QJsonArray__const_iterator* self, int j) {
	QJsonArray::const_iterator& _ret = self->operator-=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QJsonArray__const_iterator* QJsonArray__const_iterator_operatorPlus(const QJsonArray__const_iterator* self, int j) {
	return new QJsonArray::const_iterator(self->operator+(static_cast<int>(j)));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_operatorMinus(const QJsonArray__const_iterator* self, int j) {
	return new QJsonArray::const_iterator(self->operator-(static_cast<int>(j)));
}

int QJsonArray__const_iterator_operatorMinusWithQJsonArrayconstIterator(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* j) {
	return self->operator-(*j);
}

void QJsonArray__const_iterator_delete(QJsonArray__const_iterator* self) {
	delete self;
}

