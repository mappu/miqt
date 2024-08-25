#include "gen_qfontinfo.h"
#include "qfontinfo.h"

#include <QFont>
#include <QFontInfo>
#include <QString>


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

void QFontInfo_Family(QFontInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->family();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontInfo_StyleName(QFontInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QFontInfo_PixelSize(QFontInfo* self) {
	return self->pixelSize();
}

int QFontInfo_PointSize(QFontInfo* self) {
	return self->pointSize();
}

double QFontInfo_PointSizeF(QFontInfo* self) {
	return self->pointSizeF();
}

bool QFontInfo_Italic(QFontInfo* self) {
	return self->italic();
}

int QFontInfo_Weight(QFontInfo* self) {
	return self->weight();
}

bool QFontInfo_Bold(QFontInfo* self) {
	return self->bold();
}

bool QFontInfo_Underline(QFontInfo* self) {
	return self->underline();
}

bool QFontInfo_Overline(QFontInfo* self) {
	return self->overline();
}

bool QFontInfo_StrikeOut(QFontInfo* self) {
	return self->strikeOut();
}

bool QFontInfo_FixedPitch(QFontInfo* self) {
	return self->fixedPitch();
}

bool QFontInfo_RawMode(QFontInfo* self) {
	return self->rawMode();
}

bool QFontInfo_ExactMatch(QFontInfo* self) {
	return self->exactMatch();
}

void QFontInfo_Delete(QFontInfo* self) {
	delete self;
}

