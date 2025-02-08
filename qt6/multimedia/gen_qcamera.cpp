#include <QCamera>
#include <QCameraDevice>
#include <QCameraFormat>
#include <QChildEvent>
#include <QEvent>
#include <QMediaCaptureSession>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qcamera.h>
#include "gen_qcamera.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCamera_activeChanged(intptr_t, bool);
void miqt_exec_callback_QCamera_errorChanged(intptr_t);
void miqt_exec_callback_QCamera_errorOccurred(intptr_t, int, struct miqt_string);
void miqt_exec_callback_QCamera_cameraDeviceChanged(intptr_t);
void miqt_exec_callback_QCamera_cameraFormatChanged(intptr_t);
void miqt_exec_callback_QCamera_supportedFeaturesChanged(intptr_t);
void miqt_exec_callback_QCamera_focusModeChanged(intptr_t);
void miqt_exec_callback_QCamera_zoomFactorChanged(intptr_t, float);
void miqt_exec_callback_QCamera_minimumZoomFactorChanged(intptr_t, float);
void miqt_exec_callback_QCamera_maximumZoomFactorChanged(intptr_t, float);
void miqt_exec_callback_QCamera_focusDistanceChanged(intptr_t, float);
void miqt_exec_callback_QCamera_focusPointChanged(intptr_t);
void miqt_exec_callback_QCamera_customFocusPointChanged(intptr_t);
void miqt_exec_callback_QCamera_flashReady(intptr_t, bool);
void miqt_exec_callback_QCamera_flashModeChanged(intptr_t);
void miqt_exec_callback_QCamera_torchModeChanged(intptr_t);
void miqt_exec_callback_QCamera_exposureTimeChanged(intptr_t, float);
void miqt_exec_callback_QCamera_manualExposureTimeChanged(intptr_t, float);
void miqt_exec_callback_QCamera_isoSensitivityChanged(intptr_t, int);
void miqt_exec_callback_QCamera_manualIsoSensitivityChanged(intptr_t, int);
void miqt_exec_callback_QCamera_exposureCompensationChanged(intptr_t, float);
void miqt_exec_callback_QCamera_exposureModeChanged(intptr_t);
void miqt_exec_callback_QCamera_whiteBalanceModeChanged(intptr_t);
void miqt_exec_callback_QCamera_colorTemperatureChanged(intptr_t);
void miqt_exec_callback_QCamera_brightnessChanged(intptr_t);
void miqt_exec_callback_QCamera_contrastChanged(intptr_t);
void miqt_exec_callback_QCamera_saturationChanged(intptr_t);
void miqt_exec_callback_QCamera_hueChanged(intptr_t);
bool miqt_exec_callback_QCamera_event(QCamera*, intptr_t, QEvent*);
bool miqt_exec_callback_QCamera_eventFilter(QCamera*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCamera_timerEvent(QCamera*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QCamera_childEvent(QCamera*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCamera_customEvent(QCamera*, intptr_t, QEvent*);
void miqt_exec_callback_QCamera_connectNotify(QCamera*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCamera_disconnectNotify(QCamera*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCamera final : public QCamera {
public:

	MiqtVirtualQCamera(): QCamera() {};
	MiqtVirtualQCamera(const QCameraDevice& cameraDevice): QCamera(cameraDevice) {};
	MiqtVirtualQCamera(QCameraDevice::Position position): QCamera(position) {};
	MiqtVirtualQCamera(QObject* parent): QCamera(parent) {};
	MiqtVirtualQCamera(const QCameraDevice& cameraDevice, QObject* parent): QCamera(cameraDevice, parent) {};
	MiqtVirtualQCamera(QCameraDevice::Position position, QObject* parent): QCamera(position, parent) {};

	virtual ~MiqtVirtualQCamera() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QCamera::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QCamera_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QCamera::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QCamera::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QCamera_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QCamera::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QCamera::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QCamera_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QCamera::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QCamera::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QCamera_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QCamera::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QCamera::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCamera_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QCamera::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QCamera::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCamera_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QCamera::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QCamera::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCamera_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QCamera::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QCamera_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCamera_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCamera_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCamera_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCamera* QCamera_new() {
	return new MiqtVirtualQCamera();
}

QCamera* QCamera_new2(QCameraDevice* cameraDevice) {
	return new MiqtVirtualQCamera(*cameraDevice);
}

QCamera* QCamera_new3(int position) {
	return new MiqtVirtualQCamera(static_cast<QCameraDevice::Position>(position));
}

QCamera* QCamera_new4(QObject* parent) {
	return new MiqtVirtualQCamera(parent);
}

QCamera* QCamera_new5(QCameraDevice* cameraDevice, QObject* parent) {
	return new MiqtVirtualQCamera(*cameraDevice, parent);
}

QCamera* QCamera_new6(int position, QObject* parent) {
	return new MiqtVirtualQCamera(static_cast<QCameraDevice::Position>(position), parent);
}

void QCamera_virtbase(QCamera* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QCamera_metaObject(const QCamera* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCamera_metacast(QCamera* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCamera_tr(const char* s) {
	QString _ret = QCamera::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCamera_isAvailable(const QCamera* self) {
	return self->isAvailable();
}

bool QCamera_isActive(const QCamera* self) {
	return self->isActive();
}

QMediaCaptureSession* QCamera_captureSession(const QCamera* self) {
	return self->captureSession();
}

QCameraDevice* QCamera_cameraDevice(const QCamera* self) {
	return new QCameraDevice(self->cameraDevice());
}

void QCamera_setCameraDevice(QCamera* self, QCameraDevice* cameraDevice) {
	self->setCameraDevice(*cameraDevice);
}

QCameraFormat* QCamera_cameraFormat(const QCamera* self) {
	return new QCameraFormat(self->cameraFormat());
}

void QCamera_setCameraFormat(QCamera* self, QCameraFormat* format) {
	self->setCameraFormat(*format);
}

int QCamera_error(const QCamera* self) {
	QCamera::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QCamera_errorString(const QCamera* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCamera_supportedFeatures(const QCamera* self) {
	QCamera::Features _ret = self->supportedFeatures();
	return static_cast<int>(_ret);
}

int QCamera_focusMode(const QCamera* self) {
	QCamera::FocusMode _ret = self->focusMode();
	return static_cast<int>(_ret);
}

void QCamera_setFocusMode(QCamera* self, int mode) {
	self->setFocusMode(static_cast<QCamera::FocusMode>(mode));
}

bool QCamera_isFocusModeSupported(const QCamera* self, int mode) {
	return self->isFocusModeSupported(static_cast<QCamera::FocusMode>(mode));
}

QPointF* QCamera_focusPoint(const QCamera* self) {
	return new QPointF(self->focusPoint());
}

QPointF* QCamera_customFocusPoint(const QCamera* self) {
	return new QPointF(self->customFocusPoint());
}

void QCamera_setCustomFocusPoint(QCamera* self, QPointF* point) {
	self->setCustomFocusPoint(*point);
}

void QCamera_setFocusDistance(QCamera* self, float d) {
	self->setFocusDistance(static_cast<float>(d));
}

float QCamera_focusDistance(const QCamera* self) {
	return self->focusDistance();
}

float QCamera_minimumZoomFactor(const QCamera* self) {
	return self->minimumZoomFactor();
}

float QCamera_maximumZoomFactor(const QCamera* self) {
	return self->maximumZoomFactor();
}

float QCamera_zoomFactor(const QCamera* self) {
	return self->zoomFactor();
}

void QCamera_setZoomFactor(QCamera* self, float factor) {
	self->setZoomFactor(static_cast<float>(factor));
}

int QCamera_flashMode(const QCamera* self) {
	QCamera::FlashMode _ret = self->flashMode();
	return static_cast<int>(_ret);
}

bool QCamera_isFlashModeSupported(const QCamera* self, int mode) {
	return self->isFlashModeSupported(static_cast<QCamera::FlashMode>(mode));
}

bool QCamera_isFlashReady(const QCamera* self) {
	return self->isFlashReady();
}

int QCamera_torchMode(const QCamera* self) {
	QCamera::TorchMode _ret = self->torchMode();
	return static_cast<int>(_ret);
}

bool QCamera_isTorchModeSupported(const QCamera* self, int mode) {
	return self->isTorchModeSupported(static_cast<QCamera::TorchMode>(mode));
}

int QCamera_exposureMode(const QCamera* self) {
	QCamera::ExposureMode _ret = self->exposureMode();
	return static_cast<int>(_ret);
}

bool QCamera_isExposureModeSupported(const QCamera* self, int mode) {
	return self->isExposureModeSupported(static_cast<QCamera::ExposureMode>(mode));
}

float QCamera_exposureCompensation(const QCamera* self) {
	return self->exposureCompensation();
}

int QCamera_isoSensitivity(const QCamera* self) {
	return self->isoSensitivity();
}

int QCamera_manualIsoSensitivity(const QCamera* self) {
	return self->manualIsoSensitivity();
}

float QCamera_exposureTime(const QCamera* self) {
	return self->exposureTime();
}

float QCamera_manualExposureTime(const QCamera* self) {
	return self->manualExposureTime();
}

int QCamera_minimumIsoSensitivity(const QCamera* self) {
	return self->minimumIsoSensitivity();
}

int QCamera_maximumIsoSensitivity(const QCamera* self) {
	return self->maximumIsoSensitivity();
}

float QCamera_minimumExposureTime(const QCamera* self) {
	return self->minimumExposureTime();
}

float QCamera_maximumExposureTime(const QCamera* self) {
	return self->maximumExposureTime();
}

int QCamera_whiteBalanceMode(const QCamera* self) {
	QCamera::WhiteBalanceMode _ret = self->whiteBalanceMode();
	return static_cast<int>(_ret);
}

bool QCamera_isWhiteBalanceModeSupported(const QCamera* self, int mode) {
	return self->isWhiteBalanceModeSupported(static_cast<QCamera::WhiteBalanceMode>(mode));
}

int QCamera_colorTemperature(const QCamera* self) {
	return self->colorTemperature();
}

void QCamera_setActive(QCamera* self, bool active) {
	self->setActive(active);
}

void QCamera_start(QCamera* self) {
	self->start();
}

void QCamera_stop(QCamera* self) {
	self->stop();
}

void QCamera_zoomTo(QCamera* self, float zoom, float rate) {
	self->zoomTo(static_cast<float>(zoom), static_cast<float>(rate));
}

void QCamera_setFlashMode(QCamera* self, int mode) {
	self->setFlashMode(static_cast<QCamera::FlashMode>(mode));
}

void QCamera_setTorchMode(QCamera* self, int mode) {
	self->setTorchMode(static_cast<QCamera::TorchMode>(mode));
}

void QCamera_setExposureMode(QCamera* self, int mode) {
	self->setExposureMode(static_cast<QCamera::ExposureMode>(mode));
}

void QCamera_setExposureCompensation(QCamera* self, float ev) {
	self->setExposureCompensation(static_cast<float>(ev));
}

void QCamera_setManualIsoSensitivity(QCamera* self, int iso) {
	self->setManualIsoSensitivity(static_cast<int>(iso));
}

void QCamera_setAutoIsoSensitivity(QCamera* self) {
	self->setAutoIsoSensitivity();
}

void QCamera_setManualExposureTime(QCamera* self, float seconds) {
	self->setManualExposureTime(static_cast<float>(seconds));
}

void QCamera_setAutoExposureTime(QCamera* self) {
	self->setAutoExposureTime();
}

void QCamera_setWhiteBalanceMode(QCamera* self, int mode) {
	self->setWhiteBalanceMode(static_cast<QCamera::WhiteBalanceMode>(mode));
}

void QCamera_setColorTemperature(QCamera* self, int colorTemperature) {
	self->setColorTemperature(static_cast<int>(colorTemperature));
}

void QCamera_activeChanged(QCamera* self, bool param1) {
	self->activeChanged(param1);
}

void QCamera_connect_activeChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)(bool)>(&QCamera::activeChanged), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QCamera_activeChanged(slot, sigval1);
	});
}

void QCamera_errorChanged(QCamera* self) {
	self->errorChanged();
}

void QCamera_connect_errorChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::errorChanged), self, [=]() {
		miqt_exec_callback_QCamera_errorChanged(slot);
	});
}

void QCamera_errorOccurred(QCamera* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->errorOccurred(static_cast<QCamera::Error>(error), errorString_QString);
}

void QCamera_connect_errorOccurred(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)(QCamera::Error, const QString&)>(&QCamera::errorOccurred), self, [=](QCamera::Error error, const QString& errorString) {
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
		miqt_exec_callback_QCamera_errorOccurred(slot, sigval1, sigval2);
	});
}

void QCamera_cameraDeviceChanged(QCamera* self) {
	self->cameraDeviceChanged();
}

void QCamera_connect_cameraDeviceChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::cameraDeviceChanged), self, [=]() {
		miqt_exec_callback_QCamera_cameraDeviceChanged(slot);
	});
}

