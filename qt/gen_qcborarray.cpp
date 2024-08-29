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

QCborValue* QCborArray_ToCborValue(QCborArray* self) {
	QCborValue ret = const_cast<const QCborArray*>(self)->toCborValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

size_t QCborArray_Size(QCborArray* self) {
	return const_cast<const QCborArray*>(self)->size();
}

bool QCborArray_IsEmpty(QCborArray* self) {
	return const_cast<const QCborArray*>(self)->isEmpty();
}

void QCborArray_Clear(QCborArray* self) {
	self->clear();
}

QCborValue* QCborArray_At(QCborArray* self, size_t i) {
	QCborValue ret = const_cast<const QCborArray*>(self)->at(static_cast<qsizetype>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborArray_First(QCborArray* self) {
	QCborValue ret = const_cast<const QCborArray*>(self)->first();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborArray_Last(QCborArray* self) {
	QCborValue ret = const_cast<const QCborArray*>(self)->last();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborArray_OperatorSubscript(QCborArray* self, size_t i) {
	QCborValue ret = const_cast<const QCborArray*>(self)->operator[](static_cast<qsizetype>(i));
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

bool QCborArray_Contains(QCborArray* self, QCborValue* value) {
	return const_cast<const QCborArray*>(self)->contains(*value);
}

int QCborArray_Compare(QCborArray* self, QCborArray* other) {
	return const_cast<const QCborArray*>(self)->compare(*other);
}

bool QCborArray_OperatorEqual(QCborArray* self, QCborArray* other) {
	return const_cast<const QCborArray*>(self)->operator==(*other);
}

bool QCborArray_OperatorNotEqual(QCborArray* self, QCborArray* other) {
	return const_cast<const QCborArray*>(self)->operator!=(*other);
}

bool QCborArray_OperatorLesser(QCborArray* self, QCborArray* other) {
	return const_cast<const QCborArray*>(self)->operator<(*other);
}

QCborArray__Iterator* QCborArray_Begin(QCborArray* self) {
	QCborArray::Iterator ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::Iterator*>(new QCborArray::Iterator(ret));
}

QCborArray__ConstIterator* QCborArray_ConstBegin(QCborArray* self) {
	QCborArray::ConstIterator ret = const_cast<const QCborArray*>(self)->constBegin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__ConstIterator* QCborArray_Begin2(QCborArray* self) {
	QCborArray::ConstIterator ret = const_cast<const QCborArray*>(self)->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__ConstIterator* QCborArray_Cbegin(QCborArray* self) {
	QCborArray::ConstIterator ret = const_cast<const QCborArray*>(self)->cbegin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__Iterator* QCborArray_End(QCborArray* self) {
	QCborArray::Iterator ret = self->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::Iterator*>(new QCborArray::Iterator(ret));
}

QCborArray__ConstIterator* QCborArray_ConstEnd(QCborArray* self) {
	QCborArray::ConstIterator ret = const_cast<const QCborArray*>(self)->constEnd();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__ConstIterator* QCborArray_End2(QCborArray* self) {
	QCborArray::ConstIterator ret = const_cast<const QCborArray*>(self)->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__ConstIterator* QCborArray_Cend(QCborArray* self) {
	QCborArray::ConstIterator ret = const_cast<const QCborArray*>(self)->cend();
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

bool QCborArray_Empty(QCborArray* self) {
	return const_cast<const QCborArray*>(self)->empty();
}

QCborArray* QCborArray_OperatorPlus(QCborArray* self, QCborValue* v) {
	QCborArray ret = const_cast<const QCborArray*>(self)->operator+(*v);
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

QJsonArray* QCborArray_ToJsonArray(QCborArray* self) {
	QJsonArray ret = const_cast<const QCborArray*>(self)->toJsonArray();
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

QCborValueRef* QCborArray__Iterator_OperatorMultiply(QCborArray__Iterator* self) {
	QCborValueRef ret = const_cast<const QCborArray::Iterator*>(self)->operator*();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

QCborValueRef* QCborArray__Iterator_OperatorMinusGreater(QCborArray__Iterator* self) {
	return const_cast<const QCborArray::Iterator*>(self)->operator->();
}

QCborValueRef* QCborArray__Iterator_OperatorSubscript(QCborArray__Iterator* self, size_t j) {
	QCborValueRef ret = self->operator[](static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

bool QCborArray__Iterator_OperatorEqual(QCborArray__Iterator* self, QCborArray__Iterator* o) {
	return const_cast<const QCborArray::Iterator*>(self)->operator==(*o);
}

bool QCborArray__Iterator_OperatorNotEqual(QCborArray__Iterator* self, QCborArray__Iterator* o) {
	return const_cast<const QCborArray::Iterator*>(self)->operator!=(*o);
}

bool QCborArray__Iterator_OperatorLesser(QCborArray__Iterator* self, QCborArray__Iterator* other) {
	return const_cast<const QCborArray::Iterator*>(self)->operator<(*other);
}

bool QCborArray__Iterator_OperatorLesserOrEqual(QCborArray__Iterator* self, QCborArray__Iterator* other) {
	return const_cast<const QCborArray::Iterator*>(self)->operator<=(*other);
}

bool QCborArray__Iterator_OperatorGreater(QCborArray__Iterator* self, QCborArray__Iterator* other) {
	return const_cast<const QCborArray::Iterator*>(self)->operator>(*other);
}

bool QCborArray__Iterator_OperatorGreaterOrEqual(QCborArray__Iterator* self, QCborArray__Iterator* other) {
	return const_cast<const QCborArray::Iterator*>(self)->operator>=(*other);
}

bool QCborArray__Iterator_OperatorEqualWithQCborArrayConstIterator(QCborArray__Iterator* self, QCborArray__ConstIterator* o) {
	return const_cast<const QCborArray::Iterator*>(self)->operator==(*o);
}

bool QCborArray__Iterator_OperatorNotEqualWithQCborArrayConstIterator(QCborArray__Iterator* self, QCborArray__ConstIterator* o) {
	return const_cast<const QCborArray::Iterator*>(self)->operator!=(*o);
}

bool QCborArray__Iterator_OperatorLesserWithOther(QCborArray__Iterator* self, QCborArray__ConstIterator* other) {
	return const_cast<const QCborArray::Iterator*>(self)->operator<(*other);
}

bool QCborArray__Iterator_OperatorLesserOrEqualWithOther(QCborArray__Iterator* self, QCborArray__ConstIterator* other) {
	return const_cast<const QCborArray::Iterator*>(self)->operator<=(*other);
}

bool QCborArray__Iterator_OperatorGreaterWithOther(QCborArray__Iterator* self, QCborArray__ConstIterator* other) {
	return const_cast<const QCborArray::Iterator*>(self)->operator>(*other);
}

bool QCborArray__Iterator_OperatorGreaterOrEqualWithOther(QCborArray__Iterator* self, QCborArray__ConstIterator* other) {
	return const_cast<const QCborArray::Iterator*>(self)->operator>=(*other);
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

QCborArray__Iterator* QCborArray__Iterator_OperatorPlus(QCborArray__Iterator* self, size_t j) {
	QCborArray::Iterator ret = const_cast<const QCborArray::Iterator*>(self)->operator+(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::Iterator*>(new QCborArray::Iterator(ret));
}

QCborArray__Iterator* QCborArray__Iterator_OperatorMinus(QCborArray__Iterator* self, size_t j) {
	QCborArray::Iterator ret = const_cast<const QCborArray::Iterator*>(self)->operator-(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::Iterator*>(new QCborArray::Iterator(ret));
}

size_t QCborArray__Iterator_OperatorMinusWithQCborArrayIterator(QCborArray__Iterator* self, QCborArray__Iterator* j) {
	return const_cast<const QCborArray::Iterator*>(self)->operator-(*j);
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

QCborValueRef* QCborArray__ConstIterator_OperatorMultiply(QCborArray__ConstIterator* self) {
	QCborValueRef ret = const_cast<const QCborArray::ConstIterator*>(self)->operator*();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

QCborValueRef* QCborArray__ConstIterator_OperatorMinusGreater(QCborArray__ConstIterator* self) {
	return (QCborValueRef*) const_cast<const QCborArray::ConstIterator*>(self)->operator->();
}

QCborValueRef* QCborArray__ConstIterator_OperatorSubscript(QCborArray__ConstIterator* self, size_t j) {
	QCborValueRef ret = self->operator[](static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

bool QCborArray__ConstIterator_OperatorEqual(QCborArray__ConstIterator* self, QCborArray__Iterator* o) {
	return const_cast<const QCborArray::ConstIterator*>(self)->operator==(*o);
}

bool QCborArray__ConstIterator_OperatorNotEqual(QCborArray__ConstIterator* self, QCborArray__Iterator* o) {
	return const_cast<const QCborArray::ConstIterator*>(self)->operator!=(*o);
}

bool QCborArray__ConstIterator_OperatorLesser(QCborArray__ConstIterator* self, QCborArray__Iterator* other) {
	return const_cast<const QCborArray::ConstIterator*>(self)->operator<(*other);
}

bool QCborArray__ConstIterator_OperatorLesserOrEqual(QCborArray__ConstIterator* self, QCborArray__Iterator* other) {
	return const_cast<const QCborArray::ConstIterator*>(self)->operator<=(*other);
}

bool QCborArray__ConstIterator_OperatorGreater(QCborArray__ConstIterator* self, QCborArray__Iterator* other) {
	return const_cast<const QCborArray::ConstIterator*>(self)->operator>(*other);
}

bool QCborArray__ConstIterator_OperatorGreaterOrEqual(QCborArray__ConstIterator* self, QCborArray__Iterator* other) {
	return const_cast<const QCborArray::ConstIterator*>(self)->operator>=(*other);
}

bool QCborArray__ConstIterator_OperatorEqualWithQCborArrayConstIterator(QCborArray__ConstIterator* self, QCborArray__ConstIterator* o) {
	return const_cast<const QCborArray::ConstIterator*>(self)->operator==(*o);
}

bool QCborArray__ConstIterator_OperatorNotEqualWithQCborArrayConstIterator(QCborArray__ConstIterator* self, QCborArray__ConstIterator* o) {
	return const_cast<const QCborArray::ConstIterator*>(self)->operator!=(*o);
}

bool QCborArray__ConstIterator_OperatorLesserWithOther(QCborArray__ConstIterator* self, QCborArray__ConstIterator* other) {
	return const_cast<const QCborArray::ConstIterator*>(self)->operator<(*other);
}

bool QCborArray__ConstIterator_OperatorLesserOrEqualWithOther(QCborArray__ConstIterator* self, QCborArray__ConstIterator* other) {
	return const_cast<const QCborArray::ConstIterator*>(self)->operator<=(*other);
}

bool QCborArray__ConstIterator_OperatorGreaterWithOther(QCborArray__ConstIterator* self, QCborArray__ConstIterator* other) {
	return const_cast<const QCborArray::ConstIterator*>(self)->operator>(*other);
}

bool QCborArray__ConstIterator_OperatorGreaterOrEqualWithOther(QCborArray__ConstIterator* self, QCborArray__ConstIterator* other) {
	return const_cast<const QCborArray::ConstIterator*>(self)->operator>=(*other);
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

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlus(QCborArray__ConstIterator* self, size_t j) {
	QCborArray::ConstIterator ret = const_cast<const QCborArray::ConstIterator*>(self)->operator+(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinus(QCborArray__ConstIterator* self, size_t j) {
	QCborArray::ConstIterator ret = const_cast<const QCborArray::ConstIterator*>(self)->operator-(static_cast<qsizetype>(j));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray::ConstIterator*>(new QCborArray::ConstIterator(ret));
}

size_t QCborArray__ConstIterator_OperatorMinusWithQCborArrayConstIterator(QCborArray__ConstIterator* self, QCborArray__ConstIterator* j) {
	return const_cast<const QCborArray::ConstIterator*>(self)->operator-(*j);
}

void QCborArray__ConstIterator_Delete(QCborArray__ConstIterator* self) {
	delete self;
}

