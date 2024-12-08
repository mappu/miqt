#pragma once
#ifndef MIQT_QT_GEN_QTEXTLAYOUT_H
#define MIQT_QT_GEN_QTEXTLAYOUT_H

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
bool QTextInlineObject_IsValid(const QTextInlineObject* self);
QRectF* QTextInlineObject_Rect(const QTextInlineObject* self);
double QTextInlineObject_Width(const QTextInlineObject* self);
double QTextInlineObject_Ascent(const QTextInlineObject* self);
double QTextInlineObject_Descent(const QTextInlineObject* self);
double QTextInlineObject_Height(const QTextInlineObject* self);
int QTextInlineObject_TextDirection(const QTextInlineObject* self);
void QTextInlineObject_SetWidth(QTextInlineObject* self, double w);
void QTextInlineObject_SetAscent(QTextInlineObject* self, double a);
void QTextInlineObject_SetDescent(QTextInlineObject* self, double d);
int QTextInlineObject_TextPosition(const QTextInlineObject* self);
int QTextInlineObject_FormatIndex(const QTextInlineObject* self);
QTextFormat* QTextInlineObject_Format(const QTextInlineObject* self);
void QTextInlineObject_Delete(QTextInlineObject* self, bool isSubclass);

QTextLayout* QTextLayout_new();
QTextLayout* QTextLayout_new2(struct miqt_string text);
QTextLayout* QTextLayout_new3(struct miqt_string text, QFont* font);
QTextLayout* QTextLayout_new4(QTextBlock* b);
QTextLayout* QTextLayout_new5(struct miqt_string text, QFont* font, QPaintDevice* paintdevice);
void QTextLayout_SetFont(QTextLayout* self, QFont* f);
QFont* QTextLayout_Font(const QTextLayout* self);
void QTextLayout_SetRawFont(QTextLayout* self, QRawFont* rawFont);
void QTextLayout_SetText(QTextLayout* self, struct miqt_string stringVal);
struct miqt_string QTextLayout_Text(const QTextLayout* self);
void QTextLayout_SetTextOption(QTextLayout* self, QTextOption* option);
QTextOption* QTextLayout_TextOption(const QTextLayout* self);
void QTextLayout_SetPreeditArea(QTextLayout* self, int position, struct miqt_string text);
int QTextLayout_PreeditAreaPosition(const QTextLayout* self);
struct miqt_string QTextLayout_PreeditAreaText(const QTextLayout* self);
void QTextLayout_SetAdditionalFormats(QTextLayout* self, struct miqt_array /* of QTextLayout__FormatRange* */  overrides);
struct miqt_array /* of QTextLayout__FormatRange* */  QTextLayout_AdditionalFormats(const QTextLayout* self);
void QTextLayout_ClearAdditionalFormats(QTextLayout* self);
void QTextLayout_SetFormats(QTextLayout* self, struct miqt_array /* of QTextLayout__FormatRange* */  overrides);
struct miqt_array /* of QTextLayout__FormatRange* */  QTextLayout_Formats(const QTextLayout* self);
void QTextLayout_ClearFormats(QTextLayout* self);
void QTextLayout_SetCacheEnabled(QTextLayout* self, bool enable);
bool QTextLayout_CacheEnabled(const QTextLayout* self);
void QTextLayout_SetCursorMoveStyle(QTextLayout* self, int style);
int QTextLayout_CursorMoveStyle(const QTextLayout* self);
void QTextLayout_BeginLayout(QTextLayout* self);
void QTextLayout_EndLayout(QTextLayout* self);
void QTextLayout_ClearLayout(QTextLayout* self);
QTextLine* QTextLayout_CreateLine(QTextLayout* self);
int QTextLayout_LineCount(const QTextLayout* self);
QTextLine* QTextLayout_LineAt(const QTextLayout* self, int i);
QTextLine* QTextLayout_LineForTextPosition(const QTextLayout* self, int pos);
bool QTextLayout_IsValidCursorPosition(const QTextLayout* self, int pos);
int QTextLayout_NextCursorPosition(const QTextLayout* self, int oldPos);
int QTextLayout_PreviousCursorPosition(const QTextLayout* self, int oldPos);
int QTextLayout_LeftCursorPosition(const QTextLayout* self, int oldPos);
int QTextLayout_RightCursorPosition(const QTextLayout* self, int oldPos);
void QTextLayout_Draw(const QTextLayout* self, QPainter* p, QPointF* pos);
void QTextLayout_DrawCursor(const QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition);
void QTextLayout_DrawCursor2(const QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition, int width);
QPointF* QTextLayout_Position(const QTextLayout* self);
void QTextLayout_SetPosition(QTextLayout* self, QPointF* p);
QRectF* QTextLayout_BoundingRect(const QTextLayout* self);
double QTextLayout_MinimumWidth(const QTextLayout* self);
double QTextLayout_MaximumWidth(const QTextLayout* self);
struct miqt_array /* of QGlyphRun* */  QTextLayout_GlyphRuns(const QTextLayout* self);
void QTextLayout_SetFlags(QTextLayout* self, int flags);
int QTextLayout_NextCursorPosition2(const QTextLayout* self, int oldPos, int mode);
int QTextLayout_PreviousCursorPosition2(const QTextLayout* self, int oldPos, int mode);
void QTextLayout_Draw3(const QTextLayout* self, QPainter* p, QPointF* pos, struct miqt_array /* of QTextLayout__FormatRange* */  selections);
void QTextLayout_Draw4(const QTextLayout* self, QPainter* p, QPointF* pos, struct miqt_array /* of QTextLayout__FormatRange* */  selections, QRectF* clip);
struct miqt_array /* of QGlyphRun* */  QTextLayout_GlyphRuns1(const QTextLayout* self, int from);
struct miqt_array /* of QGlyphRun* */  QTextLayout_GlyphRuns2(const QTextLayout* self, int from, int length);
void QTextLayout_Delete(QTextLayout* self, bool isSubclass);

