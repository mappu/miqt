#include <QGraphicsLayoutItem>
#include <QGraphicsLinearLayout>
#include <QRectF>
#include <QSizeF>
#include "qgraphicslinearlayout.h"
#include "gen_qgraphicslinearlayout.h"
#include "_cgo_export.h"

QGraphicsLinearLayout* QGraphicsLinearLayout_new() {
	return new QGraphicsLinearLayout();
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new2(uintptr_t orientation) {
	return new QGraphicsLinearLayout(static_cast<Qt::Orientation>(orientation));
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new3(QGraphicsLayoutItem* parent) {
	return new QGraphicsLinearLayout(parent);
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new4(uintptr_t orientation, QGraphicsLayoutItem* parent) {
	return new QGraphicsLinearLayout(static_cast<Qt::Orientation>(orientation), parent);
}

void QGraphicsLinearLayout_SetOrientation(QGraphicsLinearLayout* self, uintptr_t orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

uintptr_t QGraphicsLinearLayout_Orientation(const QGraphicsLinearLayout* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<uintptr_t>(_ret);
}

void QGraphicsLinearLayout_AddItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	self->addItem(item);
}

void QGraphicsLinearLayout_AddStretch(QGraphicsLinearLayout* self) {
	self->addStretch();
}

void QGraphicsLinearLayout_InsertItem(QGraphicsLinearLayout* self, int index, QGraphicsLayoutItem* item) {
	self->insertItem(static_cast<int>(index), item);
}

void QGraphicsLinearLayout_InsertStretch(QGraphicsLinearLayout* self, int index) {
	self->insertStretch(static_cast<int>(index));
}

void QGraphicsLinearLayout_RemoveItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	self->removeItem(item);
}

void QGraphicsLinearLayout_RemoveAt(QGraphicsLinearLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsLinearLayout_SetSpacing(QGraphicsLinearLayout* self, double spacing) {
	self->setSpacing(static_cast<qreal>(spacing));
}

double QGraphicsLinearLayout_Spacing(const QGraphicsLinearLayout* self) {
	return self->spacing();
}

void QGraphicsLinearLayout_SetItemSpacing(QGraphicsLinearLayout* self, int index, double spacing) {
	self->setItemSpacing(static_cast<int>(index), static_cast<qreal>(spacing));
}

double QGraphicsLinearLayout_ItemSpacing(const QGraphicsLinearLayout* self, int index) {
	return self->itemSpacing(static_cast<int>(index));
}

void QGraphicsLinearLayout_SetStretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int stretch) {
	self->setStretchFactor(item, static_cast<int>(stretch));
}

int QGraphicsLinearLayout_StretchFactor(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	return self->stretchFactor(item);
}

void QGraphicsLinearLayout_SetAlignment(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int alignment) {
	self->setAlignment(item, static_cast<Qt::Alignment>(alignment));
}

int QGraphicsLinearLayout_Alignment(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	Qt::Alignment _ret = self->alignment(item);
	return static_cast<int>(_ret);
}

void QGraphicsLinearLayout_SetGeometry(QGraphicsLinearLayout* self, QRectF* rect) {
	self->setGeometry(*rect);
}

int QGraphicsLinearLayout_Count(const QGraphicsLinearLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsLinearLayout_ItemAt(const QGraphicsLinearLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

void QGraphicsLinearLayout_Invalidate(QGraphicsLinearLayout* self) {
	self->invalidate();
}

QSizeF* QGraphicsLinearLayout_SizeHint(const QGraphicsLinearLayout* self, uintptr_t which) {
	return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which)));
}

void QGraphicsLinearLayout_Dump(const QGraphicsLinearLayout* self) {
	self->dump();
}

void QGraphicsLinearLayout_AddStretch1(QGraphicsLinearLayout* self, int stretch) {
	self->addStretch(static_cast<int>(stretch));
}

void QGraphicsLinearLayout_InsertStretch2(QGraphicsLinearLayout* self, int index, int stretch) {
	self->insertStretch(static_cast<int>(index), static_cast<int>(stretch));
}

QSizeF* QGraphicsLinearLayout_SizeHint2(const QGraphicsLinearLayout* self, uintptr_t which, QSizeF* constraint) {
	return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

void QGraphicsLinearLayout_Dump1(const QGraphicsLinearLayout* self, int indent) {
	self->dump(static_cast<int>(indent));
}

void QGraphicsLinearLayout_Delete(QGraphicsLinearLayout* self) {
	delete self;
}