void QCamera_cameraFormatChanged(QCamera* self) {
	self->cameraFormatChanged();
}

void QCamera_connect_cameraFormatChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::cameraFormatChanged), self, [=]() {
		miqt_exec_callback_QCamera_cameraFormatChanged(slot);
	});
}

void QCamera_supportedFeaturesChanged(QCamera* self) {
	self->supportedFeaturesChanged();
}

void QCamera_connect_supportedFeaturesChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::supportedFeaturesChanged), self, [=]() {
		miqt_exec_callback_QCamera_supportedFeaturesChanged(slot);
	});
}

void QCamera_focusModeChanged(QCamera* self) {
	self->focusModeChanged();
}

void QCamera_connect_focusModeChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::focusModeChanged), self, [=]() {
		miqt_exec_callback_QCamera_focusModeChanged(slot);
	});
}

void QCamera_zoomFactorChanged(QCamera* self, float param1) {
	self->zoomFactorChanged(static_cast<float>(param1));
}

void QCamera_connect_zoomFactorChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)(float)>(&QCamera::zoomFactorChanged), self, [=](float param1) {
		float sigval1 = param1;
		miqt_exec_callback_QCamera_zoomFactorChanged(slot, sigval1);
	});
}

void QCamera_minimumZoomFactorChanged(QCamera* self, float param1) {
	self->minimumZoomFactorChanged(static_cast<float>(param1));
}

