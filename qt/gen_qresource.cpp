#include "gen_qresource.h"
#include "qresource.h"

#include <QByteArray>
#include <QDateTime>
#include <QList>
#include <QLocale>
#include <QResource>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QResource* QResource_new() {
	return new QResource();
}

QResource* QResource_new2(const char* file, size_t file_Strlen) {
	QString file_QString = QString::fromUtf8(file, file_Strlen);
	return new QResource(file_QString);
}

QResource* QResource_new3(const char* file, size_t file_Strlen, QLocale* locale) {
	QString file_QString = QString::fromUtf8(file, file_Strlen);
	return new QResource(file_QString, *locale);
}

void QResource_SetFileName(QResource* self, const char* file, size_t file_Strlen) {
	QString file_QString = QString::fromUtf8(file, file_Strlen);
	self->setFileName(file_QString);
}

void QResource_FileName(QResource* self, char** _out, int* _out_Strlen) {
	QString ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QResource_AbsoluteFilePath(QResource* self, char** _out, int* _out_Strlen) {
	QString ret = self->absoluteFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QResource_SetLocale(QResource* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QResource_Locale(QResource* self) {
	QLocale ret = self->locale();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLocale*>(new QLocale(ret));
}

bool QResource_IsValid(QResource* self) {
	return self->isValid();
}

int64_t QResource_Size(QResource* self) {
	return self->size();
}

unsigned char* QResource_Data(QResource* self) {
	return (unsigned char*) self->data();
}

int64_t QResource_UncompressedSize(QResource* self) {
	return self->uncompressedSize();
}

QByteArray* QResource_UncompressedData(QResource* self) {
	QByteArray ret = self->uncompressedData();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QDateTime* QResource_LastModified(QResource* self) {
	QDateTime ret = self->lastModified();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

void QResource_AddSearchPath(const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QResource::addSearchPath(path_QString);
}

void QResource_SearchPaths(char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = QResource::searchPaths();
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

bool QResource_IsCompressed(QResource* self) {
	return self->isCompressed();
}

bool QResource_RegisterResource(const char* rccFilename, size_t rccFilename_Strlen) {
	QString rccFilename_QString = QString::fromUtf8(rccFilename, rccFilename_Strlen);
	return QResource::registerResource(rccFilename_QString);
}

bool QResource_UnregisterResource(const char* rccFilename, size_t rccFilename_Strlen) {
	QString rccFilename_QString = QString::fromUtf8(rccFilename, rccFilename_Strlen);
	return QResource::unregisterResource(rccFilename_QString);
}

bool QResource_RegisterResourceWithRccData(unsigned char* rccData) {
	return QResource::registerResource(static_cast<uchar*>(rccData));
}

bool QResource_UnregisterResourceWithRccData(unsigned char* rccData) {
	return QResource::unregisterResource(static_cast<uchar*>(rccData));
}

bool QResource_RegisterResource2(const char* rccFilename, size_t rccFilename_Strlen, const char* resourceRoot, size_t resourceRoot_Strlen) {
	QString rccFilename_QString = QString::fromUtf8(rccFilename, rccFilename_Strlen);
	QString resourceRoot_QString = QString::fromUtf8(resourceRoot, resourceRoot_Strlen);
	return QResource::registerResource(rccFilename_QString, resourceRoot_QString);
}

bool QResource_UnregisterResource2(const char* rccFilename, size_t rccFilename_Strlen, const char* resourceRoot, size_t resourceRoot_Strlen) {
	QString rccFilename_QString = QString::fromUtf8(rccFilename, rccFilename_Strlen);
	QString resourceRoot_QString = QString::fromUtf8(resourceRoot, resourceRoot_Strlen);
	return QResource::unregisterResource(rccFilename_QString, resourceRoot_QString);
}

bool QResource_RegisterResource22(unsigned char* rccData, const char* resourceRoot, size_t resourceRoot_Strlen) {
	QString resourceRoot_QString = QString::fromUtf8(resourceRoot, resourceRoot_Strlen);
	return QResource::registerResource(static_cast<uchar*>(rccData), resourceRoot_QString);
}

bool QResource_UnregisterResource22(unsigned char* rccData, const char* resourceRoot, size_t resourceRoot_Strlen) {
	QString resourceRoot_QString = QString::fromUtf8(resourceRoot, resourceRoot_Strlen);
	return QResource::unregisterResource(static_cast<uchar*>(rccData), resourceRoot_QString);
}

void QResource_Delete(QResource* self) {
	delete self;
}

