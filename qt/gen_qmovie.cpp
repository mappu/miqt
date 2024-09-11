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
#include "qmovie.h"

#include "gen_qmovie.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMovie* QMovie_new() {
	return new QMovie();
}

QMovie* QMovie_new2(QIODevice* device) {
	return new QMovie(device);
}

QMovie* QMovie_new3(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QMovie(fileName_QString);
}

QMovie* QMovie_new4(QObject* parent) {
	return new QMovie(parent);
}

QMovie* QMovie_new5(QIODevice* device, QByteArray* format) {
	return new QMovie(device, *format);
}

QMovie* QMovie_new6(QIODevice* device, QByteArray* format, QObject* parent) {
	return new QMovie(device, *format, parent);
}

QMovie* QMovie_new7(const char* fileName, size_t fileName_Strlen, QByteArray* format) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QMovie(fileName_QString, *format);
}

QMovie* QMovie_new8(const char* fileName, size_t fileName_Strlen, QByteArray* format, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QMovie(fileName_QString, *format, parent);
}

QMetaObject* QMovie_MetaObject(const QMovie* self) {
	return (QMetaObject*) self->metaObject();
}

void QMovie_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMovie::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMovie_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMovie::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMovie_SupportedFormats(QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QMovie::supportedFormats();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QMovie_SetDevice(QMovie* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QMovie_Device(const QMovie* self) {
	return self->device();
}

void QMovie_SetFileName(QMovie* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->setFileName(fileName_QString);
}

void QMovie_FileName(const QMovie* self, char** _out, int* _out_Strlen) {
	QString ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMovie_SetFormat(QMovie* self, QByteArray* format) {
	self->setFormat(*format);
}

QByteArray* QMovie_Format(const QMovie* self) {
	QByteArray ret = self->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QMovie_SetBackgroundColor(QMovie* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QColor* QMovie_BackgroundColor(const QMovie* self) {
	QColor ret = self->backgroundColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

uintptr_t QMovie_State(const QMovie* self) {
	QMovie::MovieState ret = self->state();
	return static_cast<uintptr_t>(ret);
}

QRect* QMovie_FrameRect(const QMovie* self) {
	QRect ret = self->frameRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QImage* QMovie_CurrentImage(const QMovie* self) {
	QImage ret = self->currentImage();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QPixmap* QMovie_CurrentPixmap(const QMovie* self) {
	QPixmap ret = self->currentPixmap();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

bool QMovie_IsValid(const QMovie* self) {
	return self->isValid();
}

uintptr_t QMovie_LastError(const QMovie* self) {
	QImageReader::ImageReaderError ret = self->lastError();
	return static_cast<uintptr_t>(ret);
}

void QMovie_LastErrorString(const QMovie* self, char** _out, int* _out_Strlen) {
	QString ret = self->lastErrorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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
	QSize ret = self->scaledSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QMovie_SetScaledSize(QMovie* self, QSize* size) {
	self->setScaledSize(*size);
}

uintptr_t QMovie_CacheMode(const QMovie* self) {
	QMovie::CacheMode ret = self->cacheMode();
	return static_cast<uintptr_t>(ret);
}

void QMovie_SetCacheMode(QMovie* self, uintptr_t mode) {
	self->setCacheMode(static_cast<QMovie::CacheMode>(mode));
}

void QMovie_Started(QMovie* self) {
	self->started();
}

void QMovie_connect_Started(QMovie* self, void* slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)()>(&QMovie::started), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMovie_Resized(QMovie* self, QSize* size) {
	self->resized(*size);
}

void QMovie_connect_Resized(QMovie* self, void* slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)(const QSize&)>(&QMovie::resized), self, [=](const QSize& size) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMovie_Updated(QMovie* self, QRect* rect) {
	self->updated(*rect);
}

void QMovie_connect_Updated(QMovie* self, void* slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)(const QRect&)>(&QMovie::updated), self, [=](const QRect& rect) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMovie_StateChanged(QMovie* self, uintptr_t state) {
	self->stateChanged(static_cast<QMovie::MovieState>(state));
}

void QMovie_connect_StateChanged(QMovie* self, void* slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)(QMovie::MovieState)>(&QMovie::stateChanged), self, [=](QMovie::MovieState state) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMovie_Error(QMovie* self, uintptr_t error) {
	self->error(static_cast<QImageReader::ImageReaderError>(error));
}

void QMovie_connect_Error(QMovie* self, void* slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)(QImageReader::ImageReaderError)>(&QMovie::error), self, [=](QImageReader::ImageReaderError error) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMovie_Finished(QMovie* self) {
	self->finished();
}

void QMovie_connect_Finished(QMovie* self, void* slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)()>(&QMovie::finished), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMovie_FrameChanged(QMovie* self, int frameNumber) {
	self->frameChanged(static_cast<int>(frameNumber));
}

void QMovie_connect_FrameChanged(QMovie* self, void* slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)(int)>(&QMovie::frameChanged), self, [=](int frameNumber) {
		miqt_exec_callback(slot, 0, nullptr);
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

void QMovie_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMovie::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMovie_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMovie::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMovie_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMovie::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMovie_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMovie::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMovie_Delete(QMovie* self) {
	delete self;
}

