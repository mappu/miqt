#include <QFont>
#include <QFontInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qfontinfo.h"
#include "gen_qfontinfo.h"
#include "_cgo_export.h"

QFontInfo* QFontInfo_new(QFont* param1) {
	return new QFontInfo(*param1);
}

QFontInfo* QFontInfo_new2(QFontInfo* param1) {
	return new QFontInfo(*param1);
}

void QFontInfo_OperatorAssign(QFontInfo* self, QFontInfo* param1) {
	self->operator=(*param1);
}

void QFontInfo_Swap(QFontInfo* self, QFontInfo* other) {
	self->swap(*other);
}

struct miqt_string* QFontInfo_Family(const QFontInfo* self) {
	QString _ret = self->family();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFontInfo_StyleName(const QFontInfo* self) {
	QString _ret = self->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QFontInfo_PixelSize(const QFontInfo* self) {
	return self->pixelSize();
}

int QFontInfo_PointSize(const QFontInfo* self) {
	return self->pointSize();
}

double QFontInfo_PointSizeF(const QFontInfo* self) {
	qreal _ret = self->pointSizeF();
	return static_cast<double>(_ret);
}

bool QFontInfo_Italic(const QFontInfo* self) {
	return self->italic();
}

int QFontInfo_Style(const QFontInfo* self) {
	QFont::Style _ret = self->style();
	return static_cast<int>(_ret);
}

int QFontInfo_Weight(const QFontInfo* self) {
	return self->weight();
}

bool QFontInfo_Bold(const QFontInfo* self) {
	return self->bold();
}

bool QFontInfo_Underline(const QFontInfo* self) {
	return self->underline();
}

bool QFontInfo_Overline(const QFontInfo* self) {
	return self->overline();
}

bool QFontInfo_StrikeOut(const QFontInfo* self) {
	return self->strikeOut();
}

bool QFontInfo_FixedPitch(const QFontInfo* self) {
	return self->fixedPitch();
}

int QFontInfo_StyleHint(const QFontInfo* self) {
	QFont::StyleHint _ret = self->styleHint();
	return static_cast<int>(_ret);
}

bool QFontInfo_RawMode(const QFontInfo* self) {
	return self->rawMode();
}

bool QFontInfo_ExactMatch(const QFontInfo* self) {
	return self->exactMatch();
}

void QFontInfo_Delete(QFontInfo* self) {
	delete self;
}

