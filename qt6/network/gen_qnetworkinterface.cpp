#include <QDeadlineTimer>
#include <QHostAddress>
#include <QList>
#include <QNetworkAddressEntry>
#include <QNetworkInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qnetworkinterface.h>
#include "gen_qnetworkinterface.h"
#include "_cgo_export.h"

QNetworkAddressEntry* QNetworkAddressEntry_new() {
	return new QNetworkAddressEntry();
}

QNetworkAddressEntry* QNetworkAddressEntry_new2(QNetworkAddressEntry* other) {
	return new QNetworkAddressEntry(*other);
}

void QNetworkAddressEntry_OperatorAssign(QNetworkAddressEntry* self, QNetworkAddressEntry* other) {
	self->operator=(*other);
}

void QNetworkAddressEntry_Swap(QNetworkAddressEntry* self, QNetworkAddressEntry* other) {
	self->swap(*other);
}

bool QNetworkAddressEntry_OperatorEqual(const QNetworkAddressEntry* self, QNetworkAddressEntry* other) {
	return self->operator==(*other);
}

bool QNetworkAddressEntry_OperatorNotEqual(const QNetworkAddressEntry* self, QNetworkAddressEntry* other) {
	return self->operator!=(*other);
}

int8_t QNetworkAddressEntry_DnsEligibility(const QNetworkAddressEntry* self) {
	QNetworkAddressEntry::DnsEligibilityStatus _ret = self->dnsEligibility();
	return static_cast<int8_t>(_ret);
}

void QNetworkAddressEntry_SetDnsEligibility(QNetworkAddressEntry* self, int8_t status) {
	self->setDnsEligibility(static_cast<QNetworkAddressEntry::DnsEligibilityStatus>(status));
}

QHostAddress* QNetworkAddressEntry_Ip(const QNetworkAddressEntry* self) {
	return new QHostAddress(self->ip());
}

void QNetworkAddressEntry_SetIp(QNetworkAddressEntry* self, QHostAddress* newIp) {
	self->setIp(*newIp);
}

QHostAddress* QNetworkAddressEntry_Netmask(const QNetworkAddressEntry* self) {
	return new QHostAddress(self->netmask());
}

void QNetworkAddressEntry_SetNetmask(QNetworkAddressEntry* self, QHostAddress* newNetmask) {
	self->setNetmask(*newNetmask);
}

int QNetworkAddressEntry_PrefixLength(const QNetworkAddressEntry* self) {
	return self->prefixLength();
}

void QNetworkAddressEntry_SetPrefixLength(QNetworkAddressEntry* self, int length) {
	self->setPrefixLength(static_cast<int>(length));
}

QHostAddress* QNetworkAddressEntry_Broadcast(const QNetworkAddressEntry* self) {
	return new QHostAddress(self->broadcast());
}

void QNetworkAddressEntry_SetBroadcast(QNetworkAddressEntry* self, QHostAddress* newBroadcast) {
	self->setBroadcast(*newBroadcast);
}

bool QNetworkAddressEntry_IsLifetimeKnown(const QNetworkAddressEntry* self) {
	return self->isLifetimeKnown();
}

QDeadlineTimer* QNetworkAddressEntry_PreferredLifetime(const QNetworkAddressEntry* self) {
	return new QDeadlineTimer(self->preferredLifetime());
}

QDeadlineTimer* QNetworkAddressEntry_ValidityLifetime(const QNetworkAddressEntry* self) {
	return new QDeadlineTimer(self->validityLifetime());
}

void QNetworkAddressEntry_SetAddressLifetime(QNetworkAddressEntry* self, QDeadlineTimer* preferred, QDeadlineTimer* validity) {
	self->setAddressLifetime(*preferred, *validity);
}

void QNetworkAddressEntry_ClearAddressLifetime(QNetworkAddressEntry* self) {
	self->clearAddressLifetime();
}

bool QNetworkAddressEntry_IsPermanent(const QNetworkAddressEntry* self) {
	return self->isPermanent();
}

bool QNetworkAddressEntry_IsTemporary(const QNetworkAddressEntry* self) {
	return self->isTemporary();
}

void QNetworkAddressEntry_Delete(QNetworkAddressEntry* self) {
	delete self;
}

QNetworkInterface* QNetworkInterface_new() {
	return new QNetworkInterface();
}

QNetworkInterface* QNetworkInterface_new2(QNetworkInterface* other) {
	return new QNetworkInterface(*other);
}

void QNetworkInterface_OperatorAssign(QNetworkInterface* self, QNetworkInterface* other) {
	self->operator=(*other);
}

void QNetworkInterface_Swap(QNetworkInterface* self, QNetworkInterface* other) {
	self->swap(*other);
}

bool QNetworkInterface_IsValid(const QNetworkInterface* self) {
	return self->isValid();
}

int QNetworkInterface_Index(const QNetworkInterface* self) {
	return self->index();
}

int QNetworkInterface_MaximumTransmissionUnit(const QNetworkInterface* self) {
	return self->maximumTransmissionUnit();
}

struct miqt_string QNetworkInterface_Name(const QNetworkInterface* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkInterface_HumanReadableName(const QNetworkInterface* self) {
	QString _ret = self->humanReadableName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QNetworkInterface_Flags(const QNetworkInterface* self) {
	QNetworkInterface::InterfaceFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

int QNetworkInterface_Type(const QNetworkInterface* self) {
	QNetworkInterface::InterfaceType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QNetworkInterface_HardwareAddress(const QNetworkInterface* self) {
	QString _ret = self->hardwareAddress();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array QNetworkInterface_AddressEntries(const QNetworkInterface* self) {
	QList<QNetworkAddressEntry> _ret = self->addressEntries();
	// Convert QList<> from C++ memory to manually-managed C memory
	QNetworkAddressEntry** _arr = static_cast<QNetworkAddressEntry**>(malloc(sizeof(QNetworkAddressEntry*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QNetworkAddressEntry(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QNetworkInterface_InterfaceIndexFromName(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return QNetworkInterface::interfaceIndexFromName(name_QString);
}

QNetworkInterface* QNetworkInterface_InterfaceFromName(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QNetworkInterface(QNetworkInterface::interfaceFromName(name_QString));
}

QNetworkInterface* QNetworkInterface_InterfaceFromIndex(int index) {
	return new QNetworkInterface(QNetworkInterface::interfaceFromIndex(static_cast<int>(index)));
}

struct miqt_string QNetworkInterface_InterfaceNameFromIndex(int index) {
	QString _ret = QNetworkInterface::interfaceNameFromIndex(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array QNetworkInterface_AllInterfaces() {
	QList<QNetworkInterface> _ret = QNetworkInterface::allInterfaces();
	// Convert QList<> from C++ memory to manually-managed C memory
	QNetworkInterface** _arr = static_cast<QNetworkInterface**>(malloc(sizeof(QNetworkInterface*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QNetworkInterface(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QNetworkInterface_AllAddresses() {
	QList<QHostAddress> _ret = QNetworkInterface::allAddresses();
	// Convert QList<> from C++ memory to manually-managed C memory
	QHostAddress** _arr = static_cast<QHostAddress**>(malloc(sizeof(QHostAddress*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QHostAddress(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QNetworkInterface_Delete(QNetworkInterface* self) {
	delete self;
}

