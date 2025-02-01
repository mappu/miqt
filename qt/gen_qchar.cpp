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

uint16_t QLatin1Char_unicode(const QLatin1Char* self) {
	ushort _ret = self->unicode();
	return static_cast<uint16_t>(_ret);
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

int QChar_joining(const QChar* self) {
	QChar::Joining _ret = self->joining();
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

uint16_t QChar_unicode(const QChar* self) {
	ushort _ret = self->unicode();
	return static_cast<uint16_t>(_ret);
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

bool QChar_isNonCharacterWithUcs4(unsigned int ucs4) {
	return QChar::isNonCharacter(static_cast<uint>(ucs4));
}

bool QChar_isHighSurrogateWithUcs4(unsigned int ucs4) {
	return QChar::isHighSurrogate(static_cast<uint>(ucs4));
}

bool QChar_isLowSurrogateWithUcs4(unsigned int ucs4) {
	return QChar::isLowSurrogate(static_cast<uint>(ucs4));
}

bool QChar_isSurrogateWithUcs4(unsigned int ucs4) {
	return QChar::isSurrogate(static_cast<uint>(ucs4));
}

bool QChar_requiresSurrogates(unsigned int ucs4) {
	return QChar::requiresSurrogates(static_cast<uint>(ucs4));
}

unsigned int QChar_surrogateToUcs4(uint16_t high, uint16_t low) {
	uint _ret = QChar::surrogateToUcs4(static_cast<ushort>(high), static_cast<ushort>(low));
	return static_cast<unsigned int>(_ret);
}

unsigned int QChar_surrogateToUcs42(QChar* high, QChar* low) {
	uint _ret = QChar::surrogateToUcs4(*high, *low);
	return static_cast<unsigned int>(_ret);
}

uint16_t QChar_highSurrogate(unsigned int ucs4) {
	ushort _ret = QChar::highSurrogate(static_cast<uint>(ucs4));
	return static_cast<uint16_t>(_ret);
}

uint16_t QChar_lowSurrogate(unsigned int ucs4) {
	ushort _ret = QChar::lowSurrogate(static_cast<uint>(ucs4));
	return static_cast<uint16_t>(_ret);
}

int QChar_categoryWithUcs4(unsigned int ucs4) {
	QChar::Category _ret = QChar::category(static_cast<uint>(ucs4));
	return static_cast<int>(_ret);
}

int QChar_directionWithUcs4(unsigned int ucs4) {
	QChar::Direction _ret = QChar::direction(static_cast<uint>(ucs4));
	return static_cast<int>(_ret);
}

int QChar_joiningTypeWithUcs4(unsigned int ucs4) {
	QChar::JoiningType _ret = QChar::joiningType(static_cast<uint>(ucs4));
	return static_cast<int>(_ret);
}

int QChar_joiningWithUcs4(unsigned int ucs4) {
	QChar::Joining _ret = QChar::joining(static_cast<uint>(ucs4));
	return static_cast<int>(_ret);
}

unsigned char QChar_combiningClassWithUcs4(unsigned int ucs4) {
	return QChar::combiningClass(static_cast<uint>(ucs4));
}

unsigned int QChar_mirroredCharWithUcs4(unsigned int ucs4) {
	uint _ret = QChar::mirroredChar(static_cast<uint>(ucs4));
	return static_cast<unsigned int>(_ret);
}

bool QChar_hasMirroredWithUcs4(unsigned int ucs4) {
	return QChar::hasMirrored(static_cast<uint>(ucs4));
}

struct miqt_string QChar_decompositionWithUcs4(unsigned int ucs4) {
	QString _ret = QChar::decomposition(static_cast<uint>(ucs4));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QChar_decompositionTagWithUcs4(unsigned int ucs4) {
	QChar::Decomposition _ret = QChar::decompositionTag(static_cast<uint>(ucs4));
	return static_cast<int>(_ret);
}

int QChar_digitValueWithUcs4(unsigned int ucs4) {
	return QChar::digitValue(static_cast<uint>(ucs4));
}

unsigned int QChar_toLowerWithUcs4(unsigned int ucs4) {
	uint _ret = QChar::toLower(static_cast<uint>(ucs4));
	return static_cast<unsigned int>(_ret);
}

unsigned int QChar_toUpperWithUcs4(unsigned int ucs4) {
	uint _ret = QChar::toUpper(static_cast<uint>(ucs4));
	return static_cast<unsigned int>(_ret);
}

unsigned int QChar_toTitleCaseWithUcs4(unsigned int ucs4) {
	uint _ret = QChar::toTitleCase(static_cast<uint>(ucs4));
	return static_cast<unsigned int>(_ret);
}

unsigned int QChar_toCaseFoldedWithUcs4(unsigned int ucs4) {
	uint _ret = QChar::toCaseFolded(static_cast<uint>(ucs4));
	return static_cast<unsigned int>(_ret);
}

int QChar_scriptWithUcs4(unsigned int ucs4) {
	QChar::Script _ret = QChar::script(static_cast<uint>(ucs4));
	return static_cast<int>(_ret);
}

int QChar_unicodeVersionWithUcs4(unsigned int ucs4) {
	QChar::UnicodeVersion _ret = QChar::unicodeVersion(static_cast<uint>(ucs4));
	return static_cast<int>(_ret);
}

int QChar_currentUnicodeVersion() {
	QChar::UnicodeVersion _ret = QChar::currentUnicodeVersion();
	return static_cast<int>(_ret);
}

bool QChar_isPrintWithUcs4(unsigned int ucs4) {
	return QChar::isPrint(static_cast<uint>(ucs4));
}

bool QChar_isSpaceWithUcs4(unsigned int ucs4) {
	return QChar::isSpace(static_cast<uint>(ucs4));
}

bool QChar_isMarkWithUcs4(unsigned int ucs4) {
	return QChar::isMark(static_cast<uint>(ucs4));
}

bool QChar_isPunctWithUcs4(unsigned int ucs4) {
	return QChar::isPunct(static_cast<uint>(ucs4));
}

bool QChar_isSymbolWithUcs4(unsigned int ucs4) {
	return QChar::isSymbol(static_cast<uint>(ucs4));
}

bool QChar_isLetterWithUcs4(unsigned int ucs4) {
	return QChar::isLetter(static_cast<uint>(ucs4));
}

bool QChar_isNumberWithUcs4(unsigned int ucs4) {
	return QChar::isNumber(static_cast<uint>(ucs4));
}

bool QChar_isLetterOrNumberWithUcs4(unsigned int ucs4) {
	return QChar::isLetterOrNumber(static_cast<uint>(ucs4));
}

bool QChar_isDigitWithUcs4(unsigned int ucs4) {
	return QChar::isDigit(static_cast<uint>(ucs4));
}

bool QChar_isLowerWithUcs4(unsigned int ucs4) {
	return QChar::isLower(static_cast<uint>(ucs4));
}

bool QChar_isUpperWithUcs4(unsigned int ucs4) {
	return QChar::isUpper(static_cast<uint>(ucs4));
}

bool QChar_isTitleCaseWithUcs4(unsigned int ucs4) {
	return QChar::isTitleCase(static_cast<uint>(ucs4));
}

void QChar_delete(QChar* self) {
	delete self;
}

