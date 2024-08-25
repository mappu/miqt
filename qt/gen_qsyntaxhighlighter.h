#ifndef GEN_QSYNTAXHIGHLIGHTER_H
#define GEN_QSYNTAXHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QSyntaxHighlighter;
class QTextBlock;
class QTextDocument;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QSyntaxHighlighter QSyntaxHighlighter;
typedef struct QTextBlock QTextBlock;
typedef struct QTextDocument QTextDocument;
#endif

QMetaObject* QSyntaxHighlighter_MetaObject(QSyntaxHighlighter* self);
void QSyntaxHighlighter_Tr(char* s, char** _out, int* _out_Strlen);
void QSyntaxHighlighter_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QSyntaxHighlighter_SetDocument(QSyntaxHighlighter* self, QTextDocument* doc);
QTextDocument* QSyntaxHighlighter_Document(QSyntaxHighlighter* self);
void QSyntaxHighlighter_Rehighlight(QSyntaxHighlighter* self);
void QSyntaxHighlighter_RehighlightBlock(QSyntaxHighlighter* self, QTextBlock* block);
void QSyntaxHighlighter_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QSyntaxHighlighter_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSyntaxHighlighter_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QSyntaxHighlighter_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSyntaxHighlighter_Delete(QSyntaxHighlighter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
