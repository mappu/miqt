#include <QEvent>
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

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QGraphicsSceneEvent* QGraphicsSceneEvent_new(int type) {
	return new (std::nothrow) QGraphicsSceneEvent(static_cast<QEvent::Type>(type));
}

void QGraphicsSceneEvent_virtbase(QGraphicsSceneEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QWidget* QGraphicsSceneEvent_widget(const QGraphicsSceneEvent* self) {
	return self->widget();
}

void QGraphicsSceneEvent_setWidget(QGraphicsSceneEvent* self, QWidget* widget) {
	self->setWidget(widget);
}

void QGraphicsSceneEvent_delete(QGraphicsSceneEvent* self) {
	delete self;
}

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new() {
	return new (std::nothrow) QGraphicsSceneMouseEvent();
}

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new2(int type) {
	return new (std::nothrow) QGraphicsSceneMouseEvent(static_cast<QEvent::Type>(type));
}

void QGraphicsSceneMouseEvent_virtbase(QGraphicsSceneMouseEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

struct miqt_qpointf QGraphicsSceneMouseEvent_pos(const QGraphicsSceneMouseEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->pos());
}

void QGraphicsSceneMouseEvent_setPos(QGraphicsSceneMouseEvent* self, struct miqt_qpointf pos) {
	self->setPos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpointf QGraphicsSceneMouseEvent_scenePos(const QGraphicsSceneMouseEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->scenePos());
}

void QGraphicsSceneMouseEvent_setScenePos(QGraphicsSceneMouseEvent* self, struct miqt_qpointf pos) {
	self->setScenePos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpoint QGraphicsSceneMouseEvent_screenPos(const QGraphicsSceneMouseEvent* self) {
	return miqt_to_cabi<struct miqt_qpoint>(self->screenPos());
}

void QGraphicsSceneMouseEvent_setScreenPos(QGraphicsSceneMouseEvent* self, struct miqt_qpoint pos) {
	self->setScreenPos(miqt_from_cabi<QPoint>(pos));
}

struct miqt_qpointf QGraphicsSceneMouseEvent_buttonDownPos(const QGraphicsSceneMouseEvent* self, int button) {
	return miqt_to_cabi<struct miqt_qpointf>(self->buttonDownPos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_setButtonDownPos(QGraphicsSceneMouseEvent* self, int button, struct miqt_qpointf pos) {
	self->setButtonDownPos(static_cast<Qt::MouseButton>(button), miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpointf QGraphicsSceneMouseEvent_buttonDownScenePos(const QGraphicsSceneMouseEvent* self, int button) {
	return miqt_to_cabi<struct miqt_qpointf>(self->buttonDownScenePos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_setButtonDownScenePos(QGraphicsSceneMouseEvent* self, int button, struct miqt_qpointf pos) {
	self->setButtonDownScenePos(static_cast<Qt::MouseButton>(button), miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpoint QGraphicsSceneMouseEvent_buttonDownScreenPos(const QGraphicsSceneMouseEvent* self, int button) {
	return miqt_to_cabi<struct miqt_qpoint>(self->buttonDownScreenPos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_setButtonDownScreenPos(QGraphicsSceneMouseEvent* self, int button, struct miqt_qpoint pos) {
	self->setButtonDownScreenPos(static_cast<Qt::MouseButton>(button), miqt_from_cabi<QPoint>(pos));
}

struct miqt_qpointf QGraphicsSceneMouseEvent_lastPos(const QGraphicsSceneMouseEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->lastPos());
}

void QGraphicsSceneMouseEvent_setLastPos(QGraphicsSceneMouseEvent* self, struct miqt_qpointf pos) {
	self->setLastPos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpointf QGraphicsSceneMouseEvent_lastScenePos(const QGraphicsSceneMouseEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->lastScenePos());
}

void QGraphicsSceneMouseEvent_setLastScenePos(QGraphicsSceneMouseEvent* self, struct miqt_qpointf pos) {
	self->setLastScenePos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpoint QGraphicsSceneMouseEvent_lastScreenPos(const QGraphicsSceneMouseEvent* self) {
	return miqt_to_cabi<struct miqt_qpoint>(self->lastScreenPos());
}

void QGraphicsSceneMouseEvent_setLastScreenPos(QGraphicsSceneMouseEvent* self, struct miqt_qpoint pos) {
	self->setLastScreenPos(miqt_from_cabi<QPoint>(pos));
}

int QGraphicsSceneMouseEvent_buttons(const QGraphicsSceneMouseEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

void QGraphicsSceneMouseEvent_setButtons(QGraphicsSceneMouseEvent* self, int buttons) {
	self->setButtons(static_cast<Qt::MouseButtons>(buttons));
}

int QGraphicsSceneMouseEvent_button(const QGraphicsSceneMouseEvent* self) {
	Qt::MouseButton _ret = self->button();
	return static_cast<int>(_ret);
}

void QGraphicsSceneMouseEvent_setButton(QGraphicsSceneMouseEvent* self, int button) {
	self->setButton(static_cast<Qt::MouseButton>(button));
}

int QGraphicsSceneMouseEvent_modifiers(const QGraphicsSceneMouseEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

void QGraphicsSceneMouseEvent_setModifiers(QGraphicsSceneMouseEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QGraphicsSceneMouseEvent_source(const QGraphicsSceneMouseEvent* self) {
	Qt::MouseEventSource _ret = self->source();
	return static_cast<int>(_ret);
}

void QGraphicsSceneMouseEvent_setSource(QGraphicsSceneMouseEvent* self, int source) {
	self->setSource(static_cast<Qt::MouseEventSource>(source));
}

int QGraphicsSceneMouseEvent_flags(const QGraphicsSceneMouseEvent* self) {
	Qt::MouseEventFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QGraphicsSceneMouseEvent_setFlags(QGraphicsSceneMouseEvent* self, int flags) {
	self->setFlags(static_cast<Qt::MouseEventFlags>(flags));
}

void QGraphicsSceneMouseEvent_delete(QGraphicsSceneMouseEvent* self) {
	delete self;
}

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new() {
	return new (std::nothrow) QGraphicsSceneWheelEvent();
}

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new2(int type) {
	return new (std::nothrow) QGraphicsSceneWheelEvent(static_cast<QEvent::Type>(type));
}

void QGraphicsSceneWheelEvent_virtbase(QGraphicsSceneWheelEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

struct miqt_qpointf QGraphicsSceneWheelEvent_pos(const QGraphicsSceneWheelEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->pos());
}

void QGraphicsSceneWheelEvent_setPos(QGraphicsSceneWheelEvent* self, struct miqt_qpointf pos) {
	self->setPos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpointf QGraphicsSceneWheelEvent_scenePos(const QGraphicsSceneWheelEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->scenePos());
}

void QGraphicsSceneWheelEvent_setScenePos(QGraphicsSceneWheelEvent* self, struct miqt_qpointf pos) {
	self->setScenePos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpoint QGraphicsSceneWheelEvent_screenPos(const QGraphicsSceneWheelEvent* self) {
	return miqt_to_cabi<struct miqt_qpoint>(self->screenPos());
}

void QGraphicsSceneWheelEvent_setScreenPos(QGraphicsSceneWheelEvent* self, struct miqt_qpoint pos) {
	self->setScreenPos(miqt_from_cabi<QPoint>(pos));
}

int QGraphicsSceneWheelEvent_buttons(const QGraphicsSceneWheelEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

void QGraphicsSceneWheelEvent_setButtons(QGraphicsSceneWheelEvent* self, int buttons) {
	self->setButtons(static_cast<Qt::MouseButtons>(buttons));
}

int QGraphicsSceneWheelEvent_modifiers(const QGraphicsSceneWheelEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

void QGraphicsSceneWheelEvent_setModifiers(QGraphicsSceneWheelEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QGraphicsSceneWheelEvent_delta(const QGraphicsSceneWheelEvent* self) {
	return self->delta();
}

void QGraphicsSceneWheelEvent_setDelta(QGraphicsSceneWheelEvent* self, int delta) {
	self->setDelta(static_cast<int>(delta));
}

int QGraphicsSceneWheelEvent_orientation(const QGraphicsSceneWheelEvent* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QGraphicsSceneWheelEvent_setOrientation(QGraphicsSceneWheelEvent* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QGraphicsSceneWheelEvent_delete(QGraphicsSceneWheelEvent* self) {
	delete self;
}

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new() {
	return new (std::nothrow) QGraphicsSceneContextMenuEvent();
}

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new2(int type) {
	return new (std::nothrow) QGraphicsSceneContextMenuEvent(static_cast<QEvent::Type>(type));
}

void QGraphicsSceneContextMenuEvent_virtbase(QGraphicsSceneContextMenuEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

struct miqt_qpointf QGraphicsSceneContextMenuEvent_pos(const QGraphicsSceneContextMenuEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->pos());
}

void QGraphicsSceneContextMenuEvent_setPos(QGraphicsSceneContextMenuEvent* self, struct miqt_qpointf pos) {
	self->setPos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpointf QGraphicsSceneContextMenuEvent_scenePos(const QGraphicsSceneContextMenuEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->scenePos());
}

void QGraphicsSceneContextMenuEvent_setScenePos(QGraphicsSceneContextMenuEvent* self, struct miqt_qpointf pos) {
	self->setScenePos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpoint QGraphicsSceneContextMenuEvent_screenPos(const QGraphicsSceneContextMenuEvent* self) {
	return miqt_to_cabi<struct miqt_qpoint>(self->screenPos());
}

void QGraphicsSceneContextMenuEvent_setScreenPos(QGraphicsSceneContextMenuEvent* self, struct miqt_qpoint pos) {
	self->setScreenPos(miqt_from_cabi<QPoint>(pos));
}

int QGraphicsSceneContextMenuEvent_modifiers(const QGraphicsSceneContextMenuEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

void QGraphicsSceneContextMenuEvent_setModifiers(QGraphicsSceneContextMenuEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QGraphicsSceneContextMenuEvent_reason(const QGraphicsSceneContextMenuEvent* self) {
	QGraphicsSceneContextMenuEvent::Reason _ret = self->reason();
	return static_cast<int>(_ret);
}

void QGraphicsSceneContextMenuEvent_setReason(QGraphicsSceneContextMenuEvent* self, int reason) {
	self->setReason(static_cast<QGraphicsSceneContextMenuEvent::Reason>(reason));
}

void QGraphicsSceneContextMenuEvent_delete(QGraphicsSceneContextMenuEvent* self) {
	delete self;
}

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new() {
	return new (std::nothrow) QGraphicsSceneHoverEvent();
}

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new2(int type) {
	return new (std::nothrow) QGraphicsSceneHoverEvent(static_cast<QEvent::Type>(type));
}

void QGraphicsSceneHoverEvent_virtbase(QGraphicsSceneHoverEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

struct miqt_qpointf QGraphicsSceneHoverEvent_pos(const QGraphicsSceneHoverEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->pos());
}

void QGraphicsSceneHoverEvent_setPos(QGraphicsSceneHoverEvent* self, struct miqt_qpointf pos) {
	self->setPos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpointf QGraphicsSceneHoverEvent_scenePos(const QGraphicsSceneHoverEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->scenePos());
}

void QGraphicsSceneHoverEvent_setScenePos(QGraphicsSceneHoverEvent* self, struct miqt_qpointf pos) {
	self->setScenePos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpoint QGraphicsSceneHoverEvent_screenPos(const QGraphicsSceneHoverEvent* self) {
	return miqt_to_cabi<struct miqt_qpoint>(self->screenPos());
}

void QGraphicsSceneHoverEvent_setScreenPos(QGraphicsSceneHoverEvent* self, struct miqt_qpoint pos) {
	self->setScreenPos(miqt_from_cabi<QPoint>(pos));
}

struct miqt_qpointf QGraphicsSceneHoverEvent_lastPos(const QGraphicsSceneHoverEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->lastPos());
}

void QGraphicsSceneHoverEvent_setLastPos(QGraphicsSceneHoverEvent* self, struct miqt_qpointf pos) {
	self->setLastPos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpointf QGraphicsSceneHoverEvent_lastScenePos(const QGraphicsSceneHoverEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->lastScenePos());
}

void QGraphicsSceneHoverEvent_setLastScenePos(QGraphicsSceneHoverEvent* self, struct miqt_qpointf pos) {
	self->setLastScenePos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpoint QGraphicsSceneHoverEvent_lastScreenPos(const QGraphicsSceneHoverEvent* self) {
	return miqt_to_cabi<struct miqt_qpoint>(self->lastScreenPos());
}

void QGraphicsSceneHoverEvent_setLastScreenPos(QGraphicsSceneHoverEvent* self, struct miqt_qpoint pos) {
	self->setLastScreenPos(miqt_from_cabi<QPoint>(pos));
}

int QGraphicsSceneHoverEvent_modifiers(const QGraphicsSceneHoverEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

void QGraphicsSceneHoverEvent_setModifiers(QGraphicsSceneHoverEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

void QGraphicsSceneHoverEvent_delete(QGraphicsSceneHoverEvent* self) {
	delete self;
}

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new() {
	return new (std::nothrow) QGraphicsSceneHelpEvent();
}

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new2(int type) {
	return new (std::nothrow) QGraphicsSceneHelpEvent(static_cast<QEvent::Type>(type));
}

void QGraphicsSceneHelpEvent_virtbase(QGraphicsSceneHelpEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

struct miqt_qpointf QGraphicsSceneHelpEvent_scenePos(const QGraphicsSceneHelpEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->scenePos());
}

void QGraphicsSceneHelpEvent_setScenePos(QGraphicsSceneHelpEvent* self, struct miqt_qpointf pos) {
	self->setScenePos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpoint QGraphicsSceneHelpEvent_screenPos(const QGraphicsSceneHelpEvent* self) {
	return miqt_to_cabi<struct miqt_qpoint>(self->screenPos());
}

void QGraphicsSceneHelpEvent_setScreenPos(QGraphicsSceneHelpEvent* self, struct miqt_qpoint pos) {
	self->setScreenPos(miqt_from_cabi<QPoint>(pos));
}

void QGraphicsSceneHelpEvent_delete(QGraphicsSceneHelpEvent* self) {
	delete self;
}

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new() {
	return new (std::nothrow) QGraphicsSceneDragDropEvent();
}

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new2(int type) {
	return new (std::nothrow) QGraphicsSceneDragDropEvent(static_cast<QEvent::Type>(type));
}

void QGraphicsSceneDragDropEvent_virtbase(QGraphicsSceneDragDropEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

struct miqt_qpointf QGraphicsSceneDragDropEvent_pos(const QGraphicsSceneDragDropEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->pos());
}

void QGraphicsSceneDragDropEvent_setPos(QGraphicsSceneDragDropEvent* self, struct miqt_qpointf pos) {
	self->setPos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpointf QGraphicsSceneDragDropEvent_scenePos(const QGraphicsSceneDragDropEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->scenePos());
}

void QGraphicsSceneDragDropEvent_setScenePos(QGraphicsSceneDragDropEvent* self, struct miqt_qpointf pos) {
	self->setScenePos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpoint QGraphicsSceneDragDropEvent_screenPos(const QGraphicsSceneDragDropEvent* self) {
	return miqt_to_cabi<struct miqt_qpoint>(self->screenPos());
}

void QGraphicsSceneDragDropEvent_setScreenPos(QGraphicsSceneDragDropEvent* self, struct miqt_qpoint pos) {
	self->setScreenPos(miqt_from_cabi<QPoint>(pos));
}

int QGraphicsSceneDragDropEvent_buttons(const QGraphicsSceneDragDropEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

void QGraphicsSceneDragDropEvent_setButtons(QGraphicsSceneDragDropEvent* self, int buttons) {
	self->setButtons(static_cast<Qt::MouseButtons>(buttons));
}

int QGraphicsSceneDragDropEvent_modifiers(const QGraphicsSceneDragDropEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

void QGraphicsSceneDragDropEvent_setModifiers(QGraphicsSceneDragDropEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QGraphicsSceneDragDropEvent_possibleActions(const QGraphicsSceneDragDropEvent* self) {
	Qt::DropActions _ret = self->possibleActions();
	return static_cast<int>(_ret);
}

void QGraphicsSceneDragDropEvent_setPossibleActions(QGraphicsSceneDragDropEvent* self, int actions) {
	self->setPossibleActions(static_cast<Qt::DropActions>(actions));
}

int QGraphicsSceneDragDropEvent_proposedAction(const QGraphicsSceneDragDropEvent* self) {
	Qt::DropAction _ret = self->proposedAction();
	return static_cast<int>(_ret);
}

void QGraphicsSceneDragDropEvent_setProposedAction(QGraphicsSceneDragDropEvent* self, int action) {
	self->setProposedAction(static_cast<Qt::DropAction>(action));
}

void QGraphicsSceneDragDropEvent_acceptProposedAction(QGraphicsSceneDragDropEvent* self) {
	self->acceptProposedAction();
}

int QGraphicsSceneDragDropEvent_dropAction(const QGraphicsSceneDragDropEvent* self) {
	Qt::DropAction _ret = self->dropAction();
	return static_cast<int>(_ret);
}

void QGraphicsSceneDragDropEvent_setDropAction(QGraphicsSceneDragDropEvent* self, int action) {
	self->setDropAction(static_cast<Qt::DropAction>(action));
}

QWidget* QGraphicsSceneDragDropEvent_source(const QGraphicsSceneDragDropEvent* self) {
	return self->source();
}

void QGraphicsSceneDragDropEvent_setSource(QGraphicsSceneDragDropEvent* self, QWidget* source) {
	self->setSource(source);
}

QMimeData* QGraphicsSceneDragDropEvent_mimeData(const QGraphicsSceneDragDropEvent* self) {
	return (QMimeData*) self->mimeData();
}

void QGraphicsSceneDragDropEvent_setMimeData(QGraphicsSceneDragDropEvent* self, QMimeData* data) {
	self->setMimeData(data);
}

void QGraphicsSceneDragDropEvent_delete(QGraphicsSceneDragDropEvent* self) {
	delete self;
}

QGraphicsSceneResizeEvent* QGraphicsSceneResizeEvent_new() {
	return new (std::nothrow) QGraphicsSceneResizeEvent();
}

void QGraphicsSceneResizeEvent_virtbase(QGraphicsSceneResizeEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

struct miqt_qsizef QGraphicsSceneResizeEvent_oldSize(const QGraphicsSceneResizeEvent* self) {
	return miqt_to_cabi<struct miqt_qsizef>(self->oldSize());
}

void QGraphicsSceneResizeEvent_setOldSize(QGraphicsSceneResizeEvent* self, struct miqt_qsizef size) {
	self->setOldSize(miqt_from_cabi<QSizeF>(size));
}

struct miqt_qsizef QGraphicsSceneResizeEvent_newSize(const QGraphicsSceneResizeEvent* self) {
	return miqt_to_cabi<struct miqt_qsizef>(self->newSize());
}

void QGraphicsSceneResizeEvent_setNewSize(QGraphicsSceneResizeEvent* self, struct miqt_qsizef size) {
	self->setNewSize(miqt_from_cabi<QSizeF>(size));
}

void QGraphicsSceneResizeEvent_delete(QGraphicsSceneResizeEvent* self) {
	delete self;
}

QGraphicsSceneMoveEvent* QGraphicsSceneMoveEvent_new() {
	return new (std::nothrow) QGraphicsSceneMoveEvent();
}

void QGraphicsSceneMoveEvent_virtbase(QGraphicsSceneMoveEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

struct miqt_qpointf QGraphicsSceneMoveEvent_oldPos(const QGraphicsSceneMoveEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->oldPos());
}

void QGraphicsSceneMoveEvent_setOldPos(QGraphicsSceneMoveEvent* self, struct miqt_qpointf pos) {
	self->setOldPos(miqt_from_cabi<QPointF>(pos));
}

struct miqt_qpointf QGraphicsSceneMoveEvent_newPos(const QGraphicsSceneMoveEvent* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->newPos());
}

void QGraphicsSceneMoveEvent_setNewPos(QGraphicsSceneMoveEvent* self, struct miqt_qpointf pos) {
	self->setNewPos(miqt_from_cabi<QPointF>(pos));
}

void QGraphicsSceneMoveEvent_delete(QGraphicsSceneMoveEvent* self) {
	delete self;
}

