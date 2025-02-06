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

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAudioRoom_positionChanged(intptr_t);
void miqt_exec_callback_QAudioRoom_dimensionsChanged(intptr_t);
void miqt_exec_callback_QAudioRoom_rotationChanged(intptr_t);
void miqt_exec_callback_QAudioRoom_wallsChanged(intptr_t);
void miqt_exec_callback_QAudioRoom_reflectionGainChanged(intptr_t);
void miqt_exec_callback_QAudioRoom_reverbGainChanged(intptr_t);
void miqt_exec_callback_QAudioRoom_reverbTimeChanged(intptr_t);
void miqt_exec_callback_QAudioRoom_reverbBrightnessChanged(intptr_t);
bool miqt_exec_callback_QAudioRoom_event(QAudioRoom*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioRoom_eventFilter(QAudioRoom*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioRoom_timerEvent(QAudioRoom*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioRoom_childEvent(QAudioRoom*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioRoom_customEvent(QAudioRoom*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioRoom_connectNotify(QAudioRoom*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioRoom_disconnectNotify(QAudioRoom*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioRoom final : public QAudioRoom {
public:

	MiqtVirtualQAudioRoom(QAudioEngine* engine): QAudioRoom(engine) {};

	virtual ~MiqtVirtualQAudioRoom() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAudioRoom::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioRoom_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAudioRoom::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAudioRoom::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioRoom_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAudioRoom::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAudioRoom::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioRoom_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAudioRoom::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAudioRoom::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioRoom_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAudioRoom::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAudioRoom::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioRoom_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAudioRoom::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAudioRoom::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioRoom_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAudioRoom::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAudioRoom::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioRoom_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAudioRoom::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAudioRoom_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioRoom_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioRoom_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioRoom_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAudioRoom* QAudioRoom_new(QAudioEngine* engine) {
	return new MiqtVirtualQAudioRoom(engine);
}

void QAudioRoom_virtbase(QAudioRoom* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAudioRoom_metaObject(const QAudioRoom* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioRoom_metacast(QAudioRoom* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioRoom_tr(const char* s) {
	QString _ret = QAudioRoom::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioRoom_setPosition(QAudioRoom* self, QVector3D* pos) {
	self->setPosition(*pos);
}

QVector3D* QAudioRoom_position(const QAudioRoom* self) {
	return new QVector3D(self->position());
}

void QAudioRoom_setDimensions(QAudioRoom* self, QVector3D* dim) {
	self->setDimensions(*dim);
}

QVector3D* QAudioRoom_dimensions(const QAudioRoom* self) {
	return new QVector3D(self->dimensions());
}

void QAudioRoom_setRotation(QAudioRoom* self, QQuaternion* q) {
	self->setRotation(*q);
}

QQuaternion* QAudioRoom_rotation(const QAudioRoom* self) {
	return new QQuaternion(self->rotation());
}

void QAudioRoom_setWallMaterial(QAudioRoom* self, int wall, int material) {
	self->setWallMaterial(static_cast<QAudioRoom::Wall>(wall), static_cast<QAudioRoom::Material>(material));
}

int QAudioRoom_wallMaterial(const QAudioRoom* self, int wall) {
	QAudioRoom::Material _ret = self->wallMaterial(static_cast<QAudioRoom::Wall>(wall));
	return static_cast<int>(_ret);
}

void QAudioRoom_setReflectionGain(QAudioRoom* self, float factor) {
	self->setReflectionGain(static_cast<float>(factor));
}

float QAudioRoom_reflectionGain(const QAudioRoom* self) {
	return self->reflectionGain();
}

void QAudioRoom_setReverbGain(QAudioRoom* self, float factor) {
	self->setReverbGain(static_cast<float>(factor));
}

float QAudioRoom_reverbGain(const QAudioRoom* self) {
	return self->reverbGain();
}

void QAudioRoom_setReverbTime(QAudioRoom* self, float factor) {
	self->setReverbTime(static_cast<float>(factor));
}

float QAudioRoom_reverbTime(const QAudioRoom* self) {
	return self->reverbTime();
}

void QAudioRoom_setReverbBrightness(QAudioRoom* self, float factor) {
	self->setReverbBrightness(static_cast<float>(factor));
}

float QAudioRoom_reverbBrightness(const QAudioRoom* self) {
	return self->reverbBrightness();
}

void QAudioRoom_positionChanged(QAudioRoom* self) {
	self->positionChanged();
}

void QAudioRoom_connect_positionChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::positionChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_positionChanged(slot);
	});
}

void QAudioRoom_dimensionsChanged(QAudioRoom* self) {
	self->dimensionsChanged();
}

void QAudioRoom_connect_dimensionsChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::dimensionsChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_dimensionsChanged(slot);
	});
}

void QAudioRoom_rotationChanged(QAudioRoom* self) {
	self->rotationChanged();
}

void QAudioRoom_connect_rotationChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::rotationChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_rotationChanged(slot);
	});
}

void QAudioRoom_wallsChanged(QAudioRoom* self) {
	self->wallsChanged();
}

void QAudioRoom_connect_wallsChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::wallsChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_wallsChanged(slot);
	});
}

