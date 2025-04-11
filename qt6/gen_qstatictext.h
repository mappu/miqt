#pragma once
#ifndef MIQT_QT6_GEN_QSTATICTEXT_H
#define MIQT_QT6_GEN_QSTATICTEXT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFont;
class QSizeF;
class QStaticText;
class QTextOption;
class QTransform;
#else
typedef struct QFont QFont;
typedef struct QSizeF QSizeF;
typedef struct QStaticText QStaticText;
typedef struct QTextOption QTextOption;
typedef struct QTransform QTransform;
#endif

QStaticText* QStaticText_new();
QStaticText* QStaticText_new2(struct miqt_string text);
QStaticText* QStaticText_new3(QStaticText* other);
void QStaticText_operatorAssign(QStaticText* self, QStaticText* param1);
void QStaticText_swap(QStaticText* self, QStaticText* other);
void QStaticText_setText(QStaticText* self, struct miqt_string text);
struct miqt_string QStaticText_text(const QStaticText* self);
void QStaticText_setTextFormat(QStaticText* self, int textFormat);
int QStaticText_textFormat(const QStaticText* self);
void QStaticText_setTextWidth(QStaticText* self, double textWidth);
double QStaticText_textWidth(const QStaticText* self);
void QStaticText_setTextOption(QStaticText* self, QTextOption* textOption);
QTextOption* QStaticText_textOption(const QStaticText* self);
QSizeF* QStaticText_size(const QStaticText* self);
void QStaticText_prepare(QStaticText* self);
void QStaticText_setPerformanceHint(QStaticText* self, int performanceHint);
int QStaticText_performanceHint(const QStaticText* self);
bool QStaticText_operatorEqual(const QStaticText* self, QStaticText* param1);
bool QStaticText_operatorNotEqual(const QStaticText* self, QStaticText* param1);
void QStaticText_prepareWithMatrix(QStaticText* self, QTransform* matrix);
void QStaticText_prepare2(QStaticText* self, QTransform* matrix, QFont* font);
void QStaticText_delete(QStaticText* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
