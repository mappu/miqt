#include <QGraphicsGridLayout>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include "qgraphicsgridlayout.h"

#include "gen_qgraphicsgridlayout.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGraphicsGridLayout* QGraphicsGridLayout_new() {
	return new QGraphicsGridLayout();
}

QGraphicsGridLayout* QGraphicsGridLayout_new2(QGraphicsLayoutItem* parent) {
	return new QGraphicsGridLayout(parent);
}

void QGraphicsGridLayout_AddItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGraphicsGridLayout_AddItem2(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column));
}

void QGraphicsGridLayout_SetHorizontalSpacing(QGraphicsGridLayout* self, double spacing) {
	self->setHorizontalSpacing(static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_HorizontalSpacing(QGraphicsGridLayout* self) {
	return const_cast<const QGraphicsGridLayout*>(self)->horizontalSpacing();
}

void QGraphicsGridLayout_SetVerticalSpacing(QGraphicsGridLayout* self, double spacing) {
	self->setVerticalSpacing(static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_VerticalSpacing(QGraphicsGridLayout* self) {
	return const_cast<const QGraphicsGridLayout*>(self)->verticalSpacing();
}

void QGraphicsGridLayout_SetSpacing(QGraphicsGridLayout* self, double spacing) {
	self->setSpacing(static_cast<qreal>(spacing));
}

void QGraphicsGridLayout_SetRowSpacing(QGraphicsGridLayout* self, int row, double spacing) {
	self->setRowSpacing(static_cast<int>(row), static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_RowSpacing(QGraphicsGridLayout* self, int row) {
	return const_cast<const QGraphicsGridLayout*>(self)->rowSpacing(static_cast<int>(row));
}

void QGraphicsGridLayout_SetColumnSpacing(QGraphicsGridLayout* self, int column, double spacing) {
	self->setColumnSpacing(static_cast<int>(column), static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_ColumnSpacing(QGraphicsGridLayout* self, int column) {
	return const_cast<const QGraphicsGridLayout*>(self)->columnSpacing(static_cast<int>(column));
}

void QGraphicsGridLayout_SetRowStretchFactor(QGraphicsGridLayout* self, int row, int stretch) {
	self->setRowStretchFactor(static_cast<int>(row), static_cast<int>(stretch));
}

int QGraphicsGridLayout_RowStretchFactor(QGraphicsGridLayout* self, int row) {
	return const_cast<const QGraphicsGridLayout*>(self)->rowStretchFactor(static_cast<int>(row));
}

void QGraphicsGridLayout_SetColumnStretchFactor(QGraphicsGridLayout* self, int column, int stretch) {
	self->setColumnStretchFactor(static_cast<int>(column), static_cast<int>(stretch));
}

int QGraphicsGridLayout_ColumnStretchFactor(QGraphicsGridLayout* self, int column) {
	return const_cast<const QGraphicsGridLayout*>(self)->columnStretchFactor(static_cast<int>(column));
}

void QGraphicsGridLayout_SetRowMinimumHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowMinimumHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowMinimumHeight(QGraphicsGridLayout* self, int row) {
	return const_cast<const QGraphicsGridLayout*>(self)->rowMinimumHeight(static_cast<int>(row));
}

void QGraphicsGridLayout_SetRowPreferredHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowPreferredHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowPreferredHeight(QGraphicsGridLayout* self, int row) {
	return const_cast<const QGraphicsGridLayout*>(self)->rowPreferredHeight(static_cast<int>(row));
}

void QGraphicsGridLayout_SetRowMaximumHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowMaximumHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowMaximumHeight(QGraphicsGridLayout* self, int row) {
	return const_cast<const QGraphicsGridLayout*>(self)->rowMaximumHeight(static_cast<int>(row));
}

void QGraphicsGridLayout_SetRowFixedHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowFixedHeight(static_cast<int>(row), static_cast<qreal>(height));
}

void QGraphicsGridLayout_SetColumnMinimumWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnMinimumWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnMinimumWidth(QGraphicsGridLayout* self, int column) {
	return const_cast<const QGraphicsGridLayout*>(self)->columnMinimumWidth(static_cast<int>(column));
}

void QGraphicsGridLayout_SetColumnPreferredWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnPreferredWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnPreferredWidth(QGraphicsGridLayout* self, int column) {
	return const_cast<const QGraphicsGridLayout*>(self)->columnPreferredWidth(static_cast<int>(column));
}

void QGraphicsGridLayout_SetColumnMaximumWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnMaximumWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnMaximumWidth(QGraphicsGridLayout* self, int column) {
	return const_cast<const QGraphicsGridLayout*>(self)->columnMaximumWidth(static_cast<int>(column));
}

void QGraphicsGridLayout_SetColumnFixedWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnFixedWidth(static_cast<int>(column), static_cast<qreal>(width));
}

void QGraphicsGridLayout_SetRowAlignment(QGraphicsGridLayout* self, int row, int alignment) {
	self->setRowAlignment(static_cast<int>(row), static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_RowAlignment(QGraphicsGridLayout* self, int row) {
	Qt::Alignment ret = const_cast<const QGraphicsGridLayout*>(self)->rowAlignment(static_cast<int>(row));
	return static_cast<int>(ret);
}

void QGraphicsGridLayout_SetColumnAlignment(QGraphicsGridLayout* self, int column, int alignment) {
	self->setColumnAlignment(static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_ColumnAlignment(QGraphicsGridLayout* self, int column) {
	Qt::Alignment ret = const_cast<const QGraphicsGridLayout*>(self)->columnAlignment(static_cast<int>(column));
	return static_cast<int>(ret);
}

void QGraphicsGridLayout_SetAlignment(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int alignment) {
	self->setAlignment(item, static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_Alignment(QGraphicsGridLayout* self, QGraphicsLayoutItem* item) {
	Qt::Alignment ret = const_cast<const QGraphicsGridLayout*>(self)->alignment(item);
	return static_cast<int>(ret);
}

int QGraphicsGridLayout_RowCount(QGraphicsGridLayout* self) {
	return const_cast<const QGraphicsGridLayout*>(self)->rowCount();
}

int QGraphicsGridLayout_ColumnCount(QGraphicsGridLayout* self) {
	return const_cast<const QGraphicsGridLayout*>(self)->columnCount();
}

QGraphicsLayoutItem* QGraphicsGridLayout_ItemAt(QGraphicsGridLayout* self, int row, int column) {
	return const_cast<const QGraphicsGridLayout*>(self)->itemAt(static_cast<int>(row), static_cast<int>(column));
}

int QGraphicsGridLayout_Count(QGraphicsGridLayout* self) {
	return const_cast<const QGraphicsGridLayout*>(self)->count();
}

QGraphicsLayoutItem* QGraphicsGridLayout_ItemAtWithIndex(QGraphicsGridLayout* self, int index) {
	return const_cast<const QGraphicsGridLayout*>(self)->itemAt(static_cast<int>(index));
}

void QGraphicsGridLayout_RemoveAt(QGraphicsGridLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsGridLayout_RemoveItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item) {
	self->removeItem(item);
}

void QGraphicsGridLayout_Invalidate(QGraphicsGridLayout* self) {
	self->invalidate();
}

void QGraphicsGridLayout_SetGeometry(QGraphicsGridLayout* self, QRectF* rect) {
	self->setGeometry(*rect);
}

QSizeF* QGraphicsGridLayout_SizeHint(QGraphicsGridLayout* self, uintptr_t which) {
	QSizeF ret = const_cast<const QGraphicsGridLayout*>(self)->sizeHint(static_cast<Qt::SizeHint>(which));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsGridLayout_AddItem6(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int alignment) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(alignment));
}

void QGraphicsGridLayout_AddItem4(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int alignment) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

QSizeF* QGraphicsGridLayout_SizeHint2(QGraphicsGridLayout* self, uintptr_t which, QSizeF* constraint) {
	QSizeF ret = const_cast<const QGraphicsGridLayout*>(self)->sizeHint(static_cast<Qt::SizeHint>(which), *constraint);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsGridLayout_Delete(QGraphicsGridLayout* self) {
	delete self;
}

