#ifndef GEN_QFONTMETRICS_H
#define GEN_QFONTMETRICS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChar;
class QFont;
class QFontMetrics;
class QFontMetricsF;
class QPaintDevice;
class QRect;
class QRectF;
class QSize;
class QSizeF;
#else
typedef struct QChar QChar;
typedef struct QFont QFont;
typedef struct QFontMetrics QFontMetrics;
typedef struct QFontMetricsF QFontMetricsF;
typedef struct QPaintDevice QPaintDevice;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
#endif

QFontMetrics* QFontMetrics_new(QFont* param1);
QFontMetrics* QFontMetrics_new2(QFont* font, QPaintDevice* pd);
QFontMetrics* QFontMetrics_new3(QFontMetrics* param1);
void QFontMetrics_OperatorAssign(QFontMetrics* self, QFontMetrics* param1);
void QFontMetrics_Swap(QFontMetrics* self, QFontMetrics* other);
int QFontMetrics_Ascent(QFontMetrics* self);
int QFontMetrics_CapHeight(QFontMetrics* self);
int QFontMetrics_Descent(QFontMetrics* self);
int QFontMetrics_Height(QFontMetrics* self);
int QFontMetrics_Leading(QFontMetrics* self);
int QFontMetrics_LineSpacing(QFontMetrics* self);
int QFontMetrics_MinLeftBearing(QFontMetrics* self);
int QFontMetrics_MinRightBearing(QFontMetrics* self);
int QFontMetrics_MaxWidth(QFontMetrics* self);
int QFontMetrics_XHeight(QFontMetrics* self);
int QFontMetrics_AverageCharWidth(QFontMetrics* self);
bool QFontMetrics_InFont(QFontMetrics* self, QChar* param1);
bool QFontMetrics_InFontUcs4(QFontMetrics* self, unsigned int ucs4);
int QFontMetrics_LeftBearing(QFontMetrics* self, QChar* param1);
int QFontMetrics_RightBearing(QFontMetrics* self, QChar* param1);
int QFontMetrics_Width(QFontMetrics* self, const char* param1, size_t param1_Strlen);
int QFontMetrics_Width2(QFontMetrics* self, const char* param1, size_t param1_Strlen, int lenVal, int flags);
int QFontMetrics_WidthWithQChar(QFontMetrics* self, QChar* param1);
int QFontMetrics_HorizontalAdvance(QFontMetrics* self, const char* param1, size_t param1_Strlen);
int QFontMetrics_HorizontalAdvanceWithQChar(QFontMetrics* self, QChar* param1);
int QFontMetrics_CharWidth(QFontMetrics* self, const char* str, size_t str_Strlen, int pos);
QRect* QFontMetrics_BoundingRect(QFontMetrics* self, QChar* param1);
QRect* QFontMetrics_BoundingRectWithText(QFontMetrics* self, const char* text, size_t text_Strlen);
QRect* QFontMetrics_BoundingRect2(QFontMetrics* self, QRect* r, int flags, const char* text, size_t text_Strlen);
QRect* QFontMetrics_BoundingRect3(QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen);
QSize* QFontMetrics_Size(QFontMetrics* self, int flags, const char* str, size_t str_Strlen);
QRect* QFontMetrics_TightBoundingRect(QFontMetrics* self, const char* text, size_t text_Strlen);
void QFontMetrics_ElidedText(QFontMetrics* self, const char* text, size_t text_Strlen, uintptr_t mode, int width, char** _out, int* _out_Strlen);
int QFontMetrics_UnderlinePos(QFontMetrics* self);
int QFontMetrics_OverlinePos(QFontMetrics* self);
int QFontMetrics_StrikeOutPos(QFontMetrics* self);
int QFontMetrics_LineWidth(QFontMetrics* self);
double QFontMetrics_FontDpi(QFontMetrics* self);
bool QFontMetrics_OperatorEqual(QFontMetrics* self, QFontMetrics* other);
bool QFontMetrics_OperatorNotEqual(QFontMetrics* self, QFontMetrics* other);
int QFontMetrics_Width22(QFontMetrics* self, const char* param1, size_t param1_Strlen, int lenVal);
int QFontMetrics_HorizontalAdvance2(QFontMetrics* self, const char* param1, size_t param1_Strlen, int lenVal);
QRect* QFontMetrics_BoundingRect4(QFontMetrics* self, QRect* r, int flags, const char* text, size_t text_Strlen, int tabstops);
QRect* QFontMetrics_BoundingRect5(QFontMetrics* self, QRect* r, int flags, const char* text, size_t text_Strlen, int tabstops, int* tabarray);
QRect* QFontMetrics_BoundingRect7(QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen, int tabstops);
QRect* QFontMetrics_BoundingRect8(QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen, int tabstops, int* tabarray);
QSize* QFontMetrics_Size3(QFontMetrics* self, int flags, const char* str, size_t str_Strlen, int tabstops);
QSize* QFontMetrics_Size4(QFontMetrics* self, int flags, const char* str, size_t str_Strlen, int tabstops, int* tabarray);
void QFontMetrics_ElidedText4(QFontMetrics* self, const char* text, size_t text_Strlen, uintptr_t mode, int width, int flags, char** _out, int* _out_Strlen);
void QFontMetrics_Delete(QFontMetrics* self);

