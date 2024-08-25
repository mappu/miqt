#include "gen_qdiriterator.h"
#include "qdiriterator.h"

#include <QDirIterator>
#include <QFileInfo>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QDirIterator_Next(QDirIterator* self, char** _out, int* _out_Strlen) {
	QString ret = self->next();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QDirIterator_HasNext(QDirIterator* self) {
	return self->hasNext();
}

void QDirIterator_FileName(QDirIterator* self, char** _out, int* _out_Strlen) {
	QString ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDirIterator_FilePath(QDirIterator* self, char** _out, int* _out_Strlen) {
	QString ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QFileInfo* QDirIterator_FileInfo(QDirIterator* self) {
	QFileInfo ret = self->fileInfo();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFileInfo*>(new QFileInfo(ret));
}

void QDirIterator_Path(QDirIterator* self, char** _out, int* _out_Strlen) {
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

