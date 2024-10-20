#ifndef GEN_QSYNTAXHIGHLIGHTER_H
#define GEN_QSYNTAXHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

QMetaObject* QSyntaxHighlighter_MetaObject(const QSyntaxHighlighter* self);
void* QSyntaxHighlighter_Metacast(QSyntaxHighlighter* self, const char* param1);
struct miqt_string QSyntaxHighlighter_Tr(const char* s);
void QSyntaxHighlighter_SetDocument(QSyntaxHighlighter* self, QTextDocument* doc);
QTextDocument* QSyntaxHighlighter_Document(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_Rehighlight(QSyntaxHighlighter* self);
void QSyntaxHighlighter_RehighlightBlock(QSyntaxHighlighter* self, QTextBlock* block);
struct miqt_string QSyntaxHighlighter_Tr2(const char* s, const char* c);
struct miqt_string QSyntaxHighlighter_Tr3(const char* s, const char* c, int n);
void QSyntaxHighlighter_Delete(QSyntaxHighlighter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
