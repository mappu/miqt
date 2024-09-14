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
#include <QByteArray>
#include <cstring>
#include "qfontmetrics.h"
#include "gen_qfontmetrics.h"
#include "_cgo_export.h"

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

int QFontMetrics_Ascent(const QFontMetrics* self) {
	return self->ascent();
}

int QFontMetrics_CapHeight(const QFontMetrics* self) {
	return self->capHeight();
}

int QFontMetrics_Descent(const QFontMetrics* self) {
	return self->descent();
}

int QFontMetrics_Height(const QFontMetrics* self) {
	return self->height();
}

int QFontMetrics_Leading(const QFontMetrics* self) {
	return self->leading();
}

int QFontMetrics_LineSpacing(const QFontMetrics* self) {
	return self->lineSpacing();
}

int QFontMetrics_MinLeftBearing(const QFontMetrics* self) {
	return self->minLeftBearing();
}

int QFontMetrics_MinRightBearing(const QFontMetrics* self) {
	return self->minRightBearing();
}

int QFontMetrics_MaxWidth(const QFontMetrics* self) {
	return self->maxWidth();
}

int QFontMetrics_XHeight(const QFontMetrics* self) {
	return self->xHeight();
}

int QFontMetrics_AverageCharWidth(const QFontMetrics* self) {
	return self->averageCharWidth();
}

bool QFontMetrics_InFont(const QFontMetrics* self, QChar* param1) {
	return self->inFont(*param1);
}

bool QFontMetrics_InFontUcs4(const QFontMetrics* self, unsigned int ucs4) {
	return self->inFontUcs4(static_cast<uint>(ucs4));
}

int QFontMetrics_LeftBearing(const QFontMetrics* self, QChar* param1) {
	return self->leftBearing(*param1);
}

int QFontMetrics_RightBearing(const QFontMetrics* self, QChar* param1) {
	return self->rightBearing(*param1);
}

int QFontMetrics_Width(const QFontMetrics* self, struct miqt_string* param1) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	return self->width(param1_QString);
}

int QFontMetrics_Width2(const QFontMetrics* self, struct miqt_string* param1, int lenVal, int flags) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	return self->width(param1_QString, static_cast<int>(lenVal), static_cast<int>(flags));
}

int QFontMetrics_WidthWithQChar(const QFontMetrics* self, QChar* param1) {
	return self->width(*param1);
}

int QFontMetrics_HorizontalAdvance(const QFontMetrics* self, struct miqt_string* param1) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	return self->horizontalAdvance(param1_QString);
}

int QFontMetrics_HorizontalAdvanceWithQChar(const QFontMetrics* self, QChar* param1) {
	return self->horizontalAdvance(*param1);
}

int QFontMetrics_CharWidth(const QFontMetrics* self, struct miqt_string* str, int pos) {
	QString str_QString = QString::fromUtf8(&str->data, str->len);
	return self->charWidth(str_QString, static_cast<int>(pos));
}

