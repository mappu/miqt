#include <QCborArray>
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborArray__ConstIterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborArray__Iterator
#include <QCborValue>
#include <QCborValueRef>
#include <QJsonArray>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qcborarray.h"
#include "gen_qcborarray.h"
#include "_cgo_export.h"

QCborArray* QCborArray_new() {
	return new QCborArray();
}

QCborArray* QCborArray_new2(QCborArray* other) {
	return new QCborArray(*other);
}

void QCborArray_OperatorAssign(QCborArray* self, QCborArray* other) {
	self->operator=(*other);
}

void QCborArray_Swap(QCborArray* self, QCborArray* other) {
	self->swap(*other);
}

QCborValue* QCborArray_ToCborValue(const QCborArray* self) {
	return new QCborValue(self->toCborValue());
}

size_t QCborArray_Size(const QCborArray* self) {
	return self->size();
}

bool QCborArray_IsEmpty(const QCborArray* self) {
	return self->isEmpty();
}

void QCborArray_Clear(QCborArray* self) {
	self->clear();
}

QCborValue* QCborArray_At(const QCborArray* self, size_t i) {
	return new QCborValue(self->at(static_cast<qsizetype>(i)));
}

QCborValue* QCborArray_First(const QCborArray* self) {
	return new QCborValue(self->first());
}

QCborValue* QCborArray_Last(const QCborArray* self) {
	return new QCborValue(self->last());
}

QCborValue* QCborArray_OperatorSubscript(const QCborArray* self, size_t i) {
	return new QCborValue(self->operator[](static_cast<qsizetype>(i)));
}

QCborValueRef* QCborArray_First2(QCborArray* self) {
	return new QCborValueRef(self->first());
}

QCborValueRef* QCborArray_Last2(QCborArray* self) {
	return new QCborValueRef(self->last());
}

QCborValueRef* QCborArray_OperatorSubscriptWithQsizetype(QCborArray* self, size_t i) {
	return new QCborValueRef(self->operator[](static_cast<qsizetype>(i)));
}

void QCborArray_Insert(QCborArray* self, size_t i, QCborValue* value) {
	self->insert(static_cast<qsizetype>(i), *value);
}

void QCborArray_Prepend(QCborArray* self, QCborValue* value) {
	self->prepend(*value);
}

void QCborArray_Append(QCborArray* self, QCborValue* value) {
	self->append(*value);
}

QCborValue* QCborArray_Extract(QCborArray* self, QCborArray__ConstIterator* it) {
	return new QCborValue(self->extract(*it));
}

QCborValue* QCborArray_ExtractWithIt(QCborArray* self, QCborArray__Iterator* it) {
	return new QCborValue(self->extract(*it));
}

void QCborArray_RemoveAt(QCborArray* self, size_t i) {
	self->removeAt(static_cast<qsizetype>(i));
}

QCborValue* QCborArray_TakeAt(QCborArray* self, size_t i) {
	return new QCborValue(self->takeAt(static_cast<qsizetype>(i)));
}

void QCborArray_RemoveFirst(QCborArray* self) {
	self->removeFirst();
}

void QCborArray_RemoveLast(QCborArray* self) {
	self->removeLast();
}

QCborValue* QCborArray_TakeFirst(QCborArray* self) {
	return new QCborValue(self->takeFirst());
}

QCborValue* QCborArray_TakeLast(QCborArray* self) {
	return new QCborValue(self->takeLast());
}

bool QCborArray_Contains(const QCborArray* self, QCborValue* value) {
	return self->contains(*value);
}

int QCborArray_Compare(const QCborArray* self, QCborArray* other) {
	return self->compare(*other);
}

bool QCborArray_OperatorEqual(const QCborArray* self, QCborArray* other) {
	return self->operator==(*other);
}

bool QCborArray_OperatorNotEqual(const QCborArray* self, QCborArray* other) {
	return self->operator!=(*other);
}

bool QCborArray_OperatorLesser(const QCborArray* self, QCborArray* other) {
	return self->operator<(*other);
}

QCborArray__Iterator* QCborArray_Begin(QCborArray* self) {
	return new QCborArray::Iterator(self->begin());
}

QCborArray__ConstIterator* QCborArray_ConstBegin(const QCborArray* self) {
	return new QCborArray::ConstIterator(self->constBegin());
}

QCborArray__ConstIterator* QCborArray_Begin2(const QCborArray* self) {
	return new QCborArray::ConstIterator(self->begin());
}

QCborArray__ConstIterator* QCborArray_Cbegin(const QCborArray* self) {
	return new QCborArray::ConstIterator(self->cbegin());
}

QCborArray__Iterator* QCborArray_End(QCborArray* self) {
	return new QCborArray::Iterator(self->end());
}

QCborArray__ConstIterator* QCborArray_ConstEnd(const QCborArray* self) {
	return new QCborArray::ConstIterator(self->constEnd());
}

QCborArray__ConstIterator* QCborArray_End2(const QCborArray* self) {
	return new QCborArray::ConstIterator(self->end());
}

