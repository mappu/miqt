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
#include <QTextOption>
#include <qfontmetrics.h>
#include "gen_qfontmetrics.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QFontMetrics* QFontMetrics_new(QFont* param1) {
	return new QFontMetrics(*param1);
}

QFontMetrics* QFontMetrics_new2(QFont* font, QPaintDevice* pd) {
	return new QFontMetrics(*font, pd);
}

QFontMetrics* QFontMetrics_new3(QFontMetrics* param1) {
	return new QFontMetrics(*param1);
}

void QFontMetrics_operatorAssign(QFontMetrics* self, QFontMetrics* param1) {
	self->operator=(*param1);
}

void QFontMetrics_swap(QFontMetrics* self, QFontMetrics* other) {
	self->swap(*other);
}

int QFontMetrics_ascent(const QFontMetrics* self) {
	return self->ascent();
}

int QFontMetrics_capHeight(const QFontMetrics* self) {
	return self->capHeight();
}

int QFontMetrics_descent(const QFontMetrics* self) {
	return self->descent();
}

int QFontMetrics_height(const QFontMetrics* self) {
	return self->height();
}

int QFontMetrics_leading(const QFontMetrics* self) {
	return self->leading();
}

int QFontMetrics_lineSpacing(const QFontMetrics* self) {
	return self->lineSpacing();
}

int QFontMetrics_minLeftBearing(const QFontMetrics* self) {
	return self->minLeftBearing();
}

int QFontMetrics_minRightBearing(const QFontMetrics* self) {
	return self->minRightBearing();
}

int QFontMetrics_maxWidth(const QFontMetrics* self) {
	return self->maxWidth();
}

int QFontMetrics_xHeight(const QFontMetrics* self) {
	return self->xHeight();
}

int QFontMetrics_averageCharWidth(const QFontMetrics* self) {
	return self->averageCharWidth();
}

bool QFontMetrics_inFont(const QFontMetrics* self, QChar* param1) {
	return self->inFont(*param1);
}

bool QFontMetrics_inFontUcs4(const QFontMetrics* self, unsigned int ucs4) {
	return self->inFontUcs4(static_cast<uint>(ucs4));
}

int QFontMetrics_leftBearing(const QFontMetrics* self, QChar* param1) {
	return self->leftBearing(*param1);
}

int QFontMetrics_rightBearing(const QFontMetrics* self, QChar* param1) {
	return self->rightBearing(*param1);
}

int QFontMetrics_horizontalAdvance(const QFontMetrics* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->horizontalAdvance(param1_QString);
}

int QFontMetrics_horizontalAdvance2(const QFontMetrics* self, struct miqt_string param1, QTextOption* textOption) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->horizontalAdvance(param1_QString, *textOption);
}

int QFontMetrics_horizontalAdvanceWithQChar(const QFontMetrics* self, QChar* param1) {
	return self->horizontalAdvance(*param1);
}

QRect* QFontMetrics_boundingRect(const QFontMetrics* self, QChar* param1) {
	return new QRect(self->boundingRect(*param1));
}

QRect* QFontMetrics_boundingRectWithText(const QFontMetrics* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(text_QString));
}

QRect* QFontMetrics_boundingRect2(const QFontMetrics* self, struct miqt_string text, QTextOption* textOption) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(text_QString, *textOption));
}

QRect* QFontMetrics_boundingRect3(const QFontMetrics* self, QRect* r, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(*r, static_cast<int>(flags), text_QString));
}

QRect* QFontMetrics_boundingRect4(const QFontMetrics* self, int x, int y, int w, int h, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString));
}

QSize* QFontMetrics_size(const QFontMetrics* self, int flags, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QSize(self->size(static_cast<int>(flags), str_QString));
}

QRect* QFontMetrics_tightBoundingRect(const QFontMetrics* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->tightBoundingRect(text_QString));
}

QRect* QFontMetrics_tightBoundingRect2(const QFontMetrics* self, struct miqt_string text, QTextOption* textOption) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->tightBoundingRect(text_QString, *textOption));
}

struct miqt_string QFontMetrics_elidedText(const QFontMetrics* self, struct miqt_string text, int mode, int width) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<int>(width));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QFontMetrics_underlinePos(const QFontMetrics* self) {
	return self->underlinePos();
}

int QFontMetrics_overlinePos(const QFontMetrics* self) {
	return self->overlinePos();
}

int QFontMetrics_strikeOutPos(const QFontMetrics* self) {
	return self->strikeOutPos();
}

int QFontMetrics_lineWidth(const QFontMetrics* self) {
	return self->lineWidth();
}

