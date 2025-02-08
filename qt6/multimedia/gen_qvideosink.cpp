#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVideoFrame>
#include <QVideoSink>
#include <qvideosink.h>
#include "gen_qvideosink.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QVideoSink_videoFrameChanged(intptr_t, QVideoFrame*);
void miqt_exec_callback_QVideoSink_subtitleTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QVideoSink_videoSizeChanged(intptr_t);
bool miqt_exec_callback_QVideoSink_event(QVideoSink*, intptr_t, QEvent*);
bool miqt_exec_callback_QVideoSink_eventFilter(QVideoSink*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVideoSink_timerEvent(QVideoSink*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVideoSink_childEvent(QVideoSink*, intptr_t, QChildEvent*);
void miqt_exec_callback_QVideoSink_customEvent(QVideoSink*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoSink_connectNotify(QVideoSink*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVideoSink_disconnectNotify(QVideoSink*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQVideoSink final : public QVideoSink {
public:

	MiqtVirtualQVideoSink(): QVideoSink() {};
	MiqtVirtualQVideoSink(QObject* parent): QVideoSink(parent) {};

	virtual ~MiqtVirtualQVideoSink() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QVideoSink::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QVideoSink_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QVideoSink::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QVideoSink::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QVideoSink_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QVideoSink::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QVideoSink::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QVideoSink_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QVideoSink::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QVideoSink::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QVideoSink_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QVideoSink::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QVideoSink::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVideoSink_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QVideoSink::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QVideoSink::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVideoSink_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QVideoSink::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QVideoSink::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVideoSink_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QVideoSink::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QVideoSink_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QVideoSink_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QVideoSink_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QVideoSink_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QVideoSink* QVideoSink_new() {
	return new MiqtVirtualQVideoSink();
}

QVideoSink* QVideoSink_new2(QObject* parent) {
	return new MiqtVirtualQVideoSink(parent);
}

void QVideoSink_virtbase(QVideoSink* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QVideoSink_metaObject(const QVideoSink* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoSink_metacast(QVideoSink* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoSink_tr(const char* s) {
	QString _ret = QVideoSink::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QVideoSink_videoSize(const QVideoSink* self) {
	return new QSize(self->videoSize());
}

struct miqt_string QVideoSink_subtitleText(const QVideoSink* self) {
	QString _ret = self->subtitleText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoSink_setSubtitleText(QVideoSink* self, struct miqt_string subtitle) {
	QString subtitle_QString = QString::fromUtf8(subtitle.data, subtitle.len);
	self->setSubtitleText(subtitle_QString);
}

void QVideoSink_setVideoFrame(QVideoSink* self, QVideoFrame* frame) {
	self->setVideoFrame(*frame);
}

QVideoFrame* QVideoSink_videoFrame(const QVideoSink* self) {
	return new QVideoFrame(self->videoFrame());
}

void QVideoSink_videoFrameChanged(const QVideoSink* self, QVideoFrame* frame) {
	self->videoFrameChanged(*frame);
}

void QVideoSink_connect_videoFrameChanged(QVideoSink* self, intptr_t slot) {
	MiqtVirtualQVideoSink::connect(self, static_cast<void (QVideoSink::*)(const QVideoFrame&) const>(&QVideoSink::videoFrameChanged), self, [=](const QVideoFrame& frame) {
		const QVideoFrame& frame_ret = frame;
		// Cast returned reference into pointer
		QVideoFrame* sigval1 = const_cast<QVideoFrame*>(&frame_ret);
		miqt_exec_callback_QVideoSink_videoFrameChanged(slot, sigval1);
	});
}

void QVideoSink_subtitleTextChanged(const QVideoSink* self, struct miqt_string subtitleText) {
	QString subtitleText_QString = QString::fromUtf8(subtitleText.data, subtitleText.len);
	self->subtitleTextChanged(subtitleText_QString);
}

void QVideoSink_connect_subtitleTextChanged(QVideoSink* self, intptr_t slot) {
	MiqtVirtualQVideoSink::connect(self, static_cast<void (QVideoSink::*)(const QString&) const>(&QVideoSink::subtitleTextChanged), self, [=](const QString& subtitleText) {
		const QString subtitleText_ret = subtitleText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray subtitleText_b = subtitleText_ret.toUtf8();
		struct miqt_string subtitleText_ms;
		subtitleText_ms.len = subtitleText_b.length();
		subtitleText_ms.data = static_cast<char*>(malloc(subtitleText_ms.len));
		memcpy(subtitleText_ms.data, subtitleText_b.data(), subtitleText_ms.len);
		struct miqt_string sigval1 = subtitleText_ms;
		miqt_exec_callback_QVideoSink_subtitleTextChanged(slot, sigval1);
	});
}

void QVideoSink_videoSizeChanged(QVideoSink* self) {
	self->videoSizeChanged();
}

void QVideoSink_connect_videoSizeChanged(QVideoSink* self, intptr_t slot) {
	MiqtVirtualQVideoSink::connect(self, static_cast<void (QVideoSink::*)()>(&QVideoSink::videoSizeChanged), self, [=]() {
		miqt_exec_callback_QVideoSink_videoSizeChanged(slot);
	});
}

struct miqt_string QVideoSink_tr2(const char* s, const char* c) {
	QString _ret = QVideoSink::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoSink_tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoSink::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVideoSink_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQVideoSink* self_cast = dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QVideoSink_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQVideoSink*)(self) )->virtualbase_event(event);
}

bool QVideoSink_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQVideoSink* self_cast = dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QVideoSink_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQVideoSink*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QVideoSink_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoSink* self_cast = dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QVideoSink_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQVideoSink*)(self) )->virtualbase_timerEvent(event);
}

bool QVideoSink_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoSink* self_cast = dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QVideoSink_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQVideoSink*)(self) )->virtualbase_childEvent(event);
}

bool QVideoSink_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoSink* self_cast = dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QVideoSink_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQVideoSink*)(self) )->virtualbase_customEvent(event);
}

bool QVideoSink_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVideoSink* self_cast = dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QVideoSink_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVideoSink*)(self) )->virtualbase_connectNotify(signal);
}

bool QVideoSink_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVideoSink* self_cast = dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QVideoSink_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVideoSink*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QVideoSink_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVideoSink* self_cast = dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QVideoSink_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVideoSink* self_cast = dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QVideoSink_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQVideoSink* self_cast = dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QVideoSink_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQVideoSink* self_cast = dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QVideoSink_delete(QVideoSink* self) {
	delete self;
}

