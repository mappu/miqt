#include <QAbstractVideoSurface>
#include <QByteArray>
#include <QCamera>
#define WORKAROUND_INNER_CLASS_DEFINITION_QCamera__FrameRateRange
#include <QCameraExposure>
#include <QCameraFocus>
#include <QCameraImageProcessing>
#include <QCameraInfo>
#include <QCameraViewfinderSettings>
#include <QGraphicsVideoItem>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoWidget>
#include <qcamera.h>
#include "gen_qcamera.h"
#include "_cgo_export.h"

QCamera* QCamera_new() {
	return new QCamera();
}

QCamera* QCamera_new2(struct miqt_string deviceName) {
	QByteArray deviceName_QByteArray(deviceName.data, deviceName.len);
	return new QCamera(deviceName_QByteArray);
}

QCamera* QCamera_new3(QCameraInfo* cameraInfo) {
	return new QCamera(*cameraInfo);
}

QCamera* QCamera_new4(int position) {
	return new QCamera(static_cast<QCamera::Position>(position));
}

QCamera* QCamera_new5(QObject* parent) {
	return new QCamera(parent);
}

QCamera* QCamera_new6(struct miqt_string deviceName, QObject* parent) {
	QByteArray deviceName_QByteArray(deviceName.data, deviceName.len);
	return new QCamera(deviceName_QByteArray, parent);
}

QCamera* QCamera_new7(QCameraInfo* cameraInfo, QObject* parent) {
	return new QCamera(*cameraInfo, parent);
}

