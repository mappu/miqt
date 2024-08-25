#include "gen_qlibrary.h"
#include "qlibrary.h"

#include <QLibrary>
#include <QMetaObject>
#include <QObject>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QLibrary* QLibrary_new() {
	return new QLibrary();
}

QLibrary* QLibrary_new2(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QLibrary(fileName_QString);
}

QLibrary* QLibrary_new3(const char* fileName, size_t fileName_Strlen, int verNum) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QLibrary(fileName_QString, static_cast<int>(verNum));
}

QLibrary* QLibrary_new4(const char* fileName, size_t fileName_Strlen, const char* version, size_t version_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QString version_QString = QString::fromUtf8(version, version_Strlen);
	return new QLibrary(fileName_QString, version_QString);
}

QLibrary* QLibrary_new5(QObject* parent) {
	return new QLibrary(parent);
}

QLibrary* QLibrary_new6(const char* fileName, size_t fileName_Strlen, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QLibrary(fileName_QString, parent);
}

QLibrary* QLibrary_new7(const char* fileName, size_t fileName_Strlen, int verNum, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QLibrary(fileName_QString, static_cast<int>(verNum), parent);
}

QLibrary* QLibrary_new8(const char* fileName, size_t fileName_Strlen, const char* version, size_t version_Strlen, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QString version_QString = QString::fromUtf8(version, version_Strlen);
	return new QLibrary(fileName_QString, version_QString, parent);
}

QMetaObject* QLibrary_MetaObject(QLibrary* self) {
	return (QMetaObject*) self->metaObject();
}

void QLibrary_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QLibrary::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLibrary_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QLibrary::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QLibrary_Load(QLibrary* self) {
	return self->load();
}

bool QLibrary_Unload(QLibrary* self) {
	return self->unload();
}

bool QLibrary_IsLoaded(QLibrary* self) {
	return self->isLoaded();
}

bool QLibrary_IsLibrary(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return QLibrary::isLibrary(fileName_QString);
}

void QLibrary_SetFileName(QLibrary* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->setFileName(fileName_QString);
}

void QLibrary_FileName(QLibrary* self, char** _out, int* _out_Strlen) {
	QString ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLibrary_SetFileNameAndVersion(QLibrary* self, const char* fileName, size_t fileName_Strlen, int verNum) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->setFileNameAndVersion(fileName_QString, static_cast<int>(verNum));
}

void QLibrary_SetFileNameAndVersion2(QLibrary* self, const char* fileName, size_t fileName_Strlen, const char* version, size_t version_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QString version_QString = QString::fromUtf8(version, version_Strlen);
	self->setFileNameAndVersion(fileName_QString, version_QString);
}

void QLibrary_ErrorString(QLibrary* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLibrary_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QLibrary::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLibrary_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QLibrary::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLibrary_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QLibrary::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLibrary_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QLibrary::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLibrary_Delete(QLibrary* self) {
	delete self;
}

