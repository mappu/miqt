#include "gen_qgridlayout.h"
#include "qgridlayout.h"

#include <QGridLayout>
#include <QLayoutItem>
#include <QMetaObject>
#include <QRect>
#include <QSize>
#include <QString>
#include <QWidget>


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
	return (QMetaObject*) self->metaObject();
}

void QGridLayout_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGridLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGridLayout_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGridLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QGridLayout_SizeHint(QGridLayout* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QGridLayout_MinimumSize(QGridLayout* self) {
	QSize ret = self->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QGridLayout_MaximumSize(QGridLayout* self) {
	QSize ret = self->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QGridLayout_SetHorizontalSpacing(QGridLayout* self, int spacing) {
	self->setHorizontalSpacing(static_cast<int>(spacing));
}

int QGridLayout_HorizontalSpacing(QGridLayout* self) {
	return self->horizontalSpacing();
}

void QGridLayout_SetVerticalSpacing(QGridLayout* self, int spacing) {
	self->setVerticalSpacing(static_cast<int>(spacing));
}

int QGridLayout_VerticalSpacing(QGridLayout* self) {
	return self->verticalSpacing();
}

void QGridLayout_SetSpacing(QGridLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

int QGridLayout_Spacing(QGridLayout* self) {
	return self->spacing();
}

void QGridLayout_SetRowStretch(QGridLayout* self, int row, int stretch) {
	self->setRowStretch(static_cast<int>(row), static_cast<int>(stretch));
}

void QGridLayout_SetColumnStretch(QGridLayout* self, int column, int stretch) {
	self->setColumnStretch(static_cast<int>(column), static_cast<int>(stretch));
}

int QGridLayout_RowStretch(QGridLayout* self, int row) {
	return self->rowStretch(static_cast<int>(row));
}

int QGridLayout_ColumnStretch(QGridLayout* self, int column) {
	return self->columnStretch(static_cast<int>(column));
}

void QGridLayout_SetRowMinimumHeight(QGridLayout* self, int row, int minSize) {
	self->setRowMinimumHeight(static_cast<int>(row), static_cast<int>(minSize));
}

void QGridLayout_SetColumnMinimumWidth(QGridLayout* self, int column, int minSize) {
	self->setColumnMinimumWidth(static_cast<int>(column), static_cast<int>(minSize));
}

int QGridLayout_RowMinimumHeight(QGridLayout* self, int row) {
	return self->rowMinimumHeight(static_cast<int>(row));
}

int QGridLayout_ColumnMinimumWidth(QGridLayout* self, int column) {
	return self->columnMinimumWidth(static_cast<int>(column));
}

int QGridLayout_ColumnCount(QGridLayout* self) {
	return self->columnCount();
}

int QGridLayout_RowCount(QGridLayout* self) {
	return self->rowCount();
}

QRect* QGridLayout_CellRect(QGridLayout* self, int row, int column) {
	QRect ret = self->cellRect(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

bool QGridLayout_HasHeightForWidth(QGridLayout* self) {
	return self->hasHeightForWidth();
}

int QGridLayout_HeightForWidth(QGridLayout* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

int QGridLayout_MinimumHeightForWidth(QGridLayout* self, int param1) {
	return self->minimumHeightForWidth(static_cast<int>(param1));
}

void QGridLayout_Invalidate(QGridLayout* self) {
	self->invalidate();
}

void QGridLayout_AddWidget(QGridLayout* self, QWidget* w) {
	self->addWidget(w);
}

QLayoutItem* QGridLayout_ItemAt(QGridLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QGridLayout_ItemAtPosition(QGridLayout* self, int row, int column) {
	return self->itemAtPosition(static_cast<int>(row), static_cast<int>(column));
}

QLayoutItem* QGridLayout_TakeAt(QGridLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

int QGridLayout_Count(QGridLayout* self) {
	return self->count();
}

void QGridLayout_SetGeometry(QGridLayout* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

void QGridLayout_GetItemPosition(QGridLayout* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan) {
	self->getItemPosition(static_cast<int>(idx), static_cast<int*>(row), static_cast<int*>(column), static_cast<int*>(rowSpan), static_cast<int*>(columnSpan));
}

void QGridLayout_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGridLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGridLayout_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGridLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGridLayout_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGridLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGridLayout_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGridLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGridLayout_Delete(QGridLayout* self) {
	delete self;
}

