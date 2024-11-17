#include <QCameraExposure>
#include <QList>
#include <QMetaObject>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcameraexposure.h>
#include "gen_qcameraexposure.h"
#include "_cgo_export.h"

QMetaObject* QCameraExposure_MetaObject(const QCameraExposure* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraExposure_Metacast(QCameraExposure* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraExposure_Tr(const char* s) {
	QString _ret = QCameraExposure::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposure_TrUtf8(const char* s) {
	QString _ret = QCameraExposure::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraExposure_IsAvailable(const QCameraExposure* self) {
	return self->isAvailable();
}

int QCameraExposure_FlashMode(const QCameraExposure* self) {
	QCameraExposure::FlashModes _ret = self->flashMode();
	return static_cast<int>(_ret);
}

bool QCameraExposure_IsFlashModeSupported(const QCameraExposure* self, int mode) {
	return self->isFlashModeSupported(static_cast<QCameraExposure::FlashModes>(mode));
}

bool QCameraExposure_IsFlashReady(const QCameraExposure* self) {
	return self->isFlashReady();
}

int QCameraExposure_ExposureMode(const QCameraExposure* self) {
	QCameraExposure::ExposureMode _ret = self->exposureMode();
	return static_cast<int>(_ret);
}

bool QCameraExposure_IsExposureModeSupported(const QCameraExposure* self, int mode) {
	return self->isExposureModeSupported(static_cast<QCameraExposure::ExposureMode>(mode));
}

double QCameraExposure_ExposureCompensation(const QCameraExposure* self) {
	qreal _ret = self->exposureCompensation();
	return static_cast<double>(_ret);
}

int QCameraExposure_MeteringMode(const QCameraExposure* self) {
	QCameraExposure::MeteringMode _ret = self->meteringMode();
	return static_cast<int>(_ret);
}

bool QCameraExposure_IsMeteringModeSupported(const QCameraExposure* self, int mode) {
	return self->isMeteringModeSupported(static_cast<QCameraExposure::MeteringMode>(mode));
}

QPointF* QCameraExposure_SpotMeteringPoint(const QCameraExposure* self) {
	return new QPointF(self->spotMeteringPoint());
}

void QCameraExposure_SetSpotMeteringPoint(QCameraExposure* self, QPointF* point) {
	self->setSpotMeteringPoint(*point);
}

int QCameraExposure_IsoSensitivity(const QCameraExposure* self) {
	return self->isoSensitivity();
}

double QCameraExposure_Aperture(const QCameraExposure* self) {
	qreal _ret = self->aperture();
	return static_cast<double>(_ret);
}

double QCameraExposure_ShutterSpeed(const QCameraExposure* self) {
	qreal _ret = self->shutterSpeed();
	return static_cast<double>(_ret);
}

int QCameraExposure_RequestedIsoSensitivity(const QCameraExposure* self) {
	return self->requestedIsoSensitivity();
}

double QCameraExposure_RequestedAperture(const QCameraExposure* self) {
	qreal _ret = self->requestedAperture();
	return static_cast<double>(_ret);
}

double QCameraExposure_RequestedShutterSpeed(const QCameraExposure* self) {
	qreal _ret = self->requestedShutterSpeed();
	return static_cast<double>(_ret);
}

struct miqt_array /* of int */  QCameraExposure_SupportedIsoSensitivities(const QCameraExposure* self) {
	QList<int> _ret = self->supportedIsoSensitivities();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of double */  QCameraExposure_SupportedApertures(const QCameraExposure* self) {
	QList<qreal> _ret = self->supportedApertures();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of double */  QCameraExposure_SupportedShutterSpeeds(const QCameraExposure* self) {
	QList<qreal> _ret = self->supportedShutterSpeeds();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QCameraExposure_SetFlashMode(QCameraExposure* self, int mode) {
	self->setFlashMode(static_cast<QCameraExposure::FlashModes>(mode));
}

void QCameraExposure_SetExposureMode(QCameraExposure* self, int mode) {
	self->setExposureMode(static_cast<QCameraExposure::ExposureMode>(mode));
}

void QCameraExposure_SetMeteringMode(QCameraExposure* self, int mode) {
	self->setMeteringMode(static_cast<QCameraExposure::MeteringMode>(mode));
}

void QCameraExposure_SetExposureCompensation(QCameraExposure* self, double ev) {
	self->setExposureCompensation(static_cast<qreal>(ev));
}

void QCameraExposure_SetManualIsoSensitivity(QCameraExposure* self, int iso) {
	self->setManualIsoSensitivity(static_cast<int>(iso));
}

void QCameraExposure_SetAutoIsoSensitivity(QCameraExposure* self) {
	self->setAutoIsoSensitivity();
}

void QCameraExposure_SetManualAperture(QCameraExposure* self, double aperture) {
	self->setManualAperture(static_cast<qreal>(aperture));
}

void QCameraExposure_SetAutoAperture(QCameraExposure* self) {
	self->setAutoAperture();
}

void QCameraExposure_SetManualShutterSpeed(QCameraExposure* self, double seconds) {
	self->setManualShutterSpeed(static_cast<qreal>(seconds));
}

void QCameraExposure_SetAutoShutterSpeed(QCameraExposure* self) {
	self->setAutoShutterSpeed();
}

void QCameraExposure_FlashReady(QCameraExposure* self, bool param1) {
	self->flashReady(param1);
}

void QCameraExposure_connect_FlashReady(QCameraExposure* self, intptr_t slot) {
	QCameraExposure::connect(self, static_cast<void (QCameraExposure::*)(bool)>(&QCameraExposure::flashReady), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QCameraExposure_FlashReady(slot, sigval1);
	});
}

void QCameraExposure_ApertureChanged(QCameraExposure* self, double param1) {
	self->apertureChanged(static_cast<qreal>(param1));
}

void QCameraExposure_connect_ApertureChanged(QCameraExposure* self, intptr_t slot) {
	QCameraExposure::connect(self, static_cast<void (QCameraExposure::*)(qreal)>(&QCameraExposure::apertureChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraExposure_ApertureChanged(slot, sigval1);
	});
}

void QCameraExposure_ApertureRangeChanged(QCameraExposure* self) {
	self->apertureRangeChanged();
}

void QCameraExposure_connect_ApertureRangeChanged(QCameraExposure* self, intptr_t slot) {
	QCameraExposure::connect(self, static_cast<void (QCameraExposure::*)()>(&QCameraExposure::apertureRangeChanged), self, [=]() {
		miqt_exec_callback_QCameraExposure_ApertureRangeChanged(slot);
	});
}

void QCameraExposure_ShutterSpeedChanged(QCameraExposure* self, double speed) {
	self->shutterSpeedChanged(static_cast<qreal>(speed));
}

void QCameraExposure_connect_ShutterSpeedChanged(QCameraExposure* self, intptr_t slot) {
	QCameraExposure::connect(self, static_cast<void (QCameraExposure::*)(qreal)>(&QCameraExposure::shutterSpeedChanged), self, [=](qreal speed) {
		qreal speed_ret = speed;
		double sigval1 = static_cast<double>(speed_ret);
		miqt_exec_callback_QCameraExposure_ShutterSpeedChanged(slot, sigval1);
	});
}

void QCameraExposure_ShutterSpeedRangeChanged(QCameraExposure* self) {
	self->shutterSpeedRangeChanged();
}

void QCameraExposure_connect_ShutterSpeedRangeChanged(QCameraExposure* self, intptr_t slot) {
	QCameraExposure::connect(self, static_cast<void (QCameraExposure::*)()>(&QCameraExposure::shutterSpeedRangeChanged), self, [=]() {
		miqt_exec_callback_QCameraExposure_ShutterSpeedRangeChanged(slot);
	});
}

void QCameraExposure_IsoSensitivityChanged(QCameraExposure* self, int param1) {
	self->isoSensitivityChanged(static_cast<int>(param1));
}

void QCameraExposure_connect_IsoSensitivityChanged(QCameraExposure* self, intptr_t slot) {
	QCameraExposure::connect(self, static_cast<void (QCameraExposure::*)(int)>(&QCameraExposure::isoSensitivityChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QCameraExposure_IsoSensitivityChanged(slot, sigval1);
	});
}

void QCameraExposure_ExposureCompensationChanged(QCameraExposure* self, double param1) {
	self->exposureCompensationChanged(static_cast<qreal>(param1));
}

void QCameraExposure_connect_ExposureCompensationChanged(QCameraExposure* self, intptr_t slot) {
	QCameraExposure::connect(self, static_cast<void (QCameraExposure::*)(qreal)>(&QCameraExposure::exposureCompensationChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraExposure_ExposureCompensationChanged(slot, sigval1);
	});
}

struct miqt_string QCameraExposure_Tr2(const char* s, const char* c) {
	QString _ret = QCameraExposure::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposure_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraExposure::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposure_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraExposure::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposure_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraExposure::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of int */  QCameraExposure_SupportedIsoSensitivities1(const QCameraExposure* self, bool* continuous) {
	QList<int> _ret = self->supportedIsoSensitivities(continuous);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of double */  QCameraExposure_SupportedApertures1(const QCameraExposure* self, bool* continuous) {
	QList<qreal> _ret = self->supportedApertures(continuous);
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of double */  QCameraExposure_SupportedShutterSpeeds1(const QCameraExposure* self, bool* continuous) {
	QList<qreal> _ret = self->supportedShutterSpeeds(continuous);
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

