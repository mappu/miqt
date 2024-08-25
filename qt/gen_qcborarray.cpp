#include "gen_qcborarray.h"
#include "qcborarray.h"

#include <QCborArray>
#include <QCborValue>
#include <QCborValueRef>
#include <QJsonArray>
#include <QList>
#include <QString>


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
	QCborValue ret = self->toCborValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

size_t QCborArray_Size(QCborArray* self) {
	return self->size();
}

bool QCborArray_IsEmpty(QCborArray* self) {
	return self->isEmpty();
}

void QCborArray_Clear(QCborArray* self) {
	self->clear();
}

QCborValue* QCborArray_At(QCborArray* self, size_t i) {
	QCborValue ret = self->at(static_cast<qsizetype>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborArray_First(QCborArray* self) {
	QCborValue ret = self->first();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborArray_Last(QCborArray* self) {
	QCborValue ret = self->last();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborArray_OperatorSubscript(QCborArray* self, size_t i) {
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
	return self->contains(*value);
}

int QCborArray_Compare(QCborArray* self, QCborArray* other) {
	return self->compare(*other);
}

bool QCborArray_OperatorEqual(QCborArray* self, QCborArray* other) {
	return self->operator==(*other);
}

bool QCborArray_OperatorNotEqual(QCborArray* self, QCborArray* other) {
	return self->operator!=(*other);
}

bool QCborArray_OperatorLesser(QCborArray* self, QCborArray* other) {
	return self->operator<(*other);
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
	return self->empty();
}

QCborArray* QCborArray_OperatorPlus(QCborArray* self, QCborValue* v) {
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

QJsonArray* QCborArray_ToJsonArray(QCborArray* self) {
	QJsonArray ret = self->toJsonArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray*>(new QJsonArray(ret));
}

void QCborArray_Delete(QCborArray* self) {
	delete self;
}

