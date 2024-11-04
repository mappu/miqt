#include <QCamera>
#include <QCameraDevice>
#include <QCameraFormat>
#include <QMediaCaptureSession>
#include <QMetaObject>
#include <QObject>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcamera.h>
#include "gen_qcamera.h"
#include "_cgo_export.h"

QCamera* QCamera_new() {
	return new QCamera();
}

QCamera* QCamera_new2(QCameraDevice* cameraDevice) {
	return new QCamera(*cameraDevice);
}

QCamera* QCamera_new3(int position) {
	return new QCamera(static_cast<QCameraDevice::Position>(position));
}

QCamera* QCamera_new4(QObject* parent) {
	return new QCamera(parent);
}

QCamera* QCamera_new5(QCameraDevice* cameraDevice, QObject* parent) {
	return new QCamera(*cameraDevice, parent);
}

QCamera* QCamera_new6(int position, QObject* parent) {
	return new QCamera(static_cast<QCameraDevice::Position>(position), parent);
}

QMetaObject* QCamera_MetaObject(const QCamera* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCamera_Metacast(QCamera* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCamera_Tr(const char* s) {
	QString _ret = QCamera::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCamera_IsAvailable(const QCamera* self) {
	return self->isAvailable();
}

bool QCamera_IsActive(const QCamera* self) {
	return self->isActive();
}

QMediaCaptureSession* QCamera_CaptureSession(const QCamera* self) {
	return self->captureSession();
}

QCameraDevice* QCamera_CameraDevice(const QCamera* self) {
	return new QCameraDevice(self->cameraDevice());
}

void QCamera_SetCameraDevice(QCamera* self, QCameraDevice* cameraDevice) {
	self->setCameraDevice(*cameraDevice);
}

QCameraFormat* QCamera_CameraFormat(const QCamera* self) {
	return new QCameraFormat(self->cameraFormat());
}

void QCamera_SetCameraFormat(QCamera* self, QCameraFormat* format) {
	self->setCameraFormat(*format);
}

int QCamera_Error(const QCamera* self) {
	QCamera::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QCamera_ErrorString(const QCamera* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCamera_SupportedFeatures(const QCamera* self) {
	QCamera::Features _ret = self->supportedFeatures();
	return static_cast<int>(_ret);
}

int QCamera_FocusMode(const QCamera* self) {
	QCamera::FocusMode _ret = self->focusMode();
	return static_cast<int>(_ret);
}

void QCamera_SetFocusMode(QCamera* self, int mode) {
	self->setFocusMode(static_cast<QCamera::FocusMode>(mode));
}

bool QCamera_IsFocusModeSupported(const QCamera* self, int mode) {
	return self->isFocusModeSupported(static_cast<QCamera::FocusMode>(mode));
}

QPointF* QCamera_FocusPoint(const QCamera* self) {
	return new QPointF(self->focusPoint());
}

QPointF* QCamera_CustomFocusPoint(const QCamera* self) {
	return new QPointF(self->customFocusPoint());
}

void QCamera_SetCustomFocusPoint(QCamera* self, QPointF* point) {
	self->setCustomFocusPoint(*point);
}

void QCamera_SetFocusDistance(QCamera* self, float d) {
	self->setFocusDistance(static_cast<float>(d));
}

float QCamera_FocusDistance(const QCamera* self) {
	return self->focusDistance();
}

float QCamera_MinimumZoomFactor(const QCamera* self) {
	return self->minimumZoomFactor();
}

float QCamera_MaximumZoomFactor(const QCamera* self) {
	return self->maximumZoomFactor();
}

float QCamera_ZoomFactor(const QCamera* self) {
	return self->zoomFactor();
}

void QCamera_SetZoomFactor(QCamera* self, float factor) {
	self->setZoomFactor(static_cast<float>(factor));
}

int QCamera_FlashMode(const QCamera* self) {
	QCamera::FlashMode _ret = self->flashMode();
	return static_cast<int>(_ret);
}

bool QCamera_IsFlashModeSupported(const QCamera* self, int mode) {
	return self->isFlashModeSupported(static_cast<QCamera::FlashMode>(mode));
}

bool QCamera_IsFlashReady(const QCamera* self) {
	return self->isFlashReady();
}

int QCamera_TorchMode(const QCamera* self) {
	QCamera::TorchMode _ret = self->torchMode();
	return static_cast<int>(_ret);
}

bool QCamera_IsTorchModeSupported(const QCamera* self, int mode) {
	return self->isTorchModeSupported(static_cast<QCamera::TorchMode>(mode));
}

int QCamera_ExposureMode(const QCamera* self) {
	QCamera::ExposureMode _ret = self->exposureMode();
	return static_cast<int>(_ret);
}

bool QCamera_IsExposureModeSupported(const QCamera* self, int mode) {
	return self->isExposureModeSupported(static_cast<QCamera::ExposureMode>(mode));
}

float QCamera_ExposureCompensation(const QCamera* self) {
	return self->exposureCompensation();
}

int QCamera_IsoSensitivity(const QCamera* self) {
	return self->isoSensitivity();
}

int QCamera_ManualIsoSensitivity(const QCamera* self) {
	return self->manualIsoSensitivity();
}

float QCamera_ExposureTime(const QCamera* self) {
	return self->exposureTime();
}

float QCamera_ManualExposureTime(const QCamera* self) {
	return self->manualExposureTime();
}

int QCamera_MinimumIsoSensitivity(const QCamera* self) {
	return self->minimumIsoSensitivity();
}

int QCamera_MaximumIsoSensitivity(const QCamera* self) {
	return self->maximumIsoSensitivity();
}

float QCamera_MinimumExposureTime(const QCamera* self) {
	return self->minimumExposureTime();
}

float QCamera_MaximumExposureTime(const QCamera* self) {
	return self->maximumExposureTime();
}

int QCamera_WhiteBalanceMode(const QCamera* self) {
	QCamera::WhiteBalanceMode _ret = self->whiteBalanceMode();
	return static_cast<int>(_ret);
}

bool QCamera_IsWhiteBalanceModeSupported(const QCamera* self, int mode) {
	return self->isWhiteBalanceModeSupported(static_cast<QCamera::WhiteBalanceMode>(mode));
}

int QCamera_ColorTemperature(const QCamera* self) {
	return self->colorTemperature();
}

void QCamera_SetActive(QCamera* self, bool active) {
	self->setActive(active);
}

void QCamera_Start(QCamera* self) {
	self->start();
}

void QCamera_Stop(QCamera* self) {
	self->stop();
}

void QCamera_ZoomTo(QCamera* self, float zoom, float rate) {
	self->zoomTo(static_cast<float>(zoom), static_cast<float>(rate));
}

void QCamera_SetFlashMode(QCamera* self, int mode) {
	self->setFlashMode(static_cast<QCamera::FlashMode>(mode));
}

void QCamera_SetTorchMode(QCamera* self, int mode) {
	self->setTorchMode(static_cast<QCamera::TorchMode>(mode));
}

void QCamera_SetExposureMode(QCamera* self, int mode) {
	self->setExposureMode(static_cast<QCamera::ExposureMode>(mode));
}

void QCamera_SetExposureCompensation(QCamera* self, float ev) {
	self->setExposureCompensation(static_cast<float>(ev));
}

void QCamera_SetManualIsoSensitivity(QCamera* self, int iso) {
	self->setManualIsoSensitivity(static_cast<int>(iso));
}

void QCamera_SetAutoIsoSensitivity(QCamera* self) {
	self->setAutoIsoSensitivity();
}

void QCamera_SetManualExposureTime(QCamera* self, float seconds) {
	self->setManualExposureTime(static_cast<float>(seconds));
}

void QCamera_SetAutoExposureTime(QCamera* self) {
	self->setAutoExposureTime();
}

void QCamera_SetWhiteBalanceMode(QCamera* self, int mode) {
	self->setWhiteBalanceMode(static_cast<QCamera::WhiteBalanceMode>(mode));
}

void QCamera_SetColorTemperature(QCamera* self, int colorTemperature) {
	self->setColorTemperature(static_cast<int>(colorTemperature));
}

void QCamera_ActiveChanged(QCamera* self, bool param1) {
	self->activeChanged(param1);
}

void QCamera_connect_ActiveChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(bool)>(&QCamera::activeChanged), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QCamera_ActiveChanged(slot, sigval1);
	});
}

void QCamera_ErrorChanged(QCamera* self) {
	self->errorChanged();
}

void QCamera_connect_ErrorChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::errorChanged), self, [=]() {
		miqt_exec_callback_QCamera_ErrorChanged(slot);
	});
}

