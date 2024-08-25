#include "gen_qimagewriter.h"
#include "qimagewriter.h"

#include <QByteArray>
#include <QIODevice>
#include <QImage>
#include <QImageWriter>
#include <QList>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QImageWriter* QImageWriter_new() {
	return new QImageWriter();
}

QImageWriter* QImageWriter_new2(QIODevice* device, QByteArray* format) {
	return new QImageWriter(device, *format);
}

QImageWriter* QImageWriter_new3(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QImageWriter(fileName_QString);
}

QImageWriter* QImageWriter_new4(const char* fileName, size_t fileName_Strlen, QByteArray* format) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QImageWriter(fileName_QString, *format);
}

void QImageWriter_Tr(char* sourceText, char** _out, int* _out_Strlen) {
	QString ret = QImageWriter::tr(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageWriter_TrUtf8(char* sourceText, char** _out, int* _out_Strlen) {
	QString ret = QImageWriter::trUtf8(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageWriter_SetFormat(QImageWriter* self, QByteArray* format) {
	self->setFormat(*format);
}

QByteArray* QImageWriter_Format(QImageWriter* self) {
	QByteArray ret = self->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QImageWriter_SetDevice(QImageWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QImageWriter_Device(QImageWriter* self) {
	return self->device();
}

void QImageWriter_SetFileName(QImageWriter* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->setFileName(fileName_QString);
}

void QImageWriter_FileName(QImageWriter* self, char** _out, int* _out_Strlen) {
	QString ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageWriter_SetQuality(QImageWriter* self, int quality) {
	self->setQuality(static_cast<int>(quality));
}

int QImageWriter_Quality(QImageWriter* self) {
	return self->quality();
}

void QImageWriter_SetCompression(QImageWriter* self, int compression) {
	self->setCompression(static_cast<int>(compression));
}

int QImageWriter_Compression(QImageWriter* self) {
	return self->compression();
}

void QImageWriter_SetGamma(QImageWriter* self, float gamma) {
	self->setGamma(static_cast<float>(gamma));
}

float QImageWriter_Gamma(QImageWriter* self) {
	return self->gamma();
}

void QImageWriter_SetSubType(QImageWriter* self, QByteArray* typeVal) {
	self->setSubType(*typeVal);
}

QByteArray* QImageWriter_SubType(QImageWriter* self) {
	QByteArray ret = self->subType();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QImageWriter_SupportedSubTypes(QImageWriter* self, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = self->supportedSubTypes();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QImageWriter_SetOptimizedWrite(QImageWriter* self, bool optimize) {
	self->setOptimizedWrite(optimize);
}

bool QImageWriter_OptimizedWrite(QImageWriter* self) {
	return self->optimizedWrite();
}

void QImageWriter_SetProgressiveScanWrite(QImageWriter* self, bool progressive) {
	self->setProgressiveScanWrite(progressive);
}

bool QImageWriter_ProgressiveScanWrite(QImageWriter* self) {
	return self->progressiveScanWrite();
}

void QImageWriter_SetDescription(QImageWriter* self, const char* description, size_t description_Strlen) {
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	self->setDescription(description_QString);
}

void QImageWriter_Description(QImageWriter* self, char** _out, int* _out_Strlen) {
	QString ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageWriter_SetText(QImageWriter* self, const char* key, size_t key_Strlen, const char* text, size_t text_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(key_QString, text_QString);
}

bool QImageWriter_CanWrite(QImageWriter* self) {
	return self->canWrite();
}

bool QImageWriter_Write(QImageWriter* self, QImage* image) {
	return self->write(*image);
}

void QImageWriter_ErrorString(QImageWriter* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageWriter_SupportedImageFormats(QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QImageWriter::supportedImageFormats();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QImageWriter_SupportedMimeTypes(QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QImageWriter::supportedMimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QImageWriter_ImageFormatsForMimeType(QByteArray* mimeType, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QImageWriter::imageFormatsForMimeType(*mimeType);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QImageWriter_Tr2(char* sourceText, char* disambiguation, char** _out, int* _out_Strlen) {
	QString ret = QImageWriter::tr(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageWriter_Tr3(char* sourceText, char* disambiguation, int n, char** _out, int* _out_Strlen) {
	QString ret = QImageWriter::tr(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageWriter_TrUtf82(char* sourceText, char* disambiguation, char** _out, int* _out_Strlen) {
	QString ret = QImageWriter::trUtf8(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageWriter_TrUtf83(char* sourceText, char* disambiguation, int n, char** _out, int* _out_Strlen) {
	QString ret = QImageWriter::trUtf8(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageWriter_Delete(QImageWriter* self) {
	delete self;
}

