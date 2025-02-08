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

void miqt_exec_callback_QMovie_started(intptr_t);
void miqt_exec_callback_QMovie_resized(intptr_t, QSize*);
void miqt_exec_callback_QMovie_updated(intptr_t, QRect*);
void miqt_exec_callback_QMovie_stateChanged(intptr_t, int);
void miqt_exec_callback_QMovie_error(intptr_t, int);
void miqt_exec_callback_QMovie_finished(intptr_t);
void miqt_exec_callback_QMovie_frameChanged(intptr_t, int);
bool miqt_exec_callback_QMovie_event(QMovie*, intptr_t, QEvent*);
bool miqt_exec_callback_QMovie_eventFilter(QMovie*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMovie_timerEvent(QMovie*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMovie_childEvent(QMovie*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMovie_customEvent(QMovie*, intptr_t, QEvent*);
void miqt_exec_callback_QMovie_connectNotify(QMovie*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMovie_disconnectNotify(QMovie*, intptr_t, QMetaMethod*);
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
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QMovie::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMovie_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QMovie::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QMovie::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMovie_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QMovie::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QMovie::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMovie_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QMovie::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QMovie::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMovie_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QMovie::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QMovie::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMovie_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QMovie::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QMovie::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMovie_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QMovie::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QMovie::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMovie_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QMovie::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QMovie_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMovie_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMovie_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMovie_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QMovie_metaObject(const QMovie* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMovie_metacast(QMovie* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMovie_tr(const char* s) {
	QString _ret = QMovie::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMovie_trUtf8(const char* s) {
	QString _ret = QMovie::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QMovie_supportedFormats() {
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

void QMovie_setDevice(QMovie* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QMovie_device(const QMovie* self) {
	return self->device();
}

void QMovie_setFileName(QMovie* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

struct miqt_string QMovie_fileName(const QMovie* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMovie_setFormat(QMovie* self, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	self->setFormat(format_QByteArray);
}

struct miqt_string QMovie_format(const QMovie* self) {
	QByteArray _qb = self->format();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QMovie_setBackgroundColor(QMovie* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QColor* QMovie_backgroundColor(const QMovie* self) {
	return new QColor(self->backgroundColor());
}

int QMovie_state(const QMovie* self) {
	QMovie::MovieState _ret = self->state();
	return static_cast<int>(_ret);
}

QRect* QMovie_frameRect(const QMovie* self) {
	return new QRect(self->frameRect());
}

QImage* QMovie_currentImage(const QMovie* self) {
	return new QImage(self->currentImage());
}

QPixmap* QMovie_currentPixmap(const QMovie* self) {
	return new QPixmap(self->currentPixmap());
}

bool QMovie_isValid(const QMovie* self) {
	return self->isValid();
}

int QMovie_lastError(const QMovie* self) {
	QImageReader::ImageReaderError _ret = self->lastError();
	return static_cast<int>(_ret);
}

struct miqt_string QMovie_lastErrorString(const QMovie* self) {
	QString _ret = self->lastErrorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMovie_jumpToFrame(QMovie* self, int frameNumber) {
	return self->jumpToFrame(static_cast<int>(frameNumber));
}

int QMovie_loopCount(const QMovie* self) {
	return self->loopCount();
}

int QMovie_frameCount(const QMovie* self) {
	return self->frameCount();
}

int QMovie_nextFrameDelay(const QMovie* self) {
	return self->nextFrameDelay();
}

int QMovie_currentFrameNumber(const QMovie* self) {
	return self->currentFrameNumber();
}

int QMovie_speed(const QMovie* self) {
	return self->speed();
}

QSize* QMovie_scaledSize(QMovie* self) {
	return new QSize(self->scaledSize());
}

void QMovie_setScaledSize(QMovie* self, QSize* size) {
	self->setScaledSize(*size);
}

int QMovie_cacheMode(const QMovie* self) {
	QMovie::CacheMode _ret = self->cacheMode();
	return static_cast<int>(_ret);
}

void QMovie_setCacheMode(QMovie* self, int mode) {
	self->setCacheMode(static_cast<QMovie::CacheMode>(mode));
}

void QMovie_started(QMovie* self) {
	self->started();
}

void QMovie_connect_started(QMovie* self, intptr_t slot) {
	MiqtVirtualQMovie::connect(self, static_cast<void (QMovie::*)()>(&QMovie::started), self, [=]() {
		miqt_exec_callback_QMovie_started(slot);
	});
}

void QMovie_resized(QMovie* self, QSize* size) {
	self->resized(*size);
}

void QMovie_connect_resized(QMovie* self, intptr_t slot) {
	MiqtVirtualQMovie::connect(self, static_cast<void (QMovie::*)(const QSize&)>(&QMovie::resized), self, [=](const QSize& size) {
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		miqt_exec_callback_QMovie_resized(slot, sigval1);
	});
}

void QMovie_updated(QMovie* self, QRect* rect) {
	self->updated(*rect);
}

void QMovie_connect_updated(QMovie* self, intptr_t slot) {
	MiqtVirtualQMovie::connect(self, static_cast<void (QMovie::*)(const QRect&)>(&QMovie::updated), self, [=](const QRect& rect) {
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		miqt_exec_callback_QMovie_updated(slot, sigval1);
	});
}

void QMovie_stateChanged(QMovie* self, int state) {
	self->stateChanged(static_cast<QMovie::MovieState>(state));
}

void QMovie_connect_stateChanged(QMovie* self, intptr_t slot) {
	MiqtVirtualQMovie::connect(self, static_cast<void (QMovie::*)(QMovie::MovieState)>(&QMovie::stateChanged), self, [=](QMovie::MovieState state) {
		QMovie::MovieState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QMovie_stateChanged(slot, sigval1);
	});
}

void QMovie_error(QMovie* self, int error) {
	self->error(static_cast<QImageReader::ImageReaderError>(error));
}

void QMovie_connect_error(QMovie* self, intptr_t slot) {
	MiqtVirtualQMovie::connect(self, static_cast<void (QMovie::*)(QImageReader::ImageReaderError)>(&QMovie::error), self, [=](QImageReader::ImageReaderError error) {
		QImageReader::ImageReaderError error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QMovie_error(slot, sigval1);
	});
}

void QMovie_finished(QMovie* self) {
	self->finished();
}

void QMovie_connect_finished(QMovie* self, intptr_t slot) {
	MiqtVirtualQMovie::connect(self, static_cast<void (QMovie::*)()>(&QMovie::finished), self, [=]() {
		miqt_exec_callback_QMovie_finished(slot);
	});
}

void QMovie_frameChanged(QMovie* self, int frameNumber) {
	self->frameChanged(static_cast<int>(frameNumber));
}

void QMovie_connect_frameChanged(QMovie* self, intptr_t slot) {
	MiqtVirtualQMovie::connect(self, static_cast<void (QMovie::*)(int)>(&QMovie::frameChanged), self, [=](int frameNumber) {
		int sigval1 = frameNumber;
		miqt_exec_callback_QMovie_frameChanged(slot, sigval1);
	});
}

void QMovie_start(QMovie* self) {
	self->start();
}

bool QMovie_jumpToNextFrame(QMovie* self) {
	return self->jumpToNextFrame();
}

void QMovie_setPaused(QMovie* self, bool paused) {
	self->setPaused(paused);
}

void QMovie_stop(QMovie* self) {
	self->stop();
}

void QMovie_setSpeed(QMovie* self, int percentSpeed) {
	self->setSpeed(static_cast<int>(percentSpeed));
}

struct miqt_string QMovie_tr2(const char* s, const char* c) {
	QString _ret = QMovie::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMovie_tr3(const char* s, const char* c, int n) {
	QString _ret = QMovie::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMovie_trUtf82(const char* s, const char* c) {
	QString _ret = QMovie::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMovie_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMovie::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMovie_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMovie* self_cast = dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QMovie_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMovie*)(self) )->virtualbase_event(event);
}

bool QMovie_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMovie* self_cast = dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMovie_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMovie*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QMovie_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMovie* self_cast = dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QMovie_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMovie*)(self) )->virtualbase_timerEvent(event);
}

bool QMovie_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQMovie* self_cast = dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QMovie_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMovie*)(self) )->virtualbase_childEvent(event);
}

bool QMovie_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQMovie* self_cast = dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QMovie_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMovie*)(self) )->virtualbase_customEvent(event);
}

bool QMovie_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMovie* self_cast = dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QMovie_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMovie*)(self) )->virtualbase_connectNotify(signal);
}

bool QMovie_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMovie* self_cast = dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QMovie_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMovie*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QMovie_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMovie* self_cast = dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QMovie_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMovie* self_cast = dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QMovie_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMovie* self_cast = dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QMovie_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMovie* self_cast = dynamic_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QMovie_delete(QMovie* self) {
	delete self;
}

