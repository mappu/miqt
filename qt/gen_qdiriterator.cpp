#include <QDir>
#include <QDirIterator>
#include <QFileInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qdiriterator.h"
#include "gen_qdiriterator.h"
#include "_cgo_export.h"

QDirIterator* QDirIterator_new(QDir* dir) {
	return new QDirIterator(*dir);
}

QDirIterator* QDirIterator_new2(struct miqt_string* path) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	return new QDirIterator(path_QString);
}

QDirIterator* QDirIterator_new3(struct miqt_string* path, int filter) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	return new QDirIterator(path_QString, static_cast<QDir::Filters>(filter));
}

QDirIterator* QDirIterator_new4(struct miqt_string* path, struct miqt_array* /* of QString */ nameFilters) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	QList<QString> nameFilters_QList;
	nameFilters_QList.reserve(nameFilters->len);
	miqt_string** nameFilters_arr = static_cast<miqt_string**>(nameFilters->data);
	for(size_t i = 0; i < nameFilters->len; ++i) {
		nameFilters_QList.push_back(QString::fromUtf8(& nameFilters_arr[i]->data, nameFilters_arr[i]->len));
	}
	return new QDirIterator(path_QString, nameFilters_QList);
}

QDirIterator* QDirIterator_new5(QDir* dir, int flags) {
	return new QDirIterator(*dir, static_cast<QDirIterator::IteratorFlags>(flags));
}

QDirIterator* QDirIterator_new6(struct miqt_string* path, int flags) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	return new QDirIterator(path_QString, static_cast<QDirIterator::IteratorFlags>(flags));
}

QDirIterator* QDirIterator_new7(struct miqt_string* path, int filter, int flags) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	return new QDirIterator(path_QString, static_cast<QDir::Filters>(filter), static_cast<QDirIterator::IteratorFlags>(flags));
}

QDirIterator* QDirIterator_new8(struct miqt_string* path, struct miqt_array* /* of QString */ nameFilters, int filters) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	QList<QString> nameFilters_QList;
	nameFilters_QList.reserve(nameFilters->len);
	miqt_string** nameFilters_arr = static_cast<miqt_string**>(nameFilters->data);
	for(size_t i = 0; i < nameFilters->len; ++i) {
		nameFilters_QList.push_back(QString::fromUtf8(& nameFilters_arr[i]->data, nameFilters_arr[i]->len));
	}
	return new QDirIterator(path_QString, nameFilters_QList, static_cast<QDir::Filters>(filters));
}

QDirIterator* QDirIterator_new9(struct miqt_string* path, struct miqt_array* /* of QString */ nameFilters, int filters, int flags) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	QList<QString> nameFilters_QList;
	nameFilters_QList.reserve(nameFilters->len);
	miqt_string** nameFilters_arr = static_cast<miqt_string**>(nameFilters->data);
	for(size_t i = 0; i < nameFilters->len; ++i) {
		nameFilters_QList.push_back(QString::fromUtf8(& nameFilters_arr[i]->data, nameFilters_arr[i]->len));
	}
	return new QDirIterator(path_QString, nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDirIterator::IteratorFlags>(flags));
}

struct miqt_string* QDirIterator_Next(QDirIterator* self) {
	QString _ret = self->next();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QDirIterator_HasNext(const QDirIterator* self) {
	return self->hasNext();
}

struct miqt_string* QDirIterator_FileName(const QDirIterator* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDirIterator_FilePath(const QDirIterator* self) {
	QString _ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QFileInfo* QDirIterator_FileInfo(const QDirIterator* self) {
	QFileInfo _ret = self->fileInfo();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFileInfo*>(new QFileInfo(_ret));
}

struct miqt_string* QDirIterator_Path(const QDirIterator* self) {
	QString _ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QDirIterator_Delete(QDirIterator* self) {
	delete self;
}

