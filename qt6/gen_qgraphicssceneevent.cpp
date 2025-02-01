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

void miqt_exec_callback_QGraphicsSceneEvent_setAccepted(QGraphicsSceneEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneEvent_clone(const QGraphicsSceneEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneMouseEvent_setAccepted(QGraphicsSceneMouseEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneMouseEvent_clone(const QGraphicsSceneMouseEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneWheelEvent_setAccepted(QGraphicsSceneWheelEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneWheelEvent_clone(const QGraphicsSceneWheelEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneContextMenuEvent_setAccepted(QGraphicsSceneContextMenuEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneContextMenuEvent_clone(const QGraphicsSceneContextMenuEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneHoverEvent_setAccepted(QGraphicsSceneHoverEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneHoverEvent_clone(const QGraphicsSceneHoverEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneHelpEvent_setAccepted(QGraphicsSceneHelpEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneHelpEvent_clone(const QGraphicsSceneHelpEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneDragDropEvent_setAccepted(QGraphicsSceneDragDropEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneDragDropEvent_clone(const QGraphicsSceneDragDropEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneResizeEvent_setAccepted(QGraphicsSceneResizeEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneResizeEvent_clone(const QGraphicsSceneResizeEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneMoveEvent_setAccepted(QGraphicsSceneMoveEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneMoveEvent_clone(const QGraphicsSceneMoveEvent*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsSceneEvent final : public QGraphicsSceneEvent {
public:

	MiqtVirtualQGraphicsSceneEvent(QEvent::Type type): QGraphicsSceneEvent(type) {};

	virtual ~MiqtVirtualQGraphicsSceneEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QGraphicsSceneEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneEvent_setAccepted(this, handle__setAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setAccepted(bool accepted) {

		QGraphicsSceneEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__clone == 0) {
			return QGraphicsSceneEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneEvent_clone(this, handle__clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_clone() const {

		return QGraphicsSceneEvent::clone();

	}

};

QGraphicsSceneEvent* QGraphicsSceneEvent_new(int type) {
	return new MiqtVirtualQGraphicsSceneEvent(static_cast<QEvent::Type>(type));
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

unsigned long long QGraphicsSceneEvent_timestamp(const QGraphicsSceneEvent* self) {
	quint64 _ret = self->timestamp();
	return static_cast<unsigned long long>(_ret);
}

void QGraphicsSceneEvent_setTimestamp(QGraphicsSceneEvent* self, unsigned long long ts) {
	self->setTimestamp(static_cast<quint64>(ts));
}

bool QGraphicsSceneEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneEvent*>( (QGraphicsSceneEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAccepted = slot;
	return true;
}

void QGraphicsSceneEvent_virtualbase_setAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneEvent*)(self) )->virtualbase_setAccepted(accepted);
}

bool QGraphicsSceneEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneEvent*>( (QGraphicsSceneEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QEvent* QGraphicsSceneEvent_virtualbase_clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneEvent*)(self) )->virtualbase_clone();
}

void QGraphicsSceneEvent_delete(QGraphicsSceneEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneMouseEvent final : public QGraphicsSceneMouseEvent {
public:

	MiqtVirtualQGraphicsSceneMouseEvent(): QGraphicsSceneMouseEvent() {};
	MiqtVirtualQGraphicsSceneMouseEvent(QEvent::Type type): QGraphicsSceneMouseEvent(type) {};

	virtual ~MiqtVirtualQGraphicsSceneMouseEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QGraphicsSceneMouseEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneMouseEvent_setAccepted(this, handle__setAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setAccepted(bool accepted) {

		QGraphicsSceneMouseEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__clone == 0) {
			return QGraphicsSceneMouseEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneMouseEvent_clone(this, handle__clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_clone() const {

		return QGraphicsSceneMouseEvent::clone();

	}

};

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new() {
	return new MiqtVirtualQGraphicsSceneMouseEvent();
}

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new2(int type) {
	return new MiqtVirtualQGraphicsSceneMouseEvent(static_cast<QEvent::Type>(type));
}

void QGraphicsSceneMouseEvent_virtbase(QGraphicsSceneMouseEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

QPointF* QGraphicsSceneMouseEvent_pos(const QGraphicsSceneMouseEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneMouseEvent_setPos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_scenePos(const QGraphicsSceneMouseEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneMouseEvent_setScenePos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneMouseEvent_screenPos(const QGraphicsSceneMouseEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneMouseEvent_setScreenPos(QGraphicsSceneMouseEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_buttonDownPos(const QGraphicsSceneMouseEvent* self, int button) {
	return new QPointF(self->buttonDownPos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_setButtonDownPos(QGraphicsSceneMouseEvent* self, int button, QPointF* pos) {
	self->setButtonDownPos(static_cast<Qt::MouseButton>(button), *pos);
}

QPointF* QGraphicsSceneMouseEvent_buttonDownScenePos(const QGraphicsSceneMouseEvent* self, int button) {
	return new QPointF(self->buttonDownScenePos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_setButtonDownScenePos(QGraphicsSceneMouseEvent* self, int button, QPointF* pos) {
	self->setButtonDownScenePos(static_cast<Qt::MouseButton>(button), *pos);
}

QPoint* QGraphicsSceneMouseEvent_buttonDownScreenPos(const QGraphicsSceneMouseEvent* self, int button) {
	return new QPoint(self->buttonDownScreenPos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_setButtonDownScreenPos(QGraphicsSceneMouseEvent* self, int button, QPoint* pos) {
	self->setButtonDownScreenPos(static_cast<Qt::MouseButton>(button), *pos);
}

QPointF* QGraphicsSceneMouseEvent_lastPos(const QGraphicsSceneMouseEvent* self) {
	return new QPointF(self->lastPos());
}

void QGraphicsSceneMouseEvent_setLastPos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setLastPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_lastScenePos(const QGraphicsSceneMouseEvent* self) {
	return new QPointF(self->lastScenePos());
}

void QGraphicsSceneMouseEvent_setLastScenePos(QGraphicsSceneMouseEvent* self, QPointF* pos) {
	self->setLastScenePos(*pos);
}

QPoint* QGraphicsSceneMouseEvent_lastScreenPos(const QGraphicsSceneMouseEvent* self) {
	return new QPoint(self->lastScreenPos());
}

void QGraphicsSceneMouseEvent_setLastScreenPos(QGraphicsSceneMouseEvent* self, QPoint* pos) {
	self->setLastScreenPos(*pos);
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

bool QGraphicsSceneMouseEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneMouseEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneMouseEvent*>( (QGraphicsSceneMouseEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAccepted = slot;
	return true;
}

void QGraphicsSceneMouseEvent_virtualbase_setAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneMouseEvent*)(self) )->virtualbase_setAccepted(accepted);
}

bool QGraphicsSceneMouseEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneMouseEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneMouseEvent*>( (QGraphicsSceneMouseEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QEvent* QGraphicsSceneMouseEvent_virtualbase_clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneMouseEvent*)(self) )->virtualbase_clone();
}

void QGraphicsSceneMouseEvent_delete(QGraphicsSceneMouseEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneWheelEvent final : public QGraphicsSceneWheelEvent {
public:

	MiqtVirtualQGraphicsSceneWheelEvent(): QGraphicsSceneWheelEvent() {};
	MiqtVirtualQGraphicsSceneWheelEvent(QEvent::Type type): QGraphicsSceneWheelEvent(type) {};

	virtual ~MiqtVirtualQGraphicsSceneWheelEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QGraphicsSceneWheelEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneWheelEvent_setAccepted(this, handle__setAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setAccepted(bool accepted) {

		QGraphicsSceneWheelEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__clone == 0) {
			return QGraphicsSceneWheelEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneWheelEvent_clone(this, handle__clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_clone() const {

		return QGraphicsSceneWheelEvent::clone();

	}

};

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new() {
	return new MiqtVirtualQGraphicsSceneWheelEvent();
}

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new2(int type) {
	return new MiqtVirtualQGraphicsSceneWheelEvent(static_cast<QEvent::Type>(type));
}

void QGraphicsSceneWheelEvent_virtbase(QGraphicsSceneWheelEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

QPointF* QGraphicsSceneWheelEvent_pos(const QGraphicsSceneWheelEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneWheelEvent_setPos(QGraphicsSceneWheelEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneWheelEvent_scenePos(const QGraphicsSceneWheelEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneWheelEvent_setScenePos(QGraphicsSceneWheelEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneWheelEvent_screenPos(const QGraphicsSceneWheelEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneWheelEvent_setScreenPos(QGraphicsSceneWheelEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
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

int QGraphicsSceneWheelEvent_phase(const QGraphicsSceneWheelEvent* self) {
	Qt::ScrollPhase _ret = self->phase();
	return static_cast<int>(_ret);
}

void QGraphicsSceneWheelEvent_setPhase(QGraphicsSceneWheelEvent* self, int scrollPhase) {
	self->setPhase(static_cast<Qt::ScrollPhase>(scrollPhase));
}

QPoint* QGraphicsSceneWheelEvent_pixelDelta(const QGraphicsSceneWheelEvent* self) {
	return new QPoint(self->pixelDelta());
}

void QGraphicsSceneWheelEvent_setPixelDelta(QGraphicsSceneWheelEvent* self, QPoint* delta) {
	self->setPixelDelta(*delta);
}

bool QGraphicsSceneWheelEvent_isInverted(const QGraphicsSceneWheelEvent* self) {
	return self->isInverted();
}

void QGraphicsSceneWheelEvent_setInverted(QGraphicsSceneWheelEvent* self, bool inverted) {
	self->setInverted(inverted);
}

bool QGraphicsSceneWheelEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneWheelEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneWheelEvent*>( (QGraphicsSceneWheelEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAccepted = slot;
	return true;
}

void QGraphicsSceneWheelEvent_virtualbase_setAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneWheelEvent*)(self) )->virtualbase_setAccepted(accepted);
}

bool QGraphicsSceneWheelEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneWheelEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneWheelEvent*>( (QGraphicsSceneWheelEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QEvent* QGraphicsSceneWheelEvent_virtualbase_clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneWheelEvent*)(self) )->virtualbase_clone();
}

void QGraphicsSceneWheelEvent_delete(QGraphicsSceneWheelEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneContextMenuEvent final : public QGraphicsSceneContextMenuEvent {
public:

	MiqtVirtualQGraphicsSceneContextMenuEvent(): QGraphicsSceneContextMenuEvent() {};
	MiqtVirtualQGraphicsSceneContextMenuEvent(QEvent::Type type): QGraphicsSceneContextMenuEvent(type) {};

	virtual ~MiqtVirtualQGraphicsSceneContextMenuEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QGraphicsSceneContextMenuEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneContextMenuEvent_setAccepted(this, handle__setAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setAccepted(bool accepted) {

		QGraphicsSceneContextMenuEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__clone == 0) {
			return QGraphicsSceneContextMenuEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneContextMenuEvent_clone(this, handle__clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_clone() const {

		return QGraphicsSceneContextMenuEvent::clone();

	}

};

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new() {
	return new MiqtVirtualQGraphicsSceneContextMenuEvent();
}

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new2(int type) {
	return new MiqtVirtualQGraphicsSceneContextMenuEvent(static_cast<QEvent::Type>(type));
}

void QGraphicsSceneContextMenuEvent_virtbase(QGraphicsSceneContextMenuEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

QPointF* QGraphicsSceneContextMenuEvent_pos(const QGraphicsSceneContextMenuEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneContextMenuEvent_setPos(QGraphicsSceneContextMenuEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneContextMenuEvent_scenePos(const QGraphicsSceneContextMenuEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneContextMenuEvent_setScenePos(QGraphicsSceneContextMenuEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneContextMenuEvent_screenPos(const QGraphicsSceneContextMenuEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneContextMenuEvent_setScreenPos(QGraphicsSceneContextMenuEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
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

bool QGraphicsSceneContextMenuEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneContextMenuEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneContextMenuEvent*>( (QGraphicsSceneContextMenuEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAccepted = slot;
	return true;
}

void QGraphicsSceneContextMenuEvent_virtualbase_setAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneContextMenuEvent*)(self) )->virtualbase_setAccepted(accepted);
}

bool QGraphicsSceneContextMenuEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneContextMenuEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneContextMenuEvent*>( (QGraphicsSceneContextMenuEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QEvent* QGraphicsSceneContextMenuEvent_virtualbase_clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneContextMenuEvent*)(self) )->virtualbase_clone();
}

void QGraphicsSceneContextMenuEvent_delete(QGraphicsSceneContextMenuEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneHoverEvent final : public QGraphicsSceneHoverEvent {
public:

	MiqtVirtualQGraphicsSceneHoverEvent(): QGraphicsSceneHoverEvent() {};
	MiqtVirtualQGraphicsSceneHoverEvent(QEvent::Type type): QGraphicsSceneHoverEvent(type) {};

	virtual ~MiqtVirtualQGraphicsSceneHoverEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QGraphicsSceneHoverEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneHoverEvent_setAccepted(this, handle__setAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setAccepted(bool accepted) {

		QGraphicsSceneHoverEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__clone == 0) {
			return QGraphicsSceneHoverEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneHoverEvent_clone(this, handle__clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_clone() const {

		return QGraphicsSceneHoverEvent::clone();

	}

};

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new() {
	return new MiqtVirtualQGraphicsSceneHoverEvent();
}

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new2(int type) {
	return new MiqtVirtualQGraphicsSceneHoverEvent(static_cast<QEvent::Type>(type));
}

void QGraphicsSceneHoverEvent_virtbase(QGraphicsSceneHoverEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

QPointF* QGraphicsSceneHoverEvent_pos(const QGraphicsSceneHoverEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneHoverEvent_setPos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_scenePos(const QGraphicsSceneHoverEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneHoverEvent_setScenePos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneHoverEvent_screenPos(const QGraphicsSceneHoverEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneHoverEvent_setScreenPos(QGraphicsSceneHoverEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_lastPos(const QGraphicsSceneHoverEvent* self) {
	return new QPointF(self->lastPos());
}

void QGraphicsSceneHoverEvent_setLastPos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setLastPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_lastScenePos(const QGraphicsSceneHoverEvent* self) {
	return new QPointF(self->lastScenePos());
}

void QGraphicsSceneHoverEvent_setLastScenePos(QGraphicsSceneHoverEvent* self, QPointF* pos) {
	self->setLastScenePos(*pos);
}

QPoint* QGraphicsSceneHoverEvent_lastScreenPos(const QGraphicsSceneHoverEvent* self) {
	return new QPoint(self->lastScreenPos());
}

void QGraphicsSceneHoverEvent_setLastScreenPos(QGraphicsSceneHoverEvent* self, QPoint* pos) {
	self->setLastScreenPos(*pos);
}

int QGraphicsSceneHoverEvent_modifiers(const QGraphicsSceneHoverEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

void QGraphicsSceneHoverEvent_setModifiers(QGraphicsSceneHoverEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

bool QGraphicsSceneHoverEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneHoverEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneHoverEvent*>( (QGraphicsSceneHoverEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAccepted = slot;
	return true;
}

void QGraphicsSceneHoverEvent_virtualbase_setAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneHoverEvent*)(self) )->virtualbase_setAccepted(accepted);
}

bool QGraphicsSceneHoverEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneHoverEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneHoverEvent*>( (QGraphicsSceneHoverEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QEvent* QGraphicsSceneHoverEvent_virtualbase_clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneHoverEvent*)(self) )->virtualbase_clone();
}

void QGraphicsSceneHoverEvent_delete(QGraphicsSceneHoverEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneHelpEvent final : public QGraphicsSceneHelpEvent {
public:

	MiqtVirtualQGraphicsSceneHelpEvent(): QGraphicsSceneHelpEvent() {};
	MiqtVirtualQGraphicsSceneHelpEvent(QEvent::Type type): QGraphicsSceneHelpEvent(type) {};

	virtual ~MiqtVirtualQGraphicsSceneHelpEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QGraphicsSceneHelpEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneHelpEvent_setAccepted(this, handle__setAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setAccepted(bool accepted) {

		QGraphicsSceneHelpEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__clone == 0) {
			return QGraphicsSceneHelpEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneHelpEvent_clone(this, handle__clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_clone() const {

		return QGraphicsSceneHelpEvent::clone();

	}

};

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new() {
	return new MiqtVirtualQGraphicsSceneHelpEvent();
}

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new2(int type) {
	return new MiqtVirtualQGraphicsSceneHelpEvent(static_cast<QEvent::Type>(type));
}

void QGraphicsSceneHelpEvent_virtbase(QGraphicsSceneHelpEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

QPointF* QGraphicsSceneHelpEvent_scenePos(const QGraphicsSceneHelpEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneHelpEvent_setScenePos(QGraphicsSceneHelpEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneHelpEvent_screenPos(const QGraphicsSceneHelpEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneHelpEvent_setScreenPos(QGraphicsSceneHelpEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
}

bool QGraphicsSceneHelpEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneHelpEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneHelpEvent*>( (QGraphicsSceneHelpEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAccepted = slot;
	return true;
}

void QGraphicsSceneHelpEvent_virtualbase_setAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneHelpEvent*)(self) )->virtualbase_setAccepted(accepted);
}

bool QGraphicsSceneHelpEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneHelpEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneHelpEvent*>( (QGraphicsSceneHelpEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QEvent* QGraphicsSceneHelpEvent_virtualbase_clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneHelpEvent*)(self) )->virtualbase_clone();
}

void QGraphicsSceneHelpEvent_delete(QGraphicsSceneHelpEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneDragDropEvent final : public QGraphicsSceneDragDropEvent {
public:

	MiqtVirtualQGraphicsSceneDragDropEvent(): QGraphicsSceneDragDropEvent() {};
	MiqtVirtualQGraphicsSceneDragDropEvent(QEvent::Type type): QGraphicsSceneDragDropEvent(type) {};

	virtual ~MiqtVirtualQGraphicsSceneDragDropEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QGraphicsSceneDragDropEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneDragDropEvent_setAccepted(this, handle__setAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setAccepted(bool accepted) {

		QGraphicsSceneDragDropEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__clone == 0) {
			return QGraphicsSceneDragDropEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneDragDropEvent_clone(this, handle__clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_clone() const {

		return QGraphicsSceneDragDropEvent::clone();

	}

};

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new() {
	return new MiqtVirtualQGraphicsSceneDragDropEvent();
}

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new2(int type) {
	return new MiqtVirtualQGraphicsSceneDragDropEvent(static_cast<QEvent::Type>(type));
}

void QGraphicsSceneDragDropEvent_virtbase(QGraphicsSceneDragDropEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

QPointF* QGraphicsSceneDragDropEvent_pos(const QGraphicsSceneDragDropEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneDragDropEvent_setPos(QGraphicsSceneDragDropEvent* self, QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneDragDropEvent_scenePos(const QGraphicsSceneDragDropEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneDragDropEvent_setScenePos(QGraphicsSceneDragDropEvent* self, QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneDragDropEvent_screenPos(const QGraphicsSceneDragDropEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneDragDropEvent_setScreenPos(QGraphicsSceneDragDropEvent* self, QPoint* pos) {
	self->setScreenPos(*pos);
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

bool QGraphicsSceneDragDropEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneDragDropEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneDragDropEvent*>( (QGraphicsSceneDragDropEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAccepted = slot;
	return true;
}

void QGraphicsSceneDragDropEvent_virtualbase_setAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneDragDropEvent*)(self) )->virtualbase_setAccepted(accepted);
}

bool QGraphicsSceneDragDropEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneDragDropEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneDragDropEvent*>( (QGraphicsSceneDragDropEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QEvent* QGraphicsSceneDragDropEvent_virtualbase_clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneDragDropEvent*)(self) )->virtualbase_clone();
}

void QGraphicsSceneDragDropEvent_delete(QGraphicsSceneDragDropEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneResizeEvent final : public QGraphicsSceneResizeEvent {
public:

	MiqtVirtualQGraphicsSceneResizeEvent(): QGraphicsSceneResizeEvent() {};

	virtual ~MiqtVirtualQGraphicsSceneResizeEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QGraphicsSceneResizeEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneResizeEvent_setAccepted(this, handle__setAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setAccepted(bool accepted) {

		QGraphicsSceneResizeEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__clone == 0) {
			return QGraphicsSceneResizeEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneResizeEvent_clone(this, handle__clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_clone() const {

		return QGraphicsSceneResizeEvent::clone();

	}

};

QGraphicsSceneResizeEvent* QGraphicsSceneResizeEvent_new() {
	return new MiqtVirtualQGraphicsSceneResizeEvent();
}

void QGraphicsSceneResizeEvent_virtbase(QGraphicsSceneResizeEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

QSizeF* QGraphicsSceneResizeEvent_oldSize(const QGraphicsSceneResizeEvent* self) {
	return new QSizeF(self->oldSize());
}

void QGraphicsSceneResizeEvent_setOldSize(QGraphicsSceneResizeEvent* self, QSizeF* size) {
	self->setOldSize(*size);
}

QSizeF* QGraphicsSceneResizeEvent_newSize(const QGraphicsSceneResizeEvent* self) {
	return new QSizeF(self->newSize());
}

void QGraphicsSceneResizeEvent_setNewSize(QGraphicsSceneResizeEvent* self, QSizeF* size) {
	self->setNewSize(*size);
}

bool QGraphicsSceneResizeEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneResizeEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneResizeEvent*>( (QGraphicsSceneResizeEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAccepted = slot;
	return true;
}

void QGraphicsSceneResizeEvent_virtualbase_setAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneResizeEvent*)(self) )->virtualbase_setAccepted(accepted);
}

bool QGraphicsSceneResizeEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneResizeEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneResizeEvent*>( (QGraphicsSceneResizeEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QEvent* QGraphicsSceneResizeEvent_virtualbase_clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneResizeEvent*)(self) )->virtualbase_clone();
}

void QGraphicsSceneResizeEvent_delete(QGraphicsSceneResizeEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneMoveEvent final : public QGraphicsSceneMoveEvent {
public:

	MiqtVirtualQGraphicsSceneMoveEvent(): QGraphicsSceneMoveEvent() {};

	virtual ~MiqtVirtualQGraphicsSceneMoveEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QGraphicsSceneMoveEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneMoveEvent_setAccepted(this, handle__setAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setAccepted(bool accepted) {

		QGraphicsSceneMoveEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__clone == 0) {
			return QGraphicsSceneMoveEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneMoveEvent_clone(this, handle__clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_clone() const {

		return QGraphicsSceneMoveEvent::clone();

	}

};

QGraphicsSceneMoveEvent* QGraphicsSceneMoveEvent_new() {
	return new MiqtVirtualQGraphicsSceneMoveEvent();
}

void QGraphicsSceneMoveEvent_virtbase(QGraphicsSceneMoveEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
}

QPointF* QGraphicsSceneMoveEvent_oldPos(const QGraphicsSceneMoveEvent* self) {
	return new QPointF(self->oldPos());
}

void QGraphicsSceneMoveEvent_setOldPos(QGraphicsSceneMoveEvent* self, QPointF* pos) {
	self->setOldPos(*pos);
}

QPointF* QGraphicsSceneMoveEvent_newPos(const QGraphicsSceneMoveEvent* self) {
	return new QPointF(self->newPos());
}

void QGraphicsSceneMoveEvent_setNewPos(QGraphicsSceneMoveEvent* self, QPointF* pos) {
	self->setNewPos(*pos);
}

bool QGraphicsSceneMoveEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneMoveEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneMoveEvent*>( (QGraphicsSceneMoveEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAccepted = slot;
	return true;
}

void QGraphicsSceneMoveEvent_virtualbase_setAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneMoveEvent*)(self) )->virtualbase_setAccepted(accepted);
}

bool QGraphicsSceneMoveEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneMoveEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneMoveEvent*>( (QGraphicsSceneMoveEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QEvent* QGraphicsSceneMoveEvent_virtualbase_clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneMoveEvent*)(self) )->virtualbase_clone();
}

void QGraphicsSceneMoveEvent_delete(QGraphicsSceneMoveEvent* self) {
	delete self;
}

