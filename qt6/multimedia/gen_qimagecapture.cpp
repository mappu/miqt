#include <QChildEvent>
#include <QEvent>
#include <QImage>
#include <QImageCapture>
#include <QList>
#include <QMediaCaptureSession>
#include <QMediaMetaData>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVideoFrame>
#include <qimagecapture.h>
#include "gen_qimagecapture.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QImageCapture_errorChanged(intptr_t);
void miqt_exec_callback_QImageCapture_errorOccurred(intptr_t, int, int, struct miqt_string);
void miqt_exec_callback_QImageCapture_readyForCaptureChanged(intptr_t, bool);
void miqt_exec_callback_QImageCapture_metaDataChanged(intptr_t);
void miqt_exec_callback_QImageCapture_fileFormatChanged(intptr_t);
void miqt_exec_callback_QImageCapture_qualityChanged(intptr_t);
void miqt_exec_callback_QImageCapture_resolutionChanged(intptr_t);
void miqt_exec_callback_QImageCapture_imageExposed(intptr_t, int);
void miqt_exec_callback_QImageCapture_imageCaptured(intptr_t, int, QImage*);
void miqt_exec_callback_QImageCapture_imageMetadataAvailable(intptr_t, int, QMediaMetaData*);
void miqt_exec_callback_QImageCapture_imageAvailable(intptr_t, int, QVideoFrame*);
void miqt_exec_callback_QImageCapture_imageSaved(intptr_t, int, struct miqt_string);
bool miqt_exec_callback_QImageCapture_event(QImageCapture*, intptr_t, QEvent*);
bool miqt_exec_callback_QImageCapture_eventFilter(QImageCapture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QImageCapture_timerEvent(QImageCapture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QImageCapture_childEvent(QImageCapture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QImageCapture_customEvent(QImageCapture*, intptr_t, QEvent*);
void miqt_exec_callback_QImageCapture_connectNotify(QImageCapture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QImageCapture_disconnectNotify(QImageCapture*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQImageCapture final : public QImageCapture {
public:

	MiqtVirtualQImageCapture(): QImageCapture() {};
	MiqtVirtualQImageCapture(QObject* parent): QImageCapture(parent) {};

	virtual ~MiqtVirtualQImageCapture() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QImageCapture::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QImageCapture_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QImageCapture::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QImageCapture::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QImageCapture_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QImageCapture::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QImageCapture::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QImageCapture_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QImageCapture::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QImageCapture::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QImageCapture_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QImageCapture::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QImageCapture::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QImageCapture_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QImageCapture::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QImageCapture::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QImageCapture_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QImageCapture::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QImageCapture::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QImageCapture_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QImageCapture::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QImageCapture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QImageCapture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QImageCapture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QImageCapture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QImageCapture* QImageCapture_new() {
	return new MiqtVirtualQImageCapture();
}

QImageCapture* QImageCapture_new2(QObject* parent) {
	return new MiqtVirtualQImageCapture(parent);
}

void QImageCapture_virtbase(QImageCapture* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QImageCapture_metaObject(const QImageCapture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QImageCapture_metacast(QImageCapture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QImageCapture_tr(const char* s) {
	QString _ret = QImageCapture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QImageCapture_isAvailable(const QImageCapture* self) {
	return self->isAvailable();
}

QMediaCaptureSession* QImageCapture_captureSession(const QImageCapture* self) {
	return self->captureSession();
}

int QImageCapture_error(const QImageCapture* self) {
	QImageCapture::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QImageCapture_errorString(const QImageCapture* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QImageCapture_isReadyForCapture(const QImageCapture* self) {
	return self->isReadyForCapture();
}

int QImageCapture_fileFormat(const QImageCapture* self) {
	QImageCapture::FileFormat _ret = self->fileFormat();
	return static_cast<int>(_ret);
}

void QImageCapture_setFileFormat(QImageCapture* self, int format) {
	self->setFileFormat(static_cast<QImageCapture::FileFormat>(format));
}

struct miqt_array /* of int */  QImageCapture_supportedFormats() {
	QList<QImageCapture::FileFormat> _ret = QImageCapture::supportedFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QImageCapture::FileFormat _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QImageCapture_fileFormatName(int c) {
	QString _ret = QImageCapture::fileFormatName(static_cast<QImageCapture::FileFormat>(c));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageCapture_fileFormatDescription(int c) {
	QString _ret = QImageCapture::fileFormatDescription(static_cast<QImageCapture::FileFormat>(c));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QImageCapture_resolution(const QImageCapture* self) {
	return new QSize(self->resolution());
}

void QImageCapture_setResolution(QImageCapture* self, QSize* resolution) {
	self->setResolution(*resolution);
}

void QImageCapture_setResolution2(QImageCapture* self, int width, int height) {
	self->setResolution(static_cast<int>(width), static_cast<int>(height));
}

int QImageCapture_quality(const QImageCapture* self) {
	QImageCapture::Quality _ret = self->quality();
	return static_cast<int>(_ret);
}

void QImageCapture_setQuality(QImageCapture* self, int quality) {
	self->setQuality(static_cast<QImageCapture::Quality>(quality));
}

QMediaMetaData* QImageCapture_metaData(const QImageCapture* self) {
	return new QMediaMetaData(self->metaData());
}

void QImageCapture_setMetaData(QImageCapture* self, QMediaMetaData* metaData) {
	self->setMetaData(*metaData);
}

void QImageCapture_addMetaData(QImageCapture* self, QMediaMetaData* metaData) {
	self->addMetaData(*metaData);
}

int QImageCapture_captureToFile(QImageCapture* self) {
	return self->captureToFile();
}

int QImageCapture_capture(QImageCapture* self) {
	return self->capture();
}

void QImageCapture_errorChanged(QImageCapture* self) {
	self->errorChanged();
}

void QImageCapture_connect_errorChanged(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::errorChanged), self, [=]() {
		miqt_exec_callback_QImageCapture_errorChanged(slot);
	});
}

void QImageCapture_errorOccurred(QImageCapture* self, int id, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->errorOccurred(static_cast<int>(id), static_cast<QImageCapture::Error>(error), errorString_QString);
}

void QImageCapture_connect_errorOccurred(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int, QImageCapture::Error, const QString&)>(&QImageCapture::errorOccurred), self, [=](int id, QImageCapture::Error error, const QString& errorString) {
		int sigval1 = id;
		QImageCapture::Error error_ret = error;
		int sigval2 = static_cast<int>(error_ret);
		const QString errorString_ret = errorString;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray errorString_b = errorString_ret.toUtf8();
		struct miqt_string errorString_ms;
		errorString_ms.len = errorString_b.length();
		errorString_ms.data = static_cast<char*>(malloc(errorString_ms.len));
		memcpy(errorString_ms.data, errorString_b.data(), errorString_ms.len);
		struct miqt_string sigval3 = errorString_ms;
		miqt_exec_callback_QImageCapture_errorOccurred(slot, sigval1, sigval2, sigval3);
	});
}

void QImageCapture_readyForCaptureChanged(QImageCapture* self, bool ready) {
	self->readyForCaptureChanged(ready);
}

void QImageCapture_connect_readyForCaptureChanged(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(bool)>(&QImageCapture::readyForCaptureChanged), self, [=](bool ready) {
		bool sigval1 = ready;
		miqt_exec_callback_QImageCapture_readyForCaptureChanged(slot, sigval1);
	});
}

void QImageCapture_metaDataChanged(QImageCapture* self) {
	self->metaDataChanged();
}

void QImageCapture_connect_metaDataChanged(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::metaDataChanged), self, [=]() {
		miqt_exec_callback_QImageCapture_metaDataChanged(slot);
	});
}

void QImageCapture_fileFormatChanged(QImageCapture* self) {
	self->fileFormatChanged();
}

void QImageCapture_connect_fileFormatChanged(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::fileFormatChanged), self, [=]() {
		miqt_exec_callback_QImageCapture_fileFormatChanged(slot);
	});
}

void QImageCapture_qualityChanged(QImageCapture* self) {
	self->qualityChanged();
}

void QImageCapture_connect_qualityChanged(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::qualityChanged), self, [=]() {
		miqt_exec_callback_QImageCapture_qualityChanged(slot);
	});
}

void QImageCapture_resolutionChanged(QImageCapture* self) {
	self->resolutionChanged();
}

void QImageCapture_connect_resolutionChanged(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::resolutionChanged), self, [=]() {
		miqt_exec_callback_QImageCapture_resolutionChanged(slot);
	});
}

void QImageCapture_imageExposed(QImageCapture* self, int id) {
	self->imageExposed(static_cast<int>(id));
}

void QImageCapture_connect_imageExposed(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int)>(&QImageCapture::imageExposed), self, [=](int id) {
		int sigval1 = id;
		miqt_exec_callback_QImageCapture_imageExposed(slot, sigval1);
	});
}

