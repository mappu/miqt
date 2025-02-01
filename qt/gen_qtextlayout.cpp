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
#include <qtextlayout.h>
#include "gen_qtextlayout.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTextInlineObject* QTextInlineObject_new() {
	return new QTextInlineObject();
}

bool QTextInlineObject_isValid(const QTextInlineObject* self) {
	return self->isValid();
}

QRectF* QTextInlineObject_rect(const QTextInlineObject* self) {
	return new QRectF(self->rect());
}

double QTextInlineObject_width(const QTextInlineObject* self) {
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

double QTextInlineObject_ascent(const QTextInlineObject* self) {
	qreal _ret = self->ascent();
	return static_cast<double>(_ret);
}

double QTextInlineObject_descent(const QTextInlineObject* self) {
	qreal _ret = self->descent();
	return static_cast<double>(_ret);
}

double QTextInlineObject_height(const QTextInlineObject* self) {
	qreal _ret = self->height();
	return static_cast<double>(_ret);
}

int QTextInlineObject_textDirection(const QTextInlineObject* self) {
	Qt::LayoutDirection _ret = self->textDirection();
	return static_cast<int>(_ret);
}

void QTextInlineObject_setWidth(QTextInlineObject* self, double w) {
	self->setWidth(static_cast<qreal>(w));
}

void QTextInlineObject_setAscent(QTextInlineObject* self, double a) {
	self->setAscent(static_cast<qreal>(a));
}

void QTextInlineObject_setDescent(QTextInlineObject* self, double d) {
	self->setDescent(static_cast<qreal>(d));
}

int QTextInlineObject_textPosition(const QTextInlineObject* self) {
	return self->textPosition();
}

int QTextInlineObject_formatIndex(const QTextInlineObject* self) {
	return self->formatIndex();
}

QTextFormat* QTextInlineObject_format(const QTextInlineObject* self) {
	return new QTextFormat(self->format());
}

void QTextInlineObject_delete(QTextInlineObject* self) {
	delete self;
}

QTextLayout* QTextLayout_new() {
	return new QTextLayout();
}

QTextLayout* QTextLayout_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QTextLayout(text_QString);
}

QTextLayout* QTextLayout_new3(struct miqt_string text, QFont* font) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QTextLayout(text_QString, *font);
}

QTextLayout* QTextLayout_new4(QTextBlock* b) {
	return new QTextLayout(*b);
}

QTextLayout* QTextLayout_new5(struct miqt_string text, QFont* font, QPaintDevice* paintdevice) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QTextLayout(text_QString, *font, paintdevice);
}

void QTextLayout_setFont(QTextLayout* self, QFont* f) {
	self->setFont(*f);
}

QFont* QTextLayout_font(const QTextLayout* self) {
	return new QFont(self->font());
}

void QTextLayout_setRawFont(QTextLayout* self, QRawFont* rawFont) {
	self->setRawFont(*rawFont);
}

void QTextLayout_setText(QTextLayout* self, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	self->setText(string_QString);
}

