#ifndef GEN_QTEXTLAYOUT_H
#define GEN_QTEXTLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFont;
class QGlyphRun;
class QPaintDevice;
class QPainter;
class QPointF;
class QRawFont;
class QRectF;
class QTextBlock;
class QTextFormat;
class QTextInlineObject;
class QTextLayout;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextLayout__FormatRange)
typedef QTextLayout::FormatRange QTextLayout__FormatRange;
#else
class QTextLayout__FormatRange;
#endif
class QTextLine;
class QTextOption;
#else
typedef struct QFont QFont;
typedef struct QGlyphRun QGlyphRun;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPainter QPainter;
typedef struct QPointF QPointF;
typedef struct QRawFont QRawFont;
typedef struct QRectF QRectF;
typedef struct QTextBlock QTextBlock;
typedef struct QTextFormat QTextFormat;
typedef struct QTextInlineObject QTextInlineObject;
typedef struct QTextLayout QTextLayout;
typedef struct QTextLayout__FormatRange QTextLayout__FormatRange;
typedef struct QTextLine QTextLine;
typedef struct QTextOption QTextOption;
#endif

QTextInlineObject* QTextInlineObject_new();
bool QTextInlineObject_IsValid(QTextInlineObject* self);
QRectF* QTextInlineObject_Rect(QTextInlineObject* self);
double QTextInlineObject_Width(QTextInlineObject* self);
double QTextInlineObject_Ascent(QTextInlineObject* self);
double QTextInlineObject_Descent(QTextInlineObject* self);
double QTextInlineObject_Height(QTextInlineObject* self);
uintptr_t QTextInlineObject_TextDirection(QTextInlineObject* self);
void QTextInlineObject_SetWidth(QTextInlineObject* self, double w);
void QTextInlineObject_SetAscent(QTextInlineObject* self, double a);
void QTextInlineObject_SetDescent(QTextInlineObject* self, double d);
int QTextInlineObject_TextPosition(QTextInlineObject* self);
int QTextInlineObject_FormatIndex(QTextInlineObject* self);
QTextFormat* QTextInlineObject_Format(QTextInlineObject* self);
void QTextInlineObject_Delete(QTextInlineObject* self);

QTextLayout* QTextLayout_new();
QTextLayout* QTextLayout_new2(const char* text, size_t text_Strlen);
QTextLayout* QTextLayout_new3(const char* text, size_t text_Strlen, QFont* font);
QTextLayout* QTextLayout_new4(QTextBlock* b);
QTextLayout* QTextLayout_new5(const char* text, size_t text_Strlen, QFont* font, QPaintDevice* paintdevice);
void QTextLayout_SetFont(QTextLayout* self, QFont* f);
QFont* QTextLayout_Font(QTextLayout* self);
void QTextLayout_SetRawFont(QTextLayout* self, QRawFont* rawFont);
void QTextLayout_SetText(QTextLayout* self, const char* stringVal, size_t stringVal_Strlen);
void QTextLayout_Text(QTextLayout* self, char** _out, int* _out_Strlen);
void QTextLayout_SetTextOption(QTextLayout* self, QTextOption* option);
QTextOption* QTextLayout_TextOption(QTextLayout* self);
void QTextLayout_SetPreeditArea(QTextLayout* self, int position, const char* text, size_t text_Strlen);
int QTextLayout_PreeditAreaPosition(QTextLayout* self);
void QTextLayout_PreeditAreaText(QTextLayout* self, char** _out, int* _out_Strlen);
void QTextLayout_SetAdditionalFormats(QTextLayout* self, QTextLayout__FormatRange** overrides, size_t overrides_len);
void QTextLayout_AdditionalFormats(QTextLayout* self, QTextLayout__FormatRange*** _out, size_t* _out_len);
void QTextLayout_ClearAdditionalFormats(QTextLayout* self);
void QTextLayout_SetFormats(QTextLayout* self, QTextLayout__FormatRange** overrides, size_t overrides_len);
void QTextLayout_Formats(QTextLayout* self, QTextLayout__FormatRange*** _out, size_t* _out_len);
void QTextLayout_ClearFormats(QTextLayout* self);
void QTextLayout_SetCacheEnabled(QTextLayout* self, bool enable);
bool QTextLayout_CacheEnabled(QTextLayout* self);
void QTextLayout_SetCursorMoveStyle(QTextLayout* self, uintptr_t style);
uintptr_t QTextLayout_CursorMoveStyle(QTextLayout* self);
void QTextLayout_BeginLayout(QTextLayout* self);
void QTextLayout_EndLayout(QTextLayout* self);
void QTextLayout_ClearLayout(QTextLayout* self);
QTextLine* QTextLayout_CreateLine(QTextLayout* self);
int QTextLayout_LineCount(QTextLayout* self);
QTextLine* QTextLayout_LineAt(QTextLayout* self, int i);
QTextLine* QTextLayout_LineForTextPosition(QTextLayout* self, int pos);
bool QTextLayout_IsValidCursorPosition(QTextLayout* self, int pos);
int QTextLayout_NextCursorPosition(QTextLayout* self, int oldPos);
int QTextLayout_PreviousCursorPosition(QTextLayout* self, int oldPos);
int QTextLayout_LeftCursorPosition(QTextLayout* self, int oldPos);
int QTextLayout_RightCursorPosition(QTextLayout* self, int oldPos);
void QTextLayout_Draw(QTextLayout* self, QPainter* p, QPointF* pos);
void QTextLayout_DrawCursor(QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition);
void QTextLayout_DrawCursor2(QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition, int width);
QPointF* QTextLayout_Position(QTextLayout* self);
void QTextLayout_SetPosition(QTextLayout* self, QPointF* p);
QRectF* QTextLayout_BoundingRect(QTextLayout* self);
double QTextLayout_MinimumWidth(QTextLayout* self);
double QTextLayout_MaximumWidth(QTextLayout* self);
void QTextLayout_GlyphRuns(QTextLayout* self, QGlyphRun*** _out, size_t* _out_len);
void QTextLayout_SetFlags(QTextLayout* self, int flags);
int QTextLayout_NextCursorPosition2(QTextLayout* self, int oldPos, uintptr_t mode);
int QTextLayout_PreviousCursorPosition2(QTextLayout* self, int oldPos, uintptr_t mode);
void QTextLayout_Draw3(QTextLayout* self, QPainter* p, QPointF* pos, QTextLayout__FormatRange** selections, size_t selections_len);
void QTextLayout_Draw4(QTextLayout* self, QPainter* p, QPointF* pos, QTextLayout__FormatRange** selections, size_t selections_len, QRectF* clip);
void QTextLayout_GlyphRuns1(QTextLayout* self, int from, QGlyphRun*** _out, size_t* _out_len);
void QTextLayout_GlyphRuns2(QTextLayout* self, int from, int length, QGlyphRun*** _out, size_t* _out_len);
void QTextLayout_Delete(QTextLayout* self);

