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

void miqt_exec_callback_QImageCapture_ErrorChanged(intptr_t);
void miqt_exec_callback_QImageCapture_ErrorOccurred(intptr_t, int, int, struct miqt_string);
void miqt_exec_callback_QImageCapture_ReadyForCaptureChanged(intptr_t, bool);
void miqt_exec_callback_QImageCapture_MetaDataChanged(intptr_t);
void miqt_exec_callback_QImageCapture_FileFormatChanged(intptr_t);
void miqt_exec_callback_QImageCapture_QualityChanged(intptr_t);
void miqt_exec_callback_QImageCapture_ResolutionChanged(intptr_t);
void miqt_exec_callback_QImageCapture_ImageExposed(intptr_t, int);
void miqt_exec_callback_QImageCapture_ImageCaptured(intptr_t, int, QImage*);
void miqt_exec_callback_QImageCapture_ImageMetadataAvailable(intptr_t, int, QMediaMetaData*);
void miqt_exec_callback_QImageCapture_ImageAvailable(intptr_t, int, QVideoFrame*);
void miqt_exec_callback_QImageCapture_ImageSaved(intptr_t, int, struct miqt_string);
bool miqt_exec_callback_QImageCapture_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QImageCapture_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QImageCapture_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QImageCapture_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QImageCapture_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QImageCapture_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QImageCapture_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQImageCapture final : public QImageCapture {
public:

	MiqtVirtualQImageCapture(): QImageCapture() {};
	MiqtVirtualQImageCapture(QObject* parent): QImageCapture(parent) {};

	virtual ~MiqtVirtualQImageCapture() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QImageCapture::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QImageCapture_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QImageCapture::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QImageCapture::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QImageCapture_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QImageCapture::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QImageCapture::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QImageCapture_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QImageCapture::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QImageCapture::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QImageCapture_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QImageCapture::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QImageCapture::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QImageCapture_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QImageCapture::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QImageCapture::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QImageCapture_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QImageCapture::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QImageCapture::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QImageCapture_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QImageCapture::disconnectNotify(*signal);

	}

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

QMetaObject* QImageCapture_MetaObject(const QImageCapture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QImageCapture_Metacast(QImageCapture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QImageCapture_Tr(const char* s) {
	QString _ret = QImageCapture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QImageCapture_IsAvailable(const QImageCapture* self) {
	return self->isAvailable();
}

QMediaCaptureSession* QImageCapture_CaptureSession(const QImageCapture* self) {
	return self->captureSession();
}

int QImageCapture_Error(const QImageCapture* self) {
	QImageCapture::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QImageCapture_ErrorString(const QImageCapture* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QImageCapture_IsReadyForCapture(const QImageCapture* self) {
	return self->isReadyForCapture();
}

int QImageCapture_FileFormat(const QImageCapture* self) {
	QImageCapture::FileFormat _ret = self->fileFormat();
	return static_cast<int>(_ret);
}

void QImageCapture_SetFileFormat(QImageCapture* self, int format) {
	self->setFileFormat(static_cast<QImageCapture::FileFormat>(format));
}

struct miqt_array /* of int */  QImageCapture_SupportedFormats() {
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

struct miqt_string QImageCapture_FileFormatName(int c) {
	QString _ret = QImageCapture::fileFormatName(static_cast<QImageCapture::FileFormat>(c));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageCapture_FileFormatDescription(int c) {
	QString _ret = QImageCapture::fileFormatDescription(static_cast<QImageCapture::FileFormat>(c));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QImageCapture_Resolution(const QImageCapture* self) {
	return new QSize(self->resolution());
}

void QImageCapture_SetResolution(QImageCapture* self, QSize* resolution) {
	self->setResolution(*resolution);
}

void QImageCapture_SetResolution2(QImageCapture* self, int width, int height) {
	self->setResolution(static_cast<int>(width), static_cast<int>(height));
}

int QImageCapture_Quality(const QImageCapture* self) {
	QImageCapture::Quality _ret = self->quality();
	return static_cast<int>(_ret);
}

void QImageCapture_SetQuality(QImageCapture* self, int quality) {
	self->setQuality(static_cast<QImageCapture::Quality>(quality));
}

QMediaMetaData* QImageCapture_MetaData(const QImageCapture* self) {
	return new QMediaMetaData(self->metaData());
}

void QImageCapture_SetMetaData(QImageCapture* self, QMediaMetaData* metaData) {
	self->setMetaData(*metaData);
}

void QImageCapture_AddMetaData(QImageCapture* self, QMediaMetaData* metaData) {
	self->addMetaData(*metaData);
}

int QImageCapture_CaptureToFile(QImageCapture* self) {
	return self->captureToFile();
}

int QImageCapture_Capture(QImageCapture* self) {
	return self->capture();
}

void QImageCapture_ErrorChanged(QImageCapture* self) {
	self->errorChanged();
}

void QImageCapture_connect_ErrorChanged(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::errorChanged), self, [=]() {
		miqt_exec_callback_QImageCapture_ErrorChanged(slot);
	});
}

void QImageCapture_ErrorOccurred(QImageCapture* self, int id, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->errorOccurred(static_cast<int>(id), static_cast<QImageCapture::Error>(error), errorString_QString);
}

void QImageCapture_connect_ErrorOccurred(QImageCapture* self, intptr_t slot) {
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
		miqt_exec_callback_QImageCapture_ErrorOccurred(slot, sigval1, sigval2, sigval3);
	});
}

void QImageCapture_ReadyForCaptureChanged(QImageCapture* self, bool ready) {
	self->readyForCaptureChanged(ready);
}

void QImageCapture_connect_ReadyForCaptureChanged(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(bool)>(&QImageCapture::readyForCaptureChanged), self, [=](bool ready) {
		bool sigval1 = ready;
		miqt_exec_callback_QImageCapture_ReadyForCaptureChanged(slot, sigval1);
	});
}

void QImageCapture_MetaDataChanged(QImageCapture* self) {
	self->metaDataChanged();
}

void QImageCapture_connect_MetaDataChanged(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::metaDataChanged), self, [=]() {
		miqt_exec_callback_QImageCapture_MetaDataChanged(slot);
	});
}

void QImageCapture_FileFormatChanged(QImageCapture* self) {
	self->fileFormatChanged();
}

void QImageCapture_connect_FileFormatChanged(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::fileFormatChanged), self, [=]() {
		miqt_exec_callback_QImageCapture_FileFormatChanged(slot);
	});
}