void QCamera_connect_minimumZoomFactorChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)(float)>(&QCamera::minimumZoomFactorChanged), self, [=](float param1) {
		float sigval1 = param1;
		miqt_exec_callback_QCamera_minimumZoomFactorChanged(slot, sigval1);
	});
}

void QCamera_maximumZoomFactorChanged(QCamera* self, float param1) {
	self->maximumZoomFactorChanged(static_cast<float>(param1));
}

void QCamera_connect_maximumZoomFactorChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)(float)>(&QCamera::maximumZoomFactorChanged), self, [=](float param1) {
		float sigval1 = param1;
		miqt_exec_callback_QCamera_maximumZoomFactorChanged(slot, sigval1);
	});
}

void QCamera_focusDistanceChanged(QCamera* self, float param1) {
	self->focusDistanceChanged(static_cast<float>(param1));
}

void QCamera_connect_focusDistanceChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)(float)>(&QCamera::focusDistanceChanged), self, [=](float param1) {
		float sigval1 = param1;
		miqt_exec_callback_QCamera_focusDistanceChanged(slot, sigval1);
	});
}

void QCamera_focusPointChanged(QCamera* self) {
	self->focusPointChanged();
}

void QCamera_connect_focusPointChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::focusPointChanged), self, [=]() {
		miqt_exec_callback_QCamera_focusPointChanged(slot);
	});
}

