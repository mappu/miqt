#include <QByteArray>
#include <QDnsDomainNameRecord>
#include <QDnsHostAddressRecord>
#include <QDnsLookup>
#include <QDnsMailExchangeRecord>
#include <QDnsServiceRecord>
#include <QDnsTextRecord>
#include <QHostAddress>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qdnslookup.h>
#include "gen_qdnslookup.h"
#include "_cgo_export.h"

QDnsDomainNameRecord* QDnsDomainNameRecord_new() {
	return new QDnsDomainNameRecord();
}

QDnsDomainNameRecord* QDnsDomainNameRecord_new2(QDnsDomainNameRecord* other) {
	return new QDnsDomainNameRecord(*other);
}

void QDnsDomainNameRecord_OperatorAssign(QDnsDomainNameRecord* self, QDnsDomainNameRecord* other) {
	self->operator=(*other);
}

void QDnsDomainNameRecord_Swap(QDnsDomainNameRecord* self, QDnsDomainNameRecord* other) {
	self->swap(*other);
}

struct miqt_string QDnsDomainNameRecord_Name(const QDnsDomainNameRecord* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QDnsDomainNameRecord_TimeToLive(const QDnsDomainNameRecord* self) {
	quint32 _ret = self->timeToLive();
	return static_cast<unsigned int>(_ret);
}

struct miqt_string QDnsDomainNameRecord_Value(const QDnsDomainNameRecord* self) {
	QString _ret = self->value();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDnsDomainNameRecord_Delete(QDnsDomainNameRecord* self) {
	delete self;
}

QDnsHostAddressRecord* QDnsHostAddressRecord_new() {
	return new QDnsHostAddressRecord();
}

QDnsHostAddressRecord* QDnsHostAddressRecord_new2(QDnsHostAddressRecord* other) {
	return new QDnsHostAddressRecord(*other);
}

void QDnsHostAddressRecord_OperatorAssign(QDnsHostAddressRecord* self, QDnsHostAddressRecord* other) {
	self->operator=(*other);
}

void QDnsHostAddressRecord_Swap(QDnsHostAddressRecord* self, QDnsHostAddressRecord* other) {
	self->swap(*other);
}

struct miqt_string QDnsHostAddressRecord_Name(const QDnsHostAddressRecord* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QDnsHostAddressRecord_TimeToLive(const QDnsHostAddressRecord* self) {
	quint32 _ret = self->timeToLive();
	return static_cast<unsigned int>(_ret);
}

QHostAddress* QDnsHostAddressRecord_Value(const QDnsHostAddressRecord* self) {
	return new QHostAddress(self->value());
}

void QDnsHostAddressRecord_Delete(QDnsHostAddressRecord* self) {
	delete self;
}

QDnsMailExchangeRecord* QDnsMailExchangeRecord_new() {
	return new QDnsMailExchangeRecord();
}

QDnsMailExchangeRecord* QDnsMailExchangeRecord_new2(QDnsMailExchangeRecord* other) {
	return new QDnsMailExchangeRecord(*other);
}

void QDnsMailExchangeRecord_OperatorAssign(QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other) {
	self->operator=(*other);
}

void QDnsMailExchangeRecord_Swap(QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other) {
	self->swap(*other);
}

struct miqt_string QDnsMailExchangeRecord_Exchange(const QDnsMailExchangeRecord* self) {
	QString _ret = self->exchange();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDnsMailExchangeRecord_Name(const QDnsMailExchangeRecord* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

uint16_t QDnsMailExchangeRecord_Preference(const QDnsMailExchangeRecord* self) {
	quint16 _ret = self->preference();
	return static_cast<uint16_t>(_ret);
}

unsigned int QDnsMailExchangeRecord_TimeToLive(const QDnsMailExchangeRecord* self) {
	quint32 _ret = self->timeToLive();
	return static_cast<unsigned int>(_ret);
}

void QDnsMailExchangeRecord_Delete(QDnsMailExchangeRecord* self) {
	delete self;
}

QDnsServiceRecord* QDnsServiceRecord_new() {
	return new QDnsServiceRecord();
}

QDnsServiceRecord* QDnsServiceRecord_new2(QDnsServiceRecord* other) {
	return new QDnsServiceRecord(*other);
}

void QDnsServiceRecord_OperatorAssign(QDnsServiceRecord* self, QDnsServiceRecord* other) {
	self->operator=(*other);
}

void QDnsServiceRecord_Swap(QDnsServiceRecord* self, QDnsServiceRecord* other) {
	self->swap(*other);
}

struct miqt_string QDnsServiceRecord_Name(const QDnsServiceRecord* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

uint16_t QDnsServiceRecord_Port(const QDnsServiceRecord* self) {
	quint16 _ret = self->port();
	return static_cast<uint16_t>(_ret);
}

uint16_t QDnsServiceRecord_Priority(const QDnsServiceRecord* self) {
	quint16 _ret = self->priority();
	return static_cast<uint16_t>(_ret);
}

struct miqt_string QDnsServiceRecord_Target(const QDnsServiceRecord* self) {
	QString _ret = self->target();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QDnsServiceRecord_TimeToLive(const QDnsServiceRecord* self) {
	quint32 _ret = self->timeToLive();
	return static_cast<unsigned int>(_ret);
}

uint16_t QDnsServiceRecord_Weight(const QDnsServiceRecord* self) {
	quint16 _ret = self->weight();
	return static_cast<uint16_t>(_ret);
}

void QDnsServiceRecord_Delete(QDnsServiceRecord* self) {
	delete self;
}

QDnsTextRecord* QDnsTextRecord_new() {
	return new QDnsTextRecord();
}

QDnsTextRecord* QDnsTextRecord_new2(QDnsTextRecord* other) {
	return new QDnsTextRecord(*other);
}

void QDnsTextRecord_OperatorAssign(QDnsTextRecord* self, QDnsTextRecord* other) {
	self->operator=(*other);
}

void QDnsTextRecord_Swap(QDnsTextRecord* self, QDnsTextRecord* other) {
	self->swap(*other);
}

struct miqt_string QDnsTextRecord_Name(const QDnsTextRecord* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QDnsTextRecord_TimeToLive(const QDnsTextRecord* self) {
	quint32 _ret = self->timeToLive();
	return static_cast<unsigned int>(_ret);
}

struct miqt_array /* of struct miqt_string */  QDnsTextRecord_Values(const QDnsTextRecord* self) {
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

void QDnsTextRecord_Delete(QDnsTextRecord* self) {
	delete self;
}

QDnsLookup* QDnsLookup_new() {
	return new QDnsLookup();
}

QDnsLookup* QDnsLookup_new2(int typeVal, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString);
}

QDnsLookup* QDnsLookup_new3(int typeVal, struct miqt_string name, QHostAddress* nameserver) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString, *nameserver);
}

QDnsLookup* QDnsLookup_new4(QObject* parent) {
	return new QDnsLookup(parent);
}

QDnsLookup* QDnsLookup_new5(int typeVal, struct miqt_string name, QObject* parent) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString, parent);
}

QDnsLookup* QDnsLookup_new6(int typeVal, struct miqt_string name, QHostAddress* nameserver, QObject* parent) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString, *nameserver, parent);
}

QMetaObject* QDnsLookup_MetaObject(const QDnsLookup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDnsLookup_Metacast(QDnsLookup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDnsLookup_Tr(const char* s) {
	QString _ret = QDnsLookup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDnsLookup_Error(const QDnsLookup* self) {
	QDnsLookup::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QDnsLookup_ErrorString(const QDnsLookup* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDnsLookup_IsFinished(const QDnsLookup* self) {
	return self->isFinished();
}

struct miqt_string QDnsLookup_Name(const QDnsLookup* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDnsLookup_SetName(QDnsLookup* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

int QDnsLookup_Type(const QDnsLookup* self) {
	QDnsLookup::Type _ret = self->type();
	return static_cast<int>(_ret);
}

void QDnsLookup_SetType(QDnsLookup* self, int typeVal) {
	self->setType(static_cast<QDnsLookup::Type>(typeVal));
}

QHostAddress* QDnsLookup_Nameserver(const QDnsLookup* self) {
	return new QHostAddress(self->nameserver());
}

void QDnsLookup_SetNameserver(QDnsLookup* self, QHostAddress* nameserver) {
	self->setNameserver(*nameserver);
}

struct miqt_array /* of QDnsDomainNameRecord* */  QDnsLookup_CanonicalNameRecords(const QDnsLookup* self) {
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

struct miqt_array /* of QDnsHostAddressRecord* */  QDnsLookup_HostAddressRecords(const QDnsLookup* self) {
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

struct miqt_array /* of QDnsMailExchangeRecord* */  QDnsLookup_MailExchangeRecords(const QDnsLookup* self) {
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

struct miqt_array /* of QDnsDomainNameRecord* */  QDnsLookup_NameServerRecords(const QDnsLookup* self) {
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

struct miqt_array /* of QDnsDomainNameRecord* */  QDnsLookup_PointerRecords(const QDnsLookup* self) {
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

struct miqt_array /* of QDnsServiceRecord* */  QDnsLookup_ServiceRecords(const QDnsLookup* self) {
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

struct miqt_array /* of QDnsTextRecord* */  QDnsLookup_TextRecords(const QDnsLookup* self) {
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

void QDnsLookup_Abort(QDnsLookup* self) {
	self->abort();
}

void QDnsLookup_Lookup(QDnsLookup* self) {
	self->lookup();
}

void QDnsLookup_Finished(QDnsLookup* self) {
	self->finished();
}

void QDnsLookup_connect_Finished(QDnsLookup* self, intptr_t slot) {
	QDnsLookup::connect(self, static_cast<void (QDnsLookup::*)()>(&QDnsLookup::finished), self, [=]() {
		miqt_exec_callback_QDnsLookup_Finished(slot);
	});
}

void QDnsLookup_NameChanged(QDnsLookup* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->nameChanged(name_QString);
}

void QDnsLookup_connect_NameChanged(QDnsLookup* self, intptr_t slot) {
	QDnsLookup::connect(self, static_cast<void (QDnsLookup::*)(const QString&)>(&QDnsLookup::nameChanged), self, [=](const QString& name) {
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		miqt_exec_callback_QDnsLookup_NameChanged(slot, sigval1);
	});
}

void QDnsLookup_TypeChanged(QDnsLookup* self, int typeVal) {
	self->typeChanged(static_cast<QDnsLookup::Type>(typeVal));
}

void QDnsLookup_connect_TypeChanged(QDnsLookup* self, intptr_t slot) {
	QDnsLookup::connect(self, static_cast<void (QDnsLookup::*)(QDnsLookup::Type)>(&QDnsLookup::typeChanged), self, [=](QDnsLookup::Type typeVal) {
		QDnsLookup::Type typeVal_ret = typeVal;
		int sigval1 = static_cast<int>(typeVal_ret);
		miqt_exec_callback_QDnsLookup_TypeChanged(slot, sigval1);
	});
}

void QDnsLookup_NameserverChanged(QDnsLookup* self, QHostAddress* nameserver) {
	self->nameserverChanged(*nameserver);
}

void QDnsLookup_connect_NameserverChanged(QDnsLookup* self, intptr_t slot) {
	QDnsLookup::connect(self, static_cast<void (QDnsLookup::*)(const QHostAddress&)>(&QDnsLookup::nameserverChanged), self, [=](const QHostAddress& nameserver) {
		const QHostAddress& nameserver_ret = nameserver;
		// Cast returned reference into pointer
		QHostAddress* sigval1 = const_cast<QHostAddress*>(&nameserver_ret);
		miqt_exec_callback_QDnsLookup_NameserverChanged(slot, sigval1);
	});
}

struct miqt_string QDnsLookup_Tr2(const char* s, const char* c) {
	QString _ret = QDnsLookup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDnsLookup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDnsLookup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDnsLookup_Delete(QDnsLookup* self) {
	delete self;
}

