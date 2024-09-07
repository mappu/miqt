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
	return const_cast<const QFontMetrics*>(self)->ascent();
}

int QFontMetrics_CapHeight(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->capHeight();
}

int QFontMetrics_Descent(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->descent();
}

int QFontMetrics_Height(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->height();
}

int QFontMetrics_Leading(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->leading();
}

int QFontMetrics_LineSpacing(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->lineSpacing();
}

int QFontMetrics_MinLeftBearing(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->minLeftBearing();
}

int QFontMetrics_MinRightBearing(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->minRightBearing();
}

int QFontMetrics_MaxWidth(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->maxWidth();
}

int QFontMetrics_XHeight(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->xHeight();
}

int QFontMetrics_AverageCharWidth(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->averageCharWidth();
}

bool QFontMetrics_InFont(QFontMetrics* self, QChar* param1) {
	return const_cast<const QFontMetrics*>(self)->inFont(*param1);
}

bool QFontMetrics_InFontUcs4(QFontMetrics* self, unsigned int ucs4) {
	return const_cast<const QFontMetrics*>(self)->inFontUcs4(static_cast<uint>(ucs4));
}

int QFontMetrics_LeftBearing(QFontMetrics* self, QChar* param1) {
	return const_cast<const QFontMetrics*>(self)->leftBearing(*param1);
}

int QFontMetrics_RightBearing(QFontMetrics* self, QChar* param1) {
	return const_cast<const QFontMetrics*>(self)->rightBearing(*param1);
}

int QFontMetrics_Width(QFontMetrics* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return const_cast<const QFontMetrics*>(self)->width(param1_QString);
}

int QFontMetrics_Width2(QFontMetrics* self, const char* param1, size_t param1_Strlen, int lenVal, int flags) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return const_cast<const QFontMetrics*>(self)->width(param1_QString, static_cast<int>(lenVal), static_cast<int>(flags));
}

int QFontMetrics_WidthWithQChar(QFontMetrics* self, QChar* param1) {
	return const_cast<const QFontMetrics*>(self)->width(*param1);
}

int QFontMetrics_HorizontalAdvance(QFontMetrics* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return const_cast<const QFontMetrics*>(self)->horizontalAdvance(param1_QString);
}

int QFontMetrics_HorizontalAdvanceWithQChar(QFontMetrics* self, QChar* param1) {
	return const_cast<const QFontMetrics*>(self)->horizontalAdvance(*param1);
}

int QFontMetrics_CharWidth(QFontMetrics* self, const char* str, size_t str_Strlen, int pos) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	return const_cast<const QFontMetrics*>(self)->charWidth(str_QString, static_cast<int>(pos));
}

