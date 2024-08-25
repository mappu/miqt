#ifndef GEN_QTEXTDOCUMENTFRAGMENT_H
#define GEN_QTEXTDOCUMENTFRAGMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QTextCursor;
class QTextDocument;
class QTextDocumentFragment;
#else
typedef struct QByteArray QByteArray;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextDocumentFragment QTextDocumentFragment;
#endif

QTextDocumentFragment* QTextDocumentFragment_new();
QTextDocumentFragment* QTextDocumentFragment_new2(QTextDocument* document);
QTextDocumentFragment* QTextDocumentFragment_new3(QTextCursor* rangeVal);
QTextDocumentFragment* QTextDocumentFragment_new4(QTextDocumentFragment* rhs);
void QTextDocumentFragment_OperatorAssign(QTextDocumentFragment* self, QTextDocumentFragment* rhs);
bool QTextDocumentFragment_IsEmpty(QTextDocumentFragment* self);
void QTextDocumentFragment_ToPlainText(QTextDocumentFragment* self, char** _out, int* _out_Strlen);
void QTextDocumentFragment_ToHtml(QTextDocumentFragment* self, char** _out, int* _out_Strlen);
QTextDocumentFragment* QTextDocumentFragment_FromPlainText(const char* plainText, size_t plainText_Strlen);
QTextDocumentFragment* QTextDocumentFragment_FromHtml(const char* html, size_t html_Strlen);
QTextDocumentFragment* QTextDocumentFragment_FromHtml2(const char* html, size_t html_Strlen, QTextDocument* resourceProvider);
void QTextDocumentFragment_ToHtml1(QTextDocumentFragment* self, QByteArray* encoding, char** _out, int* _out_Strlen);
void QTextDocumentFragment_Delete(QTextDocumentFragment* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
