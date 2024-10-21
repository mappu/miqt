#include <QGridLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QMetaObject>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qgridlayout.h>
#include "gen_qgridlayout.h"
#include "_cgo_export.h"

QGridLayout* QGridLayout_new() {
	return new QGridLayout();
}

QGridLayout* QGridLayout_new2(QWidget* parent) {
	return new QGridLayout(parent);
}

QMetaObject* QGridLayout_MetaObject(const QGridLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGridLayout_Metacast(QGridLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGridLayout_Tr(const char* s) {
	QString _ret = QGridLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QGridLayout_SizeHint(const QGridLayout* self) {
	return new QSize(self->sizeHint());
}

QSize* QGridLayout_MinimumSize(const QGridLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QGridLayout_MaximumSize(const QGridLayout* self) {
	return new QSize(self->maximumSize());
}

void QGridLayout_SetHorizontalSpacing(QGridLayout* self, int spacing) {
	self->setHorizontalSpacing(static_cast<int>(spacing));
}

int QGridLayout_HorizontalSpacing(const QGridLayout* self) {
	return self->horizontalSpacing();
}

void QGridLayout_SetVerticalSpacing(QGridLayout* self, int spacing) {
	self->setVerticalSpacing(static_cast<int>(spacing));
}

int QGridLayout_VerticalSpacing(const QGridLayout* self) {
	return self->verticalSpacing();
}

void QGridLayout_SetSpacing(QGridLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

int QGridLayout_Spacing(const QGridLayout* self) {
	return self->spacing();
}

void QGridLayout_SetRowStretch(QGridLayout* self, int row, int stretch) {
	self->setRowStretch(static_cast<int>(row), static_cast<int>(stretch));
}

void QGridLayout_SetColumnStretch(QGridLayout* self, int column, int stretch) {
	self->setColumnStretch(static_cast<int>(column), static_cast<int>(stretch));
}

int QGridLayout_RowStretch(const QGridLayout* self, int row) {
	return self->rowStretch(static_cast<int>(row));
}

int QGridLayout_ColumnStretch(const QGridLayout* self, int column) {
	return self->columnStretch(static_cast<int>(column));
}

void QGridLayout_SetRowMinimumHeight(QGridLayout* self, int row, int minSize) {
	self->setRowMinimumHeight(static_cast<int>(row), static_cast<int>(minSize));
}

void QGridLayout_SetColumnMinimumWidth(QGridLayout* self, int column, int minSize) {
	self->setColumnMinimumWidth(static_cast<int>(column), static_cast<int>(minSize));
}

int QGridLayout_RowMinimumHeight(const QGridLayout* self, int row) {
	return self->rowMinimumHeight(static_cast<int>(row));
}

int QGridLayout_ColumnMinimumWidth(const QGridLayout* self, int column) {
	return self->columnMinimumWidth(static_cast<int>(column));
}

int QGridLayout_ColumnCount(const QGridLayout* self) {
	return self->columnCount();
}

int QGridLayout_RowCount(const QGridLayout* self) {
	return self->rowCount();
}

QRect* QGridLayout_CellRect(const QGridLayout* self, int row, int column) {
	return new QRect(self->cellRect(static_cast<int>(row), static_cast<int>(column)));
}

bool QGridLayout_HasHeightForWidth(const QGridLayout* self) {
	return self->hasHeightForWidth();
}

int QGridLayout_HeightForWidth(const QGridLayout* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

int QGridLayout_MinimumHeightForWidth(const QGridLayout* self, int param1) {
	return self->minimumHeightForWidth(static_cast<int>(param1));
}

int QGridLayout_ExpandingDirections(const QGridLayout* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

void QGridLayout_Invalidate(QGridLayout* self) {
	self->invalidate();
}

void QGridLayout_AddWidget(QGridLayout* self, QWidget* w) {
	self->addWidget(w);
}

void QGridLayout_AddWidget2(QGridLayout* self, QWidget* param1, int row, int column) {
	self->addWidget(param1, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_AddWidget3(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan) {
	self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_AddLayout(QGridLayout* self, QLayout* param1, int row, int column) {
	self->addLayout(param1, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_AddLayout2(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan) {
	self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_SetOriginCorner(QGridLayout* self, int originCorner) {
	self->setOriginCorner(static_cast<Qt::Corner>(originCorner));
}

int QGridLayout_OriginCorner(const QGridLayout* self) {
	Qt::Corner _ret = self->originCorner();
	return static_cast<int>(_ret);
}

QLayoutItem* QGridLayout_ItemAt(const QGridLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QGridLayout_ItemAtPosition(const QGridLayout* self, int row, int column) {
	return self->itemAtPosition(static_cast<int>(row), static_cast<int>(column));
}

QLayoutItem* QGridLayout_TakeAt(QGridLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

int QGridLayout_Count(const QGridLayout* self) {
	return self->count();
}

void QGridLayout_SetGeometry(QGridLayout* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

void QGridLayout_AddItem(QGridLayout* self, QLayoutItem* item, int row, int column) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_SetDefaultPositioning(QGridLayout* self, int n, int orient) {
	self->setDefaultPositioning(static_cast<int>(n), static_cast<Qt::Orientation>(orient));
}

void QGridLayout_GetItemPosition(const QGridLayout* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan) {
	self->getItemPosition(static_cast<int>(idx), static_cast<int*>(row), static_cast<int*>(column), static_cast<int*>(rowSpan), static_cast<int*>(columnSpan));
}

struct miqt_string QGridLayout_Tr2(const char* s, const char* c) {
	QString _ret = QGridLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGridLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGridLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGridLayout_AddWidget4(QGridLayout* self, QWidget* param1, int row, int column, int param4) {
	self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(param4));
}

void QGridLayout_AddWidget6(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan, int param6) {
	self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(param6));
}

void QGridLayout_AddLayout4(QGridLayout* self, QLayout* param1, int row, int column, int param4) {
	self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(param4));
}

void QGridLayout_AddLayout6(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan, int param6) {
	self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(param6));
}

void QGridLayout_AddItem4(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan));
}

void QGridLayout_AddItem5(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_AddItem6(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int param6) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(param6));
}

void QGridLayout_Delete(QGridLayout* self) {
	delete self;
}

