#include <QFont>
#include <QFontInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfontinfo.h>
#include "gen_qfontinfo.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QFontInfo* QFontInfo_new(QFont* param1) {
	return new QFontInfo(*param1);
}

QFontInfo* QFontInfo_new2(QFontInfo* param1) {
	return new QFontInfo(*param1);
}

void QFontInfo_operatorAssign(QFontInfo* self, QFontInfo* param1) {
	self->operator=(*param1);
}

void QFontInfo_swap(QFontInfo* self, QFontInfo* other) {
	self->swap(*other);
}

struct miqt_string QFontInfo_family(const QFontInfo* self) {
	QString _ret = self->family();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontInfo_styleName(const QFontInfo* self) {
	QString _ret = self->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QFontInfo_pixelSize(const QFontInfo* self) {
	return self->pixelSize();
}

int QFontInfo_pointSize(const QFontInfo* self) {
	return self->pointSize();
}

double QFontInfo_pointSizeF(const QFontInfo* self) {
	qreal _ret = self->pointSizeF();
	return static_cast<double>(_ret);
}

bool QFontInfo_italic(const QFontInfo* self) {
	return self->italic();
}

int QFontInfo_style(const QFontInfo* self) {
	QFont::Style _ret = self->style();
	return static_cast<int>(_ret);
}

int QFontInfo_weight(const QFontInfo* self) {
	return self->weight();
}

bool QFontInfo_bold(const QFontInfo* self) {
	return self->bold();
}

bool QFontInfo_underline(const QFontInfo* self) {
	return self->underline();
}

bool QFontInfo_overline(const QFontInfo* self) {
	return self->overline();
}

bool QFontInfo_strikeOut(const QFontInfo* self) {
	return self->strikeOut();
}

bool QFontInfo_fixedPitch(const QFontInfo* self) {
	return self->fixedPitch();
}

int QFontInfo_styleHint(const QFontInfo* self) {
	QFont::StyleHint _ret = self->styleHint();
	return static_cast<int>(_ret);
}

bool QFontInfo_rawMode(const QFontInfo* self) {
	return self->rawMode();
}

bool QFontInfo_exactMatch(const QFontInfo* self) {
	return self->exactMatch();
}

void QFontInfo_delete(QFontInfo* self) {
	delete self;
}

