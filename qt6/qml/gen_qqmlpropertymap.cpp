#include <QChildEvent>
#include <QEvent>
#include <QHash>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlPropertyMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qqmlpropertymap.h>
#include "gen_qqmlpropertymap.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QQmlPropertyMap_valueChanged(intptr_t, struct miqt_string, QVariant*);
QVariant* miqt_exec_callback_QQmlPropertyMap_updateValue(QQmlPropertyMap*, intptr_t, struct miqt_string, QVariant*);
bool miqt_exec_callback_QQmlPropertyMap_event(QQmlPropertyMap*, intptr_t, QEvent*);
bool miqt_exec_callback_QQmlPropertyMap_eventFilter(QQmlPropertyMap*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QQmlPropertyMap_timerEvent(QQmlPropertyMap*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QQmlPropertyMap_childEvent(QQmlPropertyMap*, intptr_t, QChildEvent*);
void miqt_exec_callback_QQmlPropertyMap_customEvent(QQmlPropertyMap*, intptr_t, QEvent*);
void miqt_exec_callback_QQmlPropertyMap_connectNotify(QQmlPropertyMap*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QQmlPropertyMap_disconnectNotify(QQmlPropertyMap*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQQmlPropertyMap final : public QQmlPropertyMap {
public:

	MiqtVirtualQQmlPropertyMap(): QQmlPropertyMap() {}
	MiqtVirtualQQmlPropertyMap(QObject* parent): QQmlPropertyMap(parent) {}

	virtual ~MiqtVirtualQQmlPropertyMap() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateValue = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant updateValue(const QString& key, const QVariant& input) override {
		if (handle__updateValue == 0) {
			return QQmlPropertyMap::updateValue(key, input);
		}

		const QString key_ret = key;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray key_b = key_ret.toUtf8();
		struct miqt_string key_ms;
		key_ms.len = key_b.length();
		key_ms.data = static_cast<char*>(malloc(key_ms.len));
		memcpy(key_ms.data, key_b.data(), key_ms.len);
		struct miqt_string sigval1 = key_ms;
		const QVariant& input_ret = input;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&input_ret);
		QVariant* callback_return_value = miqt_exec_callback_QQmlPropertyMap_updateValue(this, handle__updateValue, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QQmlPropertyMap_virtualbase_updateValue(void* self, struct miqt_string key, QVariant* input);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QQmlPropertyMap::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QQmlPropertyMap_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QQmlPropertyMap_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QQmlPropertyMap::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QQmlPropertyMap_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QQmlPropertyMap_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QQmlPropertyMap::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QQmlPropertyMap_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QQmlPropertyMap_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QQmlPropertyMap::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QQmlPropertyMap_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QQmlPropertyMap_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QQmlPropertyMap::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QQmlPropertyMap_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QQmlPropertyMap_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QQmlPropertyMap::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QQmlPropertyMap_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QQmlPropertyMap_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QQmlPropertyMap::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QQmlPropertyMap_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QQmlPropertyMap_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QQmlPropertyMap_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlPropertyMap_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlPropertyMap_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QQmlPropertyMap_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QQmlPropertyMap* QQmlPropertyMap_new() {
	return new (std::nothrow) MiqtVirtualQQmlPropertyMap();
}

QQmlPropertyMap* QQmlPropertyMap_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQQmlPropertyMap(parent);
}

void QQmlPropertyMap_virtbase(QQmlPropertyMap* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QQmlPropertyMap_metaObject(const QQmlPropertyMap* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlPropertyMap_metacast(QQmlPropertyMap* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QQmlPropertyMap_tr(const char* s) {
	QString _ret = QQmlPropertyMap::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QQmlPropertyMap_value(const QQmlPropertyMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(self->value(key_QString));
}

void QQmlPropertyMap_insert(QQmlPropertyMap* self, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->insert(key_QString, *value);
}

void QQmlPropertyMap_insertWithValues(QQmlPropertyMap* self, struct miqt_map /* of struct miqt_string to QVariant* */  values) {
	QVariantHash values_QMap;
	values_QMap.reserve(values.len);
	struct miqt_string* values_karr = static_cast<struct miqt_string*>(values.keys);
	QVariant** values_varr = static_cast<QVariant**>(values.values);
	for(size_t i = 0; i < values.len; ++i) {
		QString values_karr_i_QString = QString::fromUtf8(values_karr[i].data, values_karr[i].len);
		values_QMap[values_karr_i_QString] = *(values_varr[i]);
	}
	self->insert(values_QMap);
}

void QQmlPropertyMap_clear(QQmlPropertyMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->clear(key_QString);
}

void QQmlPropertyMap_freeze(QQmlPropertyMap* self) {
	self->freeze();
}

struct miqt_array /* of struct miqt_string */  QQmlPropertyMap_keys(const QQmlPropertyMap* self) {
	QStringList _ret = self->keys();
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

int QQmlPropertyMap_count(const QQmlPropertyMap* self) {
	return self->count();
}

int QQmlPropertyMap_size(const QQmlPropertyMap* self) {
	return self->size();
}

bool QQmlPropertyMap_isEmpty(const QQmlPropertyMap* self) {
	return self->isEmpty();
}

bool QQmlPropertyMap_contains(const QQmlPropertyMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->contains(key_QString);
}

QVariant* QQmlPropertyMap_operatorSubscript(QQmlPropertyMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QVariant& _ret = self->operator[](key_QString);
	// Cast returned reference into pointer
	return &_ret;
}

QVariant* QQmlPropertyMap_operatorSubscriptWithKey(const QQmlPropertyMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(self->operator[](key_QString));
}

void QQmlPropertyMap_valueChanged(QQmlPropertyMap* self, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->valueChanged(key_QString, *value);
}

void QQmlPropertyMap_connect_valueChanged(QQmlPropertyMap* self, intptr_t slot) {
	QQmlPropertyMap::connect(self, static_cast<void (QQmlPropertyMap::*)(const QString&, const QVariant&)>(&QQmlPropertyMap::valueChanged), self, [=](const QString& key, const QVariant& value) {
		const QString key_ret = key;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray key_b = key_ret.toUtf8();
		struct miqt_string key_ms;
		key_ms.len = key_b.length();
		key_ms.data = static_cast<char*>(malloc(key_ms.len));
		memcpy(key_ms.data, key_b.data(), key_ms.len);
		struct miqt_string sigval1 = key_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QQmlPropertyMap_valueChanged(slot, sigval1, sigval2);
	});
}

struct miqt_string QQmlPropertyMap_tr2(const char* s, const char* c) {
	QString _ret = QQmlPropertyMap::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlPropertyMap_tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlPropertyMap::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QQmlPropertyMap_override_virtual_updateValue(void* self, intptr_t slot) {
	MiqtVirtualQQmlPropertyMap* self_cast = dynamic_cast<MiqtVirtualQQmlPropertyMap*>( (QQmlPropertyMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateValue = slot;
	return true;
}

QVariant* QQmlPropertyMap_virtualbase_updateValue(void* self, struct miqt_string key, QVariant* input) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(static_cast<MiqtVirtualQQmlPropertyMap*>(self)->QQmlPropertyMap::updateValue(key_QString, *input));
}

bool QQmlPropertyMap_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQQmlPropertyMap* self_cast = dynamic_cast<MiqtVirtualQQmlPropertyMap*>( (QQmlPropertyMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QQmlPropertyMap_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQQmlPropertyMap*>(self)->QQmlPropertyMap::event(event);
}

bool QQmlPropertyMap_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQQmlPropertyMap* self_cast = dynamic_cast<MiqtVirtualQQmlPropertyMap*>( (QQmlPropertyMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QQmlPropertyMap_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQQmlPropertyMap*>(self)->QQmlPropertyMap::eventFilter(watched, event);
}

bool QQmlPropertyMap_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlPropertyMap* self_cast = dynamic_cast<MiqtVirtualQQmlPropertyMap*>( (QQmlPropertyMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QQmlPropertyMap_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQQmlPropertyMap*>(self)->QQmlPropertyMap::timerEvent(event);
}

bool QQmlPropertyMap_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlPropertyMap* self_cast = dynamic_cast<MiqtVirtualQQmlPropertyMap*>( (QQmlPropertyMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QQmlPropertyMap_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQQmlPropertyMap*>(self)->QQmlPropertyMap::childEvent(event);
}

bool QQmlPropertyMap_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlPropertyMap* self_cast = dynamic_cast<MiqtVirtualQQmlPropertyMap*>( (QQmlPropertyMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QQmlPropertyMap_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQQmlPropertyMap*>(self)->QQmlPropertyMap::customEvent(event);
}

bool QQmlPropertyMap_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQQmlPropertyMap* self_cast = dynamic_cast<MiqtVirtualQQmlPropertyMap*>( (QQmlPropertyMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QQmlPropertyMap_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQQmlPropertyMap*>(self)->QQmlPropertyMap::connectNotify(*signal);
}

bool QQmlPropertyMap_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQQmlPropertyMap* self_cast = dynamic_cast<MiqtVirtualQQmlPropertyMap*>( (QQmlPropertyMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QQmlPropertyMap_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQQmlPropertyMap*>(self)->QQmlPropertyMap::disconnectNotify(*signal);
}

QObject* QQmlPropertyMap_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlPropertyMap* self_cast = dynamic_cast<MiqtVirtualQQmlPropertyMap*>( (QQmlPropertyMap*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QQmlPropertyMap_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlPropertyMap* self_cast = dynamic_cast<MiqtVirtualQQmlPropertyMap*>( (QQmlPropertyMap*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QQmlPropertyMap_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQQmlPropertyMap* self_cast = dynamic_cast<MiqtVirtualQQmlPropertyMap*>( (QQmlPropertyMap*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QQmlPropertyMap_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQQmlPropertyMap* self_cast = dynamic_cast<MiqtVirtualQQmlPropertyMap*>( (QQmlPropertyMap*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QQmlPropertyMap_delete(QQmlPropertyMap* self) {
	delete self;
}

