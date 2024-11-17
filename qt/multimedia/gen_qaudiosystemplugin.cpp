#include <QAbstractAudioDeviceInfo>
#include <QAbstractAudioInput>
#include <QAbstractAudioOutput>
#include <QAudioSystemFactoryInterface>
#include <QAudioSystemPlugin>
#include <QByteArray>
#include <QList>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiosystemplugin.h>
#include "gen_qaudiosystemplugin.h"
#include "_cgo_export.h"

struct miqt_array /* of struct miqt_string */  QAudioSystemFactoryInterface_AvailableDevices(const QAudioSystemFactoryInterface* self, int param1) {
	QList<QByteArray> _ret = self->availableDevices(static_cast<QAudio::Mode>(param1));
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

QAbstractAudioInput* QAudioSystemFactoryInterface_CreateInput(QAudioSystemFactoryInterface* self, struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createInput(device_QByteArray);
}

QAbstractAudioOutput* QAudioSystemFactoryInterface_CreateOutput(QAudioSystemFactoryInterface* self, struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createOutput(device_QByteArray);
}

QAbstractAudioDeviceInfo* QAudioSystemFactoryInterface_CreateDeviceInfo(QAudioSystemFactoryInterface* self, struct miqt_string device, int mode) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createDeviceInfo(device_QByteArray, static_cast<QAudio::Mode>(mode));
}

void QAudioSystemFactoryInterface_OperatorAssign(QAudioSystemFactoryInterface* self, QAudioSystemFactoryInterface* param1) {
	self->operator=(*param1);
}

void QAudioSystemFactoryInterface_Delete(QAudioSystemFactoryInterface* self) {
	delete self;
}

QMetaObject* QAudioSystemPlugin_MetaObject(const QAudioSystemPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioSystemPlugin_Metacast(QAudioSystemPlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioSystemPlugin_Tr(const char* s) {
	QString _ret = QAudioSystemPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSystemPlugin_TrUtf8(const char* s) {
	QString _ret = QAudioSystemPlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QAudioSystemPlugin_AvailableDevices(const QAudioSystemPlugin* self, int param1) {
	QList<QByteArray> _ret = self->availableDevices(static_cast<QAudio::Mode>(param1));
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

QAbstractAudioInput* QAudioSystemPlugin_CreateInput(QAudioSystemPlugin* self, struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createInput(device_QByteArray);
}

QAbstractAudioOutput* QAudioSystemPlugin_CreateOutput(QAudioSystemPlugin* self, struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createOutput(device_QByteArray);
}

QAbstractAudioDeviceInfo* QAudioSystemPlugin_CreateDeviceInfo(QAudioSystemPlugin* self, struct miqt_string device, int mode) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createDeviceInfo(device_QByteArray, static_cast<QAudio::Mode>(mode));
}

struct miqt_string QAudioSystemPlugin_Tr2(const char* s, const char* c) {
	QString _ret = QAudioSystemPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSystemPlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioSystemPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSystemPlugin_TrUtf82(const char* s, const char* c) {
	QString _ret = QAudioSystemPlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSystemPlugin_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioSystemPlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioSystemPlugin_Delete(QAudioSystemPlugin* self) {
	delete self;
}

