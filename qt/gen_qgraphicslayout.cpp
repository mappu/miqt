#include <QEvent>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include "qgraphicslayout.h"

#include "gen_qgraphicslayout.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QGraphicsLayout_SetContentsMargins(QGraphicsLayout* self, double left, double top, double right, double bottom) {
	self->setContentsMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsLayout_GetContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsLayout_Activate(QGraphicsLayout* self) {
	self->activate();
}

bool QGraphicsLayout_IsActivated(const QGraphicsLayout* self) {
	return self->isActivated();
}

void QGraphicsLayout_Invalidate(QGraphicsLayout* self) {
	self->invalidate();
}

void QGraphicsLayout_UpdateGeometry(QGraphicsLayout* self) {
	self->updateGeometry();
}

void QGraphicsLayout_WidgetEvent(QGraphicsLayout* self, QEvent* e) {
	self->widgetEvent(e);
}

int QGraphicsLayout_Count(const QGraphicsLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsLayout_ItemAt(const QGraphicsLayout* self, int i) {
	return self->itemAt(static_cast<int>(i));
}

void QGraphicsLayout_RemoveAt(QGraphicsLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsLayout_SetInstantInvalidatePropagation(bool enable) {
	QGraphicsLayout::setInstantInvalidatePropagation(enable);
}

bool QGraphicsLayout_InstantInvalidatePropagation() {
	return QGraphicsLayout::instantInvalidatePropagation();
}

void QGraphicsLayout_Delete(QGraphicsLayout* self) {
	delete self;
}

