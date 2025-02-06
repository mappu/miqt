#include <QByteArray>
#include <QChildEvent>
#include <QDnsDomainNameRecord>
#include <QDnsHostAddressRecord>
#include <QDnsLookup>
#include <QDnsMailExchangeRecord>
#include <QDnsServiceRecord>
#include <QDnsTextRecord>
#include <QEvent>
#include <QHostAddress>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qdnslookup.h>
#include "gen_qdnslookup.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDnsLookup_finished(intptr_t);
void miqt_exec_callback_QDnsLookup_nameChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QDnsLookup_typeChanged(intptr_t, int);
void miqt_exec_callback_QDnsLookup_nameserverChanged(intptr_t, QHostAddress*);
bool miqt_exec_callback_QDnsLookup_event(QDnsLookup*, intptr_t, QEvent*);
bool miqt_exec_callback_QDnsLookup_eventFilter(QDnsLookup*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDnsLookup_timerEvent(QDnsLookup*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDnsLookup_childEvent(QDnsLookup*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDnsLookup_customEvent(QDnsLookup*, intptr_t, QEvent*);
void miqt_exec_callback_QDnsLookup_connectNotify(QDnsLookup*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDnsLookup_disconnectNotify(QDnsLookup*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QDnsDomainNameRecord* QDnsDomainNameRecord_new() {
	return new QDnsDomainNameRecord();
}

QDnsDomainNameRecord* QDnsDomainNameRecord_new2(QDnsDomainNameRecord* other) {
	return new QDnsDomainNameRecord(*other);
}

void QDnsDomainNameRecord_operatorAssign(QDnsDomainNameRecord* self, QDnsDomainNameRecord* other) {
	self->operator=(*other);
}

void QDnsDomainNameRecord_swap(QDnsDomainNameRecord* self, QDnsDomainNameRecord* other) {
	self->swap(*other);
}

struct miqt_string QDnsDomainNameRecord_name(const QDnsDomainNameRecord* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QDnsDomainNameRecord_timeToLive(const QDnsDomainNameRecord* self) {
	quint32 _ret = self->timeToLive();
	return static_cast<unsigned int>(_ret);
}

struct miqt_string QDnsDomainNameRecord_value(const QDnsDomainNameRecord* self) {
	QString _ret = self->value();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDnsDomainNameRecord_delete(QDnsDomainNameRecord* self) {
	delete self;
}

QDnsHostAddressRecord* QDnsHostAddressRecord_new() {
	return new QDnsHostAddressRecord();
}

QDnsHostAddressRecord* QDnsHostAddressRecord_new2(QDnsHostAddressRecord* other) {
	return new QDnsHostAddressRecord(*other);
}

void QDnsHostAddressRecord_operatorAssign(QDnsHostAddressRecord* self, QDnsHostAddressRecord* other) {
	self->operator=(*other);
}

void QDnsHostAddressRecord_swap(QDnsHostAddressRecord* self, QDnsHostAddressRecord* other) {
	self->swap(*other);
}

struct miqt_string QDnsHostAddressRecord_name(const QDnsHostAddressRecord* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QDnsHostAddressRecord_timeToLive(const QDnsHostAddressRecord* self) {
	quint32 _ret = self->timeToLive();
	return static_cast<unsigned int>(_ret);
}

QHostAddress* QDnsHostAddressRecord_value(const QDnsHostAddressRecord* self) {
	return new QHostAddress(self->value());
}

void QDnsHostAddressRecord_delete(QDnsHostAddressRecord* self) {
	delete self;
}

QDnsMailExchangeRecord* QDnsMailExchangeRecord_new() {
	return new QDnsMailExchangeRecord();
}

QDnsMailExchangeRecord* QDnsMailExchangeRecord_new2(QDnsMailExchangeRecord* other) {
	return new QDnsMailExchangeRecord(*other);
}

void QDnsMailExchangeRecord_operatorAssign(QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other) {
	self->operator=(*other);
}

void QDnsMailExchangeRecord_swap(QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other) {
	self->swap(*other);
}

struct miqt_string QDnsMailExchangeRecord_exchange(const QDnsMailExchangeRecord* self) {
	QString _ret = self->exchange();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDnsMailExchangeRecord_name(const QDnsMailExchangeRecord* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

uint16_t QDnsMailExchangeRecord_preference(const QDnsMailExchangeRecord* self) {
	quint16 _ret = self->preference();
	return static_cast<uint16_t>(_ret);
}

unsigned int QDnsMailExchangeRecord_timeToLive(const QDnsMailExchangeRecord* self) {
	quint32 _ret = self->timeToLive();
	return static_cast<unsigned int>(_ret);
}

void QDnsMailExchangeRecord_delete(QDnsMailExchangeRecord* self) {
	delete self;
}

QDnsServiceRecord* QDnsServiceRecord_new() {
	return new QDnsServiceRecord();
}

QDnsServiceRecord* QDnsServiceRecord_new2(QDnsServiceRecord* other) {
	return new QDnsServiceRecord(*other);
}

void QDnsServiceRecord_operatorAssign(QDnsServiceRecord* self, QDnsServiceRecord* other) {
	self->operator=(*other);
}

void QDnsServiceRecord_swap(QDnsServiceRecord* self, QDnsServiceRecord* other) {
	self->swap(*other);
}

struct miqt_string QDnsServiceRecord_name(const QDnsServiceRecord* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

uint16_t QDnsServiceRecord_port(const QDnsServiceRecord* self) {
	quint16 _ret = self->port();
	return static_cast<uint16_t>(_ret);
}

uint16_t QDnsServiceRecord_priority(const QDnsServiceRecord* self) {
	quint16 _ret = self->priority();
	return static_cast<uint16_t>(_ret);
}

struct miqt_string QDnsServiceRecord_target(const QDnsServiceRecord* self) {
	QString _ret = self->target();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QDnsServiceRecord_timeToLive(const QDnsServiceRecord* self) {
	quint32 _ret = self->timeToLive();
	return static_cast<unsigned int>(_ret);
}

uint16_t QDnsServiceRecord_weight(const QDnsServiceRecord* self) {
	quint16 _ret = self->weight();
	return static_cast<uint16_t>(_ret);
}

void QDnsServiceRecord_delete(QDnsServiceRecord* self) {
	delete self;
}

QDnsTextRecord* QDnsTextRecord_new() {
	return new QDnsTextRecord();
}

QDnsTextRecord* QDnsTextRecord_new2(QDnsTextRecord* other) {
	return new QDnsTextRecord(*other);
}

void QDnsTextRecord_operatorAssign(QDnsTextRecord* self, QDnsTextRecord* other) {
	self->operator=(*other);
}

void QDnsTextRecord_swap(QDnsTextRecord* self, QDnsTextRecord* other) {
	self->swap(*other);
}

struct miqt_string QDnsTextRecord_name(const QDnsTextRecord* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QDnsTextRecord_timeToLive(const QDnsTextRecord* self) {
	quint32 _ret = self->timeToLive();
	return static_cast<unsigned int>(_ret);
}

struct miqt_array /* of struct miqt_string */  QDnsTextRecord_values(const QDnsTextRecord* self) {
	QList<QByteArray> _ret = self->values();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDnsTextRecord_delete(QDnsTextRecord* self) {
	delete self;
}

class MiqtVirtualQDnsLookup final : public QDnsLookup {
public:

	MiqtVirtualQDnsLookup(): QDnsLookup() {};
	MiqtVirtualQDnsLookup(QDnsLookup::Type type, const QString& name): QDnsLookup(type, name) {};
	MiqtVirtualQDnsLookup(QDnsLookup::Type type, const QString& name, const QHostAddress& nameserver): QDnsLookup(type, name, nameserver) {};
	MiqtVirtualQDnsLookup(QObject* parent): QDnsLookup(parent) {};
	MiqtVirtualQDnsLookup(QDnsLookup::Type type, const QString& name, QObject* parent): QDnsLookup(type, name, parent) {};
	MiqtVirtualQDnsLookup(QDnsLookup::Type type, const QString& name, const QHostAddress& nameserver, QObject* parent): QDnsLookup(type, name, nameserver, parent) {};

	virtual ~MiqtVirtualQDnsLookup() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDnsLookup::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDnsLookup_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QDnsLookup::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDnsLookup::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDnsLookup_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QDnsLookup::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDnsLookup::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDnsLookup_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QDnsLookup::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDnsLookup::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDnsLookup_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QDnsLookup::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDnsLookup::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDnsLookup_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QDnsLookup::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDnsLookup::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDnsLookup_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QDnsLookup::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDnsLookup::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDnsLookup_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QDnsLookup::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QDnsLookup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDnsLookup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDnsLookup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDnsLookup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDnsLookup* QDnsLookup_new() {
	return new MiqtVirtualQDnsLookup();
}

QDnsLookup* QDnsLookup_new2(int type, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new MiqtVirtualQDnsLookup(static_cast<QDnsLookup::Type>(type), name_QString);
}

QDnsLookup* QDnsLookup_new3(int type, struct miqt_string name, QHostAddress* nameserver) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new MiqtVirtualQDnsLookup(static_cast<QDnsLookup::Type>(type), name_QString, *nameserver);
}

QDnsLookup* QDnsLookup_new4(QObject* parent) {
	return new MiqtVirtualQDnsLookup(parent);
}

QDnsLookup* QDnsLookup_new5(int type, struct miqt_string name, QObject* parent) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new MiqtVirtualQDnsLookup(static_cast<QDnsLookup::Type>(type), name_QString, parent);
}

QDnsLookup* QDnsLookup_new6(int type, struct miqt_string name, QHostAddress* nameserver, QObject* parent) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new MiqtVirtualQDnsLookup(static_cast<QDnsLookup::Type>(type), name_QString, *nameserver, parent);
}

void QDnsLookup_virtbase(QDnsLookup* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDnsLookup_metaObject(const QDnsLookup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDnsLookup_metacast(QDnsLookup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDnsLookup_tr(const char* s) {
	QString _ret = QDnsLookup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDnsLookup_trUtf8(const char* s) {
	QString _ret = QDnsLookup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDnsLookup_error(const QDnsLookup* self) {
	QDnsLookup::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QDnsLookup_errorString(const QDnsLookup* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDnsLookup_isFinished(const QDnsLookup* self) {
	return self->isFinished();
}

struct miqt_string QDnsLookup_name(const QDnsLookup* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDnsLookup_setName(QDnsLookup* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

int QDnsLookup_type(const QDnsLookup* self) {
	QDnsLookup::Type _ret = self->type();
	return static_cast<int>(_ret);
}

void QDnsLookup_setType(QDnsLookup* self, int type) {
	self->setType(static_cast<QDnsLookup::Type>(type));
}

QHostAddress* QDnsLookup_nameserver(const QDnsLookup* self) {
	return new QHostAddress(self->nameserver());
}

void QDnsLookup_setNameserver(QDnsLookup* self, QHostAddress* nameserver) {
	self->setNameserver(*nameserver);
}

struct miqt_array /* of QDnsDomainNameRecord* */  QDnsLookup_canonicalNameRecords(const QDnsLookup* self) {
	QList<QDnsDomainNameRecord> _ret = self->canonicalNameRecords();
	// Convert QList<> from C++ memory to manually-managed C memory
	QDnsDomainNameRecord** _arr = static_cast<QDnsDomainNameRecord**>(malloc(sizeof(QDnsDomainNameRecord*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QDnsDomainNameRecord(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QDnsHostAddressRecord* */  QDnsLookup_hostAddressRecords(const QDnsLookup* self) {
	QList<QDnsHostAddressRecord> _ret = self->hostAddressRecords();
	// Convert QList<> from C++ memory to manually-managed C memory
	QDnsHostAddressRecord** _arr = static_cast<QDnsHostAddressRecord**>(malloc(sizeof(QDnsHostAddressRecord*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QDnsHostAddressRecord(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QDnsMailExchangeRecord* */  QDnsLookup_mailExchangeRecords(const QDnsLookup* self) {
	QList<QDnsMailExchangeRecord> _ret = self->mailExchangeRecords();
	// Convert QList<> from C++ memory to manually-managed C memory
	QDnsMailExchangeRecord** _arr = static_cast<QDnsMailExchangeRecord**>(malloc(sizeof(QDnsMailExchangeRecord*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QDnsMailExchangeRecord(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QDnsDomainNameRecord* */  QDnsLookup_nameServerRecords(const QDnsLookup* self) {
	QList<QDnsDomainNameRecord> _ret = self->nameServerRecords();
	// Convert QList<> from C++ memory to manually-managed C memory
	QDnsDomainNameRecord** _arr = static_cast<QDnsDomainNameRecord**>(malloc(sizeof(QDnsDomainNameRecord*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QDnsDomainNameRecord(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QDnsDomainNameRecord* */  QDnsLookup_pointerRecords(const QDnsLookup* self) {
	QList<QDnsDomainNameRecord> _ret = self->pointerRecords();
	// Convert QList<> from C++ memory to manually-managed C memory
	QDnsDomainNameRecord** _arr = static_cast<QDnsDomainNameRecord**>(malloc(sizeof(QDnsDomainNameRecord*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QDnsDomainNameRecord(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QDnsServiceRecord* */  QDnsLookup_serviceRecords(const QDnsLookup* self) {
	QList<QDnsServiceRecord> _ret = self->serviceRecords();
	// Convert QList<> from C++ memory to manually-managed C memory
	QDnsServiceRecord** _arr = static_cast<QDnsServiceRecord**>(malloc(sizeof(QDnsServiceRecord*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QDnsServiceRecord(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QDnsTextRecord* */  QDnsLookup_textRecords(const QDnsLookup* self) {
	QList<QDnsTextRecord> _ret = self->textRecords();
	// Convert QList<> from C++ memory to manually-managed C memory
	QDnsTextRecord** _arr = static_cast<QDnsTextRecord**>(malloc(sizeof(QDnsTextRecord*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QDnsTextRecord(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDnsLookup_abort(QDnsLookup* self) {
	self->abort();
}

void QDnsLookup_lookup(QDnsLookup* self) {
	self->lookup();
}

void QDnsLookup_finished(QDnsLookup* self) {
	self->finished();
}

void QDnsLookup_connect_finished(QDnsLookup* self, intptr_t slot) {
	MiqtVirtualQDnsLookup::connect(self, static_cast<void (QDnsLookup::*)()>(&QDnsLookup::finished), self, [=]() {
		miqt_exec_callback_QDnsLookup_finished(slot);
	});
}

void QDnsLookup_nameChanged(QDnsLookup* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->nameChanged(name_QString);
}

void QDnsLookup_connect_nameChanged(QDnsLookup* self, intptr_t slot) {
	MiqtVirtualQDnsLookup::connect(self, static_cast<void (QDnsLookup::*)(const QString&)>(&QDnsLookup::nameChanged), self, [=](const QString& name) {
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		miqt_exec_callback_QDnsLookup_nameChanged(slot, sigval1);
	});
}

void QDnsLookup_typeChanged(QDnsLookup* self, int type) {
	self->typeChanged(static_cast<QDnsLookup::Type>(type));
}

void QDnsLookup_connect_typeChanged(QDnsLookup* self, intptr_t slot) {
	MiqtVirtualQDnsLookup::connect(self, static_cast<void (QDnsLookup::*)(QDnsLookup::Type)>(&QDnsLookup::typeChanged), self, [=](QDnsLookup::Type type) {
		QDnsLookup::Type type_ret = type;
		int sigval1 = static_cast<int>(type_ret);
		miqt_exec_callback_QDnsLookup_typeChanged(slot, sigval1);
	});
}

void QDnsLookup_nameserverChanged(QDnsLookup* self, QHostAddress* nameserver) {
	self->nameserverChanged(*nameserver);
}

void QDnsLookup_connect_nameserverChanged(QDnsLookup* self, intptr_t slot) {
	MiqtVirtualQDnsLookup::connect(self, static_cast<void (QDnsLookup::*)(const QHostAddress&)>(&QDnsLookup::nameserverChanged), self, [=](const QHostAddress& nameserver) {
		const QHostAddress& nameserver_ret = nameserver;
		// Cast returned reference into pointer
		QHostAddress* sigval1 = const_cast<QHostAddress*>(&nameserver_ret);
		miqt_exec_callback_QDnsLookup_nameserverChanged(slot, sigval1);
	});
}

struct miqt_string QDnsLookup_tr2(const char* s, const char* c) {
	QString _ret = QDnsLookup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDnsLookup_tr3(const char* s, const char* c, int n) {
	QString _ret = QDnsLookup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDnsLookup_trUtf82(const char* s, const char* c) {
	QString _ret = QDnsLookup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDnsLookup_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDnsLookup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDnsLookup_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDnsLookup* self_cast = dynamic_cast<MiqtVirtualQDnsLookup*>( (QDnsLookup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QDnsLookup_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDnsLookup*)(self) )->virtualbase_event(event);
}

bool QDnsLookup_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDnsLookup* self_cast = dynamic_cast<MiqtVirtualQDnsLookup*>( (QDnsLookup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDnsLookup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDnsLookup*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QDnsLookup_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDnsLookup* self_cast = dynamic_cast<MiqtVirtualQDnsLookup*>( (QDnsLookup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QDnsLookup_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDnsLookup*)(self) )->virtualbase_timerEvent(event);
}

bool QDnsLookup_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDnsLookup* self_cast = dynamic_cast<MiqtVirtualQDnsLookup*>( (QDnsLookup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QDnsLookup_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDnsLookup*)(self) )->virtualbase_childEvent(event);
}

bool QDnsLookup_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDnsLookup* self_cast = dynamic_cast<MiqtVirtualQDnsLookup*>( (QDnsLookup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QDnsLookup_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDnsLookup*)(self) )->virtualbase_customEvent(event);
}

bool QDnsLookup_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDnsLookup* self_cast = dynamic_cast<MiqtVirtualQDnsLookup*>( (QDnsLookup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QDnsLookup_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDnsLookup*)(self) )->virtualbase_connectNotify(signal);
}

bool QDnsLookup_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDnsLookup* self_cast = dynamic_cast<MiqtVirtualQDnsLookup*>( (QDnsLookup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDnsLookup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDnsLookup*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QDnsLookup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDnsLookup* self_cast = dynamic_cast<MiqtVirtualQDnsLookup*>( (QDnsLookup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QDnsLookup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDnsLookup* self_cast = dynamic_cast<MiqtVirtualQDnsLookup*>( (QDnsLookup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QDnsLookup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDnsLookup* self_cast = dynamic_cast<MiqtVirtualQDnsLookup*>( (QDnsLookup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QDnsLookup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDnsLookup* self_cast = dynamic_cast<MiqtVirtualQDnsLookup*>( (QDnsLookup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QDnsLookup_delete(QDnsLookup* self) {
	delete self;
}

