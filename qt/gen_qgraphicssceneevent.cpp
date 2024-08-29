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
#include "qgraphicssceneevent.h"

#include "gen_qgraphicssceneevent.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGraphicsSceneEvent* QGraphicsSceneEvent_new(uintptr_t typeVal) {
	return new QGraphicsSceneEvent(static_cast<QEvent::Type>(typeVal));
}

QWidget* QGraphicsSceneEvent_Widget(QGraphicsSceneEvent* self) {
	return const_cast<const QGraphicsSceneEvent*>(self)->widget();
}

void QGraphicsSceneEvent_SetWidget(QGraphicsSceneEvent* self, QWidget* widget) {
	self->setWidget(widget);
}

void QGraphicsSceneEvent_Delete(QGraphicsSceneEvent* self) {
	delete self;
}

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new() {
	return new QGraphicsSceneMouseEvent();
}

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new2(uintptr_t typeVal) {
	return new QGraphicsSceneMouseEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneMouseEvent_Pos(QGraphicsSceneMouseEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneMouseEvent*>(self)->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneMouseEvent_SetPos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_ScenePos(QGraphicsSceneMouseEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneMouseEvent*>(self)->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneMouseEvent_SetScenePos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneMouseEvent_ScreenPos(QGraphicsSceneMouseEvent* self) {
	QPoint ret = const_cast<const QGraphicsSceneMouseEvent*>(self)->screenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneMouseEvent_SetScreenPos(QGraphicsSceneMouseEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_ButtonDownPos(QGraphicsSceneMouseEvent* self, uintptr_t button) {
	QPointF ret = const_cast<const QGraphicsSceneMouseEvent*>(self)->buttonDownPos(static_cast<Qt::MouseButton>(button));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneMouseEvent_SetButtonDownPos(QGraphicsSceneMouseEvent* self, uintptr_t button, QPointF* pos) {
	self->setButtonDownPos(static_cast<Qt::MouseButton>(button), *pos);
}

QPointF* QGraphicsSceneMouseEvent_ButtonDownScenePos(QGraphicsSceneMouseEvent* self, uintptr_t button) {
	QPointF ret = const_cast<const QGraphicsSceneMouseEvent*>(self)->buttonDownScenePos(static_cast<Qt::MouseButton>(button));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneMouseEvent_SetButtonDownScenePos(QGraphicsSceneMouseEvent* self, uintptr_t button, QPointF* pos) {
	self->setButtonDownScenePos(static_cast<Qt::MouseButton>(button), *pos);
}

QPoint* QGraphicsSceneMouseEvent_ButtonDownScreenPos(QGraphicsSceneMouseEvent* self, uintptr_t button) {
	QPoint ret = const_cast<const QGraphicsSceneMouseEvent*>(self)->buttonDownScreenPos(static_cast<Qt::MouseButton>(button));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneMouseEvent_SetButtonDownScreenPos(QGraphicsSceneMouseEvent* self, uintptr_t button, QPoint* pos) {
	self->setButtonDownScreenPos(static_cast<Qt::MouseButton>(button), *pos);
}

QPointF* QGraphicsSceneMouseEvent_LastPos(QGraphicsSceneMouseEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneMouseEvent*>(self)->lastPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneMouseEvent_SetLastPos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setLastPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_LastScenePos(QGraphicsSceneMouseEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneMouseEvent*>(self)->lastScenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneMouseEvent_SetLastScenePos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setLastScenePos(*pos);
}

QPoint* QGraphicsSceneMouseEvent_LastScreenPos(QGraphicsSceneMouseEvent* self) {
	QPoint ret = const_cast<const QGraphicsSceneMouseEvent*>(self)->lastScreenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneMouseEvent_SetLastScreenPos(QGraphicsSceneMouseEvent* self, QPoint* pos) {
	self->setLastScreenPos(*pos);
}

int QGraphicsSceneMouseEvent_Buttons(QGraphicsSceneMouseEvent* self) {
	Qt::MouseButtons ret = const_cast<const QGraphicsSceneMouseEvent*>(self)->buttons();
	return static_cast<int>(ret);
}

void QGraphicsSceneMouseEvent_SetButtons(QGraphicsSceneMouseEvent* self, int buttons) {
	self->setButtons(static_cast<Qt::MouseButtons>(buttons));
}

uintptr_t QGraphicsSceneMouseEvent_Button(QGraphicsSceneMouseEvent* self) {
	Qt::MouseButton ret = const_cast<const QGraphicsSceneMouseEvent*>(self)->button();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsSceneMouseEvent_SetButton(QGraphicsSceneMouseEvent* self, uintptr_t button) {
	self->setButton(static_cast<Qt::MouseButton>(button));
}

int QGraphicsSceneMouseEvent_Modifiers(QGraphicsSceneMouseEvent* self) {
	Qt::KeyboardModifiers ret = const_cast<const QGraphicsSceneMouseEvent*>(self)->modifiers();
	return static_cast<int>(ret);
}

void QGraphicsSceneMouseEvent_SetModifiers(QGraphicsSceneMouseEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

uintptr_t QGraphicsSceneMouseEvent_Source(QGraphicsSceneMouseEvent* self) {
	Qt::MouseEventSource ret = const_cast<const QGraphicsSceneMouseEvent*>(self)->source();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsSceneMouseEvent_SetSource(QGraphicsSceneMouseEvent* self, uintptr_t source) {
	self->setSource(static_cast<Qt::MouseEventSource>(source));
}

int QGraphicsSceneMouseEvent_Flags(QGraphicsSceneMouseEvent* self) {
	Qt::MouseEventFlags ret = const_cast<const QGraphicsSceneMouseEvent*>(self)->flags();
	return static_cast<int>(ret);
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

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new2(uintptr_t typeVal) {
	return new QGraphicsSceneWheelEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneWheelEvent_Pos(QGraphicsSceneWheelEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneWheelEvent*>(self)->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneWheelEvent_SetPos(QGraphicsSceneWheelEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneWheelEvent_ScenePos(QGraphicsSceneWheelEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneWheelEvent*>(self)->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneWheelEvent_SetScenePos(QGraphicsSceneWheelEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneWheelEvent_ScreenPos(QGraphicsSceneWheelEvent* self) {
	QPoint ret = const_cast<const QGraphicsSceneWheelEvent*>(self)->screenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneWheelEvent_SetScreenPos(QGraphicsSceneWheelEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

int QGraphicsSceneWheelEvent_Buttons(QGraphicsSceneWheelEvent* self) {
	Qt::MouseButtons ret = const_cast<const QGraphicsSceneWheelEvent*>(self)->buttons();
	return static_cast<int>(ret);
}

void QGraphicsSceneWheelEvent_SetButtons(QGraphicsSceneWheelEvent* self, int buttons) {
	self->setButtons(static_cast<Qt::MouseButtons>(buttons));
}

int QGraphicsSceneWheelEvent_Modifiers(QGraphicsSceneWheelEvent* self) {
	Qt::KeyboardModifiers ret = const_cast<const QGraphicsSceneWheelEvent*>(self)->modifiers();
	return static_cast<int>(ret);
}

void QGraphicsSceneWheelEvent_SetModifiers(QGraphicsSceneWheelEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QGraphicsSceneWheelEvent_Delta(QGraphicsSceneWheelEvent* self) {
	return const_cast<const QGraphicsSceneWheelEvent*>(self)->delta();
}

void QGraphicsSceneWheelEvent_SetDelta(QGraphicsSceneWheelEvent* self, int delta) {
	self->setDelta(static_cast<int>(delta));
}

uintptr_t QGraphicsSceneWheelEvent_Orientation(QGraphicsSceneWheelEvent* self) {
	Qt::Orientation ret = const_cast<const QGraphicsSceneWheelEvent*>(self)->orientation();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsSceneWheelEvent_SetOrientation(QGraphicsSceneWheelEvent* self, uintptr_t orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QGraphicsSceneWheelEvent_Delete(QGraphicsSceneWheelEvent* self) {
	delete self;
}

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new() {
	return new QGraphicsSceneContextMenuEvent();
}

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new2(uintptr_t typeVal) {
	return new QGraphicsSceneContextMenuEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneContextMenuEvent_Pos(QGraphicsSceneContextMenuEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneContextMenuEvent*>(self)->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneContextMenuEvent_SetPos(QGraphicsSceneContextMenuEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneContextMenuEvent_ScenePos(QGraphicsSceneContextMenuEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneContextMenuEvent*>(self)->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneContextMenuEvent_SetScenePos(QGraphicsSceneContextMenuEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneContextMenuEvent_ScreenPos(QGraphicsSceneContextMenuEvent* self) {
	QPoint ret = const_cast<const QGraphicsSceneContextMenuEvent*>(self)->screenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneContextMenuEvent_SetScreenPos(QGraphicsSceneContextMenuEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

int QGraphicsSceneContextMenuEvent_Modifiers(QGraphicsSceneContextMenuEvent* self) {
	Qt::KeyboardModifiers ret = const_cast<const QGraphicsSceneContextMenuEvent*>(self)->modifiers();
	return static_cast<int>(ret);
}

void QGraphicsSceneContextMenuEvent_SetModifiers(QGraphicsSceneContextMenuEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

uintptr_t QGraphicsSceneContextMenuEvent_Reason(QGraphicsSceneContextMenuEvent* self) {
	QGraphicsSceneContextMenuEvent::Reason ret = const_cast<const QGraphicsSceneContextMenuEvent*>(self)->reason();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsSceneContextMenuEvent_SetReason(QGraphicsSceneContextMenuEvent* self, uintptr_t reason) {
	self->setReason(static_cast<QGraphicsSceneContextMenuEvent::Reason>(reason));
}

void QGraphicsSceneContextMenuEvent_Delete(QGraphicsSceneContextMenuEvent* self) {
	delete self;
}

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new() {
	return new QGraphicsSceneHoverEvent();
}

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new2(uintptr_t typeVal) {
	return new QGraphicsSceneHoverEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneHoverEvent_Pos(QGraphicsSceneHoverEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneHoverEvent*>(self)->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneHoverEvent_SetPos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_ScenePos(QGraphicsSceneHoverEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneHoverEvent*>(self)->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneHoverEvent_SetScenePos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneHoverEvent_ScreenPos(QGraphicsSceneHoverEvent* self) {
	QPoint ret = const_cast<const QGraphicsSceneHoverEvent*>(self)->screenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneHoverEvent_SetScreenPos(QGraphicsSceneHoverEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_LastPos(QGraphicsSceneHoverEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneHoverEvent*>(self)->lastPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneHoverEvent_SetLastPos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setLastPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_LastScenePos(QGraphicsSceneHoverEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneHoverEvent*>(self)->lastScenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneHoverEvent_SetLastScenePos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setLastScenePos(*pos);
}

QPoint* QGraphicsSceneHoverEvent_LastScreenPos(QGraphicsSceneHoverEvent* self) {
	QPoint ret = const_cast<const QGraphicsSceneHoverEvent*>(self)->lastScreenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneHoverEvent_SetLastScreenPos(QGraphicsSceneHoverEvent* self, QPoint* pos) {
	self->setLastScreenPos(*pos);
}

int QGraphicsSceneHoverEvent_Modifiers(QGraphicsSceneHoverEvent* self) {
	Qt::KeyboardModifiers ret = const_cast<const QGraphicsSceneHoverEvent*>(self)->modifiers();
	return static_cast<int>(ret);
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

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new2(uintptr_t typeVal) {
	return new QGraphicsSceneHelpEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneHelpEvent_ScenePos(QGraphicsSceneHelpEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneHelpEvent*>(self)->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneHelpEvent_SetScenePos(QGraphicsSceneHelpEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneHelpEvent_ScreenPos(QGraphicsSceneHelpEvent* self) {
	QPoint ret = const_cast<const QGraphicsSceneHelpEvent*>(self)->screenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
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

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new2(uintptr_t typeVal) {
	return new QGraphicsSceneDragDropEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneDragDropEvent_Pos(QGraphicsSceneDragDropEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneDragDropEvent*>(self)->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneDragDropEvent_SetPos(QGraphicsSceneDragDropEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneDragDropEvent_ScenePos(QGraphicsSceneDragDropEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneDragDropEvent*>(self)->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneDragDropEvent_SetScenePos(QGraphicsSceneDragDropEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneDragDropEvent_ScreenPos(QGraphicsSceneDragDropEvent* self) {
	QPoint ret = const_cast<const QGraphicsSceneDragDropEvent*>(self)->screenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QGraphicsSceneDragDropEvent_SetScreenPos(QGraphicsSceneDragDropEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

int QGraphicsSceneDragDropEvent_Buttons(QGraphicsSceneDragDropEvent* self) {
	Qt::MouseButtons ret = const_cast<const QGraphicsSceneDragDropEvent*>(self)->buttons();
	return static_cast<int>(ret);
}

void QGraphicsSceneDragDropEvent_SetButtons(QGraphicsSceneDragDropEvent* self, int buttons) {
	self->setButtons(static_cast<Qt::MouseButtons>(buttons));
}

int QGraphicsSceneDragDropEvent_Modifiers(QGraphicsSceneDragDropEvent* self) {
	Qt::KeyboardModifiers ret = const_cast<const QGraphicsSceneDragDropEvent*>(self)->modifiers();
	return static_cast<int>(ret);
}

void QGraphicsSceneDragDropEvent_SetModifiers(QGraphicsSceneDragDropEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QGraphicsSceneDragDropEvent_PossibleActions(QGraphicsSceneDragDropEvent* self) {
	Qt::DropActions ret = const_cast<const QGraphicsSceneDragDropEvent*>(self)->possibleActions();
	return static_cast<int>(ret);
}

void QGraphicsSceneDragDropEvent_SetPossibleActions(QGraphicsSceneDragDropEvent* self, int actions) {
	self->setPossibleActions(static_cast<Qt::DropActions>(actions));
}

uintptr_t QGraphicsSceneDragDropEvent_ProposedAction(QGraphicsSceneDragDropEvent* self) {
	Qt::DropAction ret = const_cast<const QGraphicsSceneDragDropEvent*>(self)->proposedAction();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsSceneDragDropEvent_SetProposedAction(QGraphicsSceneDragDropEvent* self, uintptr_t action) {
	self->setProposedAction(static_cast<Qt::DropAction>(action));
}

void QGraphicsSceneDragDropEvent_AcceptProposedAction(QGraphicsSceneDragDropEvent* self) {
	self->acceptProposedAction();
}

uintptr_t QGraphicsSceneDragDropEvent_DropAction(QGraphicsSceneDragDropEvent* self) {
	Qt::DropAction ret = const_cast<const QGraphicsSceneDragDropEvent*>(self)->dropAction();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsSceneDragDropEvent_SetDropAction(QGraphicsSceneDragDropEvent* self, uintptr_t action) {
	self->setDropAction(static_cast<Qt::DropAction>(action));
}

QWidget* QGraphicsSceneDragDropEvent_Source(QGraphicsSceneDragDropEvent* self) {
	return const_cast<const QGraphicsSceneDragDropEvent*>(self)->source();
}

void QGraphicsSceneDragDropEvent_SetSource(QGraphicsSceneDragDropEvent* self, QWidget* source) {
	self->setSource(source);
}

QMimeData* QGraphicsSceneDragDropEvent_MimeData(QGraphicsSceneDragDropEvent* self) {
	return (QMimeData*) const_cast<const QGraphicsSceneDragDropEvent*>(self)->mimeData();
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
	QSizeF ret = const_cast<const QGraphicsSceneResizeEvent*>(self)->oldSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsSceneResizeEvent_SetOldSize(QGraphicsSceneResizeEvent* self, QSizeF* size) {
	self->setOldSize(*size);
}

QSizeF* QGraphicsSceneResizeEvent_NewSize(QGraphicsSceneResizeEvent* self) {
	QSizeF ret = const_cast<const QGraphicsSceneResizeEvent*>(self)->newSize();
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
	QPointF ret = const_cast<const QGraphicsSceneMoveEvent*>(self)->oldPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneMoveEvent_SetOldPos(QGraphicsSceneMoveEvent* self, QPointF* pos) {
	self->setOldPos(*pos);
}

QPointF* QGraphicsSceneMoveEvent_NewPos(QGraphicsSceneMoveEvent* self) {
	QPointF ret = const_cast<const QGraphicsSceneMoveEvent*>(self)->newPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsSceneMoveEvent_SetNewPos(QGraphicsSceneMoveEvent* self, QPointF* pos) {
	self->setNewPos(*pos);
}

void QGraphicsSceneMoveEvent_Delete(QGraphicsSceneMoveEvent* self) {
	delete self;
}