QCborArray__ConstIterator* QCborArray_Cend(const QCborArray* self) {
	return new QCborArray::ConstIterator(self->cend());
}

QCborArray__Iterator* QCborArray_Insert2(QCborArray* self, QCborArray__Iterator* before, QCborValue* value) {
	return new QCborArray::Iterator(self->insert(*before, *value));
}

QCborArray__Iterator* QCborArray_Insert3(QCborArray* self, QCborArray__ConstIterator* before, QCborValue* value) {
	return new QCborArray::Iterator(self->insert(*before, *value));
}

QCborArray__Iterator* QCborArray_Erase(QCborArray* self, QCborArray__Iterator* it) {
	return new QCborArray::Iterator(self->erase(*it));
}

QCborArray__Iterator* QCborArray_EraseWithIt(QCborArray* self, QCborArray__ConstIterator* it) {
	return new QCborArray::Iterator(self->erase(*it));
}

void QCborArray_PushBack(QCborArray* self, QCborValue* t) {
	self->push_back(*t);
}

void QCborArray_PushFront(QCborArray* self, QCborValue* t) {
	self->push_front(*t);
}

void QCborArray_PopFront(QCborArray* self) {
	self->pop_front();
}

void QCborArray_PopBack(QCborArray* self) {
	self->pop_back();
}

bool QCborArray_Empty(const QCborArray* self) {
	return self->empty();
}

QCborArray* QCborArray_OperatorPlus(const QCborArray* self, QCborValue* v) {
	return new QCborArray(self->operator+(*v));
}

QCborArray* QCborArray_OperatorPlusAssign(QCborArray* self, QCborValue* v) {
	QCborArray& _ret = self->operator+=(*v);
	// Cast returned reference into pointer
	return &_ret;
}

QCborArray* QCborArray_OperatorShiftLeft(QCborArray* self, QCborValue* v) {
	QCborArray& _ret = self->operator<<(*v);
	// Cast returned reference into pointer
	return &_ret;
}

QCborArray* QCborArray_FromStringList(struct miqt_array* /* of struct miqt_string* */ list) {
	QList<QString> list_QList;
	list_QList.reserve(list->len);
	miqt_string** list_arr = static_cast<miqt_string**>(list->data);
	for(size_t i = 0; i < list->len; ++i) {
		list_QList.push_back(QString::fromUtf8(& list_arr[i]->data, list_arr[i]->len));
	}
	return new QCborArray(QCborArray::fromStringList(list_QList));
}

QCborArray* QCborArray_FromJsonArray(QJsonArray* array) {
	return new QCborArray(QCborArray::fromJsonArray(*array));
}

QJsonArray* QCborArray_ToJsonArray(const QCborArray* self) {
	return new QJsonArray(self->toJsonArray());
}

void QCborArray_Delete(QCborArray* self) {
	delete self;
}

QCborArray__Iterator* QCborArray__Iterator_new() {
	return new QCborArray::Iterator();
}

QCborArray__Iterator* QCborArray__Iterator_new2(QCborArray__Iterator* param1) {
	return new QCborArray::Iterator(*param1);
}

QCborValueRef* QCborArray__Iterator_OperatorMultiply(const QCborArray__Iterator* self) {
	return new QCborValueRef(self->operator*());
}

QCborValueRef* QCborArray__Iterator_OperatorMinusGreater(const QCborArray__Iterator* self) {
	return self->operator->();
}

QCborValueRef* QCborArray__Iterator_OperatorSubscript(QCborArray__Iterator* self, size_t j) {
	return new QCborValueRef(self->operator[](static_cast<qsizetype>(j)));
}

bool QCborArray__Iterator_OperatorEqual(const QCborArray__Iterator* self, QCborArray__Iterator* o) {
	return self->operator==(*o);
}

bool QCborArray__Iterator_OperatorNotEqual(const QCborArray__Iterator* self, QCborArray__Iterator* o) {
	return self->operator!=(*o);
}

bool QCborArray__Iterator_OperatorLesser(const QCborArray__Iterator* self, QCborArray__Iterator* other) {
	return self->operator<(*other);
}

bool QCborArray__Iterator_OperatorLesserOrEqual(const QCborArray__Iterator* self, QCborArray__Iterator* other) {
	return self->operator<=(*other);
}

bool QCborArray__Iterator_OperatorGreater(const QCborArray__Iterator* self, QCborArray__Iterator* other) {
	return self->operator>(*other);
}

bool QCborArray__Iterator_OperatorGreaterOrEqual(const QCborArray__Iterator* self, QCborArray__Iterator* other) {
	return self->operator>=(*other);
}

bool QCborArray__Iterator_OperatorEqualWithQCborArrayConstIterator(const QCborArray__Iterator* self, QCborArray__ConstIterator* o) {
	return self->operator==(*o);
}

bool QCborArray__Iterator_OperatorNotEqualWithQCborArrayConstIterator(const QCborArray__Iterator* self, QCborArray__ConstIterator* o) {
	return self->operator!=(*o);
}

