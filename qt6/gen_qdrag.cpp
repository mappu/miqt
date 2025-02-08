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

void miqt_exec_callback_QDrag_actionChanged(intptr_t, int);
void miqt_exec_callback_QDrag_targetChanged(intptr_t, QObject*);
bool miqt_exec_callback_QDrag_event(QDrag*, intptr_t, QEvent*);
bool miqt_exec_callback_QDrag_eventFilter(QDrag*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDrag_timerEvent(QDrag*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDrag_childEvent(QDrag*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDrag_customEvent(QDrag*, intptr_t, QEvent*);
void miqt_exec_callback_QDrag_connectNotify(QDrag*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDrag_disconnectNotify(QDrag*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDrag final : public QDrag {
public:

	MiqtVirtualQDrag(QObject* dragSource): QDrag(dragSource) {};

	virtual ~MiqtVirtualQDrag() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDrag::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDrag_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QDrag::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDrag::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDrag_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QDrag::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDrag::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDrag_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QDrag::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDrag::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDrag_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QDrag::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDrag::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDrag_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QDrag::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDrag::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDrag_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QDrag::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDrag::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDrag_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QDrag::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QDrag_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDrag_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDrag_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDrag_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDrag* QDrag_new(QObject* dragSource) {
	return new MiqtVirtualQDrag(dragSource);
}

void QDrag_virtbase(QDrag* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDrag_metaObject(const QDrag* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDrag_metacast(QDrag* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDrag_tr(const char* s) {
	QString _ret = QDrag::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDrag_setMimeData(QDrag* self, QMimeData* data) {
	self->setMimeData(data);
}

QMimeData* QDrag_mimeData(const QDrag* self) {
	return self->mimeData();
}

void QDrag_setPixmap(QDrag* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

QPixmap* QDrag_pixmap(const QDrag* self) {
	return new QPixmap(self->pixmap());
}

void QDrag_setHotSpot(QDrag* self, QPoint* hotspot) {
	self->setHotSpot(*hotspot);
}

QPoint* QDrag_hotSpot(const QDrag* self) {
	return new QPoint(self->hotSpot());
}

QObject* QDrag_source(const QDrag* self) {
	return self->source();
}

QObject* QDrag_target(const QDrag* self) {
	return self->target();
}

int QDrag_exec(QDrag* self) {
	Qt::DropAction _ret = self->exec();
	return static_cast<int>(_ret);
}

int QDrag_exec2(QDrag* self, int supportedActions, int defaultAction) {
	Qt::DropAction _ret = self->exec(static_cast<Qt::DropActions>(supportedActions), static_cast<Qt::DropAction>(defaultAction));
	return static_cast<int>(_ret);
}

void QDrag_setDragCursor(QDrag* self, QPixmap* cursor, int action) {
	self->setDragCursor(*cursor, static_cast<Qt::DropAction>(action));
}

QPixmap* QDrag_dragCursor(const QDrag* self, int action) {
	return new QPixmap(self->dragCursor(static_cast<Qt::DropAction>(action)));
}

int QDrag_supportedActions(const QDrag* self) {
	Qt::DropActions _ret = self->supportedActions();
	return static_cast<int>(_ret);
}

int QDrag_defaultAction(const QDrag* self) {
	Qt::DropAction _ret = self->defaultAction();
	return static_cast<int>(_ret);
}

void QDrag_cancel() {
	QDrag::cancel();
}

void QDrag_actionChanged(QDrag* self, int action) {
	self->actionChanged(static_cast<Qt::DropAction>(action));
}

void QDrag_connect_actionChanged(QDrag* self, intptr_t slot) {
	MiqtVirtualQDrag::connect(self, static_cast<void (QDrag::*)(Qt::DropAction)>(&QDrag::actionChanged), self, [=](Qt::DropAction action) {
		Qt::DropAction action_ret = action;
		int sigval1 = static_cast<int>(action_ret);
		miqt_exec_callback_QDrag_actionChanged(slot, sigval1);
	});
}

void QDrag_targetChanged(QDrag* self, QObject* newTarget) {
	self->targetChanged(newTarget);
}

void QDrag_connect_targetChanged(QDrag* self, intptr_t slot) {
	MiqtVirtualQDrag::connect(self, static_cast<void (QDrag::*)(QObject*)>(&QDrag::targetChanged), self, [=](QObject* newTarget) {
		QObject* sigval1 = newTarget;
		miqt_exec_callback_QDrag_targetChanged(slot, sigval1);
	});
}

struct miqt_string QDrag_tr2(const char* s, const char* c) {
	QString _ret = QDrag::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDrag_tr3(const char* s, const char* c, int n) {
	QString _ret = QDrag::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDrag_exec1(QDrag* self, int supportedActions) {
	Qt::DropAction _ret = self->exec(static_cast<Qt::DropActions>(supportedActions));
	return static_cast<int>(_ret);
}

bool QDrag_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QDrag_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDrag*)(self) )->virtualbase_event(event);
}

bool QDrag_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDrag_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDrag*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QDrag_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QDrag_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDrag*)(self) )->virtualbase_timerEvent(event);
}

bool QDrag_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QDrag_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDrag*)(self) )->virtualbase_childEvent(event);
}

bool QDrag_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QDrag_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDrag*)(self) )->virtualbase_customEvent(event);
}

bool QDrag_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QDrag_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDrag*)(self) )->virtualbase_connectNotify(signal);
}

bool QDrag_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDrag_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDrag*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QDrag_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QDrag_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QDrag_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QDrag_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDrag* self_cast = dynamic_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QDrag_delete(QDrag* self) {
	delete self;
}