void QCamera_ErrorOccurred(QCamera* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->errorOccurred(static_cast<QCamera::Error>(error), errorString_QString);
}

void QCamera_connect_ErrorOccurred(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::Error, const QString&)>(&QCamera::errorOccurred), self, [=](QCamera::Error error, const QString& errorString) {
		QCamera::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		const QString errorString_ret = errorString;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray errorString_b = errorString_ret.toUtf8();
		struct miqt_string errorString_ms;
		errorString_ms.len = errorString_b.length();
		errorString_ms.data = static_cast<char*>(malloc(errorString_ms.len));
		memcpy(errorString_ms.data, errorString_b.data(), errorString_ms.len);
		struct miqt_string sigval2 = errorString_ms;
		miqt_exec_callback_QCamera_ErrorOccurred(slot, sigval1, sigval2);
	});
}

void QCamera_CameraDeviceChanged(QCamera* self) {
	self->cameraDeviceChanged();
}

void QCamera_connect_CameraDeviceChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::cameraDeviceChanged), self, [=]() {
		miqt_exec_callback_QCamera_CameraDeviceChanged(slot);
	});
}

void QCamera_CameraFormatChanged(QCamera* self) {
	self->cameraFormatChanged();
}

void QCamera_connect_CameraFormatChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::cameraFormatChanged), self, [=]() {
		miqt_exec_callback_QCamera_CameraFormatChanged(slot);
	});
}

