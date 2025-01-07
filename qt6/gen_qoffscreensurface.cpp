#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOffscreenSurface>
#include <QScreen>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurface>
#include <QSurfaceFormat>
#include <QTimerEvent>
#include <qoffscreensurface.h>
#include "gen_qoffscreensurface.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QOffscreenSurface_ScreenChanged(intptr_t, QScreen*);
int miqt_exec_callback_QOffscreenSurface_SurfaceType(void*, intptr_t);
QSurfaceFormat* miqt_exec_callback_QOffscreenSurface_Format(void*, intptr_t);
QSize* miqt_exec_callback_QOffscreenSurface_Size(void*, intptr_t);
bool miqt_exec_callback_QOffscreenSurface_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QOffscreenSurface_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QOffscreenSurface_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QOffscreenSurface_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QOffscreenSurface_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QOffscreenSurface_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QOffscreenSurface_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQOffscreenSurface : public virtual QOffscreenSurface {
public:

	MiqtVirtualQOffscreenSurface(): QOffscreenSurface() {};
	MiqtVirtualQOffscreenSurface(QScreen* screen): QOffscreenSurface(screen) {};
	MiqtVirtualQOffscreenSurface(QScreen* screen, QObject* parent): QOffscreenSurface(screen, parent) {};

	virtual ~MiqtVirtualQOffscreenSurface() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SurfaceType = 0;

	// Subclass to allow providing a Go implementation
	virtual QSurface::SurfaceType surfaceType() const override {
		if (handle__SurfaceType == 0) {
			return QOffscreenSurface::surfaceType();
		}
		

		int callback_return_value = miqt_exec_callback_QOffscreenSurface_SurfaceType(const_cast<MiqtVirtualQOffscreenSurface*>(this), handle__SurfaceType);

		return static_cast<QSurface::SurfaceType>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SurfaceType() const {

		QSurface::SurfaceType _ret = QOffscreenSurface::surfaceType();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Format = 0;

	// Subclass to allow providing a Go implementation
	virtual QSurfaceFormat format() const override {
		if (handle__Format == 0) {
			return QOffscreenSurface::format();
		}
		

		QSurfaceFormat* callback_return_value = miqt_exec_callback_QOffscreenSurface_Format(const_cast<MiqtVirtualQOffscreenSurface*>(this), handle__Format);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSurfaceFormat* virtualbase_Format() const {

		return new QSurfaceFormat(QOffscreenSurface::format());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize size() const override {
		if (handle__Size == 0) {
			return QOffscreenSurface::size();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QOffscreenSurface_Size(const_cast<MiqtVirtualQOffscreenSurface*>(this), handle__Size);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_Size() const {

		return new QSize(QOffscreenSurface::size());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QOffscreenSurface::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QOffscreenSurface_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QOffscreenSurface::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QOffscreenSurface::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QOffscreenSurface_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QOffscreenSurface::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QOffscreenSurface::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QOffscreenSurface_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QOffscreenSurface::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QOffscreenSurface::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QOffscreenSurface_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QOffscreenSurface::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QOffscreenSurface::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QOffscreenSurface_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QOffscreenSurface::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QOffscreenSurface::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QOffscreenSurface_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QOffscreenSurface::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QOffscreenSurface::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QOffscreenSurface_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QOffscreenSurface::disconnectNotify(*signal);

	}

};

QOffscreenSurface* QOffscreenSurface_new() {
	return new MiqtVirtualQOffscreenSurface();
}

QOffscreenSurface* QOffscreenSurface_new2(QScreen* screen) {
	return new MiqtVirtualQOffscreenSurface(screen);
}

QOffscreenSurface* QOffscreenSurface_new3(QScreen* screen, QObject* parent) {
	return new MiqtVirtualQOffscreenSurface(screen, parent);
}

void QOffscreenSurface_virtbase(QOffscreenSurface* src, QObject** outptr_QObject, QSurface** outptr_QSurface) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QSurface = static_cast<QSurface*>(src);
}

QMetaObject* QOffscreenSurface_MetaObject(const QOffscreenSurface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QOffscreenSurface_Metacast(QOffscreenSurface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QOffscreenSurface_Tr(const char* s) {
	QString _ret = QOffscreenSurface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QOffscreenSurface_SurfaceType(const QOffscreenSurface* self) {
	QSurface::SurfaceType _ret = self->surfaceType();
	return static_cast<int>(_ret);
}

void QOffscreenSurface_Create(QOffscreenSurface* self) {
	self->create();
}

void QOffscreenSurface_Destroy(QOffscreenSurface* self) {
	self->destroy();
}

bool QOffscreenSurface_IsValid(const QOffscreenSurface* self) {
	return self->isValid();
}

void QOffscreenSurface_SetFormat(QOffscreenSurface* self, QSurfaceFormat* format) {
	self->setFormat(*format);
}

QSurfaceFormat* QOffscreenSurface_Format(const QOffscreenSurface* self) {
	return new QSurfaceFormat(self->format());
}

QSurfaceFormat* QOffscreenSurface_RequestedFormat(const QOffscreenSurface* self) {
	return new QSurfaceFormat(self->requestedFormat());
}

QSize* QOffscreenSurface_Size(const QOffscreenSurface* self) {
	return new QSize(self->size());
}

QScreen* QOffscreenSurface_Screen(const QOffscreenSurface* self) {
	return self->screen();
}

void QOffscreenSurface_SetScreen(QOffscreenSurface* self, QScreen* screen) {
	self->setScreen(screen);
}

void QOffscreenSurface_ScreenChanged(QOffscreenSurface* self, QScreen* screen) {
	self->screenChanged(screen);
}

void QOffscreenSurface_connect_ScreenChanged(QOffscreenSurface* self, intptr_t slot) {
	MiqtVirtualQOffscreenSurface::connect(self, static_cast<void (QOffscreenSurface::*)(QScreen*)>(&QOffscreenSurface::screenChanged), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QOffscreenSurface_ScreenChanged(slot, sigval1);
	});
}

struct miqt_string QOffscreenSurface_Tr2(const char* s, const char* c) {
	QString _ret = QOffscreenSurface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QOffscreenSurface_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOffscreenSurface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QOffscreenSurface_override_virtual_SurfaceType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) )->handle__SurfaceType = slot;
}

int QOffscreenSurface_virtualbase_SurfaceType(const void* self) {
	return ( (const MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_SurfaceType();
}

void QOffscreenSurface_override_virtual_Format(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) )->handle__Format = slot;
}

QSurfaceFormat* QOffscreenSurface_virtualbase_Format(const void* self) {
	return ( (const MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_Format();
}

void QOffscreenSurface_override_virtual_Size(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) )->handle__Size = slot;
}

QSize* QOffscreenSurface_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_Size();
}

void QOffscreenSurface_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) )->handle__Event = slot;
}

bool QOffscreenSurface_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_Event(event);
}

void QOffscreenSurface_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) )->handle__EventFilter = slot;
}

bool QOffscreenSurface_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_EventFilter(watched, event);
}

void QOffscreenSurface_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) )->handle__TimerEvent = slot;
}

void QOffscreenSurface_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_TimerEvent(event);
}

void QOffscreenSurface_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) )->handle__ChildEvent = slot;
}

void QOffscreenSurface_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_ChildEvent(event);
}

void QOffscreenSurface_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) )->handle__CustomEvent = slot;
}

void QOffscreenSurface_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_CustomEvent(event);
}

void QOffscreenSurface_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) )->handle__ConnectNotify = slot;
}

void QOffscreenSurface_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_ConnectNotify(signal);
}

void QOffscreenSurface_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) )->handle__DisconnectNotify = slot;
}

void QOffscreenSurface_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QOffscreenSurface_Delete(QOffscreenSurface* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQOffscreenSurface*>( self );
	} else {
		delete self;
	}
}