struct miqt_string QTextLayout_text(const QTextLayout* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextLayout_setTextOption(QTextLayout* self, QTextOption* option) {
	self->setTextOption(*option);
}

QTextOption* QTextLayout_textOption(const QTextLayout* self) {
	const QTextOption& _ret = self->textOption();
	// Cast returned reference into pointer
	return const_cast<QTextOption*>(&_ret);
}

void QTextLayout_setPreeditArea(QTextLayout* self, int position, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPreeditArea(static_cast<int>(position), text_QString);
}

int QTextLayout_preeditAreaPosition(const QTextLayout* self) {
	return self->preeditAreaPosition();
}

struct miqt_string QTextLayout_preeditAreaText(const QTextLayout* self) {
	QString _ret = self->preeditAreaText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextLayout_setAdditionalFormats(QTextLayout* self, struct miqt_array /* of QTextLayout__FormatRange* */  overrides) {
	QList<QTextLayout::FormatRange> overrides_QList;
	overrides_QList.reserve(overrides.len);
	QTextLayout__FormatRange** overrides_arr = static_cast<QTextLayout__FormatRange**>(overrides.data);
	for(size_t i = 0; i < overrides.len; ++i) {
		overrides_QList.push_back(*(overrides_arr[i]));
	}
	self->setAdditionalFormats(overrides_QList);
}

struct miqt_array /* of QTextLayout__FormatRange* */  QTextLayout_additionalFormats(const QTextLayout* self) {
	QList<QTextLayout::FormatRange> _ret = self->additionalFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextLayout__FormatRange** _arr = static_cast<QTextLayout__FormatRange**>(malloc(sizeof(QTextLayout__FormatRange*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextLayout::FormatRange(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextLayout_clearAdditionalFormats(QTextLayout* self) {
	self->clearAdditionalFormats();
}

void QTextLayout_setFormats(QTextLayout* self, struct miqt_array /* of QTextLayout__FormatRange* */  overrides) {
	QVector<QTextLayout::FormatRange> overrides_QList;
	overrides_QList.reserve(overrides.len);
	QTextLayout__FormatRange** overrides_arr = static_cast<QTextLayout__FormatRange**>(overrides.data);
	for(size_t i = 0; i < overrides.len; ++i) {
		overrides_QList.push_back(*(overrides_arr[i]));
	}
	self->setFormats(overrides_QList);
}

struct miqt_array /* of QTextLayout__FormatRange* */  QTextLayout_formats(const QTextLayout* self) {
	QVector<QTextLayout::FormatRange> _ret = self->formats();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextLayout__FormatRange** _arr = static_cast<QTextLayout__FormatRange**>(malloc(sizeof(QTextLayout__FormatRange*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextLayout::FormatRange(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextLayout_clearFormats(QTextLayout* self) {
	self->clearFormats();
}

void QTextLayout_setCacheEnabled(QTextLayout* self, bool enable) {
	self->setCacheEnabled(enable);
}

bool QTextLayout_cacheEnabled(const QTextLayout* self) {
	return self->cacheEnabled();
}

void QTextLayout_setCursorMoveStyle(QTextLayout* self, int style) {
	self->setCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

int QTextLayout_cursorMoveStyle(const QTextLayout* self) {
	Qt::CursorMoveStyle _ret = self->cursorMoveStyle();
	return static_cast<int>(_ret);
}

void QTextLayout_beginLayout(QTextLayout* self) {
	self->beginLayout();
}

void QTextLayout_endLayout(QTextLayout* self) {
	self->endLayout();
}

void QTextLayout_clearLayout(QTextLayout* self) {
	self->clearLayout();
}

QTextLine* QTextLayout_createLine(QTextLayout* self) {
	return new QTextLine(self->createLine());
}

int QTextLayout_lineCount(const QTextLayout* self) {
	return self->lineCount();
}

QTextLine* QTextLayout_lineAt(const QTextLayout* self, int i) {
	return new QTextLine(self->lineAt(static_cast<int>(i)));
}

QTextLine* QTextLayout_lineForTextPosition(const QTextLayout* self, int pos) {
	return new QTextLine(self->lineForTextPosition(static_cast<int>(pos)));
}

bool QTextLayout_isValidCursorPosition(const QTextLayout* self, int pos) {
	return self->isValidCursorPosition(static_cast<int>(pos));
}

int QTextLayout_nextCursorPosition(const QTextLayout* self, int oldPos) {
	return self->nextCursorPosition(static_cast<int>(oldPos));
}

int QTextLayout_previousCursorPosition(const QTextLayout* self, int oldPos) {
	return self->previousCursorPosition(static_cast<int>(oldPos));
}

int QTextLayout_leftCursorPosition(const QTextLayout* self, int oldPos) {
	return self->leftCursorPosition(static_cast<int>(oldPos));
}

int QTextLayout_rightCursorPosition(const QTextLayout* self, int oldPos) {
	return self->rightCursorPosition(static_cast<int>(oldPos));
}

void QTextLayout_draw(const QTextLayout* self, QPainter* p, QPointF* pos) {
	self->draw(p, *pos);
}

void QTextLayout_drawCursor(const QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition) {
	self->drawCursor(p, *pos, static_cast<int>(cursorPosition));
}

void QTextLayout_drawCursor2(const QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition, int width) {
	self->drawCursor(p, *pos, static_cast<int>(cursorPosition), static_cast<int>(width));
}

QPointF* QTextLayout_position(const QTextLayout* self) {
	return new QPointF(self->position());
}

void QTextLayout_setPosition(QTextLayout* self, QPointF* p) {
	self->setPosition(*p);
}

QRectF* QTextLayout_boundingRect(const QTextLayout* self) {
	return new QRectF(self->boundingRect());
}

double QTextLayout_minimumWidth(const QTextLayout* self) {
	qreal _ret = self->minimumWidth();
	return static_cast<double>(_ret);
}

double QTextLayout_maximumWidth(const QTextLayout* self) {
	qreal _ret = self->maximumWidth();
	return static_cast<double>(_ret);
}

struct miqt_array /* of QGlyphRun* */  QTextLayout_glyphRuns(const QTextLayout* self) {
	QList<QGlyphRun> _ret = self->glyphRuns();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextLayout_setFlags(QTextLayout* self, int flags) {
	self->setFlags(static_cast<int>(flags));
}

int QTextLayout_nextCursorPosition2(const QTextLayout* self, int oldPos, int mode) {
	return self->nextCursorPosition(static_cast<int>(oldPos), static_cast<QTextLayout::CursorMode>(mode));
}

int QTextLayout_previousCursorPosition2(const QTextLayout* self, int oldPos, int mode) {
	return self->previousCursorPosition(static_cast<int>(oldPos), static_cast<QTextLayout::CursorMode>(mode));
}

void QTextLayout_draw3(const QTextLayout* self, QPainter* p, QPointF* pos, struct miqt_array /* of QTextLayout__FormatRange* */  selections) {
	QVector<QTextLayout::FormatRange> selections_QList;
	selections_QList.reserve(selections.len);
	QTextLayout__FormatRange** selections_arr = static_cast<QTextLayout__FormatRange**>(selections.data);
	for(size_t i = 0; i < selections.len; ++i) {
		selections_QList.push_back(*(selections_arr[i]));
	}
	self->draw(p, *pos, selections_QList);
}

void QTextLayout_draw4(const QTextLayout* self, QPainter* p, QPointF* pos, struct miqt_array /* of QTextLayout__FormatRange* */  selections, QRectF* clip) {
	QVector<QTextLayout::FormatRange> selections_QList;
	selections_QList.reserve(selections.len);
	QTextLayout__FormatRange** selections_arr = static_cast<QTextLayout__FormatRange**>(selections.data);
	for(size_t i = 0; i < selections.len; ++i) {
		selections_QList.push_back(*(selections_arr[i]));
	}
	self->draw(p, *pos, selections_QList, *clip);
}

struct miqt_array /* of QGlyphRun* */  QTextLayout_glyphRuns1(const QTextLayout* self, int from) {
	QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGlyphRun* */  QTextLayout_glyphRuns2(const QTextLayout* self, int from, int length) {
	QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from), static_cast<int>(length));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextLayout_delete(QTextLayout* self) {
	delete self;
}

QTextLine* QTextLine_new() {
	return new QTextLine();
}

bool QTextLine_isValid(const QTextLine* self) {
	return self->isValid();
}

QRectF* QTextLine_rect(const QTextLine* self) {
	return new QRectF(self->rect());
}

double QTextLine_x(const QTextLine* self) {
	qreal _ret = self->x();
	return static_cast<double>(_ret);
}

double QTextLine_y(const QTextLine* self) {
	qreal _ret = self->y();
	return static_cast<double>(_ret);
}

double QTextLine_width(const QTextLine* self) {
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

double QTextLine_ascent(const QTextLine* self) {
	qreal _ret = self->ascent();
	return static_cast<double>(_ret);
}

double QTextLine_descent(const QTextLine* self) {
	qreal _ret = self->descent();
	return static_cast<double>(_ret);
}

double QTextLine_height(const QTextLine* self) {
	qreal _ret = self->height();
	return static_cast<double>(_ret);
}

double QTextLine_leading(const QTextLine* self) {
	qreal _ret = self->leading();
	return static_cast<double>(_ret);
}

void QTextLine_setLeadingIncluded(QTextLine* self, bool included) {
	self->setLeadingIncluded(included);
}

bool QTextLine_leadingIncluded(const QTextLine* self) {
	return self->leadingIncluded();
}

double QTextLine_naturalTextWidth(const QTextLine* self) {
	qreal _ret = self->naturalTextWidth();
	return static_cast<double>(_ret);
}

double QTextLine_horizontalAdvance(const QTextLine* self) {
	qreal _ret = self->horizontalAdvance();
	return static_cast<double>(_ret);
}

QRectF* QTextLine_naturalTextRect(const QTextLine* self) {
	return new QRectF(self->naturalTextRect());
}

double QTextLine_cursorToX(const QTextLine* self, int* cursorPos) {
	qreal _ret = self->cursorToX(static_cast<int*>(cursorPos));
	return static_cast<double>(_ret);
}

double QTextLine_cursorToXWithCursorPos(const QTextLine* self, int cursorPos) {
	qreal _ret = self->cursorToX(static_cast<int>(cursorPos));
	return static_cast<double>(_ret);
}

int QTextLine_xToCursor(const QTextLine* self, double x) {
	return self->xToCursor(static_cast<qreal>(x));
}

void QTextLine_setLineWidth(QTextLine* self, double width) {
	self->setLineWidth(static_cast<qreal>(width));
}

void QTextLine_setNumColumns(QTextLine* self, int columns) {
	self->setNumColumns(static_cast<int>(columns));
}

void QTextLine_setNumColumns2(QTextLine* self, int columns, double alignmentWidth) {
	self->setNumColumns(static_cast<int>(columns), static_cast<qreal>(alignmentWidth));
}

void QTextLine_setPosition(QTextLine* self, QPointF* pos) {
	self->setPosition(*pos);
}

QPointF* QTextLine_position(const QTextLine* self) {
	return new QPointF(self->position());
}

int QTextLine_textStart(const QTextLine* self) {
	return self->textStart();
}

int QTextLine_textLength(const QTextLine* self) {
	return self->textLength();
}

int QTextLine_lineNumber(const QTextLine* self) {
	return self->lineNumber();
}

void QTextLine_draw(const QTextLine* self, QPainter* p, QPointF* point) {
	self->draw(p, *point);
}

struct miqt_array /* of QGlyphRun* */  QTextLine_glyphRuns(const QTextLine* self) {
	QList<QGlyphRun> _ret = self->glyphRuns();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

double QTextLine_cursorToX2(const QTextLine* self, int* cursorPos, int edge) {
	qreal _ret = self->cursorToX(static_cast<int*>(cursorPos), static_cast<QTextLine::Edge>(edge));
	return static_cast<double>(_ret);
}

double QTextLine_cursorToX22(const QTextLine* self, int cursorPos, int edge) {
	qreal _ret = self->cursorToX(static_cast<int>(cursorPos), static_cast<QTextLine::Edge>(edge));
	return static_cast<double>(_ret);
}

int QTextLine_xToCursor2(const QTextLine* self, double x, int param2) {
	return self->xToCursor(static_cast<qreal>(x), static_cast<QTextLine::CursorPosition>(param2));
}

void QTextLine_draw3(const QTextLine* self, QPainter* p, QPointF* point, QTextLayout__FormatRange* selection) {
	self->draw(p, *point, selection);
}

struct miqt_array /* of QGlyphRun* */  QTextLine_glyphRuns1(const QTextLine* self, int from) {
	QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGlyphRun* */  QTextLine_glyphRuns2(const QTextLine* self, int from, int length) {
	QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from), static_cast<int>(length));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextLine_delete(QTextLine* self) {
	delete self;
}

void QTextLayout__FormatRange_delete(QTextLayout__FormatRange* self) {
	delete self;
}