QFontMetricsF* QFontMetricsF_new(QFont* font);
QFontMetricsF* QFontMetricsF_new2(QFont* font, QPaintDevice* pd);
QFontMetricsF* QFontMetricsF_new3(QFontMetrics* param1);
QFontMetricsF* QFontMetricsF_new4(QFontMetricsF* param1);
void QFontMetricsF_OperatorAssign(QFontMetricsF* self, QFontMetricsF* param1);
void QFontMetricsF_OperatorAssignWithQFontMetrics(QFontMetricsF* self, QFontMetrics* param1);
void QFontMetricsF_Swap(QFontMetricsF* self, QFontMetricsF* other);
double QFontMetricsF_Ascent(QFontMetricsF* self);
double QFontMetricsF_CapHeight(QFontMetricsF* self);
double QFontMetricsF_Descent(QFontMetricsF* self);
double QFontMetricsF_Height(QFontMetricsF* self);
double QFontMetricsF_Leading(QFontMetricsF* self);
double QFontMetricsF_LineSpacing(QFontMetricsF* self);
double QFontMetricsF_MinLeftBearing(QFontMetricsF* self);
double QFontMetricsF_MinRightBearing(QFontMetricsF* self);
double QFontMetricsF_MaxWidth(QFontMetricsF* self);
double QFontMetricsF_XHeight(QFontMetricsF* self);
double QFontMetricsF_AverageCharWidth(QFontMetricsF* self);
bool QFontMetricsF_InFont(QFontMetricsF* self, QChar* param1);
bool QFontMetricsF_InFontUcs4(QFontMetricsF* self, unsigned int ucs4);
double QFontMetricsF_LeftBearing(QFontMetricsF* self, QChar* param1);
double QFontMetricsF_RightBearing(QFontMetricsF* self, QChar* param1);
double QFontMetricsF_Width(QFontMetricsF* self, const char* stringVal, size_t stringVal_Strlen);
double QFontMetricsF_WidthWithQChar(QFontMetricsF* self, QChar* param1);
double QFontMetricsF_HorizontalAdvance(QFontMetricsF* self, const char* stringVal, size_t stringVal_Strlen);
double QFontMetricsF_HorizontalAdvanceWithQChar(QFontMetricsF* self, QChar* param1);
QRectF* QFontMetricsF_BoundingRect(QFontMetricsF* self, const char* stringVal, size_t stringVal_Strlen);
QRectF* QFontMetricsF_BoundingRectWithQChar(QFontMetricsF* self, QChar* param1);
QRectF* QFontMetricsF_BoundingRect2(QFontMetricsF* self, QRectF* r, int flags, const char* stringVal, size_t stringVal_Strlen);
QSizeF* QFontMetricsF_Size(QFontMetricsF* self, int flags, const char* str, size_t str_Strlen);
QRectF* QFontMetricsF_TightBoundingRect(QFontMetricsF* self, const char* text, size_t text_Strlen);
void QFontMetricsF_ElidedText(QFontMetricsF* self, const char* text, size_t text_Strlen, uintptr_t mode, double width, char** _out, int* _out_Strlen);
double QFontMetricsF_UnderlinePos(QFontMetricsF* self);
double QFontMetricsF_OverlinePos(QFontMetricsF* self);
double QFontMetricsF_StrikeOutPos(QFontMetricsF* self);
double QFontMetricsF_LineWidth(QFontMetricsF* self);
double QFontMetricsF_FontDpi(QFontMetricsF* self);
bool QFontMetricsF_OperatorEqual(QFontMetricsF* self, QFontMetricsF* other);
bool QFontMetricsF_OperatorNotEqual(QFontMetricsF* self, QFontMetricsF* other);
double QFontMetricsF_HorizontalAdvance2(QFontMetricsF* self, const char* stringVal, size_t stringVal_Strlen, int length);
QRectF* QFontMetricsF_BoundingRect4(QFontMetricsF* self, QRectF* r, int flags, const char* stringVal, size_t stringVal_Strlen, int tabstops);
QRectF* QFontMetricsF_BoundingRect5(QFontMetricsF* self, QRectF* r, int flags, const char* stringVal, size_t stringVal_Strlen, int tabstops, int* tabarray);
QSizeF* QFontMetricsF_Size3(QFontMetricsF* self, int flags, const char* str, size_t str_Strlen, int tabstops);
QSizeF* QFontMetricsF_Size4(QFontMetricsF* self, int flags, const char* str, size_t str_Strlen, int tabstops, int* tabarray);
void QFontMetricsF_ElidedText4(QFontMetricsF* self, const char* text, size_t text_Strlen, uintptr_t mode, double width, int flags, char** _out, int* _out_Strlen);
void QFontMetricsF_Delete(QFontMetricsF* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
