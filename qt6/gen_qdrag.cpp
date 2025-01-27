#include <QChildEvent>
#include <QDrag>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QObject>
#include <QPixmap>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qdrag.h>
#include "gen_qdrag.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDrag_ActionChanged(intptr_t, int);
void miqt_exec_callback_QDrag_TargetChanged(intptr_t, QObject*);
bool miqt_exec_callback_QDrag_Event(QDrag*, intptr_t, QEvent*);
bool miqt_exec_callback_QDrag_EventFilter(QDrag*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDrag_TimerEvent(QDrag*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDrag_ChildEvent(QDrag*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDrag_CustomEvent(QDrag*, intptr_t, QEvent*);
void miqt_exec_callback_QDrag_ConnectNotify(QDrag*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDrag_DisconnectNotify(QDrag*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDrag final : public QDrag {
public:

	MiqtVirtualQDrag(QObject* dragSource): QDrag(dragSource) {};

	virtual ~MiqtVirtualQDrag() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QDrag::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDrag_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QDrag::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QDrag::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDrag_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QDrag::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QDrag::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDrag_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QDrag::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QDrag::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDrag_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QDrag::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QDrag::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDrag_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QDrag::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QDrag::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDrag_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QDrag::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QDrag::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDrag_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QDrag::disconnectNotify(*signal);

	}

};

QDrag* QDrag_new(QObject* dragSource) {
	return new MiqtVirtualQDrag(dragSource);
}

void QDrag_virtbase(QDrag* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDrag_MetaObject(const QDrag* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDrag_Metacast(QDrag* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDrag_Tr(const char* s) {
	QString _ret = QDrag::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDrag_SetMimeData(QDrag* self, QMimeData* data) {
	self->setMimeData(data);
}

QMimeData* QDrag_MimeData(const QDrag* self) {
	return self->mimeData();
}

void QDrag_SetPixmap(QDrag* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

QPixmap* QDrag_Pixmap(const QDrag* self) {
	return new QPixmap(self->pixmap());
}

void QDrag_SetHotSpot(QDrag* self, QPoint* hotspot) {
	self->setHotSpot(*hotspot);
}

QPoint* QDrag_HotSpot(const QDrag* self) {
	return new QPoint(self->hotSpot());
}

QObject* QDrag_Source(const QDrag* self) {
	return self->source();
}

QObject* QDrag_Target(const QDrag* self) {
	return self->target();
}

int QDrag_Exec(QDrag* self) {
	Qt::DropAction _ret = self->exec();
	return static_cast<int>(_ret);
}

int QDrag_Exec2(QDrag* self, int supportedActions, int defaultAction) {
	Qt::DropAction _ret = self->exec(static_cast<Qt::DropActions>(supportedActions), static_cast<Qt::DropAction>(defaultAction));
	return static_cast<int>(_ret);
}

void QDrag_SetDragCursor(QDrag* self, QPixmap* cursor, int action) {
	self->setDragCursor(*cursor, static_cast<Qt::DropAction>(action));
}

QPixmap* QDrag_DragCursor(const QDrag* self, int action) {
	return new QPixmap(self->dragCursor(static_cast<Qt::DropAction>(action)));
}

int QDrag_SupportedActions(const QDrag* self) {
	Qt::DropActions _ret = self->supportedActions();
	return static_cast<int>(_ret);
}

int QDrag_DefaultAction(const QDrag* self) {
	Qt::DropAction _ret = self->defaultAction();
	return static_cast<int>(_ret);
}

void QDrag_Cancel() {
	QDrag::cancel();
}

void QDrag_ActionChanged(QDrag* self, int action) {
	self->actionChanged(static_cast<Qt::DropAction>(action));
}

void QDrag_connect_ActionChanged(QDrag* self, intptr_t slot) {
	MiqtVirtualQDrag::connect(self, static_cast<void (QDrag::*)(Qt::DropAction)>(&QDrag::actionChanged), self, [=](Qt::DropAction action) {
		Qt::DropAction action_ret = action;
		int sigval1 = static_cast<int>(action_ret);
		miqt_exec_callback_QDrag_ActionChanged(slot, sigval1);
	});
}

void QDrag_TargetChanged(QDrag* self, QObject* newTarget) {
	self->targetChanged(newTarget);
}

void QDrag_connect_TargetChanged(QDrag* self, intptr_t slot) {
	MiqtVirtualQDrag::connect(self, static_cast<void (QDrag::*)(QObject*)>(&QDrag::targetChanged), self, [=](QObject* newTarget) {
		QObject* sigval1 = newTarget;
		miqt_exec_callback_QDrag_TargetChanged(slot, sigval1);
	});
}

struct miqt_string QDrag_Tr2(const char* s, const char* c) {
	QString _ret = QDrag::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDrag_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDrag::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDrag_Exec1(QDrag* self, int supportedActions) {
	Qt::DropAction _ret = self->exec(static_cast<Qt::DropActions>(supportedActions));
	return static_cast<int>(_ret);
}

bool QDrag_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QDrag_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDrag*)(self) )->virtualbase_Event(event);
}

bool QDrag_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QDrag_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDrag*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QDrag_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QDrag_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDrag*)(self) )->virtualbase_TimerEvent(event);
}

bool QDrag_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QDrag_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDrag*)(self) )->virtualbase_ChildEvent(event);
}

bool QDrag_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QDrag_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDrag*)(self) )->virtualbase_CustomEvent(event);
}

bool QDrag_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QDrag_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDrag*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QDrag_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QDrag_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDrag*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QDrag_Delete(QDrag* self) {
	delete self;
}

