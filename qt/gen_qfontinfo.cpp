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

void QFontInfo_Family(QFontInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFontInfo*>(self)->family();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontInfo_StyleName(QFontInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFontInfo*>(self)->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QFontInfo_PixelSize(QFontInfo* self) {
	return const_cast<const QFontInfo*>(self)->pixelSize();
}

int QFontInfo_PointSize(QFontInfo* self) {
	return const_cast<const QFontInfo*>(self)->pointSize();
}

double QFontInfo_PointSizeF(QFontInfo* self) {
	return const_cast<const QFontInfo*>(self)->pointSizeF();
}

bool QFontInfo_Italic(QFontInfo* self) {
	return const_cast<const QFontInfo*>(self)->italic();
}

uintptr_t QFontInfo_Style(QFontInfo* self) {
	QFont::Style ret = const_cast<const QFontInfo*>(self)->style();
	return static_cast<uintptr_t>(ret);
}

int QFontInfo_Weight(QFontInfo* self) {
	return const_cast<const QFontInfo*>(self)->weight();
}

bool QFontInfo_Bold(QFontInfo* self) {
	return const_cast<const QFontInfo*>(self)->bold();
}

bool QFontInfo_Underline(QFontInfo* self) {
	return const_cast<const QFontInfo*>(self)->underline();
}

bool QFontInfo_Overline(QFontInfo* self) {
	return const_cast<const QFontInfo*>(self)->overline();
}

bool QFontInfo_StrikeOut(QFontInfo* self) {
	return const_cast<const QFontInfo*>(self)->strikeOut();
}

bool QFontInfo_FixedPitch(QFontInfo* self) {
	return const_cast<const QFontInfo*>(self)->fixedPitch();
}

uintptr_t QFontInfo_StyleHint(QFontInfo* self) {
	QFont::StyleHint ret = const_cast<const QFontInfo*>(self)->styleHint();
	return static_cast<uintptr_t>(ret);
}

bool QFontInfo_RawMode(QFontInfo* self) {
	return const_cast<const QFontInfo*>(self)->rawMode();
}

bool QFontInfo_ExactMatch(QFontInfo* self) {
	return const_cast<const QFontInfo*>(self)->exactMatch();
}

void QFontInfo_Delete(QFontInfo* self) {
	delete self;
}

