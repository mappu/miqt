#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QIODevice>
#include <QImage>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMovie>
#include <QObject>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qmovie.h>
#include "gen_qmovie.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMovie_Started(intptr_t);
void miqt_exec_callback_QMovie_Resized(intptr_t, QSize*);
void miqt_exec_callback_QMovie_Updated(intptr_t, QRect*);
void miqt_exec_callback_QMovie_StateChanged(intptr_t, int);
void miqt_exec_callback_QMovie_Error(intptr_t, int);
void miqt_exec_callback_QMovie_Finished(intptr_t);
void miqt_exec_callback_QMovie_FrameChanged(intptr_t, int);
bool miqt_exec_callback_QMovie_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QMovie_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMovie_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMovie_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMovie_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMovie_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMovie_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMovie final : public QMovie {
public:

	MiqtVirtualQMovie(): QMovie() {};
	MiqtVirtualQMovie(QIODevice* device): QMovie(device) {};
	MiqtVirtualQMovie(const QString& fileName): QMovie(fileName) {};
	MiqtVirtualQMovie(QObject* parent): QMovie(parent) {};
	MiqtVirtualQMovie(QIODevice* device, const QByteArray& format): QMovie(device, format) {};
	MiqtVirtualQMovie(QIODevice* device, const QByteArray& format, QObject* parent): QMovie(device, format, parent) {};
	MiqtVirtualQMovie(const QString& fileName, const QByteArray& format): QMovie(fileName, format) {};
	MiqtVirtualQMovie(const QString& fileName, const QByteArray& format, QObject* parent): QMovie(fileName, format, parent) {};

	virtual ~MiqtVirtualQMovie() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QMovie::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMovie_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QMovie::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QMovie::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMovie_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QMovie::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QMovie::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMovie_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QMovie::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QMovie::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMovie_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QMovie::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QMovie::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMovie_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QMovie::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QMovie::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMovie_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QMovie::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QMovie::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMovie_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QMovie::disconnectNotify(*signal);

	}

};

QMovie* QMovie_new() {
	return new MiqtVirtualQMovie();
}

QMovie* QMovie_new2(QIODevice* device) {
	return new MiqtVirtualQMovie(device);
}

QMovie* QMovie_new3(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQMovie(fileName_QString);
}

QMovie* QMovie_new4(QObject* parent) {
	return new MiqtVirtualQMovie(parent);
}

QMovie* QMovie_new5(QIODevice* device, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	return new MiqtVirtualQMovie(device, format_QByteArray);
}

QMovie* QMovie_new6(QIODevice* device, struct miqt_string format, QObject* parent) {
	QByteArray format_QByteArray(format.data, format.len);
	return new MiqtVirtualQMovie(device, format_QByteArray, parent);
}

QMovie* QMovie_new7(struct miqt_string fileName, struct miqt_string format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray format_QByteArray(format.data, format.len);
	return new MiqtVirtualQMovie(fileName_QString, format_QByteArray);
}

QMovie* QMovie_new8(struct miqt_string fileName, struct miqt_string format, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray format_QByteArray(format.data, format.len);
	return new MiqtVirtualQMovie(fileName_QString, format_QByteArray, parent);
}

