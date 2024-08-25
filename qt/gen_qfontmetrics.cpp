#include "gen_qfontmetrics.h"
#include "qfontmetrics.h"

#include <QChar>
#include <QFont>
#include <QFontMetrics>
#include <QFontMetricsF>
#include <QPaintDevice>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QSizeF>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFontMetrics* QFontMetrics_new(QFont* param1) {
	return new QFontMetrics(*param1);
}

QFontMetrics* QFontMetrics_new2(QFont* font, QPaintDevice* pd) {
	return new QFontMetrics(*font, pd);
}

QFontMetrics* QFontMetrics_new3(QFontMetrics* param1) {
	return new QFontMetrics(*param1);
}

void QFontMetrics_OperatorAssign(QFontMetrics* self, QFontMetrics* param1) {
	self->operator=(*param1);
}

void QFontMetrics_Swap(QFontMetrics* self, QFontMetrics* other) {
	self->swap(*other);
}

int QFontMetrics_Ascent(QFontMetrics* self) {
	return self->ascent();
}

int QFontMetrics_CapHeight(QFontMetrics* self) {
	return self->capHeight();
}

int QFontMetrics_Descent(QFontMetrics* self) {
	return self->descent();
}

int QFontMetrics_Height(QFontMetrics* self) {
	return self->height();
}

int QFontMetrics_Leading(QFontMetrics* self) {
	return self->leading();
}

int QFontMetrics_LineSpacing(QFontMetrics* self) {
	return self->lineSpacing();
}

int QFontMetrics_MinLeftBearing(QFontMetrics* self) {
	return self->minLeftBearing();
}

int QFontMetrics_MinRightBearing(QFontMetrics* self) {
	return self->minRightBearing();
}

int QFontMetrics_MaxWidth(QFontMetrics* self) {
	return self->maxWidth();
}

int QFontMetrics_XHeight(QFontMetrics* self) {
	return self->xHeight();
}

int QFontMetrics_AverageCharWidth(QFontMetrics* self) {
	return self->averageCharWidth();
}

bool QFontMetrics_InFont(QFontMetrics* self, QChar* param1) {
	return self->inFont(*param1);
}

bool QFontMetrics_InFontUcs4(QFontMetrics* self, unsigned int ucs4) {
	return self->inFontUcs4(static_cast<uint>(ucs4));
}

int QFontMetrics_LeftBearing(QFontMetrics* self, QChar* param1) {
	return self->leftBearing(*param1);
}

int QFontMetrics_RightBearing(QFontMetrics* self, QChar* param1) {
	return self->rightBearing(*param1);
}

int QFontMetrics_Width(QFontMetrics* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return self->width(param1_QString);
}

int QFontMetrics_Width2(QFontMetrics* self, const char* param1, size_t param1_Strlen, int lenVal, int flags) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return self->width(param1_QString, static_cast<int>(lenVal), static_cast<int>(flags));
}

int QFontMetrics_WidthWithQChar(QFontMetrics* self, QChar* param1) {
	return self->width(*param1);
}

int QFontMetrics_HorizontalAdvance(QFontMetrics* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return self->horizontalAdvance(param1_QString);
}

int QFontMetrics_HorizontalAdvanceWithQChar(QFontMetrics* self, QChar* param1) {
	return self->horizontalAdvance(*param1);
}

int QFontMetrics_CharWidth(QFontMetrics* self, const char* str, size_t str_Strlen, int pos) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	return self->charWidth(str_QString, static_cast<int>(pos));
}