void QCamera_customFocusPointChanged(QCamera* self) {
	self->customFocusPointChanged();
}

void QCamera_connect_customFocusPointChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::customFocusPointChanged), self, [=]() {
		miqt_exec_callback_QCamera_customFocusPointChanged(slot);
	});
}

void QCamera_flashReady(QCamera* self, bool param1) {
	self->flashReady(param1);
}

void QCamera_connect_flashReady(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)(bool)>(&QCamera::flashReady), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QCamera_flashReady(slot, sigval1);
	});
}

void QCamera_flashModeChanged(QCamera* self) {
	self->flashModeChanged();
}

void QCamera_connect_flashModeChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::flashModeChanged), self, [=]() {
		miqt_exec_callback_QCamera_flashModeChanged(slot);
	});
}

void QCamera_torchModeChanged(QCamera* self) {
	self->torchModeChanged();
}

void QCamera_connect_torchModeChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::torchModeChanged), self, [=]() {
		miqt_exec_callback_QCamera_torchModeChanged(slot);
	});
}

void QCamera_exposureTimeChanged(QCamera* self, float speed) {
	self->exposureTimeChanged(static_cast<float>(speed));
}

void QCamera_connect_exposureTimeChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)(float)>(&QCamera::exposureTimeChanged), self, [=](float speed) {
		float sigval1 = speed;
		miqt_exec_callback_QCamera_exposureTimeChanged(slot, sigval1);
	});
}

