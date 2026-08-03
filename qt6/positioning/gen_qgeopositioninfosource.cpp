#include <QChildEvent>
#include <QEvent>
#include <QGeoPositionInfo>
#include <QGeoPositionInfoSource>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qgeopositioninfosource.h>
#include "gen_qgeopositioninfosource.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGeoPositionInfoSource_positionUpdated(intptr_t, QGeoPositionInfo*);
void miqt_exec_callback_QGeoPositionInfoSource_errorOccurred(intptr_t, int);
void miqt_exec_callback_QGeoPositionInfoSource_supportedPositioningMethodsChanged(intptr_t);
void miqt_exec_callback_QGeoPositionInfoSource_setUpdateInterval(QGeoPositionInfoSource*, intptr_t, int);
void miqt_exec_callback_QGeoPositionInfoSource_setPreferredPositioningMethods(QGeoPositionInfoSource*, intptr_t, int);
QGeoPositionInfo* miqt_exec_callback_QGeoPositionInfoSource_lastKnownPosition(const QGeoPositionInfoSource*, intptr_t, bool);
int miqt_exec_callback_QGeoPositionInfoSource_supportedPositioningMethods(const QGeoPositionInfoSource*, intptr_t);
int miqt_exec_callback_QGeoPositionInfoSource_minimumUpdateInterval(const QGeoPositionInfoSource*, intptr_t);
bool miqt_exec_callback_QGeoPositionInfoSource_setBackendProperty(QGeoPositionInfoSource*, intptr_t, struct miqt_string, QVariant*);
QVariant* miqt_exec_callback_QGeoPositionInfoSource_backendProperty(const QGeoPositionInfoSource*, intptr_t, struct miqt_string);
int miqt_exec_callback_QGeoPositionInfoSource_error(const QGeoPositionInfoSource*, intptr_t);
void miqt_exec_callback_QGeoPositionInfoSource_startUpdates(QGeoPositionInfoSource*, intptr_t);
void miqt_exec_callback_QGeoPositionInfoSource_stopUpdates(QGeoPositionInfoSource*, intptr_t);
void miqt_exec_callback_QGeoPositionInfoSource_requestUpdate(QGeoPositionInfoSource*, intptr_t, int);
bool miqt_exec_callback_QGeoPositionInfoSource_event(QGeoPositionInfoSource*, intptr_t, QEvent*);
bool miqt_exec_callback_QGeoPositionInfoSource_eventFilter(QGeoPositionInfoSource*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGeoPositionInfoSource_timerEvent(QGeoPositionInfoSource*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGeoPositionInfoSource_childEvent(QGeoPositionInfoSource*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGeoPositionInfoSource_customEvent(QGeoPositionInfoSource*, intptr_t, QEvent*);
void miqt_exec_callback_QGeoPositionInfoSource_connectNotify(QGeoPositionInfoSource*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGeoPositionInfoSource_disconnectNotify(QGeoPositionInfoSource*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGeoPositionInfoSource final : public QGeoPositionInfoSource {
public:

	MiqtVirtualQGeoPositionInfoSource(QObject* parent): QGeoPositionInfoSource(parent) {}

	virtual ~MiqtVirtualQGeoPositionInfoSource() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setUpdateInterval = 0;

	// Subclass to allow providing a Go implementation
	virtual void setUpdateInterval(int msec) override {
		if (handle__setUpdateInterval == 0) {
			QGeoPositionInfoSource::setUpdateInterval(msec);
			return;
		}

		int sigval1 = msec;
		miqt_exec_callback_QGeoPositionInfoSource_setUpdateInterval(this, handle__setUpdateInterval, sigval1);

	}

	friend void QGeoPositionInfoSource_virtualbase_setUpdateInterval(void* self, int msec);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPreferredPositioningMethods = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPreferredPositioningMethods(QGeoPositionInfoSource::PositioningMethods methods) override {
		if (handle__setPreferredPositioningMethods == 0) {
			QGeoPositionInfoSource::setPreferredPositioningMethods(methods);
			return;
		}

		QGeoPositionInfoSource::PositioningMethods methods_ret = methods;
		int sigval1 = static_cast<int>(methods_ret);
		miqt_exec_callback_QGeoPositionInfoSource_setPreferredPositioningMethods(this, handle__setPreferredPositioningMethods, sigval1);

	}

	friend void QGeoPositionInfoSource_virtualbase_setPreferredPositioningMethods(void* self, int methods);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lastKnownPosition = 0;

	// Subclass to allow providing a Go implementation
	virtual QGeoPositionInfo lastKnownPosition(bool fromSatellitePositioningMethodsOnly) const override {
		if (handle__lastKnownPosition == 0) {
			return QGeoPositionInfo(); // Pure virtual, there is no base we can call
		}

		bool sigval1 = fromSatellitePositioningMethodsOnly;
		QGeoPositionInfo* callback_return_value = miqt_exec_callback_QGeoPositionInfoSource_lastKnownPosition(this, handle__lastKnownPosition, sigval1);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedPositioningMethods = 0;

	// Subclass to allow providing a Go implementation
	virtual QGeoPositionInfoSource::PositioningMethods supportedPositioningMethods() const override {
		if (handle__supportedPositioningMethods == 0) {
			return QGeoPositionInfoSource::PositioningMethods(); // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QGeoPositionInfoSource_supportedPositioningMethods(this, handle__supportedPositioningMethods);
		return static_cast<QGeoPositionInfoSource::PositioningMethods>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumUpdateInterval = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumUpdateInterval() const override {
		if (handle__minimumUpdateInterval == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QGeoPositionInfoSource_minimumUpdateInterval(this, handle__minimumUpdateInterval);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setBackendProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
		if (handle__setBackendProperty == 0) {
			return QGeoPositionInfoSource::setBackendProperty(name, value);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		bool callback_return_value = miqt_exec_callback_QGeoPositionInfoSource_setBackendProperty(this, handle__setBackendProperty, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGeoPositionInfoSource_virtualbase_setBackendProperty(void* self, struct miqt_string name, QVariant* value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__backendProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant backendProperty(const QString& name) const override {
		if (handle__backendProperty == 0) {
			return QGeoPositionInfoSource::backendProperty(name);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		QVariant* callback_return_value = miqt_exec_callback_QGeoPositionInfoSource_backendProperty(this, handle__backendProperty, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QGeoPositionInfoSource_virtualbase_backendProperty(const void* self, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__error = 0;

	// Subclass to allow providing a Go implementation
	virtual QGeoPositionInfoSource::Error error() const override {
		if (handle__error == 0) {
			return (QGeoPositionInfoSource::Error)(0); // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QGeoPositionInfoSource_error(this, handle__error);
		return static_cast<QGeoPositionInfoSource::Error>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startUpdates = 0;

	// Subclass to allow providing a Go implementation
	virtual void startUpdates() override {
		if (handle__startUpdates == 0) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QGeoPositionInfoSource_startUpdates(this, handle__startUpdates);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stopUpdates = 0;

	// Subclass to allow providing a Go implementation
	virtual void stopUpdates() override {
		if (handle__stopUpdates == 0) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QGeoPositionInfoSource_stopUpdates(this, handle__stopUpdates);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__requestUpdate = 0;

	// Subclass to allow providing a Go implementation
	virtual void requestUpdate(int timeout) override {
		if (handle__requestUpdate == 0) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = timeout;
		miqt_exec_callback_QGeoPositionInfoSource_requestUpdate(this, handle__requestUpdate, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGeoPositionInfoSource::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGeoPositionInfoSource_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QGeoPositionInfoSource_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGeoPositionInfoSource::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGeoPositionInfoSource_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGeoPositionInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGeoPositionInfoSource::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGeoPositionInfoSource_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QGeoPositionInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGeoPositionInfoSource::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGeoPositionInfoSource_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QGeoPositionInfoSource_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGeoPositionInfoSource::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGeoPositionInfoSource_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QGeoPositionInfoSource_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGeoPositionInfoSource::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGeoPositionInfoSource_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QGeoPositionInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGeoPositionInfoSource::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGeoPositionInfoSource_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QGeoPositionInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QGeoPositionInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGeoPositionInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGeoPositionInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGeoPositionInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGeoPositionInfoSource* QGeoPositionInfoSource_new(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQGeoPositionInfoSource(parent);
}

void QGeoPositionInfoSource_virtbase(QGeoPositionInfoSource* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QGeoPositionInfoSource_metaObject(const QGeoPositionInfoSource* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGeoPositionInfoSource_metacast(QGeoPositionInfoSource* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGeoPositionInfoSource_tr(const char* s) {
	QString _ret = QGeoPositionInfoSource::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGeoPositionInfoSource_setUpdateInterval(QGeoPositionInfoSource* self, int msec) {
	self->setUpdateInterval(static_cast<int>(msec));
}

int QGeoPositionInfoSource_updateInterval(const QGeoPositionInfoSource* self) {
	return self->updateInterval();
}

void QGeoPositionInfoSource_setPreferredPositioningMethods(QGeoPositionInfoSource* self, int methods) {
	self->setPreferredPositioningMethods(static_cast<QGeoPositionInfoSource::PositioningMethods>(methods));
}

int QGeoPositionInfoSource_preferredPositioningMethods(const QGeoPositionInfoSource* self) {
	QGeoPositionInfoSource::PositioningMethods _ret = self->preferredPositioningMethods();
	return static_cast<int>(_ret);
}

QGeoPositionInfo* QGeoPositionInfoSource_lastKnownPosition(const QGeoPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly) {
	return new QGeoPositionInfo(self->lastKnownPosition(fromSatellitePositioningMethodsOnly));
}

int QGeoPositionInfoSource_supportedPositioningMethods(const QGeoPositionInfoSource* self) {
	QGeoPositionInfoSource::PositioningMethods _ret = self->supportedPositioningMethods();
	return static_cast<int>(_ret);
}

int QGeoPositionInfoSource_minimumUpdateInterval(const QGeoPositionInfoSource* self) {
	return self->minimumUpdateInterval();
}

struct miqt_string QGeoPositionInfoSource_sourceName(const QGeoPositionInfoSource* self) {
	QString _ret = self->sourceName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGeoPositionInfoSource_setBackendProperty(QGeoPositionInfoSource* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->setBackendProperty(name_QString, *value);
}

QVariant* QGeoPositionInfoSource_backendProperty(const QGeoPositionInfoSource* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(self->backendProperty(name_QString));
}

QGeoPositionInfoSource* QGeoPositionInfoSource_createDefaultSource(QObject* parent) {
	return QGeoPositionInfoSource::createDefaultSource(parent);
}

QGeoPositionInfoSource* QGeoPositionInfoSource_createDefaultSource2(struct miqt_map /* of struct miqt_string to QVariant* */  parameters, QObject* parent) {
	QVariantMap parameters_QMap;
	struct miqt_string* parameters_karr = static_cast<struct miqt_string*>(parameters.keys);
	QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
	for(size_t i = 0; i < parameters.len; ++i) {
		QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
		parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
	}
	return QGeoPositionInfoSource::createDefaultSource(parameters_QMap, parent);
}

QGeoPositionInfoSource* QGeoPositionInfoSource_createSource(struct miqt_string sourceName, QObject* parent) {
	QString sourceName_QString = QString::fromUtf8(sourceName.data, sourceName.len);
	return QGeoPositionInfoSource::createSource(sourceName_QString, parent);
}

QGeoPositionInfoSource* QGeoPositionInfoSource_createSource2(struct miqt_string sourceName, struct miqt_map /* of struct miqt_string to QVariant* */  parameters, QObject* parent) {
	QString sourceName_QString = QString::fromUtf8(sourceName.data, sourceName.len);
	QVariantMap parameters_QMap;
	struct miqt_string* parameters_karr = static_cast<struct miqt_string*>(parameters.keys);
	QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
	for(size_t i = 0; i < parameters.len; ++i) {
		QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
		parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
	}
	return QGeoPositionInfoSource::createSource(sourceName_QString, parameters_QMap, parent);
}

struct miqt_array /* of struct miqt_string */  QGeoPositionInfoSource_availableSources() {
	QStringList _ret = QGeoPositionInfoSource::availableSources();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QGeoPositionInfoSource_error(const QGeoPositionInfoSource* self) {
	QGeoPositionInfoSource::Error _ret = self->error();
	return static_cast<int>(_ret);
}

void QGeoPositionInfoSource_startUpdates(QGeoPositionInfoSource* self) {
	self->startUpdates();
}

void QGeoPositionInfoSource_stopUpdates(QGeoPositionInfoSource* self) {
	self->stopUpdates();
}

void QGeoPositionInfoSource_requestUpdate(QGeoPositionInfoSource* self, int timeout) {
	self->requestUpdate(static_cast<int>(timeout));
}

void QGeoPositionInfoSource_positionUpdated(QGeoPositionInfoSource* self, QGeoPositionInfo* update) {
	self->positionUpdated(*update);
}

void QGeoPositionInfoSource_connect_positionUpdated(QGeoPositionInfoSource* self, intptr_t slot) {
	QGeoPositionInfoSource::connect(self, static_cast<void (QGeoPositionInfoSource::*)(const QGeoPositionInfo&)>(&QGeoPositionInfoSource::positionUpdated), self, [=](const QGeoPositionInfo& update) {
		const QGeoPositionInfo& update_ret = update;
		// Cast returned reference into pointer
		QGeoPositionInfo* sigval1 = const_cast<QGeoPositionInfo*>(&update_ret);
		miqt_exec_callback_QGeoPositionInfoSource_positionUpdated(slot, sigval1);
	});
}

void QGeoPositionInfoSource_errorOccurred(QGeoPositionInfoSource* self, int param1) {
	self->errorOccurred(static_cast<QGeoPositionInfoSource::Error>(param1));
}

void QGeoPositionInfoSource_connect_errorOccurred(QGeoPositionInfoSource* self, intptr_t slot) {
	QGeoPositionInfoSource::connect(self, static_cast<void (QGeoPositionInfoSource::*)(QGeoPositionInfoSource::Error)>(&QGeoPositionInfoSource::errorOccurred), self, [=](QGeoPositionInfoSource::Error param1) {
		QGeoPositionInfoSource::Error param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QGeoPositionInfoSource_errorOccurred(slot, sigval1);
	});
}

void QGeoPositionInfoSource_supportedPositioningMethodsChanged(QGeoPositionInfoSource* self) {
	self->supportedPositioningMethodsChanged();
}

void QGeoPositionInfoSource_connect_supportedPositioningMethodsChanged(QGeoPositionInfoSource* self, intptr_t slot) {
	QGeoPositionInfoSource::connect(self, static_cast<void (QGeoPositionInfoSource::*)()>(&QGeoPositionInfoSource::supportedPositioningMethodsChanged), self, [=]() {
		miqt_exec_callback_QGeoPositionInfoSource_supportedPositioningMethodsChanged(slot);
	});
}

struct miqt_string QGeoPositionInfoSource_tr2(const char* s, const char* c) {
	QString _ret = QGeoPositionInfoSource::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGeoPositionInfoSource_tr3(const char* s, const char* c, int n) {
	QString _ret = QGeoPositionInfoSource::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGeoPositionInfoSource_override_virtual_setUpdateInterval(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setUpdateInterval = slot;
	return true;
}

void QGeoPositionInfoSource_virtualbase_setUpdateInterval(void* self, int msec) {
	static_cast<MiqtVirtualQGeoPositionInfoSource*>(self)->QGeoPositionInfoSource::setUpdateInterval(static_cast<int>(msec));
}

bool QGeoPositionInfoSource_override_virtual_setPreferredPositioningMethods(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPreferredPositioningMethods = slot;
	return true;
}

void QGeoPositionInfoSource_virtualbase_setPreferredPositioningMethods(void* self, int methods) {
	static_cast<MiqtVirtualQGeoPositionInfoSource*>(self)->QGeoPositionInfoSource::setPreferredPositioningMethods(static_cast<MiqtVirtualQGeoPositionInfoSource::PositioningMethods>(methods));
}

bool QGeoPositionInfoSource_override_virtual_lastKnownPosition(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lastKnownPosition = slot;
	return true;
}

bool QGeoPositionInfoSource_override_virtual_supportedPositioningMethods(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedPositioningMethods = slot;
	return true;
}

bool QGeoPositionInfoSource_override_virtual_minimumUpdateInterval(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumUpdateInterval = slot;
	return true;
}

bool QGeoPositionInfoSource_override_virtual_setBackendProperty(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setBackendProperty = slot;
	return true;
}

bool QGeoPositionInfoSource_virtualbase_setBackendProperty(void* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQGeoPositionInfoSource*>(self)->QGeoPositionInfoSource::setBackendProperty(name_QString, *value);
}

bool QGeoPositionInfoSource_override_virtual_backendProperty(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__backendProperty = slot;
	return true;
}

QVariant* QGeoPositionInfoSource_virtualbase_backendProperty(const void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(static_cast<const MiqtVirtualQGeoPositionInfoSource*>(self)->QGeoPositionInfoSource::backendProperty(name_QString));
}

bool QGeoPositionInfoSource_override_virtual_error(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__error = slot;
	return true;
}

bool QGeoPositionInfoSource_override_virtual_startUpdates(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startUpdates = slot;
	return true;
}

bool QGeoPositionInfoSource_override_virtual_stopUpdates(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__stopUpdates = slot;
	return true;
}

bool QGeoPositionInfoSource_override_virtual_requestUpdate(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__requestUpdate = slot;
	return true;
}

bool QGeoPositionInfoSource_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QGeoPositionInfoSource_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGeoPositionInfoSource*>(self)->QGeoPositionInfoSource::event(event);
}

bool QGeoPositionInfoSource_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGeoPositionInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGeoPositionInfoSource*>(self)->QGeoPositionInfoSource::eventFilter(watched, event);
}

bool QGeoPositionInfoSource_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QGeoPositionInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGeoPositionInfoSource*>(self)->QGeoPositionInfoSource::timerEvent(event);
}

bool QGeoPositionInfoSource_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QGeoPositionInfoSource_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGeoPositionInfoSource*>(self)->QGeoPositionInfoSource::childEvent(event);
}

bool QGeoPositionInfoSource_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QGeoPositionInfoSource_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGeoPositionInfoSource*>(self)->QGeoPositionInfoSource::customEvent(event);
}

bool QGeoPositionInfoSource_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QGeoPositionInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGeoPositionInfoSource*>(self)->QGeoPositionInfoSource::connectNotify(*signal);
}

bool QGeoPositionInfoSource_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGeoPositionInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGeoPositionInfoSource*>(self)->QGeoPositionInfoSource::disconnectNotify(*signal);
}

QObject* QGeoPositionInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGeoPositionInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGeoPositionInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGeoPositionInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGeoPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSource*>( (QGeoPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGeoPositionInfoSource_delete(QGeoPositionInfoSource* self) {
	delete self;
}

