#ifndef GEN_QSCISTYLEDTEXT_H
#define GEN_QSCISTYLEDTEXT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QsciScintillaBase;
class QsciStyle;
class QsciStyledText;
#else
typedef struct QsciScintillaBase QsciScintillaBase;
typedef struct QsciStyle QsciStyle;
typedef struct QsciStyledText QsciStyledText;
#endif

QsciStyledText* QsciStyledText_new(struct miqt_string text, int style);
QsciStyledText* QsciStyledText_new2(struct miqt_string text, QsciStyle* style);
QsciStyledText* QsciStyledText_new3(QsciStyledText* param1);
void QsciStyledText_Apply(const QsciStyledText* self, QsciScintillaBase* sci);
struct miqt_string QsciStyledText_Text(const QsciStyledText* self);
int QsciStyledText_Style(const QsciStyledText* self);
void QsciStyledText_Delete(QsciStyledText* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