QTextLine* QTextLine_new();
bool QTextLine_IsValid(QTextLine* self);
QRectF* QTextLine_Rect(QTextLine* self);
double QTextLine_X(QTextLine* self);
double QTextLine_Y(QTextLine* self);
double QTextLine_Width(QTextLine* self);
double QTextLine_Ascent(QTextLine* self);
double QTextLine_Descent(QTextLine* self);
double QTextLine_Height(QTextLine* self);
double QTextLine_Leading(QTextLine* self);
void QTextLine_SetLeadingIncluded(QTextLine* self, bool included);
bool QTextLine_LeadingIncluded(QTextLine* self);
double QTextLine_NaturalTextWidth(QTextLine* self);
double QTextLine_HorizontalAdvance(QTextLine* self);
QRectF* QTextLine_NaturalTextRect(QTextLine* self);
double QTextLine_CursorToX(QTextLine* self, int* cursorPos);
double QTextLine_CursorToXWithCursorPos(QTextLine* self, int cursorPos);
int QTextLine_XToCursor(QTextLine* self, double x);
void QTextLine_SetLineWidth(QTextLine* self, double width);
void QTextLine_SetNumColumns(QTextLine* self, int columns);
void QTextLine_SetNumColumns2(QTextLine* self, int columns, double alignmentWidth);
void QTextLine_SetPosition(QTextLine* self, QPointF* pos);
QPointF* QTextLine_Position(QTextLine* self);
int QTextLine_TextStart(QTextLine* self);
int QTextLine_TextLength(QTextLine* self);
int QTextLine_LineNumber(QTextLine* self);
void QTextLine_Draw(QTextLine* self, QPainter* p, QPointF* point);
void QTextLine_GlyphRuns(QTextLine* self, QGlyphRun*** _out, size_t* _out_len);
double QTextLine_CursorToX2(QTextLine* self, int* cursorPos, uintptr_t edge);
double QTextLine_CursorToX22(QTextLine* self, int cursorPos, uintptr_t edge);
int QTextLine_XToCursor2(QTextLine* self, double x, uintptr_t param2);
void QTextLine_Draw3(QTextLine* self, QPainter* p, QPointF* point, QTextLayout__FormatRange* selection);
void QTextLine_GlyphRuns1(QTextLine* self, int from, QGlyphRun*** _out, size_t* _out_len);
void QTextLine_GlyphRuns2(QTextLine* self, int from, int length, QGlyphRun*** _out, size_t* _out_len);
void QTextLine_Delete(QTextLine* self);

void QTextLayout__FormatRange_Delete(QTextLayout__FormatRange* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
