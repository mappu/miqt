#include <QFont>
#include <QGlyphRun>
#include <QList>
#include <QPaintDevice>
#include <QPainter>
#include <QPointF>
#include <QRawFont>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlock>
#include <QTextFormat>
#include <QTextInlineObject>
#include <QTextLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextLayout__FormatRange
#include <QTextLine>
#include <QTextOption>
#include "qtextlayout.h"

#include "gen_qtextlayout.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextInlineObject* QTextInlineObject_new() {
	return new QTextInlineObject();
}

bool QTextInlineObject_IsValid(const QTextInlineObject* self) {
	return self->isValid();
}

QRectF* QTextInlineObject_Rect(const QTextInlineObject* self) {
	QRectF ret = self->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

double QTextInlineObject_Width(const QTextInlineObject* self) {
	return self->width();
}

double QTextInlineObject_Ascent(const QTextInlineObject* self) {
	return self->ascent();
}

double QTextInlineObject_Descent(const QTextInlineObject* self) {
	return self->descent();
}

double QTextInlineObject_Height(const QTextInlineObject* self) {
	return self->height();
}

uintptr_t QTextInlineObject_TextDirection(const QTextInlineObject* self) {
	Qt::LayoutDirection ret = self->textDirection();
	return static_cast<uintptr_t>(ret);
}

void QTextInlineObject_SetWidth(QTextInlineObject* self, double w) {
	self->setWidth(static_cast<qreal>(w));
}

void QTextInlineObject_SetAscent(QTextInlineObject* self, double a) {
	self->setAscent(static_cast<qreal>(a));
}

void QTextInlineObject_SetDescent(QTextInlineObject* self, double d) {
	self->setDescent(static_cast<qreal>(d));
}

int QTextInlineObject_TextPosition(const QTextInlineObject* self) {
	return self->textPosition();
}

int QTextInlineObject_FormatIndex(const QTextInlineObject* self) {
	return self->formatIndex();
}

QTextFormat* QTextInlineObject_Format(const QTextInlineObject* self) {
	QTextFormat ret = self->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFormat*>(new QTextFormat(ret));
}

void QTextInlineObject_Delete(QTextInlineObject* self) {
	delete self;
}

QTextLayout* QTextLayout_new() {
	return new QTextLayout();
}

QTextLayout* QTextLayout_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QTextLayout(text_QString);
}

QTextLayout* QTextLayout_new3(const char* text, size_t text_Strlen, QFont* font) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QTextLayout(text_QString, *font);
}

QTextLayout* QTextLayout_new4(QTextBlock* b) {
	return new QTextLayout(*b);
}

QTextLayout* QTextLayout_new5(const char* text, size_t text_Strlen, QFont* font, QPaintDevice* paintdevice) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QTextLayout(text_QString, *font, paintdevice);
}

void QTextLayout_SetFont(QTextLayout* self, QFont* f) {
	self->setFont(*f);
}

