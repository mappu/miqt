#include "gen_qformlayout.h"
#include "qformlayout.h"

#include <QFormLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QMetaObject>
#include <QRect>
#include <QSize>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFormLayout* QFormLayout_new() {
	return new QFormLayout();
}

QFormLayout* QFormLayout_new2(QWidget* parent) {
	return new QFormLayout(parent);
}

QMetaObject* QFormLayout_MetaObject(QFormLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void QFormLayout_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QFormLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFormLayout_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QFormLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFormLayout_SetHorizontalSpacing(QFormLayout* self, int spacing) {
	self->setHorizontalSpacing(static_cast<int>(spacing));
}

int QFormLayout_HorizontalSpacing(QFormLayout* self) {
	return self->horizontalSpacing();
}

void QFormLayout_SetVerticalSpacing(QFormLayout* self, int spacing) {
	self->setVerticalSpacing(static_cast<int>(spacing));
}

int QFormLayout_VerticalSpacing(QFormLayout* self) {
	return self->verticalSpacing();
}

int QFormLayout_Spacing(QFormLayout* self) {
	return self->spacing();
}

void QFormLayout_SetSpacing(QFormLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

void QFormLayout_AddRow(QFormLayout* self, QWidget* label, QWidget* field) {
	self->addRow(label, field);
}

void QFormLayout_AddRow2(QFormLayout* self, QWidget* label, QLayout* field) {
	self->addRow(label, field);
}

void QFormLayout_AddRow3(QFormLayout* self, const char* labelText, size_t labelText_Strlen, QWidget* field) {
	QString labelText_QString = QString::fromUtf8(labelText, labelText_Strlen);
	self->addRow(labelText_QString, field);
}

void QFormLayout_AddRow4(QFormLayout* self, const char* labelText, size_t labelText_Strlen, QLayout* field) {
	QString labelText_QString = QString::fromUtf8(labelText, labelText_Strlen);
	self->addRow(labelText_QString, field);
}

void QFormLayout_AddRowWithWidget(QFormLayout* self, QWidget* widget) {
	self->addRow(widget);
}

void QFormLayout_AddRowWithLayout(QFormLayout* self, QLayout* layout) {
	self->addRow(layout);
}

void QFormLayout_InsertRow(QFormLayout* self, int row, QWidget* label, QWidget* field) {
	self->insertRow(static_cast<int>(row), label, field);
}

void QFormLayout_InsertRow2(QFormLayout* self, int row, QWidget* label, QLayout* field) {
	self->insertRow(static_cast<int>(row), label, field);
}

void QFormLayout_InsertRow3(QFormLayout* self, int row, const char* labelText, size_t labelText_Strlen, QWidget* field) {
	QString labelText_QString = QString::fromUtf8(labelText, labelText_Strlen);
	self->insertRow(static_cast<int>(row), labelText_QString, field);
}

void QFormLayout_InsertRow4(QFormLayout* self, int row, const char* labelText, size_t labelText_Strlen, QLayout* field) {
	QString labelText_QString = QString::fromUtf8(labelText, labelText_Strlen);
	self->insertRow(static_cast<int>(row), labelText_QString, field);
}

void QFormLayout_InsertRow5(QFormLayout* self, int row, QWidget* widget) {
	self->insertRow(static_cast<int>(row), widget);
}

void QFormLayout_InsertRow6(QFormLayout* self, int row, QLayout* layout) {
	self->insertRow(static_cast<int>(row), layout);
}

void QFormLayout_RemoveRow(QFormLayout* self, int row) {
	self->removeRow(static_cast<int>(row));
}

void QFormLayout_RemoveRowWithWidget(QFormLayout* self, QWidget* widget) {
	self->removeRow(widget);
}

void QFormLayout_RemoveRowWithLayout(QFormLayout* self, QLayout* layout) {
	self->removeRow(layout);
}

QWidget* QFormLayout_LabelForField(QFormLayout* self, QWidget* field) {
	return self->labelForField(field);
}

QWidget* QFormLayout_LabelForFieldWithField(QFormLayout* self, QLayout* field) {
	return self->labelForField(field);
}

void QFormLayout_AddItem(QFormLayout* self, QLayoutItem* item) {
	self->addItem(item);
}

QLayoutItem* QFormLayout_ItemAt(QFormLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QFormLayout_TakeAt(QFormLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

void QFormLayout_SetGeometry(QFormLayout* self, QRect* rect) {
	self->setGeometry(*rect);
}

QSize* QFormLayout_MinimumSize(QFormLayout* self) {
	QSize ret = self->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QFormLayout_SizeHint(QFormLayout* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QFormLayout_Invalidate(QFormLayout* self) {
	self->invalidate();
}

bool QFormLayout_HasHeightForWidth(QFormLayout* self) {
	return self->hasHeightForWidth();
}

int QFormLayout_HeightForWidth(QFormLayout* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

int QFormLayout_Count(QFormLayout* self) {
	return self->count();
}

int QFormLayout_RowCount(QFormLayout* self) {
	return self->rowCount();
}

void QFormLayout_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QFormLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFormLayout_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFormLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFormLayout_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QFormLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFormLayout_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFormLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFormLayout_Delete(QFormLayout* self) {
	delete self;
}

