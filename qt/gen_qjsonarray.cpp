#include "gen_qjsonarray.h"
#include "qjsonarray.h"

#include <QJsonArray>
#include <QJsonValue>
#include <QJsonValueRef>
#include <QList>
#include <QString>


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

int QJsonArray_Size(QJsonArray* self) {
	return self->size();
}

int QJsonArray_Count(QJsonArray* self) {
	return self->count();
}

bool QJsonArray_IsEmpty(QJsonArray* self) {
	return self->isEmpty();
}

QJsonValue* QJsonArray_At(QJsonArray* self, int i) {
	QJsonValue ret = self->at(static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QJsonValue* QJsonArray_First(QJsonArray* self) {
	QJsonValue ret = self->first();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QJsonValue* QJsonArray_Last(QJsonArray* self) {
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

bool QJsonArray_Contains(QJsonArray* self, QJsonValue* element) {
	return self->contains(*element);
}

QJsonValueRef* QJsonArray_OperatorSubscript(QJsonArray* self, int i) {
	QJsonValueRef ret = self->operator[](static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValueRef*>(new QJsonValueRef(ret));
}

QJsonValue* QJsonArray_OperatorSubscriptWithInt(QJsonArray* self, int i) {
	QJsonValue ret = self->operator[](static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

bool QJsonArray_OperatorEqual(QJsonArray* self, QJsonArray* other) {
	return self->operator==(*other);
}

bool QJsonArray_OperatorNotEqual(QJsonArray* self, QJsonArray* other) {
	return self->operator!=(*other);
}

void QJsonArray_Swap(QJsonArray* self, QJsonArray* other) {
	self->swap(*other);
}

QJsonArray* QJsonArray_OperatorPlus(QJsonArray* self, QJsonValue* v) {
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

bool QJsonArray_Empty(QJsonArray* self) {
	return self->empty();
}

void QJsonArray_Delete(QJsonArray* self) {
	delete self;
}

