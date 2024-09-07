#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <QSizePolicy>
#include "qgraphicslayoutitem.h"

#include "gen_qgraphicslayoutitem.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QGraphicsLayoutItem_SetSizePolicy(QGraphicsLayoutItem* self, QSizePolicy* policy) {
	self->setSizePolicy(*policy);
}

void QGraphicsLayoutItem_SetSizePolicy2(QGraphicsLayoutItem* self, uintptr_t hPolicy, uintptr_t vPolicy) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(hPolicy), static_cast<QSizePolicy::Policy>(vPolicy));
}

QSizePolicy* QGraphicsLayoutItem_SizePolicy(QGraphicsLayoutItem* self) {
	QSizePolicy ret = const_cast<const QGraphicsLayoutItem*>(self)->sizePolicy();
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
	QSizeF ret = const_cast<const QGraphicsLayoutItem*>(self)->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsLayoutItem_SetMinimumWidth(QGraphicsLayoutItem* self, double width) {
	self->setMinimumWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_MinimumWidth(QGraphicsLayoutItem* self) {
	return const_cast<const QGraphicsLayoutItem*>(self)->minimumWidth();
}

void QGraphicsLayoutItem_SetMinimumHeight(QGraphicsLayoutItem* self, double height) {
	self->setMinimumHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_MinimumHeight(QGraphicsLayoutItem* self) {
	return const_cast<const QGraphicsLayoutItem*>(self)->minimumHeight();
}

void QGraphicsLayoutItem_SetPreferredSize(QGraphicsLayoutItem* self, QSizeF* size) {
	self->setPreferredSize(*size);
}

void QGraphicsLayoutItem_SetPreferredSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setPreferredSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsLayoutItem_PreferredSize(QGraphicsLayoutItem* self) {
	QSizeF ret = const_cast<const QGraphicsLayoutItem*>(self)->preferredSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsLayoutItem_SetPreferredWidth(QGraphicsLayoutItem* self, double width) {
	self->setPreferredWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_PreferredWidth(QGraphicsLayoutItem* self) {
	return const_cast<const QGraphicsLayoutItem*>(self)->preferredWidth();
}

void QGraphicsLayoutItem_SetPreferredHeight(QGraphicsLayoutItem* self, double height) {
	self->setPreferredHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_PreferredHeight(QGraphicsLayoutItem* self) {
	return const_cast<const QGraphicsLayoutItem*>(self)->preferredHeight();
}

void QGraphicsLayoutItem_SetMaximumSize(QGraphicsLayoutItem* self, QSizeF* size) {
	self->setMaximumSize(*size);
}

void QGraphicsLayoutItem_SetMaximumSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setMaximumSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsLayoutItem_MaximumSize(QGraphicsLayoutItem* self) {
	QSizeF ret = const_cast<const QGraphicsLayoutItem*>(self)->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsLayoutItem_SetMaximumWidth(QGraphicsLayoutItem* self, double width) {
	self->setMaximumWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_MaximumWidth(QGraphicsLayoutItem* self) {
	return const_cast<const QGraphicsLayoutItem*>(self)->maximumWidth();
}

void QGraphicsLayoutItem_SetMaximumHeight(QGraphicsLayoutItem* self, double height) {
	self->setMaximumHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_MaximumHeight(QGraphicsLayoutItem* self) {
	return const_cast<const QGraphicsLayoutItem*>(self)->maximumHeight();
}

void QGraphicsLayoutItem_SetGeometry(QGraphicsLayoutItem* self, QRectF* rect) {
	self->setGeometry(*rect);
}

QRectF* QGraphicsLayoutItem_Geometry(QGraphicsLayoutItem* self) {
	QRectF ret = const_cast<const QGraphicsLayoutItem*>(self)->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QGraphicsLayoutItem_GetContentsMargins(QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom) {
	const_cast<const QGraphicsLayoutItem*>(self)->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

QRectF* QGraphicsLayoutItem_ContentsRect(QGraphicsLayoutItem* self) {
	QRectF ret = const_cast<const QGraphicsLayoutItem*>(self)->contentsRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QSizeF* QGraphicsLayoutItem_EffectiveSizeHint(QGraphicsLayoutItem* self, uintptr_t which) {
	QSizeF ret = const_cast<const QGraphicsLayoutItem*>(self)->effectiveSizeHint(static_cast<Qt::SizeHint>(which));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsLayoutItem_UpdateGeometry(QGraphicsLayoutItem* self) {
	self->updateGeometry();
}

QGraphicsLayoutItem* QGraphicsLayoutItem_ParentLayoutItem(QGraphicsLayoutItem* self) {
	return const_cast<const QGraphicsLayoutItem*>(self)->parentLayoutItem();
}

void QGraphicsLayoutItem_SetParentLayoutItem(QGraphicsLayoutItem* self, QGraphicsLayoutItem* parent) {
	self->setParentLayoutItem(parent);
}

bool QGraphicsLayoutItem_IsLayout(QGraphicsLayoutItem* self) {
	return const_cast<const QGraphicsLayoutItem*>(self)->isLayout();
}

QGraphicsItem* QGraphicsLayoutItem_GraphicsItem(QGraphicsLayoutItem* self) {
	return const_cast<const QGraphicsLayoutItem*>(self)->graphicsItem();
}

bool QGraphicsLayoutItem_OwnedByLayout(QGraphicsLayoutItem* self) {
	return const_cast<const QGraphicsLayoutItem*>(self)->ownedByLayout();
}

void QGraphicsLayoutItem_SetSizePolicy3(QGraphicsLayoutItem* self, uintptr_t hPolicy, uintptr_t vPolicy, uintptr_t controlType) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(hPolicy), static_cast<QSizePolicy::Policy>(vPolicy), static_cast<QSizePolicy::ControlType>(controlType));
}

QSizeF* QGraphicsLayoutItem_EffectiveSizeHint2(QGraphicsLayoutItem* self, uintptr_t which, QSizeF* constraint) {
	QSizeF ret = const_cast<const QGraphicsLayoutItem*>(self)->effectiveSizeHint(static_cast<Qt::SizeHint>(which), *constraint);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsLayoutItem_Delete(QGraphicsLayoutItem* self) {
	delete self;
}