QCamera* QCamera_new8(int position, QObject* parent) {
	return new QCamera(static_cast<QCamera::Position>(position), parent);
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

struct miqt_string QCamera_TrUtf8(const char* s) {
	QString _ret = QCamera::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array QCamera_AvailableDevices() {
	QList<QByteArray> _ret = QCamera::availableDevices();
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

struct miqt_string QCamera_DeviceDescription(struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	QString _ret = QCamera::deviceDescription(device_QByteArray);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCamera_Availability(const QCamera* self) {
	QMultimedia::AvailabilityStatus _ret = self->availability();
	return static_cast<int>(_ret);
}

int QCamera_State(const QCamera* self) {
	QCamera::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QCamera_Status(const QCamera* self) {
	QCamera::Status _ret = self->status();
	return static_cast<int>(_ret);
}

int QCamera_CaptureMode(const QCamera* self) {
	QCamera::CaptureModes _ret = self->captureMode();
	return static_cast<int>(_ret);
}

bool QCamera_IsCaptureModeSupported(const QCamera* self, int mode) {
	return self->isCaptureModeSupported(static_cast<QCamera::CaptureModes>(mode));
}

QCameraExposure* QCamera_Exposure(const QCamera* self) {
	return self->exposure();
}

QCameraFocus* QCamera_Focus(const QCamera* self) {
	return self->focus();
}

QCameraImageProcessing* QCamera_ImageProcessing(const QCamera* self) {
	return self->imageProcessing();
}

void QCamera_SetViewfinder(QCamera* self, QVideoWidget* viewfinder) {
	self->setViewfinder(viewfinder);
}

void QCamera_SetViewfinderWithViewfinder(QCamera* self, QGraphicsVideoItem* viewfinder) {
	self->setViewfinder(viewfinder);
}

void QCamera_SetViewfinderWithSurface(QCamera* self, QAbstractVideoSurface* surface) {
	self->setViewfinder(surface);
}

QCameraViewfinderSettings* QCamera_ViewfinderSettings(const QCamera* self) {
	return new QCameraViewfinderSettings(self->viewfinderSettings());
}

void QCamera_SetViewfinderSettings(QCamera* self, QCameraViewfinderSettings* settings) {
	self->setViewfinderSettings(*settings);
}

struct miqt_array QCamera_SupportedViewfinderSettings(const QCamera* self) {
	QList<QCameraViewfinderSettings> _ret = self->supportedViewfinderSettings();
	// Convert QList<> from C++ memory to manually-managed C memory
	QCameraViewfinderSettings** _arr = static_cast<QCameraViewfinderSettings**>(malloc(sizeof(QCameraViewfinderSettings*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QCameraViewfinderSettings(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QCamera_SupportedViewfinderResolutions(const QCamera* self) {
	QList<QSize> _ret = self->supportedViewfinderResolutions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QCamera_SupportedViewfinderFrameRateRanges(const QCamera* self) {
	QList<QCamera::FrameRateRange> _ret = self->supportedViewfinderFrameRateRanges();
	// Convert QList<> from C++ memory to manually-managed C memory
	QCamera__FrameRateRange** _arr = static_cast<QCamera__FrameRateRange**>(malloc(sizeof(QCamera__FrameRateRange*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QCamera::FrameRateRange(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QCamera_SupportedViewfinderPixelFormats(const QCamera* self) {
	QList<QVideoFrame::PixelFormat> _ret = self->supportedViewfinderPixelFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QVideoFrame::PixelFormat _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
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

int QCamera_SupportedLocks(const QCamera* self) {
	QCamera::LockTypes _ret = self->supportedLocks();
	return static_cast<int>(_ret);
}

int QCamera_RequestedLocks(const QCamera* self) {
	QCamera::LockTypes _ret = self->requestedLocks();
	return static_cast<int>(_ret);
}

int QCamera_LockStatus(const QCamera* self) {
	QCamera::LockStatus _ret = self->lockStatus();
	return static_cast<int>(_ret);
}

int QCamera_LockStatusWithLock(const QCamera* self, int lock) {
	QCamera::LockStatus _ret = self->lockStatus(static_cast<QCamera::LockType>(lock));
	return static_cast<int>(_ret);
}

void QCamera_SetCaptureMode(QCamera* self, int mode) {
	self->setCaptureMode(static_cast<QCamera::CaptureModes>(mode));
}

void QCamera_Load(QCamera* self) {
	self->load();
}

void QCamera_Unload(QCamera* self) {
	self->unload();
}

void QCamera_Start(QCamera* self) {
	self->start();
}

void QCamera_Stop(QCamera* self) {
	self->stop();
}

void QCamera_SearchAndLock(QCamera* self) {
	self->searchAndLock();
}

void QCamera_Unlock(QCamera* self) {
	self->unlock();
}

void QCamera_SearchAndLockWithLocks(QCamera* self, int locks) {
	self->searchAndLock(static_cast<QCamera::LockTypes>(locks));
}

void QCamera_UnlockWithLocks(QCamera* self, int locks) {
	self->unlock(static_cast<QCamera::LockTypes>(locks));
}

void QCamera_StateChanged(QCamera* self, int state) {
	self->stateChanged(static_cast<QCamera::State>(state));
}

void QCamera_connect_StateChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::State)>(&QCamera::stateChanged), self, [=](QCamera::State state) {
		QCamera::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QCamera_StateChanged(slot, sigval1);
	});
}

void QCamera_CaptureModeChanged(QCamera* self, int param1) {
	self->captureModeChanged(static_cast<QCamera::CaptureModes>(param1));
}

void QCamera_connect_CaptureModeChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::CaptureModes)>(&QCamera::captureModeChanged), self, [=](QCamera::CaptureModes param1) {
		QCamera::CaptureModes param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QCamera_CaptureModeChanged(slot, sigval1);
	});
}

void QCamera_StatusChanged(QCamera* self, int status) {
	self->statusChanged(static_cast<QCamera::Status>(status));
}

void QCamera_connect_StatusChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::Status)>(&QCamera::statusChanged), self, [=](QCamera::Status status) {
		QCamera::Status status_ret = status;
		int sigval1 = static_cast<int>(status_ret);
		miqt_exec_callback_QCamera_StatusChanged(slot, sigval1);
	});
}

void QCamera_Locked(QCamera* self) {
	self->locked();
}

void QCamera_connect_Locked(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::locked), self, [=]() {
		miqt_exec_callback_QCamera_Locked(slot);
	});
}

void QCamera_LockFailed(QCamera* self) {
	self->lockFailed();
}

void QCamera_connect_LockFailed(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::lockFailed), self, [=]() {
		miqt_exec_callback_QCamera_LockFailed(slot);
	});
}

void QCamera_LockStatusChanged(QCamera* self, int status, int reason) {
	self->lockStatusChanged(static_cast<QCamera::LockStatus>(status), static_cast<QCamera::LockChangeReason>(reason));
}

void QCamera_connect_LockStatusChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::LockStatus, QCamera::LockChangeReason)>(&QCamera::lockStatusChanged), self, [=](QCamera::LockStatus status, QCamera::LockChangeReason reason) {
		QCamera::LockStatus status_ret = status;
		int sigval1 = static_cast<int>(status_ret);
		QCamera::LockChangeReason reason_ret = reason;
		int sigval2 = static_cast<int>(reason_ret);
		miqt_exec_callback_QCamera_LockStatusChanged(slot, sigval1, sigval2);
	});
}

void QCamera_LockStatusChanged2(QCamera* self, int lock, int status, int reason) {
	self->lockStatusChanged(static_cast<QCamera::LockType>(lock), static_cast<QCamera::LockStatus>(status), static_cast<QCamera::LockChangeReason>(reason));
}

void QCamera_connect_LockStatusChanged2(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::LockType, QCamera::LockStatus, QCamera::LockChangeReason)>(&QCamera::lockStatusChanged), self, [=](QCamera::LockType lock, QCamera::LockStatus status, QCamera::LockChangeReason reason) {
		QCamera::LockType lock_ret = lock;
		int sigval1 = static_cast<int>(lock_ret);
		QCamera::LockStatus status_ret = status;
		int sigval2 = static_cast<int>(status_ret);
		QCamera::LockChangeReason reason_ret = reason;
		int sigval3 = static_cast<int>(reason_ret);
		miqt_exec_callback_QCamera_LockStatusChanged2(slot, sigval1, sigval2, sigval3);
	});
}

