#ifndef GEN_QTEXTDOCUMENTWRITER_H
#define GEN_QTEXTDOCUMENTWRITER_H

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
class QTextCodec;
class QTextDocument;
class QTextDocumentFragment;
class QTextDocumentWriter;
#else
typedef struct QByteArray QByteArray;
typedef struct QIODevice QIODevice;
typedef struct QTextCodec QTextCodec;
typedef struct QTextDocument QTextDocument;
typedef struct QTextDocumentFragment QTextDocumentFragment;
typedef struct QTextDocumentWriter QTextDocumentWriter;
#endif

QTextDocumentWriter* QTextDocumentWriter_new();
QTextDocumentWriter* QTextDocumentWriter_new2(QIODevice* device, QByteArray* format);
QTextDocumentWriter* QTextDocumentWriter_new3(const char* fileName, size_t fileName_Strlen);
QTextDocumentWriter* QTextDocumentWriter_new4(const char* fileName, size_t fileName_Strlen, QByteArray* format);
void QTextDocumentWriter_SetFormat(QTextDocumentWriter* self, QByteArray* format);
QByteArray* QTextDocumentWriter_Format(const QTextDocumentWriter* self);
void QTextDocumentWriter_SetDevice(QTextDocumentWriter* self, QIODevice* device);
QIODevice* QTextDocumentWriter_Device(const QTextDocumentWriter* self);
void QTextDocumentWriter_SetFileName(QTextDocumentWriter* self, const char* fileName, size_t fileName_Strlen);
void QTextDocumentWriter_FileName(const QTextDocumentWriter* self, char** _out, int* _out_Strlen);
bool QTextDocumentWriter_Write(QTextDocumentWriter* self, QTextDocument* document);
bool QTextDocumentWriter_WriteWithFragment(QTextDocumentWriter* self, QTextDocumentFragment* fragment);
void QTextDocumentWriter_SetCodec(QTextDocumentWriter* self, QTextCodec* codec);
QTextCodec* QTextDocumentWriter_Codec(const QTextDocumentWriter* self);
void QTextDocumentWriter_SupportedDocumentFormats(QByteArray*** _out, size_t* _out_len);
void QTextDocumentWriter_Delete(QTextDocumentWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
