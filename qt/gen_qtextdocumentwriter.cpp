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
#include <qtextdocumentwriter.h>
#include "gen_qtextdocumentwriter.h"
#include "_cgo_export.h"

QTextDocumentWriter* QTextDocumentWriter_new() {
	return new QTextDocumentWriter();
}

QTextDocumentWriter* QTextDocumentWriter_new2(QIODevice* device, QByteArray* format) {
	return new QTextDocumentWriter(device, *format);
}

QTextDocumentWriter* QTextDocumentWriter_new3(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QTextDocumentWriter(fileName_QString);
}

QTextDocumentWriter* QTextDocumentWriter_new4(struct miqt_string* fileName, QByteArray* format) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QTextDocumentWriter(fileName_QString, *format);
}

void QTextDocumentWriter_SetFormat(QTextDocumentWriter* self, QByteArray* format) {
	self->setFormat(*format);
}

QByteArray* QTextDocumentWriter_Format(const QTextDocumentWriter* self) {
	return new QByteArray(self->format());
}

void QTextDocumentWriter_SetDevice(QTextDocumentWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QTextDocumentWriter_Device(const QTextDocumentWriter* self) {
	return self->device();
}

void QTextDocumentWriter_SetFileName(QTextDocumentWriter* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	self->setFileName(fileName_QString);
}

struct miqt_string* QTextDocumentWriter_FileName(const QTextDocumentWriter* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

QTextCodec* QTextDocumentWriter_Codec(const QTextDocumentWriter* self) {
	return self->codec();
}

struct miqt_array* QTextDocumentWriter_SupportedDocumentFormats() {
	QList<QByteArray> _ret = QTextDocumentWriter::supportedDocumentFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QTextDocumentWriter_Delete(QTextDocumentWriter* self) {
	delete self;
}