void QCamera_ErrorWithQCameraError(QCamera* self, int param1) {
	self->error(static_cast<QCamera::Error>(param1));
}

void QCamera_connect_ErrorWithQCameraError(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::Error)>(&QCamera::error), self, [=](QCamera::Error param1) {
		QCamera::Error param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QCamera_ErrorWithQCameraError(slot, sigval1);
	});
}

void QCamera_ErrorOccurred(QCamera* self, int param1) {
	self->errorOccurred(static_cast<QCamera::Error>(param1));
}

void QCamera_connect_ErrorOccurred(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::Error)>(&QCamera::errorOccurred), self, [=](QCamera::Error param1) {
		QCamera::Error param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QCamera_ErrorOccurred(slot, sigval1);
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

struct miqt_string QCamera_TrUtf82(const char* s, const char* c) {
	QString _ret = QCamera::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCamera_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCamera::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array QCamera_SupportedViewfinderSettings1(const QCamera* self, QCameraViewfinderSettings* settings) {
	QList<QCameraViewfinderSettings> _ret = self->supportedViewfinderSettings(*settings);
	// Convert QList<> from C++ memory to manually-managed C memory
	QCameraViewfinderSettings** _arr = static_cast<QCameraViewfinderSettings**>(malloc(sizeof(QCameraViewfinderSettings*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QCameraViewfinderSettings(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QCamera_SupportedViewfinderResolutions1(const QCamera* self, QCameraViewfinderSettings* settings) {
	QList<QSize> _ret = self->supportedViewfinderResolutions(*settings);
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QCamera_SupportedViewfinderFrameRateRanges1(const QCamera* self, QCameraViewfinderSettings* settings) {
	QList<QCamera::FrameRateRange> _ret = self->supportedViewfinderFrameRateRanges(*settings);
	// Convert QList<> from C++ memory to manually-managed C memory
	QCamera__FrameRateRange** _arr = static_cast<QCamera__FrameRateRange**>(malloc(sizeof(QCamera__FrameRateRange*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QCamera::FrameRateRange(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QCamera_SupportedViewfinderPixelFormats1(const QCamera* self, QCameraViewfinderSettings* settings) {
	QList<QVideoFrame::PixelFormat> _ret = self->supportedViewfinderPixelFormats(*settings);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QVideoFrame::PixelFormat _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QCamera_Delete(QCamera* self) {
	delete self;
}

QCamera__FrameRateRange* QCamera__FrameRateRange_new() {
	return new QCamera::FrameRateRange();
}

QCamera__FrameRateRange* QCamera__FrameRateRange_new2(double minimum, double maximum) {
	return new QCamera::FrameRateRange(static_cast<qreal>(minimum), static_cast<qreal>(maximum));
}

QCamera__FrameRateRange* QCamera__FrameRateRange_new3(QCamera__FrameRateRange* param1) {
	return new QCamera::FrameRateRange(*param1);
}

void QCamera__FrameRateRange_Delete(QCamera__FrameRateRange* self) {
	delete self;
}