double QFontMetrics_fontDpi(const QFontMetrics* self) {
	qreal _ret = self->fontDpi();
	return static_cast<double>(_ret);
}

bool QFontMetrics_operatorEqual(const QFontMetrics* self, QFontMetrics* other) {
	return (*self == *other);
}

bool QFontMetrics_operatorNotEqual(const QFontMetrics* self, QFontMetrics* other) {
	return (*self != *other);
}

int QFontMetrics_horizontalAdvance22(const QFontMetrics* self, struct miqt_string param1, int len) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->horizontalAdvance(param1_QString, static_cast<int>(len));
}

QRect* QFontMetrics_boundingRect42(const QFontMetrics* self, QRect* r, int flags, struct miqt_string text, int tabstops) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(*r, static_cast<int>(flags), text_QString, static_cast<int>(tabstops)));
}

QRect* QFontMetrics_boundingRect5(const QFontMetrics* self, QRect* r, int flags, struct miqt_string text, int tabstops, int* tabarray) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(*r, static_cast<int>(flags), text_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray)));
}

QRect* QFontMetrics_boundingRect7(const QFontMetrics* self, int x, int y, int w, int h, int flags, struct miqt_string text, int tabstops) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, static_cast<int>(tabstops)));
}

QRect* QFontMetrics_boundingRect8(const QFontMetrics* self, int x, int y, int w, int h, int flags, struct miqt_string text, int tabstops, int* tabarray) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray)));
}

QSize* QFontMetrics_size3(const QFontMetrics* self, int flags, struct miqt_string str, int tabstops) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QSize(self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops)));
}

QSize* QFontMetrics_size4(const QFontMetrics* self, int flags, struct miqt_string str, int tabstops, int* tabarray) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QSize(self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray)));
}

struct miqt_string QFontMetrics_elidedText4(const QFontMetrics* self, struct miqt_string text, int mode, int width, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<int>(width), static_cast<int>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontMetrics_delete(QFontMetrics* self) {
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

void QFontMetricsF_operatorAssign(QFontMetricsF* self, QFontMetricsF* param1) {
	self->operator=(*param1);
}

void QFontMetricsF_operatorAssignWithQFontMetrics(QFontMetricsF* self, QFontMetrics* param1) {
	self->operator=(*param1);
}

void QFontMetricsF_swap(QFontMetricsF* self, QFontMetricsF* other) {
	self->swap(*other);
}

double QFontMetricsF_ascent(const QFontMetricsF* self) {
	qreal _ret = self->ascent();
	return static_cast<double>(_ret);
}

double QFontMetricsF_capHeight(const QFontMetricsF* self) {
	qreal _ret = self->capHeight();
	return static_cast<double>(_ret);
}

double QFontMetricsF_descent(const QFontMetricsF* self) {
	qreal _ret = self->descent();
	return static_cast<double>(_ret);
}

double QFontMetricsF_height(const QFontMetricsF* self) {
	qreal _ret = self->height();
	return static_cast<double>(_ret);
}

double QFontMetricsF_leading(const QFontMetricsF* self) {
	qreal _ret = self->leading();
	return static_cast<double>(_ret);
}

double QFontMetricsF_lineSpacing(const QFontMetricsF* self) {
	qreal _ret = self->lineSpacing();
	return static_cast<double>(_ret);
}

double QFontMetricsF_minLeftBearing(const QFontMetricsF* self) {
	qreal _ret = self->minLeftBearing();
	return static_cast<double>(_ret);
}

double QFontMetricsF_minRightBearing(const QFontMetricsF* self) {
	qreal _ret = self->minRightBearing();
	return static_cast<double>(_ret);
}

double QFontMetricsF_maxWidth(const QFontMetricsF* self) {
	qreal _ret = self->maxWidth();
	return static_cast<double>(_ret);
}

double QFontMetricsF_xHeight(const QFontMetricsF* self) {
	qreal _ret = self->xHeight();
	return static_cast<double>(_ret);
}

double QFontMetricsF_averageCharWidth(const QFontMetricsF* self) {
	qreal _ret = self->averageCharWidth();
	return static_cast<double>(_ret);
}

bool QFontMetricsF_inFont(const QFontMetricsF* self, QChar* param1) {
	return self->inFont(*param1);
}

bool QFontMetricsF_inFontUcs4(const QFontMetricsF* self, unsigned int ucs4) {
	return self->inFontUcs4(static_cast<uint>(ucs4));
}

double QFontMetricsF_leftBearing(const QFontMetricsF* self, QChar* param1) {
	qreal _ret = self->leftBearing(*param1);
	return static_cast<double>(_ret);
}

double QFontMetricsF_rightBearing(const QFontMetricsF* self, QChar* param1) {
	qreal _ret = self->rightBearing(*param1);
	return static_cast<double>(_ret);
}

double QFontMetricsF_horizontalAdvance(const QFontMetricsF* self, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	qreal _ret = self->horizontalAdvance(string_QString);
	return static_cast<double>(_ret);
}

double QFontMetricsF_horizontalAdvanceWithQChar(const QFontMetricsF* self, QChar* param1) {
	qreal _ret = self->horizontalAdvance(*param1);
	return static_cast<double>(_ret);
}

double QFontMetricsF_horizontalAdvance2(const QFontMetricsF* self, struct miqt_string string, QTextOption* textOption) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	qreal _ret = self->horizontalAdvance(string_QString, *textOption);
	return static_cast<double>(_ret);
}

QRectF* QFontMetricsF_boundingRect(const QFontMetricsF* self, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QRectF(self->boundingRect(string_QString));
}

QRectF* QFontMetricsF_boundingRect2(const QFontMetricsF* self, struct miqt_string text, QTextOption* textOption) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRectF(self->boundingRect(text_QString, *textOption));
}

