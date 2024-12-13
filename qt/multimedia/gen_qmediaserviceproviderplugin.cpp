#include <QByteArray>
#include <QList>
#include <QMediaService>
#include <QMediaServiceCameraInfoInterface>
#include <QMediaServiceDefaultDeviceInterface>
#include <QMediaServiceFeaturesInterface>
#include <QMediaServiceProviderFactoryInterface>
#include <QMediaServiceProviderHint>
#include <QMediaServiceProviderPlugin>
#include <QMediaServiceSupportedDevicesInterface>
#include <QMediaServiceSupportedFormatsInterface>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmediaserviceproviderplugin.h>
#include "gen_qmediaserviceproviderplugin.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QMediaServiceProviderHint* QMediaServiceProviderHint_new() {
	return new QMediaServiceProviderHint();
}

QMediaServiceProviderHint* QMediaServiceProviderHint_new2(struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	QStringList codecs_QList;
	codecs_QList.reserve(codecs.len);
	struct miqt_string* codecs_arr = static_cast<struct miqt_string*>(codecs.data);
	for(size_t i = 0; i < codecs.len; ++i) {
		QString codecs_arr_i_QString = QString::fromUtf8(codecs_arr[i].data, codecs_arr[i].len);
		codecs_QList.push_back(codecs_arr_i_QString);
	}
	return new QMediaServiceProviderHint(mimeType_QString, codecs_QList);
}

QMediaServiceProviderHint* QMediaServiceProviderHint_new3(struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	return new QMediaServiceProviderHint(device_QByteArray);
}

QMediaServiceProviderHint* QMediaServiceProviderHint_new4(int position) {
	return new QMediaServiceProviderHint(static_cast<QCamera::Position>(position));
}

QMediaServiceProviderHint* QMediaServiceProviderHint_new5(int features) {
	return new QMediaServiceProviderHint(static_cast<QMediaServiceProviderHint::Features>(features));
}

QMediaServiceProviderHint* QMediaServiceProviderHint_new6(QMediaServiceProviderHint* other) {
	return new QMediaServiceProviderHint(*other);
}

void QMediaServiceProviderHint_OperatorAssign(QMediaServiceProviderHint* self, QMediaServiceProviderHint* other) {
	self->operator=(*other);
}

bool QMediaServiceProviderHint_OperatorEqual(const QMediaServiceProviderHint* self, QMediaServiceProviderHint* other) {
	return (*self == *other);
}

bool QMediaServiceProviderHint_OperatorNotEqual(const QMediaServiceProviderHint* self, QMediaServiceProviderHint* other) {
	return (*self != *other);
}

bool QMediaServiceProviderHint_IsNull(const QMediaServiceProviderHint* self) {
	return self->isNull();
}