QFont* QTextLayout_Font(const QTextLayout* self) {
	QFont ret = self->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QTextLayout_SetRawFont(QTextLayout* self, QRawFont* rawFont) {
	self->setRawFont(*rawFont);
}

void QTextLayout_SetText(QTextLayout* self, const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	self->setText(stringVal_QString);
}

void QTextLayout_Text(const QTextLayout* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextLayout_SetTextOption(QTextLayout* self, QTextOption* option) {
	self->setTextOption(*option);
}

QTextOption* QTextLayout_TextOption(const QTextLayout* self) {
	const QTextOption& ret = self->textOption();
	// Cast returned reference into pointer
	return const_cast<QTextOption*>(&ret);
}

void QTextLayout_SetPreeditArea(QTextLayout* self, int position, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setPreeditArea(static_cast<int>(position), text_QString);
}

int QTextLayout_PreeditAreaPosition(const QTextLayout* self) {
	return self->preeditAreaPosition();
}

void QTextLayout_PreeditAreaText(const QTextLayout* self, char** _out, int* _out_Strlen) {
	QString ret = self->preeditAreaText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextLayout_SetAdditionalFormats(QTextLayout* self, QTextLayout__FormatRange** overrides, size_t overrides_len) {
	QList<QTextLayout::FormatRange> overrides_QList;
	overrides_QList.reserve(overrides_len);
	for(size_t i = 0; i < overrides_len; ++i) {
		overrides_QList.push_back(*(overrides[i]));
	}
	self->setAdditionalFormats(overrides_QList);
}

void QTextLayout_AdditionalFormats(const QTextLayout* self, QTextLayout__FormatRange*** _out, size_t* _out_len) {
	QList<QTextLayout::FormatRange> ret = self->additionalFormats();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QTextLayout__FormatRange** __out = static_cast<QTextLayout__FormatRange**>(malloc(sizeof(QTextLayout__FormatRange**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QTextLayout::FormatRange(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextLayout_ClearAdditionalFormats(QTextLayout* self) {
	self->clearAdditionalFormats();
}

void QTextLayout_SetFormats(QTextLayout* self, QTextLayout__FormatRange** overrides, size_t overrides_len) {
	QVector<QTextLayout::FormatRange> overrides_QList;
	overrides_QList.reserve(overrides_len);
	for(size_t i = 0; i < overrides_len; ++i) {
		overrides_QList.push_back(*(overrides[i]));
	}
	self->setFormats(overrides_QList);
}

void QTextLayout_Formats(const QTextLayout* self, QTextLayout__FormatRange*** _out, size_t* _out_len) {
	QVector<QTextLayout::FormatRange> ret = self->formats();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QTextLayout__FormatRange** __out = static_cast<QTextLayout__FormatRange**>(malloc(sizeof(QTextLayout__FormatRange**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QTextLayout::FormatRange(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextLayout_ClearFormats(QTextLayout* self) {
	self->clearFormats();
}

void QTextLayout_SetCacheEnabled(QTextLayout* self, bool enable) {
	self->setCacheEnabled(enable);
}

bool QTextLayout_CacheEnabled(const QTextLayout* self) {
	return self->cacheEnabled();
}

void QTextLayout_SetCursorMoveStyle(QTextLayout* self, uintptr_t style) {
	self->setCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

uintptr_t QTextLayout_CursorMoveStyle(const QTextLayout* self) {
	Qt::CursorMoveStyle ret = self->cursorMoveStyle();
	return static_cast<uintptr_t>(ret);
}

void QTextLayout_BeginLayout(QTextLayout* self) {
	self->beginLayout();
}

void QTextLayout_EndLayout(QTextLayout* self) {
	self->endLayout();
}

void QTextLayout_ClearLayout(QTextLayout* self) {
	self->clearLayout();
}

QTextLine* QTextLayout_CreateLine(QTextLayout* self) {
	QTextLine ret = self->createLine();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextLine*>(new QTextLine(ret));
}

int QTextLayout_LineCount(const QTextLayout* self) {
	return self->lineCount();
}

QTextLine* QTextLayout_LineAt(const QTextLayout* self, int i) {
	QTextLine ret = self->lineAt(static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextLine*>(new QTextLine(ret));
}

QTextLine* QTextLayout_LineForTextPosition(const QTextLayout* self, int pos) {
	QTextLine ret = self->lineForTextPosition(static_cast<int>(pos));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextLine*>(new QTextLine(ret));
}

bool QTextLayout_IsValidCursorPosition(const QTextLayout* self, int pos) {
	return self->isValidCursorPosition(static_cast<int>(pos));
}

int QTextLayout_NextCursorPosition(const QTextLayout* self, int oldPos) {
	return self->nextCursorPosition(static_cast<int>(oldPos));
}

int QTextLayout_PreviousCursorPosition(const QTextLayout* self, int oldPos) {
	return self->previousCursorPosition(static_cast<int>(oldPos));
}

int QTextLayout_LeftCursorPosition(const QTextLayout* self, int oldPos) {
	return self->leftCursorPosition(static_cast<int>(oldPos));
}

int QTextLayout_RightCursorPosition(const QTextLayout* self, int oldPos) {
	return self->rightCursorPosition(static_cast<int>(oldPos));
}

void QTextLayout_Draw(const QTextLayout* self, QPainter* p, QPointF* pos) {
	self->draw(p, *pos);
}

void QTextLayout_DrawCursor(const QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition) {
	self->drawCursor(p, *pos, static_cast<int>(cursorPosition));
}

void QTextLayout_DrawCursor2(const QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition, int width) {
	self->drawCursor(p, *pos, static_cast<int>(cursorPosition), static_cast<int>(width));
}

QPointF* QTextLayout_Position(const QTextLayout* self) {
	QPointF ret = self->position();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QTextLayout_SetPosition(QTextLayout* self, QPointF* p) {
	self->setPosition(*p);
}

QRectF* QTextLayout_BoundingRect(const QTextLayout* self) {
	QRectF ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

double QTextLayout_MinimumWidth(const QTextLayout* self) {
	return self->minimumWidth();
}

double QTextLayout_MaximumWidth(const QTextLayout* self) {
	return self->maximumWidth();
}

void QTextLayout_GlyphRuns(const QTextLayout* self, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = self->glyphRuns();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextLayout_SetFlags(QTextLayout* self, int flags) {
	self->setFlags(static_cast<int>(flags));
}

int QTextLayout_NextCursorPosition2(const QTextLayout* self, int oldPos, uintptr_t mode) {
	return self->nextCursorPosition(static_cast<int>(oldPos), static_cast<QTextLayout::CursorMode>(mode));
}

int QTextLayout_PreviousCursorPosition2(const QTextLayout* self, int oldPos, uintptr_t mode) {
	return self->previousCursorPosition(static_cast<int>(oldPos), static_cast<QTextLayout::CursorMode>(mode));
}

void QTextLayout_Draw3(const QTextLayout* self, QPainter* p, QPointF* pos, QTextLayout__FormatRange** selections, size_t selections_len) {
	QVector<QTextLayout::FormatRange> selections_QList;
	selections_QList.reserve(selections_len);
	for(size_t i = 0; i < selections_len; ++i) {
		selections_QList.push_back(*(selections[i]));
	}
	self->draw(p, *pos, selections_QList);
}

void QTextLayout_Draw4(const QTextLayout* self, QPainter* p, QPointF* pos, QTextLayout__FormatRange** selections, size_t selections_len, QRectF* clip) {
	QVector<QTextLayout::FormatRange> selections_QList;
	selections_QList.reserve(selections_len);
	for(size_t i = 0; i < selections_len; ++i) {
		selections_QList.push_back(*(selections[i]));
	}
	self->draw(p, *pos, selections_QList, *clip);
}

void QTextLayout_GlyphRuns1(const QTextLayout* self, int from, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = self->glyphRuns(static_cast<int>(from));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextLayout_GlyphRuns2(const QTextLayout* self, int from, int length, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = self->glyphRuns(static_cast<int>(from), static_cast<int>(length));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextLayout_Delete(QTextLayout* self) {
	delete self;
}

QTextLine* QTextLine_new() {
	return new QTextLine();
}

bool QTextLine_IsValid(const QTextLine* self) {
	return self->isValid();
}

QRectF* QTextLine_Rect(const QTextLine* self) {
	QRectF ret = self->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

double QTextLine_X(const QTextLine* self) {
	return self->x();
}

double QTextLine_Y(const QTextLine* self) {
	return self->y();
}

double QTextLine_Width(const QTextLine* self) {
	return self->width();
}

double QTextLine_Ascent(const QTextLine* self) {
	return self->ascent();
}

double QTextLine_Descent(const QTextLine* self) {
	return self->descent();
}

double QTextLine_Height(const QTextLine* self) {
	return self->height();
}

double QTextLine_Leading(const QTextLine* self) {
	return self->leading();
}

void QTextLine_SetLeadingIncluded(QTextLine* self, bool included) {
	self->setLeadingIncluded(included);
}

bool QTextLine_LeadingIncluded(const QTextLine* self) {
	return self->leadingIncluded();
}

double QTextLine_NaturalTextWidth(const QTextLine* self) {
	return self->naturalTextWidth();
}

double QTextLine_HorizontalAdvance(const QTextLine* self) {
	return self->horizontalAdvance();
}

QRectF* QTextLine_NaturalTextRect(const QTextLine* self) {
	QRectF ret = self->naturalTextRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

double QTextLine_CursorToX(const QTextLine* self, int* cursorPos) {
	return self->cursorToX(static_cast<int*>(cursorPos));
}

double QTextLine_CursorToXWithCursorPos(const QTextLine* self, int cursorPos) {
	return self->cursorToX(static_cast<int>(cursorPos));
}

int QTextLine_XToCursor(const QTextLine* self, double x) {
	return self->xToCursor(static_cast<qreal>(x));
}

void QTextLine_SetLineWidth(QTextLine* self, double width) {
	self->setLineWidth(static_cast<qreal>(width));
}

void QTextLine_SetNumColumns(QTextLine* self, int columns) {
	self->setNumColumns(static_cast<int>(columns));
}

void QTextLine_SetNumColumns2(QTextLine* self, int columns, double alignmentWidth) {
	self->setNumColumns(static_cast<int>(columns), static_cast<qreal>(alignmentWidth));
}

void QTextLine_SetPosition(QTextLine* self, QPointF* pos) {
	self->setPosition(*pos);
}

QPointF* QTextLine_Position(const QTextLine* self) {
	QPointF ret = self->position();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

int QTextLine_TextStart(const QTextLine* self) {
	return self->textStart();
}

int QTextLine_TextLength(const QTextLine* self) {
	return self->textLength();
}

int QTextLine_LineNumber(const QTextLine* self) {
	return self->lineNumber();
}

void QTextLine_Draw(const QTextLine* self, QPainter* p, QPointF* point) {
	self->draw(p, *point);
}

void QTextLine_GlyphRuns(const QTextLine* self, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = self->glyphRuns();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

double QTextLine_CursorToX2(const QTextLine* self, int* cursorPos, uintptr_t edge) {
	return self->cursorToX(static_cast<int*>(cursorPos), static_cast<QTextLine::Edge>(edge));
}

double QTextLine_CursorToX22(const QTextLine* self, int cursorPos, uintptr_t edge) {
	return self->cursorToX(static_cast<int>(cursorPos), static_cast<QTextLine::Edge>(edge));
}

int QTextLine_XToCursor2(const QTextLine* self, double x, uintptr_t param2) {
	return self->xToCursor(static_cast<qreal>(x), static_cast<QTextLine::CursorPosition>(param2));
}

void QTextLine_Draw3(const QTextLine* self, QPainter* p, QPointF* point, QTextLayout__FormatRange* selection) {
	self->draw(p, *point, selection);
}

void QTextLine_GlyphRuns1(const QTextLine* self, int from, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = self->glyphRuns(static_cast<int>(from));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextLine_GlyphRuns2(const QTextLine* self, int from, int length, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = self->glyphRuns(static_cast<int>(from), static_cast<int>(length));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextLine_Delete(QTextLine* self) {
	delete self;
}

void QTextLayout__FormatRange_Delete(QTextLayout__FormatRange* self) {
	delete self;
}

