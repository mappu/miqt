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
#include <qcborarray.h>
#include "gen_qcborarray.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QCborArray* QCborArray_new() {
	return new QCborArray();
}

QCborArray* QCborArray_new2(QCborArray* other) {
	return new QCborArray(*other);
}

void QCborArray_operatorAssign(QCborArray* self, QCborArray* other) {
	self->operator=(*other);
}

void QCborArray_swap(QCborArray* self, QCborArray* other) {
	self->swap(*other);
}

QCborValue* QCborArray_toCborValue(const QCborArray* self) {
	return new QCborValue(self->toCborValue());
}

ptrdiff_t QCborArray_size(const QCborArray* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

bool QCborArray_isEmpty(const QCborArray* self) {
	return self->isEmpty();
}

void QCborArray_clear(QCborArray* self) {
	self->clear();
}

QCborValue* QCborArray_at(const QCborArray* self, ptrdiff_t i) {
	return new QCborValue(self->at((qsizetype)(i)));
}

QCborValue* QCborArray_first(const QCborArray* self) {
	return new QCborValue(self->first());
}

QCborValue* QCborArray_last(const QCborArray* self) {
	return new QCborValue(self->last());
}

QCborValue* QCborArray_operatorSubscript(const QCborArray* self, ptrdiff_t i) {
	return new QCborValue(self->operator[]((qsizetype)(i)));
}

QCborValueRef* QCborArray_first2(QCborArray* self) {
	return new QCborValueRef(self->first());
}

QCborValueRef* QCborArray_last2(QCborArray* self) {
	return new QCborValueRef(self->last());
}

QCborValueRef* QCborArray_operatorSubscriptWithQsizetype(QCborArray* self, ptrdiff_t i) {
	return new QCborValueRef(self->operator[]((qsizetype)(i)));
}

void QCborArray_insert(QCborArray* self, ptrdiff_t i, QCborValue* value) {
	self->insert((qsizetype)(i), *value);
}

void QCborArray_prepend(QCborArray* self, QCborValue* value) {
	self->prepend(*value);
}

void QCborArray_append(QCborArray* self, QCborValue* value) {
	self->append(*value);
}

QCborValue* QCborArray_extract(QCborArray* self, QCborArray__ConstIterator* it) {
	return new QCborValue(self->extract(*it));
}

QCborValue* QCborArray_extractWithIt(QCborArray* self, QCborArray__Iterator* it) {
	return new QCborValue(self->extract(*it));
}

void QCborArray_removeAt(QCborArray* self, ptrdiff_t i) {
	self->removeAt((qsizetype)(i));
}

QCborValue* QCborArray_takeAt(QCborArray* self, ptrdiff_t i) {
	return new QCborValue(self->takeAt((qsizetype)(i)));
}

void QCborArray_removeFirst(QCborArray* self) {
	self->removeFirst();
}

void QCborArray_removeLast(QCborArray* self) {
	self->removeLast();
}

QCborValue* QCborArray_takeFirst(QCborArray* self) {
	return new QCborValue(self->takeFirst());
}

QCborValue* QCborArray_takeLast(QCborArray* self) {
	return new QCborValue(self->takeLast());
}

bool QCborArray_contains(const QCborArray* self, QCborValue* value) {
	return self->contains(*value);
}

int QCborArray_compare(const QCborArray* self, QCborArray* other) {
	return self->compare(*other);
}

bool QCborArray_operatorEqual(const QCborArray* self, QCborArray* other) {
	return (*self == *other);
}

bool QCborArray_operatorNotEqual(const QCborArray* self, QCborArray* other) {
	return (*self != *other);
}

bool QCborArray_operatorLesser(const QCborArray* self, QCborArray* other) {
	return (*self < *other);
}

QCborArray__Iterator* QCborArray_begin(QCborArray* self) {
	return new QCborArray::Iterator(self->begin());
}

QCborArray__ConstIterator* QCborArray_constBegin(const QCborArray* self) {
	return new QCborArray::ConstIterator(self->constBegin());
}

QCborArray__ConstIterator* QCborArray_begin2(const QCborArray* self) {
	return new QCborArray::ConstIterator(self->begin());
}

QCborArray__ConstIterator* QCborArray_cbegin(const QCborArray* self) {
	return new QCborArray::ConstIterator(self->cbegin());
}

QCborArray__Iterator* QCborArray_end(QCborArray* self) {
	return new QCborArray::Iterator(self->end());
}

QCborArray__ConstIterator* QCborArray_constEnd(const QCborArray* self) {
	return new QCborArray::ConstIterator(self->constEnd());
}

QCborArray__ConstIterator* QCborArray_end2(const QCborArray* self) {
	return new QCborArray::ConstIterator(self->end());
}

QCborArray__ConstIterator* QCborArray_cend(const QCborArray* self) {
	return new QCborArray::ConstIterator(self->cend());
}

QCborArray__Iterator* QCborArray_insert2(QCborArray* self, QCborArray__Iterator* before, QCborValue* value) {
	return new QCborArray::Iterator(self->insert(*before, *value));
}

QCborArray__Iterator* QCborArray_insert3(QCborArray* self, QCborArray__ConstIterator* before, QCborValue* value) {
	return new QCborArray::Iterator(self->insert(*before, *value));
}

QCborArray__Iterator* QCborArray_erase(QCborArray* self, QCborArray__Iterator* it) {
	return new QCborArray::Iterator(self->erase(*it));
}

QCborArray__Iterator* QCborArray_eraseWithIt(QCborArray* self, QCborArray__ConstIterator* it) {
	return new QCborArray::Iterator(self->erase(*it));
}

void QCborArray_pushBack(QCborArray* self, QCborValue* t) {
	self->push_back(*t);
}

void QCborArray_pushFront(QCborArray* self, QCborValue* t) {
	self->push_front(*t);
}

void QCborArray_popFront(QCborArray* self) {
	self->pop_front();
}

void QCborArray_popBack(QCborArray* self) {
	self->pop_back();
}

bool QCborArray_empty(const QCborArray* self) {
	return self->empty();
}

QCborArray* QCborArray_operatorPlus(const QCborArray* self, QCborValue* v) {
	return new QCborArray(self->operator+(*v));
}

QCborArray* QCborArray_operatorPlusAssign(QCborArray* self, QCborValue* v) {
	QCborArray& _ret = self->operator+=(*v);
	// Cast returned reference into pointer
	return &_ret;
}

QCborArray* QCborArray_operatorShiftLeft(QCborArray* self, QCborValue* v) {
	QCborArray& _ret = self->operator<<(*v);
	// Cast returned reference into pointer
	return &_ret;
}

QCborArray* QCborArray_fromStringList(struct miqt_array /* of struct miqt_string */  list) {
	QStringList list_QList;
	list_QList.reserve(list.len);
	struct miqt_string* list_arr = static_cast<struct miqt_string*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
		list_QList.push_back(list_arr_i_QString);
	}
	return new QCborArray(QCborArray::fromStringList(list_QList));
}