void QImageCapture_QualityChanged(QImageCapture* self) {
	self->qualityChanged();
}

void QImageCapture_connect_QualityChanged(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::qualityChanged), self, [=]() {
		miqt_exec_callback_QImageCapture_QualityChanged(slot);
	});
}

void QImageCapture_ResolutionChanged(QImageCapture* self) {
	self->resolutionChanged();
}

void QImageCapture_connect_ResolutionChanged(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::resolutionChanged), self, [=]() {
		miqt_exec_callback_QImageCapture_ResolutionChanged(slot);
	});
}

void QImageCapture_ImageExposed(QImageCapture* self, int id) {
	self->imageExposed(static_cast<int>(id));
}

void QImageCapture_connect_ImageExposed(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int)>(&QImageCapture::imageExposed), self, [=](int id) {
		int sigval1 = id;
		miqt_exec_callback_QImageCapture_ImageExposed(slot, sigval1);
	});
}

void QImageCapture_ImageCaptured(QImageCapture* self, int id, QImage* preview) {
	self->imageCaptured(static_cast<int>(id), *preview);
}

void QImageCapture_connect_ImageCaptured(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int, const QImage&)>(&QImageCapture::imageCaptured), self, [=](int id, const QImage& preview) {
		int sigval1 = id;
		const QImage& preview_ret = preview;
		// Cast returned reference into pointer
		QImage* sigval2 = const_cast<QImage*>(&preview_ret);
		miqt_exec_callback_QImageCapture_ImageCaptured(slot, sigval1, sigval2);
	});
}

void QImageCapture_ImageMetadataAvailable(QImageCapture* self, int id, QMediaMetaData* metaData) {
	self->imageMetadataAvailable(static_cast<int>(id), *metaData);
}

void QImageCapture_connect_ImageMetadataAvailable(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int, const QMediaMetaData&)>(&QImageCapture::imageMetadataAvailable), self, [=](int id, const QMediaMetaData& metaData) {
		int sigval1 = id;
		const QMediaMetaData& metaData_ret = metaData;
		// Cast returned reference into pointer
		QMediaMetaData* sigval2 = const_cast<QMediaMetaData*>(&metaData_ret);
		miqt_exec_callback_QImageCapture_ImageMetadataAvailable(slot, sigval1, sigval2);
	});
}

void QImageCapture_ImageAvailable(QImageCapture* self, int id, QVideoFrame* frame) {
	self->imageAvailable(static_cast<int>(id), *frame);
}

void QImageCapture_connect_ImageAvailable(QImageCapture* self, intptr_t slot) {
	MiqtVirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int, const QVideoFrame&)>(&QImageCapture::imageAvailable), self, [=](int id, const QVideoFrame& frame) {
		int sigval1 = id;
		const QVideoFrame& frame_ret = frame;
		// Cast returned reference into pointer
		QVideoFrame* sigval2 = const_cast<QVideoFrame*>(&frame_ret);
		miqt_exec_callback_QImageCapture_ImageAvailable(slot, sigval1, sigval2);
	});
}

void QImageCapture_ImageSaved(QImageCapture* self, int id, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->imageSaved(static_cast<int>(id), fileName_QString);
}

void QImageCapture_connect_ImageSaved(QImageCapture* self, intptr_t slot) {
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
		miqt_exec_callback_QImageCapture_ImageSaved(slot, sigval1, sigval2);
	});
}

struct miqt_string QImageCapture_Tr2(const char* s, const char* c) {
	QString _ret = QImageCapture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageCapture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QImageCapture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QImageCapture_CaptureToFile1(QImageCapture* self, struct miqt_string location) {
	QString location_QString = QString::fromUtf8(location.data, location.len);
	return self->captureToFile(location_QString);
}

bool QImageCapture_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QImageCapture_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQImageCapture*)(self) )->virtualbase_Event(event);
}

bool QImageCapture_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QImageCapture_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQImageCapture*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QImageCapture_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QImageCapture_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQImageCapture*)(self) )->virtualbase_TimerEvent(event);
}

bool QImageCapture_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QImageCapture_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQImageCapture*)(self) )->virtualbase_ChildEvent(event);
}

bool QImageCapture_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QImageCapture_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQImageCapture*)(self) )->virtualbase_CustomEvent(event);
}

bool QImageCapture_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QImageCapture_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQImageCapture*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QImageCapture_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQImageCapture* self_cast = dynamic_cast<MiqtVirtualQImageCapture*>( (QImageCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QImageCapture_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQImageCapture*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QImageCapture_Delete(QImageCapture* self) {
	delete self;
}

