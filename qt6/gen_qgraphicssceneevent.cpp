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
#include <qgraphicssceneevent.h>
#include "gen_qgraphicssceneevent.h"
#include "_cgo_export.h"

QGraphicsSceneEvent* QGraphicsSceneEvent_new(int typeVal) {
	return new QGraphicsSceneEvent(static_cast<QEvent::Type>(typeVal));
}

QWidget* QGraphicsSceneEvent_Widget(const QGraphicsSceneEvent* self) {
	return self->widget();
}

void QGraphicsSceneEvent_SetWidget(QGraphicsSceneEvent* self, QWidget* widget) {
	self->setWidget(widget);
}

unsigned long long QGraphicsSceneEvent_Timestamp(const QGraphicsSceneEvent* self) {
	quint64 _ret = self->timestamp();
	return static_cast<unsigned long long>(_ret);
}

void QGraphicsSceneEvent_SetTimestamp(QGraphicsSceneEvent* self, unsigned long long ts) {
	self->setTimestamp(static_cast<quint64>(ts));
}

void QGraphicsSceneEvent_Delete(QGraphicsSceneEvent* self) {
	delete self;
}

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new() {
	return new QGraphicsSceneMouseEvent();
}

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new2(int typeVal) {
	return new QGraphicsSceneMouseEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneMouseEvent_Pos(const QGraphicsSceneMouseEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneMouseEvent_SetPos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_ScenePos(const QGraphicsSceneMouseEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneMouseEvent_SetScenePos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneMouseEvent_ScreenPos(const QGraphicsSceneMouseEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneMouseEvent_SetScreenPos(QGraphicsSceneMouseEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_ButtonDownPos(const QGraphicsSceneMouseEvent* self, int button) {
	return new QPointF(self->buttonDownPos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_SetButtonDownPos(QGraphicsSceneMouseEvent* self, int button, QPointF* pos) {
	self->setButtonDownPos(static_cast<Qt::MouseButton>(button), *pos);
}

QPointF* QGraphicsSceneMouseEvent_ButtonDownScenePos(const QGraphicsSceneMouseEvent* self, int button) {
	return new QPointF(self->buttonDownScenePos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_SetButtonDownScenePos(QGraphicsSceneMouseEvent* self, int button, QPointF* pos) {
	self->setButtonDownScenePos(static_cast<Qt::MouseButton>(button), *pos);
}

QPoint* QGraphicsSceneMouseEvent_ButtonDownScreenPos(const QGraphicsSceneMouseEvent* self, int button) {
	return new QPoint(self->buttonDownScreenPos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_SetButtonDownScreenPos(QGraphicsSceneMouseEvent* self, int button, QPoint* pos) {
	self->setButtonDownScreenPos(static_cast<Qt::MouseButton>(button), *pos);
}

QPointF* QGraphicsSceneMouseEvent_LastPos(const QGraphicsSceneMouseEvent* self) {
	return new QPointF(self->lastPos());
}

void QGraphicsSceneMouseEvent_SetLastPos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setLastPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_LastScenePos(const QGraphicsSceneMouseEvent* self) {
	return new QPointF(self->lastScenePos());
}

void QGraphicsSceneMouseEvent_SetLastScenePos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setLastScenePos(*pos);
}

QPoint* QGraphicsSceneMouseEvent_LastScreenPos(const QGraphicsSceneMouseEvent* self) {
	return new QPoint(self->lastScreenPos());
}

void QGraphicsSceneMouseEvent_SetLastScreenPos(QGraphicsSceneMouseEvent* self, QPoint* pos) {
	self->setLastScreenPos(*pos);
}

int QGraphicsSceneMouseEvent_Buttons(const QGraphicsSceneMouseEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

void QGraphicsSceneMouseEvent_SetButtons(QGraphicsSceneMouseEvent* self, int buttons) {
	self->setButtons(static_cast<Qt::MouseButtons>(buttons));
}

int QGraphicsSceneMouseEvent_Button(const QGraphicsSceneMouseEvent* self) {
	Qt::MouseButton _ret = self->button();
	return static_cast<int>(_ret);
}

void QGraphicsSceneMouseEvent_SetButton(QGraphicsSceneMouseEvent* self, int button) {
	self->setButton(static_cast<Qt::MouseButton>(button));
}

int QGraphicsSceneMouseEvent_Modifiers(const QGraphicsSceneMouseEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

void QGraphicsSceneMouseEvent_SetModifiers(QGraphicsSceneMouseEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QGraphicsSceneMouseEvent_Source(const QGraphicsSceneMouseEvent* self) {
	Qt::MouseEventSource _ret = self->source();
	return static_cast<int>(_ret);
}

void QGraphicsSceneMouseEvent_SetSource(QGraphicsSceneMouseEvent* self, int source) {
	self->setSource(static_cast<Qt::MouseEventSource>(source));
}

int QGraphicsSceneMouseEvent_Flags(const QGraphicsSceneMouseEvent* self) {
	Qt::MouseEventFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QGraphicsSceneMouseEvent_SetFlags(QGraphicsSceneMouseEvent* self, int flags) {
	self->setFlags(static_cast<Qt::MouseEventFlags>(flags));
}

void QGraphicsSceneMouseEvent_Delete(QGraphicsSceneMouseEvent* self) {
	delete self;
}

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new() {
	return new QGraphicsSceneWheelEvent();
}

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new2(int typeVal) {
	return new QGraphicsSceneWheelEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneWheelEvent_Pos(const QGraphicsSceneWheelEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneWheelEvent_SetPos(QGraphicsSceneWheelEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneWheelEvent_ScenePos(const QGraphicsSceneWheelEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneWheelEvent_SetScenePos(QGraphicsSceneWheelEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneWheelEvent_ScreenPos(const QGraphicsSceneWheelEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneWheelEvent_SetScreenPos(QGraphicsSceneWheelEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

int QGraphicsSceneWheelEvent_Buttons(const QGraphicsSceneWheelEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

void QGraphicsSceneWheelEvent_SetButtons(QGraphicsSceneWheelEvent* self, int buttons) {
	self->setButtons(static_cast<Qt::MouseButtons>(buttons));
}

int QGraphicsSceneWheelEvent_Modifiers(const QGraphicsSceneWheelEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

void QGraphicsSceneWheelEvent_SetModifiers(QGraphicsSceneWheelEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QGraphicsSceneWheelEvent_Delta(const QGraphicsSceneWheelEvent* self) {
	return self->delta();
}

void QGraphicsSceneWheelEvent_SetDelta(QGraphicsSceneWheelEvent* self, int delta) {
	self->setDelta(static_cast<int>(delta));
}

int QGraphicsSceneWheelEvent_Orientation(const QGraphicsSceneWheelEvent* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QGraphicsSceneWheelEvent_SetOrientation(QGraphicsSceneWheelEvent* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QGraphicsSceneWheelEvent_Phase(const QGraphicsSceneWheelEvent* self) {
	Qt::ScrollPhase _ret = self->phase();
	return static_cast<int>(_ret);
}

void QGraphicsSceneWheelEvent_SetPhase(QGraphicsSceneWheelEvent* self, int scrollPhase) {
	self->setPhase(static_cast<Qt::ScrollPhase>(scrollPhase));
}

QPoint* QGraphicsSceneWheelEvent_PixelDelta(const QGraphicsSceneWheelEvent* self) {
	return new QPoint(self->pixelDelta());
}

void QGraphicsSceneWheelEvent_SetPixelDelta(QGraphicsSceneWheelEvent* self, QPoint* delta) {
	self->setPixelDelta(*delta);
}

bool QGraphicsSceneWheelEvent_IsInverted(const QGraphicsSceneWheelEvent* self) {
	return self->isInverted();
}

void QGraphicsSceneWheelEvent_SetInverted(QGraphicsSceneWheelEvent* self, bool inverted) {
	self->setInverted(inverted);
}

void QGraphicsSceneWheelEvent_Delete(QGraphicsSceneWheelEvent* self) {
	delete self;
}

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new() {
	return new QGraphicsSceneContextMenuEvent();
}

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new2(int typeVal) {
	return new QGraphicsSceneContextMenuEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneContextMenuEvent_Pos(const QGraphicsSceneContextMenuEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneContextMenuEvent_SetPos(QGraphicsSceneContextMenuEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneContextMenuEvent_ScenePos(const QGraphicsSceneContextMenuEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneContextMenuEvent_SetScenePos(QGraphicsSceneContextMenuEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneContextMenuEvent_ScreenPos(const QGraphicsSceneContextMenuEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneContextMenuEvent_SetScreenPos(QGraphicsSceneContextMenuEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

int QGraphicsSceneContextMenuEvent_Modifiers(const QGraphicsSceneContextMenuEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

void QGraphicsSceneContextMenuEvent_SetModifiers(QGraphicsSceneContextMenuEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QGraphicsSceneContextMenuEvent_Reason(const QGraphicsSceneContextMenuEvent* self) {
	QGraphicsSceneContextMenuEvent::Reason _ret = self->reason();
	return static_cast<int>(_ret);
}

void QGraphicsSceneContextMenuEvent_SetReason(QGraphicsSceneContextMenuEvent* self, int reason) {
	self->setReason(static_cast<QGraphicsSceneContextMenuEvent::Reason>(reason));
}

void QGraphicsSceneContextMenuEvent_Delete(QGraphicsSceneContextMenuEvent* self) {
	delete self;
}

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new() {
	return new QGraphicsSceneHoverEvent();
}

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new2(int typeVal) {
	return new QGraphicsSceneHoverEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneHoverEvent_Pos(const QGraphicsSceneHoverEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneHoverEvent_SetPos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_ScenePos(const QGraphicsSceneHoverEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneHoverEvent_SetScenePos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneHoverEvent_ScreenPos(const QGraphicsSceneHoverEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneHoverEvent_SetScreenPos(QGraphicsSceneHoverEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_LastPos(const QGraphicsSceneHoverEvent* self) {
	return new QPointF(self->lastPos());
}

void QGraphicsSceneHoverEvent_SetLastPos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setLastPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_LastScenePos(const QGraphicsSceneHoverEvent* self) {
	return new QPointF(self->lastScenePos());
}

void QGraphicsSceneHoverEvent_SetLastScenePos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setLastScenePos(*pos);
}

QPoint* QGraphicsSceneHoverEvent_LastScreenPos(const QGraphicsSceneHoverEvent* self) {
	return new QPoint(self->lastScreenPos());
}

void QGraphicsSceneHoverEvent_SetLastScreenPos(QGraphicsSceneHoverEvent* self, QPoint* pos) {
	self->setLastScreenPos(*pos);
}

int QGraphicsSceneHoverEvent_Modifiers(const QGraphicsSceneHoverEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

void QGraphicsSceneHoverEvent_SetModifiers(QGraphicsSceneHoverEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

void QGraphicsSceneHoverEvent_Delete(QGraphicsSceneHoverEvent* self) {
	delete self;
}

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new() {
	return new QGraphicsSceneHelpEvent();
}

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new2(int typeVal) {
	return new QGraphicsSceneHelpEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneHelpEvent_ScenePos(const QGraphicsSceneHelpEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneHelpEvent_SetScenePos(QGraphicsSceneHelpEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneHelpEvent_ScreenPos(const QGraphicsSceneHelpEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneHelpEvent_SetScreenPos(QGraphicsSceneHelpEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

void QGraphicsSceneHelpEvent_Delete(QGraphicsSceneHelpEvent* self) {
	delete self;
}

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new() {
	return new QGraphicsSceneDragDropEvent();
}

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new2(int typeVal) {
	return new QGraphicsSceneDragDropEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneDragDropEvent_Pos(const QGraphicsSceneDragDropEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneDragDropEvent_SetPos(QGraphicsSceneDragDropEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneDragDropEvent_ScenePos(const QGraphicsSceneDragDropEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneDragDropEvent_SetScenePos(QGraphicsSceneDragDropEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneDragDropEvent_ScreenPos(const QGraphicsSceneDragDropEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneDragDropEvent_SetScreenPos(QGraphicsSceneDragDropEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

int QGraphicsSceneDragDropEvent_Buttons(const QGraphicsSceneDragDropEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

void QGraphicsSceneDragDropEvent_SetButtons(QGraphicsSceneDragDropEvent* self, int buttons) {
	self->setButtons(static_cast<Qt::MouseButtons>(buttons));
}

int QGraphicsSceneDragDropEvent_Modifiers(const QGraphicsSceneDragDropEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

void QGraphicsSceneDragDropEvent_SetModifiers(QGraphicsSceneDragDropEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QGraphicsSceneDragDropEvent_PossibleActions(const QGraphicsSceneDragDropEvent* self) {
	Qt::DropActions _ret = self->possibleActions();
	return static_cast<int>(_ret);
}

void QGraphicsSceneDragDropEvent_SetPossibleActions(QGraphicsSceneDragDropEvent* self, int actions) {
	self->setPossibleActions(static_cast<Qt::DropActions>(actions));
}

int QGraphicsSceneDragDropEvent_ProposedAction(const QGraphicsSceneDragDropEvent* self) {
	Qt::DropAction _ret = self->proposedAction();
	return static_cast<int>(_ret);
}

void QGraphicsSceneDragDropEvent_SetProposedAction(QGraphicsSceneDragDropEvent* self, int action) {
	self->setProposedAction(static_cast<Qt::DropAction>(action));
}

void QGraphicsSceneDragDropEvent_AcceptProposedAction(QGraphicsSceneDragDropEvent* self) {
	self->acceptProposedAction();
}

int QGraphicsSceneDragDropEvent_DropAction(const QGraphicsSceneDragDropEvent* self) {
	Qt::DropAction _ret = self->dropAction();
	return static_cast<int>(_ret);
}

void QGraphicsSceneDragDropEvent_SetDropAction(QGraphicsSceneDragDropEvent* self, int action) {
	self->setDropAction(static_cast<Qt::DropAction>(action));
}

QWidget* QGraphicsSceneDragDropEvent_Source(const QGraphicsSceneDragDropEvent* self) {
	return self->source();
}

void QGraphicsSceneDragDropEvent_SetSource(QGraphicsSceneDragDropEvent* self, QWidget* source) {
	self->setSource(source);
}

QMimeData* QGraphicsSceneDragDropEvent_MimeData(const QGraphicsSceneDragDropEvent* self) {
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

QSizeF* QGraphicsSceneResizeEvent_OldSize(const QGraphicsSceneResizeEvent* self) {
	return new QSizeF(self->oldSize());
}

void QGraphicsSceneResizeEvent_SetOldSize(QGraphicsSceneResizeEvent* self, QSizeF* size) {
	self->setOldSize(*size);
}

QSizeF* QGraphicsSceneResizeEvent_NewSize(const QGraphicsSceneResizeEvent* self) {
	return new QSizeF(self->newSize());
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

QPointF* QGraphicsSceneMoveEvent_OldPos(const QGraphicsSceneMoveEvent* self) {
	return new QPointF(self->oldPos());
}

void QGraphicsSceneMoveEvent_SetOldPos(QGraphicsSceneMoveEvent* self, QPointF* pos) {
	self->setOldPos(*pos);
}

QPointF* QGraphicsSceneMoveEvent_NewPos(const QGraphicsSceneMoveEvent* self) {
	return new QPointF(self->newPos());
}

void QGraphicsSceneMoveEvent_SetNewPos(QGraphicsSceneMoveEvent* self, QPointF* pos) {
	self->setNewPos(*pos);
}

void QGraphicsSceneMoveEvent_Delete(QGraphicsSceneMoveEvent* self) {
	delete self;
}