QCborArray* QCborArray_fromJsonArray(QJsonArray* array) {
	return new QCborArray(QCborArray::fromJsonArray(*array));
}

QJsonArray* QCborArray_toJsonArray(const QCborArray* self) {
	return new QJsonArray(self->toJsonArray());
}

void QCborArray_delete(QCborArray* self) {
	delete self;
}

QCborArray__Iterator* QCborArray__Iterator_new() {
	return new QCborArray::Iterator();
}

QCborArray__Iterator* QCborArray__Iterator_new2(QCborArray__Iterator* param1) {
	return new QCborArray::Iterator(*param1);
}

void QCborArray__Iterator_operatorAssign(QCborArray__Iterator* self, QCborArray__Iterator* other) {
	self->operator=(*other);
}

QCborValueRef* QCborArray__Iterator_operatorMultiply(const QCborArray__Iterator* self) {
	return new QCborValueRef(self->operator*());
}

QCborValueRef* QCborArray__Iterator_operatorMinusGreater(const QCborArray__Iterator* self) {
	return self->operator->();
}

QCborValueRef* QCborArray__Iterator_operatorSubscript(QCborArray__Iterator* self, ptrdiff_t j) {
	return new QCborValueRef(self->operator[]((qsizetype)(j)));
}

bool QCborArray__Iterator_operatorEqual(const QCborArray__Iterator* self, QCborArray__Iterator* o) {
	return (*self == *o);
}

