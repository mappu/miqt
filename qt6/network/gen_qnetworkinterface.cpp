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

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QNetworkAddressEntry* QNetworkAddressEntry_new() {
	return new QNetworkAddressEntry();
}

QNetworkAddressEntry* QNetworkAddressEntry_new2(QNetworkAddressEntry* other) {
	return new QNetworkAddressEntry(*other);
}

void QNetworkAddressEntry_operatorAssign(QNetworkAddressEntry* self, QNetworkAddressEntry* other) {
	self->operator=(*other);
}

void QNetworkAddressEntry_swap(QNetworkAddressEntry* self, QNetworkAddressEntry* other) {
	self->swap(*other);
}

bool QNetworkAddressEntry_operatorEqual(const QNetworkAddressEntry* self, QNetworkAddressEntry* other) {
	return (*self == *other);
}

bool QNetworkAddressEntry_operatorNotEqual(const QNetworkAddressEntry* self, QNetworkAddressEntry* other) {
	return (*self != *other);
}

int8_t QNetworkAddressEntry_dnsEligibility(const QNetworkAddressEntry* self) {
	QNetworkAddressEntry::DnsEligibilityStatus _ret = self->dnsEligibility();
	return static_cast<int8_t>(_ret);
}

void QNetworkAddressEntry_setDnsEligibility(QNetworkAddressEntry* self, int8_t status) {
	self->setDnsEligibility(static_cast<QNetworkAddressEntry::DnsEligibilityStatus>(status));
}

QHostAddress* QNetworkAddressEntry_ip(const QNetworkAddressEntry* self) {
	return new QHostAddress(self->ip());
}

void QNetworkAddressEntry_setIp(QNetworkAddressEntry* self, QHostAddress* newIp) {
	self->setIp(*newIp);
}

QHostAddress* QNetworkAddressEntry_netmask(const QNetworkAddressEntry* self) {
	return new QHostAddress(self->netmask());
}

void QNetworkAddressEntry_setNetmask(QNetworkAddressEntry* self, QHostAddress* newNetmask) {
	self->setNetmask(*newNetmask);
}

int QNetworkAddressEntry_prefixLength(const QNetworkAddressEntry* self) {
	return self->prefixLength();
}

void QNetworkAddressEntry_setPrefixLength(QNetworkAddressEntry* self, int length) {
	self->setPrefixLength(static_cast<int>(length));
}

QHostAddress* QNetworkAddressEntry_broadcast(const QNetworkAddressEntry* self) {
	return new QHostAddress(self->broadcast());
}

void QNetworkAddressEntry_setBroadcast(QNetworkAddressEntry* self, QHostAddress* newBroadcast) {
	self->setBroadcast(*newBroadcast);
}

bool QNetworkAddressEntry_isLifetimeKnown(const QNetworkAddressEntry* self) {
	return self->isLifetimeKnown();
}

QDeadlineTimer* QNetworkAddressEntry_preferredLifetime(const QNetworkAddressEntry* self) {
	return new QDeadlineTimer(self->preferredLifetime());
}

QDeadlineTimer* QNetworkAddressEntry_validityLifetime(const QNetworkAddressEntry* self) {
	return new QDeadlineTimer(self->validityLifetime());
}

void QNetworkAddressEntry_setAddressLifetime(QNetworkAddressEntry* self, QDeadlineTimer* preferred, QDeadlineTimer* validity) {
	self->setAddressLifetime(*preferred, *validity);
}

void QNetworkAddressEntry_clearAddressLifetime(QNetworkAddressEntry* self) {
	self->clearAddressLifetime();
}

bool QNetworkAddressEntry_isPermanent(const QNetworkAddressEntry* self) {
	return self->isPermanent();
}

bool QNetworkAddressEntry_isTemporary(const QNetworkAddressEntry* self) {
	return self->isTemporary();
}

void QNetworkAddressEntry_delete(QNetworkAddressEntry* self) {
	delete self;
}

QNetworkInterface* QNetworkInterface_new() {
	return new QNetworkInterface();
}

QNetworkInterface* QNetworkInterface_new2(QNetworkInterface* other) {
	return new QNetworkInterface(*other);
}

void QNetworkInterface_operatorAssign(QNetworkInterface* self, QNetworkInterface* other) {
	self->operator=(*other);
}

void QNetworkInterface_swap(QNetworkInterface* self, QNetworkInterface* other) {
	self->swap(*other);
}

bool QNetworkInterface_isValid(const QNetworkInterface* self) {
	return self->isValid();
}

int QNetworkInterface_index(const QNetworkInterface* self) {
	return self->index();
}

int QNetworkInterface_maximumTransmissionUnit(const QNetworkInterface* self) {
	return self->maximumTransmissionUnit();
}

struct miqt_string QNetworkInterface_name(const QNetworkInterface* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkInterface_humanReadableName(const QNetworkInterface* self) {
	QString _ret = self->humanReadableName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QNetworkInterface_flags(const QNetworkInterface* self) {
	QNetworkInterface::InterfaceFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

int QNetworkInterface_type(const QNetworkInterface* self) {
	QNetworkInterface::InterfaceType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QNetworkInterface_hardwareAddress(const QNetworkInterface* self) {
	QString _ret = self->hardwareAddress();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QNetworkAddressEntry* */  QNetworkInterface_addressEntries(const QNetworkInterface* self) {
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

int QNetworkInterface_interfaceIndexFromName(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return QNetworkInterface::interfaceIndexFromName(name_QString);
}

QNetworkInterface* QNetworkInterface_interfaceFromName(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QNetworkInterface(QNetworkInterface::interfaceFromName(name_QString));
}

QNetworkInterface* QNetworkInterface_interfaceFromIndex(int index) {
	return new QNetworkInterface(QNetworkInterface::interfaceFromIndex(static_cast<int>(index)));
}

struct miqt_string QNetworkInterface_interfaceNameFromIndex(int index) {
	QString _ret = QNetworkInterface::interfaceNameFromIndex(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QNetworkInterface* */  QNetworkInterface_allInterfaces() {
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

struct miqt_array /* of QHostAddress* */  QNetworkInterface_allAddresses() {
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

void QNetworkInterface_delete(QNetworkInterface* self) {
	delete self;
}

