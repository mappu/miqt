#include "gen_qtemporaryfile.h"
#include "qtemporaryfile.h"

#include <QFile>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTemporaryFile>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTemporaryFile* QTemporaryFile_new() {
	return new QTemporaryFile();
}

QTemporaryFile* QTemporaryFile_new2(const char* templateName, size_t templateName_Strlen) {
	QString templateName_QString = QString::fromUtf8(templateName, templateName_Strlen);
	return new QTemporaryFile(templateName_QString);
}

QTemporaryFile* QTemporaryFile_new3(QObject* parent) {
	return new QTemporaryFile(parent);
}

QTemporaryFile* QTemporaryFile_new4(const char* templateName, size_t templateName_Strlen, QObject* parent) {
	QString templateName_QString = QString::fromUtf8(templateName, templateName_Strlen);
	return new QTemporaryFile(templateName_QString, parent);
}

QMetaObject* QTemporaryFile_MetaObject(QTemporaryFile* self) {
	return (QMetaObject*) self->metaObject();
}

void QTemporaryFile_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTemporaryFile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTemporaryFile_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTemporaryFile::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QTemporaryFile_AutoRemove(QTemporaryFile* self) {
	return self->autoRemove();
}

void QTemporaryFile_SetAutoRemove(QTemporaryFile* self, bool b) {
	self->setAutoRemove(b);
}

bool QTemporaryFile_Open(QTemporaryFile* self) {
	return self->open();
}

void QTemporaryFile_FileName(QTemporaryFile* self, char** _out, int* _out_Strlen) {
	QString ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTemporaryFile_FileTemplate(QTemporaryFile* self, char** _out, int* _out_Strlen) {
	QString ret = self->fileTemplate();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTemporaryFile_SetFileTemplate(QTemporaryFile* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->setFileTemplate(name_QString);
}

bool QTemporaryFile_Rename(QTemporaryFile* self, const char* newName, size_t newName_Strlen) {
	QString newName_QString = QString::fromUtf8(newName, newName_Strlen);
	return self->rename(newName_QString);
}

QTemporaryFile* QTemporaryFile_CreateLocalFile(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return QTemporaryFile::createLocalFile(fileName_QString);
}

QTemporaryFile* QTemporaryFile_CreateLocalFileWithFile(QFile* file) {
	return QTemporaryFile::createLocalFile(*file);
}

QTemporaryFile* QTemporaryFile_CreateNativeFile(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return QTemporaryFile::createNativeFile(fileName_QString);
}

QTemporaryFile* QTemporaryFile_CreateNativeFileWithFile(QFile* file) {
	return QTemporaryFile::createNativeFile(*file);
}

void QTemporaryFile_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTemporaryFile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTemporaryFile_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTemporaryFile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTemporaryFile_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTemporaryFile::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTemporaryFile_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTemporaryFile::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTemporaryFile_Delete(QTemporaryFile* self) {
	delete self;
}

