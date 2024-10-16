#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <QSizePolicy>
#include <qgraphicslayoutitem.h>
#include "gen_qgraphicslayoutitem.h"
#include "_cgo_export.h"

void QGraphicsLayoutItem_SetSizePolicy(QGraphicsLayoutItem* self, QSizePolicy* policy) {
	self->setSizePolicy(*policy);
}

void QGraphicsLayoutItem_SetSizePolicy2(QGraphicsLayoutItem* self, int hPolicy, int vPolicy) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(hPolicy), static_cast<QSizePolicy::Policy>(vPolicy));
}

QSizePolicy* QGraphicsLayoutItem_SizePolicy(const QGraphicsLayoutItem* self) {
	return new QSizePolicy(self->sizePolicy());
}

void QGraphicsLayoutItem_SetMinimumSize(QGraphicsLayoutItem* self, QSizeF* size) {
	self->setMinimumSize(*size);
}

void QGraphicsLayoutItem_SetMinimumSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setMinimumSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsLayoutItem_MinimumSize(const QGraphicsLayoutItem* self) {
	return new QSizeF(self->minimumSize());
}

void QGraphicsLayoutItem_SetMinimumWidth(QGraphicsLayoutItem* self, double width) {
	self->setMinimumWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_MinimumWidth(const QGraphicsLayoutItem* self) {
	qreal _ret = self->minimumWidth();
	return static_cast<double>(_ret);
}

void QGraphicsLayoutItem_SetMinimumHeight(QGraphicsLayoutItem* self, double height) {
	self->setMinimumHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_MinimumHeight(const QGraphicsLayoutItem* self) {
	qreal _ret = self->minimumHeight();
	return static_cast<double>(_ret);
}

void QGraphicsLayoutItem_SetPreferredSize(QGraphicsLayoutItem* self, QSizeF* size) {
	self->setPreferredSize(*size);
}

void QGraphicsLayoutItem_SetPreferredSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setPreferredSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsLayoutItem_PreferredSize(const QGraphicsLayoutItem* self) {
	return new QSizeF(self->preferredSize());
}

void QGraphicsLayoutItem_SetPreferredWidth(QGraphicsLayoutItem* self, double width) {
	self->setPreferredWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_PreferredWidth(const QGraphicsLayoutItem* self) {
	qreal _ret = self->preferredWidth();
	return static_cast<double>(_ret);
}

void QGraphicsLayoutItem_SetPreferredHeight(QGraphicsLayoutItem* self, double height) {
	self->setPreferredHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_PreferredHeight(const QGraphicsLayoutItem* self) {
	qreal _ret = self->preferredHeight();
	return static_cast<double>(_ret);
}

void QGraphicsLayoutItem_SetMaximumSize(QGraphicsLayoutItem* self, QSizeF* size) {
	self->setMaximumSize(*size);
}

void QGraphicsLayoutItem_SetMaximumSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setMaximumSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsLayoutItem_MaximumSize(const QGraphicsLayoutItem* self) {
	return new QSizeF(self->maximumSize());
}

void QGraphicsLayoutItem_SetMaximumWidth(QGraphicsLayoutItem* self, double width) {
	self->setMaximumWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_MaximumWidth(const QGraphicsLayoutItem* self) {
	qreal _ret = self->maximumWidth();
	return static_cast<double>(_ret);
}

void QGraphicsLayoutItem_SetMaximumHeight(QGraphicsLayoutItem* self, double height) {
	self->setMaximumHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_MaximumHeight(const QGraphicsLayoutItem* self) {
	qreal _ret = self->maximumHeight();
	return static_cast<double>(_ret);
}

void QGraphicsLayoutItem_SetGeometry(QGraphicsLayoutItem* self, QRectF* rect) {
	self->setGeometry(*rect);
}

QRectF* QGraphicsLayoutItem_Geometry(const QGraphicsLayoutItem* self) {
	return new QRectF(self->geometry());
}

void QGraphicsLayoutItem_GetContentsMargins(const QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

QRectF* QGraphicsLayoutItem_ContentsRect(const QGraphicsLayoutItem* self) {
	return new QRectF(self->contentsRect());
}

QSizeF* QGraphicsLayoutItem_EffectiveSizeHint(const QGraphicsLayoutItem* self, int which) {
	return new QSizeF(self->effectiveSizeHint(static_cast<Qt::SizeHint>(which)));
}

void QGraphicsLayoutItem_UpdateGeometry(QGraphicsLayoutItem* self) {
	self->updateGeometry();
}

QGraphicsLayoutItem* QGraphicsLayoutItem_ParentLayoutItem(const QGraphicsLayoutItem* self) {
	return self->parentLayoutItem();
}

void QGraphicsLayoutItem_SetParentLayoutItem(QGraphicsLayoutItem* self, QGraphicsLayoutItem* parent) {
	self->setParentLayoutItem(parent);
}

bool QGraphicsLayoutItem_IsLayout(const QGraphicsLayoutItem* self) {
	return self->isLayout();
}

QGraphicsItem* QGraphicsLayoutItem_GraphicsItem(const QGraphicsLayoutItem* self) {
	return self->graphicsItem();
}

bool QGraphicsLayoutItem_OwnedByLayout(const QGraphicsLayoutItem* self) {
	return self->ownedByLayout();
}

void QGraphicsLayoutItem_SetSizePolicy3(QGraphicsLayoutItem* self, int hPolicy, int vPolicy, int controlType) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(hPolicy), static_cast<QSizePolicy::Policy>(vPolicy), static_cast<QSizePolicy::ControlType>(controlType));
}

QSizeF* QGraphicsLayoutItem_EffectiveSizeHint2(const QGraphicsLayoutItem* self, int which, QSizeF* constraint) {
	return new QSizeF(self->effectiveSizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

void QGraphicsLayoutItem_Delete(QGraphicsLayoutItem* self) {
	delete self;
}

