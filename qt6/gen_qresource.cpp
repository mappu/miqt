#include <QByteArray>
#include <QDateTime>
#include <QLocale>
#include <QResource>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qresource.h>
#include "gen_qresource.h"
#include "_cgo_export.h"

QResource* QResource_new() {
	return new QResource();
}

QResource* QResource_new2(struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return new QResource(file_QString);
}

QResource* QResource_new3(struct miqt_string file, QLocale* locale) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return new QResource(file_QString, *locale);
}

void QResource_SetFileName(QResource* self, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	self->setFileName(file_QString);
}

struct miqt_string QResource_FileName(const QResource* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QResource_AbsoluteFilePath(const QResource* self) {
	QString _ret = self->absoluteFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QResource_SetLocale(QResource* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QResource_Locale(const QResource* self) {
	return new QLocale(self->locale());
}

bool QResource_IsValid(const QResource* self) {
	return self->isValid();
}

int QResource_CompressionAlgorithm(const QResource* self) {
	QResource::Compression _ret = self->compressionAlgorithm();
	return static_cast<int>(_ret);
}

long long QResource_Size(const QResource* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

const unsigned char* QResource_Data(const QResource* self) {
	const uchar* _ret = self->data();
	return static_cast<const unsigned char*>(_ret);
}

long long QResource_UncompressedSize(const QResource* self) {
	qint64 _ret = self->uncompressedSize();
	return static_cast<long long>(_ret);
}

struct miqt_string QResource_UncompressedData(const QResource* self) {
	QByteArray _qb = self->uncompressedData();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QDateTime* QResource_LastModified(const QResource* self) {
	return new QDateTime(self->lastModified());
}

bool QResource_RegisterResource(struct miqt_string rccFilename) {
	QString rccFilename_QString = QString::fromUtf8(rccFilename.data, rccFilename.len);
	return QResource::registerResource(rccFilename_QString);
}

bool QResource_UnregisterResource(struct miqt_string rccFilename) {
	QString rccFilename_QString = QString::fromUtf8(rccFilename.data, rccFilename.len);
	return QResource::unregisterResource(rccFilename_QString);
}

bool QResource_RegisterResourceWithRccData(const unsigned char* rccData) {
	return QResource::registerResource(static_cast<const uchar*>(rccData));
}

bool QResource_UnregisterResourceWithRccData(const unsigned char* rccData) {
	return QResource::unregisterResource(static_cast<const uchar*>(rccData));
}

bool QResource_RegisterResource2(struct miqt_string rccFilename, struct miqt_string resourceRoot) {
	QString rccFilename_QString = QString::fromUtf8(rccFilename.data, rccFilename.len);
	QString resourceRoot_QString = QString::fromUtf8(resourceRoot.data, resourceRoot.len);
	return QResource::registerResource(rccFilename_QString, resourceRoot_QString);
}

bool QResource_UnregisterResource2(struct miqt_string rccFilename, struct miqt_string resourceRoot) {
	QString rccFilename_QString = QString::fromUtf8(rccFilename.data, rccFilename.len);
	QString resourceRoot_QString = QString::fromUtf8(resourceRoot.data, resourceRoot.len);
	return QResource::unregisterResource(rccFilename_QString, resourceRoot_QString);
}

bool QResource_RegisterResource22(const unsigned char* rccData, struct miqt_string resourceRoot) {
	QString resourceRoot_QString = QString::fromUtf8(resourceRoot.data, resourceRoot.len);
	return QResource::registerResource(static_cast<const uchar*>(rccData), resourceRoot_QString);
}

bool QResource_UnregisterResource22(const unsigned char* rccData, struct miqt_string resourceRoot) {
	QString resourceRoot_QString = QString::fromUtf8(resourceRoot.data, resourceRoot.len);
	return QResource::unregisterResource(static_cast<const uchar*>(rccData), resourceRoot_QString);
}

void QResource_Delete(QResource* self) {
	delete self;
}

