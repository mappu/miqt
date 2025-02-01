#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QTreeWidgetItemIterator>
#include <qtreewidgetitemiterator.h>
#include "gen_qtreewidgetitemiterator.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

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

void QTreeWidgetItemIterator_operatorAssign(QTreeWidgetItemIterator* self, QTreeWidgetItemIterator* it) {
	self->operator=(*it);
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_operatorPlusPlus(QTreeWidgetItemIterator* self) {
	QTreeWidgetItemIterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_operatorPlusPlusWithInt(QTreeWidgetItemIterator* self, int param1) {
	return new QTreeWidgetItemIterator(self->operator++(static_cast<int>(param1)));
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_operatorPlusAssign(QTreeWidgetItemIterator* self, int n) {
	QTreeWidgetItemIterator& _ret = self->operator+=(static_cast<int>(n));
	// Cast returned reference into pointer
	return &_ret;
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_operatorMinusMinus(QTreeWidgetItemIterator* self) {
	QTreeWidgetItemIterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_operatorMinusMinusWithInt(QTreeWidgetItemIterator* self, int param1) {
	return new QTreeWidgetItemIterator(self->operator--(static_cast<int>(param1)));
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_operatorMinusAssign(QTreeWidgetItemIterator* self, int n) {
	QTreeWidgetItemIterator& _ret = self->operator-=(static_cast<int>(n));
	// Cast returned reference into pointer
	return &_ret;
}

QTreeWidgetItem* QTreeWidgetItemIterator_operatorMultiply(const QTreeWidgetItemIterator* self) {
	return self->operator*();
}

void QTreeWidgetItemIterator_delete(QTreeWidgetItemIterator* self) {
	delete self;
}

