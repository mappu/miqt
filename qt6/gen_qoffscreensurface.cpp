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

void miqt_exec_callback_QOffscreenSurface_screenChanged(intptr_t, QScreen*);
int miqt_exec_callback_QOffscreenSurface_surfaceType(const QOffscreenSurface*, intptr_t);
QSurfaceFormat* miqt_exec_callback_QOffscreenSurface_format(const QOffscreenSurface*, intptr_t);
QSize* miqt_exec_callback_QOffscreenSurface_size(const QOffscreenSurface*, intptr_t);
bool miqt_exec_callback_QOffscreenSurface_event(QOffscreenSurface*, intptr_t, QEvent*);
bool miqt_exec_callback_QOffscreenSurface_eventFilter(QOffscreenSurface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QOffscreenSurface_timerEvent(QOffscreenSurface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QOffscreenSurface_childEvent(QOffscreenSurface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QOffscreenSurface_customEvent(QOffscreenSurface*, intptr_t, QEvent*);
void miqt_exec_callback_QOffscreenSurface_connectNotify(QOffscreenSurface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QOffscreenSurface_disconnectNotify(QOffscreenSurface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQOffscreenSurface final : public QOffscreenSurface {
public:

	MiqtVirtualQOffscreenSurface(): QOffscreenSurface() {};
	MiqtVirtualQOffscreenSurface(QScreen* screen): QOffscreenSurface(screen) {};
	MiqtVirtualQOffscreenSurface(QScreen* screen, QObject* parent): QOffscreenSurface(screen, parent) {};

	virtual ~MiqtVirtualQOffscreenSurface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__surfaceType = 0;

	// Subclass to allow providing a Go implementation
	virtual QSurface::SurfaceType surfaceType() const override {
		if (handle__surfaceType == 0) {
			return QOffscreenSurface::surfaceType();
		}
		

		int callback_return_value = miqt_exec_callback_QOffscreenSurface_surfaceType(this, handle__surfaceType);

		return static_cast<QSurface::SurfaceType>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_surfaceType() const {

		QSurface::SurfaceType _ret = QOffscreenSurface::surfaceType();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__format = 0;

	// Subclass to allow providing a Go implementation
	virtual QSurfaceFormat format() const override {
		if (handle__format == 0) {
			return QOffscreenSurface::format();
		}
		

		QSurfaceFormat* callback_return_value = miqt_exec_callback_QOffscreenSurface_format(this, handle__format);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSurfaceFormat* virtualbase_format() const {

		return new QSurfaceFormat(QOffscreenSurface::format());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize size() const override {
		if (handle__size == 0) {
			return QOffscreenSurface::size();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QOffscreenSurface_size(this, handle__size);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_size() const {

		return new QSize(QOffscreenSurface::size());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QOffscreenSurface::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QOffscreenSurface_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QOffscreenSurface::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QOffscreenSurface::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QOffscreenSurface_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QOffscreenSurface::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QOffscreenSurface::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QOffscreenSurface_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QOffscreenSurface::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QOffscreenSurface::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QOffscreenSurface_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QOffscreenSurface::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QOffscreenSurface::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QOffscreenSurface_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QOffscreenSurface::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QOffscreenSurface::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QOffscreenSurface_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QOffscreenSurface::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QOffscreenSurface::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QOffscreenSurface_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QOffscreenSurface::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void* QOffscreenSurface_protectedbase_resolveInterface(bool* _dynamic_cast_ok, const void* self, const char* name, int revision);
	friend QObject* QOffscreenSurface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QOffscreenSurface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QOffscreenSurface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QOffscreenSurface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QOffscreenSurface_metaObject(const QOffscreenSurface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QOffscreenSurface_metacast(QOffscreenSurface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QOffscreenSurface_tr(const char* s) {
	QString _ret = QOffscreenSurface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QOffscreenSurface_surfaceType(const QOffscreenSurface* self) {
	QSurface::SurfaceType _ret = self->surfaceType();
	return static_cast<int>(_ret);
}

void QOffscreenSurface_create(QOffscreenSurface* self) {
	self->create();
}

void QOffscreenSurface_destroy(QOffscreenSurface* self) {
	self->destroy();
}

bool QOffscreenSurface_isValid(const QOffscreenSurface* self) {
	return self->isValid();
}

void QOffscreenSurface_setFormat(QOffscreenSurface* self, QSurfaceFormat* format) {
	self->setFormat(*format);
}

QSurfaceFormat* QOffscreenSurface_format(const QOffscreenSurface* self) {
	return new QSurfaceFormat(self->format());
}

QSurfaceFormat* QOffscreenSurface_requestedFormat(const QOffscreenSurface* self) {
	return new QSurfaceFormat(self->requestedFormat());
}

QSize* QOffscreenSurface_size(const QOffscreenSurface* self) {
	return new QSize(self->size());
}

QScreen* QOffscreenSurface_screen(const QOffscreenSurface* self) {
	return self->screen();
}

void QOffscreenSurface_setScreen(QOffscreenSurface* self, QScreen* screen) {
	self->setScreen(screen);
}

void QOffscreenSurface_screenChanged(QOffscreenSurface* self, QScreen* screen) {
	self->screenChanged(screen);
}

void QOffscreenSurface_connect_screenChanged(QOffscreenSurface* self, intptr_t slot) {
	MiqtVirtualQOffscreenSurface::connect(self, static_cast<void (QOffscreenSurface::*)(QScreen*)>(&QOffscreenSurface::screenChanged), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QOffscreenSurface_screenChanged(slot, sigval1);
	});
}

struct miqt_string QOffscreenSurface_tr2(const char* s, const char* c) {
	QString _ret = QOffscreenSurface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QOffscreenSurface_tr3(const char* s, const char* c, int n) {
	QString _ret = QOffscreenSurface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QOffscreenSurface_override_virtual_surfaceType(void* self, intptr_t slot) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__surfaceType = slot;
	return true;
}

int QOffscreenSurface_virtualbase_surfaceType(const void* self) {
	return ( (const MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_surfaceType();
}

bool QOffscreenSurface_override_virtual_format(void* self, intptr_t slot) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__format = slot;
	return true;
}

QSurfaceFormat* QOffscreenSurface_virtualbase_format(const void* self) {
	return ( (const MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_format();
}

bool QOffscreenSurface_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__size = slot;
	return true;
}

QSize* QOffscreenSurface_virtualbase_size(const void* self) {
	return ( (const MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_size();
}

bool QOffscreenSurface_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QOffscreenSurface_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_event(event);
}

bool QOffscreenSurface_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QOffscreenSurface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QOffscreenSurface_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QOffscreenSurface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_timerEvent(event);
}

bool QOffscreenSurface_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QOffscreenSurface_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_childEvent(event);
}

bool QOffscreenSurface_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QOffscreenSurface_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_customEvent(event);
}

bool QOffscreenSurface_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QOffscreenSurface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_connectNotify(signal);
}

bool QOffscreenSurface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QOffscreenSurface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQOffscreenSurface*)(self) )->virtualbase_disconnectNotify(signal);
}

void* QOffscreenSurface_protectedbase_resolveInterface(bool* _dynamic_cast_ok, const void* self, const char* name, int revision) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->resolveInterface(name, static_cast<int>(revision));

}

QObject* QOffscreenSurface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QOffscreenSurface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QOffscreenSurface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QOffscreenSurface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QOffscreenSurface_delete(QOffscreenSurface* self) {
	delete self;
}

