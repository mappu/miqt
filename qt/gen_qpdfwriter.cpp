#include <QByteArray>
#include <QIODevice>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPagedPaintDevice__Margins
#include <QPdfWriter>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpdfwriter.h>
#include "gen_qpdfwriter.h"
#include "_cgo_export.h"

QPdfWriter* QPdfWriter_new(struct miqt_string* filename) {
	QString filename_QString = QString::fromUtf8(&filename->data, filename->len);
	return new QPdfWriter(filename_QString);
}

QPdfWriter* QPdfWriter_new2(QIODevice* device) {
	return new QPdfWriter(device);
}

QMetaObject* QPdfWriter_MetaObject(const QPdfWriter* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPdfWriter_Metacast(QPdfWriter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QPdfWriter_Tr(const char* s) {
	QString _ret = QPdfWriter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPdfWriter_TrUtf8(const char* s) {
	QString _ret = QPdfWriter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QPdfWriter_SetPdfVersion(QPdfWriter* self, int version) {
	self->setPdfVersion(static_cast<QPagedPaintDevice::PdfVersion>(version));
}

int QPdfWriter_PdfVersion(const QPdfWriter* self) {
	QPagedPaintDevice::PdfVersion _ret = self->pdfVersion();
	return static_cast<int>(_ret);
}

struct miqt_string* QPdfWriter_Title(const QPdfWriter* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QPdfWriter_SetTitle(QPdfWriter* self, struct miqt_string* title) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	self->setTitle(title_QString);
}

struct miqt_string* QPdfWriter_Creator(const QPdfWriter* self) {
	QString _ret = self->creator();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QPdfWriter_SetCreator(QPdfWriter* self, struct miqt_string* creator) {
	QString creator_QString = QString::fromUtf8(&creator->data, creator->len);
	self->setCreator(creator_QString);
}

bool QPdfWriter_NewPage(QPdfWriter* self) {
	return self->newPage();
}

void QPdfWriter_SetResolution(QPdfWriter* self, int resolution) {
	self->setResolution(static_cast<int>(resolution));
}

int QPdfWriter_Resolution(const QPdfWriter* self) {
	return self->resolution();
}

void QPdfWriter_SetDocumentXmpMetadata(QPdfWriter* self, QByteArray* xmpMetadata) {
	self->setDocumentXmpMetadata(*xmpMetadata);
}

QByteArray* QPdfWriter_DocumentXmpMetadata(const QPdfWriter* self) {
	return new QByteArray(self->documentXmpMetadata());
}

void QPdfWriter_AddFileAttachment(QPdfWriter* self, struct miqt_string* fileName, QByteArray* data) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	self->addFileAttachment(fileName_QString, *data);
}

void QPdfWriter_SetPageSize(QPdfWriter* self, int size) {
	self->setPageSize(static_cast<QPagedPaintDevice::PageSize>(size));
}

void QPdfWriter_SetPageSizeMM(QPdfWriter* self, QSizeF* size) {
	self->setPageSizeMM(*size);
}

void QPdfWriter_SetMargins(QPdfWriter* self, QPagedPaintDevice__Margins* m) {
	self->setMargins(*m);
}

struct miqt_string* QPdfWriter_Tr2(const char* s, const char* c) {
	QString _ret = QPdfWriter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPdfWriter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPdfWriter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPdfWriter_TrUtf82(const char* s, const char* c) {
	QString _ret = QPdfWriter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPdfWriter_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPdfWriter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QPdfWriter_AddFileAttachment3(QPdfWriter* self, struct miqt_string* fileName, QByteArray* data, struct miqt_string* mimeType) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	QString mimeType_QString = QString::fromUtf8(&mimeType->data, mimeType->len);
	self->addFileAttachment(fileName_QString, *data, mimeType_QString);
}

void QPdfWriter_Delete(QPdfWriter* self) {
	delete self;
}

