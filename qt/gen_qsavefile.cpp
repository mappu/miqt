#include <QMetaObject>
#include <QObject>
#include <QSaveFile>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qsavefile.h"

#include "gen_qsavefile.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSaveFile* QSaveFile_new(const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return new QSaveFile(name_QString);
}

QSaveFile* QSaveFile_new2() {
	return new QSaveFile();
}

QSaveFile* QSaveFile_new3(const char* name, size_t name_Strlen, QObject* parent) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return new QSaveFile(name_QString, parent);
}

QSaveFile* QSaveFile_new4(QObject* parent) {
	return new QSaveFile(parent);
}

QMetaObject* QSaveFile_MetaObject(QSaveFile* self) {
	return (QMetaObject*) const_cast<const QSaveFile*>(self)->metaObject();
}

void QSaveFile_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSaveFile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSaveFile_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSaveFile::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSaveFile_FileName(QSaveFile* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QSaveFile*>(self)->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSaveFile_SetFileName(QSaveFile* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->setFileName(name_QString);
}

bool QSaveFile_Open(QSaveFile* self, int flags) {
	return self->open(static_cast<QIODevice::OpenMode>(flags));
}

bool QSaveFile_Commit(QSaveFile* self) {
	return self->commit();
}

void QSaveFile_CancelWriting(QSaveFile* self) {
	self->cancelWriting();
}

void QSaveFile_SetDirectWriteFallback(QSaveFile* self, bool enabled) {
	self->setDirectWriteFallback(enabled);
}

bool QSaveFile_DirectWriteFallback(QSaveFile* self) {
	return const_cast<const QSaveFile*>(self)->directWriteFallback();
}

void QSaveFile_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSaveFile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSaveFile_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSaveFile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSaveFile_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSaveFile::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSaveFile_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSaveFile::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSaveFile_Delete(QSaveFile* self) {
	delete self;
}

