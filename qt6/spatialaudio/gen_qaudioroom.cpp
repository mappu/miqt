#include <QAudioEngine>
#include <QAudioRoom>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuaternion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVector3D>
#include <qaudioroom.h>
#include "gen_qaudioroom.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQAudioRoom : public virtual QAudioRoom {
public:

	MiqtVirtualQAudioRoom(QAudioEngine* engine): QAudioRoom(engine) {};

	virtual ~MiqtVirtualQAudioRoom() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAudioRoom::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioRoom_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAudioRoom::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAudioRoom::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioRoom_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAudioRoom::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAudioRoom::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioRoom_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAudioRoom::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAudioRoom::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioRoom_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAudioRoom::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAudioRoom::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioRoom_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAudioRoom::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAudioRoom::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioRoom_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAudioRoom::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAudioRoom::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioRoom_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAudioRoom::disconnectNotify(*signal);

	}

};

QAudioRoom* QAudioRoom_new(QAudioEngine* engine) {
	return new MiqtVirtualQAudioRoom(engine);
}

void QAudioRoom_virtbase(QAudioRoom* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAudioRoom_MetaObject(const QAudioRoom* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioRoom_Metacast(QAudioRoom* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioRoom_Tr(const char* s) {
	QString _ret = QAudioRoom::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioRoom_SetPosition(QAudioRoom* self, QVector3D* pos) {
	self->setPosition(*pos);
}

QVector3D* QAudioRoom_Position(const QAudioRoom* self) {
	return new QVector3D(self->position());
}

void QAudioRoom_SetDimensions(QAudioRoom* self, QVector3D* dim) {
	self->setDimensions(*dim);
}

QVector3D* QAudioRoom_Dimensions(const QAudioRoom* self) {
	return new QVector3D(self->dimensions());
}

void QAudioRoom_SetRotation(QAudioRoom* self, QQuaternion* q) {
	self->setRotation(*q);
}

QQuaternion* QAudioRoom_Rotation(const QAudioRoom* self) {
	return new QQuaternion(self->rotation());
}

void QAudioRoom_SetWallMaterial(QAudioRoom* self, int wall, int material) {
	self->setWallMaterial(static_cast<QAudioRoom::Wall>(wall), static_cast<QAudioRoom::Material>(material));
}

int QAudioRoom_WallMaterial(const QAudioRoom* self, int wall) {
	QAudioRoom::Material _ret = self->wallMaterial(static_cast<QAudioRoom::Wall>(wall));
	return static_cast<int>(_ret);
}

void QAudioRoom_SetReflectionGain(QAudioRoom* self, float factor) {
	self->setReflectionGain(static_cast<float>(factor));
}

float QAudioRoom_ReflectionGain(const QAudioRoom* self) {
	return self->reflectionGain();
}

void QAudioRoom_SetReverbGain(QAudioRoom* self, float factor) {
	self->setReverbGain(static_cast<float>(factor));
}

float QAudioRoom_ReverbGain(const QAudioRoom* self) {
	return self->reverbGain();
}

void QAudioRoom_SetReverbTime(QAudioRoom* self, float factor) {
	self->setReverbTime(static_cast<float>(factor));
}

float QAudioRoom_ReverbTime(const QAudioRoom* self) {
	return self->reverbTime();
}

void QAudioRoom_SetReverbBrightness(QAudioRoom* self, float factor) {
	self->setReverbBrightness(static_cast<float>(factor));
}

float QAudioRoom_ReverbBrightness(const QAudioRoom* self) {
	return self->reverbBrightness();
}

void QAudioRoom_PositionChanged(QAudioRoom* self) {
	self->positionChanged();
}

void QAudioRoom_connect_PositionChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::positionChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_PositionChanged(slot);
	});
}

void QAudioRoom_DimensionsChanged(QAudioRoom* self) {
	self->dimensionsChanged();
}

void QAudioRoom_connect_DimensionsChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::dimensionsChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_DimensionsChanged(slot);
	});
}

void QAudioRoom_RotationChanged(QAudioRoom* self) {
	self->rotationChanged();
}

void QAudioRoom_connect_RotationChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::rotationChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_RotationChanged(slot);
	});
}

void QAudioRoom_WallsChanged(QAudioRoom* self) {
	self->wallsChanged();
}

void QAudioRoom_connect_WallsChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::wallsChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_WallsChanged(slot);
	});
}

void QAudioRoom_ReflectionGainChanged(QAudioRoom* self) {
	self->reflectionGainChanged();
}

void QAudioRoom_connect_ReflectionGainChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::reflectionGainChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_ReflectionGainChanged(slot);
	});
}

void QAudioRoom_ReverbGainChanged(QAudioRoom* self) {
	self->reverbGainChanged();
}

void QAudioRoom_connect_ReverbGainChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::reverbGainChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_ReverbGainChanged(slot);
	});
}

void QAudioRoom_ReverbTimeChanged(QAudioRoom* self) {
	self->reverbTimeChanged();
}

void QAudioRoom_connect_ReverbTimeChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::reverbTimeChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_ReverbTimeChanged(slot);
	});
}

void QAudioRoom_ReverbBrightnessChanged(QAudioRoom* self) {
	self->reverbBrightnessChanged();
}

void QAudioRoom_connect_ReverbBrightnessChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::reverbBrightnessChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_ReverbBrightnessChanged(slot);
	});
}

struct miqt_string QAudioRoom_Tr2(const char* s, const char* c) {
	QString _ret = QAudioRoom::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioRoom_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioRoom::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioRoom_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) )->handle__Event = slot;
}

bool QAudioRoom_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioRoom*)(self) )->virtualbase_Event(event);
}

void QAudioRoom_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) )->handle__EventFilter = slot;
}

bool QAudioRoom_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioRoom*)(self) )->virtualbase_EventFilter(watched, event);
}

void QAudioRoom_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) )->handle__TimerEvent = slot;
}

void QAudioRoom_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioRoom*)(self) )->virtualbase_TimerEvent(event);
}

void QAudioRoom_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) )->handle__ChildEvent = slot;
}

void QAudioRoom_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioRoom*)(self) )->virtualbase_ChildEvent(event);
}

void QAudioRoom_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) )->handle__CustomEvent = slot;
}

void QAudioRoom_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioRoom*)(self) )->virtualbase_CustomEvent(event);
}

void QAudioRoom_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) )->handle__ConnectNotify = slot;
}

void QAudioRoom_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioRoom*)(self) )->virtualbase_ConnectNotify(signal);
}

void QAudioRoom_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) )->handle__DisconnectNotify = slot;
}

void QAudioRoom_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioRoom*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAudioRoom_Delete(QAudioRoom* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAudioRoom*>( self );
	} else {
		delete self;
	}
}

