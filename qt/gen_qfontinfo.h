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
void QFontInfo_Family(QFontInfo* self, char** _out, int* _out_Strlen);
void QFontInfo_StyleName(QFontInfo* self, char** _out, int* _out_Strlen);
int QFontInfo_PixelSize(QFontInfo* self);
int QFontInfo_PointSize(QFontInfo* self);
double QFontInfo_PointSizeF(QFontInfo* self);
bool QFontInfo_Italic(QFontInfo* self);
int QFontInfo_Weight(QFontInfo* self);
bool QFontInfo_Bold(QFontInfo* self);
bool QFontInfo_Underline(QFontInfo* self);
bool QFontInfo_Overline(QFontInfo* self);
bool QFontInfo_StrikeOut(QFontInfo* self);
bool QFontInfo_FixedPitch(QFontInfo* self);
bool QFontInfo_RawMode(QFontInfo* self);
bool QFontInfo_ExactMatch(QFontInfo* self);
void QFontInfo_Delete(QFontInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
