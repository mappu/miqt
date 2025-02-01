#include <QHostAddress>
#include <QIPv6Address>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qhostaddress.h>
#include "gen_qhostaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

unsigned char QIPv6Address_operatorSubscript(const QIPv6Address* self, int index) {
	quint8 _ret = self->operator[](static_cast<int>(index));
	return static_cast<unsigned char>(_ret);
}

void QIPv6Address_delete(QIPv6Address* self) {
	delete self;
}

QHostAddress* QHostAddress_new() {
	return new QHostAddress();
}

QHostAddress* QHostAddress_new2(unsigned int ip4Addr) {
	return new QHostAddress(static_cast<quint32>(ip4Addr));
}

QHostAddress* QHostAddress_new3(unsigned char* ip6Addr) {
	return new QHostAddress(static_cast<quint8*>(ip6Addr));
}

QHostAddress* QHostAddress_new4(const unsigned char* ip6Addr) {
	return new QHostAddress(static_cast<const quint8*>(ip6Addr));
}

QHostAddress* QHostAddress_new5(QIPv6Address* ip6Addr) {
	return new QHostAddress(*ip6Addr);
}

QHostAddress* QHostAddress_new6(struct miqt_string address) {
	QString address_QString = QString::fromUtf8(address.data, address.len);
	return new QHostAddress(address_QString);
}

QHostAddress* QHostAddress_new7(QHostAddress* copy) {
	return new QHostAddress(*copy);
}

QHostAddress* QHostAddress_new8(int address) {
	return new QHostAddress(static_cast<QHostAddress::SpecialAddress>(address));
}

void QHostAddress_operatorAssign(QHostAddress* self, QHostAddress* other) {
	self->operator=(*other);
}

void QHostAddress_operatorAssignWithAddress(QHostAddress* self, struct miqt_string address) {
	QString address_QString = QString::fromUtf8(address.data, address.len);
	self->operator=(address_QString);
}

void QHostAddress_operatorAssign2(QHostAddress* self, int address) {
	self->operator=(static_cast<QHostAddress::SpecialAddress>(address));
}

void QHostAddress_swap(QHostAddress* self, QHostAddress* other) {
	self->swap(*other);
}

void QHostAddress_setAddress(QHostAddress* self, unsigned int ip4Addr) {
	self->setAddress(static_cast<quint32>(ip4Addr));
}

void QHostAddress_setAddressWithIp6Addr(QHostAddress* self, unsigned char* ip6Addr) {
	self->setAddress(static_cast<quint8*>(ip6Addr));
}

void QHostAddress_setAddress2(QHostAddress* self, const unsigned char* ip6Addr) {
	self->setAddress(static_cast<const quint8*>(ip6Addr));
}

void QHostAddress_setAddress3(QHostAddress* self, QIPv6Address* ip6Addr) {
	self->setAddress(*ip6Addr);
}

bool QHostAddress_setAddress4(QHostAddress* self, struct miqt_string address) {
	QString address_QString = QString::fromUtf8(address.data, address.len);
	return self->setAddress(address_QString);
}

void QHostAddress_setAddress5(QHostAddress* self, int address) {
	self->setAddress(static_cast<QHostAddress::SpecialAddress>(address));
}

int QHostAddress_protocol(const QHostAddress* self) {
	QAbstractSocket::NetworkLayerProtocol _ret = self->protocol();
	return static_cast<int>(_ret);
}

unsigned int QHostAddress_toIPv4Address(const QHostAddress* self) {
	quint32 _ret = self->toIPv4Address();
	return static_cast<unsigned int>(_ret);
}

unsigned int QHostAddress_toIPv4AddressWithOk(const QHostAddress* self, bool* ok) {
	quint32 _ret = self->toIPv4Address(ok);
	return static_cast<unsigned int>(_ret);
}

QIPv6Address* QHostAddress_toIPv6Address(const QHostAddress* self) {
	return new QIPv6Address(self->toIPv6Address());
}

struct miqt_string QHostAddress_toString(const QHostAddress* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHostAddress_scopeId(const QHostAddress* self) {
	QString _ret = self->scopeId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHostAddress_setScopeId(QHostAddress* self, struct miqt_string id) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	self->setScopeId(id_QString);
}

bool QHostAddress_isEqual(const QHostAddress* self, QHostAddress* address) {
	return self->isEqual(*address);
}

bool QHostAddress_operatorEqual(const QHostAddress* self, QHostAddress* address) {
	return (*self == *address);
}

bool QHostAddress_operatorEqualWithAddress(const QHostAddress* self, int address) {
	return (*self == static_cast<QHostAddress::SpecialAddress>(address));
}

bool QHostAddress_operatorNotEqual(const QHostAddress* self, QHostAddress* address) {
	return (*self != *address);
}

bool QHostAddress_operatorNotEqualWithAddress(const QHostAddress* self, int address) {
	return (*self != static_cast<QHostAddress::SpecialAddress>(address));
}

bool QHostAddress_isNull(const QHostAddress* self) {
	return self->isNull();
}

void QHostAddress_clear(QHostAddress* self) {
	self->clear();
}

bool QHostAddress_isInSubnet(const QHostAddress* self, QHostAddress* subnet, int netmask) {
	return self->isInSubnet(*subnet, static_cast<int>(netmask));
}

bool QHostAddress_isInSubnetWithSubnet(const QHostAddress* self, struct miqt_map /* tuple of QHostAddress* and int */  subnet) {
	QPair<QHostAddress, int> subnet_QPair;
	QHostAddress** subnet_first_arr = static_cast<QHostAddress**>(subnet.keys);
	int* subnet_second_arr = static_cast<int*>(subnet.values);
	subnet_QPair.first = *(subnet_first_arr[0]);
	subnet_QPair.second = static_cast<int>(subnet_second_arr[0]);
	return self->isInSubnet(subnet_QPair);
}

bool QHostAddress_isLoopback(const QHostAddress* self) {
	return self->isLoopback();
}

bool QHostAddress_isGlobal(const QHostAddress* self) {
	return self->isGlobal();
}

bool QHostAddress_isLinkLocal(const QHostAddress* self) {
	return self->isLinkLocal();
}

bool QHostAddress_isSiteLocal(const QHostAddress* self) {
	return self->isSiteLocal();
}

bool QHostAddress_isUniqueLocalUnicast(const QHostAddress* self) {
	return self->isUniqueLocalUnicast();
}

bool QHostAddress_isMulticast(const QHostAddress* self) {
	return self->isMulticast();
}

bool QHostAddress_isBroadcast(const QHostAddress* self) {
	return self->isBroadcast();
}

struct miqt_map /* tuple of QHostAddress* and int */  QHostAddress_parseSubnet(struct miqt_string subnet) {
	QString subnet_QString = QString::fromUtf8(subnet.data, subnet.len);
	QPair<QHostAddress, int> _ret = QHostAddress::parseSubnet(subnet_QString);
	// Convert QPair<> from C++ memory to manually-managed C memory
	QHostAddress** _first_arr = static_cast<QHostAddress**>(malloc(sizeof(QHostAddress*)));
	int* _second_arr = static_cast<int*>(malloc(sizeof(int)));
	_first_arr[0] = new QHostAddress(_ret.first);
	_second_arr[0] = _ret.second;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

bool QHostAddress_isEqual2(const QHostAddress* self, QHostAddress* address, int mode) {
	return self->isEqual(*address, static_cast<QHostAddress::ConversionMode>(mode));
}

void QHostAddress_delete(QHostAddress* self) {
	delete self;
}

