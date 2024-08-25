#include "gen_qgraphicslayoutitem.h"
#include "qgraphicslayoutitem.h"

#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <QSizePolicy>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QGraphicsLayoutItem_SetSizePolicy(QGraphicsLayoutItem* self, QSizePolicy* policy) {
	self->setSizePolicy(*policy);
}

QSizePolicy* QGraphicsLayoutItem_SizePolicy(QGraphicsLayoutItem* self) {
	QSizePolicy ret = self->sizePolicy();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizePolicy*>(new QSizePolicy(ret));
}

void QGraphicsLayoutItem_SetMinimumSize(QGraphicsLayoutItem* self, QSizeF* size) {
	self->setMinimumSize(*size);
}

void QGraphicsLayoutItem_SetMinimumSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setMinimumSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsLayoutItem_MinimumSize(QGraphicsLayoutItem* self) {
	QSizeF ret = self->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsLayoutItem_SetMinimumWidth(QGraphicsLayoutItem* self, double width) {
	self->setMinimumWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_MinimumWidth(QGraphicsLayoutItem* self) {
	return self->minimumWidth();
}

void QGraphicsLayoutItem_SetMinimumHeight(QGraphicsLayoutItem* self, double height) {
	self->setMinimumHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_MinimumHeight(QGraphicsLayoutItem* self) {
	return self->minimumHeight();
}

void QGraphicsLayoutItem_SetPreferredSize(QGraphicsLayoutItem* self, QSizeF* size) {
	self->setPreferredSize(*size);
}

void QGraphicsLayoutItem_SetPreferredSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setPreferredSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsLayoutItem_PreferredSize(QGraphicsLayoutItem* self) {
	QSizeF ret = self->preferredSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsLayoutItem_SetPreferredWidth(QGraphicsLayoutItem* self, double width) {
	self->setPreferredWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_PreferredWidth(QGraphicsLayoutItem* self) {
	return self->preferredWidth();
}

void QGraphicsLayoutItem_SetPreferredHeight(QGraphicsLayoutItem* self, double height) {
	self->setPreferredHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_PreferredHeight(QGraphicsLayoutItem* self) {
	return self->preferredHeight();
}

void QGraphicsLayoutItem_SetMaximumSize(QGraphicsLayoutItem* self, QSizeF* size) {
	self->setMaximumSize(*size);
}

void QGraphicsLayoutItem_SetMaximumSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setMaximumSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsLayoutItem_MaximumSize(QGraphicsLayoutItem* self) {
	QSizeF ret = self->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsLayoutItem_SetMaximumWidth(QGraphicsLayoutItem* self, double width) {
	self->setMaximumWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_MaximumWidth(QGraphicsLayoutItem* self) {
	return self->maximumWidth();
}

void QGraphicsLayoutItem_SetMaximumHeight(QGraphicsLayoutItem* self, double height) {
	self->setMaximumHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_MaximumHeight(QGraphicsLayoutItem* self) {
	return self->maximumHeight();
}

void QGraphicsLayoutItem_SetGeometry(QGraphicsLayoutItem* self, QRectF* rect) {
	self->setGeometry(*rect);
}

QRectF* QGraphicsLayoutItem_Geometry(QGraphicsLayoutItem* self) {
	QRectF ret = self->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QGraphicsLayoutItem_GetContentsMargins(QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

QRectF* QGraphicsLayoutItem_ContentsRect(QGraphicsLayoutItem* self) {
	QRectF ret = self->contentsRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QGraphicsLayoutItem_UpdateGeometry(QGraphicsLayoutItem* self) {
	self->updateGeometry();
}

QGraphicsLayoutItem* QGraphicsLayoutItem_ParentLayoutItem(QGraphicsLayoutItem* self) {
	return self->parentLayoutItem();
}

void QGraphicsLayoutItem_SetParentLayoutItem(QGraphicsLayoutItem* self, QGraphicsLayoutItem* parent) {
	self->setParentLayoutItem(parent);
}

bool QGraphicsLayoutItem_IsLayout(QGraphicsLayoutItem* self) {
	return self->isLayout();
}

QGraphicsItem* QGraphicsLayoutItem_GraphicsItem(QGraphicsLayoutItem* self) {
	return self->graphicsItem();
}

bool QGraphicsLayoutItem_OwnedByLayout(QGraphicsLayoutItem* self) {
	return self->ownedByLayout();
}

void QGraphicsLayoutItem_Delete(QGraphicsLayoutItem* self) {
	delete self;
}

