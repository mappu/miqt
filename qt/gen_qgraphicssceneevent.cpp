#include "gen_qgraphicssceneevent.h"
#include "qgraphicssceneevent.h"

#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneEvent>
#include <QGraphicsSceneHelpEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsSceneWheelEvent>
#include <QMimeData>
#include <QPoint>
#include <QPointF>
#include <QSizeF>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QWidget* QGraphicsSceneEvent_Widget(QGraphicsSceneEvent* self) {
	return self->widget();
}

void QGraphicsSceneEvent_SetWidget(QGraphicsSceneEvent* self, QWidget* widget) {
	self->setWidget(widget);
}

void QGraphicsSceneEvent_Delete(QGraphicsSceneEvent* self) {
	delete self;
}

QPointF* QGraphicsSceneMouseEvent_Pos(QGraphicsSceneMouseEvent* self) {
	QPointF ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneMouseEvent_SetPos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_ScenePos(QGraphicsSceneMouseEvent* self) {
	QPointF ret = self->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneMouseEvent_SetScenePos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneMouseEvent_ScreenPos(QGraphicsSceneMouseEvent* self) {
	QPoint ret = self->screenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneMouseEvent_SetScreenPos(QGraphicsSceneMouseEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_LastPos(QGraphicsSceneMouseEvent* self) {
	QPointF ret = self->lastPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneMouseEvent_SetLastPos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setLastPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_LastScenePos(QGraphicsSceneMouseEvent* self) {
	QPointF ret = self->lastScenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneMouseEvent_SetLastScenePos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setLastScenePos(*pos);
}

QPoint* QGraphicsSceneMouseEvent_LastScreenPos(QGraphicsSceneMouseEvent* self) {
	QPoint ret = self->lastScreenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneMouseEvent_SetLastScreenPos(QGraphicsSceneMouseEvent* self, QPoint* pos) {
	self->setLastScreenPos(*pos);
}

void QGraphicsSceneMouseEvent_Delete(QGraphicsSceneMouseEvent* self) {
	delete self;
}

QPointF* QGraphicsSceneWheelEvent_Pos(QGraphicsSceneWheelEvent* self) {
	QPointF ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneWheelEvent_SetPos(QGraphicsSceneWheelEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneWheelEvent_ScenePos(QGraphicsSceneWheelEvent* self) {
	QPointF ret = self->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneWheelEvent_SetScenePos(QGraphicsSceneWheelEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneWheelEvent_ScreenPos(QGraphicsSceneWheelEvent* self) {
	QPoint ret = self->screenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneWheelEvent_SetScreenPos(QGraphicsSceneWheelEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

int QGraphicsSceneWheelEvent_Delta(QGraphicsSceneWheelEvent* self) {
	return self->delta();
}

void QGraphicsSceneWheelEvent_SetDelta(QGraphicsSceneWheelEvent* self, int delta) {
	self->setDelta(static_cast<int>(delta));
}

void QGraphicsSceneWheelEvent_Delete(QGraphicsSceneWheelEvent* self) {
	delete self;
}

QPointF* QGraphicsSceneContextMenuEvent_Pos(QGraphicsSceneContextMenuEvent* self) {
	QPointF ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneContextMenuEvent_SetPos(QGraphicsSceneContextMenuEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneContextMenuEvent_ScenePos(QGraphicsSceneContextMenuEvent* self) {
	QPointF ret = self->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneContextMenuEvent_SetScenePos(QGraphicsSceneContextMenuEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneContextMenuEvent_ScreenPos(QGraphicsSceneContextMenuEvent* self) {
	QPoint ret = self->screenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneContextMenuEvent_SetScreenPos(QGraphicsSceneContextMenuEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

void QGraphicsSceneContextMenuEvent_Delete(QGraphicsSceneContextMenuEvent* self) {
	delete self;
}

QPointF* QGraphicsSceneHoverEvent_Pos(QGraphicsSceneHoverEvent* self) {
	QPointF ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneHoverEvent_SetPos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_ScenePos(QGraphicsSceneHoverEvent* self) {
	QPointF ret = self->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneHoverEvent_SetScenePos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneHoverEvent_ScreenPos(QGraphicsSceneHoverEvent* self) {
	QPoint ret = self->screenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneHoverEvent_SetScreenPos(QGraphicsSceneHoverEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_LastPos(QGraphicsSceneHoverEvent* self) {
	QPointF ret = self->lastPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneHoverEvent_SetLastPos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setLastPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_LastScenePos(QGraphicsSceneHoverEvent* self) {
	QPointF ret = self->lastScenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneHoverEvent_SetLastScenePos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setLastScenePos(*pos);
}

QPoint* QGraphicsSceneHoverEvent_LastScreenPos(QGraphicsSceneHoverEvent* self) {
	QPoint ret = self->lastScreenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneHoverEvent_SetLastScreenPos(QGraphicsSceneHoverEvent* self, QPoint* pos) {
	self->setLastScreenPos(*pos);
}

void QGraphicsSceneHoverEvent_Delete(QGraphicsSceneHoverEvent* self) {
	delete self;
}

QPointF* QGraphicsSceneHelpEvent_ScenePos(QGraphicsSceneHelpEvent* self) {
	QPointF ret = self->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneHelpEvent_SetScenePos(QGraphicsSceneHelpEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneHelpEvent_ScreenPos(QGraphicsSceneHelpEvent* self) {
	QPoint ret = self->screenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneHelpEvent_SetScreenPos(QGraphicsSceneHelpEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

void QGraphicsSceneHelpEvent_Delete(QGraphicsSceneHelpEvent* self) {
	delete self;
}

QPointF* QGraphicsSceneDragDropEvent_Pos(QGraphicsSceneDragDropEvent* self) {
	QPointF ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneDragDropEvent_SetPos(QGraphicsSceneDragDropEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneDragDropEvent_ScenePos(QGraphicsSceneDragDropEvent* self) {
	QPointF ret = self->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneDragDropEvent_SetScenePos(QGraphicsSceneDragDropEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneDragDropEvent_ScreenPos(QGraphicsSceneDragDropEvent* self) {
	QPoint ret = self->screenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneDragDropEvent_SetScreenPos(QGraphicsSceneDragDropEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

void QGraphicsSceneDragDropEvent_AcceptProposedAction(QGraphicsSceneDragDropEvent* self) {
	self->acceptProposedAction();
}

QWidget* QGraphicsSceneDragDropEvent_Source(QGraphicsSceneDragDropEvent* self) {
	return self->source();
}

void QGraphicsSceneDragDropEvent_SetSource(QGraphicsSceneDragDropEvent* self, QWidget* source) {
	self->setSource(source);
}

QMimeData* QGraphicsSceneDragDropEvent_MimeData(QGraphicsSceneDragDropEvent* self) {
	return (QMimeData*) self->mimeData();
}

void QGraphicsSceneDragDropEvent_SetMimeData(QGraphicsSceneDragDropEvent* self, QMimeData* data) {
	self->setMimeData(data);
}

void QGraphicsSceneDragDropEvent_Delete(QGraphicsSceneDragDropEvent* self) {
	delete self;
}

QGraphicsSceneResizeEvent* QGraphicsSceneResizeEvent_new() {
	return new QGraphicsSceneResizeEvent();
}

QSizeF* QGraphicsSceneResizeEvent_OldSize(QGraphicsSceneResizeEvent* self) {
	QSizeF ret = self->oldSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsSceneResizeEvent_SetOldSize(QGraphicsSceneResizeEvent* self, QSizeF* size) {
	self->setOldSize(*size);
}

QSizeF* QGraphicsSceneResizeEvent_NewSize(QGraphicsSceneResizeEvent* self) {
	QSizeF ret = self->newSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsSceneResizeEvent_SetNewSize(QGraphicsSceneResizeEvent* self, QSizeF* size) {
	self->setNewSize(*size);
}

void QGraphicsSceneResizeEvent_Delete(QGraphicsSceneResizeEvent* self) {
	delete self;
}

QGraphicsSceneMoveEvent* QGraphicsSceneMoveEvent_new() {
	return new QGraphicsSceneMoveEvent();
}

QPointF* QGraphicsSceneMoveEvent_OldPos(QGraphicsSceneMoveEvent* self) {
	QPointF ret = self->oldPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneMoveEvent_SetOldPos(QGraphicsSceneMoveEvent* self, QPointF* pos) {
	self->setOldPos(*pos);
}

QPointF* QGraphicsSceneMoveEvent_NewPos(QGraphicsSceneMoveEvent* self) {
	QPointF ret = self->newPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneMoveEvent_SetNewPos(QGraphicsSceneMoveEvent* self, QPointF* pos) {
	self->setNewPos(*pos);
}

void QGraphicsSceneMoveEvent_Delete(QGraphicsSceneMoveEvent* self) {
	delete self;
}

