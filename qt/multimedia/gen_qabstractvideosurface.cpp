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

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractVideoSurface_activeChanged(intptr_t, bool);
void miqt_exec_callback_QAbstractVideoSurface_surfaceFormatChanged(intptr_t, QVideoSurfaceFormat*);
void miqt_exec_callback_QAbstractVideoSurface_supportedFormatsChanged(intptr_t);
void miqt_exec_callback_QAbstractVideoSurface_nativeResolutionChanged(intptr_t, QSize*);
struct miqt_array /* of int */  miqt_exec_callback_QAbstractVideoSurface_supportedPixelFormats(const QAbstractVideoSurface*, intptr_t, int);
bool miqt_exec_callback_QAbstractVideoSurface_isFormatSupported(const QAbstractVideoSurface*, intptr_t, QVideoSurfaceFormat*);
QVideoSurfaceFormat* miqt_exec_callback_QAbstractVideoSurface_nearestFormat(const QAbstractVideoSurface*, intptr_t, QVideoSurfaceFormat*);
bool miqt_exec_callback_QAbstractVideoSurface_start(QAbstractVideoSurface*, intptr_t, QVideoSurfaceFormat*);
void miqt_exec_callback_QAbstractVideoSurface_stop(QAbstractVideoSurface*, intptr_t);
bool miqt_exec_callback_QAbstractVideoSurface_present(QAbstractVideoSurface*, intptr_t, QVideoFrame*);
bool miqt_exec_callback_QAbstractVideoSurface_event(QAbstractVideoSurface*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractVideoSurface_eventFilter(QAbstractVideoSurface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractVideoSurface_timerEvent(QAbstractVideoSurface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractVideoSurface_childEvent(QAbstractVideoSurface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractVideoSurface_customEvent(QAbstractVideoSurface*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractVideoSurface_connectNotify(QAbstractVideoSurface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractVideoSurface_disconnectNotify(QAbstractVideoSurface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractVideoSurface final : public QAbstractVideoSurface {
public:

	MiqtVirtualQAbstractVideoSurface(): QAbstractVideoSurface() {};
	MiqtVirtualQAbstractVideoSurface(QObject* parent): QAbstractVideoSurface(parent) {};

	virtual ~MiqtVirtualQAbstractVideoSurface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedPixelFormats = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QVideoFrame::PixelFormat> supportedPixelFormats(QAbstractVideoBuffer::HandleType type) const override {
		if (handle__supportedPixelFormats == 0) {
			return QList<QVideoFrame::PixelFormat>(); // Pure virtual, there is no base we can call
		}
		
		QAbstractVideoBuffer::HandleType type_ret = type;
		int sigval1 = static_cast<int>(type_ret);

		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QAbstractVideoSurface_supportedPixelFormats(this, handle__supportedPixelFormats, sigval1);
		QList<QVideoFrame::PixelFormat> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		int* callback_return_value_arr = static_cast<int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<QVideoFrame::PixelFormat>(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isFormatSupported = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isFormatSupported(const QVideoSurfaceFormat& format) const override {
		if (handle__isFormatSupported == 0) {
			return QAbstractVideoSurface::isFormatSupported(format);
		}
		
		const QVideoSurfaceFormat& format_ret = format;
		// Cast returned reference into pointer
		QVideoSurfaceFormat* sigval1 = const_cast<QVideoSurfaceFormat*>(&format_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractVideoSurface_isFormatSupported(this, handle__isFormatSupported, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isFormatSupported(QVideoSurfaceFormat* format) const {

		return QAbstractVideoSurface::isFormatSupported(*format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nearestFormat = 0;

	// Subclass to allow providing a Go implementation
	virtual QVideoSurfaceFormat nearestFormat(const QVideoSurfaceFormat& format) const override {
		if (handle__nearestFormat == 0) {
			return QAbstractVideoSurface::nearestFormat(format);
		}
		
		const QVideoSurfaceFormat& format_ret = format;
		// Cast returned reference into pointer
		QVideoSurfaceFormat* sigval1 = const_cast<QVideoSurfaceFormat*>(&format_ret);

		QVideoSurfaceFormat* callback_return_value = miqt_exec_callback_QAbstractVideoSurface_nearestFormat(this, handle__nearestFormat, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVideoSurfaceFormat* virtualbase_nearestFormat(QVideoSurfaceFormat* format) const {

		return new QVideoSurfaceFormat(QAbstractVideoSurface::nearestFormat(*format));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__start = 0;

	// Subclass to allow providing a Go implementation
	virtual bool start(const QVideoSurfaceFormat& format) override {
		if (handle__start == 0) {
			return QAbstractVideoSurface::start(format);
		}
		
		const QVideoSurfaceFormat& format_ret = format;
		// Cast returned reference into pointer
		QVideoSurfaceFormat* sigval1 = const_cast<QVideoSurfaceFormat*>(&format_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractVideoSurface_start(this, handle__start, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_start(QVideoSurfaceFormat* format) {

		return QAbstractVideoSurface::start(*format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stop = 0;

	// Subclass to allow providing a Go implementation
	virtual void stop() override {
		if (handle__stop == 0) {
			QAbstractVideoSurface::stop();
			return;
		}
		

		miqt_exec_callback_QAbstractVideoSurface_stop(this, handle__stop);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_stop() {

		QAbstractVideoSurface::stop();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__present = 0;

	// Subclass to allow providing a Go implementation
	virtual bool present(const QVideoFrame& frame) override {
		if (handle__present == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		
		const QVideoFrame& frame_ret = frame;
		// Cast returned reference into pointer
		QVideoFrame* sigval1 = const_cast<QVideoFrame*>(&frame_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractVideoSurface_present(this, handle__present, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAbstractVideoSurface::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractVideoSurface_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAbstractVideoSurface::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractVideoSurface::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractVideoSurface_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAbstractVideoSurface::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAbstractVideoSurface::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractVideoSurface_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAbstractVideoSurface::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractVideoSurface::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractVideoSurface_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractVideoSurface::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractVideoSurface::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractVideoSurface_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractVideoSurface::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractVideoSurface::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractVideoSurface_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractVideoSurface::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractVideoSurface::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractVideoSurface_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractVideoSurface::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QAbstractVideoSurface_protectedbase_setError(bool* _dynamic_cast_ok, void* self, int error);
	friend void QAbstractVideoSurface_protectedbase_setNativeResolution(bool* _dynamic_cast_ok, void* self, QSize* resolution);
	friend QObject* QAbstractVideoSurface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractVideoSurface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractVideoSurface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractVideoSurface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QAbstractVideoSurface_metaObject(const QAbstractVideoSurface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractVideoSurface_metacast(QAbstractVideoSurface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractVideoSurface_tr(const char* s) {
	QString _ret = QAbstractVideoSurface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoSurface_trUtf8(const char* s) {
	QString _ret = QAbstractVideoSurface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of int */  QAbstractVideoSurface_supportedPixelFormats(const QAbstractVideoSurface* self, int type) {
	QList<QVideoFrame::PixelFormat> _ret = self->supportedPixelFormats(static_cast<QAbstractVideoBuffer::HandleType>(type));
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

bool QAbstractVideoSurface_isFormatSupported(const QAbstractVideoSurface* self, QVideoSurfaceFormat* format) {
	return self->isFormatSupported(*format);
}

QVideoSurfaceFormat* QAbstractVideoSurface_nearestFormat(const QAbstractVideoSurface* self, QVideoSurfaceFormat* format) {
	return new QVideoSurfaceFormat(self->nearestFormat(*format));
}

QVideoSurfaceFormat* QAbstractVideoSurface_surfaceFormat(const QAbstractVideoSurface* self) {
	return new QVideoSurfaceFormat(self->surfaceFormat());
}

QSize* QAbstractVideoSurface_nativeResolution(const QAbstractVideoSurface* self) {
	return new QSize(self->nativeResolution());
}

bool QAbstractVideoSurface_start(QAbstractVideoSurface* self, QVideoSurfaceFormat* format) {
	return self->start(*format);
}

void QAbstractVideoSurface_stop(QAbstractVideoSurface* self) {
	self->stop();
}

bool QAbstractVideoSurface_isActive(const QAbstractVideoSurface* self) {
	return self->isActive();
}

bool QAbstractVideoSurface_present(QAbstractVideoSurface* self, QVideoFrame* frame) {
	return self->present(*frame);
}

int QAbstractVideoSurface_error(const QAbstractVideoSurface* self) {
	QAbstractVideoSurface::Error _ret = self->error();
	return static_cast<int>(_ret);
}

void QAbstractVideoSurface_activeChanged(QAbstractVideoSurface* self, bool active) {
	self->activeChanged(active);
}

void QAbstractVideoSurface_connect_activeChanged(QAbstractVideoSurface* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface::connect(self, static_cast<void (QAbstractVideoSurface::*)(bool)>(&QAbstractVideoSurface::activeChanged), self, [=](bool active) {
		bool sigval1 = active;
		miqt_exec_callback_QAbstractVideoSurface_activeChanged(slot, sigval1);
	});
}

void QAbstractVideoSurface_surfaceFormatChanged(QAbstractVideoSurface* self, QVideoSurfaceFormat* format) {
	self->surfaceFormatChanged(*format);
}

void QAbstractVideoSurface_connect_surfaceFormatChanged(QAbstractVideoSurface* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface::connect(self, static_cast<void (QAbstractVideoSurface::*)(const QVideoSurfaceFormat&)>(&QAbstractVideoSurface::surfaceFormatChanged), self, [=](const QVideoSurfaceFormat& format) {
		const QVideoSurfaceFormat& format_ret = format;
		// Cast returned reference into pointer
		QVideoSurfaceFormat* sigval1 = const_cast<QVideoSurfaceFormat*>(&format_ret);
		miqt_exec_callback_QAbstractVideoSurface_surfaceFormatChanged(slot, sigval1);
	});
}

void QAbstractVideoSurface_supportedFormatsChanged(QAbstractVideoSurface* self) {
	self->supportedFormatsChanged();
}

void QAbstractVideoSurface_connect_supportedFormatsChanged(QAbstractVideoSurface* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface::connect(self, static_cast<void (QAbstractVideoSurface::*)()>(&QAbstractVideoSurface::supportedFormatsChanged), self, [=]() {
		miqt_exec_callback_QAbstractVideoSurface_supportedFormatsChanged(slot);
	});
}

void QAbstractVideoSurface_nativeResolutionChanged(QAbstractVideoSurface* self, QSize* resolution) {
	self->nativeResolutionChanged(*resolution);
}

void QAbstractVideoSurface_connect_nativeResolutionChanged(QAbstractVideoSurface* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface::connect(self, static_cast<void (QAbstractVideoSurface::*)(const QSize&)>(&QAbstractVideoSurface::nativeResolutionChanged), self, [=](const QSize& resolution) {
		const QSize& resolution_ret = resolution;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&resolution_ret);
		miqt_exec_callback_QAbstractVideoSurface_nativeResolutionChanged(slot, sigval1);
	});
}

struct miqt_string QAbstractVideoSurface_tr2(const char* s, const char* c) {
	QString _ret = QAbstractVideoSurface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoSurface_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractVideoSurface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoSurface_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractVideoSurface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractVideoSurface_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractVideoSurface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractVideoSurface_override_virtual_supportedPixelFormats(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedPixelFormats = slot;
	return true;
}

bool QAbstractVideoSurface_override_virtual_isFormatSupported(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isFormatSupported = slot;
	return true;
}

bool QAbstractVideoSurface_virtualbase_isFormatSupported(const void* self, QVideoSurfaceFormat* format) {
	return ( (const MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_isFormatSupported(format);
}

bool QAbstractVideoSurface_override_virtual_nearestFormat(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nearestFormat = slot;
	return true;
}

QVideoSurfaceFormat* QAbstractVideoSurface_virtualbase_nearestFormat(const void* self, QVideoSurfaceFormat* format) {
	return ( (const MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_nearestFormat(format);
}

bool QAbstractVideoSurface_override_virtual_start(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__start = slot;
	return true;
}

bool QAbstractVideoSurface_virtualbase_start(void* self, QVideoSurfaceFormat* format) {
	return ( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_start(format);
}

bool QAbstractVideoSurface_override_virtual_stop(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stop = slot;
	return true;
}

void QAbstractVideoSurface_virtualbase_stop(void* self) {
	( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_stop();
}

bool QAbstractVideoSurface_override_virtual_present(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__present = slot;
	return true;
}

bool QAbstractVideoSurface_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractVideoSurface_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_event(event);
}

bool QAbstractVideoSurface_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractVideoSurface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAbstractVideoSurface_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractVideoSurface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_timerEvent(event);
}

bool QAbstractVideoSurface_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractVideoSurface_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractVideoSurface_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractVideoSurface_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractVideoSurface_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractVideoSurface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractVideoSurface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractVideoSurface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractVideoSurface*)(self) )->virtualbase_disconnectNotify(signal);
}

void QAbstractVideoSurface_protectedbase_setError(bool* _dynamic_cast_ok, void* self, int error) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setError(static_cast<MiqtVirtualQAbstractVideoSurface::Error>(error));

}

void QAbstractVideoSurface_protectedbase_setNativeResolution(bool* _dynamic_cast_ok, void* self, QSize* resolution) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setNativeResolution(*resolution);

}

QObject* QAbstractVideoSurface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractVideoSurface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractVideoSurface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractVideoSurface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractVideoSurface* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoSurface*>( (QAbstractVideoSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractVideoSurface_delete(QAbstractVideoSurface* self) {
	delete self;
}