QRect* QFontMetrics_BoundingRect(const QFontMetrics* self, QChar* param1) {
	QRect _ret = self->boundingRect(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRect* QFontMetrics_BoundingRectWithText(const QFontMetrics* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRect _ret = self->boundingRect(text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRect* QFontMetrics_BoundingRect2(const QFontMetrics* self, QRect* r, int flags, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRect _ret = self->boundingRect(*r, static_cast<int>(flags), text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRect* QFontMetrics_BoundingRect3(const QFontMetrics* self, int x, int y, int w, int h, int flags, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRect _ret = self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QSize* QFontMetrics_Size(const QFontMetrics* self, int flags, struct miqt_string* str) {
	QString str_QString = QString::fromUtf8(&str->data, str->len);
	QSize _ret = self->size(static_cast<int>(flags), str_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

QRect* QFontMetrics_TightBoundingRect(const QFontMetrics* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRect _ret = self->tightBoundingRect(text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

struct miqt_string* QFontMetrics_ElidedText(const QFontMetrics* self, struct miqt_string* text, uintptr_t mode, int width) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<int>(width));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QFontMetrics_UnderlinePos(const QFontMetrics* self) {
	return self->underlinePos();
}

int QFontMetrics_OverlinePos(const QFontMetrics* self) {
	return self->overlinePos();
}

int QFontMetrics_StrikeOutPos(const QFontMetrics* self) {
	return self->strikeOutPos();
}

int QFontMetrics_LineWidth(const QFontMetrics* self) {
	return self->lineWidth();
}

double QFontMetrics_FontDpi(const QFontMetrics* self) {
	return self->fontDpi();
}

bool QFontMetrics_OperatorEqual(const QFontMetrics* self, QFontMetrics* other) {
	return self->operator==(*other);
}

bool QFontMetrics_OperatorNotEqual(const QFontMetrics* self, QFontMetrics* other) {
	return self->operator!=(*other);
}

int QFontMetrics_Width22(const QFontMetrics* self, struct miqt_string* param1, int lenVal) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	return self->width(param1_QString, static_cast<int>(lenVal));
}

int QFontMetrics_HorizontalAdvance2(const QFontMetrics* self, struct miqt_string* param1, int lenVal) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	return self->horizontalAdvance(param1_QString, static_cast<int>(lenVal));
}

QRect* QFontMetrics_BoundingRect4(const QFontMetrics* self, QRect* r, int flags, struct miqt_string* text, int tabstops) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRect _ret = self->boundingRect(*r, static_cast<int>(flags), text_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRect* QFontMetrics_BoundingRect5(const QFontMetrics* self, QRect* r, int flags, struct miqt_string* text, int tabstops, int* tabarray) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRect _ret = self->boundingRect(*r, static_cast<int>(flags), text_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRect* QFontMetrics_BoundingRect7(const QFontMetrics* self, int x, int y, int w, int h, int flags, struct miqt_string* text, int tabstops) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRect _ret = self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRect* QFontMetrics_BoundingRect8(const QFontMetrics* self, int x, int y, int w, int h, int flags, struct miqt_string* text, int tabstops, int* tabarray) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRect _ret = self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QSize* QFontMetrics_Size3(const QFontMetrics* self, int flags, struct miqt_string* str, int tabstops) {
	QString str_QString = QString::fromUtf8(&str->data, str->len);
	QSize _ret = self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

QSize* QFontMetrics_Size4(const QFontMetrics* self, int flags, struct miqt_string* str, int tabstops, int* tabarray) {
	QString str_QString = QString::fromUtf8(&str->data, str->len);
	QSize _ret = self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

struct miqt_string* QFontMetrics_ElidedText4(const QFontMetrics* self, struct miqt_string* text, uintptr_t mode, int width, int flags) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<int>(width), static_cast<int>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

double QFontMetricsF_Ascent(const QFontMetricsF* self) {
	return self->ascent();
}

double QFontMetricsF_CapHeight(const QFontMetricsF* self) {
	return self->capHeight();
}

double QFontMetricsF_Descent(const QFontMetricsF* self) {
	return self->descent();
}

double QFontMetricsF_Height(const QFontMetricsF* self) {
	return self->height();
}

double QFontMetricsF_Leading(const QFontMetricsF* self) {
	return self->leading();
}

double QFontMetricsF_LineSpacing(const QFontMetricsF* self) {
	return self->lineSpacing();
}

double QFontMetricsF_MinLeftBearing(const QFontMetricsF* self) {
	return self->minLeftBearing();
}

double QFontMetricsF_MinRightBearing(const QFontMetricsF* self) {
	return self->minRightBearing();
}

double QFontMetricsF_MaxWidth(const QFontMetricsF* self) {
	return self->maxWidth();
}

double QFontMetricsF_XHeight(const QFontMetricsF* self) {
	return self->xHeight();
}

double QFontMetricsF_AverageCharWidth(const QFontMetricsF* self) {
	return self->averageCharWidth();
}

bool QFontMetricsF_InFont(const QFontMetricsF* self, QChar* param1) {
	return self->inFont(*param1);
}

bool QFontMetricsF_InFontUcs4(const QFontMetricsF* self, unsigned int ucs4) {
	return self->inFontUcs4(static_cast<uint>(ucs4));
}

double QFontMetricsF_LeftBearing(const QFontMetricsF* self, QChar* param1) {
	return self->leftBearing(*param1);
}

double QFontMetricsF_RightBearing(const QFontMetricsF* self, QChar* param1) {
	return self->rightBearing(*param1);
}

double QFontMetricsF_Width(const QFontMetricsF* self, struct miqt_string* stringVal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	return self->width(stringVal_QString);
}

double QFontMetricsF_WidthWithQChar(const QFontMetricsF* self, QChar* param1) {
	return self->width(*param1);
}

double QFontMetricsF_HorizontalAdvance(const QFontMetricsF* self, struct miqt_string* stringVal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	return self->horizontalAdvance(stringVal_QString);
}

double QFontMetricsF_HorizontalAdvanceWithQChar(const QFontMetricsF* self, QChar* param1) {
	return self->horizontalAdvance(*param1);
}

QRectF* QFontMetricsF_BoundingRect(const QFontMetricsF* self, struct miqt_string* stringVal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	QRectF _ret = self->boundingRect(stringVal_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QFontMetricsF_BoundingRectWithQChar(const QFontMetricsF* self, QChar* param1) {
	QRectF _ret = self->boundingRect(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QFontMetricsF_BoundingRect2(const QFontMetricsF* self, QRectF* r, int flags, struct miqt_string* stringVal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	QRectF _ret = self->boundingRect(*r, static_cast<int>(flags), stringVal_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QSizeF* QFontMetricsF_Size(const QFontMetricsF* self, int flags, struct miqt_string* str) {
	QString str_QString = QString::fromUtf8(&str->data, str->len);
	QSizeF _ret = self->size(static_cast<int>(flags), str_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(_ret));
}

QRectF* QFontMetricsF_TightBoundingRect(const QFontMetricsF* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRectF _ret = self->tightBoundingRect(text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

struct miqt_string* QFontMetricsF_ElidedText(const QFontMetricsF* self, struct miqt_string* text, uintptr_t mode, double width) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<qreal>(width));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

double QFontMetricsF_UnderlinePos(const QFontMetricsF* self) {
	return self->underlinePos();
}

double QFontMetricsF_OverlinePos(const QFontMetricsF* self) {
	return self->overlinePos();
}

double QFontMetricsF_StrikeOutPos(const QFontMetricsF* self) {
	return self->strikeOutPos();
}

double QFontMetricsF_LineWidth(const QFontMetricsF* self) {
	return self->lineWidth();
}

double QFontMetricsF_FontDpi(const QFontMetricsF* self) {
	return self->fontDpi();
}

bool QFontMetricsF_OperatorEqual(const QFontMetricsF* self, QFontMetricsF* other) {
	return self->operator==(*other);
}

bool QFontMetricsF_OperatorNotEqual(const QFontMetricsF* self, QFontMetricsF* other) {
	return self->operator!=(*other);
}

double QFontMetricsF_HorizontalAdvance2(const QFontMetricsF* self, struct miqt_string* stringVal, int length) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	return self->horizontalAdvance(stringVal_QString, static_cast<int>(length));
}

QRectF* QFontMetricsF_BoundingRect4(const QFontMetricsF* self, QRectF* r, int flags, struct miqt_string* stringVal, int tabstops) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	QRectF _ret = self->boundingRect(*r, static_cast<int>(flags), stringVal_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QFontMetricsF_BoundingRect5(const QFontMetricsF* self, QRectF* r, int flags, struct miqt_string* stringVal, int tabstops, int* tabarray) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	QRectF _ret = self->boundingRect(*r, static_cast<int>(flags), stringVal_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QSizeF* QFontMetricsF_Size3(const QFontMetricsF* self, int flags, struct miqt_string* str, int tabstops) {
	QString str_QString = QString::fromUtf8(&str->data, str->len);
	QSizeF _ret = self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(_ret));
}

QSizeF* QFontMetricsF_Size4(const QFontMetricsF* self, int flags, struct miqt_string* str, int tabstops, int* tabarray) {
	QString str_QString = QString::fromUtf8(&str->data, str->len);
	QSizeF _ret = self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(_ret));
}

struct miqt_string* QFontMetricsF_ElidedText4(const QFontMetricsF* self, struct miqt_string* text, uintptr_t mode, double width, int flags) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<qreal>(width), static_cast<int>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QFontMetricsF_Delete(QFontMetricsF* self) {
	delete self;
}

