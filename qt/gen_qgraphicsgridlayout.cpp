#include <QGraphicsGridLayout>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include "qgraphicsgridlayout.h"
#include "gen_qgraphicsgridlayout.h"
#include "_cgo_export.h"

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

double QGraphicsGridLayout_HorizontalSpacing(const QGraphicsGridLayout* self) {
	qreal _ret = self->horizontalSpacing();
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetVerticalSpacing(QGraphicsGridLayout* self, double spacing) {
	self->setVerticalSpacing(static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_VerticalSpacing(const QGraphicsGridLayout* self) {
	qreal _ret = self->verticalSpacing();
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetSpacing(QGraphicsGridLayout* self, double spacing) {
	self->setSpacing(static_cast<qreal>(spacing));
}

void QGraphicsGridLayout_SetRowSpacing(QGraphicsGridLayout* self, int row, double spacing) {
	self->setRowSpacing(static_cast<int>(row), static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_RowSpacing(const QGraphicsGridLayout* self, int row) {
	qreal _ret = self->rowSpacing(static_cast<int>(row));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetColumnSpacing(QGraphicsGridLayout* self, int column, double spacing) {
	self->setColumnSpacing(static_cast<int>(column), static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_ColumnSpacing(const QGraphicsGridLayout* self, int column) {
	qreal _ret = self->columnSpacing(static_cast<int>(column));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetRowStretchFactor(QGraphicsGridLayout* self, int row, int stretch) {
	self->setRowStretchFactor(static_cast<int>(row), static_cast<int>(stretch));
}

int QGraphicsGridLayout_RowStretchFactor(const QGraphicsGridLayout* self, int row) {
	return self->rowStretchFactor(static_cast<int>(row));
}

void QGraphicsGridLayout_SetColumnStretchFactor(QGraphicsGridLayout* self, int column, int stretch) {
	self->setColumnStretchFactor(static_cast<int>(column), static_cast<int>(stretch));
}

int QGraphicsGridLayout_ColumnStretchFactor(const QGraphicsGridLayout* self, int column) {
	return self->columnStretchFactor(static_cast<int>(column));
}

void QGraphicsGridLayout_SetRowMinimumHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowMinimumHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowMinimumHeight(const QGraphicsGridLayout* self, int row) {
	qreal _ret = self->rowMinimumHeight(static_cast<int>(row));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetRowPreferredHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowPreferredHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowPreferredHeight(const QGraphicsGridLayout* self, int row) {
	qreal _ret = self->rowPreferredHeight(static_cast<int>(row));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetRowMaximumHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowMaximumHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowMaximumHeight(const QGraphicsGridLayout* self, int row) {
	qreal _ret = self->rowMaximumHeight(static_cast<int>(row));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetRowFixedHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowFixedHeight(static_cast<int>(row), static_cast<qreal>(height));
}

void QGraphicsGridLayout_SetColumnMinimumWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnMinimumWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnMinimumWidth(const QGraphicsGridLayout* self, int column) {
	qreal _ret = self->columnMinimumWidth(static_cast<int>(column));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetColumnPreferredWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnPreferredWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnPreferredWidth(const QGraphicsGridLayout* self, int column) {
	qreal _ret = self->columnPreferredWidth(static_cast<int>(column));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetColumnMaximumWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnMaximumWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnMaximumWidth(const QGraphicsGridLayout* self, int column) {
	qreal _ret = self->columnMaximumWidth(static_cast<int>(column));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetColumnFixedWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnFixedWidth(static_cast<int>(column), static_cast<qreal>(width));
}

void QGraphicsGridLayout_SetRowAlignment(QGraphicsGridLayout* self, int row, int alignment) {
	self->setRowAlignment(static_cast<int>(row), static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_RowAlignment(const QGraphicsGridLayout* self, int row) {
	Qt::Alignment _ret = self->rowAlignment(static_cast<int>(row));
	return static_cast<int>(_ret);
}

void QGraphicsGridLayout_SetColumnAlignment(QGraphicsGridLayout* self, int column, int alignment) {
	self->setColumnAlignment(static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_ColumnAlignment(const QGraphicsGridLayout* self, int column) {
	Qt::Alignment _ret = self->columnAlignment(static_cast<int>(column));
	return static_cast<int>(_ret);
}

void QGraphicsGridLayout_SetAlignment(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int alignment) {
	self->setAlignment(item, static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_Alignment(const QGraphicsGridLayout* self, QGraphicsLayoutItem* item) {
	Qt::Alignment _ret = self->alignment(item);
	return static_cast<int>(_ret);
}

int QGraphicsGridLayout_RowCount(const QGraphicsGridLayout* self) {
	return self->rowCount();
}

int QGraphicsGridLayout_ColumnCount(const QGraphicsGridLayout* self) {
	return self->columnCount();
}

QGraphicsLayoutItem* QGraphicsGridLayout_ItemAt(const QGraphicsGridLayout* self, int row, int column) {
	return self->itemAt(static_cast<int>(row), static_cast<int>(column));
}

int QGraphicsGridLayout_Count(const QGraphicsGridLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsGridLayout_ItemAtWithIndex(const QGraphicsGridLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
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

QSizeF* QGraphicsGridLayout_SizeHint(const QGraphicsGridLayout* self, int which) {
	return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which)));
}

void QGraphicsGridLayout_AddItem6(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int alignment) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(alignment));
}

void QGraphicsGridLayout_AddItem4(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int alignment) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

QSizeF* QGraphicsGridLayout_SizeHint2(const QGraphicsGridLayout* self, int which, QSizeF* constraint) {
	return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

void QGraphicsGridLayout_Delete(QGraphicsGridLayout* self) {
	delete self;
}

