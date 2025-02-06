#include <QChildEvent>
#include <QEasingCurve>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimeLine>
#include <QTimerEvent>
#include <qtimeline.h>
#include "gen_qtimeline.h"

#ifdef __cplusplus
extern "C" {
#endif

double miqt_exec_callback_QTimeLine_valueForTime(const QTimeLine*, intptr_t, int);
void miqt_exec_callback_QTimeLine_timerEvent(QTimeLine*, intptr_t, QTimerEvent*);
bool miqt_exec_callback_QTimeLine_event(QTimeLine*, intptr_t, QEvent*);
bool miqt_exec_callback_QTimeLine_eventFilter(QTimeLine*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTimeLine_childEvent(QTimeLine*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTimeLine_customEvent(QTimeLine*, intptr_t, QEvent*);
void miqt_exec_callback_QTimeLine_connectNotify(QTimeLine*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTimeLine_disconnectNotify(QTimeLine*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTimeLine final : public QTimeLine {
public:

	MiqtVirtualQTimeLine(): QTimeLine() {};
	MiqtVirtualQTimeLine(int duration): QTimeLine(duration) {};
	MiqtVirtualQTimeLine(int duration, QObject* parent): QTimeLine(duration, parent) {};

	virtual ~MiqtVirtualQTimeLine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__valueForTime = 0;

	// Subclass to allow providing a Go implementation
	virtual qreal valueForTime(int msec) const override {
		if (handle__valueForTime == 0) {
			return QTimeLine::valueForTime(msec);
		}
		
		int sigval1 = msec;

		double callback_return_value = miqt_exec_callback_QTimeLine_valueForTime(this, handle__valueForTime, sigval1);

		return static_cast<qreal>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	double virtualbase_valueForTime(int msec) const {

		qreal _ret = QTimeLine::valueForTime(static_cast<int>(msec));
		return static_cast<double>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTimeLine::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTimeLine_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QTimeLine::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTimeLine::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTimeLine_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QTimeLine::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTimeLine::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTimeLine_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QTimeLine::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTimeLine::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTimeLine_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTimeLine::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTimeLine::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTimeLine_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTimeLine::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTimeLine::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTimeLine_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTimeLine::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTimeLine::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTimeLine_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTimeLine::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QTimeLine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTimeLine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTimeLine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTimeLine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTimeLine* QTimeLine_new() {
	return new MiqtVirtualQTimeLine();
}

QTimeLine* QTimeLine_new2(int duration) {
	return new MiqtVirtualQTimeLine(static_cast<int>(duration));
}

QTimeLine* QTimeLine_new3(int duration, QObject* parent) {
	return new MiqtVirtualQTimeLine(static_cast<int>(duration), parent);
}

void QTimeLine_virtbase(QTimeLine* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QTimeLine_metaObject(const QTimeLine* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTimeLine_metacast(QTimeLine* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTimeLine_tr(const char* s) {
	QString _ret = QTimeLine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeLine_trUtf8(const char* s) {
	QString _ret = QTimeLine::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTimeLine_state(const QTimeLine* self) {
	QTimeLine::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QTimeLine_loopCount(const QTimeLine* self) {
	return self->loopCount();
}

void QTimeLine_setLoopCount(QTimeLine* self, int count) {
	self->setLoopCount(static_cast<int>(count));
}

int QTimeLine_direction(const QTimeLine* self) {
	QTimeLine::Direction _ret = self->direction();
	return static_cast<int>(_ret);
}

void QTimeLine_setDirection(QTimeLine* self, int direction) {
	self->setDirection(static_cast<QTimeLine::Direction>(direction));
}

int QTimeLine_duration(const QTimeLine* self) {
	return self->duration();
}

void QTimeLine_setDuration(QTimeLine* self, int duration) {
	self->setDuration(static_cast<int>(duration));
}

int QTimeLine_startFrame(const QTimeLine* self) {
	return self->startFrame();
}

void QTimeLine_setStartFrame(QTimeLine* self, int frame) {
	self->setStartFrame(static_cast<int>(frame));
}

int QTimeLine_endFrame(const QTimeLine* self) {
	return self->endFrame();
}

void QTimeLine_setEndFrame(QTimeLine* self, int frame) {
	self->setEndFrame(static_cast<int>(frame));
}

void QTimeLine_setFrameRange(QTimeLine* self, int startFrame, int endFrame) {
	self->setFrameRange(static_cast<int>(startFrame), static_cast<int>(endFrame));
}

int QTimeLine_updateInterval(const QTimeLine* self) {
	return self->updateInterval();
}

void QTimeLine_setUpdateInterval(QTimeLine* self, int interval) {
	self->setUpdateInterval(static_cast<int>(interval));
}

int QTimeLine_curveShape(const QTimeLine* self) {
	QTimeLine::CurveShape _ret = self->curveShape();
	return static_cast<int>(_ret);
}

void QTimeLine_setCurveShape(QTimeLine* self, int shape) {
	self->setCurveShape(static_cast<QTimeLine::CurveShape>(shape));
}

QEasingCurve* QTimeLine_easingCurve(const QTimeLine* self) {
	return new QEasingCurve(self->easingCurve());
}

void QTimeLine_setEasingCurve(QTimeLine* self, QEasingCurve* curve) {
	self->setEasingCurve(*curve);
}

int QTimeLine_currentTime(const QTimeLine* self) {
	return self->currentTime();
}

int QTimeLine_currentFrame(const QTimeLine* self) {
	return self->currentFrame();
}

double QTimeLine_currentValue(const QTimeLine* self) {
	qreal _ret = self->currentValue();
	return static_cast<double>(_ret);
}

int QTimeLine_frameForTime(const QTimeLine* self, int msec) {
	return self->frameForTime(static_cast<int>(msec));
}

double QTimeLine_valueForTime(const QTimeLine* self, int msec) {
	qreal _ret = self->valueForTime(static_cast<int>(msec));
	return static_cast<double>(_ret);
}

void QTimeLine_start(QTimeLine* self) {
	self->start();
}

void QTimeLine_resume(QTimeLine* self) {
	self->resume();
}

void QTimeLine_stop(QTimeLine* self) {
	self->stop();
}

void QTimeLine_setPaused(QTimeLine* self, bool paused) {
	self->setPaused(paused);
}

void QTimeLine_setCurrentTime(QTimeLine* self, int msec) {
	self->setCurrentTime(static_cast<int>(msec));
}

void QTimeLine_toggleDirection(QTimeLine* self) {
	self->toggleDirection();
}

struct miqt_string QTimeLine_tr2(const char* s, const char* c) {
	QString _ret = QTimeLine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeLine_tr3(const char* s, const char* c, int n) {
	QString _ret = QTimeLine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeLine_trUtf82(const char* s, const char* c) {
	QString _ret = QTimeLine::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeLine_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTimeLine::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTimeLine_override_virtual_valueForTime(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__valueForTime = slot;
	return true;
}

double QTimeLine_virtualbase_valueForTime(const void* self, int msec) {
	return ( (const MiqtVirtualQTimeLine*)(self) )->virtualbase_valueForTime(msec);
}

bool QTimeLine_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTimeLine_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTimeLine*)(self) )->virtualbase_timerEvent(event);
}

bool QTimeLine_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTimeLine_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTimeLine*)(self) )->virtualbase_event(event);
}

bool QTimeLine_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTimeLine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTimeLine*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QTimeLine_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTimeLine_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTimeLine*)(self) )->virtualbase_childEvent(event);
}

bool QTimeLine_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTimeLine_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTimeLine*)(self) )->virtualbase_customEvent(event);
}

bool QTimeLine_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTimeLine_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTimeLine*)(self) )->virtualbase_connectNotify(signal);
}

bool QTimeLine_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTimeLine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTimeLine*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QTimeLine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTimeLine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTimeLine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTimeLine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTimeLine_delete(QTimeLine* self) {
	delete self;
}

