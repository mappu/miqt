#include <QByteArray>
#include <QHostAddress>
#include <QNetworkDatagram>
#include <qnetworkdatagram.h>
#include "gen_qnetworkdatagram.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QNetworkDatagram* QNetworkDatagram_new() {
	return new QNetworkDatagram();
}

QNetworkDatagram* QNetworkDatagram_new2(struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QNetworkDatagram(data_QByteArray);
}

QNetworkDatagram* QNetworkDatagram_new3(QNetworkDatagram* other) {
	return new QNetworkDatagram(*other);
}

QNetworkDatagram* QNetworkDatagram_new4(struct miqt_string data, QHostAddress* destinationAddress) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QNetworkDatagram(data_QByteArray, *destinationAddress);
}

QNetworkDatagram* QNetworkDatagram_new5(struct miqt_string data, QHostAddress* destinationAddress, uint16_t port) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QNetworkDatagram(data_QByteArray, *destinationAddress, static_cast<quint16>(port));
}

void QNetworkDatagram_operatorAssign(QNetworkDatagram* self, QNetworkDatagram* other) {
	self->operator=(*other);
}

void QNetworkDatagram_swap(QNetworkDatagram* self, QNetworkDatagram* other) {
	self->swap(*other);
}

void QNetworkDatagram_clear(QNetworkDatagram* self) {
	self->clear();
}

bool QNetworkDatagram_isValid(const QNetworkDatagram* self) {
	return self->isValid();
}

bool QNetworkDatagram_isNull(const QNetworkDatagram* self) {
	return self->isNull();
}

unsigned int QNetworkDatagram_interfaceIndex(const QNetworkDatagram* self) {
	uint _ret = self->interfaceIndex();
	return static_cast<unsigned int>(_ret);
}

void QNetworkDatagram_setInterfaceIndex(QNetworkDatagram* self, unsigned int index) {
	self->setInterfaceIndex(static_cast<uint>(index));
}

QHostAddress* QNetworkDatagram_senderAddress(const QNetworkDatagram* self) {
	return new QHostAddress(self->senderAddress());
}

QHostAddress* QNetworkDatagram_destinationAddress(const QNetworkDatagram* self) {
	return new QHostAddress(self->destinationAddress());
}

int QNetworkDatagram_senderPort(const QNetworkDatagram* self) {
	return self->senderPort();
}

int QNetworkDatagram_destinationPort(const QNetworkDatagram* self) {
	return self->destinationPort();
}

void QNetworkDatagram_setSender(QNetworkDatagram* self, QHostAddress* address) {
	self->setSender(*address);
}

void QNetworkDatagram_setDestination(QNetworkDatagram* self, QHostAddress* address, uint16_t port) {
	self->setDestination(*address, static_cast<quint16>(port));
}

int QNetworkDatagram_hopLimit(const QNetworkDatagram* self) {
	return self->hopLimit();
}

void QNetworkDatagram_setHopLimit(QNetworkDatagram* self, int count) {
	self->setHopLimit(static_cast<int>(count));
}

struct miqt_string QNetworkDatagram_data(const QNetworkDatagram* self) {
	QByteArray _qb = self->data();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QNetworkDatagram_setData(QNetworkDatagram* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->setData(data_QByteArray);
}

QNetworkDatagram* QNetworkDatagram_makeReply(const QNetworkDatagram* self, struct miqt_string payload) {
	QByteArray payload_QByteArray(payload.data, payload.len);
	return new QNetworkDatagram(self->makeReply(payload_QByteArray));
}

void QNetworkDatagram_setSender2(QNetworkDatagram* self, QHostAddress* address, uint16_t port) {
	self->setSender(*address, static_cast<quint16>(port));
}

void QNetworkDatagram_delete(QNetworkDatagram* self) {
	delete self;
}

