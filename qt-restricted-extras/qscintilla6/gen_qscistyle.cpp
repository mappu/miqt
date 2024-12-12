#include <QColor>
#include <QFont>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscistyle.h>
#include "gen_qscistyle.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QsciStyle* QsciStyle_new() {
	return new QsciStyle();
}

QsciStyle* QsciStyle_new2(int style, struct miqt_string description, QColor* color, QColor* paper, QFont* font) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new QsciStyle(static_cast<int>(style), description_QString, *color, *paper, *font);
}

QsciStyle* QsciStyle_new3(QsciStyle* param1) {
	return new QsciStyle(*param1);
}

QsciStyle* QsciStyle_new4(int style) {
	return new QsciStyle(static_cast<int>(style));
}

QsciStyle* QsciStyle_new5(int style, struct miqt_string description, QColor* color, QColor* paper, QFont* font, bool eolFill) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new QsciStyle(static_cast<int>(style), description_QString, *color, *paper, *font, eolFill);
}

void QsciStyle_Apply(const QsciStyle* self, QsciScintillaBase* sci) {
	self->apply(sci);
}

void QsciStyle_SetStyle(QsciStyle* self, int style) {
	self->setStyle(static_cast<int>(style));
}

int QsciStyle_Style(const QsciStyle* self) {
	return self->style();
}

void QsciStyle_SetDescription(QsciStyle* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

struct miqt_string QsciStyle_Description(const QsciStyle* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciStyle_SetColor(QsciStyle* self, QColor* color) {
	self->setColor(*color);
}

QColor* QsciStyle_Color(const QsciStyle* self) {
	return new QColor(self->color());
}

void QsciStyle_SetPaper(QsciStyle* self, QColor* paper) {
	self->setPaper(*paper);
}

QColor* QsciStyle_Paper(const QsciStyle* self) {
	return new QColor(self->paper());
}

void QsciStyle_SetFont(QsciStyle* self, QFont* font) {
	self->setFont(*font);
}

QFont* QsciStyle_Font(const QsciStyle* self) {
	return new QFont(self->font());
}

void QsciStyle_SetEolFill(QsciStyle* self, bool fill) {
	self->setEolFill(fill);
}

bool QsciStyle_EolFill(const QsciStyle* self) {
	return self->eolFill();
}

void QsciStyle_SetTextCase(QsciStyle* self, int text_case) {
	self->setTextCase(static_cast<QsciStyle::TextCase>(text_case));
}

int QsciStyle_TextCase(const QsciStyle* self) {
	QsciStyle::TextCase _ret = self->textCase();
	return static_cast<int>(_ret);
}

void QsciStyle_SetVisible(QsciStyle* self, bool visible) {
	self->setVisible(visible);
}

bool QsciStyle_Visible(const QsciStyle* self) {
	return self->visible();
}

void QsciStyle_SetChangeable(QsciStyle* self, bool changeable) {
	self->setChangeable(changeable);
}

bool QsciStyle_Changeable(const QsciStyle* self) {
	return self->changeable();
}

void QsciStyle_SetHotspot(QsciStyle* self, bool hotspot) {
	self->setHotspot(hotspot);
}

bool QsciStyle_Hotspot(const QsciStyle* self) {
	return self->hotspot();
}

void QsciStyle_Refresh(QsciStyle* self) {
	self->refresh();
}

void QsciStyle_Delete(QsciStyle* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QsciStyle*>( self );
	} else {
		delete self;
	}
}

