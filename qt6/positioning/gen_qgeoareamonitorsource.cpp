#include <QChildEvent>
#include <QEvent>
#include <QGeoAreaMonitorInfo>
#include <QGeoAreaMonitorSource>
#include <QGeoPositionInfo>
#include <QGeoPositionInfoSource>
#include <QGeoShape>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qgeoareamonitorsource.h>
#include "gen_qgeoareamonitorsource.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGeoAreaMonitorSource_areaEntered(intptr_t, QGeoAreaMonitorInfo*, QGeoPositionInfo*);
void miqt_exec_callback_QGeoAreaMonitorSource_areaExited(intptr_t, QGeoAreaMonitorInfo*, QGeoPositionInfo*);
void miqt_exec_callback_QGeoAreaMonitorSource_monitorExpired(intptr_t, QGeoAreaMonitorInfo*);
void miqt_exec_callback_QGeoAreaMonitorSource_errorOccurred(intptr_t, int);
void miqt_exec_callback_QGeoAreaMonitorSource_setPositionInfoSource(QGeoAreaMonitorSource*, intptr_t, QGeoPositionInfoSource*);
QGeoPositionInfoSource* miqt_exec_callback_QGeoAreaMonitorSource_positionInfoSource(const QGeoAreaMonitorSource*, intptr_t);
int miqt_exec_callback_QGeoAreaMonitorSource_error(const QGeoAreaMonitorSource*, intptr_t);
int miqt_exec_callback_QGeoAreaMonitorSource_supportedAreaMonitorFeatures(const QGeoAreaMonitorSource*, intptr_t);
bool miqt_exec_callback_QGeoAreaMonitorSource_startMonitoring(QGeoAreaMonitorSource*, intptr_t, QGeoAreaMonitorInfo*);
bool miqt_exec_callback_QGeoAreaMonitorSource_stopMonitoring(QGeoAreaMonitorSource*, intptr_t, QGeoAreaMonitorInfo*);
bool miqt_exec_callback_QGeoAreaMonitorSource_requestUpdate(QGeoAreaMonitorSource*, intptr_t, QGeoAreaMonitorInfo*, const char*);
struct miqt_array /* of QGeoAreaMonitorInfo* */  miqt_exec_callback_QGeoAreaMonitorSource_activeMonitors(const QGeoAreaMonitorSource*, intptr_t);
struct miqt_array /* of QGeoAreaMonitorInfo* */  miqt_exec_callback_QGeoAreaMonitorSource_activeMonitorsWithLookupArea(const QGeoAreaMonitorSource*, intptr_t, QGeoShape*);
bool miqt_exec_callback_QGeoAreaMonitorSource_setBackendProperty(QGeoAreaMonitorSource*, intptr_t, struct miqt_string, QVariant*);
QVariant* miqt_exec_callback_QGeoAreaMonitorSource_backendProperty(const QGeoAreaMonitorSource*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QGeoAreaMonitorSource_event(QGeoAreaMonitorSource*, intptr_t, QEvent*);
bool miqt_exec_callback_QGeoAreaMonitorSource_eventFilter(QGeoAreaMonitorSource*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGeoAreaMonitorSource_timerEvent(QGeoAreaMonitorSource*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGeoAreaMonitorSource_childEvent(QGeoAreaMonitorSource*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGeoAreaMonitorSource_customEvent(QGeoAreaMonitorSource*, intptr_t, QEvent*);
void miqt_exec_callback_QGeoAreaMonitorSource_connectNotify(QGeoAreaMonitorSource*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGeoAreaMonitorSource_disconnectNotify(QGeoAreaMonitorSource*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGeoAreaMonitorSource final : public QGeoAreaMonitorSource {
public:

	MiqtVirtualQGeoAreaMonitorSource(QObject* parent): QGeoAreaMonitorSource(parent) {}

	virtual ~MiqtVirtualQGeoAreaMonitorSource() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPositionInfoSource = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPositionInfoSource(QGeoPositionInfoSource* source) override {
		if (handle__setPositionInfoSource == 0) {
			QGeoAreaMonitorSource::setPositionInfoSource(source);
			return;
		}

		QGeoPositionInfoSource* sigval1 = source;
		miqt_exec_callback_QGeoAreaMonitorSource_setPositionInfoSource(this, handle__setPositionInfoSource, sigval1);

	}

	friend void QGeoAreaMonitorSource_virtualbase_setPositionInfoSource(void* self, QGeoPositionInfoSource* source);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__positionInfoSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QGeoPositionInfoSource* positionInfoSource() const override {
		if (handle__positionInfoSource == 0) {
			return QGeoAreaMonitorSource::positionInfoSource();
		}

		QGeoPositionInfoSource* callback_return_value = miqt_exec_callback_QGeoAreaMonitorSource_positionInfoSource(this, handle__positionInfoSource);
		return callback_return_value;
	}

	friend QGeoPositionInfoSource* QGeoAreaMonitorSource_virtualbase_positionInfoSource(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__error = 0;

	// Subclass to allow providing a Go implementation
	virtual QGeoAreaMonitorSource::Error error() const override {
		if (handle__error == 0) {
			return (QGeoAreaMonitorSource::Error)(0); // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QGeoAreaMonitorSource_error(this, handle__error);
		return static_cast<QGeoAreaMonitorSource::Error>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedAreaMonitorFeatures = 0;

	// Subclass to allow providing a Go implementation
	virtual QGeoAreaMonitorSource::AreaMonitorFeatures supportedAreaMonitorFeatures() const override {
		if (handle__supportedAreaMonitorFeatures == 0) {
			return QGeoAreaMonitorSource::AreaMonitorFeatures(); // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QGeoAreaMonitorSource_supportedAreaMonitorFeatures(this, handle__supportedAreaMonitorFeatures);
		return static_cast<QGeoAreaMonitorSource::AreaMonitorFeatures>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startMonitoring = 0;

	// Subclass to allow providing a Go implementation
	virtual bool startMonitoring(const QGeoAreaMonitorInfo& monitor) override {
		if (handle__startMonitoring == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		const QGeoAreaMonitorInfo& monitor_ret = monitor;
		// Cast returned reference into pointer
		QGeoAreaMonitorInfo* sigval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);
		bool callback_return_value = miqt_exec_callback_QGeoAreaMonitorSource_startMonitoring(this, handle__startMonitoring, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stopMonitoring = 0;

	// Subclass to allow providing a Go implementation
	virtual bool stopMonitoring(const QGeoAreaMonitorInfo& monitor) override {
		if (handle__stopMonitoring == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		const QGeoAreaMonitorInfo& monitor_ret = monitor;
		// Cast returned reference into pointer
		QGeoAreaMonitorInfo* sigval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);
		bool callback_return_value = miqt_exec_callback_QGeoAreaMonitorSource_stopMonitoring(this, handle__stopMonitoring, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__requestUpdate = 0;

	// Subclass to allow providing a Go implementation
	virtual bool requestUpdate(const QGeoAreaMonitorInfo& monitor, const char* signal) override {
		if (handle__requestUpdate == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		const QGeoAreaMonitorInfo& monitor_ret = monitor;
		// Cast returned reference into pointer
		QGeoAreaMonitorInfo* sigval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);
		const char* sigval2 = (const char*) signal;
		bool callback_return_value = miqt_exec_callback_QGeoAreaMonitorSource_requestUpdate(this, handle__requestUpdate, sigval1, sigval2);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__activeMonitors = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QGeoAreaMonitorInfo> activeMonitors() const override {
		if (handle__activeMonitors == 0) {
			return QList<QGeoAreaMonitorInfo>(); // Pure virtual, there is no base we can call
		}

		struct miqt_array /* of QGeoAreaMonitorInfo* */  callback_return_value = miqt_exec_callback_QGeoAreaMonitorSource_activeMonitors(this, handle__activeMonitors);
		QList<QGeoAreaMonitorInfo> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QGeoAreaMonitorInfo** callback_return_value_arr = static_cast<QGeoAreaMonitorInfo**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__activeMonitorsWithLookupArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QGeoAreaMonitorInfo> activeMonitors(const QGeoShape& lookupArea) const override {
		if (handle__activeMonitorsWithLookupArea == 0) {
			return QList<QGeoAreaMonitorInfo>(); // Pure virtual, there is no base we can call
		}

		const QGeoShape& lookupArea_ret = lookupArea;
		// Cast returned reference into pointer
		QGeoShape* sigval1 = const_cast<QGeoShape*>(&lookupArea_ret);
		struct miqt_array /* of QGeoAreaMonitorInfo* */  callback_return_value = miqt_exec_callback_QGeoAreaMonitorSource_activeMonitorsWithLookupArea(this, handle__activeMonitorsWithLookupArea, sigval1);
		QList<QGeoAreaMonitorInfo> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QGeoAreaMonitorInfo** callback_return_value_arr = static_cast<QGeoAreaMonitorInfo**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setBackendProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
		if (handle__setBackendProperty == 0) {
			return QGeoAreaMonitorSource::setBackendProperty(name, value);
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
		bool callback_return_value = miqt_exec_callback_QGeoAreaMonitorSource_setBackendProperty(this, handle__setBackendProperty, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGeoAreaMonitorSource_virtualbase_setBackendProperty(void* self, struct miqt_string name, QVariant* value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__backendProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant backendProperty(const QString& name) const override {
		if (handle__backendProperty == 0) {
			return QGeoAreaMonitorSource::backendProperty(name);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		QVariant* callback_return_value = miqt_exec_callback_QGeoAreaMonitorSource_backendProperty(this, handle__backendProperty, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QGeoAreaMonitorSource_virtualbase_backendProperty(const void* self, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGeoAreaMonitorSource::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGeoAreaMonitorSource_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QGeoAreaMonitorSource_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGeoAreaMonitorSource::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGeoAreaMonitorSource_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGeoAreaMonitorSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGeoAreaMonitorSource::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGeoAreaMonitorSource_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QGeoAreaMonitorSource_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGeoAreaMonitorSource::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGeoAreaMonitorSource_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QGeoAreaMonitorSource_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGeoAreaMonitorSource::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGeoAreaMonitorSource_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QGeoAreaMonitorSource_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGeoAreaMonitorSource::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGeoAreaMonitorSource_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QGeoAreaMonitorSource_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGeoAreaMonitorSource::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGeoAreaMonitorSource_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QGeoAreaMonitorSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QGeoAreaMonitorSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGeoAreaMonitorSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGeoAreaMonitorSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGeoAreaMonitorSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGeoAreaMonitorSource* QGeoAreaMonitorSource_new(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQGeoAreaMonitorSource(parent);
}

void QGeoAreaMonitorSource_virtbase(QGeoAreaMonitorSource* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QGeoAreaMonitorSource_metaObject(const QGeoAreaMonitorSource* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGeoAreaMonitorSource_metacast(QGeoAreaMonitorSource* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGeoAreaMonitorSource_tr(const char* s) {
	QString _ret = QGeoAreaMonitorSource::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QGeoAreaMonitorSource* QGeoAreaMonitorSource_createDefaultSource(QObject* parent) {
	return QGeoAreaMonitorSource::createDefaultSource(parent);
}

QGeoAreaMonitorSource* QGeoAreaMonitorSource_createSource(struct miqt_string sourceName, QObject* parent) {
	QString sourceName_QString = QString::fromUtf8(sourceName.data, sourceName.len);
	return QGeoAreaMonitorSource::createSource(sourceName_QString, parent);
}

struct miqt_array /* of struct miqt_string */  QGeoAreaMonitorSource_availableSources() {
	QStringList _ret = QGeoAreaMonitorSource::availableSources();
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

void QGeoAreaMonitorSource_setPositionInfoSource(QGeoAreaMonitorSource* self, QGeoPositionInfoSource* source) {
	self->setPositionInfoSource(source);
}

QGeoPositionInfoSource* QGeoAreaMonitorSource_positionInfoSource(const QGeoAreaMonitorSource* self) {
	return self->positionInfoSource();
}

struct miqt_string QGeoAreaMonitorSource_sourceName(const QGeoAreaMonitorSource* self) {
	QString _ret = self->sourceName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QGeoAreaMonitorSource_error(const QGeoAreaMonitorSource* self) {
	QGeoAreaMonitorSource::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QGeoAreaMonitorSource_supportedAreaMonitorFeatures(const QGeoAreaMonitorSource* self) {
	QGeoAreaMonitorSource::AreaMonitorFeatures _ret = self->supportedAreaMonitorFeatures();
	return static_cast<int>(_ret);
}

bool QGeoAreaMonitorSource_startMonitoring(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor) {
	return self->startMonitoring(*monitor);
}

bool QGeoAreaMonitorSource_stopMonitoring(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor) {
	return self->stopMonitoring(*monitor);
}

bool QGeoAreaMonitorSource_requestUpdate(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor, const char* signal) {
	return self->requestUpdate(*monitor, signal);
}

struct miqt_array /* of QGeoAreaMonitorInfo* */  QGeoAreaMonitorSource_activeMonitors(const QGeoAreaMonitorSource* self) {
	QList<QGeoAreaMonitorInfo> _ret = self->activeMonitors();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGeoAreaMonitorInfo** _arr = static_cast<QGeoAreaMonitorInfo**>(malloc(sizeof(QGeoAreaMonitorInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGeoAreaMonitorInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGeoAreaMonitorInfo* */  QGeoAreaMonitorSource_activeMonitorsWithLookupArea(const QGeoAreaMonitorSource* self, QGeoShape* lookupArea) {
	QList<QGeoAreaMonitorInfo> _ret = self->activeMonitors(*lookupArea);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGeoAreaMonitorInfo** _arr = static_cast<QGeoAreaMonitorInfo**>(malloc(sizeof(QGeoAreaMonitorInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGeoAreaMonitorInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QGeoAreaMonitorSource_setBackendProperty(QGeoAreaMonitorSource* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->setBackendProperty(name_QString, *value);
}

QVariant* QGeoAreaMonitorSource_backendProperty(const QGeoAreaMonitorSource* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(self->backendProperty(name_QString));
}

void QGeoAreaMonitorSource_areaEntered(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor, QGeoPositionInfo* update) {
	self->areaEntered(*monitor, *update);
}

void QGeoAreaMonitorSource_connect_areaEntered(QGeoAreaMonitorSource* self, intptr_t slot) {
	QGeoAreaMonitorSource::connect(self, static_cast<void (QGeoAreaMonitorSource::*)(const QGeoAreaMonitorInfo&, const QGeoPositionInfo&)>(&QGeoAreaMonitorSource::areaEntered), self, [=](const QGeoAreaMonitorInfo& monitor, const QGeoPositionInfo& update) {
		const QGeoAreaMonitorInfo& monitor_ret = monitor;
		// Cast returned reference into pointer
		QGeoAreaMonitorInfo* sigval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);
		const QGeoPositionInfo& update_ret = update;
		// Cast returned reference into pointer
		QGeoPositionInfo* sigval2 = const_cast<QGeoPositionInfo*>(&update_ret);
		miqt_exec_callback_QGeoAreaMonitorSource_areaEntered(slot, sigval1, sigval2);
	});
}

void QGeoAreaMonitorSource_areaExited(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor, QGeoPositionInfo* update) {
	self->areaExited(*monitor, *update);
}

void QGeoAreaMonitorSource_connect_areaExited(QGeoAreaMonitorSource* self, intptr_t slot) {
	QGeoAreaMonitorSource::connect(self, static_cast<void (QGeoAreaMonitorSource::*)(const QGeoAreaMonitorInfo&, const QGeoPositionInfo&)>(&QGeoAreaMonitorSource::areaExited), self, [=](const QGeoAreaMonitorInfo& monitor, const QGeoPositionInfo& update) {
		const QGeoAreaMonitorInfo& monitor_ret = monitor;
		// Cast returned reference into pointer
		QGeoAreaMonitorInfo* sigval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);
		const QGeoPositionInfo& update_ret = update;
		// Cast returned reference into pointer
		QGeoPositionInfo* sigval2 = const_cast<QGeoPositionInfo*>(&update_ret);
		miqt_exec_callback_QGeoAreaMonitorSource_areaExited(slot, sigval1, sigval2);
	});
}

void QGeoAreaMonitorSource_monitorExpired(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor) {
	self->monitorExpired(*monitor);
}

void QGeoAreaMonitorSource_connect_monitorExpired(QGeoAreaMonitorSource* self, intptr_t slot) {
	QGeoAreaMonitorSource::connect(self, static_cast<void (QGeoAreaMonitorSource::*)(const QGeoAreaMonitorInfo&)>(&QGeoAreaMonitorSource::monitorExpired), self, [=](const QGeoAreaMonitorInfo& monitor) {
		const QGeoAreaMonitorInfo& monitor_ret = monitor;
		// Cast returned reference into pointer
		QGeoAreaMonitorInfo* sigval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);
		miqt_exec_callback_QGeoAreaMonitorSource_monitorExpired(slot, sigval1);
	});
}

void QGeoAreaMonitorSource_errorOccurred(QGeoAreaMonitorSource* self, int error) {
	self->errorOccurred(static_cast<QGeoAreaMonitorSource::Error>(error));
}

void QGeoAreaMonitorSource_connect_errorOccurred(QGeoAreaMonitorSource* self, intptr_t slot) {
	QGeoAreaMonitorSource::connect(self, static_cast<void (QGeoAreaMonitorSource::*)(QGeoAreaMonitorSource::Error)>(&QGeoAreaMonitorSource::errorOccurred), self, [=](QGeoAreaMonitorSource::Error error) {
		QGeoAreaMonitorSource::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QGeoAreaMonitorSource_errorOccurred(slot, sigval1);
	});
}

struct miqt_string QGeoAreaMonitorSource_tr2(const char* s, const char* c) {
	QString _ret = QGeoAreaMonitorSource::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGeoAreaMonitorSource_tr3(const char* s, const char* c, int n) {
	QString _ret = QGeoAreaMonitorSource::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGeoAreaMonitorSource_override_virtual_setPositionInfoSource(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPositionInfoSource = slot;
	return true;
}

void QGeoAreaMonitorSource_virtualbase_setPositionInfoSource(void* self, QGeoPositionInfoSource* source) {
	static_cast<MiqtVirtualQGeoAreaMonitorSource*>(self)->QGeoAreaMonitorSource::setPositionInfoSource(source);
}

bool QGeoAreaMonitorSource_override_virtual_positionInfoSource(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__positionInfoSource = slot;
	return true;
}

QGeoPositionInfoSource* QGeoAreaMonitorSource_virtualbase_positionInfoSource(const void* self) {
	return static_cast<const MiqtVirtualQGeoAreaMonitorSource*>(self)->QGeoAreaMonitorSource::positionInfoSource();
}

bool QGeoAreaMonitorSource_override_virtual_error(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__error = slot;
	return true;
}

bool QGeoAreaMonitorSource_override_virtual_supportedAreaMonitorFeatures(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedAreaMonitorFeatures = slot;
	return true;
}

bool QGeoAreaMonitorSource_override_virtual_startMonitoring(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startMonitoring = slot;
	return true;
}

bool QGeoAreaMonitorSource_override_virtual_stopMonitoring(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__stopMonitoring = slot;
	return true;
}

bool QGeoAreaMonitorSource_override_virtual_requestUpdate(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__requestUpdate = slot;
	return true;
}

bool QGeoAreaMonitorSource_override_virtual_activeMonitors(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__activeMonitors = slot;
	return true;
}

bool QGeoAreaMonitorSource_override_virtual_activeMonitorsWithLookupArea(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__activeMonitorsWithLookupArea = slot;
	return true;
}

bool QGeoAreaMonitorSource_override_virtual_setBackendProperty(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setBackendProperty = slot;
	return true;
}

bool QGeoAreaMonitorSource_virtualbase_setBackendProperty(void* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQGeoAreaMonitorSource*>(self)->QGeoAreaMonitorSource::setBackendProperty(name_QString, *value);
}

bool QGeoAreaMonitorSource_override_virtual_backendProperty(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__backendProperty = slot;
	return true;
}

QVariant* QGeoAreaMonitorSource_virtualbase_backendProperty(const void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(static_cast<const MiqtVirtualQGeoAreaMonitorSource*>(self)->QGeoAreaMonitorSource::backendProperty(name_QString));
}

bool QGeoAreaMonitorSource_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QGeoAreaMonitorSource_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGeoAreaMonitorSource*>(self)->QGeoAreaMonitorSource::event(event);
}

bool QGeoAreaMonitorSource_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGeoAreaMonitorSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGeoAreaMonitorSource*>(self)->QGeoAreaMonitorSource::eventFilter(watched, event);
}

bool QGeoAreaMonitorSource_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QGeoAreaMonitorSource_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGeoAreaMonitorSource*>(self)->QGeoAreaMonitorSource::timerEvent(event);
}

bool QGeoAreaMonitorSource_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QGeoAreaMonitorSource_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGeoAreaMonitorSource*>(self)->QGeoAreaMonitorSource::childEvent(event);
}

bool QGeoAreaMonitorSource_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QGeoAreaMonitorSource_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGeoAreaMonitorSource*>(self)->QGeoAreaMonitorSource::customEvent(event);
}

bool QGeoAreaMonitorSource_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QGeoAreaMonitorSource_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGeoAreaMonitorSource*>(self)->QGeoAreaMonitorSource::connectNotify(*signal);
}

bool QGeoAreaMonitorSource_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGeoAreaMonitorSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGeoAreaMonitorSource*>(self)->QGeoAreaMonitorSource::disconnectNotify(*signal);
}

QObject* QGeoAreaMonitorSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGeoAreaMonitorSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGeoAreaMonitorSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGeoAreaMonitorSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGeoAreaMonitorSource* self_cast = dynamic_cast<MiqtVirtualQGeoAreaMonitorSource*>( (QGeoAreaMonitorSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGeoAreaMonitorSource_delete(QGeoAreaMonitorSource* self) {
	delete self;
}