bool QCborArray__Iterator_OperatorLesserWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other) {
	return self->operator<(*other);
}

bool QCborArray__Iterator_OperatorLesserOrEqualWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other) {
	return self->operator<=(*other);
}

bool QCborArray__Iterator_OperatorGreaterWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other) {
	return self->operator>(*other);
}

bool QCborArray__Iterator_OperatorGreaterOrEqualWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other) {
	return self->operator>=(*other);
}

QCborArray__Iterator* QCborArray__Iterator_OperatorPlusPlus(QCborArray__Iterator* self, int param1) {
	return new QCborArray::Iterator(self->operator++(static_cast<int>(param1)));
}

QCborArray__Iterator* QCborArray__Iterator_OperatorMinusMinus(QCborArray__Iterator* self, int param1) {
	return new QCborArray::Iterator(self->operator--(static_cast<int>(param1)));
}

QCborArray__Iterator* QCborArray__Iterator_OperatorPlus(const QCborArray__Iterator* self, size_t j) {
	return new QCborArray::Iterator(self->operator+(static_cast<qsizetype>(j)));
}

QCborArray__Iterator* QCborArray__Iterator_OperatorMinus(const QCborArray__Iterator* self, size_t j) {
	return new QCborArray::Iterator(self->operator-(static_cast<qsizetype>(j)));
}

size_t QCborArray__Iterator_OperatorMinusWithQCborArrayIterator(const QCborArray__Iterator* self, QCborArray__Iterator* j) {
	return self->operator-(*j);
}

void QCborArray__Iterator_Delete(QCborArray__Iterator* self) {
	delete self;
}

QCborArray__ConstIterator* QCborArray__ConstIterator_new() {
	return new QCborArray::ConstIterator();
}

QCborArray__ConstIterator* QCborArray__ConstIterator_new2(QCborArray__ConstIterator* param1) {
	return new QCborArray::ConstIterator(*param1);
}

QCborValueRef* QCborArray__ConstIterator_OperatorMultiply(const QCborArray__ConstIterator* self) {
	return new QCborValueRef(self->operator*());
}

QCborValueRef* QCborArray__ConstIterator_OperatorMinusGreater(const QCborArray__ConstIterator* self) {
	return (QCborValueRef*) self->operator->();
}

QCborValueRef* QCborArray__ConstIterator_OperatorSubscript(QCborArray__ConstIterator* self, size_t j) {
	return new QCborValueRef(self->operator[](static_cast<qsizetype>(j)));
}

bool QCborArray__ConstIterator_OperatorEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* o) {
	return self->operator==(*o);
}

bool QCborArray__ConstIterator_OperatorNotEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* o) {
	return self->operator!=(*o);
}

bool QCborArray__ConstIterator_OperatorLesser(const QCborArray__ConstIterator* self, QCborArray__Iterator* other) {
	return self->operator<(*other);
}

bool QCborArray__ConstIterator_OperatorLesserOrEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* other) {
	return self->operator<=(*other);
}

bool QCborArray__ConstIterator_OperatorGreater(const QCborArray__ConstIterator* self, QCborArray__Iterator* other) {
	return self->operator>(*other);
}

bool QCborArray__ConstIterator_OperatorGreaterOrEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* other) {
	return self->operator>=(*other);
}

bool QCborArray__ConstIterator_OperatorEqualWithQCborArrayConstIterator(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* o) {
	return self->operator==(*o);
}

bool QCborArray__ConstIterator_OperatorNotEqualWithQCborArrayConstIterator(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* o) {
	return self->operator!=(*o);
}

bool QCborArray__ConstIterator_OperatorLesserWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other) {
	return self->operator<(*other);
}

bool QCborArray__ConstIterator_OperatorLesserOrEqualWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other) {
	return self->operator<=(*other);
}

bool QCborArray__ConstIterator_OperatorGreaterWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other) {
	return self->operator>(*other);
}

bool QCborArray__ConstIterator_OperatorGreaterOrEqualWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other) {
	return self->operator>=(*other);
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlusPlus(QCborArray__ConstIterator* self, int param1) {
	return new QCborArray::ConstIterator(self->operator++(static_cast<int>(param1)));
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinusMinus(QCborArray__ConstIterator* self, int param1) {
	return new QCborArray::ConstIterator(self->operator--(static_cast<int>(param1)));
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlus(const QCborArray__ConstIterator* self, size_t j) {
	return new QCborArray::ConstIterator(self->operator+(static_cast<qsizetype>(j)));
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinus(const QCborArray__ConstIterator* self, size_t j) {
	return new QCborArray::ConstIterator(self->operator-(static_cast<qsizetype>(j)));
}

size_t QCborArray__ConstIterator_OperatorMinusWithQCborArrayConstIterator(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* j) {
	return self->operator-(*j);
}

void QCborArray__ConstIterator_Delete(QCborArray__ConstIterator* self) {
	delete self;
}

