#ifndef GEN_QSCIABSTRACTAPIS_H
#define GEN_QSCIABSTRACTAPIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QsciAbstractAPIs;
class QsciLexer;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QsciAbstractAPIs QsciAbstractAPIs;
typedef struct QsciLexer QsciLexer;
#endif

QMetaObject* QsciAbstractAPIs_MetaObject(const QsciAbstractAPIs* self);
void* QsciAbstractAPIs_Metacast(QsciAbstractAPIs* self, const char* param1);
struct miqt_string QsciAbstractAPIs_Tr(const char* s);
QsciLexer* QsciAbstractAPIs_Lexer(const QsciAbstractAPIs* self);
void QsciAbstractAPIs_UpdateAutoCompletionList(QsciAbstractAPIs* self, struct miqt_array /* of struct miqt_string */ context, struct miqt_array /* of struct miqt_string */ list);
void QsciAbstractAPIs_AutoCompletionSelected(QsciAbstractAPIs* self, struct miqt_string selection);
struct miqt_array QsciAbstractAPIs_CallTips(QsciAbstractAPIs* self, struct miqt_array /* of struct miqt_string */ context, int commas, int style, struct miqt_array /* of int */ shifts);
struct miqt_string QsciAbstractAPIs_Tr2(const char* s, const char* c);
struct miqt_string QsciAbstractAPIs_Tr3(const char* s, const char* c, int n);
void QsciAbstractAPIs_Delete(QsciAbstractAPIs* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
