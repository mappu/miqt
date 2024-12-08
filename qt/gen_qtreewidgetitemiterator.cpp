#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QTreeWidgetItemIterator>
#include <qtreewidgetitemiterator.h>
#include "gen_qtreewidgetitemiterator.h"
#include "_cgo_export.h"

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
	QTreeWidgetItemIterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorPlusPlusWithInt(QTreeWidgetItemIterator* self, int param1) {
	return new QTreeWidgetItemIterator(self->operator++(static_cast<int>(param1)));
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorPlusAssign(QTreeWidgetItemIterator* self, int n) {
	QTreeWidgetItemIterator& _ret = self->operator+=(static_cast<int>(n));
	// Cast returned reference into pointer
	return &_ret;
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusMinus(QTreeWidgetItemIterator* self) {
	QTreeWidgetItemIterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusMinusWithInt(QTreeWidgetItemIterator* self, int param1) {
	return new QTreeWidgetItemIterator(self->operator--(static_cast<int>(param1)));
}

QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusAssign(QTreeWidgetItemIterator* self, int n) {
	QTreeWidgetItemIterator& _ret = self->operator-=(static_cast<int>(n));
	// Cast returned reference into pointer
	return &_ret;
}

QTreeWidgetItem* QTreeWidgetItemIterator_OperatorMultiply(const QTreeWidgetItemIterator* self) {
	return self->operator*();
}

void QTreeWidgetItemIterator_Delete(QTreeWidgetItemIterator* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTreeWidgetItemIterator*>( self );
	} else {
		delete self;
	}
}

