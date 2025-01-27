#include <QByteArray>
#include <QChildEvent>
#include <QDynamicPropertyChangeEvent>
#include <QEvent>
#include <QObject>
#include <QTimerEvent>
#include <qcoreevent.h>
#include "gen_qcoreevent.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QEvent_SetAccepted(QEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QEvent_Clone(const QEvent*, intptr_t);
QTimerEvent* miqt_exec_callback_QTimerEvent_Clone(const QTimerEvent*, intptr_t);
void miqt_exec_callback_QTimerEvent_SetAccepted(QTimerEvent*, intptr_t, bool);
QChildEvent* miqt_exec_callback_QChildEvent_Clone(const QChildEvent*, intptr_t);
void miqt_exec_callback_QChildEvent_SetAccepted(QChildEvent*, intptr_t, bool);
QDynamicPropertyChangeEvent* miqt_exec_callback_QDynamicPropertyChangeEvent_Clone(const QDynamicPropertyChangeEvent*, intptr_t);
void miqt_exec_callback_QDynamicPropertyChangeEvent_SetAccepted(QDynamicPropertyChangeEvent*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQEvent final : public QEvent {
public:

	MiqtVirtualQEvent(QEvent::Type typeVal): QEvent(typeVal) {};

	virtual ~MiqtVirtualQEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QEvent::setAccepted(accepted);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__Clone == 0) {
			return QEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QEvent_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEvent* virtualbase_Clone() const {

		return QEvent::clone();

	}

};

QEvent* QEvent_new(int typeVal) {
	return new MiqtVirtualQEvent(static_cast<QEvent::Type>(typeVal));
}

int QEvent_Type(const QEvent* self) {
	QEvent::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QEvent_Spontaneous(const QEvent* self) {
	return self->spontaneous();
}

void QEvent_SetAccepted(QEvent* self, bool accepted) {
	self->setAccepted(accepted);
}

bool QEvent_IsAccepted(const QEvent* self) {
	return self->isAccepted();
}

void QEvent_Accept(QEvent* self) {
	self->accept();
}

void QEvent_Ignore(QEvent* self) {
	self->ignore();
}

bool QEvent_IsInputEvent(const QEvent* self) {
	return self->isInputEvent();
}

bool QEvent_IsPointerEvent(const QEvent* self) {
	return self->isPointerEvent();
}

bool QEvent_IsSinglePointEvent(const QEvent* self) {
	return self->isSinglePointEvent();
}

int QEvent_RegisterEventType() {
	return QEvent::registerEventType();
}

QEvent* QEvent_Clone(const QEvent* self) {
	return self->clone();
}

int QEvent_RegisterEventType1(int hint) {
	return QEvent::registerEventType(static_cast<int>(hint));
}

bool QEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	MiqtVirtualQEvent* self_cast = dynamic_cast<MiqtVirtualQEvent*>( (QEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAccepted = slot;
	return true;
}

void QEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

bool QEvent_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQEvent* self_cast = dynamic_cast<MiqtVirtualQEvent*>( (QEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QEvent* QEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQEvent*)(self) )->virtualbase_Clone();
}

void QEvent_Delete(QEvent* self) {
	delete self;
}

class MiqtVirtualQTimerEvent final : public QTimerEvent {
public:

	MiqtVirtualQTimerEvent(int timerId): QTimerEvent(timerId) {};

	virtual ~MiqtVirtualQTimerEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QTimerEvent* clone() const override {
		if (handle__Clone == 0) {
			return QTimerEvent::clone();
		}
		

		QTimerEvent* callback_return_value = miqt_exec_callback_QTimerEvent_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTimerEvent* virtualbase_Clone() const {

		return QTimerEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QTimerEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QTimerEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QTimerEvent::setAccepted(accepted);

	}

};

QTimerEvent* QTimerEvent_new(int timerId) {
	return new MiqtVirtualQTimerEvent(static_cast<int>(timerId));
}

void QTimerEvent_virtbase(QTimerEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QTimerEvent* QTimerEvent_Clone(const QTimerEvent* self) {
	return self->clone();
}

int QTimerEvent_TimerId(const QTimerEvent* self) {
	return self->timerId();
}

bool QTimerEvent_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQTimerEvent* self_cast = dynamic_cast<MiqtVirtualQTimerEvent*>( (QTimerEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QTimerEvent* QTimerEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQTimerEvent*)(self) )->virtualbase_Clone();
}

bool QTimerEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	MiqtVirtualQTimerEvent* self_cast = dynamic_cast<MiqtVirtualQTimerEvent*>( (QTimerEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAccepted = slot;
	return true;
}

void QTimerEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQTimerEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QTimerEvent_Delete(QTimerEvent* self) {
	delete self;
}

class MiqtVirtualQChildEvent final : public QChildEvent {
public:

	MiqtVirtualQChildEvent(QEvent::Type typeVal, QObject* child): QChildEvent(typeVal, child) {};

	virtual ~MiqtVirtualQChildEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QChildEvent* clone() const override {
		if (handle__Clone == 0) {
			return QChildEvent::clone();
		}
		

		QChildEvent* callback_return_value = miqt_exec_callback_QChildEvent_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QChildEvent* virtualbase_Clone() const {

		return QChildEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QChildEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QChildEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QChildEvent::setAccepted(accepted);

	}

};

QChildEvent* QChildEvent_new(int typeVal, QObject* child) {
	return new MiqtVirtualQChildEvent(static_cast<QEvent::Type>(typeVal), child);
}

void QChildEvent_virtbase(QChildEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QChildEvent* QChildEvent_Clone(const QChildEvent* self) {
	return self->clone();
}

QObject* QChildEvent_Child(const QChildEvent* self) {
	return self->child();
}

bool QChildEvent_Added(const QChildEvent* self) {
	return self->added();
}

bool QChildEvent_Polished(const QChildEvent* self) {
	return self->polished();
}

bool QChildEvent_Removed(const QChildEvent* self) {
	return self->removed();
}

bool QChildEvent_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQChildEvent* self_cast = dynamic_cast<MiqtVirtualQChildEvent*>( (QChildEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QChildEvent* QChildEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQChildEvent*)(self) )->virtualbase_Clone();
}

bool QChildEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	MiqtVirtualQChildEvent* self_cast = dynamic_cast<MiqtVirtualQChildEvent*>( (QChildEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAccepted = slot;
	return true;
}

void QChildEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQChildEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QChildEvent_Delete(QChildEvent* self) {
	delete self;
}

class MiqtVirtualQDynamicPropertyChangeEvent final : public QDynamicPropertyChangeEvent {
public:

	MiqtVirtualQDynamicPropertyChangeEvent(const QByteArray& name): QDynamicPropertyChangeEvent(name) {};

	virtual ~MiqtVirtualQDynamicPropertyChangeEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QDynamicPropertyChangeEvent* clone() const override {
		if (handle__Clone == 0) {
			return QDynamicPropertyChangeEvent::clone();
		}
		

		QDynamicPropertyChangeEvent* callback_return_value = miqt_exec_callback_QDynamicPropertyChangeEvent_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QDynamicPropertyChangeEvent* virtualbase_Clone() const {

		return QDynamicPropertyChangeEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QDynamicPropertyChangeEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QDynamicPropertyChangeEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QDynamicPropertyChangeEvent::setAccepted(accepted);

	}

};

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(struct miqt_string name) {
	QByteArray name_QByteArray(name.data, name.len);
	return new MiqtVirtualQDynamicPropertyChangeEvent(name_QByteArray);
}

void QDynamicPropertyChangeEvent_virtbase(QDynamicPropertyChangeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_Clone(const QDynamicPropertyChangeEvent* self) {
	return self->clone();
}

struct miqt_string QDynamicPropertyChangeEvent_PropertyName(const QDynamicPropertyChangeEvent* self) {
	QByteArray _qb = self->propertyName();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QDynamicPropertyChangeEvent_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQDynamicPropertyChangeEvent* self_cast = dynamic_cast<MiqtVirtualQDynamicPropertyChangeEvent*>( (QDynamicPropertyChangeEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQDynamicPropertyChangeEvent*)(self) )->virtualbase_Clone();
}

bool QDynamicPropertyChangeEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	MiqtVirtualQDynamicPropertyChangeEvent* self_cast = dynamic_cast<MiqtVirtualQDynamicPropertyChangeEvent*>( (QDynamicPropertyChangeEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAccepted = slot;
	return true;
}

void QDynamicPropertyChangeEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQDynamicPropertyChangeEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QDynamicPropertyChangeEvent_Delete(QDynamicPropertyChangeEvent* self) {
	delete self;
}

