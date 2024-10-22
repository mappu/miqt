#ifndef GEN_QTEXTDOCUMENTFRAGMENT_H
#define GEN_QTEXTDOCUMENTFRAGMENT_H

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
QTextDocumentFragment* QTextDocumentFragment_new3(QTextCursor* rangeVal);
QTextDocumentFragment* QTextDocumentFragment_new4(QTextDocumentFragment* rhs);
void QTextDocumentFragment_OperatorAssign(QTextDocumentFragment* self, QTextDocumentFragment* rhs);
bool QTextDocumentFragment_IsEmpty(const QTextDocumentFragment* self);
struct miqt_string QTextDocumentFragment_ToPlainText(const QTextDocumentFragment* self);
struct miqt_string QTextDocumentFragment_ToRawText(const QTextDocumentFragment* self);
struct miqt_string QTextDocumentFragment_ToHtml(const QTextDocumentFragment* self);
struct miqt_string QTextDocumentFragment_ToMarkdown(const QTextDocumentFragment* self);
QTextDocumentFragment* QTextDocumentFragment_FromPlainText(struct miqt_string plainText);
QTextDocumentFragment* QTextDocumentFragment_FromHtml(struct miqt_string html);
QTextDocumentFragment* QTextDocumentFragment_FromMarkdown(struct miqt_string markdown);
struct miqt_string QTextDocumentFragment_ToMarkdown1(const QTextDocumentFragment* self, int features);
QTextDocumentFragment* QTextDocumentFragment_FromHtml2(struct miqt_string html, QTextDocument* resourceProvider);
QTextDocumentFragment* QTextDocumentFragment_FromMarkdown2(struct miqt_string markdown, int features);
void QTextDocumentFragment_Delete(QTextDocumentFragment* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
