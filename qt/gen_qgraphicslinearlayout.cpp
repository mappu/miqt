#include "gen_qgraphicslinearlayout.h"
#include "qgraphicslinearlayout.h"

#include <QGraphicsLayoutItem>
#include <QGraphicsLinearLayout>
#include <QRectF>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new() {
	return new QGraphicsLinearLayout();
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new2(QGraphicsLayoutItem* parent) {
	return new QGraphicsLinearLayout(parent);
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

double QGraphicsLinearLayout_Spacing(QGraphicsLinearLayout* self) {
	return self->spacing();
}

void QGraphicsLinearLayout_SetItemSpacing(QGraphicsLinearLayout* self, int index, double spacing) {
	self->setItemSpacing(static_cast<int>(index), static_cast<qreal>(spacing));
}

double QGraphicsLinearLayout_ItemSpacing(QGraphicsLinearLayout* self, int index) {
	return self->itemSpacing(static_cast<int>(index));
}

void QGraphicsLinearLayout_SetStretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int stretch) {
	self->setStretchFactor(item, static_cast<int>(stretch));
}

int QGraphicsLinearLayout_StretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	return self->stretchFactor(item);
}

void QGraphicsLinearLayout_SetGeometry(QGraphicsLinearLayout* self, QRectF* rect) {
	self->setGeometry(*rect);
}

int QGraphicsLinearLayout_Count(QGraphicsLinearLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsLinearLayout_ItemAt(QGraphicsLinearLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

void QGraphicsLinearLayout_Invalidate(QGraphicsLinearLayout* self) {
	self->invalidate();
}

void QGraphicsLinearLayout_Dump(QGraphicsLinearLayout* self) {
	self->dump();
}

void QGraphicsLinearLayout_AddStretch1(QGraphicsLinearLayout* self, int stretch) {
	self->addStretch(static_cast<int>(stretch));
}

void QGraphicsLinearLayout_InsertStretch2(QGraphicsLinearLayout* self, int index, int stretch) {
	self->insertStretch(static_cast<int>(index), static_cast<int>(stretch));
}

void QGraphicsLinearLayout_Dump1(QGraphicsLinearLayout* self, int indent) {
	self->dump(static_cast<int>(indent));
}

void QGraphicsLinearLayout_Delete(QGraphicsLinearLayout* self) {
	delete self;
}

