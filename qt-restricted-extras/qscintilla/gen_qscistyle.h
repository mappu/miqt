#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCISTYLE_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCISTYLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QFont;
class QsciScintillaBase;
class QsciStyle;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QsciScintillaBase QsciScintillaBase;
typedef struct QsciStyle QsciStyle;
#endif

QsciStyle* QsciStyle_new();
QsciStyle* QsciStyle_new2(int style, struct miqt_string description, QColor* color, QColor* paper, QFont* font);
QsciStyle* QsciStyle_new3(QsciStyle* param1);
QsciStyle* QsciStyle_new4(int style);
QsciStyle* QsciStyle_new5(int style, struct miqt_string description, QColor* color, QColor* paper, QFont* font, bool eolFill);
void QsciStyle_apply(const QsciStyle* self, QsciScintillaBase* sci);
void QsciStyle_setStyle(QsciStyle* self, int style);
int QsciStyle_style(const QsciStyle* self);
void QsciStyle_setDescription(QsciStyle* self, struct miqt_string description);
struct miqt_string QsciStyle_description(const QsciStyle* self);
void QsciStyle_setColor(QsciStyle* self, QColor* color);
QColor* QsciStyle_color(const QsciStyle* self);
void QsciStyle_setPaper(QsciStyle* self, QColor* paper);
QColor* QsciStyle_paper(const QsciStyle* self);
void QsciStyle_setFont(QsciStyle* self, QFont* font);
QFont* QsciStyle_font(const QsciStyle* self);
void QsciStyle_setEolFill(QsciStyle* self, bool fill);
bool QsciStyle_eolFill(const QsciStyle* self);
void QsciStyle_setTextCase(QsciStyle* self, int text_case);
int QsciStyle_textCase(const QsciStyle* self);
void QsciStyle_setVisible(QsciStyle* self, bool visible);
bool QsciStyle_visible(const QsciStyle* self);
void QsciStyle_setChangeable(QsciStyle* self, bool changeable);
bool QsciStyle_changeable(const QsciStyle* self);
void QsciStyle_setHotspot(QsciStyle* self, bool hotspot);
bool QsciStyle_hotspot(const QsciStyle* self);
void QsciStyle_refresh(QsciStyle* self);
void QsciStyle_operatorAssign(QsciStyle* self, QsciStyle* param1);

void QsciStyle_delete(QsciStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