void QImageCapture_imageCaptured(QImageCapture* self, int id, QImage* preview) {
	self->imageCaptured(static_cast<int>(id), *preview);
}

void QImageCapture_connect_imageCaptured(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int, const QImage&)>(&QImageCapture::imageCaptured), self, [=](int id, const QImage& preview) {
		int sigval1 = id;
		const QImage& preview_ret = preview;
		// Cast returned reference into pointer
		QImage* sigval2 = const_cast<QImage*>(&preview_ret);
		miqt_exec_callback_QImageCapture_imageCaptured(slot, sigval1, sigval2);
	});
}

void QImageCapture_imageMetadataAvailable(QImageCapture* self, int id, QMediaMetaData* metaData) {
	self->imageMetadataAvailable(static_cast<int>(id), *metaData);
}

void QImageCapture_connect_imageMetadataAvailable(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int, const QMediaMetaData&)>(&QImageCapture::imageMetadataAvailable), self, [=](int id, const QMediaMetaData& metaData) {
		int sigval1 = id;
		const QMediaMetaData& metaData_ret = metaData;
		// Cast returned reference into pointer
		QMediaMetaData* sigval2 = const_cast<QMediaMetaData*>(&metaData_ret);
		miqt_exec_callback_QImageCapture_imageMetadataAvailable(slot, sigval1, sigval2);
	});
}

