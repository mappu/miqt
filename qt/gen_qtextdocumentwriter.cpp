#include <QByteArray>
#include <QIODevice>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCodec>
#include <QTextDocument>
#include <QTextDocumentFragment>
#include <QTextDocumentWriter>
#include "qtextdocumentwriter.h"

#include "gen_qtextdocumentwriter.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextDocumentWriter* QTextDocumentWriter_new() {
	return new QTextDocumentWriter();
}

QTextDocumentWriter* QTextDocumentWriter_new2(QIODevice* device, QByteArray* format) {
	return new QTextDocumentWriter(device, *format);
}

QTextDocumentWriter* QTextDocumentWriter_new3(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QTextDocumentWriter(fileName_QString);
}

QTextDocumentWriter* QTextDocumentWriter_new4(const char* fileName, size_t fileName_Strlen, QByteArray* format) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QTextDocumentWriter(fileName_QString, *format);
}

void QTextDocumentWriter_SetFormat(QTextDocumentWriter* self, QByteArray* format) {
	self->setFormat(*format);
}

QByteArray* QTextDocumentWriter_Format(QTextDocumentWriter* self) {
	QByteArray ret = const_cast<const QTextDocumentWriter*>(self)->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QTextDocumentWriter_SetDevice(QTextDocumentWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QTextDocumentWriter_Device(QTextDocumentWriter* self) {
	return const_cast<const QTextDocumentWriter*>(self)->device();
}

void QTextDocumentWriter_SetFileName(QTextDocumentWriter* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->setFileName(fileName_QString);
}

void QTextDocumentWriter_FileName(QTextDocumentWriter* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextDocumentWriter*>(self)->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QTextDocumentWriter_Write(QTextDocumentWriter* self, QTextDocument* document) {
	return self->write(document);
}

bool QTextDocumentWriter_WriteWithFragment(QTextDocumentWriter* self, QTextDocumentFragment* fragment) {
	return self->write(*fragment);
}

void QTextDocumentWriter_SetCodec(QTextDocumentWriter* self, QTextCodec* codec) {
	self->setCodec(codec);
}

QTextCodec* QTextDocumentWriter_Codec(QTextDocumentWriter* self) {
	return const_cast<const QTextDocumentWriter*>(self)->codec();
}

void QTextDocumentWriter_SupportedDocumentFormats(QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QTextDocumentWriter::supportedDocumentFormats();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextDocumentWriter_Delete(QTextDocumentWriter* self) {
	delete self;
}