bool QCborArray__Iterator_operatorNotEqual(const QCborArray__Iterator* self, QCborArray__Iterator* o) {
	return (*self != *o);
}

bool QCborArray__Iterator_operatorLesser(const QCborArray__Iterator* self, QCborArray__Iterator* other) {
	return (*self < *other);
}

bool QCborArray__Iterator_operatorLesserOrEqual(const QCborArray__Iterator* self, QCborArray__Iterator* other) {
	return (*self <= *other);
}

bool QCborArray__Iterator_operatorGreater(const QCborArray__Iterator* self, QCborArray__Iterator* other) {
	return (*self > *other);
}

bool QCborArray__Iterator_operatorGreaterOrEqual(const QCborArray__Iterator* self, QCborArray__Iterator* other) {
	return (*self >= *other);
}

bool QCborArray__Iterator_operatorEqualWithQCborArrayConstIterator(const QCborArray__Iterator* self, QCborArray__ConstIterator* o) {
	return (*self == *o);
}

bool QCborArray__Iterator_operatorNotEqualWithQCborArrayConstIterator(const QCborArray__Iterator* self, QCborArray__ConstIterator* o) {
	return (*self != *o);
}

bool QCborArray__Iterator_operatorLesserWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other) {
	return (*self < *other);
}

bool QCborArray__Iterator_operatorLesserOrEqualWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other) {
	return (*self <= *other);
}

bool QCborArray__Iterator_operatorGreaterWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other) {
	return (*self > *other);
}

bool QCborArray__Iterator_operatorGreaterOrEqualWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other) {
	return (*self >= *other);
}

QCborArray__Iterator* QCborArray__Iterator_operatorPlusPlus(QCborArray__Iterator* self) {
	QCborArray::Iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QCborArray__Iterator* QCborArray__Iterator_operatorPlusPlusWithInt(QCborArray__Iterator* self, int param1) {
	return new QCborArray::Iterator(self->operator++(static_cast<int>(param1)));
}

QCborArray__Iterator* QCborArray__Iterator_operatorMinusMinus(QCborArray__Iterator* self) {
	QCborArray::Iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QCborArray__Iterator* QCborArray__Iterator_operatorMinusMinusWithInt(QCborArray__Iterator* self, int param1) {
	return new QCborArray::Iterator(self->operator--(static_cast<int>(param1)));
}

QCborArray__Iterator* QCborArray__Iterator_operatorPlusAssign(QCborArray__Iterator* self, ptrdiff_t j) {
	QCborArray::Iterator& _ret = self->operator+=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

QCborArray__Iterator* QCborArray__Iterator_operatorMinusAssign(QCborArray__Iterator* self, ptrdiff_t j) {
	QCborArray::Iterator& _ret = self->operator-=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

QCborArray__Iterator* QCborArray__Iterator_operatorPlus(const QCborArray__Iterator* self, ptrdiff_t j) {
	return new QCborArray::Iterator(self->operator+((qsizetype)(j)));
}

QCborArray__Iterator* QCborArray__Iterator_operatorMinus(const QCborArray__Iterator* self, ptrdiff_t j) {
	return new QCborArray::Iterator(self->operator-((qsizetype)(j)));
}

ptrdiff_t QCborArray__Iterator_operatorMinusWithQCborArrayIterator(const QCborArray__Iterator* self, QCborArray__Iterator* j) {
	qsizetype _ret = self->operator-(*j);
	return static_cast<ptrdiff_t>(_ret);
}

void QCborArray__Iterator_delete(QCborArray__Iterator* self) {
	delete self;
}

QCborArray__ConstIterator* QCborArray__ConstIterator_new() {
	return new QCborArray::ConstIterator();
}

QCborArray__ConstIterator* QCborArray__ConstIterator_new2(QCborArray__ConstIterator* param1) {
	return new QCborArray::ConstIterator(*param1);
}

void QCborArray__ConstIterator_operatorAssign(QCborArray__ConstIterator* self, QCborArray__ConstIterator* other) {
	self->operator=(*other);
}

QCborValueRef* QCborArray__ConstIterator_operatorMultiply(const QCborArray__ConstIterator* self) {
	return new QCborValueRef(self->operator*());
}

QCborValueRef* QCborArray__ConstIterator_operatorMinusGreater(const QCborArray__ConstIterator* self) {
	return (QCborValueRef*) self->operator->();
}

QCborValueRef* QCborArray__ConstIterator_operatorSubscript(QCborArray__ConstIterator* self, ptrdiff_t j) {
	return new QCborValueRef(self->operator[]((qsizetype)(j)));
}

bool QCborArray__ConstIterator_operatorEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* o) {
	return (*self == *o);
}

bool QCborArray__ConstIterator_operatorNotEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* o) {
	return (*self != *o);
}

bool QCborArray__ConstIterator_operatorLesser(const QCborArray__ConstIterator* self, QCborArray__Iterator* other) {
	return (*self < *other);
}

bool QCborArray__ConstIterator_operatorLesserOrEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* other) {
	return (*self <= *other);
}

bool QCborArray__ConstIterator_operatorGreater(const QCborArray__ConstIterator* self, QCborArray__Iterator* other) {
	return (*self > *other);
}

bool QCborArray__ConstIterator_operatorGreaterOrEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* other) {
	return (*self >= *other);
}

