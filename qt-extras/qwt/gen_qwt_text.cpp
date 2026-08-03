#include <QBrush>
#include <QColor>
#include <QFont>
#include <QPainter>
#include <QPen>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qwt_text.h>
#include "gen_qwt_text.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtText* QwtText_new() {
	return new (std::nothrow) QwtText();
}

QwtText* QwtText_new2(QwtText* param1) {
	return new (std::nothrow) QwtText(*param1);
}

QwtText* QwtText_new3(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return new (std::nothrow) QwtText(param1_QString);
}

QwtText* QwtText_new4(struct miqt_string param1, int textFormat) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return new (std::nothrow) QwtText(param1_QString, static_cast<QwtText::TextFormat>(textFormat));
}

void QwtText_operatorAssign(QwtText* self, QwtText* param1) {
	self->operator=(*param1);
}

bool QwtText_operatorEqual(const QwtText* self, QwtText* param1) {
	return (*self == *param1);
}

bool QwtText_operatorNotEqual(const QwtText* self, QwtText* param1) {
	return (*self != *param1);
}

void QwtText_setText(QwtText* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->setText(param1_QString);
}

struct miqt_string QwtText_text(const QwtText* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtText_isNull(const QwtText* self) {
	return self->isNull();
}

bool QwtText_isEmpty(const QwtText* self) {
	return self->isEmpty();
}

void QwtText_setFont(QwtText* self, QFont* font) {
	self->setFont(*font);
}

QFont* QwtText_font(const QwtText* self) {
	return new QFont(self->font());
}

QFont* QwtText_usedFont(const QwtText* self, QFont* param1) {
	return new QFont(self->usedFont(*param1));
}

void QwtText_setRenderFlags(QwtText* self, int renderFlags) {
	self->setRenderFlags(static_cast<int>(renderFlags));
}

int QwtText_renderFlags(const QwtText* self) {
	return self->renderFlags();
}

void QwtText_setColor(QwtText* self, QColor* color) {
	self->setColor(*color);
}

QColor* QwtText_color(const QwtText* self) {
	return new QColor(self->color());
}

QColor* QwtText_usedColor(const QwtText* self, QColor* param1) {
	return new QColor(self->usedColor(*param1));
}

void QwtText_setBorderRadius(QwtText* self, double borderRadius) {
	self->setBorderRadius(static_cast<double>(borderRadius));
}

double QwtText_borderRadius(const QwtText* self) {
	return self->borderRadius();
}

void QwtText_setBorderPen(QwtText* self, QPen* borderPen) {
	self->setBorderPen(*borderPen);
}

QPen* QwtText_borderPen(const QwtText* self) {
	return new QPen(self->borderPen());
}

void QwtText_setBackgroundBrush(QwtText* self, QBrush* backgroundBrush) {
	self->setBackgroundBrush(*backgroundBrush);
}

QBrush* QwtText_backgroundBrush(const QwtText* self) {
	return new QBrush(self->backgroundBrush());
}

void QwtText_setPaintAttribute(QwtText* self, int param1) {
	self->setPaintAttribute(static_cast<QwtText::PaintAttribute>(param1));
}

bool QwtText_testPaintAttribute(const QwtText* self, int param1) {
	return self->testPaintAttribute(static_cast<QwtText::PaintAttribute>(param1));
}

void QwtText_setLayoutAttribute(QwtText* self, int param1) {
	self->setLayoutAttribute(static_cast<QwtText::LayoutAttribute>(param1));
}

bool QwtText_testLayoutAttribute(const QwtText* self, int param1) {
	return self->testLayoutAttribute(static_cast<QwtText::LayoutAttribute>(param1));
}

double QwtText_heightForWidth(const QwtText* self, double width) {
	return self->heightForWidth(static_cast<double>(width));
}

QSizeF* QwtText_textSize(const QwtText* self) {
	return new QSizeF(self->textSize());
}

void QwtText_draw(const QwtText* self, QPainter* painter, QRectF* rect) {
	self->draw(painter, *rect);
}

QwtTextEngine* QwtText_textEngine(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return (QwtTextEngine*) QwtText::textEngine(text_QString);
}

QwtTextEngine* QwtText_textEngineWithQwtTextTextFormat(int param1) {
	return (QwtTextEngine*) QwtText::textEngine(static_cast<QwtText::TextFormat>(param1));
}

void QwtText_setTextEngine(int param1, QwtTextEngine* param2) {
	QwtText::setTextEngine(static_cast<QwtText::TextFormat>(param1), param2);
}

void QwtText_setText2(QwtText* self, struct miqt_string param1, int textFormat) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->setText(param1_QString, static_cast<QwtText::TextFormat>(textFormat));
}

void QwtText_setPaintAttribute2(QwtText* self, int param1, bool on) {
	self->setPaintAttribute(static_cast<QwtText::PaintAttribute>(param1), on);
}

void QwtText_setLayoutAttribute2(QwtText* self, int param1, bool on) {
	self->setLayoutAttribute(static_cast<QwtText::LayoutAttribute>(param1), on);
}

double QwtText_heightForWidth2(const QwtText* self, double width, QFont* param2) {
	return self->heightForWidth(static_cast<double>(width), *param2);
}

QSizeF* QwtText_textSizeWithQFont(const QwtText* self, QFont* param1) {
	return new QSizeF(self->textSize(*param1));
}

QwtTextEngine* QwtText_textEngine2(struct miqt_string text, int param2) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return (QwtTextEngine*) QwtText::textEngine(text_QString, static_cast<QwtText::TextFormat>(param2));
}

void QwtText_delete(QwtText* self) {
	delete self;
}