void QCamera_SupportedFeaturesChanged(QCamera* self) {
	self->supportedFeaturesChanged();
}

void QCamera_connect_SupportedFeaturesChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::supportedFeaturesChanged), self, [=]() {
		miqt_exec_callback_QCamera_SupportedFeaturesChanged(slot);
	});
}

void QCamera_FocusModeChanged(QCamera* self) {
	self->focusModeChanged();
}

void QCamera_connect_FocusModeChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::focusModeChanged), self, [=]() {
		miqt_exec_callback_QCamera_FocusModeChanged(slot);
	});
}

void QCamera_ZoomFactorChanged(QCamera* self, float param1) {
	self->zoomFactorChanged(static_cast<float>(param1));
}

void QCamera_connect_ZoomFactorChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(float)>(&QCamera::zoomFactorChanged), self, [=](float param1) {
		float sigval1 = param1;
		miqt_exec_callback_QCamera_ZoomFactorChanged(slot, sigval1);
	});
}

void QCamera_MinimumZoomFactorChanged(QCamera* self, float param1) {
	self->minimumZoomFactorChanged(static_cast<float>(param1));
}

void QCamera_connect_MinimumZoomFactorChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(float)>(&QCamera::minimumZoomFactorChanged), self, [=](float param1) {
		float sigval1 = param1;
		miqt_exec_callback_QCamera_MinimumZoomFactorChanged(slot, sigval1);
	});
}

void QCamera_MaximumZoomFactorChanged(QCamera* self, float param1) {
	self->maximumZoomFactorChanged(static_cast<float>(param1));
}

void QCamera_connect_MaximumZoomFactorChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(float)>(&QCamera::maximumZoomFactorChanged), self, [=](float param1) {
		float sigval1 = param1;
		miqt_exec_callback_QCamera_MaximumZoomFactorChanged(slot, sigval1);
	});
}

void QCamera_FocusDistanceChanged(QCamera* self, float param1) {
	self->focusDistanceChanged(static_cast<float>(param1));
}

void QCamera_connect_FocusDistanceChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(float)>(&QCamera::focusDistanceChanged), self, [=](float param1) {
		float sigval1 = param1;
		miqt_exec_callback_QCamera_FocusDistanceChanged(slot, sigval1);
	});
}

void QCamera_FocusPointChanged(QCamera* self) {
	self->focusPointChanged();
}

void QCamera_connect_FocusPointChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::focusPointChanged), self, [=]() {
		miqt_exec_callback_QCamera_FocusPointChanged(slot);
	});
}

void QCamera_CustomFocusPointChanged(QCamera* self) {
	self->customFocusPointChanged();
}

void QCamera_connect_CustomFocusPointChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::customFocusPointChanged), self, [=]() {
		miqt_exec_callback_QCamera_CustomFocusPointChanged(slot);
	});
}

void QCamera_FlashReady(QCamera* self, bool param1) {
	self->flashReady(param1);
}

void QCamera_connect_FlashReady(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(bool)>(&QCamera::flashReady), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QCamera_FlashReady(slot, sigval1);
	});
}

void QCamera_FlashModeChanged(QCamera* self) {
	self->flashModeChanged();
}

void QCamera_connect_FlashModeChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::flashModeChanged), self, [=]() {
		miqt_exec_callback_QCamera_FlashModeChanged(slot);
	});
}

