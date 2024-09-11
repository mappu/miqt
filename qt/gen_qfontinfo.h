#ifndef GEN_QFONTINFO_H
#define GEN_QFONTINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
void QFontInfo_Family(const QFontInfo* self, char** _out, int* _out_Strlen);
void QFontInfo_StyleName(const QFontInfo* self, char** _out, int* _out_Strlen);
int QFontInfo_PixelSize(const QFontInfo* self);
int QFontInfo_PointSize(const QFontInfo* self);
double QFontInfo_PointSizeF(const QFontInfo* self);
bool QFontInfo_Italic(const QFontInfo* self);
uintptr_t QFontInfo_Style(const QFontInfo* self);
int QFontInfo_Weight(const QFontInfo* self);
bool QFontInfo_Bold(const QFontInfo* self);
bool QFontInfo_Underline(const QFontInfo* self);
bool QFontInfo_Overline(const QFontInfo* self);
bool QFontInfo_StrikeOut(const QFontInfo* self);
bool QFontInfo_FixedPitch(const QFontInfo* self);
uintptr_t QFontInfo_StyleHint(const QFontInfo* self);
bool QFontInfo_RawMode(const QFontInfo* self);
bool QFontInfo_ExactMatch(const QFontInfo* self);
void QFontInfo_Delete(QFontInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
