#include <QFormLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QFormLayout__TakeRowResult
#include <QLayout>
#include <QLayoutItem>
#include <QMetaObject>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qformlayout.h>
#include "gen_qformlayout.h"
#include "_cgo_export.h"

QFormLayout* QFormLayout_new() {
	return new QFormLayout();
}

QFormLayout* QFormLayout_new2(QWidget* parent) {
	return new QFormLayout(parent);
}

QMetaObject* QFormLayout_MetaObject(const QFormLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFormLayout_Metacast(QFormLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFormLayout_Tr(const char* s) {
	QString _ret = QFormLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFormLayout_SetFieldGrowthPolicy(QFormLayout* self, int policy) {
	self->setFieldGrowthPolicy(static_cast<QFormLayout::FieldGrowthPolicy>(policy));
}

int QFormLayout_FieldGrowthPolicy(const QFormLayout* self) {
	QFormLayout::FieldGrowthPolicy _ret = self->fieldGrowthPolicy();
	return static_cast<int>(_ret);
}

void QFormLayout_SetRowWrapPolicy(QFormLayout* self, int policy) {
	self->setRowWrapPolicy(static_cast<QFormLayout::RowWrapPolicy>(policy));
}

int QFormLayout_RowWrapPolicy(const QFormLayout* self) {
	QFormLayout::RowWrapPolicy _ret = self->rowWrapPolicy();
	return static_cast<int>(_ret);
}

void QFormLayout_SetLabelAlignment(QFormLayout* self, int alignment) {
	self->setLabelAlignment(static_cast<Qt::Alignment>(alignment));
}

int QFormLayout_LabelAlignment(const QFormLayout* self) {
	Qt::Alignment _ret = self->labelAlignment();
	return static_cast<int>(_ret);
}

void QFormLayout_SetFormAlignment(QFormLayout* self, int alignment) {
	self->setFormAlignment(static_cast<Qt::Alignment>(alignment));
}

int QFormLayout_FormAlignment(const QFormLayout* self) {
	Qt::Alignment _ret = self->formAlignment();
	return static_cast<int>(_ret);
}

void QFormLayout_SetHorizontalSpacing(QFormLayout* self, int spacing) {
	self->setHorizontalSpacing(static_cast<int>(spacing));
}

int QFormLayout_HorizontalSpacing(const QFormLayout* self) {
	return self->horizontalSpacing();
}

void QFormLayout_SetVerticalSpacing(QFormLayout* self, int spacing) {
	self->setVerticalSpacing(static_cast<int>(spacing));
}

int QFormLayout_VerticalSpacing(const QFormLayout* self) {
	return self->verticalSpacing();
}

int QFormLayout_Spacing(const QFormLayout* self) {
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

void QFormLayout_AddRow3(QFormLayout* self, struct miqt_string labelText, QWidget* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	self->addRow(labelText_QString, field);
}

void QFormLayout_AddRow4(QFormLayout* self, struct miqt_string labelText, QLayout* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
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

void QFormLayout_InsertRow3(QFormLayout* self, int row, struct miqt_string labelText, QWidget* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	self->insertRow(static_cast<int>(row), labelText_QString, field);
}

void QFormLayout_InsertRow4(QFormLayout* self, int row, struct miqt_string labelText, QLayout* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
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

QFormLayout__TakeRowResult* QFormLayout_TakeRow(QFormLayout* self, int row) {
	return new QFormLayout::TakeRowResult(self->takeRow(static_cast<int>(row)));
}

QFormLayout__TakeRowResult* QFormLayout_TakeRowWithWidget(QFormLayout* self, QWidget* widget) {
	return new QFormLayout::TakeRowResult(self->takeRow(widget));
}

QFormLayout__TakeRowResult* QFormLayout_TakeRowWithLayout(QFormLayout* self, QLayout* layout) {
	return new QFormLayout::TakeRowResult(self->takeRow(layout));
}

void QFormLayout_SetItem(QFormLayout* self, int row, int role, QLayoutItem* item) {
	self->setItem(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), item);
}

void QFormLayout_SetWidget(QFormLayout* self, int row, int role, QWidget* widget) {
	self->setWidget(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), widget);
}

void QFormLayout_SetLayout(QFormLayout* self, int row, int role, QLayout* layout) {
	self->setLayout(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), layout);
}

void QFormLayout_SetRowVisible(QFormLayout* self, int row, bool on) {
	self->setRowVisible(static_cast<int>(row), on);
}

void QFormLayout_SetRowVisible2(QFormLayout* self, QWidget* widget, bool on) {
	self->setRowVisible(widget, on);
}

void QFormLayout_SetRowVisible3(QFormLayout* self, QLayout* layout, bool on) {
	self->setRowVisible(layout, on);
}

bool QFormLayout_IsRowVisible(const QFormLayout* self, int row) {
	return self->isRowVisible(static_cast<int>(row));
}

bool QFormLayout_IsRowVisibleWithWidget(const QFormLayout* self, QWidget* widget) {
	return self->isRowVisible(widget);
}

bool QFormLayout_IsRowVisibleWithLayout(const QFormLayout* self, QLayout* layout) {
	return self->isRowVisible(layout);
}

QLayoutItem* QFormLayout_ItemAt(const QFormLayout* self, int row, int role) {
	return self->itemAt(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role));
}

QWidget* QFormLayout_LabelForField(const QFormLayout* self, QWidget* field) {
	return self->labelForField(field);
}

QWidget* QFormLayout_LabelForFieldWithField(const QFormLayout* self, QLayout* field) {
	return self->labelForField(field);
}

void QFormLayout_AddItem(QFormLayout* self, QLayoutItem* item) {
	self->addItem(item);
}

QLayoutItem* QFormLayout_ItemAtWithIndex(const QFormLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QFormLayout_TakeAt(QFormLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

void QFormLayout_SetGeometry(QFormLayout* self, QRect* rect) {
	self->setGeometry(*rect);
}

QSize* QFormLayout_MinimumSize(const QFormLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QFormLayout_SizeHint(const QFormLayout* self) {
	return new QSize(self->sizeHint());
}

void QFormLayout_Invalidate(QFormLayout* self) {
	self->invalidate();
}

bool QFormLayout_HasHeightForWidth(const QFormLayout* self) {
	return self->hasHeightForWidth();
}

int QFormLayout_HeightForWidth(const QFormLayout* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

int QFormLayout_ExpandingDirections(const QFormLayout* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

int QFormLayout_Count(const QFormLayout* self) {
	return self->count();
}

int QFormLayout_RowCount(const QFormLayout* self) {
	return self->rowCount();
}

struct miqt_string QFormLayout_Tr2(const char* s, const char* c) {
	QString _ret = QFormLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFormLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFormLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFormLayout_Delete(QFormLayout* self) {
	delete self;
}

void QFormLayout__TakeRowResult_Delete(QFormLayout__TakeRowResult* self) {
	delete self;
}