int QMediaServiceProviderHint_Type(const QMediaServiceProviderHint* self) {
	QMediaServiceProviderHint::Type _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QMediaServiceProviderHint_MimeType(const QMediaServiceProviderHint* self) {
	QString _ret = self->mimeType();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QMediaServiceProviderHint_Codecs(const QMediaServiceProviderHint* self) {
	QStringList _ret = self->codecs();
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

struct miqt_string QMediaServiceProviderHint_Device(const QMediaServiceProviderHint* self) {
	QByteArray _qb = self->device();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QMediaServiceProviderHint_CameraPosition(const QMediaServiceProviderHint* self) {
	QCamera::Position _ret = self->cameraPosition();
	return static_cast<int>(_ret);
}

int QMediaServiceProviderHint_Features(const QMediaServiceProviderHint* self) {
	QMediaServiceProviderHint::Features _ret = self->features();
	return static_cast<int>(_ret);
}

void QMediaServiceProviderHint_Delete(QMediaServiceProviderHint* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaServiceProviderHint*>( self );
	} else {
		delete self;
	}
}

QMediaService* QMediaServiceProviderFactoryInterface_Create(QMediaServiceProviderFactoryInterface* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->create(key_QString);
}

void QMediaServiceProviderFactoryInterface_Release(QMediaServiceProviderFactoryInterface* self, QMediaService* service) {
	self->release(service);
}

void QMediaServiceProviderFactoryInterface_OperatorAssign(QMediaServiceProviderFactoryInterface* self, QMediaServiceProviderFactoryInterface* param1) {
	self->operator=(*param1);
}

void QMediaServiceProviderFactoryInterface_Delete(QMediaServiceProviderFactoryInterface* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaServiceProviderFactoryInterface*>( self );
	} else {
		delete self;
	}
}

int QMediaServiceSupportedFormatsInterface_HasSupport(const QMediaServiceSupportedFormatsInterface* self, struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	QStringList codecs_QList;
	codecs_QList.reserve(codecs.len);
	struct miqt_string* codecs_arr = static_cast<struct miqt_string*>(codecs.data);
	for(size_t i = 0; i < codecs.len; ++i) {
		QString codecs_arr_i_QString = QString::fromUtf8(codecs_arr[i].data, codecs_arr[i].len);
		codecs_QList.push_back(codecs_arr_i_QString);
	}
	QMultimedia::SupportEstimate _ret = self->hasSupport(mimeType_QString, codecs_QList);
	return static_cast<int>(_ret);
}

struct miqt_array /* of struct miqt_string */  QMediaServiceSupportedFormatsInterface_SupportedMimeTypes(const QMediaServiceSupportedFormatsInterface* self) {
	QStringList _ret = self->supportedMimeTypes();
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

void QMediaServiceSupportedFormatsInterface_OperatorAssign(QMediaServiceSupportedFormatsInterface* self, QMediaServiceSupportedFormatsInterface* param1) {
	self->operator=(*param1);
}

void QMediaServiceSupportedFormatsInterface_Delete(QMediaServiceSupportedFormatsInterface* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaServiceSupportedFormatsInterface*>( self );
	} else {
		delete self;
	}
}

struct miqt_array /* of struct miqt_string */  QMediaServiceSupportedDevicesInterface_Devices(const QMediaServiceSupportedDevicesInterface* self, struct miqt_string service) {
	QByteArray service_QByteArray(service.data, service.len);
	QList<QByteArray> _ret = self->devices(service_QByteArray);
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

struct miqt_string QMediaServiceSupportedDevicesInterface_DeviceDescription(QMediaServiceSupportedDevicesInterface* self, struct miqt_string service, struct miqt_string device) {
	QByteArray service_QByteArray(service.data, service.len);
	QByteArray device_QByteArray(device.data, device.len);
	QString _ret = self->deviceDescription(service_QByteArray, device_QByteArray);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaServiceSupportedDevicesInterface_OperatorAssign(QMediaServiceSupportedDevicesInterface* self, QMediaServiceSupportedDevicesInterface* param1) {
	self->operator=(*param1);
}

void QMediaServiceSupportedDevicesInterface_Delete(QMediaServiceSupportedDevicesInterface* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaServiceSupportedDevicesInterface*>( self );
	} else {
		delete self;
	}
}

struct miqt_string QMediaServiceDefaultDeviceInterface_DefaultDevice(const QMediaServiceDefaultDeviceInterface* self, struct miqt_string service) {
	QByteArray service_QByteArray(service.data, service.len);
	QByteArray _qb = self->defaultDevice(service_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QMediaServiceDefaultDeviceInterface_OperatorAssign(QMediaServiceDefaultDeviceInterface* self, QMediaServiceDefaultDeviceInterface* param1) {
	self->operator=(*param1);
}

void QMediaServiceDefaultDeviceInterface_Delete(QMediaServiceDefaultDeviceInterface* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaServiceDefaultDeviceInterface*>( self );
	} else {
		delete self;
	}
}

int QMediaServiceCameraInfoInterface_CameraPosition(const QMediaServiceCameraInfoInterface* self, struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	QCamera::Position _ret = self->cameraPosition(device_QByteArray);
	return static_cast<int>(_ret);
}

int QMediaServiceCameraInfoInterface_CameraOrientation(const QMediaServiceCameraInfoInterface* self, struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->cameraOrientation(device_QByteArray);
}

void QMediaServiceCameraInfoInterface_OperatorAssign(QMediaServiceCameraInfoInterface* self, QMediaServiceCameraInfoInterface* param1) {
	self->operator=(*param1);
}

void QMediaServiceCameraInfoInterface_Delete(QMediaServiceCameraInfoInterface* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaServiceCameraInfoInterface*>( self );
	} else {
		delete self;
	}
}

int QMediaServiceFeaturesInterface_SupportedFeatures(const QMediaServiceFeaturesInterface* self, struct miqt_string service) {
	QByteArray service_QByteArray(service.data, service.len);
	QMediaServiceProviderHint::Features _ret = self->supportedFeatures(service_QByteArray);
	return static_cast<int>(_ret);
}

void QMediaServiceFeaturesInterface_OperatorAssign(QMediaServiceFeaturesInterface* self, QMediaServiceFeaturesInterface* param1) {
	self->operator=(*param1);
}

void QMediaServiceFeaturesInterface_Delete(QMediaServiceFeaturesInterface* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaServiceFeaturesInterface*>( self );
	} else {
		delete self;
	}
}

void QMediaServiceProviderPlugin_virtbase(QMediaServiceProviderPlugin* src, QObject** outptr_QObject, QMediaServiceProviderFactoryInterface** outptr_QMediaServiceProviderFactoryInterface) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QMediaServiceProviderFactoryInterface = static_cast<QMediaServiceProviderFactoryInterface*>(src);
}

QMetaObject* QMediaServiceProviderPlugin_MetaObject(const QMediaServiceProviderPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaServiceProviderPlugin_Metacast(QMediaServiceProviderPlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaServiceProviderPlugin_Tr(const char* s) {
	QString _ret = QMediaServiceProviderPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaServiceProviderPlugin_TrUtf8(const char* s) {
	QString _ret = QMediaServiceProviderPlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaService* QMediaServiceProviderPlugin_Create(QMediaServiceProviderPlugin* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->create(key_QString);
}

void QMediaServiceProviderPlugin_Release(QMediaServiceProviderPlugin* self, QMediaService* service) {
	self->release(service);
}

struct miqt_string QMediaServiceProviderPlugin_Tr2(const char* s, const char* c) {
	QString _ret = QMediaServiceProviderPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaServiceProviderPlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaServiceProviderPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaServiceProviderPlugin_TrUtf82(const char* s, const char* c) {
	QString _ret = QMediaServiceProviderPlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaServiceProviderPlugin_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaServiceProviderPlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaServiceProviderPlugin_Delete(QMediaServiceProviderPlugin* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaServiceProviderPlugin*>( self );
	} else {
		delete self;
	}
}

