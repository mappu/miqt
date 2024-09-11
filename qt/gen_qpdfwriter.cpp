#include <QByteArray>
#include <QIODevice>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPagedPaintDevice__Margins
#include <QPdfWriter>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qpdfwriter.h"

#include "gen_qpdfwriter.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPdfWriter* QPdfWriter_new(const char* filename, size_t filename_Strlen) {
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	return new QPdfWriter(filename_QString);
}

QPdfWriter* QPdfWriter_new2(QIODevice* device) {
	return new QPdfWriter(device);
}

QMetaObject* QPdfWriter_MetaObject(const QPdfWriter* self) {
	return (QMetaObject*) self->metaObject();
}

void QPdfWriter_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QPdfWriter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPdfWriter_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QPdfWriter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPdfWriter_SetPdfVersion(QPdfWriter* self, uintptr_t version) {
	self->setPdfVersion(static_cast<QPagedPaintDevice::PdfVersion>(version));
}

uintptr_t QPdfWriter_PdfVersion(const QPdfWriter* self) {
	QPagedPaintDevice::PdfVersion ret = self->pdfVersion();
	return static_cast<uintptr_t>(ret);
}

void QPdfWriter_Title(const QPdfWriter* self, char** _out, int* _out_Strlen) {
	QString ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPdfWriter_SetTitle(QPdfWriter* self, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	self->setTitle(title_QString);
}

void QPdfWriter_Creator(const QPdfWriter* self, char** _out, int* _out_Strlen) {
	QString ret = self->creator();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPdfWriter_SetCreator(QPdfWriter* self, const char* creator, size_t creator_Strlen) {
	QString creator_QString = QString::fromUtf8(creator, creator_Strlen);
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
	QByteArray ret = self->documentXmpMetadata();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QPdfWriter_AddFileAttachment(QPdfWriter* self, const char* fileName, size_t fileName_Strlen, QByteArray* data) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->addFileAttachment(fileName_QString, *data);
}

void QPdfWriter_SetPageSize(QPdfWriter* self, uintptr_t size) {
	self->setPageSize(static_cast<QPagedPaintDevice::PageSize>(size));
}

void QPdfWriter_SetPageSizeMM(QPdfWriter* self, QSizeF* size) {
	self->setPageSizeMM(*size);
}

void QPdfWriter_SetMargins(QPdfWriter* self, QPagedPaintDevice__Margins* m) {
	self->setMargins(*m);
}

void QPdfWriter_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QPdfWriter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPdfWriter_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPdfWriter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPdfWriter_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QPdfWriter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPdfWriter_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPdfWriter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPdfWriter_AddFileAttachment3(QPdfWriter* self, const char* fileName, size_t fileName_Strlen, QByteArray* data, const char* mimeType, size_t mimeType_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QString mimeType_QString = QString::fromUtf8(mimeType, mimeType_Strlen);
	self->addFileAttachment(fileName_QString, *data, mimeType_QString);
}

void QPdfWriter_Delete(QPdfWriter* self) {
	delete self;
}

