#include <QByteArray>
#include <QFileInfo>
#include <QIODevice>
#include <QList>
#include <QMimeDatabase>
#include <QMimeType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qmimedatabase.h>
#include "gen_qmimedatabase.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMimeDatabase* QMimeDatabase_new() {
	return new QMimeDatabase();
}

QMimeType* QMimeDatabase_mimeTypeForName(const QMimeDatabase* self, struct miqt_string nameOrAlias) {
	QString nameOrAlias_QString = QString::fromUtf8(nameOrAlias.data, nameOrAlias.len);
	return new QMimeType(self->mimeTypeForName(nameOrAlias_QString));
}

QMimeType* QMimeDatabase_mimeTypeForFile(const QMimeDatabase* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QMimeType(self->mimeTypeForFile(fileName_QString));
}

QMimeType* QMimeDatabase_mimeTypeForFileWithFileInfo(const QMimeDatabase* self, QFileInfo* fileInfo) {
	return new QMimeType(self->mimeTypeForFile(*fileInfo));
}

struct miqt_array /* of QMimeType* */  QMimeDatabase_mimeTypesForFileName(const QMimeDatabase* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QList<QMimeType> _ret = self->mimeTypesForFileName(fileName_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	QMimeType** _arr = static_cast<QMimeType**>(malloc(sizeof(QMimeType*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QMimeType(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QMimeType* QMimeDatabase_mimeTypeForData(const QMimeDatabase* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QMimeType(self->mimeTypeForData(data_QByteArray));
}

QMimeType* QMimeDatabase_mimeTypeForDataWithDevice(const QMimeDatabase* self, QIODevice* device) {
	return new QMimeType(self->mimeTypeForData(device));
}

QMimeType* QMimeDatabase_mimeTypeForUrl(const QMimeDatabase* self, QUrl* url) {
	return new QMimeType(self->mimeTypeForUrl(*url));
}

QMimeType* QMimeDatabase_mimeTypeForFileNameAndData(const QMimeDatabase* self, struct miqt_string fileName, QIODevice* device) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QMimeType(self->mimeTypeForFileNameAndData(fileName_QString, device));
}

QMimeType* QMimeDatabase_mimeTypeForFileNameAndData2(const QMimeDatabase* self, struct miqt_string fileName, struct miqt_string data) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray data_QByteArray(data.data, data.len);
	return new QMimeType(self->mimeTypeForFileNameAndData(fileName_QString, data_QByteArray));
}

struct miqt_string QMimeDatabase_suffixForFileName(const QMimeDatabase* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString _ret = self->suffixForFileName(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QMimeType* */  QMimeDatabase_allMimeTypes(const QMimeDatabase* self) {
	QList<QMimeType> _ret = self->allMimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QMimeType** _arr = static_cast<QMimeType**>(malloc(sizeof(QMimeType*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QMimeType(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QMimeType* QMimeDatabase_mimeTypeForFile2(const QMimeDatabase* self, struct miqt_string fileName, int mode) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QMimeType(self->mimeTypeForFile(fileName_QString, static_cast<QMimeDatabase::MatchMode>(mode)));
}

QMimeType* QMimeDatabase_mimeTypeForFile22(const QMimeDatabase* self, QFileInfo* fileInfo, int mode) {
	return new QMimeType(self->mimeTypeForFile(*fileInfo, static_cast<QMimeDatabase::MatchMode>(mode)));
}

void QMimeDatabase_delete(QMimeDatabase* self) {
	delete self;
}

