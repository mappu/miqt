#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTemporaryDir>
#include "qtemporarydir.h"

#include "gen_qtemporarydir.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTemporaryDir* QTemporaryDir_new() {
	return new QTemporaryDir();
}

QTemporaryDir* QTemporaryDir_new2(const char* templateName, size_t templateName_Strlen) {
	QString templateName_QString = QString::fromUtf8(templateName, templateName_Strlen);
	return new QTemporaryDir(templateName_QString);
}

bool QTemporaryDir_IsValid(const QTemporaryDir* self) {
	return self->isValid();
}

void QTemporaryDir_ErrorString(const QTemporaryDir* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QTemporaryDir_AutoRemove(const QTemporaryDir* self) {
	return self->autoRemove();
}

void QTemporaryDir_SetAutoRemove(QTemporaryDir* self, bool b) {
	self->setAutoRemove(b);
}

bool QTemporaryDir_Remove(QTemporaryDir* self) {
	return self->remove();
}

void QTemporaryDir_Path(const QTemporaryDir* self, char** _out, int* _out_Strlen) {
	QString ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTemporaryDir_FilePath(const QTemporaryDir* self, const char* fileName, size_t fileName_Strlen, char** _out, int* _out_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QString ret = self->filePath(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTemporaryDir_Delete(QTemporaryDir* self) {
	delete self;
}

