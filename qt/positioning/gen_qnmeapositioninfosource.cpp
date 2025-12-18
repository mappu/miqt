#include <QChildEvent>
#include <QEvent>
#include <QGeoPositionInfo>
#include <QGeoPositionInfoSource>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNmeaPositionInfoSource>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qnmeapositioninfosource.h>
#include "gen_qnmeapositioninfosource.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QNmeaPositionInfoSource_parsePosInfoFromNmeaData(QNmeaPositionInfoSource*, intptr_t, const char*, int, QGeoPositionInfo*, bool*);
void miqt_exec_callback_QNmeaPositionInfoSource_setUpdateInterval(QNmeaPositionInfoSource*, intptr_t, int);
void miqt_exec_callback_QNmeaPositionInfoSource_setPreferredPositioningMethods(QNmeaPositionInfoSource*, intptr_t, int);
QGeoPositionInfo* miqt_exec_callback_QNmeaPositionInfoSource_lastKnownPosition(const QNmeaPositionInfoSource*, intptr_t, bool);
int miqt_exec_callback_QNmeaPositionInfoSource_supportedPositioningMethods(const QNmeaPositionInfoSource*, intptr_t);
int miqt_exec_callback_QNmeaPositionInfoSource_minimumUpdateInterval(const QNmeaPositionInfoSource*, intptr_t);
int miqt_exec_callback_QNmeaPositionInfoSource_error(const QNmeaPositionInfoSource*, intptr_t);
void miqt_exec_callback_QNmeaPositionInfoSource_startUpdates(QNmeaPositionInfoSource*, intptr_t);
void miqt_exec_callback_QNmeaPositionInfoSource_stopUpdates(QNmeaPositionInfoSource*, intptr_t);
void miqt_exec_callback_QNmeaPositionInfoSource_requestUpdate(QNmeaPositionInfoSource*, intptr_t, int);
bool miqt_exec_callback_QNmeaPositionInfoSource_event(QNmeaPositionInfoSource*, intptr_t, QEvent*);
bool miqt_exec_callback_QNmeaPositionInfoSource_eventFilter(QNmeaPositionInfoSource*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QNmeaPositionInfoSource_timerEvent(QNmeaPositionInfoSource*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QNmeaPositionInfoSource_childEvent(QNmeaPositionInfoSource*, intptr_t, QChildEvent*);
void miqt_exec_callback_QNmeaPositionInfoSource_customEvent(QNmeaPositionInfoSource*, intptr_t, QEvent*);
void miqt_exec_callback_QNmeaPositionInfoSource_connectNotify(QNmeaPositionInfoSource*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QNmeaPositionInfoSource_disconnectNotify(QNmeaPositionInfoSource*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQNmeaPositionInfoSource final : public QNmeaPositionInfoSource {
public:

	MiqtVirtualQNmeaPositionInfoSource(QNmeaPositionInfoSource::UpdateMode updateMode): QNmeaPositionInfoSource(updateMode) {}
	MiqtVirtualQNmeaPositionInfoSource(QNmeaPositionInfoSource::UpdateMode updateMode, QObject* parent): QNmeaPositionInfoSource(updateMode, parent) {}

	virtual ~MiqtVirtualQNmeaPositionInfoSource() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parsePosInfoFromNmeaData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool parsePosInfoFromNmeaData(const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix) override {
		if (handle__parsePosInfoFromNmeaData == 0) {
			return QNmeaPositionInfoSource::parsePosInfoFromNmeaData(data, size, posInfo, hasFix);
		}

		const char* sigval1 = (const char*) data;
		int sigval2 = size;
		QGeoPositionInfo* sigval3 = posInfo;
		bool* sigval4 = hasFix;
		bool callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_parsePosInfoFromNmeaData(this, handle__parsePosInfoFromNmeaData, sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QNmeaPositionInfoSource_virtualbase_parsePosInfoFromNmeaData(void* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setUpdateInterval = 0;

	// Subclass to allow providing a Go implementation
	virtual void setUpdateInterval(int msec) override {
		if (handle__setUpdateInterval == 0) {
			QNmeaPositionInfoSource::setUpdateInterval(msec);
			return;
		}

		int sigval1 = msec;
		miqt_exec_callback_QNmeaPositionInfoSource_setUpdateInterval(this, handle__setUpdateInterval, sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_setUpdateInterval(void* self, int msec);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPreferredPositioningMethods = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPreferredPositioningMethods(QGeoPositionInfoSource::PositioningMethods methods) override {
		if (handle__setPreferredPositioningMethods == 0) {
			QNmeaPositionInfoSource::setPreferredPositioningMethods(methods);
			return;
		}

		QGeoPositionInfoSource::PositioningMethods methods_ret = methods;
		int sigval1 = static_cast<int>(methods_ret);
		miqt_exec_callback_QNmeaPositionInfoSource_setPreferredPositioningMethods(this, handle__setPreferredPositioningMethods, sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_setPreferredPositioningMethods(void* self, int methods);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lastKnownPosition = 0;

	// Subclass to allow providing a Go implementation
	virtual QGeoPositionInfo lastKnownPosition(bool fromSatellitePositioningMethodsOnly) const override {
		if (handle__lastKnownPosition == 0) {
			return QGeoPositionInfo(); // Pure virtual, there is no base we can call
		}

		bool sigval1 = fromSatellitePositioningMethodsOnly;
		QGeoPositionInfo* callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_lastKnownPosition(this, handle__lastKnownPosition, sigval1);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedPositioningMethods = 0;

	// Subclass to allow providing a Go implementation
	virtual QGeoPositionInfoSource::PositioningMethods supportedPositioningMethods() const override {
		if (handle__supportedPositioningMethods == 0) {
			return QGeoPositionInfoSource::PositioningMethods(); // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_supportedPositioningMethods(this, handle__supportedPositioningMethods);
		return static_cast<QGeoPositionInfoSource::PositioningMethods>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumUpdateInterval = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumUpdateInterval() const override {
		if (handle__minimumUpdateInterval == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_minimumUpdateInterval(this, handle__minimumUpdateInterval);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__error = 0;

	// Subclass to allow providing a Go implementation
	virtual QGeoPositionInfoSource::Error error() const override {
		if (handle__error == 0) {
			return (QGeoPositionInfoSource::Error)(0); // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_error(this, handle__error);
		return static_cast<QGeoPositionInfoSource::Error>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startUpdates = 0;

	// Subclass to allow providing a Go implementation
	virtual void startUpdates() override {
		if (handle__startUpdates == 0) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QNmeaPositionInfoSource_startUpdates(this, handle__startUpdates);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stopUpdates = 0;

	// Subclass to allow providing a Go implementation
	virtual void stopUpdates() override {
		if (handle__stopUpdates == 0) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QNmeaPositionInfoSource_stopUpdates(this, handle__stopUpdates);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__requestUpdate = 0;

	// Subclass to allow providing a Go implementation
	virtual void requestUpdate(int timeout) override {
		if (handle__requestUpdate == 0) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = timeout;
		miqt_exec_callback_QNmeaPositionInfoSource_requestUpdate(this, handle__requestUpdate, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QNmeaPositionInfoSource::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QNmeaPositionInfoSource_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QNmeaPositionInfoSource::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QNmeaPositionInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QNmeaPositionInfoSource::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QNmeaPositionInfoSource_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QNmeaPositionInfoSource::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QNmeaPositionInfoSource_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QNmeaPositionInfoSource::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QNmeaPositionInfoSource_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QNmeaPositionInfoSource::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QNmeaPositionInfoSource_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QNmeaPositionInfoSource::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QNmeaPositionInfoSource_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QNmeaPositionInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QNmeaPositionInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QNmeaPositionInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QNmeaPositionInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QNmeaPositionInfoSource* QNmeaPositionInfoSource_new(int updateMode) {
	return new (std::nothrow) MiqtVirtualQNmeaPositionInfoSource(static_cast<QNmeaPositionInfoSource::UpdateMode>(updateMode));
}

QNmeaPositionInfoSource* QNmeaPositionInfoSource_new2(int updateMode, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQNmeaPositionInfoSource(static_cast<QNmeaPositionInfoSource::UpdateMode>(updateMode), parent);
}

void QNmeaPositionInfoSource_virtbase(QNmeaPositionInfoSource* src, QGeoPositionInfoSource** outptr_QGeoPositionInfoSource) {
	*outptr_QGeoPositionInfoSource = static_cast<QGeoPositionInfoSource*>(src);
}

QMetaObject* QNmeaPositionInfoSource_metaObject(const QNmeaPositionInfoSource* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNmeaPositionInfoSource_metacast(QNmeaPositionInfoSource* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNmeaPositionInfoSource_tr(const char* s) {
	QString _ret = QNmeaPositionInfoSource::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNmeaPositionInfoSource_trUtf8(const char* s) {
	QString _ret = QNmeaPositionInfoSource::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNmeaPositionInfoSource_setUserEquivalentRangeError(QNmeaPositionInfoSource* self, double uere) {
	self->setUserEquivalentRangeError(static_cast<double>(uere));
}

double QNmeaPositionInfoSource_userEquivalentRangeError(const QNmeaPositionInfoSource* self) {
	return self->userEquivalentRangeError();
}

int QNmeaPositionInfoSource_updateMode(const QNmeaPositionInfoSource* self) {
	QNmeaPositionInfoSource::UpdateMode _ret = self->updateMode();
	return static_cast<int>(_ret);
}

void QNmeaPositionInfoSource_setDevice(QNmeaPositionInfoSource* self, QIODevice* source) {
	self->setDevice(source);
}

QIODevice* QNmeaPositionInfoSource_device(const QNmeaPositionInfoSource* self) {
	return self->device();
}

void QNmeaPositionInfoSource_setUpdateInterval(QNmeaPositionInfoSource* self, int msec) {
	self->setUpdateInterval(static_cast<int>(msec));
}

QGeoPositionInfo* QNmeaPositionInfoSource_lastKnownPosition(const QNmeaPositionInfoSource* self) {
	return new QGeoPositionInfo(self->lastKnownPosition());
}

int QNmeaPositionInfoSource_supportedPositioningMethods(const QNmeaPositionInfoSource* self) {
	QGeoPositionInfoSource::PositioningMethods _ret = self->supportedPositioningMethods();
	return static_cast<int>(_ret);
}

int QNmeaPositionInfoSource_minimumUpdateInterval(const QNmeaPositionInfoSource* self) {
	return self->minimumUpdateInterval();
}

int QNmeaPositionInfoSource_error(const QNmeaPositionInfoSource* self) {
	QGeoPositionInfoSource::Error _ret = self->error();
	return static_cast<int>(_ret);
}

void QNmeaPositionInfoSource_startUpdates(QNmeaPositionInfoSource* self) {
	self->startUpdates();
}

void QNmeaPositionInfoSource_stopUpdates(QNmeaPositionInfoSource* self) {
	self->stopUpdates();
}

void QNmeaPositionInfoSource_requestUpdate(QNmeaPositionInfoSource* self) {
	self->requestUpdate();
}

struct miqt_string QNmeaPositionInfoSource_tr2(const char* s, const char* c) {
	QString _ret = QNmeaPositionInfoSource::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNmeaPositionInfoSource_tr3(const char* s, const char* c, int n) {
	QString _ret = QNmeaPositionInfoSource::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNmeaPositionInfoSource_trUtf82(const char* s, const char* c) {
	QString _ret = QNmeaPositionInfoSource::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNmeaPositionInfoSource_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QNmeaPositionInfoSource::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QGeoPositionInfo* QNmeaPositionInfoSource_lastKnownPositionWithFromSatellitePositioningMethodsOnly(const QNmeaPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly) {
	return new QGeoPositionInfo(self->lastKnownPosition(fromSatellitePositioningMethodsOnly));
}

void QNmeaPositionInfoSource_requestUpdateWithTimeout(QNmeaPositionInfoSource* self, int timeout) {
	self->requestUpdate(static_cast<int>(timeout));
}

bool QNmeaPositionInfoSource_override_virtual_parsePosInfoFromNmeaData(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parsePosInfoFromNmeaData = slot;
	return true;
}

bool QNmeaPositionInfoSource_virtualbase_parsePosInfoFromNmeaData(void* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix) {
	return static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::parsePosInfoFromNmeaData(data, static_cast<int>(size), posInfo, hasFix);
}

bool QNmeaPositionInfoSource_override_virtual_setUpdateInterval(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setUpdateInterval = slot;
	return true;
}

void QNmeaPositionInfoSource_virtualbase_setUpdateInterval(void* self, int msec) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::setUpdateInterval(static_cast<int>(msec));
}

bool QNmeaPositionInfoSource_override_virtual_setPreferredPositioningMethods(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPreferredPositioningMethods = slot;
	return true;
}

void QNmeaPositionInfoSource_virtualbase_setPreferredPositioningMethods(void* self, int methods) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::setPreferredPositioningMethods(static_cast<MiqtVirtualQNmeaPositionInfoSource::PositioningMethods>(methods));
}

bool QNmeaPositionInfoSource_override_virtual_lastKnownPosition(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lastKnownPosition = slot;
	return true;
}

bool QNmeaPositionInfoSource_override_virtual_supportedPositioningMethods(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedPositioningMethods = slot;
	return true;
}

bool QNmeaPositionInfoSource_override_virtual_minimumUpdateInterval(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumUpdateInterval = slot;
	return true;
}

bool QNmeaPositionInfoSource_override_virtual_error(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__error = slot;
	return true;
}

bool QNmeaPositionInfoSource_override_virtual_startUpdates(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startUpdates = slot;
	return true;
}

bool QNmeaPositionInfoSource_override_virtual_stopUpdates(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__stopUpdates = slot;
	return true;
}

bool QNmeaPositionInfoSource_override_virtual_requestUpdate(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__requestUpdate = slot;
	return true;
}

bool QNmeaPositionInfoSource_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QNmeaPositionInfoSource_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::event(event);
}

bool QNmeaPositionInfoSource_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QNmeaPositionInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::eventFilter(watched, event);
}

bool QNmeaPositionInfoSource_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QNmeaPositionInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::timerEvent(event);
}

bool QNmeaPositionInfoSource_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QNmeaPositionInfoSource_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::childEvent(event);
}

bool QNmeaPositionInfoSource_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QNmeaPositionInfoSource_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::customEvent(event);
}

bool QNmeaPositionInfoSource_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QNmeaPositionInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::connectNotify(*signal);
}

bool QNmeaPositionInfoSource_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QNmeaPositionInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::disconnectNotify(*signal);
}

QObject* QNmeaPositionInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QNmeaPositionInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QNmeaPositionInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QNmeaPositionInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QNmeaPositionInfoSource_delete(QNmeaPositionInfoSource* self) {
	delete self;
}

