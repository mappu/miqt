#include "gen_qpicture.h"
#include "qpicture.h"

#include <QByteArray>
#include <QIODevice>
#include <QList>
#include <QPaintEngine>
#include <QPainter>
#include <QPicture>
#include <QPictureIO>
#include <QRect>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPicture* QPicture_new() {
	return new QPicture();
}

QPicture* QPicture_new2(QPicture* param1) {
	return new QPicture(*param1);
}

QPicture* QPicture_new3(int formatVersion) {
	return new QPicture(static_cast<int>(formatVersion));
}

bool QPicture_IsNull(QPicture* self) {
	return self->isNull();
}

int QPicture_DevType(QPicture* self) {
	return self->devType();
}

unsigned int QPicture_Size(QPicture* self) {
	return self->size();
}

char* QPicture_Data(QPicture* self) {
	return (char*) self->data();
}

void QPicture_SetData(QPicture* self, char* data, unsigned int size) {
	self->setData(data, static_cast<uint>(size));
}

bool QPicture_Play(QPicture* self, QPainter* p) {
	return self->play(p);
}

bool QPicture_Load(QPicture* self, QIODevice* dev) {
	return self->load(dev);
}

bool QPicture_LoadWithFileName(QPicture* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return self->load(fileName_QString);
}

bool QPicture_Save(QPicture* self, QIODevice* dev) {
	return self->save(dev);
}

bool QPicture_SaveWithFileName(QPicture* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return self->save(fileName_QString);
}

QRect* QPicture_BoundingRect(QPicture* self) {
	QRect ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QPicture_SetBoundingRect(QPicture* self, QRect* r) {
	self->setBoundingRect(*r);
}

void QPicture_OperatorAssign(QPicture* self, QPicture* p) {
	self->operator=(*p);
}

void QPicture_Swap(QPicture* self, QPicture* other) {
	self->swap(*other);
}

void QPicture_Detach(QPicture* self) {
	self->detach();
}

bool QPicture_IsDetached(QPicture* self) {
	return self->isDetached();
}

char* QPicture_PictureFormat(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return (char*) QPicture::pictureFormat(fileName_QString);
}

void QPicture_InputFormats(QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QPicture::inputFormats();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QPicture_OutputFormats(QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QPicture::outputFormats();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QPicture_InputFormatList(char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = QPicture::inputFormatList();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QPicture_OutputFormatList(char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = QPicture::outputFormatList();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

QPaintEngine* QPicture_PaintEngine(QPicture* self) {
	return self->paintEngine();
}

bool QPicture_Load2(QPicture* self, QIODevice* dev, char* format) {
	return self->load(dev, format);
}

bool QPicture_Load22(QPicture* self, const char* fileName, size_t fileName_Strlen, char* format) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return self->load(fileName_QString, format);
}

bool QPicture_Save2(QPicture* self, QIODevice* dev, char* format) {
	return self->save(dev, format);
}

bool QPicture_Save22(QPicture* self, const char* fileName, size_t fileName_Strlen, char* format) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return self->save(fileName_QString, format);
}

void QPicture_Delete(QPicture* self) {
	delete self;
}

QPictureIO* QPictureIO_new() {
	return new QPictureIO();
}

QPictureIO* QPictureIO_new2(QIODevice* ioDevice, char* format) {
	return new QPictureIO(ioDevice, format);
}

QPictureIO* QPictureIO_new3(const char* fileName, size_t fileName_Strlen, char* format) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QPictureIO(fileName_QString, format);
}

QPicture* QPictureIO_Picture(QPictureIO* self) {
	const QPicture& ret = self->picture();
	// Cast returned reference into pointer
	return const_cast<QPicture*>(&ret);
}

int QPictureIO_Status(QPictureIO* self) {
	return self->status();
}

char* QPictureIO_Format(QPictureIO* self) {
	return (char*) self->format();
}

QIODevice* QPictureIO_IoDevice(QPictureIO* self) {
	return self->ioDevice();
}

void QPictureIO_FileName(QPictureIO* self, char** _out, int* _out_Strlen) {
	QString ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QPictureIO_Quality(QPictureIO* self) {
	return self->quality();
}

void QPictureIO_Description(QPictureIO* self, char** _out, int* _out_Strlen) {
	QString ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

char* QPictureIO_Parameters(QPictureIO* self) {
	return (char*) self->parameters();
}

float QPictureIO_Gamma(QPictureIO* self) {
	return self->gamma();
}

void QPictureIO_SetPicture(QPictureIO* self, QPicture* picture) {
	self->setPicture(*picture);
}

void QPictureIO_SetStatus(QPictureIO* self, int status) {
	self->setStatus(static_cast<int>(status));
}

void QPictureIO_SetFormat(QPictureIO* self, char* format) {
	self->setFormat(format);
}

void QPictureIO_SetIODevice(QPictureIO* self, QIODevice* iODevice) {
	self->setIODevice(iODevice);
}

void QPictureIO_SetFileName(QPictureIO* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->setFileName(fileName_QString);
}

void QPictureIO_SetQuality(QPictureIO* self, int quality) {
	self->setQuality(static_cast<int>(quality));
}

void QPictureIO_SetDescription(QPictureIO* self, const char* description, size_t description_Strlen) {
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	self->setDescription(description_QString);
}

void QPictureIO_SetParameters(QPictureIO* self, char* parameters) {
	self->setParameters(parameters);
}

void QPictureIO_SetGamma(QPictureIO* self, float gamma) {
	self->setGamma(static_cast<float>(gamma));
}

bool QPictureIO_Read(QPictureIO* self) {
	return self->read();
}

bool QPictureIO_Write(QPictureIO* self) {
	return self->write();
}

QByteArray* QPictureIO_PictureFormat(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QByteArray ret = QPictureIO::pictureFormat(fileName_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QPictureIO_PictureFormatWithQIODevice(QIODevice* param1) {
	QByteArray ret = QPictureIO::pictureFormat(param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QPictureIO_InputFormats(QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QPictureIO::inputFormats();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QPictureIO_OutputFormats(QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QPictureIO::outputFormats();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QPictureIO_Delete(QPictureIO* self) {
	delete self;
}

