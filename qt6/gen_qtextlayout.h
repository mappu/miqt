#pragma once
#ifndef MIQT_QT6_GEN_QTEXTLAYOUT_H
#define MIQT_QT6_GEN_QTEXTLAYOUT_H

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
bool QTextInlineObject_isValid(const QTextInlineObject* self);
QRectF* QTextInlineObject_rect(const QTextInlineObject* self);
double QTextInlineObject_width(const QTextInlineObject* self);
double QTextInlineObject_ascent(const QTextInlineObject* self);
double QTextInlineObject_descent(const QTextInlineObject* self);
double QTextInlineObject_height(const QTextInlineObject* self);
int QTextInlineObject_textDirection(const QTextInlineObject* self);
void QTextInlineObject_setWidth(QTextInlineObject* self, double w);
void QTextInlineObject_setAscent(QTextInlineObject* self, double a);
void QTextInlineObject_setDescent(QTextInlineObject* self, double d);
int QTextInlineObject_textPosition(const QTextInlineObject* self);
int QTextInlineObject_formatIndex(const QTextInlineObject* self);
QTextFormat* QTextInlineObject_format(const QTextInlineObject* self);
void QTextInlineObject_delete(QTextInlineObject* self);

QTextLayout* QTextLayout_new();
QTextLayout* QTextLayout_new2(struct miqt_string text);
QTextLayout* QTextLayout_new3(struct miqt_string text, QFont* font);
QTextLayout* QTextLayout_new4(QTextBlock* b);
QTextLayout* QTextLayout_new5(struct miqt_string text, QFont* font, QPaintDevice* paintdevice);
void QTextLayout_setFont(QTextLayout* self, QFont* f);
QFont* QTextLayout_font(const QTextLayout* self);
void QTextLayout_setRawFont(QTextLayout* self, QRawFont* rawFont);
void QTextLayout_setText(QTextLayout* self, struct miqt_string string);
struct miqt_string QTextLayout_text(const QTextLayout* self);
void QTextLayout_setTextOption(QTextLayout* self, QTextOption* option);
QTextOption* QTextLayout_textOption(const QTextLayout* self);
void QTextLayout_setPreeditArea(QTextLayout* self, int position, struct miqt_string text);
int QTextLayout_preeditAreaPosition(const QTextLayout* self);
struct miqt_string QTextLayout_preeditAreaText(const QTextLayout* self);
void QTextLayout_setFormats(QTextLayout* self, struct miqt_array /* of QTextLayout__FormatRange* */  overrides);
struct miqt_array /* of QTextLayout__FormatRange* */  QTextLayout_formats(const QTextLayout* self);
void QTextLayout_clearFormats(QTextLayout* self);
void QTextLayout_setCacheEnabled(QTextLayout* self, bool enable);
bool QTextLayout_cacheEnabled(const QTextLayout* self);
void QTextLayout_setCursorMoveStyle(QTextLayout* self, int style);
int QTextLayout_cursorMoveStyle(const QTextLayout* self);
void QTextLayout_beginLayout(QTextLayout* self);
void QTextLayout_endLayout(QTextLayout* self);
void QTextLayout_clearLayout(QTextLayout* self);
QTextLine* QTextLayout_createLine(QTextLayout* self);
int QTextLayout_lineCount(const QTextLayout* self);
QTextLine* QTextLayout_lineAt(const QTextLayout* self, int i);
QTextLine* QTextLayout_lineForTextPosition(const QTextLayout* self, int pos);
bool QTextLayout_isValidCursorPosition(const QTextLayout* self, int pos);
int QTextLayout_nextCursorPosition(const QTextLayout* self, int oldPos);
int QTextLayout_previousCursorPosition(const QTextLayout* self, int oldPos);
int QTextLayout_leftCursorPosition(const QTextLayout* self, int oldPos);
int QTextLayout_rightCursorPosition(const QTextLayout* self, int oldPos);
void QTextLayout_draw(const QTextLayout* self, QPainter* p, QPointF* pos);
void QTextLayout_drawCursor(const QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition);
void QTextLayout_drawCursor2(const QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition, int width);
QPointF* QTextLayout_position(const QTextLayout* self);
void QTextLayout_setPosition(QTextLayout* self, QPointF* p);
QRectF* QTextLayout_boundingRect(const QTextLayout* self);
double QTextLayout_minimumWidth(const QTextLayout* self);
double QTextLayout_maximumWidth(const QTextLayout* self);
struct miqt_array /* of QGlyphRun* */  QTextLayout_glyphRuns(const QTextLayout* self);
void QTextLayout_setFlags(QTextLayout* self, int flags);
int QTextLayout_nextCursorPosition2(const QTextLayout* self, int oldPos, int mode);
int QTextLayout_previousCursorPosition2(const QTextLayout* self, int oldPos, int mode);
void QTextLayout_draw3(const QTextLayout* self, QPainter* p, QPointF* pos, struct miqt_array /* of QTextLayout__FormatRange* */  selections);
void QTextLayout_draw4(const QTextLayout* self, QPainter* p, QPointF* pos, struct miqt_array /* of QTextLayout__FormatRange* */  selections, QRectF* clip);
struct miqt_array /* of QGlyphRun* */  QTextLayout_glyphRuns1(const QTextLayout* self, int from);
struct miqt_array /* of QGlyphRun* */  QTextLayout_glyphRuns2(const QTextLayout* self, int from, int length);
void QTextLayout_delete(QTextLayout* self);