QTextLine* QTextLine_new();
bool QTextLine_IsValid(const QTextLine* self);
QRectF* QTextLine_Rect(const QTextLine* self);
double QTextLine_X(const QTextLine* self);
double QTextLine_Y(const QTextLine* self);
double QTextLine_Width(const QTextLine* self);
double QTextLine_Ascent(const QTextLine* self);
double QTextLine_Descent(const QTextLine* self);
double QTextLine_Height(const QTextLine* self);
double QTextLine_Leading(const QTextLine* self);
void QTextLine_SetLeadingIncluded(QTextLine* self, bool included);
bool QTextLine_LeadingIncluded(const QTextLine* self);
double QTextLine_NaturalTextWidth(const QTextLine* self);
double QTextLine_HorizontalAdvance(const QTextLine* self);
QRectF* QTextLine_NaturalTextRect(const QTextLine* self);
double QTextLine_CursorToX(const QTextLine* self, int* cursorPos);
double QTextLine_CursorToXWithCursorPos(const QTextLine* self, int cursorPos);
int QTextLine_XToCursor(const QTextLine* self, double x);
void QTextLine_SetLineWidth(QTextLine* self, double width);
void QTextLine_SetNumColumns(QTextLine* self, int columns);
void QTextLine_SetNumColumns2(QTextLine* self, int columns, double alignmentWidth);
void QTextLine_SetPosition(QTextLine* self, QPointF* pos);
QPointF* QTextLine_Position(const QTextLine* self);
int QTextLine_TextStart(const QTextLine* self);
int QTextLine_TextLength(const QTextLine* self);
int QTextLine_LineNumber(const QTextLine* self);
void QTextLine_Draw(const QTextLine* self, QPainter* p, QPointF* point);
struct miqt_array /* of QGlyphRun* */  QTextLine_GlyphRuns(const QTextLine* self);
double QTextLine_CursorToX2(const QTextLine* self, int* cursorPos, int edge);
double QTextLine_CursorToX22(const QTextLine* self, int cursorPos, int edge);
int QTextLine_XToCursor2(const QTextLine* self, double x, int param2);
void QTextLine_Draw3(const QTextLine* self, QPainter* p, QPointF* point, QTextLayout__FormatRange* selection);
struct miqt_array /* of QGlyphRun* */  QTextLine_GlyphRuns1(const QTextLine* self, int from);
struct miqt_array /* of QGlyphRun* */  QTextLine_GlyphRuns2(const QTextLine* self, int from, int length);
void QTextLine_Delete(QTextLine* self, bool isSubclass);

void QTextLayout__FormatRange_Delete(QTextLayout__FormatRange* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
