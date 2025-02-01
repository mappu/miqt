#include <QChar>
#include <QLatin1Char>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qchar.h>
#include "gen_qchar.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QLatin1Char* QLatin1Char_new(char c) {
	return new QLatin1Char(static_cast<char>(c));
}

QLatin1Char* QLatin1Char_new2(QLatin1Char* param1) {
	return new QLatin1Char(*param1);
}

char QLatin1Char_toLatin1(const QLatin1Char* self) {
	return self->toLatin1();
}

void QLatin1Char_delete(QLatin1Char* self) {
	delete self;
}

QChar* QChar_new() {
	return new QChar();
}

QChar* QChar_new2(uint16_t rc) {
	return new QChar(static_cast<ushort>(rc));
}

QChar* QChar_new3(unsigned char c, unsigned char r) {
	return new QChar(static_cast<uchar>(c), static_cast<uchar>(r));
}

QChar* QChar_new4(int16_t rc) {
	return new QChar(static_cast<short>(rc));
}

QChar* QChar_new5(unsigned int rc) {
	return new QChar(static_cast<uint>(rc));
}

QChar* QChar_new6(int rc) {
	return new QChar(static_cast<int>(rc));
}

QChar* QChar_new7(int s) {
	return new QChar(static_cast<QChar::SpecialCharacter>(s));
}

QChar* QChar_new8(QLatin1Char* ch) {
	return new QChar(*ch);
}

QChar* QChar_new9(char c) {
	return new QChar(static_cast<char>(c));
}

QChar* QChar_new10(unsigned char c) {
	return new QChar(static_cast<uchar>(c));
}

QChar* QChar_new11(QChar* param1) {
	return new QChar(*param1);
}

int QChar_category(const QChar* self) {
	QChar::Category _ret = self->category();
	return static_cast<int>(_ret);
}

int QChar_direction(const QChar* self) {
	QChar::Direction _ret = self->direction();
	return static_cast<int>(_ret);
}

int QChar_joiningType(const QChar* self) {
	QChar::JoiningType _ret = self->joiningType();
	return static_cast<int>(_ret);
}

unsigned char QChar_combiningClass(const QChar* self) {
	return self->combiningClass();
}

QChar* QChar_mirroredChar(const QChar* self) {
	return new QChar(self->mirroredChar());
}

bool QChar_hasMirrored(const QChar* self) {
	return self->hasMirrored();
}

struct miqt_string QChar_decomposition(const QChar* self) {
	QString _ret = self->decomposition();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QChar_decompositionTag(const QChar* self) {
	QChar::Decomposition _ret = self->decompositionTag();
	return static_cast<int>(_ret);
}

int QChar_digitValue(const QChar* self) {
	return self->digitValue();
}

QChar* QChar_toLower(const QChar* self) {
	return new QChar(self->toLower());
}

QChar* QChar_toUpper(const QChar* self) {
	return new QChar(self->toUpper());
}

QChar* QChar_toTitleCase(const QChar* self) {
	return new QChar(self->toTitleCase());
}

QChar* QChar_toCaseFolded(const QChar* self) {
	return new QChar(self->toCaseFolded());
}

int QChar_script(const QChar* self) {
	QChar::Script _ret = self->script();
	return static_cast<int>(_ret);
}

int QChar_unicodeVersion(const QChar* self) {
	QChar::UnicodeVersion _ret = self->unicodeVersion();
	return static_cast<int>(_ret);
}

char QChar_toLatin1(const QChar* self) {
	return self->toLatin1();
}

QChar* QChar_fromLatin1(char c) {
	return new QChar(QChar::fromLatin1(static_cast<char>(c)));
}

bool QChar_isNull(const QChar* self) {
	return self->isNull();
}

bool QChar_isPrint(const QChar* self) {
	return self->isPrint();
}

bool QChar_isSpace(const QChar* self) {
	return self->isSpace();
}

bool QChar_isMark(const QChar* self) {
	return self->isMark();
}

bool QChar_isPunct(const QChar* self) {
	return self->isPunct();
}

bool QChar_isSymbol(const QChar* self) {
	return self->isSymbol();
}

bool QChar_isLetter(const QChar* self) {
	return self->isLetter();
}

bool QChar_isNumber(const QChar* self) {
	return self->isNumber();
}

bool QChar_isLetterOrNumber(const QChar* self) {
	return self->isLetterOrNumber();
}

bool QChar_isDigit(const QChar* self) {
	return self->isDigit();
}

bool QChar_isLower(const QChar* self) {
	return self->isLower();
}

bool QChar_isUpper(const QChar* self) {
	return self->isUpper();
}

bool QChar_isTitleCase(const QChar* self) {
	return self->isTitleCase();
}

bool QChar_isNonCharacter(const QChar* self) {
	return self->isNonCharacter();
}

bool QChar_isHighSurrogate(const QChar* self) {
	return self->isHighSurrogate();
}

bool QChar_isLowSurrogate(const QChar* self) {
	return self->isLowSurrogate();
}

bool QChar_isSurrogate(const QChar* self) {
	return self->isSurrogate();
}

unsigned char QChar_cell(const QChar* self) {
	uchar _ret = self->cell();
	return static_cast<unsigned char>(_ret);
}

unsigned char QChar_row(const QChar* self) {
	uchar _ret = self->row();
	return static_cast<unsigned char>(_ret);
}

void QChar_setCell(QChar* self, unsigned char acell) {
	self->setCell(static_cast<uchar>(acell));
}

void QChar_setRow(QChar* self, unsigned char arow) {
	self->setRow(static_cast<uchar>(arow));
}

int QChar_currentUnicodeVersion() {
	QChar::UnicodeVersion _ret = QChar::currentUnicodeVersion();
	return static_cast<int>(_ret);
}

void QChar_delete(QChar* self) {
	delete self;
}

