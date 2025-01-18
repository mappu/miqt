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

double miqt_exec_callback_QTimeLine_ValueForTime(void*, intptr_t, int);
void miqt_exec_callback_QTimeLine_TimerEvent(void*, intptr_t, QTimerEvent*);
bool miqt_exec_callback_QTimeLine_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QTimeLine_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTimeLine_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTimeLine_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QTimeLine_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTimeLine_DisconnectNotify(void*, intptr_t, QMetaMethod*);
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
	intptr_t handle__ValueForTime = 0;

	// Subclass to allow providing a Go implementation
	virtual qreal valueForTime(int msec) const override {
		if (handle__ValueForTime == 0) {
			return QTimeLine::valueForTime(msec);
		}
		
		int sigval1 = msec;

		double callback_return_value = miqt_exec_callback_QTimeLine_ValueForTime(const_cast<MiqtVirtualQTimeLine*>(this), handle__ValueForTime, sigval1);

		return static_cast<qreal>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	double virtualbase_ValueForTime(int msec) const {

		qreal _ret = QTimeLine::valueForTime(static_cast<int>(msec));
		return static_cast<double>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QTimeLine::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTimeLine_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QTimeLine::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QTimeLine::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTimeLine_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QTimeLine::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QTimeLine::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTimeLine_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QTimeLine::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QTimeLine::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTimeLine_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QTimeLine::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QTimeLine::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTimeLine_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QTimeLine::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QTimeLine::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTimeLine_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QTimeLine::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QTimeLine::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTimeLine_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QTimeLine::disconnectNotify(*signal);

	}

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

QMetaObject* QTimeLine_MetaObject(const QTimeLine* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTimeLine_Metacast(QTimeLine* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTimeLine_Tr(const char* s) {
	QString _ret = QTimeLine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTimeLine_State(const QTimeLine* self) {
	QTimeLine::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QTimeLine_LoopCount(const QTimeLine* self) {
	return self->loopCount();
}

void QTimeLine_SetLoopCount(QTimeLine* self, int count) {
	self->setLoopCount(static_cast<int>(count));
}

int QTimeLine_Direction(const QTimeLine* self) {
	QTimeLine::Direction _ret = self->direction();
	return static_cast<int>(_ret);
}

void QTimeLine_SetDirection(QTimeLine* self, int direction) {
	self->setDirection(static_cast<QTimeLine::Direction>(direction));
}

int QTimeLine_Duration(const QTimeLine* self) {
	return self->duration();
}

void QTimeLine_SetDuration(QTimeLine* self, int duration) {
	self->setDuration(static_cast<int>(duration));
}

int QTimeLine_StartFrame(const QTimeLine* self) {
	return self->startFrame();
}

void QTimeLine_SetStartFrame(QTimeLine* self, int frame) {
	self->setStartFrame(static_cast<int>(frame));
}

int QTimeLine_EndFrame(const QTimeLine* self) {
	return self->endFrame();
}

void QTimeLine_SetEndFrame(QTimeLine* self, int frame) {
	self->setEndFrame(static_cast<int>(frame));
}

void QTimeLine_SetFrameRange(QTimeLine* self, int startFrame, int endFrame) {
	self->setFrameRange(static_cast<int>(startFrame), static_cast<int>(endFrame));
}

int QTimeLine_UpdateInterval(const QTimeLine* self) {
	return self->updateInterval();
}

void QTimeLine_SetUpdateInterval(QTimeLine* self, int interval) {
	self->setUpdateInterval(static_cast<int>(interval));
}

QEasingCurve* QTimeLine_EasingCurve(const QTimeLine* self) {
	return new QEasingCurve(self->easingCurve());
}

void QTimeLine_SetEasingCurve(QTimeLine* self, QEasingCurve* curve) {
	self->setEasingCurve(*curve);
}

int QTimeLine_CurrentTime(const QTimeLine* self) {
	return self->currentTime();
}

int QTimeLine_CurrentFrame(const QTimeLine* self) {
	return self->currentFrame();
}

double QTimeLine_CurrentValue(const QTimeLine* self) {
	qreal _ret = self->currentValue();
	return static_cast<double>(_ret);
}

int QTimeLine_FrameForTime(const QTimeLine* self, int msec) {
	return self->frameForTime(static_cast<int>(msec));
}

double QTimeLine_ValueForTime(const QTimeLine* self, int msec) {
	qreal _ret = self->valueForTime(static_cast<int>(msec));
	return static_cast<double>(_ret);
}

void QTimeLine_Start(QTimeLine* self) {
	self->start();
}

void QTimeLine_Resume(QTimeLine* self) {
	self->resume();
}

void QTimeLine_Stop(QTimeLine* self) {
	self->stop();
}

void QTimeLine_SetPaused(QTimeLine* self, bool paused) {
	self->setPaused(paused);
}

void QTimeLine_SetCurrentTime(QTimeLine* self, int msec) {
	self->setCurrentTime(static_cast<int>(msec));
}

void QTimeLine_ToggleDirection(QTimeLine* self) {
	self->toggleDirection();
}

struct miqt_string QTimeLine_Tr2(const char* s, const char* c) {
	QString _ret = QTimeLine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeLine_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTimeLine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTimeLine_override_virtual_ValueForTime(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ValueForTime = slot;
	return true;
}

double QTimeLine_virtualbase_ValueForTime(const void* self, int msec) {
	return ( (const MiqtVirtualQTimeLine*)(self) )->virtualbase_ValueForTime(msec);
}

bool QTimeLine_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QTimeLine_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTimeLine*)(self) )->virtualbase_TimerEvent(event);
}

bool QTimeLine_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QTimeLine_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTimeLine*)(self) )->virtualbase_Event(event);
}

bool QTimeLine_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QTimeLine_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTimeLine*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QTimeLine_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QTimeLine_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTimeLine*)(self) )->virtualbase_ChildEvent(event);
}

bool QTimeLine_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QTimeLine_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTimeLine*)(self) )->virtualbase_CustomEvent(event);
}

bool QTimeLine_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QTimeLine_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTimeLine*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QTimeLine_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = dynamic_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QTimeLine_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTimeLine*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QTimeLine_Delete(QTimeLine* self) {
	delete self;
}

