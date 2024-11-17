#pragma once
#ifndef MIQT_QT_GEN_QSTATICTEXT_H
#define MIQT_QT_GEN_QSTATICTEXT_H

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
void QStaticText_OperatorAssign(QStaticText* self, QStaticText* param1);
void QStaticText_Swap(QStaticText* self, QStaticText* other);
void QStaticText_SetText(QStaticText* self, struct miqt_string text);
struct miqt_string QStaticText_Text(const QStaticText* self);
void QStaticText_SetTextFormat(QStaticText* self, int textFormat);
int QStaticText_TextFormat(const QStaticText* self);
void QStaticText_SetTextWidth(QStaticText* self, double textWidth);
double QStaticText_TextWidth(const QStaticText* self);
void QStaticText_SetTextOption(QStaticText* self, QTextOption* textOption);
QTextOption* QStaticText_TextOption(const QStaticText* self);
QSizeF* QStaticText_Size(const QStaticText* self);
void QStaticText_Prepare(QStaticText* self);
void QStaticText_SetPerformanceHint(QStaticText* self, int performanceHint);
int QStaticText_PerformanceHint(const QStaticText* self);
bool QStaticText_OperatorEqual(const QStaticText* self, QStaticText* param1);
bool QStaticText_OperatorNotEqual(const QStaticText* self, QStaticText* param1);
void QStaticText_Prepare1(QStaticText* self, QTransform* matrix);
void QStaticText_Prepare2(QStaticText* self, QTransform* matrix, QFont* font);
void QStaticText_Delete(QStaticText* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
