#include "gen_qimagereader.h"
#include "qimagereader.h"

#include <QByteArray>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QImageReader>
#include <QList>
#include <QRect>
#include <QSize>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QImageReader* QImageReader_new() {
	return new QImageReader();
}

QImageReader* QImageReader_new2(QIODevice* device) {
	return new QImageReader(device);
}

QImageReader* QImageReader_new3(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QImageReader(fileName_QString);
}

QImageReader* QImageReader_new4(QIODevice* device, QByteArray* format) {
	return new QImageReader(device, *format);
}

QImageReader* QImageReader_new5(const char* fileName, size_t fileName_Strlen, QByteArray* format) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QImageReader(fileName_QString, *format);
}

void QImageReader_Tr(char* sourceText, char** _out, int* _out_Strlen) {
	QString ret = QImageReader::tr(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageReader_TrUtf8(char* sourceText, char** _out, int* _out_Strlen) {
	QString ret = QImageReader::trUtf8(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageReader_SetFormat(QImageReader* self, QByteArray* format) {
	self->setFormat(*format);
}

QByteArray* QImageReader_Format(QImageReader* self) {
	QByteArray ret = self->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QImageReader_SetAutoDetectImageFormat(QImageReader* self, bool enabled) {
	self->setAutoDetectImageFormat(enabled);
}

bool QImageReader_AutoDetectImageFormat(QImageReader* self) {
	return self->autoDetectImageFormat();
}

void QImageReader_SetDecideFormatFromContent(QImageReader* self, bool ignored) {
	self->setDecideFormatFromContent(ignored);
}

bool QImageReader_DecideFormatFromContent(QImageReader* self) {
	return self->decideFormatFromContent();
}

void QImageReader_SetDevice(QImageReader* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QImageReader_Device(QImageReader* self) {
	return self->device();
}

void QImageReader_SetFileName(QImageReader* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->setFileName(fileName_QString);
}

void QImageReader_FileName(QImageReader* self, char** _out, int* _out_Strlen) {
	QString ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QImageReader_Size(QImageReader* self) {
	QSize ret = self->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QImageReader_TextKeys(QImageReader* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->textKeys();
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

void QImageReader_Text(QImageReader* self, const char* key, size_t key_Strlen, char** _out, int* _out_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QString ret = self->text(key_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageReader_SetClipRect(QImageReader* self, QRect* rect) {
	self->setClipRect(*rect);
}

QRect* QImageReader_ClipRect(QImageReader* self) {
	QRect ret = self->clipRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QImageReader_SetScaledSize(QImageReader* self, QSize* size) {
	self->setScaledSize(*size);
}

QSize* QImageReader_ScaledSize(QImageReader* self) {
	QSize ret = self->scaledSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QImageReader_SetQuality(QImageReader* self, int quality) {
	self->setQuality(static_cast<int>(quality));
}

int QImageReader_Quality(QImageReader* self) {
	return self->quality();
}

void QImageReader_SetScaledClipRect(QImageReader* self, QRect* rect) {
	self->setScaledClipRect(*rect);
}

QRect* QImageReader_ScaledClipRect(QImageReader* self) {
	QRect ret = self->scaledClipRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QImageReader_SetBackgroundColor(QImageReader* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QColor* QImageReader_BackgroundColor(QImageReader* self) {
	QColor ret = self->backgroundColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

bool QImageReader_SupportsAnimation(QImageReader* self) {
	return self->supportsAnimation();
}

void QImageReader_SetAutoTransform(QImageReader* self, bool enabled) {
	self->setAutoTransform(enabled);
}

bool QImageReader_AutoTransform(QImageReader* self) {
	return self->autoTransform();
}

void QImageReader_SetGamma(QImageReader* self, float gamma) {
	self->setGamma(static_cast<float>(gamma));
}

float QImageReader_Gamma(QImageReader* self) {
	return self->gamma();
}

QByteArray* QImageReader_SubType(QImageReader* self) {
	QByteArray ret = self->subType();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QImageReader_SupportedSubTypes(QImageReader* self, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = self->supportedSubTypes();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

bool QImageReader_CanRead(QImageReader* self) {
	return self->canRead();
}

QImage* QImageReader_Read(QImageReader* self) {
	QImage ret = self->read();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

bool QImageReader_ReadWithImage(QImageReader* self, QImage* image) {
	return self->read(image);
}

bool QImageReader_JumpToNextImage(QImageReader* self) {
	return self->jumpToNextImage();
}

bool QImageReader_JumpToImage(QImageReader* self, int imageNumber) {
	return self->jumpToImage(static_cast<int>(imageNumber));
}

int QImageReader_LoopCount(QImageReader* self) {
	return self->loopCount();
}

int QImageReader_ImageCount(QImageReader* self) {
	return self->imageCount();
}

int QImageReader_NextImageDelay(QImageReader* self) {
	return self->nextImageDelay();
}

int QImageReader_CurrentImageNumber(QImageReader* self) {
	return self->currentImageNumber();
}

QRect* QImageReader_CurrentImageRect(QImageReader* self) {
	QRect ret = self->currentImageRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QImageReader_ErrorString(QImageReader* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QImageReader_ImageFormat(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QByteArray ret = QImageReader::imageFormat(fileName_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QImageReader_ImageFormatWithDevice(QIODevice* device) {
	QByteArray ret = QImageReader::imageFormat(device);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QImageReader_SupportedImageFormats(QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QImageReader::supportedImageFormats();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QImageReader_SupportedMimeTypes(QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QImageReader::supportedMimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QImageReader_ImageFormatsForMimeType(QByteArray* mimeType, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QImageReader::imageFormatsForMimeType(*mimeType);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QImageReader_Tr2(char* sourceText, char* disambiguation, char** _out, int* _out_Strlen) {
	QString ret = QImageReader::tr(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageReader_Tr3(char* sourceText, char* disambiguation, int n, char** _out, int* _out_Strlen) {
	QString ret = QImageReader::tr(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageReader_TrUtf82(char* sourceText, char* disambiguation, char** _out, int* _out_Strlen) {
	QString ret = QImageReader::trUtf8(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageReader_TrUtf83(char* sourceText, char* disambiguation, int n, char** _out, int* _out_Strlen) {
	QString ret = QImageReader::trUtf8(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImageReader_Delete(QImageReader* self) {
	delete self;
}

