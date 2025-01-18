#pragma once
#ifndef MIQT_QT_GEN_QFONTINFO_H
#define MIQT_QT_GEN_QFONTINFO_H

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
void QFontInfo_OperatorAssign(QFontInfo* self, QFontInfo* param1);
void QFontInfo_Swap(QFontInfo* self, QFontInfo* other);
struct miqt_string QFontInfo_Family(const QFontInfo* self);
struct miqt_string QFontInfo_StyleName(const QFontInfo* self);
int QFontInfo_PixelSize(const QFontInfo* self);
int QFontInfo_PointSize(const QFontInfo* self);
double QFontInfo_PointSizeF(const QFontInfo* self);
bool QFontInfo_Italic(const QFontInfo* self);
int QFontInfo_Style(const QFontInfo* self);
int QFontInfo_Weight(const QFontInfo* self);
bool QFontInfo_Bold(const QFontInfo* self);
bool QFontInfo_Underline(const QFontInfo* self);
bool QFontInfo_Overline(const QFontInfo* self);
bool QFontInfo_StrikeOut(const QFontInfo* self);
bool QFontInfo_FixedPitch(const QFontInfo* self);
int QFontInfo_StyleHint(const QFontInfo* self);
bool QFontInfo_RawMode(const QFontInfo* self);
bool QFontInfo_ExactMatch(const QFontInfo* self);
void QFontInfo_Delete(QFontInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