void QMovie_virtbase(QMovie* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QMovie_MetaObject(const QMovie* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMovie_Metacast(QMovie* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMovie_Tr(const char* s) {
	QString _ret = QMovie::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMovie_TrUtf8(const char* s) {
	QString _ret = QMovie::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QMovie_SupportedFormats() {
	QList<QByteArray> _ret = QMovie::supportedFormats();
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

void QMovie_SetDevice(QMovie* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QMovie_Device(const QMovie* self) {
	return self->device();
}

void QMovie_SetFileName(QMovie* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

struct miqt_string QMovie_FileName(const QMovie* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMovie_SetFormat(QMovie* self, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	self->setFormat(format_QByteArray);
}

struct miqt_string QMovie_Format(const QMovie* self) {
	QByteArray _qb = self->format();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QMovie_SetBackgroundColor(QMovie* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QColor* QMovie_BackgroundColor(const QMovie* self) {
	return new QColor(self->backgroundColor());
}

int QMovie_State(const QMovie* self) {
	QMovie::MovieState _ret = self->state();
	return static_cast<int>(_ret);
}

QRect* QMovie_FrameRect(const QMovie* self) {
	return new QRect(self->frameRect());
}

QImage* QMovie_CurrentImage(const QMovie* self) {
	return new QImage(self->currentImage());
}

QPixmap* QMovie_CurrentPixmap(const QMovie* self) {
	return new QPixmap(self->currentPixmap());
}

bool QMovie_IsValid(const QMovie* self) {
	return self->isValid();
}

int QMovie_LastError(const QMovie* self) {
	QImageReader::ImageReaderError _ret = self->lastError();
	return static_cast<int>(_ret);
}

struct miqt_string QMovie_LastErrorString(const QMovie* self) {
	QString _ret = self->lastErrorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMovie_JumpToFrame(QMovie* self, int frameNumber) {
	return self->jumpToFrame(static_cast<int>(frameNumber));
}

int QMovie_LoopCount(const QMovie* self) {
	return self->loopCount();
}

int QMovie_FrameCount(const QMovie* self) {
	return self->frameCount();
}

int QMovie_NextFrameDelay(const QMovie* self) {
	return self->nextFrameDelay();
}

int QMovie_CurrentFrameNumber(const QMovie* self) {
	return self->currentFrameNumber();
}

int QMovie_Speed(const QMovie* self) {
	return self->speed();
}

QSize* QMovie_ScaledSize(QMovie* self) {
	return new QSize(self->scaledSize());
}

void QMovie_SetScaledSize(QMovie* self, QSize* size) {
	self->setScaledSize(*size);
}

int QMovie_CacheMode(const QMovie* self) {
	QMovie::CacheMode _ret = self->cacheMode();
	return static_cast<int>(_ret);
}

void QMovie_SetCacheMode(QMovie* self, int mode) {
	self->setCacheMode(static_cast<QMovie::CacheMode>(mode));
}

void QMovie_Started(QMovie* self) {
	self->started();
}

void QMovie_connect_Started(QMovie* self, intptr_t slot) {
	MiqtVirtualQMovie::connect(self, static_cast<void (QMovie::*)()>(&QMovie::started), self, [=]() {
		miqt_exec_callback_QMovie_Started(slot);
	});
}

void QMovie_Resized(QMovie* self, QSize* size) {
	self->resized(*size);
}

void QMovie_connect_Resized(QMovie* self, intptr_t slot) {
	MiqtVirtualQMovie::connect(self, static_cast<void (QMovie::*)(const QSize&)>(&QMovie::resized), self, [=](const QSize& size) {
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		miqt_exec_callback_QMovie_Resized(slot, sigval1);
	});
}

void QMovie_Updated(QMovie* self, QRect* rect) {
	self->updated(*rect);
}

void QMovie_connect_Updated(QMovie* self, intptr_t slot) {
	MiqtVirtualQMovie::connect(self, static_cast<void (QMovie::*)(const QRect&)>(&QMovie::updated), self, [=](const QRect& rect) {
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		miqt_exec_callback_QMovie_Updated(slot, sigval1);
	});
}

void QMovie_StateChanged(QMovie* self, int state) {
	self->stateChanged(static_cast<QMovie::MovieState>(state));
}

void QMovie_connect_StateChanged(QMovie* self, intptr_t slot) {
	MiqtVirtualQMovie::connect(self, static_cast<void (QMovie::*)(QMovie::MovieState)>(&QMovie::stateChanged), self, [=](QMovie::MovieState state) {
		QMovie::MovieState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QMovie_StateChanged(slot, sigval1);
	});
}

void QMovie_Error(QMovie* self, int error) {
	self->error(static_cast<QImageReader::ImageReaderError>(error));
}

void QMovie_connect_Error(QMovie* self, intptr_t slot) {
	MiqtVirtualQMovie::connect(self, static_cast<void (QMovie::*)(QImageReader::ImageReaderError)>(&QMovie::error), self, [=](QImageReader::ImageReaderError error) {
		QImageReader::ImageReaderError error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QMovie_Error(slot, sigval1);
	});
}

void QMovie_Finished(QMovie* self) {
	self->finished();
}

void QMovie_connect_Finished(QMovie* self, intptr_t slot) {
	MiqtVirtualQMovie::connect(self, static_cast<void (QMovie::*)()>(&QMovie::finished), self, [=]() {
		miqt_exec_callback_QMovie_Finished(slot);
	});
}

void QMovie_FrameChanged(QMovie* self, int frameNumber) {
	self->frameChanged(static_cast<int>(frameNumber));
}

void QMovie_connect_FrameChanged(QMovie* self, intptr_t slot) {
	MiqtVirtualQMovie::connect(self, static_cast<void (QMovie::*)(int)>(&QMovie::frameChanged), self, [=](int frameNumber) {
		int sigval1 = frameNumber;
		miqt_exec_callback_QMovie_FrameChanged(slot, sigval1);
	});
}

void QMovie_Start(QMovie* self) {
	self->start();
}

bool QMovie_JumpToNextFrame(QMovie* self) {
	return self->jumpToNextFrame();
}

void QMovie_SetPaused(QMovie* self, bool paused) {
	self->setPaused(paused);
}

void QMovie_Stop(QMovie* self) {
	self->stop();
}

void QMovie_SetSpeed(QMovie* self, int percentSpeed) {
	self->setSpeed(static_cast<int>(percentSpeed));
}

struct miqt_string QMovie_Tr2(const char* s, const char* c) {
	QString _ret = QMovie::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMovie_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMovie::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMovie_TrUtf82(const char* s, const char* c) {
	QString _ret = QMovie::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMovie_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMovie::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMovie_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) )->handle__Event = slot;
}

bool QMovie_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMovie*)(self) )->virtualbase_Event(event);
}

void QMovie_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) )->handle__EventFilter = slot;
}

bool QMovie_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMovie*)(self) )->virtualbase_EventFilter(watched, event);
}

void QMovie_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) )->handle__TimerEvent = slot;
}

void QMovie_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMovie*)(self) )->virtualbase_TimerEvent(event);
}

void QMovie_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) )->handle__ChildEvent = slot;
}

void QMovie_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMovie*)(self) )->virtualbase_ChildEvent(event);
}

void QMovie_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) )->handle__CustomEvent = slot;
}

void QMovie_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMovie*)(self) )->virtualbase_CustomEvent(event);
}

void QMovie_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) )->handle__ConnectNotify = slot;
}

void QMovie_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMovie*)(self) )->virtualbase_ConnectNotify(signal);
}

void QMovie_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) )->handle__DisconnectNotify = slot;
}

void QMovie_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMovie*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QMovie_Delete(QMovie* self) {
	delete self;
}

