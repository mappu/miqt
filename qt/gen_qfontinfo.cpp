#include <QFont>
#include <QFontInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qfontinfo.h"

#include "gen_qfontinfo.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

void QFontInfo_Family(const QFontInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->family();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontInfo_StyleName(const QFontInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QFontInfo_PixelSize(const QFontInfo* self) {
	return self->pixelSize();
}

int QFontInfo_PointSize(const QFontInfo* self) {
	return self->pointSize();
}

double QFontInfo_PointSizeF(const QFontInfo* self) {
	return self->pointSizeF();
}

bool QFontInfo_Italic(const QFontInfo* self) {
	return self->italic();
}

uintptr_t QFontInfo_Style(const QFontInfo* self) {
	QFont::Style ret = self->style();
	return static_cast<uintptr_t>(ret);
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

uintptr_t QFontInfo_StyleHint(const QFontInfo* self) {
	QFont::StyleHint ret = self->styleHint();
	return static_cast<uintptr_t>(ret);
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

