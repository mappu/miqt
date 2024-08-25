#include "gen_qimageiohandler.h"
#include "qimageiohandler.h"

#include <QByteArray>
#include <QIODevice>
#include <QImage>
#include <QImageIOHandler>
#include <QImageIOPlugin>
#include <QMetaObject>
#include <QRect>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QImageIOHandler_SetDevice(QImageIOHandler* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QImageIOHandler_Device(QImageIOHandler* self) {
	return self->device();
}

void QImageIOHandler_SetFormat(QImageIOHandler* self, QByteArray* format) {
	self->setFormat(*format);
}

void QImageIOHandler_SetFormatWithFormat(QImageIOHandler* self, QByteArray* format) {
	self->setFormat(*format);
}

QByteArray* QImageIOHandler_Format(QImageIOHandler* self) {
	QByteArray ret = self->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QImageIOHandler_Name(QImageIOHandler* self) {
	QByteArray ret = self->name();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

bool QImageIOHandler_CanRead(QImageIOHandler* self) {
	return self->canRead();
}

bool QImageIOHandler_Read(QImageIOHandler* self, QImage* image) {
	return self->read(image);
}

bool QImageIOHandler_Write(QImageIOHandler* self, QImage* image) {
	return self->write(*image);
}

bool QImageIOHandler_JumpToNextImage(QImageIOHandler* self) {
	return self->jumpToNextImage();
}

bool QImageIOHandler_JumpToImage(QImageIOHandler* self, int imageNumber) {
	return self->jumpToImage(static_cast<int>(imageNumber));
}

int QImageIOHandler_LoopCount(QImageIOHandler* self) {
	return self->loopCount();
}

int QImageIOHandler_ImageCount(QImageIOHandler* self) {
	return self->imageCount();
}

int QImageIOHandler_NextImageDelay(QImageIOHandler* self) {
	return self->nextImageDelay();
}

int QImageIOHandler_CurrentImageNumber(QImageIOHandler* self) {
	return self->currentImageNumber();
}

QRect* QImageIOHandler_CurrentImageRect(QImageIOHandler* self) {
	QRect ret = self->currentImageRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QImageIOHandler_Delete(QImageIOHandler* self) {
	delete self;
}

QMetaObject* QImageIOPlugin_MetaObject(QImageIOPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void QImageIOPlugin_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QImageIOPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageIOPlugin_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QImageIOPlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QImageIOHandler* QImageIOPlugin_Create(QImageIOPlugin* self, QIODevice* device) {
	return self->create(device);
}

void QImageIOPlugin_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QImageIOPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageIOPlugin_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QImageIOPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageIOPlugin_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QImageIOPlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageIOPlugin_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QImageIOPlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QImageIOHandler* QImageIOPlugin_Create2(QImageIOPlugin* self, QIODevice* device, QByteArray* format) {
	return self->create(device, *format);
}

void QImageIOPlugin_Delete(QImageIOPlugin* self) {
	delete self;
}

