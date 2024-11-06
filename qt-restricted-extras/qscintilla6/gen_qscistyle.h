#ifndef GEN_QSCISTYLE_H
#define GEN_QSCISTYLE_H

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
void QsciStyle_Apply(const QsciStyle* self, QsciScintillaBase* sci);
void QsciStyle_SetStyle(QsciStyle* self, int style);
int QsciStyle_Style(const QsciStyle* self);
void QsciStyle_SetDescription(QsciStyle* self, struct miqt_string description);
struct miqt_string QsciStyle_Description(const QsciStyle* self);
void QsciStyle_SetColor(QsciStyle* self, QColor* color);
QColor* QsciStyle_Color(const QsciStyle* self);
void QsciStyle_SetPaper(QsciStyle* self, QColor* paper);
QColor* QsciStyle_Paper(const QsciStyle* self);
void QsciStyle_SetFont(QsciStyle* self, QFont* font);
QFont* QsciStyle_Font(const QsciStyle* self);
void QsciStyle_SetEolFill(QsciStyle* self, bool fill);
bool QsciStyle_EolFill(const QsciStyle* self);
void QsciStyle_SetTextCase(QsciStyle* self, int text_case);
int QsciStyle_TextCase(const QsciStyle* self);
void QsciStyle_SetVisible(QsciStyle* self, bool visible);
bool QsciStyle_Visible(const QsciStyle* self);
void QsciStyle_SetChangeable(QsciStyle* self, bool changeable);
bool QsciStyle_Changeable(const QsciStyle* self);
void QsciStyle_SetHotspot(QsciStyle* self, bool hotspot);
bool QsciStyle_Hotspot(const QsciStyle* self);
void QsciStyle_Refresh(QsciStyle* self);
void QsciStyle_Delete(QsciStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