QRectF* QFontMetricsF_boundingRectWithQChar(const QFontMetricsF* self, QChar* param1) {
	return new QRectF(self->boundingRect(*param1));
}

QRectF* QFontMetricsF_boundingRect3(const QFontMetricsF* self, QRectF* r, int flags, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QRectF(self->boundingRect(*r, static_cast<int>(flags), string_QString));
}

QSizeF* QFontMetricsF_size(const QFontMetricsF* self, int flags, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QSizeF(self->size(static_cast<int>(flags), str_QString));
}

QRectF* QFontMetricsF_tightBoundingRect(const QFontMetricsF* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRectF(self->tightBoundingRect(text_QString));
}

QRectF* QFontMetricsF_tightBoundingRect2(const QFontMetricsF* self, struct miqt_string text, QTextOption* textOption) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRectF(self->tightBoundingRect(text_QString, *textOption));
}

struct miqt_string QFontMetricsF_elidedText(const QFontMetricsF* self, struct miqt_string text, int mode, double width) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<qreal>(width));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QFontMetricsF_underlinePos(const QFontMetricsF* self) {
	qreal _ret = self->underlinePos();
	return static_cast<double>(_ret);
}

double QFontMetricsF_overlinePos(const QFontMetricsF* self) {
	qreal _ret = self->overlinePos();
	return static_cast<double>(_ret);
}

double QFontMetricsF_strikeOutPos(const QFontMetricsF* self) {
	qreal _ret = self->strikeOutPos();
	return static_cast<double>(_ret);
}

double QFontMetricsF_lineWidth(const QFontMetricsF* self) {
	qreal _ret = self->lineWidth();
	return static_cast<double>(_ret);
}

double QFontMetricsF_fontDpi(const QFontMetricsF* self) {
	qreal _ret = self->fontDpi();
	return static_cast<double>(_ret);
}

bool QFontMetricsF_operatorEqual(const QFontMetricsF* self, QFontMetricsF* other) {
	return (*self == *other);
}

bool QFontMetricsF_operatorNotEqual(const QFontMetricsF* self, QFontMetricsF* other) {
	return (*self != *other);
}

double QFontMetricsF_horizontalAdvance22(const QFontMetricsF* self, struct miqt_string string, int length) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	qreal _ret = self->horizontalAdvance(string_QString, static_cast<int>(length));
	return static_cast<double>(_ret);
}

QRectF* QFontMetricsF_boundingRect4(const QFontMetricsF* self, QRectF* r, int flags, struct miqt_string string, int tabstops) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QRectF(self->boundingRect(*r, static_cast<int>(flags), string_QString, static_cast<int>(tabstops)));
}

QRectF* QFontMetricsF_boundingRect5(const QFontMetricsF* self, QRectF* r, int flags, struct miqt_string string, int tabstops, int* tabarray) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QRectF(self->boundingRect(*r, static_cast<int>(flags), string_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray)));
}

QSizeF* QFontMetricsF_size3(const QFontMetricsF* self, int flags, struct miqt_string str, int tabstops) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QSizeF(self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops)));
}

QSizeF* QFontMetricsF_size4(const QFontMetricsF* self, int flags, struct miqt_string str, int tabstops, int* tabarray) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QSizeF(self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray)));
}

struct miqt_string QFontMetricsF_elidedText4(const QFontMetricsF* self, struct miqt_string text, int mode, double width, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<qreal>(width), static_cast<int>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontMetricsF_delete(QFontMetricsF* self) {
	delete self;
}