void QImageCapture_imageAvailable(QImageCapture* self, int id, QVideoFrame* frame) {
	self->imageAvailable(static_cast<int>(id), *frame);
}

void QImageCapture_connect_imageAvailable(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int, const QVideoFrame&)>(&QImageCapture::imageAvailable), self, [=](int id, const QVideoFrame& frame) {
		int sigval1 = id;
		const QVideoFrame& frame_ret = frame;
		// Cast returned reference into pointer
		QVideoFrame* sigval2 = const_cast<QVideoFrame*>(&frame_ret);
		miqt_exec_callback_QImageCapture_imageAvailable(slot, sigval1, sigval2);
	});
}

void QImageCapture_imageSaved(QImageCapture* self, int id, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->imageSaved(static_cast<int>(id), fileName_QString);
}

void QImageCapture_connect_imageSaved(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int, const QString&)>(&QImageCapture::imageSaved), self, [=](int id, const QString& fileName) {
		int sigval1 = id;
		const QString fileName_ret = fileName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray fileName_b = fileName_ret.toUtf8();
		struct miqt_string fileName_ms;
		fileName_ms.len = fileName_b.length();
		fileName_ms.data = static_cast<char*>(malloc(fileName_ms.len));
		memcpy(fileName_ms.data, fileName_b.data(), fileName_ms.len);
		struct miqt_string sigval2 = fileName_ms;
		miqt_exec_callback_QImageCapture_imageSaved(slot, sigval1, sigval2);
	});
}

struct miqt_string QImageCapture_tr2(const char* s, const char* c) {
	QString _ret = QImageCapture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageCapture_tr3(const char* s, const char* c, int n) {
	QString _ret = QImageCapture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QImageCapture_captureToFile1(QImageCapture* self, struct miqt_string location) {
	QString location_QString = QString::fromUtf8(location.data, location.len);
	return self->captureToFile(location_QString);
}

bool QImageCapture_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QImageCapture_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQImageCapture*)(self) )->virtualbase_event(event);
}

bool QImageCapture_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QImageCapture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQImageCapture*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QImageCapture_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QImageCapture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQImageCapture*)(self) )->virtualbase_timerEvent(event);
}

bool QImageCapture_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QImageCapture_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQImageCapture*)(self) )->virtualbase_childEvent(event);
}

bool QImageCapture_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QImageCapture_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQImageCapture*)(self) )->virtualbase_customEvent(event);
}

bool QImageCapture_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QImageCapture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQImageCapture*)(self) )->virtualbase_connectNotify(signal);
}

bool QImageCapture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QImageCapture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQImageCapture*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QImageCapture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QImageCapture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QImageCapture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QImageCapture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QImageCapture_delete(QImageCapture* self) {
	delete self;
}

