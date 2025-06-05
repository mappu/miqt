#pragma once
#ifndef MIQT_QT6_GEN_QTEXTDOCUMENTWRITER_H
#define MIQT_QT6_GEN_QTEXTDOCUMENTWRITER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIODevice;
class QTextDocument;
class QTextDocumentFragment;
class QTextDocumentWriter;
#else
typedef struct QIODevice QIODevice;
typedef struct QTextDocument QTextDocument;
typedef struct QTextDocumentFragment QTextDocumentFragment;
typedef struct QTextDocumentWriter QTextDocumentWriter;
#endif

QTextDocumentWriter* QTextDocumentWriter_new();
QTextDocumentWriter* QTextDocumentWriter_new2(QIODevice* device, struct miqt_string format);
QTextDocumentWriter* QTextDocumentWriter_new3(struct miqt_string fileName);
QTextDocumentWriter* QTextDocumentWriter_new4(struct miqt_string fileName, struct miqt_string format);
void QTextDocumentWriter_setFormat(QTextDocumentWriter* self, struct miqt_string format);
struct miqt_string QTextDocumentWriter_format(const QTextDocumentWriter* self);
void QTextDocumentWriter_setDevice(QTextDocumentWriter* self, QIODevice* device);
QIODevice* QTextDocumentWriter_device(const QTextDocumentWriter* self);
void QTextDocumentWriter_setFileName(QTextDocumentWriter* self, struct miqt_string fileName);
struct miqt_string QTextDocumentWriter_fileName(const QTextDocumentWriter* self);
bool QTextDocumentWriter_write(QTextDocumentWriter* self, QTextDocument* document);
bool QTextDocumentWriter_writeWithFragment(QTextDocumentWriter* self, QTextDocumentFragment* fragment);
struct miqt_array /* of struct miqt_string */  QTextDocumentWriter_supportedDocumentFormats();

void QTextDocumentWriter_delete(QTextDocumentWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
