#include <QFont>
#include <QSizeF>
#include <QStaticText>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextOption>
#include <QTransform>
#include <qstatictext.h>
#include "gen_qstatictext.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QStaticText* QStaticText_new() {
	return new QStaticText();
}

QStaticText* QStaticText_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QStaticText(text_QString);
}

QStaticText* QStaticText_new3(QStaticText* other) {
	return new QStaticText(*other);
}

void QStaticText_operatorAssign(QStaticText* self, QStaticText* param1) {
	self->operator=(*param1);
}

void QStaticText_swap(QStaticText* self, QStaticText* other) {
	self->swap(*other);
}

void QStaticText_setText(QStaticText* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

struct miqt_string QStaticText_text(const QStaticText* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStaticText_setTextFormat(QStaticText* self, int textFormat) {
	self->setTextFormat(static_cast<Qt::TextFormat>(textFormat));
}

int QStaticText_textFormat(const QStaticText* self) {
	Qt::TextFormat _ret = self->textFormat();
	return static_cast<int>(_ret);
}

void QStaticText_setTextWidth(QStaticText* self, double textWidth) {
	self->setTextWidth(static_cast<qreal>(textWidth));
}

double QStaticText_textWidth(const QStaticText* self) {
	qreal _ret = self->textWidth();
	return static_cast<double>(_ret);
}

void QStaticText_setTextOption(QStaticText* self, QTextOption* textOption) {
	self->setTextOption(*textOption);
}

QTextOption* QStaticText_textOption(const QStaticText* self) {
	return new QTextOption(self->textOption());
}

QSizeF* QStaticText_size(const QStaticText* self) {
	return new QSizeF(self->size());
}

void QStaticText_prepare(QStaticText* self) {
	self->prepare();
}

void QStaticText_setPerformanceHint(QStaticText* self, int performanceHint) {
	self->setPerformanceHint(static_cast<QStaticText::PerformanceHint>(performanceHint));
}

int QStaticText_performanceHint(const QStaticText* self) {
	QStaticText::PerformanceHint _ret = self->performanceHint();
	return static_cast<int>(_ret);
}

bool QStaticText_operatorEqual(const QStaticText* self, QStaticText* param1) {
	return (*self == *param1);
}

bool QStaticText_operatorNotEqual(const QStaticText* self, QStaticText* param1) {
	return (*self != *param1);
}

void QStaticText_prepare1(QStaticText* self, QTransform* matrix) {
	self->prepare(*matrix);
}

void QStaticText_prepare2(QStaticText* self, QTransform* matrix, QFont* font) {
	self->prepare(*matrix, *font);
}

void QStaticText_delete(QStaticText* self) {
	delete self;
}