void QAudioRoom_reflectionGainChanged(QAudioRoom* self) {
	self->reflectionGainChanged();
}

void QAudioRoom_connect_reflectionGainChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::reflectionGainChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_reflectionGainChanged(slot);
	});
}

void QAudioRoom_reverbGainChanged(QAudioRoom* self) {
	self->reverbGainChanged();
}

void QAudioRoom_connect_reverbGainChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::reverbGainChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_reverbGainChanged(slot);
	});
}

void QAudioRoom_reverbTimeChanged(QAudioRoom* self) {
	self->reverbTimeChanged();
}

void QAudioRoom_connect_reverbTimeChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::reverbTimeChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_reverbTimeChanged(slot);
	});
}

void QAudioRoom_reverbBrightnessChanged(QAudioRoom* self) {
	self->reverbBrightnessChanged();
}

void QAudioRoom_connect_reverbBrightnessChanged(QAudioRoom* self, intptr_t slot) {
	MiqtVirtualQAudioRoom::connect(self, static_cast<void (QAudioRoom::*)()>(&QAudioRoom::reverbBrightnessChanged), self, [=]() {
		miqt_exec_callback_QAudioRoom_reverbBrightnessChanged(slot);
	});
}

struct miqt_string QAudioRoom_tr2(const char* s, const char* c) {
	QString _ret = QAudioRoom::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioRoom_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioRoom::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioRoom_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAudioRoom* self_cast = dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAudioRoom_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioRoom*)(self) )->virtualbase_event(event);
}

bool QAudioRoom_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioRoom* self_cast = dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAudioRoom_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioRoom*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAudioRoom_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioRoom* self_cast = dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAudioRoom_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioRoom*)(self) )->virtualbase_timerEvent(event);
}

bool QAudioRoom_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioRoom* self_cast = dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAudioRoom_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioRoom*)(self) )->virtualbase_childEvent(event);
}

bool QAudioRoom_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioRoom* self_cast = dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAudioRoom_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioRoom*)(self) )->virtualbase_customEvent(event);
}

bool QAudioRoom_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioRoom* self_cast = dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAudioRoom_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioRoom*)(self) )->virtualbase_connectNotify(signal);
}

bool QAudioRoom_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioRoom* self_cast = dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAudioRoom_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioRoom*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAudioRoom_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioRoom* self_cast = dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAudioRoom_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioRoom* self_cast = dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAudioRoom_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAudioRoom* self_cast = dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAudioRoom_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAudioRoom* self_cast = dynamic_cast<MiqtVirtualQAudioRoom*>( (QAudioRoom*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAudioRoom_delete(QAudioRoom* self) {
	delete self;
}

