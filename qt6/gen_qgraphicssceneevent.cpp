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

void miqt_exec_callback_QGraphicsSceneEvent_SetAccepted(QGraphicsSceneEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneEvent_Clone(const QGraphicsSceneEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneMouseEvent_SetAccepted(QGraphicsSceneMouseEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneMouseEvent_Clone(const QGraphicsSceneMouseEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneWheelEvent_SetAccepted(QGraphicsSceneWheelEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneWheelEvent_Clone(const QGraphicsSceneWheelEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneContextMenuEvent_SetAccepted(QGraphicsSceneContextMenuEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneContextMenuEvent_Clone(const QGraphicsSceneContextMenuEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneHoverEvent_SetAccepted(QGraphicsSceneHoverEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneHoverEvent_Clone(const QGraphicsSceneHoverEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneHelpEvent_SetAccepted(QGraphicsSceneHelpEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneHelpEvent_Clone(const QGraphicsSceneHelpEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneDragDropEvent_SetAccepted(QGraphicsSceneDragDropEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneDragDropEvent_Clone(const QGraphicsSceneDragDropEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneResizeEvent_SetAccepted(QGraphicsSceneResizeEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneResizeEvent_Clone(const QGraphicsSceneResizeEvent*, intptr_t);
void miqt_exec_callback_QGraphicsSceneMoveEvent_SetAccepted(QGraphicsSceneMoveEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QGraphicsSceneMoveEvent_Clone(const QGraphicsSceneMoveEvent*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsSceneEvent final : public QGraphicsSceneEvent {
public:

	MiqtVirtualQGraphicsSceneEvent(QEvent::Type typeVal): QGraphicsSceneEvent(typeVal) {};

	virtual ~MiqtVirtualQGraphicsSceneEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QGraphicsSceneEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QGraphicsSceneEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__Clone == 0) {
			return QGraphicsSceneEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneEvent_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_Clone() const {

		return QGraphicsSceneEvent::clone();

	}

};

QGraphicsSceneEvent* QGraphicsSceneEvent_new(int typeVal) {
	return new MiqtVirtualQGraphicsSceneEvent(static_cast<QEvent::Type>(typeVal));
}

void QGraphicsSceneEvent_virtbase(QGraphicsSceneEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
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

bool QGraphicsSceneEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneEvent*>( (QGraphicsSceneEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAccepted = slot;
	return true;
}

void QGraphicsSceneEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

bool QGraphicsSceneEvent_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneEvent*>( (QGraphicsSceneEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QEvent* QGraphicsSceneEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneEvent*)(self) )->virtualbase_Clone();
}

void QGraphicsSceneEvent_Delete(QGraphicsSceneEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneMouseEvent final : public QGraphicsSceneMouseEvent {
public:

	MiqtVirtualQGraphicsSceneMouseEvent(): QGraphicsSceneMouseEvent() {};
	MiqtVirtualQGraphicsSceneMouseEvent(QEvent::Type typeVal): QGraphicsSceneMouseEvent(typeVal) {};

	virtual ~MiqtVirtualQGraphicsSceneMouseEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QGraphicsSceneMouseEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneMouseEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QGraphicsSceneMouseEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__Clone == 0) {
			return QGraphicsSceneMouseEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneMouseEvent_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_Clone() const {

		return QGraphicsSceneMouseEvent::clone();

	}

};

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new() {
	return new MiqtVirtualQGraphicsSceneMouseEvent();
}

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new2(int typeVal) {
	return new MiqtVirtualQGraphicsSceneMouseEvent(static_cast<QEvent::Type>(typeVal));
}

void QGraphicsSceneMouseEvent_virtbase(QGraphicsSceneMouseEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
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

bool QGraphicsSceneMouseEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneMouseEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneMouseEvent*>( (QGraphicsSceneMouseEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAccepted = slot;
	return true;
}

void QGraphicsSceneMouseEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneMouseEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

bool QGraphicsSceneMouseEvent_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneMouseEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneMouseEvent*>( (QGraphicsSceneMouseEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QEvent* QGraphicsSceneMouseEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneMouseEvent*)(self) )->virtualbase_Clone();
}

void QGraphicsSceneMouseEvent_Delete(QGraphicsSceneMouseEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneWheelEvent final : public QGraphicsSceneWheelEvent {
public:

	MiqtVirtualQGraphicsSceneWheelEvent(): QGraphicsSceneWheelEvent() {};
	MiqtVirtualQGraphicsSceneWheelEvent(QEvent::Type typeVal): QGraphicsSceneWheelEvent(typeVal) {};

	virtual ~MiqtVirtualQGraphicsSceneWheelEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QGraphicsSceneWheelEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneWheelEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QGraphicsSceneWheelEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__Clone == 0) {
			return QGraphicsSceneWheelEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneWheelEvent_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_Clone() const {

		return QGraphicsSceneWheelEvent::clone();

	}

};

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new() {
	return new MiqtVirtualQGraphicsSceneWheelEvent();
}

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new2(int typeVal) {
	return new MiqtVirtualQGraphicsSceneWheelEvent(static_cast<QEvent::Type>(typeVal));
}

void QGraphicsSceneWheelEvent_virtbase(QGraphicsSceneWheelEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
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

bool QGraphicsSceneWheelEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneWheelEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneWheelEvent*>( (QGraphicsSceneWheelEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAccepted = slot;
	return true;
}

void QGraphicsSceneWheelEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneWheelEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

bool QGraphicsSceneWheelEvent_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneWheelEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneWheelEvent*>( (QGraphicsSceneWheelEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QEvent* QGraphicsSceneWheelEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneWheelEvent*)(self) )->virtualbase_Clone();
}

void QGraphicsSceneWheelEvent_Delete(QGraphicsSceneWheelEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneContextMenuEvent final : public QGraphicsSceneContextMenuEvent {
public:

	MiqtVirtualQGraphicsSceneContextMenuEvent(): QGraphicsSceneContextMenuEvent() {};
	MiqtVirtualQGraphicsSceneContextMenuEvent(QEvent::Type typeVal): QGraphicsSceneContextMenuEvent(typeVal) {};

	virtual ~MiqtVirtualQGraphicsSceneContextMenuEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QGraphicsSceneContextMenuEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneContextMenuEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QGraphicsSceneContextMenuEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__Clone == 0) {
			return QGraphicsSceneContextMenuEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneContextMenuEvent_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_Clone() const {

		return QGraphicsSceneContextMenuEvent::clone();

	}

};

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new() {
	return new MiqtVirtualQGraphicsSceneContextMenuEvent();
}

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new2(int typeVal) {
	return new MiqtVirtualQGraphicsSceneContextMenuEvent(static_cast<QEvent::Type>(typeVal));
}

void QGraphicsSceneContextMenuEvent_virtbase(QGraphicsSceneContextMenuEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
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

bool QGraphicsSceneContextMenuEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneContextMenuEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneContextMenuEvent*>( (QGraphicsSceneContextMenuEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAccepted = slot;
	return true;
}

void QGraphicsSceneContextMenuEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneContextMenuEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

bool QGraphicsSceneContextMenuEvent_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneContextMenuEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneContextMenuEvent*>( (QGraphicsSceneContextMenuEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QEvent* QGraphicsSceneContextMenuEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneContextMenuEvent*)(self) )->virtualbase_Clone();
}

void QGraphicsSceneContextMenuEvent_Delete(QGraphicsSceneContextMenuEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneHoverEvent final : public QGraphicsSceneHoverEvent {
public:

	MiqtVirtualQGraphicsSceneHoverEvent(): QGraphicsSceneHoverEvent() {};
	MiqtVirtualQGraphicsSceneHoverEvent(QEvent::Type typeVal): QGraphicsSceneHoverEvent(typeVal) {};

	virtual ~MiqtVirtualQGraphicsSceneHoverEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QGraphicsSceneHoverEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneHoverEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QGraphicsSceneHoverEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__Clone == 0) {
			return QGraphicsSceneHoverEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneHoverEvent_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_Clone() const {

		return QGraphicsSceneHoverEvent::clone();

	}

};

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new() {
	return new MiqtVirtualQGraphicsSceneHoverEvent();
}

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new2(int typeVal) {
	return new MiqtVirtualQGraphicsSceneHoverEvent(static_cast<QEvent::Type>(typeVal));
}

void QGraphicsSceneHoverEvent_virtbase(QGraphicsSceneHoverEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
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

bool QGraphicsSceneHoverEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneHoverEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneHoverEvent*>( (QGraphicsSceneHoverEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAccepted = slot;
	return true;
}

void QGraphicsSceneHoverEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneHoverEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

bool QGraphicsSceneHoverEvent_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneHoverEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneHoverEvent*>( (QGraphicsSceneHoverEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QEvent* QGraphicsSceneHoverEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneHoverEvent*)(self) )->virtualbase_Clone();
}

void QGraphicsSceneHoverEvent_Delete(QGraphicsSceneHoverEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneHelpEvent final : public QGraphicsSceneHelpEvent {
public:

	MiqtVirtualQGraphicsSceneHelpEvent(): QGraphicsSceneHelpEvent() {};
	MiqtVirtualQGraphicsSceneHelpEvent(QEvent::Type typeVal): QGraphicsSceneHelpEvent(typeVal) {};

	virtual ~MiqtVirtualQGraphicsSceneHelpEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QGraphicsSceneHelpEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneHelpEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QGraphicsSceneHelpEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__Clone == 0) {
			return QGraphicsSceneHelpEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneHelpEvent_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_Clone() const {

		return QGraphicsSceneHelpEvent::clone();

	}

};

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new() {
	return new MiqtVirtualQGraphicsSceneHelpEvent();
}

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new2(int typeVal) {
	return new MiqtVirtualQGraphicsSceneHelpEvent(static_cast<QEvent::Type>(typeVal));
}

void QGraphicsSceneHelpEvent_virtbase(QGraphicsSceneHelpEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
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

bool QGraphicsSceneHelpEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneHelpEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneHelpEvent*>( (QGraphicsSceneHelpEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAccepted = slot;
	return true;
}

void QGraphicsSceneHelpEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneHelpEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

bool QGraphicsSceneHelpEvent_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneHelpEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneHelpEvent*>( (QGraphicsSceneHelpEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QEvent* QGraphicsSceneHelpEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneHelpEvent*)(self) )->virtualbase_Clone();
}

void QGraphicsSceneHelpEvent_Delete(QGraphicsSceneHelpEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneDragDropEvent final : public QGraphicsSceneDragDropEvent {
public:

	MiqtVirtualQGraphicsSceneDragDropEvent(): QGraphicsSceneDragDropEvent() {};
	MiqtVirtualQGraphicsSceneDragDropEvent(QEvent::Type typeVal): QGraphicsSceneDragDropEvent(typeVal) {};

	virtual ~MiqtVirtualQGraphicsSceneDragDropEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QGraphicsSceneDragDropEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneDragDropEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QGraphicsSceneDragDropEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__Clone == 0) {
			return QGraphicsSceneDragDropEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneDragDropEvent_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_Clone() const {

		return QGraphicsSceneDragDropEvent::clone();

	}

};

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new() {
	return new MiqtVirtualQGraphicsSceneDragDropEvent();
}

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new2(int typeVal) {
	return new MiqtVirtualQGraphicsSceneDragDropEvent(static_cast<QEvent::Type>(typeVal));
}

void QGraphicsSceneDragDropEvent_virtbase(QGraphicsSceneDragDropEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
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

bool QGraphicsSceneDragDropEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneDragDropEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneDragDropEvent*>( (QGraphicsSceneDragDropEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAccepted = slot;
	return true;
}

void QGraphicsSceneDragDropEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneDragDropEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

bool QGraphicsSceneDragDropEvent_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneDragDropEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneDragDropEvent*>( (QGraphicsSceneDragDropEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QEvent* QGraphicsSceneDragDropEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneDragDropEvent*)(self) )->virtualbase_Clone();
}

void QGraphicsSceneDragDropEvent_Delete(QGraphicsSceneDragDropEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneResizeEvent final : public QGraphicsSceneResizeEvent {
public:

	MiqtVirtualQGraphicsSceneResizeEvent(): QGraphicsSceneResizeEvent() {};

	virtual ~MiqtVirtualQGraphicsSceneResizeEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QGraphicsSceneResizeEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneResizeEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QGraphicsSceneResizeEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__Clone == 0) {
			return QGraphicsSceneResizeEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneResizeEvent_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_Clone() const {

		return QGraphicsSceneResizeEvent::clone();

	}

};

QGraphicsSceneResizeEvent* QGraphicsSceneResizeEvent_new() {
	return new MiqtVirtualQGraphicsSceneResizeEvent();
}

void QGraphicsSceneResizeEvent_virtbase(QGraphicsSceneResizeEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
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

bool QGraphicsSceneResizeEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneResizeEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneResizeEvent*>( (QGraphicsSceneResizeEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAccepted = slot;
	return true;
}

void QGraphicsSceneResizeEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneResizeEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

bool QGraphicsSceneResizeEvent_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneResizeEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneResizeEvent*>( (QGraphicsSceneResizeEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QEvent* QGraphicsSceneResizeEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneResizeEvent*)(self) )->virtualbase_Clone();
}

void QGraphicsSceneResizeEvent_Delete(QGraphicsSceneResizeEvent* self) {
	delete self;
}

class MiqtVirtualQGraphicsSceneMoveEvent final : public QGraphicsSceneMoveEvent {
public:

	MiqtVirtualQGraphicsSceneMoveEvent(): QGraphicsSceneMoveEvent() {};

	virtual ~MiqtVirtualQGraphicsSceneMoveEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QGraphicsSceneMoveEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QGraphicsSceneMoveEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QGraphicsSceneMoveEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__Clone == 0) {
			return QGraphicsSceneMoveEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QGraphicsSceneMoveEvent_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_Clone() const {

		return QGraphicsSceneMoveEvent::clone();

	}

};

QGraphicsSceneMoveEvent* QGraphicsSceneMoveEvent_new() {
	return new MiqtVirtualQGraphicsSceneMoveEvent();
}

void QGraphicsSceneMoveEvent_virtbase(QGraphicsSceneMoveEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent) {
	*outptr_QGraphicsSceneEvent = static_cast<QGraphicsSceneEvent*>(src);
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

bool QGraphicsSceneMoveEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneMoveEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneMoveEvent*>( (QGraphicsSceneMoveEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAccepted = slot;
	return true;
}

void QGraphicsSceneMoveEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQGraphicsSceneMoveEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

bool QGraphicsSceneMoveEvent_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSceneMoveEvent* self_cast = dynamic_cast<MiqtVirtualQGraphicsSceneMoveEvent*>( (QGraphicsSceneMoveEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QEvent* QGraphicsSceneMoveEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQGraphicsSceneMoveEvent*)(self) )->virtualbase_Clone();
}

void QGraphicsSceneMoveEvent_Delete(QGraphicsSceneMoveEvent* self) {
	delete self;
}

