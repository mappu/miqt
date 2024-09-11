#ifndef GEN_QPDFWRITER_H
#define GEN_QPDFWRITER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QPdfWriter* QPdfWriter_new(const char* filename, size_t filename_Strlen);
QPdfWriter* QPdfWriter_new2(QIODevice* device);
QMetaObject* QPdfWriter_MetaObject(const QPdfWriter* self);
void QPdfWriter_Tr(const char* s, char** _out, int* _out_Strlen);
void QPdfWriter_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QPdfWriter_SetPdfVersion(QPdfWriter* self, uintptr_t version);
uintptr_t QPdfWriter_PdfVersion(const QPdfWriter* self);
void QPdfWriter_Title(const QPdfWriter* self, char** _out, int* _out_Strlen);
void QPdfWriter_SetTitle(QPdfWriter* self, const char* title, size_t title_Strlen);
void QPdfWriter_Creator(const QPdfWriter* self, char** _out, int* _out_Strlen);
void QPdfWriter_SetCreator(QPdfWriter* self, const char* creator, size_t creator_Strlen);
bool QPdfWriter_NewPage(QPdfWriter* self);
void QPdfWriter_SetResolution(QPdfWriter* self, int resolution);
int QPdfWriter_Resolution(const QPdfWriter* self);
void QPdfWriter_SetDocumentXmpMetadata(QPdfWriter* self, QByteArray* xmpMetadata);
QByteArray* QPdfWriter_DocumentXmpMetadata(const QPdfWriter* self);
void QPdfWriter_AddFileAttachment(QPdfWriter* self, const char* fileName, size_t fileName_Strlen, QByteArray* data);
void QPdfWriter_SetPageSize(QPdfWriter* self, uintptr_t size);
void QPdfWriter_SetPageSizeMM(QPdfWriter* self, QSizeF* size);
void QPdfWriter_SetMargins(QPdfWriter* self, QPagedPaintDevice__Margins* m);
void QPdfWriter_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPdfWriter_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPdfWriter_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPdfWriter_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPdfWriter_AddFileAttachment3(QPdfWriter* self, const char* fileName, size_t fileName_Strlen, QByteArray* data, const char* mimeType, size_t mimeType_Strlen);
void QPdfWriter_Delete(QPdfWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
