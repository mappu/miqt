#include <QByteArray>
#include <QDateTime>
#include <QList>
#include <QLocale>
#include <QResource>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qresource.h"
#include "gen_qresource.h"
#include "_cgo_export.h"

QResource* QResource_new() {
	return new QResource();
}

QResource* QResource_new2(struct miqt_string* file) {
	QString file_QString = QString::fromUtf8(&file->data, file->len);
	return new QResource(file_QString);
}

QResource* QResource_new3(struct miqt_string* file, QLocale* locale) {
	QString file_QString = QString::fromUtf8(&file->data, file->len);
	return new QResource(file_QString, *locale);
}

void QResource_SetFileName(QResource* self, struct miqt_string* file) {
	QString file_QString = QString::fromUtf8(&file->data, file->len);
	self->setFileName(file_QString);
}

struct miqt_string* QResource_FileName(const QResource* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QResource_AbsoluteFilePath(const QResource* self) {
	QString _ret = self->absoluteFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QResource_SetLocale(QResource* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QResource_Locale(const QResource* self) {
	QLocale _ret = self->locale();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLocale*>(new QLocale(_ret));
}

bool QResource_IsValid(const QResource* self) {
	return self->isValid();
}

uintptr_t QResource_CompressionAlgorithm(const QResource* self) {
	QResource::Compression _ret = self->compressionAlgorithm();
	return static_cast<uintptr_t>(_ret);
}

long long QResource_Size(const QResource* self) {
	return self->size();
}

const unsigned char* QResource_Data(const QResource* self) {
	return (const unsigned char*) self->data();
}

long long QResource_UncompressedSize(const QResource* self) {
	return self->uncompressedSize();
}

QByteArray* QResource_UncompressedData(const QResource* self) {
	QByteArray _ret = self->uncompressedData();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

QDateTime* QResource_LastModified(const QResource* self) {
	QDateTime _ret = self->lastModified();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(_ret));
}

void QResource_AddSearchPath(struct miqt_string* path) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	QResource::addSearchPath(path_QString);
}

struct miqt_array* QResource_SearchPaths() {
	QStringList _ret = QResource::searchPaths();
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

bool QResource_IsCompressed(const QResource* self) {
	return self->isCompressed();
}

bool QResource_RegisterResource(struct miqt_string* rccFilename) {
	QString rccFilename_QString = QString::fromUtf8(&rccFilename->data, rccFilename->len);
	return QResource::registerResource(rccFilename_QString);
}

bool QResource_UnregisterResource(struct miqt_string* rccFilename) {
	QString rccFilename_QString = QString::fromUtf8(&rccFilename->data, rccFilename->len);
	return QResource::unregisterResource(rccFilename_QString);
}

bool QResource_RegisterResourceWithRccData(const unsigned char* rccData) {
	return QResource::registerResource(static_cast<const uchar*>(rccData));
}

bool QResource_UnregisterResourceWithRccData(const unsigned char* rccData) {
	return QResource::unregisterResource(static_cast<const uchar*>(rccData));
}

bool QResource_RegisterResource2(struct miqt_string* rccFilename, struct miqt_string* resourceRoot) {
	QString rccFilename_QString = QString::fromUtf8(&rccFilename->data, rccFilename->len);
	QString resourceRoot_QString = QString::fromUtf8(&resourceRoot->data, resourceRoot->len);
	return QResource::registerResource(rccFilename_QString, resourceRoot_QString);
}

bool QResource_UnregisterResource2(struct miqt_string* rccFilename, struct miqt_string* resourceRoot) {
	QString rccFilename_QString = QString::fromUtf8(&rccFilename->data, rccFilename->len);
	QString resourceRoot_QString = QString::fromUtf8(&resourceRoot->data, resourceRoot->len);
	return QResource::unregisterResource(rccFilename_QString, resourceRoot_QString);
}

bool QResource_RegisterResource22(const unsigned char* rccData, struct miqt_string* resourceRoot) {
	QString resourceRoot_QString = QString::fromUtf8(&resourceRoot->data, resourceRoot->len);
	return QResource::registerResource(static_cast<const uchar*>(rccData), resourceRoot_QString);
}

bool QResource_UnregisterResource22(const unsigned char* rccData, struct miqt_string* resourceRoot) {
	QString resourceRoot_QString = QString::fromUtf8(&resourceRoot->data, resourceRoot->len);
	return QResource::unregisterResource(static_cast<const uchar*>(rccData), resourceRoot_QString);
}

void QResource_Delete(QResource* self) {
	delete self;
}

