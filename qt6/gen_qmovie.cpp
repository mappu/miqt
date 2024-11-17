#include <QByteArray>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QList>
#include <QMetaObject>
#include <QMovie>
#include <QObject>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmovie.h>
#include "gen_qmovie.h"
#include "_cgo_export.h"

QMovie* QMovie_new() {
	return new QMovie();
}

QMovie* QMovie_new2(QIODevice* device) {
	return new QMovie(device);
}

QMovie* QMovie_new3(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QMovie(fileName_QString);
}

QMovie* QMovie_new4(QObject* parent) {
	return new QMovie(parent);
}

QMovie* QMovie_new5(QIODevice* device, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	return new QMovie(device, format_QByteArray);
}

QMovie* QMovie_new6(QIODevice* device, struct miqt_string format, QObject* parent) {
	QByteArray format_QByteArray(format.data, format.len);
	return new QMovie(device, format_QByteArray, parent);
}

QMovie* QMovie_new7(struct miqt_string fileName, struct miqt_string format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray format_QByteArray(format.data, format.len);
	return new QMovie(fileName_QString, format_QByteArray);
}

QMovie* QMovie_new8(struct miqt_string fileName, struct miqt_string format, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray format_QByteArray(format.data, format.len);
	return new QMovie(fileName_QString, format_QByteArray, parent);
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
	QMovie::connect(self, static_cast<void (QMovie::*)()>(&QMovie::started), self, [=]() {
		miqt_exec_callback_QMovie_Started(slot);
	});
}

void QMovie_Resized(QMovie* self, QSize* size) {
	self->resized(*size);
}

void QMovie_connect_Resized(QMovie* self, intptr_t slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)(const QSize&)>(&QMovie::resized), self, [=](const QSize& size) {
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
	QMovie::connect(self, static_cast<void (QMovie::*)(const QRect&)>(&QMovie::updated), self, [=](const QRect& rect) {
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
	QMovie::connect(self, static_cast<void (QMovie::*)(QMovie::MovieState)>(&QMovie::stateChanged), self, [=](QMovie::MovieState state) {
		QMovie::MovieState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QMovie_StateChanged(slot, sigval1);
	});
}

void QMovie_Error(QMovie* self, int error) {
	self->error(static_cast<QImageReader::ImageReaderError>(error));
}

void QMovie_connect_Error(QMovie* self, intptr_t slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)(QImageReader::ImageReaderError)>(&QMovie::error), self, [=](QImageReader::ImageReaderError error) {
		QImageReader::ImageReaderError error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QMovie_Error(slot, sigval1);
	});
}

void QMovie_Finished(QMovie* self) {
	self->finished();
}

void QMovie_connect_Finished(QMovie* self, intptr_t slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)()>(&QMovie::finished), self, [=]() {
		miqt_exec_callback_QMovie_Finished(slot);
	});
}

void QMovie_FrameChanged(QMovie* self, int frameNumber) {
	self->frameChanged(static_cast<int>(frameNumber));
}

void QMovie_connect_FrameChanged(QMovie* self, intptr_t slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)(int)>(&QMovie::frameChanged), self, [=](int frameNumber) {
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

void QMovie_Delete(QMovie* self) {
	delete self;
}

