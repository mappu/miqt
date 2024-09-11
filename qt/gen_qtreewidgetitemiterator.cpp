#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QTreeWidgetItemIterator>
#include "qtreewidgetitemiterator.h"

#include "gen_qtreewidgetitemiterator.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_new(QTreeWidgetItemIterator* it) {
	return new QTreeWidgetItemIterator(*it);
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_new2(QTreeWidget* widget) {
	return new QTreeWidgetItemIterator(widget);
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_new3(QTreeWidgetItem* item) {
	return new QTreeWidgetItemIterator(item);
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_new4(QTreeWidget* widget, int flags) {
	return new QTreeWidgetItemIterator(widget, static_cast<QTreeWidgetItemIterator::IteratorFlags>(flags));
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_new5(QTreeWidgetItem* item, int flags) {
	return new QTreeWidgetItemIterator(item, static_cast<QTreeWidgetItemIterator::IteratorFlags>(flags));
}

void QTreeWidgetItemIterator_OperatorAssign(QTreeWidgetItemIterator* self, QTreeWidgetItemIterator* it) {
	self->operator=(*it);
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorPlusPlus(QTreeWidgetItemIterator* self) {
	QTreeWidgetItemIterator& ret = self->operator++();
	// Cast returned reference into pointer
	return &ret;
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorPlusPlusWithInt(QTreeWidgetItemIterator* self, int param1) {
	QTreeWidgetItemIterator ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTreeWidgetItemIterator*>(new QTreeWidgetItemIterator(ret));
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorPlusAssign(QTreeWidgetItemIterator* self, int n) {
	QTreeWidgetItemIterator& ret = self->operator+=(static_cast<int>(n));
	// Cast returned reference into pointer
	return &ret;
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusMinus(QTreeWidgetItemIterator* self) {
	QTreeWidgetItemIterator& ret = self->operator--();
	// Cast returned reference into pointer
	return &ret;
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusMinusWithInt(QTreeWidgetItemIterator* self, int param1) {
	QTreeWidgetItemIterator ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTreeWidgetItemIterator*>(new QTreeWidgetItemIterator(ret));
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusAssign(QTreeWidgetItemIterator* self, int n) {
	QTreeWidgetItemIterator& ret = self->operator-=(static_cast<int>(n));
	// Cast returned reference into pointer
	return &ret;
}

QTreeWidgetItem* QTreeWidgetItemIterator_OperatorMultiply(const QTreeWidgetItemIterator* self) {
	return self->operator*();
}

void QTreeWidgetItemIterator_Delete(QTreeWidgetItemIterator* self) {
	delete self;
}

