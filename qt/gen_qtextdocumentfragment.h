#pragma once
#ifndef MIQT_QT_GEN_QTEXTDOCUMENTFRAGMENT_H
#define MIQT_QT_GEN_QTEXTDOCUMENTFRAGMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QTextCursor;
class QTextDocument;
class QTextDocumentFragment;
#else
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextDocumentFragment QTextDocumentFragment;
#endif

QTextDocumentFragment* QTextDocumentFragment_new();
QTextDocumentFragment* QTextDocumentFragment_new2(QTextDocument* document);
QTextDocumentFragment* QTextDocumentFragment_new3(QTextCursor* range);
QTextDocumentFragment* QTextDocumentFragment_new4(QTextDocumentFragment* rhs);
void QTextDocumentFragment_operatorAssign(QTextDocumentFragment* self, QTextDocumentFragment* rhs);
bool QTextDocumentFragment_isEmpty(const QTextDocumentFragment* self);
struct miqt_string QTextDocumentFragment_toPlainText(const QTextDocumentFragment* self);
struct miqt_string QTextDocumentFragment_toHtml(const QTextDocumentFragment* self);
QTextDocumentFragment* QTextDocumentFragment_fromPlainText(struct miqt_string plainText);
QTextDocumentFragment* QTextDocumentFragment_fromHtml(struct miqt_string html);
QTextDocumentFragment* QTextDocumentFragment_fromHtml2(struct miqt_string html, QTextDocument* resourceProvider);
struct miqt_string QTextDocumentFragment_toHtmlWithEncoding(const QTextDocumentFragment* self, struct miqt_string encoding);
void QTextDocumentFragment_delete(QTextDocumentFragment* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
