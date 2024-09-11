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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QJsonArray* QJsonArray_new() {
	return new QJsonArray();
}

QJsonArray* QJsonArray_new2(QJsonArray* other) {
	return new QJsonArray(*other);
}

void QJsonArray_OperatorAssign(QJsonArray* self, QJsonArray* other) {
	self->operator=(*other);
}

QJsonArray* QJsonArray_FromStringList(char** list, uint64_t* list_Lengths, size_t list_len) {
	QList<QString> list_QList;
	list_QList.reserve(list_len);
	for(size_t i = 0; i < list_len; ++i) {
		list_QList.push_back(QString::fromUtf8(list[i], list_Lengths[i]));
	}
	QJsonArray ret = QJsonArray::fromStringList(list_QList);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray*>(new QJsonArray(ret));
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
	QJsonValue ret = self->at(static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QJsonValue* QJsonArray_First(const QJsonArray* self) {
	QJsonValue ret = self->first();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QJsonValue* QJsonArray_Last(const QJsonArray* self) {
	QJsonValue ret = self->last();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
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
	QJsonValue ret = self->takeAt(static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
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
	QJsonValueRef ret = self->operator[](static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValueRef*>(new QJsonValueRef(ret));
}

QJsonValue* QJsonArray_OperatorSubscriptWithInt(const QJsonArray* self, int i) {
	QJsonValue ret = self->operator[](static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
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
	QJsonArray::iterator ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::iterator*>(new QJsonArray::iterator(ret));
}

QJsonArray__const_iterator* QJsonArray_Begin2(const QJsonArray* self) {
	QJsonArray::const_iterator ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::const_iterator*>(new QJsonArray::const_iterator(ret));
}

QJsonArray__const_iterator* QJsonArray_ConstBegin(const QJsonArray* self) {
	QJsonArray::const_iterator ret = self->constBegin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::const_iterator*>(new QJsonArray::const_iterator(ret));
}

QJsonArray__const_iterator* QJsonArray_Cbegin(const QJsonArray* self) {
	QJsonArray::const_iterator ret = self->cbegin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::const_iterator*>(new QJsonArray::const_iterator(ret));
}

QJsonArray__iterator* QJsonArray_End(QJsonArray* self) {
	QJsonArray::iterator ret = self->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::iterator*>(new QJsonArray::iterator(ret));
}

QJsonArray__const_iterator* QJsonArray_End2(const QJsonArray* self) {
	QJsonArray::const_iterator ret = self->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::const_iterator*>(new QJsonArray::const_iterator(ret));
}

QJsonArray__const_iterator* QJsonArray_ConstEnd(const QJsonArray* self) {
	QJsonArray::const_iterator ret = self->constEnd();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::const_iterator*>(new QJsonArray::const_iterator(ret));
}

QJsonArray__const_iterator* QJsonArray_Cend(const QJsonArray* self) {
	QJsonArray::const_iterator ret = self->cend();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::const_iterator*>(new QJsonArray::const_iterator(ret));
}

QJsonArray__iterator* QJsonArray_Insert2(QJsonArray* self, QJsonArray__iterator* before, QJsonValue* value) {
	QJsonArray::iterator ret = self->insert(*before, *value);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::iterator*>(new QJsonArray::iterator(ret));
}

QJsonArray__iterator* QJsonArray_Erase(QJsonArray* self, QJsonArray__iterator* it) {
	QJsonArray::iterator ret = self->erase(*it);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::iterator*>(new QJsonArray::iterator(ret));
}

QJsonArray* QJsonArray_OperatorPlus(const QJsonArray* self, QJsonValue* v) {
	QJsonArray ret = self->operator+(*v);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray*>(new QJsonArray(ret));
}

QJsonArray* QJsonArray_OperatorPlusAssign(QJsonArray* self, QJsonValue* v) {
	QJsonArray& ret = self->operator+=(*v);
	// Cast returned reference into pointer
	return &ret;
}

QJsonArray* QJsonArray_OperatorShiftLeft(QJsonArray* self, QJsonValue* v) {
	QJsonArray& ret = self->operator<<(*v);
	// Cast returned reference into pointer
	return &ret;
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
	QJsonValueRef ret = self->operator*();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValueRef*>(new QJsonValueRef(ret));
}

QJsonValueRefPtr* QJsonArray__iterator_OperatorMinusGreater(const QJsonArray__iterator* self) {
	QJsonValueRefPtr ret = self->operator->();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValueRefPtr*>(new QJsonValueRefPtr(ret));
}

QJsonValueRef* QJsonArray__iterator_OperatorSubscript(const QJsonArray__iterator* self, int j) {
	QJsonValueRef ret = self->operator[](static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValueRef*>(new QJsonValueRef(ret));
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
	QJsonArray::iterator ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::iterator*>(new QJsonArray::iterator(ret));
}

QJsonArray__iterator* QJsonArray__iterator_OperatorMinusMinus(QJsonArray__iterator* self, int param1) {
	QJsonArray::iterator ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::iterator*>(new QJsonArray::iterator(ret));
}

QJsonArray__iterator* QJsonArray__iterator_OperatorPlus(const QJsonArray__iterator* self, int j) {
	QJsonArray::iterator ret = self->operator+(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::iterator*>(new QJsonArray::iterator(ret));
}

QJsonArray__iterator* QJsonArray__iterator_OperatorMinus(const QJsonArray__iterator* self, int j) {
	QJsonArray::iterator ret = self->operator-(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::iterator*>(new QJsonArray::iterator(ret));
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
	QJsonValue ret = self->operator*();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QJsonValuePtr* QJsonArray__const_iterator_OperatorMinusGreater(const QJsonArray__const_iterator* self) {
	QJsonValuePtr ret = self->operator->();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValuePtr*>(new QJsonValuePtr(ret));
}

QJsonValue* QJsonArray__const_iterator_OperatorSubscript(const QJsonArray__const_iterator* self, int j) {
	QJsonValue ret = self->operator[](static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
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
	QJsonArray::const_iterator ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::const_iterator*>(new QJsonArray::const_iterator(ret));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinusMinus(QJsonArray__const_iterator* self, int param1) {
	QJsonArray::const_iterator ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::const_iterator*>(new QJsonArray::const_iterator(ret));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlus(const QJsonArray__const_iterator* self, int j) {
	QJsonArray::const_iterator ret = self->operator+(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::const_iterator*>(new QJsonArray::const_iterator(ret));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinus(const QJsonArray__const_iterator* self, int j) {
	QJsonArray::const_iterator ret = self->operator-(static_cast<int>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray::const_iterator*>(new QJsonArray::const_iterator(ret));
}

int QJsonArray__const_iterator_OperatorMinusWithQJsonArrayconstIterator(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* j) {
	return self->operator-(*j);
}

void QJsonArray__const_iterator_Delete(QJsonArray__const_iterator* self) {
	delete self;
}

