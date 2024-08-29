#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTouchDevice>
#include "qtouchdevice.h"

#include "gen_qtouchdevice.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTouchDevice* QTouchDevice_new() {
	return new QTouchDevice();
}

void QTouchDevice_Devices(const QTouchDevice*** _out, size_t* _out_len) {
	QList<const QTouchDevice*> ret = QTouchDevice::devices();
	// Convert QList<> from C++ memory to manually-managed C memory
	const QTouchDevice** __out = static_cast<const QTouchDevice**>(malloc(sizeof(const QTouchDevice*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = const_cast<const QTouchDevice*>(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTouchDevice_Name(QTouchDevice* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTouchDevice*>(self)->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QTouchDevice_Type(QTouchDevice* self) {
	QTouchDevice::DeviceType ret = const_cast<const QTouchDevice*>(self)->type();
	return static_cast<uintptr_t>(ret);
}

int QTouchDevice_Capabilities(QTouchDevice* self) {
	QTouchDevice::Capabilities ret = const_cast<const QTouchDevice*>(self)->capabilities();
	return static_cast<int>(ret);
}

int QTouchDevice_MaximumTouchPoints(QTouchDevice* self) {
	return const_cast<const QTouchDevice*>(self)->maximumTouchPoints();
}

void QTouchDevice_SetName(QTouchDevice* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->setName(name_QString);
}

void QTouchDevice_SetType(QTouchDevice* self, uintptr_t devType) {
	self->setType(static_cast<QTouchDevice::DeviceType>(devType));
}

void QTouchDevice_SetCapabilities(QTouchDevice* self, int caps) {
	self->setCapabilities(static_cast<QTouchDevice::Capabilities>(caps));
}

void QTouchDevice_SetMaximumTouchPoints(QTouchDevice* self, int max) {
	self->setMaximumTouchPoints(static_cast<int>(max));
}

void QTouchDevice_Delete(QTouchDevice* self) {
	delete self;
}