QRect* QFontMetrics_BoundingRect(QFontMetrics* self, QChar* param1) {
	QRect ret = self->boundingRect(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QFontMetrics_BoundingRectWithText(QFontMetrics* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = self->boundingRect(text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QFontMetrics_BoundingRect2(QFontMetrics* self, QRect* r, int flags, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = self->boundingRect(*r, static_cast<int>(flags), text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QFontMetrics_BoundingRect3(QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QSize* QFontMetrics_Size(QFontMetrics* self, int flags, const char* str, size_t str_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QSize ret = self->size(static_cast<int>(flags), str_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QFontMetrics_TightBoundingRect(QFontMetrics* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = self->tightBoundingRect(text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

int QFontMetrics_UnderlinePos(QFontMetrics* self) {
	return self->underlinePos();
}

int QFontMetrics_OverlinePos(QFontMetrics* self) {
	return self->overlinePos();
}

int QFontMetrics_StrikeOutPos(QFontMetrics* self) {
	return self->strikeOutPos();
}

int QFontMetrics_LineWidth(QFontMetrics* self) {
	return self->lineWidth();
}

double QFontMetrics_FontDpi(QFontMetrics* self) {
	return self->fontDpi();
}

bool QFontMetrics_OperatorEqual(QFontMetrics* self, QFontMetrics* other) {
	return self->operator==(*other);
}

bool QFontMetrics_OperatorNotEqual(QFontMetrics* self, QFontMetrics* other) {
	return self->operator!=(*other);
}

int QFontMetrics_Width22(QFontMetrics* self, const char* param1, size_t param1_Strlen, int lenVal) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return self->width(param1_QString, static_cast<int>(lenVal));
}

int QFontMetrics_HorizontalAdvance2(QFontMetrics* self, const char* param1, size_t param1_Strlen, int lenVal) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return self->horizontalAdvance(param1_QString, static_cast<int>(lenVal));
}

QRect* QFontMetrics_BoundingRect4(QFontMetrics* self, QRect* r, int flags, const char* text, size_t text_Strlen, int tabstops) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = self->boundingRect(*r, static_cast<int>(flags), text_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QFontMetrics_BoundingRect5(QFontMetrics* self, QRect* r, int flags, const char* text, size_t text_Strlen, int tabstops, int* tabarray) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = self->boundingRect(*r, static_cast<int>(flags), text_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QFontMetrics_BoundingRect7(QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen, int tabstops) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QFontMetrics_BoundingRect8(QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen, int tabstops, int* tabarray) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QSize* QFontMetrics_Size3(QFontMetrics* self, int flags, const char* str, size_t str_Strlen, int tabstops) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QSize ret = self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QFontMetrics_Size4(QFontMetrics* self, int flags, const char* str, size_t str_Strlen, int tabstops, int* tabarray) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QSize ret = self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QFontMetrics_Delete(QFontMetrics* self) {
	delete self;
}

QFontMetricsF* QFontMetricsF_new(QFont* font) {
	return new QFontMetricsF(*font);
}

QFontMetricsF* QFontMetricsF_new2(QFont* font, QPaintDevice* pd) {
	return new QFontMetricsF(*font, pd);
}

QFontMetricsF* QFontMetricsF_new3(QFontMetrics* param1) {
	return new QFontMetricsF(*param1);
}

QFontMetricsF* QFontMetricsF_new4(QFontMetricsF* param1) {
	return new QFontMetricsF(*param1);
}

void QFontMetricsF_OperatorAssign(QFontMetricsF* self, QFontMetricsF* param1) {
	self->operator=(*param1);
}

void QFontMetricsF_OperatorAssignWithQFontMetrics(QFontMetricsF* self, QFontMetrics* param1) {
	self->operator=(*param1);
}

void QFontMetricsF_Swap(QFontMetricsF* self, QFontMetricsF* other) {
	self->swap(*other);
}

double QFontMetricsF_Ascent(QFontMetricsF* self) {
	return self->ascent();
}

double QFontMetricsF_CapHeight(QFontMetricsF* self) {
	return self->capHeight();
}

double QFontMetricsF_Descent(QFontMetricsF* self) {
	return self->descent();
}

double QFontMetricsF_Height(QFontMetricsF* self) {
	return self->height();
}

double QFontMetricsF_Leading(QFontMetricsF* self) {
	return self->leading();
}

double QFontMetricsF_LineSpacing(QFontMetricsF* self) {
	return self->lineSpacing();
}

double QFontMetricsF_MinLeftBearing(QFontMetricsF* self) {
	return self->minLeftBearing();
}

double QFontMetricsF_MinRightBearing(QFontMetricsF* self) {
	return self->minRightBearing();
}

double QFontMetricsF_MaxWidth(QFontMetricsF* self) {
	return self->maxWidth();
}

double QFontMetricsF_XHeight(QFontMetricsF* self) {
	return self->xHeight();
}

double QFontMetricsF_AverageCharWidth(QFontMetricsF* self) {
	return self->averageCharWidth();
}

bool QFontMetricsF_InFont(QFontMetricsF* self, QChar* param1) {
	return self->inFont(*param1);
}

bool QFontMetricsF_InFontUcs4(QFontMetricsF* self, unsigned int ucs4) {
	return self->inFontUcs4(static_cast<uint>(ucs4));
}

double QFontMetricsF_LeftBearing(QFontMetricsF* self, QChar* param1) {
	return self->leftBearing(*param1);
}

double QFontMetricsF_RightBearing(QFontMetricsF* self, QChar* param1) {
	return self->rightBearing(*param1);
}

double QFontMetricsF_Width(QFontMetricsF* self, const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	return self->width(stringVal_QString);
}

double QFontMetricsF_WidthWithQChar(QFontMetricsF* self, QChar* param1) {
	return self->width(*param1);
}

double QFontMetricsF_HorizontalAdvance(QFontMetricsF* self, const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	return self->horizontalAdvance(stringVal_QString);
}

double QFontMetricsF_HorizontalAdvanceWithQChar(QFontMetricsF* self, QChar* param1) {
	return self->horizontalAdvance(*param1);
}

QRectF* QFontMetricsF_BoundingRect(QFontMetricsF* self, const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QRectF ret = self->boundingRect(stringVal_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QFontMetricsF_BoundingRectWithQChar(QFontMetricsF* self, QChar* param1) {
	QRectF ret = self->boundingRect(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QFontMetricsF_BoundingRect2(QFontMetricsF* self, QRectF* r, int flags, const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QRectF ret = self->boundingRect(*r, static_cast<int>(flags), stringVal_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QSizeF* QFontMetricsF_Size(QFontMetricsF* self, int flags, const char* str, size_t str_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QSizeF ret = self->size(static_cast<int>(flags), str_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QRectF* QFontMetricsF_TightBoundingRect(QFontMetricsF* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRectF ret = self->tightBoundingRect(text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

double QFontMetricsF_UnderlinePos(QFontMetricsF* self) {
	return self->underlinePos();
}

double QFontMetricsF_OverlinePos(QFontMetricsF* self) {
	return self->overlinePos();
}

double QFontMetricsF_StrikeOutPos(QFontMetricsF* self) {
	return self->strikeOutPos();
}

double QFontMetricsF_LineWidth(QFontMetricsF* self) {
	return self->lineWidth();
}

double QFontMetricsF_FontDpi(QFontMetricsF* self) {
	return self->fontDpi();
}

bool QFontMetricsF_OperatorEqual(QFontMetricsF* self, QFontMetricsF* other) {
	return self->operator==(*other);
}

bool QFontMetricsF_OperatorNotEqual(QFontMetricsF* self, QFontMetricsF* other) {
	return self->operator!=(*other);
}

double QFontMetricsF_HorizontalAdvance2(QFontMetricsF* self, const char* stringVal, size_t stringVal_Strlen, int length) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	return self->horizontalAdvance(stringVal_QString, static_cast<int>(length));
}

QRectF* QFontMetricsF_BoundingRect4(QFontMetricsF* self, QRectF* r, int flags, const char* stringVal, size_t stringVal_Strlen, int tabstops) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QRectF ret = self->boundingRect(*r, static_cast<int>(flags), stringVal_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QFontMetricsF_BoundingRect5(QFontMetricsF* self, QRectF* r, int flags, const char* stringVal, size_t stringVal_Strlen, int tabstops, int* tabarray) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QRectF ret = self->boundingRect(*r, static_cast<int>(flags), stringVal_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QSizeF* QFontMetricsF_Size3(QFontMetricsF* self, int flags, const char* str, size_t str_Strlen, int tabstops) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QSizeF ret = self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QFontMetricsF_Size4(QFontMetricsF* self, int flags, const char* str, size_t str_Strlen, int tabstops, int* tabarray) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QSizeF ret = self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QFontMetricsF_Delete(QFontMetricsF* self) {
	delete self;
}

