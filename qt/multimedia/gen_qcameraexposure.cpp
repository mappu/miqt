#include <QCameraExposure>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcameraexposure.h>
#include "gen_qcameraexposure.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCameraExposure_flashReady(intptr_t, bool);
void miqt_exec_callback_QCameraExposure_apertureChanged(intptr_t, double);
void miqt_exec_callback_QCameraExposure_apertureRangeChanged(intptr_t);
void miqt_exec_callback_QCameraExposure_shutterSpeedChanged(intptr_t, double);
void miqt_exec_callback_QCameraExposure_shutterSpeedRangeChanged(intptr_t);
void miqt_exec_callback_QCameraExposure_isoSensitivityChanged(intptr_t, int);
void miqt_exec_callback_QCameraExposure_exposureCompensationChanged(intptr_t, double);
#ifdef __cplusplus
} /* extern C */
#endif

void QCameraExposure_virtbase(QCameraExposure* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QCameraExposure_metaObject(const QCameraExposure* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraExposure_metacast(QCameraExposure* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraExposure_tr(const char* s) {
	QString _ret = QCameraExposure::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposure_trUtf8(const char* s) {
	QString _ret = QCameraExposure::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraExposure_isAvailable(const QCameraExposure* self) {
	return self->isAvailable();
}

int QCameraExposure_flashMode(const QCameraExposure* self) {
	QCameraExposure::FlashModes _ret = self->flashMode();
	return static_cast<int>(_ret);
}

bool QCameraExposure_isFlashModeSupported(const QCameraExposure* self, int mode) {
	return self->isFlashModeSupported(static_cast<QCameraExposure::FlashModes>(mode));
}

bool QCameraExposure_isFlashReady(const QCameraExposure* self) {
	return self->isFlashReady();
}

int QCameraExposure_exposureMode(const QCameraExposure* self) {
	QCameraExposure::ExposureMode _ret = self->exposureMode();
	return static_cast<int>(_ret);
}

bool QCameraExposure_isExposureModeSupported(const QCameraExposure* self, int mode) {
	return self->isExposureModeSupported(static_cast<QCameraExposure::ExposureMode>(mode));
}

double QCameraExposure_exposureCompensation(const QCameraExposure* self) {
	qreal _ret = self->exposureCompensation();
	return static_cast<double>(_ret);
}

int QCameraExposure_meteringMode(const QCameraExposure* self) {
	QCameraExposure::MeteringMode _ret = self->meteringMode();
	return static_cast<int>(_ret);
}

bool QCameraExposure_isMeteringModeSupported(const QCameraExposure* self, int mode) {
	return self->isMeteringModeSupported(static_cast<QCameraExposure::MeteringMode>(mode));
}

QPointF* QCameraExposure_spotMeteringPoint(const QCameraExposure* self) {
	return new QPointF(self->spotMeteringPoint());
}

void QCameraExposure_setSpotMeteringPoint(QCameraExposure* self, QPointF* point) {
	self->setSpotMeteringPoint(*point);
}

int QCameraExposure_isoSensitivity(const QCameraExposure* self) {
	return self->isoSensitivity();
}

double QCameraExposure_aperture(const QCameraExposure* self) {
	qreal _ret = self->aperture();
	return static_cast<double>(_ret);
}

double QCameraExposure_shutterSpeed(const QCameraExposure* self) {
	qreal _ret = self->shutterSpeed();
	return static_cast<double>(_ret);
}

int QCameraExposure_requestedIsoSensitivity(const QCameraExposure* self) {
	return self->requestedIsoSensitivity();
}

double QCameraExposure_requestedAperture(const QCameraExposure* self) {
	qreal _ret = self->requestedAperture();
	return static_cast<double>(_ret);
}

double QCameraExposure_requestedShutterSpeed(const QCameraExposure* self) {
	qreal _ret = self->requestedShutterSpeed();
	return static_cast<double>(_ret);
}

struct miqt_array /* of int */  QCameraExposure_supportedIsoSensitivities(const QCameraExposure* self) {
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

struct miqt_array /* of double */  QCameraExposure_supportedApertures(const QCameraExposure* self) {
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

struct miqt_array /* of double */  QCameraExposure_supportedShutterSpeeds(const QCameraExposure* self) {
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

void QCameraExposure_setFlashMode(QCameraExposure* self, int mode) {
	self->setFlashMode(static_cast<QCameraExposure::FlashModes>(mode));
}

void QCameraExposure_setExposureMode(QCameraExposure* self, int mode) {
	self->setExposureMode(static_cast<QCameraExposure::ExposureMode>(mode));
}

void QCameraExposure_setMeteringMode(QCameraExposure* self, int mode) {
	self->setMeteringMode(static_cast<QCameraExposure::MeteringMode>(mode));
}

void QCameraExposure_setExposureCompensation(QCameraExposure* self, double ev) {
	self->setExposureCompensation(static_cast<qreal>(ev));
}

void QCameraExposure_setManualIsoSensitivity(QCameraExposure* self, int iso) {
	self->setManualIsoSensitivity(static_cast<int>(iso));
}

void QCameraExposure_setAutoIsoSensitivity(QCameraExposure* self) {
	self->setAutoIsoSensitivity();
}

void QCameraExposure_setManualAperture(QCameraExposure* self, double aperture) {
	self->setManualAperture(static_cast<qreal>(aperture));
}

void QCameraExposure_setAutoAperture(QCameraExposure* self) {
	self->setAutoAperture();
}

void QCameraExposure_setManualShutterSpeed(QCameraExposure* self, double seconds) {
	self->setManualShutterSpeed(static_cast<qreal>(seconds));
}

void QCameraExposure_setAutoShutterSpeed(QCameraExposure* self) {
	self->setAutoShutterSpeed();
}

void QCameraExposure_flashReady(QCameraExposure* self, bool param1) {
	self->flashReady(param1);
}

void QCameraExposure_connect_flashReady(QCameraExposure* self, intptr_t slot) {
	QCameraExposure::connect(self, static_cast<void (QCameraExposure::*)(bool)>(&QCameraExposure::flashReady), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QCameraExposure_flashReady(slot, sigval1);
	});
}

void QCameraExposure_apertureChanged(QCameraExposure* self, double param1) {
	self->apertureChanged(static_cast<qreal>(param1));
}

void QCameraExposure_connect_apertureChanged(QCameraExposure* self, intptr_t slot) {
	QCameraExposure::connect(self, static_cast<void (QCameraExposure::*)(qreal)>(&QCameraExposure::apertureChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraExposure_apertureChanged(slot, sigval1);
	});
}

void QCameraExposure_apertureRangeChanged(QCameraExposure* self) {
	self->apertureRangeChanged();
}

void QCameraExposure_connect_apertureRangeChanged(QCameraExposure* self, intptr_t slot) {
	QCameraExposure::connect(self, static_cast<void (QCameraExposure::*)()>(&QCameraExposure::apertureRangeChanged), self, [=]() {
		miqt_exec_callback_QCameraExposure_apertureRangeChanged(slot);
	});
}

void QCameraExposure_shutterSpeedChanged(QCameraExposure* self, double speed) {
	self->shutterSpeedChanged(static_cast<qreal>(speed));
}

void QCameraExposure_connect_shutterSpeedChanged(QCameraExposure* self, intptr_t slot) {
	QCameraExposure::connect(self, static_cast<void (QCameraExposure::*)(qreal)>(&QCameraExposure::shutterSpeedChanged), self, [=](qreal speed) {
		qreal speed_ret = speed;
		double sigval1 = static_cast<double>(speed_ret);
		miqt_exec_callback_QCameraExposure_shutterSpeedChanged(slot, sigval1);
	});
}

void QCameraExposure_shutterSpeedRangeChanged(QCameraExposure* self) {
	self->shutterSpeedRangeChanged();
}

void QCameraExposure_connect_shutterSpeedRangeChanged(QCameraExposure* self, intptr_t slot) {
	QCameraExposure::connect(self, static_cast<void (QCameraExposure::*)()>(&QCameraExposure::shutterSpeedRangeChanged), self, [=]() {
		miqt_exec_callback_QCameraExposure_shutterSpeedRangeChanged(slot);
	});
}

void QCameraExposure_isoSensitivityChanged(QCameraExposure* self, int param1) {
	self->isoSensitivityChanged(static_cast<int>(param1));
}

void QCameraExposure_connect_isoSensitivityChanged(QCameraExposure* self, intptr_t slot) {
	QCameraExposure::connect(self, static_cast<void (QCameraExposure::*)(int)>(&QCameraExposure::isoSensitivityChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QCameraExposure_isoSensitivityChanged(slot, sigval1);
	});
}

void QCameraExposure_exposureCompensationChanged(QCameraExposure* self, double param1) {
	self->exposureCompensationChanged(static_cast<qreal>(param1));
}

void QCameraExposure_connect_exposureCompensationChanged(QCameraExposure* self, intptr_t slot) {
	QCameraExposure::connect(self, static_cast<void (QCameraExposure::*)(qreal)>(&QCameraExposure::exposureCompensationChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraExposure_exposureCompensationChanged(slot, sigval1);
	});
}

struct miqt_string QCameraExposure_tr2(const char* s, const char* c) {
	QString _ret = QCameraExposure::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposure_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraExposure::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposure_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraExposure::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposure_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraExposure::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of int */  QCameraExposure_supportedIsoSensitivities1(const QCameraExposure* self, bool* continuous) {
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

struct miqt_array /* of double */  QCameraExposure_supportedApertures1(const QCameraExposure* self, bool* continuous) {
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

struct miqt_array /* of double */  QCameraExposure_supportedShutterSpeeds1(const QCameraExposure* self, bool* continuous) {
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

