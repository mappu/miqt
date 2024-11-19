#pragma once
#ifndef MIQT_QT_GEN_QTEXTDOCUMENTWRITER_H
#define MIQT_QT_GEN_QTEXTDOCUMENTWRITER_H

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

void QTextDocumentWriter_new(QTextDocumentWriter** outptr_QTextDocumentWriter);
void QTextDocumentWriter_new2(QIODevice* device, struct miqt_string format, QTextDocumentWriter** outptr_QTextDocumentWriter);
void QTextDocumentWriter_new3(struct miqt_string fileName, QTextDocumentWriter** outptr_QTextDocumentWriter);
void QTextDocumentWriter_new4(struct miqt_string fileName, struct miqt_string format, QTextDocumentWriter** outptr_QTextDocumentWriter);
void QTextDocumentWriter_SetFormat(QTextDocumentWriter* self, struct miqt_string format);
struct miqt_string QTextDocumentWriter_Format(const QTextDocumentWriter* self);
void QTextDocumentWriter_SetDevice(QTextDocumentWriter* self, QIODevice* device);
QIODevice* QTextDocumentWriter_Device(const QTextDocumentWriter* self);
void QTextDocumentWriter_SetFileName(QTextDocumentWriter* self, struct miqt_string fileName);
struct miqt_string QTextDocumentWriter_FileName(const QTextDocumentWriter* self);
bool QTextDocumentWriter_Write(QTextDocumentWriter* self, QTextDocument* document);
bool QTextDocumentWriter_WriteWithFragment(QTextDocumentWriter* self, QTextDocumentFragment* fragment);
void QTextDocumentWriter_SetCodec(QTextDocumentWriter* self, QTextCodec* codec);
QTextCodec* QTextDocumentWriter_Codec(const QTextDocumentWriter* self);
struct miqt_array /* of struct miqt_string */  QTextDocumentWriter_SupportedDocumentFormats();
void QTextDocumentWriter_Delete(QTextDocumentWriter* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