void QCamera_TorchModeChanged(QCamera* self) {
	self->torchModeChanged();
}

void QCamera_connect_TorchModeChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::torchModeChanged), self, [=]() {
		miqt_exec_callback_QCamera_TorchModeChanged(slot);
	});
}

void QCamera_ExposureTimeChanged(QCamera* self, float speed) {
	self->exposureTimeChanged(static_cast<float>(speed));
}

void QCamera_connect_ExposureTimeChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(float)>(&QCamera::exposureTimeChanged), self, [=](float speed) {
		float sigval1 = speed;
		miqt_exec_callback_QCamera_ExposureTimeChanged(slot, sigval1);
	});
}

void QCamera_ManualExposureTimeChanged(QCamera* self, float speed) {
	self->manualExposureTimeChanged(static_cast<float>(speed));
}

void QCamera_connect_ManualExposureTimeChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(float)>(&QCamera::manualExposureTimeChanged), self, [=](float speed) {
		float sigval1 = speed;
		miqt_exec_callback_QCamera_ManualExposureTimeChanged(slot, sigval1);
	});
}

void QCamera_IsoSensitivityChanged(QCamera* self, int param1) {
	self->isoSensitivityChanged(static_cast<int>(param1));
}

void QCamera_connect_IsoSensitivityChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(int)>(&QCamera::isoSensitivityChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QCamera_IsoSensitivityChanged(slot, sigval1);
	});
}

void QCamera_ManualIsoSensitivityChanged(QCamera* self, int param1) {
	self->manualIsoSensitivityChanged(static_cast<int>(param1));
}

void QCamera_connect_ManualIsoSensitivityChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(int)>(&QCamera::manualIsoSensitivityChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QCamera_ManualIsoSensitivityChanged(slot, sigval1);
	});
}

void QCamera_ExposureCompensationChanged(QCamera* self, float param1) {
	self->exposureCompensationChanged(static_cast<float>(param1));
}

void QCamera_connect_ExposureCompensationChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(float)>(&QCamera::exposureCompensationChanged), self, [=](float param1) {
		float sigval1 = param1;
		miqt_exec_callback_QCamera_ExposureCompensationChanged(slot, sigval1);
	});
}

void QCamera_ExposureModeChanged(QCamera* self) {
	self->exposureModeChanged();
}

void QCamera_connect_ExposureModeChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::exposureModeChanged), self, [=]() {
		miqt_exec_callback_QCamera_ExposureModeChanged(slot);
	});
}

void QCamera_WhiteBalanceModeChanged(const QCamera* self) {
	self->whiteBalanceModeChanged();
}

void QCamera_connect_WhiteBalanceModeChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)() const>(&QCamera::whiteBalanceModeChanged), self, [=]() {
		miqt_exec_callback_QCamera_WhiteBalanceModeChanged(slot);
	});
}

void QCamera_ColorTemperatureChanged(const QCamera* self) {
	self->colorTemperatureChanged();
}

void QCamera_connect_ColorTemperatureChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)() const>(&QCamera::colorTemperatureChanged), self, [=]() {
		miqt_exec_callback_QCamera_ColorTemperatureChanged(slot);
	});
}

void QCamera_BrightnessChanged(QCamera* self) {
	self->brightnessChanged();
}

void QCamera_connect_BrightnessChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::brightnessChanged), self, [=]() {
		miqt_exec_callback_QCamera_BrightnessChanged(slot);
	});
}

void QCamera_ContrastChanged(QCamera* self) {
	self->contrastChanged();
}

void QCamera_connect_ContrastChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::contrastChanged), self, [=]() {
		miqt_exec_callback_QCamera_ContrastChanged(slot);
	});
}

void QCamera_SaturationChanged(QCamera* self) {
	self->saturationChanged();
}

void QCamera_connect_SaturationChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::saturationChanged), self, [=]() {
		miqt_exec_callback_QCamera_SaturationChanged(slot);
	});
}

void QCamera_HueChanged(QCamera* self) {
	self->hueChanged();
}

void QCamera_connect_HueChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::hueChanged), self, [=]() {
		miqt_exec_callback_QCamera_HueChanged(slot);
	});
}

struct miqt_string QCamera_Tr2(const char* s, const char* c) {
	QString _ret = QCamera::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCamera_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCamera::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCamera_Delete(QCamera* self) {
	delete self;
}

