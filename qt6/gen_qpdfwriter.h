#ifndef GEN_QPDFWRITER_H
#define GEN_QPDFWRITER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QIODevice;
class QMetaObject;
class QPdfWriter;
#else
typedef struct QByteArray QByteArray;
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
typedef struct QPdfWriter QPdfWriter;
#endif

QPdfWriter* QPdfWriter_new(struct miqt_string filename);
QPdfWriter* QPdfWriter_new2(QIODevice* device);
QMetaObject* QPdfWriter_MetaObject(const QPdfWriter* self);
void* QPdfWriter_Metacast(QPdfWriter* self, const char* param1);
struct miqt_string QPdfWriter_Tr(const char* s);
void QPdfWriter_SetPdfVersion(QPdfWriter* self, int version);
int QPdfWriter_PdfVersion(const QPdfWriter* self);
struct miqt_string QPdfWriter_Title(const QPdfWriter* self);
void QPdfWriter_SetTitle(QPdfWriter* self, struct miqt_string title);
struct miqt_string QPdfWriter_Creator(const QPdfWriter* self);
void QPdfWriter_SetCreator(QPdfWriter* self, struct miqt_string creator);
bool QPdfWriter_NewPage(QPdfWriter* self);
void QPdfWriter_SetResolution(QPdfWriter* self, int resolution);
int QPdfWriter_Resolution(const QPdfWriter* self);
void QPdfWriter_SetDocumentXmpMetadata(QPdfWriter* self, struct miqt_string xmpMetadata);
struct miqt_string QPdfWriter_DocumentXmpMetadata(const QPdfWriter* self);
void QPdfWriter_AddFileAttachment(QPdfWriter* self, struct miqt_string fileName, struct miqt_string data);
struct miqt_string QPdfWriter_Tr2(const char* s, const char* c);
struct miqt_string QPdfWriter_Tr3(const char* s, const char* c, int n);
void QPdfWriter_AddFileAttachment3(QPdfWriter* self, struct miqt_string fileName, struct miqt_string data, struct miqt_string mimeType);
void QPdfWriter_Delete(QPdfWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