QTextLine* QTextLine_new();
bool QTextLine_isValid(const QTextLine* self);
QRectF* QTextLine_rect(const QTextLine* self);
double QTextLine_x(const QTextLine* self);
double QTextLine_y(const QTextLine* self);
double QTextLine_width(const QTextLine* self);
double QTextLine_ascent(const QTextLine* self);
double QTextLine_descent(const QTextLine* self);
double QTextLine_height(const QTextLine* self);
double QTextLine_leading(const QTextLine* self);
void QTextLine_setLeadingIncluded(QTextLine* self, bool included);
bool QTextLine_leadingIncluded(const QTextLine* self);
double QTextLine_naturalTextWidth(const QTextLine* self);
double QTextLine_horizontalAdvance(const QTextLine* self);
QRectF* QTextLine_naturalTextRect(const QTextLine* self);
double QTextLine_cursorToX(const QTextLine* self, int* cursorPos);
double QTextLine_cursorToXWithCursorPos(const QTextLine* self, int cursorPos);
int QTextLine_xToCursor(const QTextLine* self, double x);
void QTextLine_setLineWidth(QTextLine* self, double width);
void QTextLine_setNumColumns(QTextLine* self, int columns);
void QTextLine_setNumColumns2(QTextLine* self, int columns, double alignmentWidth);
void QTextLine_setPosition(QTextLine* self, QPointF* pos);
QPointF* QTextLine_position(const QTextLine* self);
int QTextLine_textStart(const QTextLine* self);
int QTextLine_textLength(const QTextLine* self);
int QTextLine_lineNumber(const QTextLine* self);
void QTextLine_draw(const QTextLine* self, QPainter* painter, QPointF* position);
struct miqt_array /* of QGlyphRun* */  QTextLine_glyphRuns(const QTextLine* self);
double QTextLine_cursorToX2(const QTextLine* self, int* cursorPos, int edge);
double QTextLine_cursorToX22(const QTextLine* self, int cursorPos, int edge);
int QTextLine_xToCursor2(const QTextLine* self, double x, int param2);
struct miqt_array /* of QGlyphRun* */  QTextLine_glyphRuns1(const QTextLine* self, int from);
struct miqt_array /* of QGlyphRun* */  QTextLine_glyphRuns2(const QTextLine* self, int from, int length);
void QTextLine_delete(QTextLine* self);

QTextLayout__FormatRange* QTextLayout__FormatRange_new(QTextLayout__FormatRange* param1);
void QTextLayout__FormatRange_operatorAssign(QTextLayout__FormatRange* self, QTextLayout__FormatRange* param1);
void QTextLayout__FormatRange_delete(QTextLayout__FormatRange* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
