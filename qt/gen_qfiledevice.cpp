#include "gen_qfiledevice.h"
#include "qfiledevice.h"

#include <QFileDevice>
#include <QMetaObject>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QFileDevice_MetaObject(QFileDevice* self) {
	return (QMetaObject*) self->metaObject();
}

void QFileDevice_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QFileDevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDevice_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QFileDevice::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDevice_UnsetError(QFileDevice* self) {
	self->unsetError();
}

void QFileDevice_Close(QFileDevice* self) {
	self->close();
}

bool QFileDevice_IsSequential(QFileDevice* self) {
	return self->isSequential();
}

int QFileDevice_Handle(QFileDevice* self) {
	return self->handle();
}

void QFileDevice_FileName(QFileDevice* self, char** _out, int* _out_Strlen) {
	QString ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int64_t QFileDevice_Pos(QFileDevice* self) {
	return self->pos();
}

bool QFileDevice_Seek(QFileDevice* self, int64_t offset) {
	return self->seek((qint64)(offset));
}

bool QFileDevice_AtEnd(QFileDevice* self) {
	return self->atEnd();
}

bool QFileDevice_Flush(QFileDevice* self) {
	return self->flush();
}

int64_t QFileDevice_Size(QFileDevice* self) {
	return self->size();
}

bool QFileDevice_Resize(QFileDevice* self, int64_t sz) {
	return self->resize((qint64)(sz));
}

bool QFileDevice_Unmap(QFileDevice* self, unsigned char* address) {
	return self->unmap(static_cast<uchar*>(address));
}

void QFileDevice_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QFileDevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDevice_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFileDevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDevice_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QFileDevice::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDevice_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFileDevice::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDevice_Delete(QFileDevice* self) {
	delete self;
}

