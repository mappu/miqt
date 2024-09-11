#include <QDir>
#include <QDirIterator>
#include <QFileInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qdiriterator.h"

#include "gen_qdiriterator.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QDirIterator* QDirIterator_new(QDir* dir) {
	return new QDirIterator(*dir);
}

QDirIterator* QDirIterator_new2(const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	return new QDirIterator(path_QString);
}

QDirIterator* QDirIterator_new3(const char* path, size_t path_Strlen, int filter) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	return new QDirIterator(path_QString, static_cast<QDir::Filters>(filter));
}

QDirIterator* QDirIterator_new4(const char* path, size_t path_Strlen, char** nameFilters, uint64_t* nameFilters_Lengths, size_t nameFilters_len) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QList<QString> nameFilters_QList;
	nameFilters_QList.reserve(nameFilters_len);
	for(size_t i = 0; i < nameFilters_len; ++i) {
		nameFilters_QList.push_back(QString::fromUtf8(nameFilters[i], nameFilters_Lengths[i]));
	}
	return new QDirIterator(path_QString, nameFilters_QList);
}

QDirIterator* QDirIterator_new5(QDir* dir, int flags) {
	return new QDirIterator(*dir, static_cast<QDirIterator::IteratorFlags>(flags));
}

QDirIterator* QDirIterator_new6(const char* path, size_t path_Strlen, int flags) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	return new QDirIterator(path_QString, static_cast<QDirIterator::IteratorFlags>(flags));
}

QDirIterator* QDirIterator_new7(const char* path, size_t path_Strlen, int filter, int flags) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	return new QDirIterator(path_QString, static_cast<QDir::Filters>(filter), static_cast<QDirIterator::IteratorFlags>(flags));
}

QDirIterator* QDirIterator_new8(const char* path, size_t path_Strlen, char** nameFilters, uint64_t* nameFilters_Lengths, size_t nameFilters_len, int filters) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QList<QString> nameFilters_QList;
	nameFilters_QList.reserve(nameFilters_len);
	for(size_t i = 0; i < nameFilters_len; ++i) {
		nameFilters_QList.push_back(QString::fromUtf8(nameFilters[i], nameFilters_Lengths[i]));
	}
	return new QDirIterator(path_QString, nameFilters_QList, static_cast<QDir::Filters>(filters));
}

QDirIterator* QDirIterator_new9(const char* path, size_t path_Strlen, char** nameFilters, uint64_t* nameFilters_Lengths, size_t nameFilters_len, int filters, int flags) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QList<QString> nameFilters_QList;
	nameFilters_QList.reserve(nameFilters_len);
	for(size_t i = 0; i < nameFilters_len; ++i) {
		nameFilters_QList.push_back(QString::fromUtf8(nameFilters[i], nameFilters_Lengths[i]));
	}
	return new QDirIterator(path_QString, nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDirIterator::IteratorFlags>(flags));
}

void QDirIterator_Next(QDirIterator* self, char** _out, int* _out_Strlen) {
	QString ret = self->next();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QDirIterator_HasNext(const QDirIterator* self) {
	return self->hasNext();
}

void QDirIterator_FileName(const QDirIterator* self, char** _out, int* _out_Strlen) {
	QString ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDirIterator_FilePath(const QDirIterator* self, char** _out, int* _out_Strlen) {
	QString ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QFileInfo* QDirIterator_FileInfo(const QDirIterator* self) {
	QFileInfo ret = self->fileInfo();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFileInfo*>(new QFileInfo(ret));
}

void QDirIterator_Path(const QDirIterator* self, char** _out, int* _out_Strlen) {
	QString ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDirIterator_Delete(QDirIterator* self) {
	delete self;
}

