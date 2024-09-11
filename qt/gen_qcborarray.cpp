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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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
	QCborValue ret = self->toCborValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
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
	QCborValue ret = self->at(static_cast<qsizetype>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborArray_First(const QCborArray* self) {
	QCborValue ret = self->first();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborArray_Last(const QCborArray* self) {
	QCborValue ret = self->last();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborArray_OperatorSubscript(const QCborArray* self, size_t i) {
	QCborValue ret = self->operator[](static_cast<qsizetype>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValueRef* QCborArray_First2(QCborArray* self) {
	QCborValueRef ret = self->first();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

QCborValueRef* QCborArray_Last2(QCborArray* self) {
	QCborValueRef ret = self->last();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

QCborValueRef* QCborArray_OperatorSubscriptWithQsizetype(QCborArray* self, size_t i) {
	QCborValueRef ret = self->operator[](static_cast<qsizetype>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
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
	QCborValue ret = self->extract(*it);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborArray_ExtractWithIt(QCborArray* self, QCborArray__Iterator* it) {
	QCborValue ret = self->extract(*it);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

void QCborArray_RemoveAt(QCborArray* self, size_t i) {
	self->removeAt(static_cast<qsizetype>(i));
}

QCborValue* QCborArray_TakeAt(QCborArray* self, size_t i) {
	QCborValue ret = self->takeAt(static_cast<qsizetype>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

void QCborArray_RemoveFirst(QCborArray* self) {
	self->removeFirst();
}

void QCborArray_RemoveLast(QCborArray* self) {
	self->removeLast();
}

QCborValue* QCborArray_TakeFirst(QCborArray* self) {
	QCborValue ret = self->takeFirst();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborArray_TakeLast(QCborArray* self) {
	QCborValue ret = self->takeLast();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
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
	QCborArray::Iterator ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::Iterator*>(new QCborArray::Iterator(ret));
}

QCborArray__ConstIterator* QCborArray_ConstBegin(const QCborArray* self) {
	QCborArray::ConstIterator ret = self->constBegin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__ConstIterator* QCborArray_Begin2(const QCborArray* self) {
	QCborArray::ConstIterator ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__ConstIterator* QCborArray_Cbegin(const QCborArray* self) {
	QCborArray::ConstIterator ret = self->cbegin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__Iterator* QCborArray_End(QCborArray* self) {
	QCborArray::Iterator ret = self->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::Iterator*>(new QCborArray::Iterator(ret));
}

QCborArray__ConstIterator* QCborArray_ConstEnd(const QCborArray* self) {
	QCborArray::ConstIterator ret = self->constEnd();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__ConstIterator* QCborArray_End2(const QCborArray* self) {
	QCborArray::ConstIterator ret = self->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__ConstIterator* QCborArray_Cend(const QCborArray* self) {
	QCborArray::ConstIterator ret = self->cend();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__Iterator* QCborArray_Insert2(QCborArray* self, QCborArray__Iterator* before, QCborValue* value) {
	QCborArray::Iterator ret = self->insert(*before, *value);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::Iterator*>(new QCborArray::Iterator(ret));
}

QCborArray__Iterator* QCborArray_Insert3(QCborArray* self, QCborArray__ConstIterator* before, QCborValue* value) {
	QCborArray::Iterator ret = self->insert(*before, *value);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::Iterator*>(new QCborArray::Iterator(ret));
}

QCborArray__Iterator* QCborArray_Erase(QCborArray* self, QCborArray__Iterator* it) {
	QCborArray::Iterator ret = self->erase(*it);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::Iterator*>(new QCborArray::Iterator(ret));
}

QCborArray__Iterator* QCborArray_EraseWithIt(QCborArray* self, QCborArray__ConstIterator* it) {
	QCborArray::Iterator ret = self->erase(*it);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::Iterator*>(new QCborArray::Iterator(ret));
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
	QCborArray ret = self->operator+(*v);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray*>(new QCborArray(ret));
}

QCborArray* QCborArray_OperatorPlusAssign(QCborArray* self, QCborValue* v) {
	QCborArray& ret = self->operator+=(*v);
	// Cast returned reference into pointer
	return &ret;
}

QCborArray* QCborArray_OperatorShiftLeft(QCborArray* self, QCborValue* v) {
	QCborArray& ret = self->operator<<(*v);
	// Cast returned reference into pointer
	return &ret;
}

QCborArray* QCborArray_FromStringList(char** list, uint64_t* list_Lengths, size_t list_len) {
	QList<QString> list_QList;
	list_QList.reserve(list_len);
	for(size_t i = 0; i < list_len; ++i) {
		list_QList.push_back(QString::fromUtf8(list[i], list_Lengths[i]));
	}
	QCborArray ret = QCborArray::fromStringList(list_QList);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray*>(new QCborArray(ret));
}

QCborArray* QCborArray_FromJsonArray(QJsonArray* array) {
	QCborArray ret = QCborArray::fromJsonArray(*array);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray*>(new QCborArray(ret));
}

QJsonArray* QCborArray_ToJsonArray(const QCborArray* self) {
	QJsonArray ret = self->toJsonArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray*>(new QJsonArray(ret));
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
	QCborValueRef ret = self->operator*();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

QCborValueRef* QCborArray__Iterator_OperatorMinusGreater(const QCborArray__Iterator* self) {
	return self->operator->();
}

QCborValueRef* QCborArray__Iterator_OperatorSubscript(QCborArray__Iterator* self, size_t j) {
	QCborValueRef ret = self->operator[](static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
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
	QCborArray::Iterator ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::Iterator*>(new QCborArray::Iterator(ret));
}

QCborArray__Iterator* QCborArray__Iterator_OperatorMinusMinus(QCborArray__Iterator* self, int param1) {
	QCborArray::Iterator ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::Iterator*>(new QCborArray::Iterator(ret));
}

QCborArray__Iterator* QCborArray__Iterator_OperatorPlus(const QCborArray__Iterator* self, size_t j) {
	QCborArray::Iterator ret = self->operator+(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::Iterator*>(new QCborArray::Iterator(ret));
}

QCborArray__Iterator* QCborArray__Iterator_OperatorMinus(const QCborArray__Iterator* self, size_t j) {
	QCborArray::Iterator ret = self->operator-(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::Iterator*>(new QCborArray::Iterator(ret));
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
	QCborValueRef ret = self->operator*();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

QCborValueRef* QCborArray__ConstIterator_OperatorMinusGreater(const QCborArray__ConstIterator* self) {
	return (QCborValueRef*) self->operator->();
}

QCborValueRef* QCborArray__ConstIterator_OperatorSubscript(QCborArray__ConstIterator* self, size_t j) {
	QCborValueRef ret = self->operator[](static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
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
	QCborArray::ConstIterator ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinusMinus(QCborArray__ConstIterator* self, int param1) {
	QCborArray::ConstIterator ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlus(const QCborArray__ConstIterator* self, size_t j) {
	QCborArray::ConstIterator ret = self->operator+(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinus(const QCborArray__ConstIterator* self, size_t j) {
	QCborArray::ConstIterator ret = self->operator-(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

size_t QCborArray__ConstIterator_OperatorMinusWithQCborArrayConstIterator(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* j) {
	return self->operator-(*j);
}

void QCborArray__ConstIterator_Delete(QCborArray__ConstIterator* self) {
	delete self;
}