void QCamera_manualExposureTimeChanged(QCamera* self, float speed) {
	self->manualExposureTimeChanged(static_cast<float>(speed));
}

void QCamera_connect_manualExposureTimeChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)(float)>(&QCamera::manualExposureTimeChanged), self, [=](float speed) {
		float sigval1 = speed;
		miqt_exec_callback_QCamera_manualExposureTimeChanged(slot, sigval1);
	});
}

void QCamera_isoSensitivityChanged(QCamera* self, int param1) {
	self->isoSensitivityChanged(static_cast<int>(param1));
}

void QCamera_connect_isoSensitivityChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)(int)>(&QCamera::isoSensitivityChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QCamera_isoSensitivityChanged(slot, sigval1);
	});
}

void QCamera_manualIsoSensitivityChanged(QCamera* self, int param1) {
	self->manualIsoSensitivityChanged(static_cast<int>(param1));
}

void QCamera_connect_manualIsoSensitivityChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)(int)>(&QCamera::manualIsoSensitivityChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QCamera_manualIsoSensitivityChanged(slot, sigval1);
	});
}

void QCamera_exposureCompensationChanged(QCamera* self, float param1) {
	self->exposureCompensationChanged(static_cast<float>(param1));
}

void QCamera_connect_exposureCompensationChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)(float)>(&QCamera::exposureCompensationChanged), self, [=](float param1) {
		float sigval1 = param1;
		miqt_exec_callback_QCamera_exposureCompensationChanged(slot, sigval1);
	});
}

void QCamera_exposureModeChanged(QCamera* self) {
	self->exposureModeChanged();
}

void QCamera_connect_exposureModeChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::exposureModeChanged), self, [=]() {
		miqt_exec_callback_QCamera_exposureModeChanged(slot);
	});
}

void QCamera_whiteBalanceModeChanged(const QCamera* self) {
	self->whiteBalanceModeChanged();
}

void QCamera_connect_whiteBalanceModeChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)() const>(&QCamera::whiteBalanceModeChanged), self, [=]() {
		miqt_exec_callback_QCamera_whiteBalanceModeChanged(slot);
	});
}

void QCamera_colorTemperatureChanged(const QCamera* self) {
	self->colorTemperatureChanged();
}

void QCamera_connect_colorTemperatureChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)() const>(&QCamera::colorTemperatureChanged), self, [=]() {
		miqt_exec_callback_QCamera_colorTemperatureChanged(slot);
	});
}

void QCamera_brightnessChanged(QCamera* self) {
	self->brightnessChanged();
}

void QCamera_connect_brightnessChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::brightnessChanged), self, [=]() {
		miqt_exec_callback_QCamera_brightnessChanged(slot);
	});
}

void QCamera_contrastChanged(QCamera* self) {
	self->contrastChanged();
}

void QCamera_connect_contrastChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::contrastChanged), self, [=]() {
		miqt_exec_callback_QCamera_contrastChanged(slot);
	});
}

void QCamera_saturationChanged(QCamera* self) {
	self->saturationChanged();
}

void QCamera_connect_saturationChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::saturationChanged), self, [=]() {
		miqt_exec_callback_QCamera_saturationChanged(slot);
	});
}

void QCamera_hueChanged(QCamera* self) {
	self->hueChanged();
}

void QCamera_connect_hueChanged(QCamera* self, intptr_t slot) {
	MiqtVirtualQCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::hueChanged), self, [=]() {
		miqt_exec_callback_QCamera_hueChanged(slot);
	});
}

struct miqt_string QCamera_tr2(const char* s, const char* c) {
	QString _ret = QCamera::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCamera_tr3(const char* s, const char* c, int n) {
	QString _ret = QCamera::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCamera_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QCamera_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQCamera*)(self) )->virtualbase_event(event);
}

bool QCamera_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QCamera_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQCamera*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QCamera_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QCamera_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQCamera*)(self) )->virtualbase_timerEvent(event);
}

bool QCamera_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QCamera_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQCamera*)(self) )->virtualbase_childEvent(event);
}

bool QCamera_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QCamera_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCamera*)(self) )->virtualbase_customEvent(event);
}

bool QCamera_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QCamera_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCamera*)(self) )->virtualbase_connectNotify(signal);
}

bool QCamera_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QCamera_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCamera*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QCamera_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QCamera_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QCamera_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QCamera_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QCamera_delete(QCamera* self) {
	delete self;
}

