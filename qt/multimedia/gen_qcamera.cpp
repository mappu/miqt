#include <QAbstractVideoSurface>
#include <QByteArray>
#include <QCamera>
#define WORKAROUND_INNER_CLASS_DEFINITION_QCamera__FrameRateRange
#include <QCameraExposure>
#include <QCameraFocus>
#include <QCameraImageProcessing>
#include <QCameraInfo>
#include <QCameraViewfinderSettings>
#include <QChildEvent>
#include <QEvent>
#include <QGraphicsVideoItem>
#include <QList>
#include <QMediaObject>
#include <QMediaService>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVideoWidget>
#include <qcamera.h>
#include "gen_qcamera.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCamera_stateChanged(intptr_t, int);
void miqt_exec_callback_QCamera_captureModeChanged(intptr_t, int);
void miqt_exec_callback_QCamera_statusChanged(intptr_t, int);
void miqt_exec_callback_QCamera_locked(intptr_t);
void miqt_exec_callback_QCamera_lockFailed(intptr_t);
void miqt_exec_callback_QCamera_lockStatusChanged(intptr_t, int, int);
void miqt_exec_callback_QCamera_lockStatusChanged2(intptr_t, int, int, int);
void miqt_exec_callback_QCamera_errorWithQCameraError(intptr_t, int);
void miqt_exec_callback_QCamera_errorOccurred(intptr_t, int);
int miqt_exec_callback_QCamera_availability(const QCamera*, intptr_t);
bool miqt_exec_callback_QCamera_isAvailable(const QCamera*, intptr_t);
QMediaService* miqt_exec_callback_QCamera_service(const QCamera*, intptr_t);
bool miqt_exec_callback_QCamera_bind(QCamera*, intptr_t, QObject*);
void miqt_exec_callback_QCamera_unbind(QCamera*, intptr_t, QObject*);
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

	MiqtVirtualQCamera(): QCamera() {}
	MiqtVirtualQCamera(const QByteArray& deviceName): QCamera(deviceName) {}
	MiqtVirtualQCamera(const QCameraInfo& cameraInfo): QCamera(cameraInfo) {}
	MiqtVirtualQCamera(QCamera::Position position): QCamera(position) {}
	MiqtVirtualQCamera(QObject* parent): QCamera(parent) {}
	MiqtVirtualQCamera(const QByteArray& deviceName, QObject* parent): QCamera(deviceName, parent) {}
	MiqtVirtualQCamera(const QCameraInfo& cameraInfo, QObject* parent): QCamera(cameraInfo, parent) {}
	MiqtVirtualQCamera(QCamera::Position position, QObject* parent): QCamera(position, parent) {}

	virtual ~MiqtVirtualQCamera() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__availability = 0;

	// Subclass to allow providing a Go implementation
	virtual QMultimedia::AvailabilityStatus availability() const override {
		if (handle__availability == 0) {
			return QCamera::availability();
		}

		int callback_return_value = miqt_exec_callback_QCamera_availability(this, handle__availability);
		return static_cast<QMultimedia::AvailabilityStatus>(callback_return_value);
	}

	friend int QCamera_virtualbase_availability(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isAvailable() const override {
		if (handle__isAvailable == 0) {
			return QCamera::isAvailable();
		}

		bool callback_return_value = miqt_exec_callback_QCamera_isAvailable(this, handle__isAvailable);
		return callback_return_value;
	}

	friend bool QCamera_virtualbase_isAvailable(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__service = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaService* service() const override {
		if (handle__service == 0) {
			return QCamera::service();
		}

		QMediaService* callback_return_value = miqt_exec_callback_QCamera_service(this, handle__service);
		return callback_return_value;
	}

	friend QMediaService* QCamera_virtualbase_service(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bind = 0;

	// Subclass to allow providing a Go implementation
	virtual bool bind(QObject* param1) override {
		if (handle__bind == 0) {
			return QCamera::bind(param1);
		}

		QObject* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QCamera_bind(this, handle__bind, sigval1);
		return callback_return_value;
	}

	friend bool QCamera_virtualbase_bind(void* self, QObject* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__unbind = 0;

	// Subclass to allow providing a Go implementation
	virtual void unbind(QObject* param1) override {
		if (handle__unbind == 0) {
			QCamera::unbind(param1);
			return;
		}

		QObject* sigval1 = param1;
		miqt_exec_callback_QCamera_unbind(this, handle__unbind, sigval1);

	}

	friend void QCamera_virtualbase_unbind(void* self, QObject* param1);

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

	friend bool QCamera_virtualbase_event(void* self, QEvent* event);

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

	friend bool QCamera_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

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

	friend void QCamera_virtualbase_timerEvent(void* self, QTimerEvent* event);

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

	friend void QCamera_virtualbase_childEvent(void* self, QChildEvent* event);

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

	friend void QCamera_virtualbase_customEvent(void* self, QEvent* event);

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

	friend void QCamera_virtualbase_connectNotify(void* self, QMetaMethod* signal);

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

	friend void QCamera_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QCamera_protectedbase_addPropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
	friend void QCamera_protectedbase_removePropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
	friend QObject* QCamera_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCamera_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCamera_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCamera_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCamera* QCamera_new() {
	return new (std::nothrow) MiqtVirtualQCamera();
}

QCamera* QCamera_new2(struct miqt_string deviceName) {
	QByteArray deviceName_QByteArray(deviceName.data, deviceName.len);
	return new (std::nothrow) MiqtVirtualQCamera(deviceName_QByteArray);
}

QCamera* QCamera_new3(QCameraInfo* cameraInfo) {
	return new (std::nothrow) MiqtVirtualQCamera(*cameraInfo);
}

QCamera* QCamera_new4(int position) {
	return new (std::nothrow) MiqtVirtualQCamera(static_cast<QCamera::Position>(position));
}

QCamera* QCamera_new5(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQCamera(parent);
}

QCamera* QCamera_new6(struct miqt_string deviceName, QObject* parent) {
	QByteArray deviceName_QByteArray(deviceName.data, deviceName.len);
	return new (std::nothrow) MiqtVirtualQCamera(deviceName_QByteArray, parent);
}

QCamera* QCamera_new7(QCameraInfo* cameraInfo, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQCamera(*cameraInfo, parent);
}

QCamera* QCamera_new8(int position, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQCamera(static_cast<QCamera::Position>(position), parent);
}

void QCamera_virtbase(QCamera* src, QMediaObject** outptr_QMediaObject) {
	*outptr_QMediaObject = static_cast<QMediaObject*>(src);
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

struct miqt_string QCamera_trUtf8(const char* s) {
	QString _ret = QCamera::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QCamera_availableDevices() {
	QList<QByteArray> _ret = QCamera::availableDevices();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QCamera_deviceDescription(struct miqt_string device) {
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

int QCamera_availability(const QCamera* self) {
	QMultimedia::AvailabilityStatus _ret = self->availability();
	return static_cast<int>(_ret);
}

int QCamera_state(const QCamera* self) {
	QCamera::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QCamera_status(const QCamera* self) {
	QCamera::Status _ret = self->status();
	return static_cast<int>(_ret);
}

int QCamera_captureMode(const QCamera* self) {
	QCamera::CaptureModes _ret = self->captureMode();
	return static_cast<int>(_ret);
}

bool QCamera_isCaptureModeSupported(const QCamera* self, int mode) {
	return self->isCaptureModeSupported(static_cast<QCamera::CaptureModes>(mode));
}

QCameraExposure* QCamera_exposure(const QCamera* self) {
	return self->exposure();
}

QCameraFocus* QCamera_focus(const QCamera* self) {
	return self->focus();
}

QCameraImageProcessing* QCamera_imageProcessing(const QCamera* self) {
	return self->imageProcessing();
}

void QCamera_setViewfinder(QCamera* self, QVideoWidget* viewfinder) {
	self->setViewfinder(viewfinder);
}

void QCamera_setViewfinderWithViewfinder(QCamera* self, QGraphicsVideoItem* viewfinder) {
	self->setViewfinder(viewfinder);
}

void QCamera_setViewfinderWithSurface(QCamera* self, QAbstractVideoSurface* surface) {
	self->setViewfinder(surface);
}

QCameraViewfinderSettings* QCamera_viewfinderSettings(const QCamera* self) {
	return new QCameraViewfinderSettings(self->viewfinderSettings());
}

void QCamera_setViewfinderSettings(QCamera* self, QCameraViewfinderSettings* settings) {
	self->setViewfinderSettings(*settings);
}

struct miqt_array /* of QCameraViewfinderSettings* */  QCamera_supportedViewfinderSettings(const QCamera* self) {
	QList<QCameraViewfinderSettings> _ret = self->supportedViewfinderSettings();
	// Convert QList<> from C++ memory to manually-managed C memory
	QCameraViewfinderSettings** _arr = static_cast<QCameraViewfinderSettings**>(malloc(sizeof(QCameraViewfinderSettings*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = new QCameraViewfinderSettings(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QSize* */  QCamera_supportedViewfinderResolutions(const QCamera* self) {
	QList<QSize> _ret = self->supportedViewfinderResolutions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QCamera__FrameRateRange* */  QCamera_supportedViewfinderFrameRateRanges(const QCamera* self) {
	QList<QCamera::FrameRateRange> _ret = self->supportedViewfinderFrameRateRanges();
	// Convert QList<> from C++ memory to manually-managed C memory
	QCamera__FrameRateRange** _arr = static_cast<QCamera__FrameRateRange**>(malloc(sizeof(QCamera__FrameRateRange*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = new QCamera::FrameRateRange(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QCamera_supportedViewfinderPixelFormats(const QCamera* self) {
	QList<QVideoFrame::PixelFormat> _ret = self->supportedViewfinderPixelFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		QVideoFrame::PixelFormat _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
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

int QCamera_supportedLocks(const QCamera* self) {
	QCamera::LockTypes _ret = self->supportedLocks();
	return static_cast<int>(_ret);
}

int QCamera_requestedLocks(const QCamera* self) {
	QCamera::LockTypes _ret = self->requestedLocks();
	return static_cast<int>(_ret);
}

int QCamera_lockStatus(const QCamera* self) {
	QCamera::LockStatus _ret = self->lockStatus();
	return static_cast<int>(_ret);
}

int QCamera_lockStatusWithLock(const QCamera* self, int lock) {
	QCamera::LockStatus _ret = self->lockStatus(static_cast<QCamera::LockType>(lock));
	return static_cast<int>(_ret);
}

void QCamera_setCaptureMode(QCamera* self, int mode) {
	self->setCaptureMode(static_cast<QCamera::CaptureModes>(mode));
}

void QCamera_load(QCamera* self) {
	self->load();
}

void QCamera_unload(QCamera* self) {
	self->unload();
}

void QCamera_start(QCamera* self) {
	self->start();
}

void QCamera_stop(QCamera* self) {
	self->stop();
}

void QCamera_searchAndLock(QCamera* self) {
	self->searchAndLock();
}

void QCamera_unlock(QCamera* self) {
	self->unlock();
}

void QCamera_searchAndLockWithLocks(QCamera* self, int locks) {
	self->searchAndLock(static_cast<QCamera::LockTypes>(locks));
}

void QCamera_unlockWithLocks(QCamera* self, int locks) {
	self->unlock(static_cast<QCamera::LockTypes>(locks));
}

void QCamera_stateChanged(QCamera* self, int state) {
	self->stateChanged(static_cast<QCamera::State>(state));
}

void QCamera_connect_stateChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::State)>(&QCamera::stateChanged), self, [=](QCamera::State state) {
		QCamera::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QCamera_stateChanged(slot, sigval1);
	});
}

void QCamera_captureModeChanged(QCamera* self, int param1) {
	self->captureModeChanged(static_cast<QCamera::CaptureModes>(param1));
}

void QCamera_connect_captureModeChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::CaptureModes)>(&QCamera::captureModeChanged), self, [=](QCamera::CaptureModes param1) {
		QCamera::CaptureModes param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QCamera_captureModeChanged(slot, sigval1);
	});
}

void QCamera_statusChanged(QCamera* self, int status) {
	self->statusChanged(static_cast<QCamera::Status>(status));
}

void QCamera_connect_statusChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::Status)>(&QCamera::statusChanged), self, [=](QCamera::Status status) {
		QCamera::Status status_ret = status;
		int sigval1 = static_cast<int>(status_ret);
		miqt_exec_callback_QCamera_statusChanged(slot, sigval1);
	});
}

void QCamera_locked(QCamera* self) {
	self->locked();
}

void QCamera_connect_locked(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::locked), self, [=]() {
		miqt_exec_callback_QCamera_locked(slot);
	});
}

void QCamera_lockFailed(QCamera* self) {
	self->lockFailed();
}

void QCamera_connect_lockFailed(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)()>(&QCamera::lockFailed), self, [=]() {
		miqt_exec_callback_QCamera_lockFailed(slot);
	});
}

void QCamera_lockStatusChanged(QCamera* self, int status, int reason) {
	self->lockStatusChanged(static_cast<QCamera::LockStatus>(status), static_cast<QCamera::LockChangeReason>(reason));
}

void QCamera_connect_lockStatusChanged(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::LockStatus, QCamera::LockChangeReason)>(&QCamera::lockStatusChanged), self, [=](QCamera::LockStatus status, QCamera::LockChangeReason reason) {
		QCamera::LockStatus status_ret = status;
		int sigval1 = static_cast<int>(status_ret);
		QCamera::LockChangeReason reason_ret = reason;
		int sigval2 = static_cast<int>(reason_ret);
		miqt_exec_callback_QCamera_lockStatusChanged(slot, sigval1, sigval2);
	});
}

void QCamera_lockStatusChanged2(QCamera* self, int lock, int status, int reason) {
	self->lockStatusChanged(static_cast<QCamera::LockType>(lock), static_cast<QCamera::LockStatus>(status), static_cast<QCamera::LockChangeReason>(reason));
}

void QCamera_connect_lockStatusChanged2(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::LockType, QCamera::LockStatus, QCamera::LockChangeReason)>(&QCamera::lockStatusChanged), self, [=](QCamera::LockType lock, QCamera::LockStatus status, QCamera::LockChangeReason reason) {
		QCamera::LockType lock_ret = lock;
		int sigval1 = static_cast<int>(lock_ret);
		QCamera::LockStatus status_ret = status;
		int sigval2 = static_cast<int>(status_ret);
		QCamera::LockChangeReason reason_ret = reason;
		int sigval3 = static_cast<int>(reason_ret);
		miqt_exec_callback_QCamera_lockStatusChanged2(slot, sigval1, sigval2, sigval3);
	});
}

void QCamera_errorWithQCameraError(QCamera* self, int param1) {
	self->error(static_cast<QCamera::Error>(param1));
}

void QCamera_connect_errorWithQCameraError(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::Error)>(&QCamera::error), self, [=](QCamera::Error param1) {
		QCamera::Error param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QCamera_errorWithQCameraError(slot, sigval1);
	});
}

void QCamera_errorOccurred(QCamera* self, int param1) {
	self->errorOccurred(static_cast<QCamera::Error>(param1));
}

void QCamera_connect_errorOccurred(QCamera* self, intptr_t slot) {
	QCamera::connect(self, static_cast<void (QCamera::*)(QCamera::Error)>(&QCamera::errorOccurred), self, [=](QCamera::Error param1) {
		QCamera::Error param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QCamera_errorOccurred(slot, sigval1);
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

struct miqt_string QCamera_trUtf82(const char* s, const char* c) {
	QString _ret = QCamera::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCamera_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCamera::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QCameraViewfinderSettings* */  QCamera_supportedViewfinderSettingsWithSettings(const QCamera* self, QCameraViewfinderSettings* settings) {
	QList<QCameraViewfinderSettings> _ret = self->supportedViewfinderSettings(*settings);
	// Convert QList<> from C++ memory to manually-managed C memory
	QCameraViewfinderSettings** _arr = static_cast<QCameraViewfinderSettings**>(malloc(sizeof(QCameraViewfinderSettings*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = new QCameraViewfinderSettings(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QSize* */  QCamera_supportedViewfinderResolutionsWithSettings(const QCamera* self, QCameraViewfinderSettings* settings) {
	QList<QSize> _ret = self->supportedViewfinderResolutions(*settings);
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QCamera__FrameRateRange* */  QCamera_supportedViewfinderFrameRateRangesWithSettings(const QCamera* self, QCameraViewfinderSettings* settings) {
	QList<QCamera::FrameRateRange> _ret = self->supportedViewfinderFrameRateRanges(*settings);
	// Convert QList<> from C++ memory to manually-managed C memory
	QCamera__FrameRateRange** _arr = static_cast<QCamera__FrameRateRange**>(malloc(sizeof(QCamera__FrameRateRange*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = new QCamera::FrameRateRange(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QCamera_supportedViewfinderPixelFormatsWithSettings(const QCamera* self, QCameraViewfinderSettings* settings) {
	QList<QVideoFrame::PixelFormat> _ret = self->supportedViewfinderPixelFormats(*settings);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		QVideoFrame::PixelFormat _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QCamera_override_virtual_availability(void* self, intptr_t slot) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__availability = slot;
	return true;
}

int QCamera_virtualbase_availability(const void* self) {
	QMultimedia::AvailabilityStatus _ret = static_cast<const MiqtVirtualQCamera*>(self)->QCamera::availability();
	return static_cast<int>(_ret);
}

bool QCamera_override_virtual_isAvailable(void* self, intptr_t slot) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isAvailable = slot;
	return true;
}

bool QCamera_virtualbase_isAvailable(const void* self) {
	return static_cast<const MiqtVirtualQCamera*>(self)->QCamera::isAvailable();
}

bool QCamera_override_virtual_service(void* self, intptr_t slot) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__service = slot;
	return true;
}

QMediaService* QCamera_virtualbase_service(const void* self) {
	return static_cast<const MiqtVirtualQCamera*>(self)->QCamera::service();
}

bool QCamera_override_virtual_bind(void* self, intptr_t slot) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bind = slot;
	return true;
}

bool QCamera_virtualbase_bind(void* self, QObject* param1) {
	return static_cast<MiqtVirtualQCamera*>(self)->QCamera::bind(param1);
}

bool QCamera_override_virtual_unbind(void* self, intptr_t slot) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__unbind = slot;
	return true;
}

void QCamera_virtualbase_unbind(void* self, QObject* param1) {
	static_cast<MiqtVirtualQCamera*>(self)->QCamera::unbind(param1);
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
	return static_cast<MiqtVirtualQCamera*>(self)->QCamera::event(event);
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
	return static_cast<MiqtVirtualQCamera*>(self)->QCamera::eventFilter(watched, event);
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
	static_cast<MiqtVirtualQCamera*>(self)->QCamera::timerEvent(event);
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
	static_cast<MiqtVirtualQCamera*>(self)->QCamera::childEvent(event);
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
	static_cast<MiqtVirtualQCamera*>(self)->QCamera::customEvent(event);
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
	static_cast<MiqtVirtualQCamera*>(self)->QCamera::connectNotify(*signal);
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
	static_cast<MiqtVirtualQCamera*>(self)->QCamera::disconnectNotify(*signal);
}

void QCamera_protectedbase_addPropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QByteArray name_QByteArray(name.data, name.len);
	self_cast->addPropertyWatch(name_QByteArray);
}

void QCamera_protectedbase_removePropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name) {
	MiqtVirtualQCamera* self_cast = dynamic_cast<MiqtVirtualQCamera*>( (QCamera*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QByteArray name_QByteArray(name.data, name.len);
	self_cast->removePropertyWatch(name_QByteArray);
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

QCamera__FrameRateRange* QCamera__FrameRateRange_new() {
	return new (std::nothrow) QCamera::FrameRateRange();
}

QCamera__FrameRateRange* QCamera__FrameRateRange_new2(double minimum, double maximum) {
	return new (std::nothrow) QCamera::FrameRateRange(static_cast<qreal>(minimum), static_cast<qreal>(maximum));
}

QCamera__FrameRateRange* QCamera__FrameRateRange_new3(QCamera__FrameRateRange* param1) {
	return new (std::nothrow) QCamera::FrameRateRange(*param1);
}

void QCamera__FrameRateRange_delete(QCamera__FrameRateRange* self) {
	delete self;
}

