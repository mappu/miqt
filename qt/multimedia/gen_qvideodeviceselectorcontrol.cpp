#include <QMediaControl>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoDeviceSelectorControl>
#include <qvideodeviceselectorcontrol.h>
#include "gen_qvideodeviceselectorcontrol.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

void QVideoDeviceSelectorControl_virtbase(QVideoDeviceSelectorControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QVideoDeviceSelectorControl_MetaObject(const QVideoDeviceSelectorControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoDeviceSelectorControl_Metacast(QVideoDeviceSelectorControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoDeviceSelectorControl_Tr(const char* s) {
	QString _ret = QVideoDeviceSelectorControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoDeviceSelectorControl_TrUtf8(const char* s) {
	QString _ret = QVideoDeviceSelectorControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QVideoDeviceSelectorControl_DeviceCount(const QVideoDeviceSelectorControl* self) {
	return self->deviceCount();
}

struct miqt_string QVideoDeviceSelectorControl_DeviceName(const QVideoDeviceSelectorControl* self, int index) {
	QString _ret = self->deviceName(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoDeviceSelectorControl_DeviceDescription(const QVideoDeviceSelectorControl* self, int index) {
	QString _ret = self->deviceDescription(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QVideoDeviceSelectorControl_DefaultDevice(const QVideoDeviceSelectorControl* self) {
	return self->defaultDevice();
}

int QVideoDeviceSelectorControl_SelectedDevice(const QVideoDeviceSelectorControl* self) {
	return self->selectedDevice();
}

void QVideoDeviceSelectorControl_SetSelectedDevice(QVideoDeviceSelectorControl* self, int index) {
	self->setSelectedDevice(static_cast<int>(index));
}

void QVideoDeviceSelectorControl_SelectedDeviceChanged(QVideoDeviceSelectorControl* self, int index) {
	self->selectedDeviceChanged(static_cast<int>(index));
}

void QVideoDeviceSelectorControl_connect_SelectedDeviceChanged(QVideoDeviceSelectorControl* self, intptr_t slot) {
	QVideoDeviceSelectorControl::connect(self, static_cast<void (QVideoDeviceSelectorControl::*)(int)>(&QVideoDeviceSelectorControl::selectedDeviceChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QVideoDeviceSelectorControl_SelectedDeviceChanged(slot, sigval1);
	});
}

void QVideoDeviceSelectorControl_SelectedDeviceChangedWithName(QVideoDeviceSelectorControl* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->selectedDeviceChanged(name_QString);
}

void QVideoDeviceSelectorControl_connect_SelectedDeviceChangedWithName(QVideoDeviceSelectorControl* self, intptr_t slot) {
	QVideoDeviceSelectorControl::connect(self, static_cast<void (QVideoDeviceSelectorControl::*)(const QString&)>(&QVideoDeviceSelectorControl::selectedDeviceChanged), self, [=](const QString& name) {
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		miqt_exec_callback_QVideoDeviceSelectorControl_SelectedDeviceChangedWithName(slot, sigval1);
	});
}

void QVideoDeviceSelectorControl_DevicesChanged(QVideoDeviceSelectorControl* self) {
	self->devicesChanged();
}

void QVideoDeviceSelectorControl_connect_DevicesChanged(QVideoDeviceSelectorControl* self, intptr_t slot) {
	QVideoDeviceSelectorControl::connect(self, static_cast<void (QVideoDeviceSelectorControl::*)()>(&QVideoDeviceSelectorControl::devicesChanged), self, [=]() {
		miqt_exec_callback_QVideoDeviceSelectorControl_DevicesChanged(slot);
	});
}

struct miqt_string QVideoDeviceSelectorControl_Tr2(const char* s, const char* c) {
	QString _ret = QVideoDeviceSelectorControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoDeviceSelectorControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoDeviceSelectorControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoDeviceSelectorControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QVideoDeviceSelectorControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoDeviceSelectorControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QVideoDeviceSelectorControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoDeviceSelectorControl_Delete(QVideoDeviceSelectorControl* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QVideoDeviceSelectorControl*>( self );
	} else {
		delete self;
	}
}

