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

void miqt_exec_callback_QAbstractVideoFilter_ActiveChanged(intptr_t);
QVideoFilterRunnable* miqt_exec_callback_QAbstractVideoFilter_CreateFilterRunnable(QAbstractVideoFilter*, intptr_t);
bool miqt_exec_callback_QAbstractVideoFilter_Event(QAbstractVideoFilter*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractVideoFilter_EventFilter(QAbstractVideoFilter*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractVideoFilter_TimerEvent(QAbstractVideoFilter*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractVideoFilter_ChildEvent(QAbstractVideoFilter*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractVideoFilter_CustomEvent(QAbstractVideoFilter*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractVideoFilter_ConnectNotify(QAbstractVideoFilter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractVideoFilter_DisconnectNotify(QAbstractVideoFilter*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QVideoFrame* QVideoFilterRunnable_Run(QVideoFilterRunnable* self, QVideoFrame* input, QVideoSurfaceFormat* surfaceFormat, int flags) {
	return new QVideoFrame(self->run(input, *surfaceFormat, static_cast<QVideoFilterRunnable::RunFlags>(flags)));
}

void QVideoFilterRunnable_OperatorAssign(QVideoFilterRunnable* self, QVideoFilterRunnable* param1) {
	self->operator=(*param1);
}

void QVideoFilterRunnable_Delete(QVideoFilterRunnable* self) {
	delete self;
}

class MiqtVirtualQAbstractVideoFilter final : public QAbstractVideoFilter {
public:

	MiqtVirtualQAbstractVideoFilter(): QAbstractVideoFilter() {};
	MiqtVirtualQAbstractVideoFilter(QObject* parent): QAbstractVideoFilter(parent) {};

	virtual ~MiqtVirtualQAbstractVideoFilter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateFilterRunnable = 0;

	// Subclass to allow providing a Go implementation
	virtual QVideoFilterRunnable* createFilterRunnable() override {
		if (handle__CreateFilterRunnable == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		QVideoFilterRunnable* callback_return_value = miqt_exec_callback_QAbstractVideoFilter_CreateFilterRunnable(this, handle__CreateFilterRunnable);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAbstractVideoFilter::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractVideoFilter_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAbstractVideoFilter::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAbstractVideoFilter::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractVideoFilter_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAbstractVideoFilter::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAbstractVideoFilter::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractVideoFilter_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAbstractVideoFilter::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAbstractVideoFilter::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractVideoFilter_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAbstractVideoFilter::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAbstractVideoFilter::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractVideoFilter_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAbstractVideoFilter::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAbstractVideoFilter::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractVideoFilter_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAbstractVideoFilter::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAbstractVideoFilter::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractVideoFilter_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAbstractVideoFilter::disconnectNotify(*signal);

	}

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

QMetaObject* QAbstractVideoFilter_MetaObject(const QAbstractVideoFilter* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractVideoFilter_Metacast(QAbstractVideoFilter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractVideoFilter_Tr(const char* s) {
	QString _ret = QAbstractVideoFilter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoFilter_TrUtf8(const char* s) {
	QString _ret = QAbstractVideoFilter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractVideoFilter_IsActive(const QAbstractVideoFilter* self) {
	return self->isActive();
}

void QAbstractVideoFilter_SetActive(QAbstractVideoFilter* self, bool v) {
	self->setActive(v);
}

QVideoFilterRunnable* QAbstractVideoFilter_CreateFilterRunnable(QAbstractVideoFilter* self) {
	return self->createFilterRunnable();
}

void QAbstractVideoFilter_ActiveChanged(QAbstractVideoFilter* self) {
	self->activeChanged();
}

void QAbstractVideoFilter_connect_ActiveChanged(QAbstractVideoFilter* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter::connect(self, static_cast<void (QAbstractVideoFilter::*)()>(&QAbstractVideoFilter::activeChanged), self, [=]() {
		miqt_exec_callback_QAbstractVideoFilter_ActiveChanged(slot);
	});
}

struct miqt_string QAbstractVideoFilter_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractVideoFilter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoFilter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractVideoFilter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoFilter_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractVideoFilter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoFilter_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractVideoFilter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractVideoFilter_override_virtual_CreateFilterRunnable(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CreateFilterRunnable = slot;
	return true;
}

bool QAbstractVideoFilter_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAbstractVideoFilter_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractVideoFilter*)(self) )->virtualbase_Event(event);
}

bool QAbstractVideoFilter_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAbstractVideoFilter_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractVideoFilter*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAbstractVideoFilter_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAbstractVideoFilter_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractVideoFilter*)(self) )->virtualbase_TimerEvent(event);
}

bool QAbstractVideoFilter_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAbstractVideoFilter_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractVideoFilter*)(self) )->virtualbase_ChildEvent(event);
}

bool QAbstractVideoFilter_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAbstractVideoFilter_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractVideoFilter*)(self) )->virtualbase_CustomEvent(event);
}

bool QAbstractVideoFilter_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAbstractVideoFilter_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractVideoFilter*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAbstractVideoFilter_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoFilter*>( (QAbstractVideoFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAbstractVideoFilter_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractVideoFilter*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAbstractVideoFilter_Delete(QAbstractVideoFilter* self) {
	delete self;
}