QRect* QFontMetrics_BoundingRect(QFontMetrics* self, QChar* param1) {
	QRect ret = const_cast<const QFontMetrics*>(self)->boundingRect(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QFontMetrics_BoundingRectWithText(QFontMetrics* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = const_cast<const QFontMetrics*>(self)->boundingRect(text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QFontMetrics_BoundingRect2(QFontMetrics* self, QRect* r, int flags, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = const_cast<const QFontMetrics*>(self)->boundingRect(*r, static_cast<int>(flags), text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QFontMetrics_BoundingRect3(QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = const_cast<const QFontMetrics*>(self)->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QSize* QFontMetrics_Size(QFontMetrics* self, int flags, const char* str, size_t str_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QSize ret = const_cast<const QFontMetrics*>(self)->size(static_cast<int>(flags), str_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QFontMetrics_TightBoundingRect(QFontMetrics* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = const_cast<const QFontMetrics*>(self)->tightBoundingRect(text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QFontMetrics_ElidedText(QFontMetrics* self, const char* text, size_t text_Strlen, uintptr_t mode, int width, char** _out, int* _out_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString ret = const_cast<const QFontMetrics*>(self)->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<int>(width));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QFontMetrics_UnderlinePos(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->underlinePos();
}

int QFontMetrics_OverlinePos(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->overlinePos();
}

int QFontMetrics_StrikeOutPos(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->strikeOutPos();
}

int QFontMetrics_LineWidth(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->lineWidth();
}

double QFontMetrics_FontDpi(QFontMetrics* self) {
	return const_cast<const QFontMetrics*>(self)->fontDpi();
}

bool QFontMetrics_OperatorEqual(QFontMetrics* self, QFontMetrics* other) {
	return const_cast<const QFontMetrics*>(self)->operator==(*other);
}

bool QFontMetrics_OperatorNotEqual(QFontMetrics* self, QFontMetrics* other) {
	return const_cast<const QFontMetrics*>(self)->operator!=(*other);
}

int QFontMetrics_Width22(QFontMetrics* self, const char* param1, size_t param1_Strlen, int lenVal) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return const_cast<const QFontMetrics*>(self)->width(param1_QString, static_cast<int>(lenVal));
}

int QFontMetrics_HorizontalAdvance2(QFontMetrics* self, const char* param1, size_t param1_Strlen, int lenVal) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return const_cast<const QFontMetrics*>(self)->horizontalAdvance(param1_QString, static_cast<int>(lenVal));
}

QRect* QFontMetrics_BoundingRect4(QFontMetrics* self, QRect* r, int flags, const char* text, size_t text_Strlen, int tabstops) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = const_cast<const QFontMetrics*>(self)->boundingRect(*r, static_cast<int>(flags), text_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QFontMetrics_BoundingRect5(QFontMetrics* self, QRect* r, int flags, const char* text, size_t text_Strlen, int tabstops, int* tabarray) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = const_cast<const QFontMetrics*>(self)->boundingRect(*r, static_cast<int>(flags), text_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QFontMetrics_BoundingRect7(QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen, int tabstops) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = const_cast<const QFontMetrics*>(self)->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QFontMetrics_BoundingRect8(QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen, int tabstops, int* tabarray) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = const_cast<const QFontMetrics*>(self)->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QSize* QFontMetrics_Size3(QFontMetrics* self, int flags, const char* str, size_t str_Strlen, int tabstops) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QSize ret = const_cast<const QFontMetrics*>(self)->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QFontMetrics_Size4(QFontMetrics* self, int flags, const char* str, size_t str_Strlen, int tabstops, int* tabarray) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QSize ret = const_cast<const QFontMetrics*>(self)->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QFontMetrics_ElidedText4(QFontMetrics* self, const char* text, size_t text_Strlen, uintptr_t mode, int width, int flags, char** _out, int* _out_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString ret = const_cast<const QFontMetrics*>(self)->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<int>(width), static_cast<int>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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
	return const_cast<const QFontMetricsF*>(self)->ascent();
}

double QFontMetricsF_CapHeight(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->capHeight();
}

double QFontMetricsF_Descent(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->descent();
}

double QFontMetricsF_Height(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->height();
}

double QFontMetricsF_Leading(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->leading();
}

double QFontMetricsF_LineSpacing(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->lineSpacing();
}

double QFontMetricsF_MinLeftBearing(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->minLeftBearing();
}

double QFontMetricsF_MinRightBearing(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->minRightBearing();
}

double QFontMetricsF_MaxWidth(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->maxWidth();
}

double QFontMetricsF_XHeight(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->xHeight();
}

double QFontMetricsF_AverageCharWidth(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->averageCharWidth();
}

bool QFontMetricsF_InFont(QFontMetricsF* self, QChar* param1) {
	return const_cast<const QFontMetricsF*>(self)->inFont(*param1);
}

bool QFontMetricsF_InFontUcs4(QFontMetricsF* self, unsigned int ucs4) {
	return const_cast<const QFontMetricsF*>(self)->inFontUcs4(static_cast<uint>(ucs4));
}

double QFontMetricsF_LeftBearing(QFontMetricsF* self, QChar* param1) {
	return const_cast<const QFontMetricsF*>(self)->leftBearing(*param1);
}

double QFontMetricsF_RightBearing(QFontMetricsF* self, QChar* param1) {
	return const_cast<const QFontMetricsF*>(self)->rightBearing(*param1);
}

double QFontMetricsF_Width(QFontMetricsF* self, const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	return const_cast<const QFontMetricsF*>(self)->width(stringVal_QString);
}

double QFontMetricsF_WidthWithQChar(QFontMetricsF* self, QChar* param1) {
	return const_cast<const QFontMetricsF*>(self)->width(*param1);
}

double QFontMetricsF_HorizontalAdvance(QFontMetricsF* self, const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	return const_cast<const QFontMetricsF*>(self)->horizontalAdvance(stringVal_QString);
}

double QFontMetricsF_HorizontalAdvanceWithQChar(QFontMetricsF* self, QChar* param1) {
	return const_cast<const QFontMetricsF*>(self)->horizontalAdvance(*param1);
}

QRectF* QFontMetricsF_BoundingRect(QFontMetricsF* self, const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QRectF ret = const_cast<const QFontMetricsF*>(self)->boundingRect(stringVal_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QFontMetricsF_BoundingRectWithQChar(QFontMetricsF* self, QChar* param1) {
	QRectF ret = const_cast<const QFontMetricsF*>(self)->boundingRect(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QFontMetricsF_BoundingRect2(QFontMetricsF* self, QRectF* r, int flags, const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QRectF ret = const_cast<const QFontMetricsF*>(self)->boundingRect(*r, static_cast<int>(flags), stringVal_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QSizeF* QFontMetricsF_Size(QFontMetricsF* self, int flags, const char* str, size_t str_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QSizeF ret = const_cast<const QFontMetricsF*>(self)->size(static_cast<int>(flags), str_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QRectF* QFontMetricsF_TightBoundingRect(QFontMetricsF* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRectF ret = const_cast<const QFontMetricsF*>(self)->tightBoundingRect(text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QFontMetricsF_ElidedText(QFontMetricsF* self, const char* text, size_t text_Strlen, uintptr_t mode, double width, char** _out, int* _out_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString ret = const_cast<const QFontMetricsF*>(self)->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<qreal>(width));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

double QFontMetricsF_UnderlinePos(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->underlinePos();
}

double QFontMetricsF_OverlinePos(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->overlinePos();
}

double QFontMetricsF_StrikeOutPos(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->strikeOutPos();
}

double QFontMetricsF_LineWidth(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->lineWidth();
}

double QFontMetricsF_FontDpi(QFontMetricsF* self) {
	return const_cast<const QFontMetricsF*>(self)->fontDpi();
}

bool QFontMetricsF_OperatorEqual(QFontMetricsF* self, QFontMetricsF* other) {
	return const_cast<const QFontMetricsF*>(self)->operator==(*other);
}

bool QFontMetricsF_OperatorNotEqual(QFontMetricsF* self, QFontMetricsF* other) {
	return const_cast<const QFontMetricsF*>(self)->operator!=(*other);
}

double QFontMetricsF_HorizontalAdvance2(QFontMetricsF* self, const char* stringVal, size_t stringVal_Strlen, int length) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	return const_cast<const QFontMetricsF*>(self)->horizontalAdvance(stringVal_QString, static_cast<int>(length));
}

QRectF* QFontMetricsF_BoundingRect4(QFontMetricsF* self, QRectF* r, int flags, const char* stringVal, size_t stringVal_Strlen, int tabstops) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QRectF ret = const_cast<const QFontMetricsF*>(self)->boundingRect(*r, static_cast<int>(flags), stringVal_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QFontMetricsF_BoundingRect5(QFontMetricsF* self, QRectF* r, int flags, const char* stringVal, size_t stringVal_Strlen, int tabstops, int* tabarray) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QRectF ret = const_cast<const QFontMetricsF*>(self)->boundingRect(*r, static_cast<int>(flags), stringVal_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QSizeF* QFontMetricsF_Size3(QFontMetricsF* self, int flags, const char* str, size_t str_Strlen, int tabstops) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QSizeF ret = const_cast<const QFontMetricsF*>(self)->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QFontMetricsF_Size4(QFontMetricsF* self, int flags, const char* str, size_t str_Strlen, int tabstops, int* tabarray) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QSizeF ret = const_cast<const QFontMetricsF*>(self)->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QFontMetricsF_ElidedText4(QFontMetricsF* self, const char* text, size_t text_Strlen, uintptr_t mode, double width, int flags, char** _out, int* _out_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString ret = const_cast<const QFontMetricsF*>(self)->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<qreal>(width), static_cast<int>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontMetricsF_Delete(QFontMetricsF* self) {
	delete self;
}

