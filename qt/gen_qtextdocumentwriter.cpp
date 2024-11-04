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

QTextDocumentWriter* QTextDocumentWriter_new2(QIODevice* device, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	return new QTextDocumentWriter(device, format_QByteArray);
}

QTextDocumentWriter* QTextDocumentWriter_new3(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QTextDocumentWriter(fileName_QString);
}

QTextDocumentWriter* QTextDocumentWriter_new4(struct miqt_string fileName, struct miqt_string format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray format_QByteArray(format.data, format.len);
	return new QTextDocumentWriter(fileName_QString, format_QByteArray);
}

void QTextDocumentWriter_SetFormat(QTextDocumentWriter* self, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	self->setFormat(format_QByteArray);
}

struct miqt_string QTextDocumentWriter_Format(const QTextDocumentWriter* self) {
	QByteArray _qb = self->format();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QTextDocumentWriter_SetDevice(QTextDocumentWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QTextDocumentWriter_Device(const QTextDocumentWriter* self) {
	return self->device();
}

void QTextDocumentWriter_SetFileName(QTextDocumentWriter* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

struct miqt_string QTextDocumentWriter_FileName(const QTextDocumentWriter* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

struct miqt_array QTextDocumentWriter_SupportedDocumentFormats() {
	QList<QByteArray> _ret = QTextDocumentWriter::supportedDocumentFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextDocumentWriter_Delete(QTextDocumentWriter* self) {
	delete self;
}

