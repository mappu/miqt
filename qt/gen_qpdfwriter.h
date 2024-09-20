#ifndef GEN_QPDFWRITER_H
#define GEN_QPDFWRITER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QIODevice;
class QMetaObject;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPagedPaintDevice__Margins)
typedef QPagedPaintDevice::Margins QPagedPaintDevice__Margins;
#else
class QPagedPaintDevice__Margins;
#endif
class QPdfWriter;
class QSizeF;
#else
typedef struct QByteArray QByteArray;
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
typedef struct QPagedPaintDevice__Margins QPagedPaintDevice__Margins;
typedef struct QPdfWriter QPdfWriter;
typedef struct QSizeF QSizeF;
#endif

QPdfWriter* QPdfWriter_new(struct miqt_string* filename);
QPdfWriter* QPdfWriter_new2(QIODevice* device);
QMetaObject* QPdfWriter_MetaObject(const QPdfWriter* self);
void* QPdfWriter_Metacast(QPdfWriter* self, const char* param1);
struct miqt_string* QPdfWriter_Tr(const char* s);
struct miqt_string* QPdfWriter_TrUtf8(const char* s);
void QPdfWriter_SetPdfVersion(QPdfWriter* self, int version);
int QPdfWriter_PdfVersion(const QPdfWriter* self);
struct miqt_string* QPdfWriter_Title(const QPdfWriter* self);
void QPdfWriter_SetTitle(QPdfWriter* self, struct miqt_string* title);
struct miqt_string* QPdfWriter_Creator(const QPdfWriter* self);
void QPdfWriter_SetCreator(QPdfWriter* self, struct miqt_string* creator);
bool QPdfWriter_NewPage(QPdfWriter* self);
void QPdfWriter_SetResolution(QPdfWriter* self, int resolution);
int QPdfWriter_Resolution(const QPdfWriter* self);
void QPdfWriter_SetDocumentXmpMetadata(QPdfWriter* self, QByteArray* xmpMetadata);
QByteArray* QPdfWriter_DocumentXmpMetadata(const QPdfWriter* self);
void QPdfWriter_AddFileAttachment(QPdfWriter* self, struct miqt_string* fileName, QByteArray* data);
void QPdfWriter_SetPageSize(QPdfWriter* self, int size);
void QPdfWriter_SetPageSizeMM(QPdfWriter* self, QSizeF* size);
void QPdfWriter_SetMargins(QPdfWriter* self, QPagedPaintDevice__Margins* m);
struct miqt_string* QPdfWriter_Tr2(const char* s, const char* c);
struct miqt_string* QPdfWriter_Tr3(const char* s, const char* c, int n);
struct miqt_string* QPdfWriter_TrUtf82(const char* s, const char* c);
struct miqt_string* QPdfWriter_TrUtf83(const char* s, const char* c, int n);
void QPdfWriter_AddFileAttachment3(QPdfWriter* self, struct miqt_string* fileName, QByteArray* data, struct miqt_string* mimeType);
void QPdfWriter_Delete(QPdfWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
