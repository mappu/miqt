#pragma once
#ifndef MIQT_QT6_GEN_QFONTINFO_H
#define MIQT_QT6_GEN_QFONTINFO_H

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
class QFontInfo;
#else
typedef struct QFont QFont;
typedef struct QFontInfo QFontInfo;
#endif

QFontInfo* QFontInfo_new(QFont* param1);
QFontInfo* QFontInfo_new2(QFontInfo* param1);
void QFontInfo_operatorAssign(QFontInfo* self, QFontInfo* param1);
void QFontInfo_swap(QFontInfo* self, QFontInfo* other);
struct miqt_string QFontInfo_family(const QFontInfo* self);
struct miqt_string QFontInfo_styleName(const QFontInfo* self);
int QFontInfo_pixelSize(const QFontInfo* self);
int QFontInfo_pointSize(const QFontInfo* self);
double QFontInfo_pointSizeF(const QFontInfo* self);
bool QFontInfo_italic(const QFontInfo* self);
int QFontInfo_style(const QFontInfo* self);
int QFontInfo_weight(const QFontInfo* self);
bool QFontInfo_bold(const QFontInfo* self);
bool QFontInfo_underline(const QFontInfo* self);
bool QFontInfo_overline(const QFontInfo* self);
bool QFontInfo_strikeOut(const QFontInfo* self);
bool QFontInfo_fixedPitch(const QFontInfo* self);
int QFontInfo_styleHint(const QFontInfo* self);
int QFontInfo_legacyWeight(const QFontInfo* self);
bool QFontInfo_exactMatch(const QFontInfo* self);
void QFontInfo_delete(QFontInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
