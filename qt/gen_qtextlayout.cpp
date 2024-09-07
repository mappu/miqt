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

bool QTextInlineObject_IsValid(QTextInlineObject* self) {
	return const_cast<const QTextInlineObject*>(self)->isValid();
}

QRectF* QTextInlineObject_Rect(QTextInlineObject* self) {
	QRectF ret = const_cast<const QTextInlineObject*>(self)->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

double QTextInlineObject_Width(QTextInlineObject* self) {
	return const_cast<const QTextInlineObject*>(self)->width();
}

double QTextInlineObject_Ascent(QTextInlineObject* self) {
	return const_cast<const QTextInlineObject*>(self)->ascent();
}

double QTextInlineObject_Descent(QTextInlineObject* self) {
	return const_cast<const QTextInlineObject*>(self)->descent();
}

double QTextInlineObject_Height(QTextInlineObject* self) {
	return const_cast<const QTextInlineObject*>(self)->height();
}

uintptr_t QTextInlineObject_TextDirection(QTextInlineObject* self) {
	Qt::LayoutDirection ret = const_cast<const QTextInlineObject*>(self)->textDirection();
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

int QTextInlineObject_TextPosition(QTextInlineObject* self) {
	return const_cast<const QTextInlineObject*>(self)->textPosition();
}

int QTextInlineObject_FormatIndex(QTextInlineObject* self) {
	return const_cast<const QTextInlineObject*>(self)->formatIndex();
}

QTextFormat* QTextInlineObject_Format(QTextInlineObject* self) {
	QTextFormat ret = const_cast<const QTextInlineObject*>(self)->format();
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

QFont* QTextLayout_Font(QTextLayout* self) {
	QFont ret = const_cast<const QTextLayout*>(self)->font();
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

void QTextLayout_Text(QTextLayout* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextLayout*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextLayout_SetTextOption(QTextLayout* self, QTextOption* option) {
	self->setTextOption(*option);
}

QTextOption* QTextLayout_TextOption(QTextLayout* self) {
	const QTextOption& ret = const_cast<const QTextLayout*>(self)->textOption();
	// Cast returned reference into pointer
	return const_cast<QTextOption*>(&ret);
}

void QTextLayout_SetPreeditArea(QTextLayout* self, int position, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setPreeditArea(static_cast<int>(position), text_QString);
}

int QTextLayout_PreeditAreaPosition(QTextLayout* self) {
	return const_cast<const QTextLayout*>(self)->preeditAreaPosition();
}

void QTextLayout_PreeditAreaText(QTextLayout* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextLayout*>(self)->preeditAreaText();
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

void QTextLayout_AdditionalFormats(QTextLayout* self, QTextLayout__FormatRange*** _out, size_t* _out_len) {
	QList<QTextLayout::FormatRange> ret = const_cast<const QTextLayout*>(self)->additionalFormats();
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

void QTextLayout_Formats(QTextLayout* self, QTextLayout__FormatRange*** _out, size_t* _out_len) {
	QVector<QTextLayout::FormatRange> ret = const_cast<const QTextLayout*>(self)->formats();
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

bool QTextLayout_CacheEnabled(QTextLayout* self) {
	return const_cast<const QTextLayout*>(self)->cacheEnabled();
}

void QTextLayout_SetCursorMoveStyle(QTextLayout* self, uintptr_t style) {
	self->setCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

uintptr_t QTextLayout_CursorMoveStyle(QTextLayout* self) {
	Qt::CursorMoveStyle ret = const_cast<const QTextLayout*>(self)->cursorMoveStyle();
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

int QTextLayout_LineCount(QTextLayout* self) {
	return const_cast<const QTextLayout*>(self)->lineCount();
}

QTextLine* QTextLayout_LineAt(QTextLayout* self, int i) {
	QTextLine ret = const_cast<const QTextLayout*>(self)->lineAt(static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextLine*>(new QTextLine(ret));
}

QTextLine* QTextLayout_LineForTextPosition(QTextLayout* self, int pos) {
	QTextLine ret = const_cast<const QTextLayout*>(self)->lineForTextPosition(static_cast<int>(pos));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextLine*>(new QTextLine(ret));
}

bool QTextLayout_IsValidCursorPosition(QTextLayout* self, int pos) {
	return const_cast<const QTextLayout*>(self)->isValidCursorPosition(static_cast<int>(pos));
}

int QTextLayout_NextCursorPosition(QTextLayout* self, int oldPos) {
	return const_cast<const QTextLayout*>(self)->nextCursorPosition(static_cast<int>(oldPos));
}

int QTextLayout_PreviousCursorPosition(QTextLayout* self, int oldPos) {
	return const_cast<const QTextLayout*>(self)->previousCursorPosition(static_cast<int>(oldPos));
}

int QTextLayout_LeftCursorPosition(QTextLayout* self, int oldPos) {
	return const_cast<const QTextLayout*>(self)->leftCursorPosition(static_cast<int>(oldPos));
}

int QTextLayout_RightCursorPosition(QTextLayout* self, int oldPos) {
	return const_cast<const QTextLayout*>(self)->rightCursorPosition(static_cast<int>(oldPos));
}

void QTextLayout_Draw(QTextLayout* self, QPainter* p, QPointF* pos) {
	const_cast<const QTextLayout*>(self)->draw(p, *pos);
}

void QTextLayout_DrawCursor(QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition) {
	const_cast<const QTextLayout*>(self)->drawCursor(p, *pos, static_cast<int>(cursorPosition));
}

void QTextLayout_DrawCursor2(QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition, int width) {
	const_cast<const QTextLayout*>(self)->drawCursor(p, *pos, static_cast<int>(cursorPosition), static_cast<int>(width));
}

QPointF* QTextLayout_Position(QTextLayout* self) {
	QPointF ret = const_cast<const QTextLayout*>(self)->position();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QTextLayout_SetPosition(QTextLayout* self, QPointF* p) {
	self->setPosition(*p);
}

QRectF* QTextLayout_BoundingRect(QTextLayout* self) {
	QRectF ret = const_cast<const QTextLayout*>(self)->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

double QTextLayout_MinimumWidth(QTextLayout* self) {
	return const_cast<const QTextLayout*>(self)->minimumWidth();
}

double QTextLayout_MaximumWidth(QTextLayout* self) {
	return const_cast<const QTextLayout*>(self)->maximumWidth();
}

void QTextLayout_GlyphRuns(QTextLayout* self, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = const_cast<const QTextLayout*>(self)->glyphRuns();
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

int QTextLayout_NextCursorPosition2(QTextLayout* self, int oldPos, uintptr_t mode) {
	return const_cast<const QTextLayout*>(self)->nextCursorPosition(static_cast<int>(oldPos), static_cast<QTextLayout::CursorMode>(mode));
}

int QTextLayout_PreviousCursorPosition2(QTextLayout* self, int oldPos, uintptr_t mode) {
	return const_cast<const QTextLayout*>(self)->previousCursorPosition(static_cast<int>(oldPos), static_cast<QTextLayout::CursorMode>(mode));
}

void QTextLayout_Draw3(QTextLayout* self, QPainter* p, QPointF* pos, QTextLayout__FormatRange** selections, size_t selections_len) {
	QVector<QTextLayout::FormatRange> selections_QList;
	selections_QList.reserve(selections_len);
	for(size_t i = 0; i < selections_len; ++i) {
		selections_QList.push_back(*(selections[i]));
	}
	const_cast<const QTextLayout*>(self)->draw(p, *pos, selections_QList);
}

void QTextLayout_Draw4(QTextLayout* self, QPainter* p, QPointF* pos, QTextLayout__FormatRange** selections, size_t selections_len, QRectF* clip) {
	QVector<QTextLayout::FormatRange> selections_QList;
	selections_QList.reserve(selections_len);
	for(size_t i = 0; i < selections_len; ++i) {
		selections_QList.push_back(*(selections[i]));
	}
	const_cast<const QTextLayout*>(self)->draw(p, *pos, selections_QList, *clip);
}

void QTextLayout_GlyphRuns1(QTextLayout* self, int from, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = const_cast<const QTextLayout*>(self)->glyphRuns(static_cast<int>(from));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextLayout_GlyphRuns2(QTextLayout* self, int from, int length, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = const_cast<const QTextLayout*>(self)->glyphRuns(static_cast<int>(from), static_cast<int>(length));
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

bool QTextLine_IsValid(QTextLine* self) {
	return const_cast<const QTextLine*>(self)->isValid();
}

QRectF* QTextLine_Rect(QTextLine* self) {
	QRectF ret = const_cast<const QTextLine*>(self)->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

double QTextLine_X(QTextLine* self) {
	return const_cast<const QTextLine*>(self)->x();
}

double QTextLine_Y(QTextLine* self) {
	return const_cast<const QTextLine*>(self)->y();
}

double QTextLine_Width(QTextLine* self) {
	return const_cast<const QTextLine*>(self)->width();
}

double QTextLine_Ascent(QTextLine* self) {
	return const_cast<const QTextLine*>(self)->ascent();
}

double QTextLine_Descent(QTextLine* self) {
	return const_cast<const QTextLine*>(self)->descent();
}

double QTextLine_Height(QTextLine* self) {
	return const_cast<const QTextLine*>(self)->height();
}

double QTextLine_Leading(QTextLine* self) {
	return const_cast<const QTextLine*>(self)->leading();
}

void QTextLine_SetLeadingIncluded(QTextLine* self, bool included) {
	self->setLeadingIncluded(included);
}

bool QTextLine_LeadingIncluded(QTextLine* self) {
	return const_cast<const QTextLine*>(self)->leadingIncluded();
}

double QTextLine_NaturalTextWidth(QTextLine* self) {
	return const_cast<const QTextLine*>(self)->naturalTextWidth();
}

double QTextLine_HorizontalAdvance(QTextLine* self) {
	return const_cast<const QTextLine*>(self)->horizontalAdvance();
}

QRectF* QTextLine_NaturalTextRect(QTextLine* self) {
	QRectF ret = const_cast<const QTextLine*>(self)->naturalTextRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

double QTextLine_CursorToX(QTextLine* self, int* cursorPos) {
	return const_cast<const QTextLine*>(self)->cursorToX(static_cast<int*>(cursorPos));
}

double QTextLine_CursorToXWithCursorPos(QTextLine* self, int cursorPos) {
	return const_cast<const QTextLine*>(self)->cursorToX(static_cast<int>(cursorPos));
}

int QTextLine_XToCursor(QTextLine* self, double x) {
	return const_cast<const QTextLine*>(self)->xToCursor(static_cast<qreal>(x));
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

QPointF* QTextLine_Position(QTextLine* self) {
	QPointF ret = const_cast<const QTextLine*>(self)->position();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

int QTextLine_TextStart(QTextLine* self) {
	return const_cast<const QTextLine*>(self)->textStart();
}

int QTextLine_TextLength(QTextLine* self) {
	return const_cast<const QTextLine*>(self)->textLength();
}

int QTextLine_LineNumber(QTextLine* self) {
	return const_cast<const QTextLine*>(self)->lineNumber();
}

void QTextLine_Draw(QTextLine* self, QPainter* p, QPointF* point) {
	const_cast<const QTextLine*>(self)->draw(p, *point);
}

void QTextLine_GlyphRuns(QTextLine* self, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = const_cast<const QTextLine*>(self)->glyphRuns();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

double QTextLine_CursorToX2(QTextLine* self, int* cursorPos, uintptr_t edge) {
	return const_cast<const QTextLine*>(self)->cursorToX(static_cast<int*>(cursorPos), static_cast<QTextLine::Edge>(edge));
}

double QTextLine_CursorToX22(QTextLine* self, int cursorPos, uintptr_t edge) {
	return const_cast<const QTextLine*>(self)->cursorToX(static_cast<int>(cursorPos), static_cast<QTextLine::Edge>(edge));
}

int QTextLine_XToCursor2(QTextLine* self, double x, uintptr_t param2) {
	return const_cast<const QTextLine*>(self)->xToCursor(static_cast<qreal>(x), static_cast<QTextLine::CursorPosition>(param2));
}

void QTextLine_Draw3(QTextLine* self, QPainter* p, QPointF* point, QTextLayout__FormatRange* selection) {
	const_cast<const QTextLine*>(self)->draw(p, *point, selection);
}

void QTextLine_GlyphRuns1(QTextLine* self, int from, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = const_cast<const QTextLine*>(self)->glyphRuns(static_cast<int>(from));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextLine_GlyphRuns2(QTextLine* self, int from, int length, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = const_cast<const QTextLine*>(self)->glyphRuns(static_cast<int>(from), static_cast<int>(length));
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

