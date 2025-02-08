#include <QAbstractVideoFilter>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVideoFilterRunnable>
#include <QVideoFrame>
#include <QVideoSurfaceFormat>
#include <qabstractvideofilter.h>
#include "gen_qabstractvideofilter.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractVideoFilter_activeChanged(intptr_t);
QVideoFilterRunnable* miqt_exec_callback_QAbstractVideoFilter_createFilterRunnable(QAbstractVideoFilter*, intptr_t);
bool miqt_exec_callback_QAbstractVideoFilter_event(QAbstractVideoFilter*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractVideoFilter_eventFilter(QAbstractVideoFilter*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractVideoFilter_timerEvent(QAbstractVideoFilter*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractVideoFilter_childEvent(QAbstractVideoFilter*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractVideoFilter_customEvent(QAbstractVideoFilter*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractVideoFilter_connectNotify(QAbstractVideoFilter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractVideoFilter_disconnectNotify(QAbstractVideoFilter*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QVideoFrame* QVideoFilterRunnable_run(QVideoFilterRunnable* self, QVideoFrame* input, QVideoSurfaceFormat* surfaceFormat, int flags) {
	return new QVideoFrame(self->run(input, *surfaceFormat, static_cast<QVideoFilterRunnable::RunFlags>(flags)));
}

void QVideoFilterRunnable_operatorAssign(QVideoFilterRunnable* self, QVideoFilterRunnable* param1) {
	self->operator=(*param1);
}

void QVideoFilterRunnable_delete(QVideoFilterRunnable* self) {
	delete self;
}

class MiqtVirtualQAbstractVideoFilter final : public QAbstractVideoFilter {
public:

	MiqtVirtualQAbstractVideoFilter(): QAbstractVideoFilter() {};
	MiqtVirtualQAbstractVideoFilter(QObject* parent): QAbstractVideoFilter(parent) {};

	virtual ~MiqtVirtualQAbstractVideoFilter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createFilterRunnable = 0;

	// Subclass to allow providing a Go implementation
	virtual QVideoFilterRunnable* createFilterRunnable() override {
		if (handle__createFilterRunnable == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		QVideoFilterRunnable* callback_return_value = miqt_exec_callback_QAbstractVideoFilter_createFilterRunnable(this, handle__createFilterRunnable);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAbstractVideoFilter::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractVideoFilter_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAbstractVideoFilter::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractVideoFilter::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractVideoFilter_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAbstractVideoFilter::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAbstractVideoFilter::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractVideoFilter_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAbstractVideoFilter::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractVideoFilter::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractVideoFilter_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractVideoFilter::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractVideoFilter::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractVideoFilter_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractVideoFilter::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractVideoFilter::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractVideoFilter_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractVideoFilter::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractVideoFilter::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractVideoFilter_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractVideoFilter::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAbstractVideoFilter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractVideoFilter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractVideoFilter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractVideoFilter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractVideoFilter* QAbstractVideoFilter_new() {
	return new MiqtVirtualQAbstractVideoFilter();
}

QAbstractVideoFilter* QAbstractVideoFilter_new2(QObject* parent) {
	return new MiqtVirtualQAbstractVideoFilter(parent);
}

void QAbstractVideoFilter_virtbase(QAbstractVideoFilter* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractVideoFilter_metaObject(const QAbstractVideoFilter* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractVideoFilter_metacast(QAbstractVideoFilter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractVideoFilter_tr(const char* s) {
	QString _ret = QAbstractVideoFilter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoFilter_trUtf8(const char* s) {
	QString _ret = QAbstractVideoFilter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractVideoFilter_isActive(const QAbstractVideoFilter* self) {
	return self->isActive();
}

void QAbstractVideoFilter_setActive(QAbstractVideoFilter* self, bool v) {
	self->setActive(v);
}

QVideoFilterRunnable* QAbstractVideoFilter_createFilterRunnable(QAbstractVideoFilter* self) {
	return self->createFilterRunnable();
}

void QAbstractVideoFilter_activeChanged(QAbstractVideoFilter* self) {
	self->activeChanged();
}

void QAbstractVideoFilter_connect_activeChanged(QAbstractVideoFilter* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter::connect(self, static_cast<void (QAbstractVideoFilter::*)()>(&QAbstractVideoFilter::activeChanged), self, [=]() {
		miqt_exec_callback_QAbstractVideoFilter_activeChanged(slot);
	});
}

struct miqt_string QAbstractVideoFilter_tr2(const char* s, const char* c) {
	QString _ret = QAbstractVideoFilter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoFilter_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractVideoFilter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoFilter_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractVideoFilter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoFilter_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractVideoFilter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractVideoFilter_override_virtual_createFilterRunnable(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createFilterRunnable = slot;
	return true;
}

bool QAbstractVideoFilter_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractVideoFilter_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractVideoFilter*)(self) )->virtualbase_event(event);
}

bool QAbstractVideoFilter_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractVideoFilter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractVideoFilter*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAbstractVideoFilter_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractVideoFilter_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractVideoFilter*)(self) )->virtualbase_timerEvent(event);
}

bool QAbstractVideoFilter_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractVideoFilter_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractVideoFilter*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractVideoFilter_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractVideoFilter_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractVideoFilter*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractVideoFilter_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractVideoFilter_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractVideoFilter*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractVideoFilter_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractVideoFilter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractVideoFilter*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAbstractVideoFilter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractVideoFilter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractVideoFilter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractVideoFilter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractVideoFilter_delete(QAbstractVideoFilter* self) {
	delete self;
}

