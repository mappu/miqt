#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCISTYLEDTEXT_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCISTYLEDTEXT_H

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
void QsciStyledText_apply(const QsciStyledText* self, QsciScintillaBase* sci);
struct miqt_string QsciStyledText_text(const QsciStyledText* self);
int QsciStyledText_style(const QsciStyledText* self);

void QsciStyledText_delete(QsciStyledText* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
