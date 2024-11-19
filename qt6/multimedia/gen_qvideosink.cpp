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
#include "_cgo_export.h"

class MiqtVirtualQVideoSink : public virtual QVideoSink {
public:

	MiqtVirtualQVideoSink(): QVideoSink() {};
	MiqtVirtualQVideoSink(QObject* parent): QVideoSink(parent) {};

	virtual ~MiqtVirtualQVideoSink() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QVideoSink::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QVideoSink_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QVideoSink::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QVideoSink::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QVideoSink_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QVideoSink::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QVideoSink::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QVideoSink_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QVideoSink::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QVideoSink::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QVideoSink_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QVideoSink::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QVideoSink::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVideoSink_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QVideoSink::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QVideoSink::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVideoSink_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QVideoSink::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QVideoSink::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVideoSink_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QVideoSink::disconnectNotify(*signal);

	}

};

void QVideoSink_new(QVideoSink** outptr_QVideoSink, QObject** outptr_QObject) {
	MiqtVirtualQVideoSink* ret = new MiqtVirtualQVideoSink();
	*outptr_QVideoSink = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QVideoSink_new2(QObject* parent, QVideoSink** outptr_QVideoSink, QObject** outptr_QObject) {
	MiqtVirtualQVideoSink* ret = new MiqtVirtualQVideoSink(parent);
	*outptr_QVideoSink = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QVideoSink_MetaObject(const QVideoSink* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoSink_Metacast(QVideoSink* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoSink_Tr(const char* s) {
	QString _ret = QVideoSink::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QVideoSink_VideoSize(const QVideoSink* self) {
	return new QSize(self->videoSize());
}

struct miqt_string QVideoSink_SubtitleText(const QVideoSink* self) {
	QString _ret = self->subtitleText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoSink_SetSubtitleText(QVideoSink* self, struct miqt_string subtitle) {
	QString subtitle_QString = QString::fromUtf8(subtitle.data, subtitle.len);
	self->setSubtitleText(subtitle_QString);
}

void QVideoSink_SetVideoFrame(QVideoSink* self, QVideoFrame* frame) {
	self->setVideoFrame(*frame);
}

QVideoFrame* QVideoSink_VideoFrame(const QVideoSink* self) {
	return new QVideoFrame(self->videoFrame());
}

void QVideoSink_VideoFrameChanged(const QVideoSink* self, QVideoFrame* frame) {
	self->videoFrameChanged(*frame);
}

void QVideoSink_connect_VideoFrameChanged(QVideoSink* self, intptr_t slot) {
	MiqtVirtualQVideoSink::connect(self, static_cast<void (QVideoSink::*)(const QVideoFrame&) const>(&QVideoSink::videoFrameChanged), self, [=](const QVideoFrame& frame) {
		const QVideoFrame& frame_ret = frame;
		// Cast returned reference into pointer
		QVideoFrame* sigval1 = const_cast<QVideoFrame*>(&frame_ret);
		miqt_exec_callback_QVideoSink_VideoFrameChanged(slot, sigval1);
	});
}

void QVideoSink_SubtitleTextChanged(const QVideoSink* self, struct miqt_string subtitleText) {
	QString subtitleText_QString = QString::fromUtf8(subtitleText.data, subtitleText.len);
	self->subtitleTextChanged(subtitleText_QString);
}

void QVideoSink_connect_SubtitleTextChanged(QVideoSink* self, intptr_t slot) {
	MiqtVirtualQVideoSink::connect(self, static_cast<void (QVideoSink::*)(const QString&) const>(&QVideoSink::subtitleTextChanged), self, [=](const QString& subtitleText) {
		const QString subtitleText_ret = subtitleText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray subtitleText_b = subtitleText_ret.toUtf8();
		struct miqt_string subtitleText_ms;
		subtitleText_ms.len = subtitleText_b.length();
		subtitleText_ms.data = static_cast<char*>(malloc(subtitleText_ms.len));
		memcpy(subtitleText_ms.data, subtitleText_b.data(), subtitleText_ms.len);
		struct miqt_string sigval1 = subtitleText_ms;
		miqt_exec_callback_QVideoSink_SubtitleTextChanged(slot, sigval1);
	});
}

void QVideoSink_VideoSizeChanged(QVideoSink* self) {
	self->videoSizeChanged();
}

void QVideoSink_connect_VideoSizeChanged(QVideoSink* self, intptr_t slot) {
	MiqtVirtualQVideoSink::connect(self, static_cast<void (QVideoSink::*)()>(&QVideoSink::videoSizeChanged), self, [=]() {
		miqt_exec_callback_QVideoSink_VideoSizeChanged(slot);
	});
}

struct miqt_string QVideoSink_Tr2(const char* s, const char* c) {
	QString _ret = QVideoSink::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoSink_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoSink::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoSink_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) )->handle__Event = slot;
}

bool QVideoSink_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQVideoSink*)(self) )->virtualbase_Event(event);
}

void QVideoSink_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) )->handle__EventFilter = slot;
}

bool QVideoSink_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQVideoSink*)(self) )->virtualbase_EventFilter(watched, event);
}

void QVideoSink_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) )->handle__TimerEvent = slot;
}

void QVideoSink_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQVideoSink*)(self) )->virtualbase_TimerEvent(event);
}

void QVideoSink_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) )->handle__ChildEvent = slot;
}

void QVideoSink_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQVideoSink*)(self) )->virtualbase_ChildEvent(event);
}

void QVideoSink_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) )->handle__CustomEvent = slot;
}

void QVideoSink_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQVideoSink*)(self) )->virtualbase_CustomEvent(event);
}

void QVideoSink_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) )->handle__ConnectNotify = slot;
}

void QVideoSink_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVideoSink*)(self) )->virtualbase_ConnectNotify(signal);
}

void QVideoSink_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoSink*>( (QVideoSink*)(self) )->handle__DisconnectNotify = slot;
}

void QVideoSink_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVideoSink*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QVideoSink_Delete(QVideoSink* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQVideoSink*>( self );
	} else {
		delete self;
	}
}