bool QCborArray__ConstIterator_operatorEqualWithQCborArrayConstIterator(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* o) {
	return (*self == *o);
}

bool QCborArray__ConstIterator_operatorNotEqualWithQCborArrayConstIterator(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* o) {
	return (*self != *o);
}

bool QCborArray__ConstIterator_operatorLesserWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other) {
	return (*self < *other);
}

bool QCborArray__ConstIterator_operatorLesserOrEqualWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other) {
	return (*self <= *other);
}

bool QCborArray__ConstIterator_operatorGreaterWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other) {
	return (*self > *other);
}

bool QCborArray__ConstIterator_operatorGreaterOrEqualWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other) {
	return (*self >= *other);
}

QCborArray__ConstIterator* QCborArray__ConstIterator_operatorPlusPlus(QCborArray__ConstIterator* self) {
	QCborArray::ConstIterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QCborArray__ConstIterator* QCborArray__ConstIterator_operatorPlusPlusWithInt(QCborArray__ConstIterator* self, int param1) {
	return new QCborArray::ConstIterator(self->operator++(static_cast<int>(param1)));
}

QCborArray__ConstIterator* QCborArray__ConstIterator_operatorMinusMinus(QCborArray__ConstIterator* self) {
	QCborArray::ConstIterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QCborArray__ConstIterator* QCborArray__ConstIterator_operatorMinusMinusWithInt(QCborArray__ConstIterator* self, int param1) {
	return new QCborArray::ConstIterator(self->operator--(static_cast<int>(param1)));
}

QCborArray__ConstIterator* QCborArray__ConstIterator_operatorPlusAssign(QCborArray__ConstIterator* self, ptrdiff_t j) {
	QCborArray::ConstIterator& _ret = self->operator+=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

QCborArray__ConstIterator* QCborArray__ConstIterator_operatorMinusAssign(QCborArray__ConstIterator* self, ptrdiff_t j) {
	QCborArray::ConstIterator& _ret = self->operator-=((qsizetype)(j));
	// Cast returned reference into pointer
	return &_ret;
}

QCborArray__ConstIterator* QCborArray__ConstIterator_operatorPlus(const QCborArray__ConstIterator* self, ptrdiff_t j) {
	return new QCborArray::ConstIterator(self->operator+((qsizetype)(j)));
}

QCborArray__ConstIterator* QCborArray__ConstIterator_operatorMinus(const QCborArray__ConstIterator* self, ptrdiff_t j) {
	return new QCborArray::ConstIterator(self->operator-((qsizetype)(j)));
}

ptrdiff_t QCborArray__ConstIterator_operatorMinusWithQCborArrayConstIterator(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* j) {
	qsizetype _ret = self->operator-(*j);
	return static_cast<ptrdiff_t>(_ret);
}

void QCborArray__ConstIterator_delete(QCborArray__ConstIterator* self) {
	delete self;
}

