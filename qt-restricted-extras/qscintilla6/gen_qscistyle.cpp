#include <QColor>
#include <QFont>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscistyle.h>
#include "gen_qscistyle.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QsciStyle* QsciStyle_new() {
	return new (std::nothrow) QsciStyle();
}

QsciStyle* QsciStyle_new2(int style, struct miqt_string description, QColor* color, QColor* paper, QFont* font) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new (std::nothrow) QsciStyle(static_cast<int>(style), description_QString, *color, *paper, *font);
}

QsciStyle* QsciStyle_new3(QsciStyle* param1) {
	return new (std::nothrow) QsciStyle(*param1);
}

QsciStyle* QsciStyle_new4(int style) {
	return new (std::nothrow) QsciStyle(static_cast<int>(style));
}

QsciStyle* QsciStyle_new5(int style, struct miqt_string description, QColor* color, QColor* paper, QFont* font, bool eolFill) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new (std::nothrow) QsciStyle(static_cast<int>(style), description_QString, *color, *paper, *font, eolFill);
}

void QsciStyle_apply(const QsciStyle* self, QsciScintillaBase* sci) {
	self->apply(sci);
}

void QsciStyle_setStyle(QsciStyle* self, int style) {
	self->setStyle(static_cast<int>(style));
}

int QsciStyle_style(const QsciStyle* self) {
	return self->style();
}

void QsciStyle_setDescription(QsciStyle* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

struct miqt_string QsciStyle_description(const QsciStyle* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciStyle_setColor(QsciStyle* self, QColor* color) {
	self->setColor(*color);
}

QColor* QsciStyle_color(const QsciStyle* self) {
	return new QColor(self->color());
}

void QsciStyle_setPaper(QsciStyle* self, QColor* paper) {
	self->setPaper(*paper);
}

QColor* QsciStyle_paper(const QsciStyle* self) {
	return new QColor(self->paper());
}

void QsciStyle_setFont(QsciStyle* self, QFont* font) {
	self->setFont(*font);
}

QFont* QsciStyle_font(const QsciStyle* self) {
	return new QFont(self->font());
}

void QsciStyle_setEolFill(QsciStyle* self, bool fill) {
	self->setEolFill(fill);
}

bool QsciStyle_eolFill(const QsciStyle* self) {
	return self->eolFill();
}

void QsciStyle_setTextCase(QsciStyle* self, int text_case) {
	self->setTextCase(static_cast<QsciStyle::TextCase>(text_case));
}

int QsciStyle_textCase(const QsciStyle* self) {
	QsciStyle::TextCase _ret = self->textCase();
	return static_cast<int>(_ret);
}

void QsciStyle_setVisible(QsciStyle* self, bool visible) {
	self->setVisible(visible);
}

bool QsciStyle_visible(const QsciStyle* self) {
	return self->visible();
}

void QsciStyle_setChangeable(QsciStyle* self, bool changeable) {
	self->setChangeable(changeable);
}

bool QsciStyle_changeable(const QsciStyle* self) {
	return self->changeable();
}

void QsciStyle_setHotspot(QsciStyle* self, bool hotspot) {
	self->setHotspot(hotspot);
}

bool QsciStyle_hotspot(const QsciStyle* self) {
	return self->hotspot();
}

void QsciStyle_refresh(QsciStyle* self) {
	self->refresh();
}

void QsciStyle_delete(QsciStyle* self) {
	delete self;
}

