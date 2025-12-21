#include <QDesignerLayoutDecorationExtension>
#include <QLayout>
#include <QLayoutItem>
#include <QList>
#include <QPair>
#include <QPoint>
#include <QRect>
#include <QWidget>
#include <layoutdecoration.h>
#include "gen_layoutdecoration.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_array /* of QWidget* */  QDesignerLayoutDecorationExtension_widgets(const QDesignerLayoutDecorationExtension* self, QLayout* layout) {
	QList<QWidget *> _ret = self->widgets(layout);
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QRect* QDesignerLayoutDecorationExtension_itemInfo(const QDesignerLayoutDecorationExtension* self, int index) {
	return new QRect(self->itemInfo(static_cast<int>(index)));
}

int QDesignerLayoutDecorationExtension_indexOf(const QDesignerLayoutDecorationExtension* self, QWidget* widget) {
	return self->indexOf(widget);
}

int QDesignerLayoutDecorationExtension_indexOfWithItem(const QDesignerLayoutDecorationExtension* self, QLayoutItem* item) {
	return self->indexOf(item);
}

int QDesignerLayoutDecorationExtension_currentInsertMode(const QDesignerLayoutDecorationExtension* self) {
	QDesignerLayoutDecorationExtension::InsertMode _ret = self->currentInsertMode();
	return static_cast<int>(_ret);
}

int QDesignerLayoutDecorationExtension_currentIndex(const QDesignerLayoutDecorationExtension* self) {
	return self->currentIndex();
}

struct miqt_map /* tuple of int and int */  QDesignerLayoutDecorationExtension_currentCell(const QDesignerLayoutDecorationExtension* self) {
	QPair<int, int> _ret = self->currentCell();
	// Convert QPair<> from C++ memory to manually-managed C memory
	int* _first_arr = static_cast<int*>(malloc(sizeof(int)));
	int* _second_arr = static_cast<int*>(malloc(sizeof(int)));
	_first_arr[0] = _ret.first;
	_second_arr[0] = _ret.second;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

void QDesignerLayoutDecorationExtension_insertWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget, struct miqt_map /* tuple of int and int */  cell) {
	QPair<int, int> cell_QPair;
	int* cell_first_arr = static_cast<int*>(cell.keys);
	int* cell_second_arr = static_cast<int*>(cell.values);
	cell_QPair.first = static_cast<int>(cell_first_arr[0]);
	cell_QPair.second = static_cast<int>(cell_second_arr[0]);
	self->insertWidget(widget, cell_QPair);
}

void QDesignerLayoutDecorationExtension_removeWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget) {
	self->removeWidget(widget);
}

void QDesignerLayoutDecorationExtension_insertRow(QDesignerLayoutDecorationExtension* self, int row) {
	self->insertRow(static_cast<int>(row));
}

void QDesignerLayoutDecorationExtension_insertColumn(QDesignerLayoutDecorationExtension* self, int column) {
	self->insertColumn(static_cast<int>(column));
}

void QDesignerLayoutDecorationExtension_simplify(QDesignerLayoutDecorationExtension* self) {
	self->simplify();
}

int QDesignerLayoutDecorationExtension_findItemAt(const QDesignerLayoutDecorationExtension* self, QPoint* pos) {
	return self->findItemAt(*pos);
}

int QDesignerLayoutDecorationExtension_findItemAt2(const QDesignerLayoutDecorationExtension* self, int row, int column) {
	return self->findItemAt(static_cast<int>(row), static_cast<int>(column));
}

void QDesignerLayoutDecorationExtension_adjustIndicator(QDesignerLayoutDecorationExtension* self, QPoint* pos, int index) {
	self->adjustIndicator(*pos, static_cast<int>(index));
}

void QDesignerLayoutDecorationExtension_operatorAssign(QDesignerLayoutDecorationExtension* self, QDesignerLayoutDecorationExtension* param1) {
	self->operator=(*param1);
}

void QDesignerLayoutDecorationExtension_delete(QDesignerLayoutDecorationExtension* self) {
	delete self;
}

