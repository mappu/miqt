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
#include "qgridlayout.h"

#include "gen_qgridlayout.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGridLayout* QGridLayout_new(QWidget* parent) {
	return new QGridLayout(parent);
}

QGridLayout* QGridLayout_new2() {
	return new QGridLayout();
}

QMetaObject* QGridLayout_MetaObject(QGridLayout* self) {
	return (QMetaObject*) const_cast<const QGridLayout*>(self)->metaObject();
}

void QGridLayout_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGridLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGridLayout_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGridLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QGridLayout_SizeHint(QGridLayout* self) {
	QSize ret = const_cast<const QGridLayout*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QGridLayout_MinimumSize(QGridLayout* self) {
	QSize ret = const_cast<const QGridLayout*>(self)->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QGridLayout_MaximumSize(QGridLayout* self) {
	QSize ret = const_cast<const QGridLayout*>(self)->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QGridLayout_SetHorizontalSpacing(QGridLayout* self, int spacing) {
	self->setHorizontalSpacing(static_cast<int>(spacing));
}

int QGridLayout_HorizontalSpacing(QGridLayout* self) {
	return const_cast<const QGridLayout*>(self)->horizontalSpacing();
}

void QGridLayout_SetVerticalSpacing(QGridLayout* self, int spacing) {
	self->setVerticalSpacing(static_cast<int>(spacing));
}

int QGridLayout_VerticalSpacing(QGridLayout* self) {
	return const_cast<const QGridLayout*>(self)->verticalSpacing();
}

void QGridLayout_SetSpacing(QGridLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

int QGridLayout_Spacing(QGridLayout* self) {
	return const_cast<const QGridLayout*>(self)->spacing();
}

void QGridLayout_SetRowStretch(QGridLayout* self, int row, int stretch) {
	self->setRowStretch(static_cast<int>(row), static_cast<int>(stretch));
}

void QGridLayout_SetColumnStretch(QGridLayout* self, int column, int stretch) {
	self->setColumnStretch(static_cast<int>(column), static_cast<int>(stretch));
}

int QGridLayout_RowStretch(QGridLayout* self, int row) {
	return const_cast<const QGridLayout*>(self)->rowStretch(static_cast<int>(row));
}

int QGridLayout_ColumnStretch(QGridLayout* self, int column) {
	return const_cast<const QGridLayout*>(self)->columnStretch(static_cast<int>(column));
}

void QGridLayout_SetRowMinimumHeight(QGridLayout* self, int row, int minSize) {
	self->setRowMinimumHeight(static_cast<int>(row), static_cast<int>(minSize));
}

void QGridLayout_SetColumnMinimumWidth(QGridLayout* self, int column, int minSize) {
	self->setColumnMinimumWidth(static_cast<int>(column), static_cast<int>(minSize));
}

int QGridLayout_RowMinimumHeight(QGridLayout* self, int row) {
	return const_cast<const QGridLayout*>(self)->rowMinimumHeight(static_cast<int>(row));
}

int QGridLayout_ColumnMinimumWidth(QGridLayout* self, int column) {
	return const_cast<const QGridLayout*>(self)->columnMinimumWidth(static_cast<int>(column));
}

int QGridLayout_ColumnCount(QGridLayout* self) {
	return const_cast<const QGridLayout*>(self)->columnCount();
}

int QGridLayout_RowCount(QGridLayout* self) {
	return const_cast<const QGridLayout*>(self)->rowCount();
}

QRect* QGridLayout_CellRect(QGridLayout* self, int row, int column) {
	QRect ret = const_cast<const QGridLayout*>(self)->cellRect(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

bool QGridLayout_HasHeightForWidth(QGridLayout* self) {
	return const_cast<const QGridLayout*>(self)->hasHeightForWidth();
}

int QGridLayout_HeightForWidth(QGridLayout* self, int param1) {
	return const_cast<const QGridLayout*>(self)->heightForWidth(static_cast<int>(param1));
}

int QGridLayout_MinimumHeightForWidth(QGridLayout* self, int param1) {
	return const_cast<const QGridLayout*>(self)->minimumHeightForWidth(static_cast<int>(param1));
}

int QGridLayout_ExpandingDirections(QGridLayout* self) {
	Qt::Orientations ret = const_cast<const QGridLayout*>(self)->expandingDirections();
	return static_cast<int>(ret);
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

void QGridLayout_SetOriginCorner(QGridLayout* self, uintptr_t originCorner) {
	self->setOriginCorner(static_cast<Qt::Corner>(originCorner));
}

uintptr_t QGridLayout_OriginCorner(QGridLayout* self) {
	Qt::Corner ret = const_cast<const QGridLayout*>(self)->originCorner();
	return static_cast<uintptr_t>(ret);
}

QLayoutItem* QGridLayout_ItemAt(QGridLayout* self, int index) {
	return const_cast<const QGridLayout*>(self)->itemAt(static_cast<int>(index));
}

QLayoutItem* QGridLayout_ItemAtPosition(QGridLayout* self, int row, int column) {
	return const_cast<const QGridLayout*>(self)->itemAtPosition(static_cast<int>(row), static_cast<int>(column));
}

QLayoutItem* QGridLayout_TakeAt(QGridLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

int QGridLayout_Count(QGridLayout* self) {
	return const_cast<const QGridLayout*>(self)->count();
}

void QGridLayout_SetGeometry(QGridLayout* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

void QGridLayout_AddItem(QGridLayout* self, QLayoutItem* item, int row, int column) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_SetDefaultPositioning(QGridLayout* self, int n, uintptr_t orient) {
	self->setDefaultPositioning(static_cast<int>(n), static_cast<Qt::Orientation>(orient));
}

void QGridLayout_GetItemPosition(QGridLayout* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan) {
	const_cast<const QGridLayout*>(self)->getItemPosition(static_cast<int>(idx), static_cast<int*>(row), static_cast<int*>(column), static_cast<int*>(rowSpan), static_cast<int*>(columnSpan));
}

void QGridLayout_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGridLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGridLayout_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGridLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGridLayout_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGridLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGridLayout_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGridLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

