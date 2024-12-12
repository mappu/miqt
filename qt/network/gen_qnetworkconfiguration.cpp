#include <QList>
#include <QNetworkConfiguration>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qnetworkconfiguration.h>
#include "gen_qnetworkconfiguration.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QNetworkConfiguration* QNetworkConfiguration_new() {
	return new QNetworkConfiguration();
}

QNetworkConfiguration* QNetworkConfiguration_new2(QNetworkConfiguration* other) {
	return new QNetworkConfiguration(*other);
}

void QNetworkConfiguration_OperatorAssign(QNetworkConfiguration* self, QNetworkConfiguration* other) {
	self->operator=(*other);
}

void QNetworkConfiguration_Swap(QNetworkConfiguration* self, QNetworkConfiguration* other) {
	self->swap(*other);
}

bool QNetworkConfiguration_OperatorEqual(const QNetworkConfiguration* self, QNetworkConfiguration* other) {
	return (*self == *other);
}

bool QNetworkConfiguration_OperatorNotEqual(const QNetworkConfiguration* self, QNetworkConfiguration* other) {
	return (*self != *other);
}

int QNetworkConfiguration_State(const QNetworkConfiguration* self) {
	QNetworkConfiguration::StateFlags _ret = self->state();
	return static_cast<int>(_ret);
}

int QNetworkConfiguration_Type(const QNetworkConfiguration* self) {
	QNetworkConfiguration::Type _ret = self->type();
	return static_cast<int>(_ret);
}

int QNetworkConfiguration_Purpose(const QNetworkConfiguration* self) {
	QNetworkConfiguration::Purpose _ret = self->purpose();
	return static_cast<int>(_ret);
}

int QNetworkConfiguration_BearerType(const QNetworkConfiguration* self) {
	QNetworkConfiguration::BearerType _ret = self->bearerType();
	return static_cast<int>(_ret);
}

int QNetworkConfiguration_BearerTypeFamily(const QNetworkConfiguration* self) {
	QNetworkConfiguration::BearerType _ret = self->bearerTypeFamily();
	return static_cast<int>(_ret);
}

struct miqt_string QNetworkConfiguration_BearerTypeName(const QNetworkConfiguration* self) {
	QString _ret = self->bearerTypeName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkConfiguration_Identifier(const QNetworkConfiguration* self) {
	QString _ret = self->identifier();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QNetworkConfiguration_IsRoamingAvailable(const QNetworkConfiguration* self) {
	return self->isRoamingAvailable();
}

struct miqt_array /* of QNetworkConfiguration* */  QNetworkConfiguration_Children(const QNetworkConfiguration* self) {
	QList<QNetworkConfiguration> _ret = self->children();
	// Convert QList<> from C++ memory to manually-managed C memory
	QNetworkConfiguration** _arr = static_cast<QNetworkConfiguration**>(malloc(sizeof(QNetworkConfiguration*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QNetworkConfiguration(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QNetworkConfiguration_Name(const QNetworkConfiguration* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QNetworkConfiguration_IsValid(const QNetworkConfiguration* self) {
	return self->isValid();
}

int QNetworkConfiguration_ConnectTimeout(const QNetworkConfiguration* self) {
	return self->connectTimeout();
}

bool QNetworkConfiguration_SetConnectTimeout(QNetworkConfiguration* self, int timeout) {
	return self->setConnectTimeout(static_cast<int>(timeout));
}

void QNetworkConfiguration_Delete(QNetworkConfiguration* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QNetworkConfiguration*>( self );
	} else {
		delete self;
	}
}

