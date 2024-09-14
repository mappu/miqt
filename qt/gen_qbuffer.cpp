#include <QBuffer>
#include <QByteArray>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qbuffer.h"
#include "gen_qbuffer.h"
#include "_cgo_export.h"

QBuffer* QBuffer_new() {
	return new QBuffer();
}

QBuffer* QBuffer_new2(QByteArray* buf) {
	return new QBuffer(buf);
}

QBuffer* QBuffer_new3(QObject* parent) {
	return new QBuffer(parent);
}

QBuffer* QBuffer_new4(QByteArray* buf, QObject* parent) {
	return new QBuffer(buf, parent);
}

QMetaObject* QBuffer_MetaObject(const QBuffer* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QBuffer_Tr(const char* s) {
	QString _ret = QBuffer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QBuffer_TrUtf8(const char* s) {
	QString _ret = QBuffer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QByteArray* QBuffer_Buffer(QBuffer* self) {
	QByteArray& _ret = self->buffer();
	// Cast returned reference into pointer
	return &_ret;
}

QByteArray* QBuffer_Buffer2(const QBuffer* self) {
	const QByteArray& _ret = self->buffer();
	// Cast returned reference into pointer
	return const_cast<QByteArray*>(&_ret);
}

void QBuffer_SetBuffer(QBuffer* self, QByteArray* a) {
	self->setBuffer(a);
}

void QBuffer_SetData(QBuffer* self, QByteArray* data) {
	self->setData(*data);
}

void QBuffer_SetData2(QBuffer* self, const char* data, int lenVal) {
	self->setData(data, static_cast<int>(lenVal));
}

QByteArray* QBuffer_Data(const QBuffer* self) {
	const QByteArray& _ret = self->data();
	// Cast returned reference into pointer
	return const_cast<QByteArray*>(&_ret);
}

bool QBuffer_Open(QBuffer* self, int openMode) {
	return self->open(static_cast<QIODevice::OpenMode>(openMode));
}

void QBuffer_Close(QBuffer* self) {
	self->close();
}

long long QBuffer_Size(const QBuffer* self) {
	return self->size();
}

long long QBuffer_Pos(const QBuffer* self) {
	return self->pos();
}

bool QBuffer_Seek(QBuffer* self, long long off) {
	return self->seek(static_cast<qint64>(off));
}

bool QBuffer_AtEnd(const QBuffer* self) {
	return self->atEnd();
}

bool QBuffer_CanReadLine(const QBuffer* self) {
	return self->canReadLine();
}

struct miqt_string* QBuffer_Tr2(const char* s, const char* c) {
	QString _ret = QBuffer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QBuffer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QBuffer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QBuffer_TrUtf82(const char* s, const char* c) {
	QString _ret = QBuffer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QBuffer_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QBuffer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QBuffer_Delete(QBuffer* self) {
	delete self;
}

