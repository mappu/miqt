#include <QAbstractVideoSurface>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVideoFrame>
#include <QVideoSurfaceFormat>
#include <qabstractvideosurface.h>
#include "gen_qabstractvideosurface.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQAbstractVideoSurface : public virtual QAbstractVideoSurface {
public:

	MiqtVirtualQAbstractVideoSurface(): QAbstractVideoSurface() {};
	MiqtVirtualQAbstractVideoSurface(QObject* parent): QAbstractVideoSurface(parent) {};

	virtual ~MiqtVirtualQAbstractVideoSurface() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedPixelFormats = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QVideoFrame::PixelFormat> supportedPixelFormats(QAbstractVideoBuffer::HandleType typeVal) const override {
		if (handle__SupportedPixelFormats == 0) {
			return QList<QVideoFrame::PixelFormat>(); // Pure virtual, there is no base we can call
		}
		
		QAbstractVideoBuffer::HandleType typeVal_ret = typeVal;
		int sigval1 = static_cast<int>(typeVal_ret);

		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QAbstractVideoSurface_SupportedPixelFormats(const_cast<MiqtVirtualQAbstractVideoSurface*>(this), handle__SupportedPixelFormats, sigval1);
		QList<QVideoFrame::PixelFormat> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		int* callback_return_value_arr = static_cast<int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<QVideoFrame::PixelFormat>(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsFormatSupported = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isFormatSupported(const QVideoSurfaceFormat& format) const override {
		if (handle__IsFormatSupported == 0) {
			return QAbstractVideoSurface::isFormatSupported(format);
		}
		
		const QVideoSurfaceFormat& format_ret = format;
		// Cast returned reference into pointer
		QVideoSurfaceFormat* sigval1 = const_cast<QVideoSurfaceFormat*>(&format_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractVideoSurface_IsFormatSupported(const_cast<MiqtVirtualQAbstractVideoSurface*>(this), handle__IsFormatSupported, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsFormatSupported(QVideoSurfaceFormat* format) const {

		return QAbstractVideoSurface::isFormatSupported(*format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NearestFormat = 0;

	// Subclass to allow providing a Go implementation
	virtual QVideoSurfaceFormat nearestFormat(const QVideoSurfaceFormat& format) const override {
		if (handle__NearestFormat == 0) {
			return QAbstractVideoSurface::nearestFormat(format);
		}
		
		const QVideoSurfaceFormat& format_ret = format;
		// Cast returned reference into pointer
		QVideoSurfaceFormat* sigval1 = const_cast<QVideoSurfaceFormat*>(&format_ret);

		QVideoSurfaceFormat* callback_return_value = miqt_exec_callback_QAbstractVideoSurface_NearestFormat(const_cast<MiqtVirtualQAbstractVideoSurface*>(this), handle__NearestFormat, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVideoSurfaceFormat* virtualbase_NearestFormat(QVideoSurfaceFormat* format) const {

		return new QVideoSurfaceFormat(QAbstractVideoSurface::nearestFormat(*format));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Start = 0;

	// Subclass to allow providing a Go implementation
	virtual bool start(const QVideoSurfaceFormat& format) override {
		if (handle__Start == 0) {
			return QAbstractVideoSurface::start(format);
		}
		
		const QVideoSurfaceFormat& format_ret = format;
		// Cast returned reference into pointer
		QVideoSurfaceFormat* sigval1 = const_cast<QVideoSurfaceFormat*>(&format_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractVideoSurface_Start(this, handle__Start, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Start(QVideoSurfaceFormat* format) {

		return QAbstractVideoSurface::start(*format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Stop = 0;

	// Subclass to allow providing a Go implementation
	virtual void stop() override {
		if (handle__Stop == 0) {
			QAbstractVideoSurface::stop();
			return;
		}
		

		miqt_exec_callback_QAbstractVideoSurface_Stop(this, handle__Stop);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Stop() {

		QAbstractVideoSurface::stop();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Present = 0;

	// Subclass to allow providing a Go implementation
	virtual bool present(const QVideoFrame& frame) override {
		if (handle__Present == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		
		const QVideoFrame& frame_ret = frame;
		// Cast returned reference into pointer
		QVideoFrame* sigval1 = const_cast<QVideoFrame*>(&frame_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractVideoSurface_Present(this, handle__Present, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAbstractVideoSurface::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractVideoSurface_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAbstractVideoSurface::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAbstractVideoSurface::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractVideoSurface_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAbstractVideoSurface::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAbstractVideoSurface::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractVideoSurface_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAbstractVideoSurface::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAbstractVideoSurface::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractVideoSurface_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAbstractVideoSurface::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAbstractVideoSurface::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractVideoSurface_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAbstractVideoSurface::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAbstractVideoSurface::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractVideoSurface_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAbstractVideoSurface::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAbstractVideoSurface::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractVideoSurface_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAbstractVideoSurface::disconnectNotify(*signal);

	}

};

QAbstractVideoSurface* QAbstractVideoSurface_new() {
	return new MiqtVirtualQAbstractVideoSurface();
}

QAbstractVideoSurface* QAbstractVideoSurface_new2(QObject* parent) {
	return new MiqtVirtualQAbstractVideoSurface(parent);
}

void QAbstractVideoSurface_virtbase(QAbstractVideoSurface* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractVideoSurface_MetaObject(const QAbstractVideoSurface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractVideoSurface_Metacast(QAbstractVideoSurface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractVideoSurface_Tr(const char* s) {
	QString _ret = QAbstractVideoSurface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoSurface_TrUtf8(const char* s) {
	QString _ret = QAbstractVideoSurface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of int */  QAbstractVideoSurface_SupportedPixelFormats(const QAbstractVideoSurface* self, int typeVal) {
	QList<QVideoFrame::PixelFormat> _ret = self->supportedPixelFormats(static_cast<QAbstractVideoBuffer::HandleType>(typeVal));
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QVideoFrame::PixelFormat _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QAbstractVideoSurface_IsFormatSupported(const QAbstractVideoSurface* self, QVideoSurfaceFormat* format) {
	return self->isFormatSupported(*format);
}

QVideoSurfaceFormat* QAbstractVideoSurface_NearestFormat(const QAbstractVideoSurface* self, QVideoSurfaceFormat* format) {
	return new QVideoSurfaceFormat(self->nearestFormat(*format));
}

QVideoSurfaceFormat* QAbstractVideoSurface_SurfaceFormat(const QAbstractVideoSurface* self) {
	return new QVideoSurfaceFormat(self->surfaceFormat());
}

QSize* QAbstractVideoSurface_NativeResolution(const QAbstractVideoSurface* self) {
	return new QSize(self->nativeResolution());
}

bool QAbstractVideoSurface_Start(QAbstractVideoSurface* self, QVideoSurfaceFormat* format) {
	return self->start(*format);
}

void QAbstractVideoSurface_Stop(QAbstractVideoSurface* self) {
	self->stop();
}

bool QAbstractVideoSurface_IsActive(const QAbstractVideoSurface* self) {
	return self->isActive();
}

bool QAbstractVideoSurface_Present(QAbstractVideoSurface* self, QVideoFrame* frame) {
	return self->present(*frame);
}

int QAbstractVideoSurface_Error(const QAbstractVideoSurface* self) {
	QAbstractVideoSurface::Error _ret = self->error();
	return static_cast<int>(_ret);
}

void QAbstractVideoSurface_ActiveChanged(QAbstractVideoSurface* self, bool active) {
	self->activeChanged(active);
}

void QAbstractVideoSurface_connect_ActiveChanged(QAbstractVideoSurface* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface::connect(self, static_cast<void (QAbstractVideoSurface::*)(bool)>(&QAbstractVideoSurface::activeChanged), self, [=](bool active) {
		bool sigval1 = active;
		miqt_exec_callback_QAbstractVideoSurface_ActiveChanged(slot, sigval1);
	});
}

void QAbstractVideoSurface_SurfaceFormatChanged(QAbstractVideoSurface* self, QVideoSurfaceFormat* format) {
	self->surfaceFormatChanged(*format);
}

void QAbstractVideoSurface_connect_SurfaceFormatChanged(QAbstractVideoSurface* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface::connect(self, static_cast<void (QAbstractVideoSurface::*)(const QVideoSurfaceFormat&)>(&QAbstractVideoSurface::surfaceFormatChanged), self, [=](const QVideoSurfaceFormat& format) {
		const QVideoSurfaceFormat& format_ret = format;
		// Cast returned reference into pointer
		QVideoSurfaceFormat* sigval1 = const_cast<QVideoSurfaceFormat*>(&format_ret);
		miqt_exec_callback_QAbstractVideoSurface_SurfaceFormatChanged(slot, sigval1);
	});
}

void QAbstractVideoSurface_SupportedFormatsChanged(QAbstractVideoSurface* self) {
	self->supportedFormatsChanged();
}

void QAbstractVideoSurface_connect_SupportedFormatsChanged(QAbstractVideoSurface* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface::connect(self, static_cast<void (QAbstractVideoSurface::*)()>(&QAbstractVideoSurface::supportedFormatsChanged), self, [=]() {
		miqt_exec_callback_QAbstractVideoSurface_SupportedFormatsChanged(slot);
	});
}

void QAbstractVideoSurface_NativeResolutionChanged(QAbstractVideoSurface* self, QSize* resolution) {
	self->nativeResolutionChanged(*resolution);
}

void QAbstractVideoSurface_connect_NativeResolutionChanged(QAbstractVideoSurface* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface::connect(self, static_cast<void (QAbstractVideoSurface::*)(const QSize&)>(&QAbstractVideoSurface::nativeResolutionChanged), self, [=](const QSize& resolution) {
		const QSize& resolution_ret = resolution;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&resolution_ret);
		miqt_exec_callback_QAbstractVideoSurface_NativeResolutionChanged(slot, sigval1);
	});
}

struct miqt_string QAbstractVideoSurface_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractVideoSurface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoSurface_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractVideoSurface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoSurface_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractVideoSurface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoSurface_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractVideoSurface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractVideoSurface_override_virtual_SupportedPixelFormats(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) )->handle__SupportedPixelFormats = slot;
}

void QAbstractVideoSurface_override_virtual_IsFormatSupported(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) )->handle__IsFormatSupported = slot;
}

bool QAbstractVideoSurface_virtualbase_IsFormatSupported(const void* self, QVideoSurfaceFormat* format) {
	return ( (const MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_IsFormatSupported(format);
}

void QAbstractVideoSurface_override_virtual_NearestFormat(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) )->handle__NearestFormat = slot;
}

QVideoSurfaceFormat* QAbstractVideoSurface_virtualbase_NearestFormat(const void* self, QVideoSurfaceFormat* format) {
	return ( (const MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_NearestFormat(format);
}

void QAbstractVideoSurface_override_virtual_Start(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) )->handle__Start = slot;
}

bool QAbstractVideoSurface_virtualbase_Start(void* self, QVideoSurfaceFormat* format) {
	return ( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_Start(format);
}

void QAbstractVideoSurface_override_virtual_Stop(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) )->handle__Stop = slot;
}

void QAbstractVideoSurface_virtualbase_Stop(void* self) {
	( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_Stop();
}

void QAbstractVideoSurface_override_virtual_Present(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) )->handle__Present = slot;
}

void QAbstractVideoSurface_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) )->handle__Event = slot;
}

bool QAbstractVideoSurface_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_Event(event);
}

void QAbstractVideoSurface_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) )->handle__EventFilter = slot;
}

bool QAbstractVideoSurface_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_EventFilter(watched, event);
}

void QAbstractVideoSurface_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) )->handle__TimerEvent = slot;
}

void QAbstractVideoSurface_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_TimerEvent(event);
}

void QAbstractVideoSurface_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) )->handle__ChildEvent = slot;
}

void QAbstractVideoSurface_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_ChildEvent(event);
}

void QAbstractVideoSurface_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) )->handle__CustomEvent = slot;
}

void QAbstractVideoSurface_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_CustomEvent(event);
}

void QAbstractVideoSurface_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) )->handle__ConnectNotify = slot;
}

void QAbstractVideoSurface_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_ConnectNotify(signal);
}

void QAbstractVideoSurface_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) )->handle__DisconnectNotify = slot;
}

void QAbstractVideoSurface_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAbstractVideoSurface_Delete(QAbstractVideoSurface* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( self );
	} else {
		delete self;
	}
}

