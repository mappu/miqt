#include <QChar>
#include <QLatin1Char>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qchar.h>
#include "gen_qchar.h"
#include "_cgo_export.h"

QLatin1Char* QLatin1Char_new(char c) {
	return new QLatin1Char(static_cast<char>(c));
}

QLatin1Char* QLatin1Char_new2(QLatin1Char* param1) {
	return new QLatin1Char(*param1);
}

char QLatin1Char_ToLatin1(const QLatin1Char* self) {
	return self->toLatin1();
}

uint16_t QLatin1Char_Unicode(const QLatin1Char* self) {
	ushort _ret = self->unicode();
	return static_cast<uint16_t>(_ret);
}

void QLatin1Char_Delete(QLatin1Char* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QLatin1Char*>( self );
	} else {
		delete self;
	}
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

int QChar_Category(const QChar* self) {
	QChar::Category _ret = self->category();
	return static_cast<int>(_ret);
}

int QChar_Direction(const QChar* self) {
	QChar::Direction _ret = self->direction();
	return static_cast<int>(_ret);
}

int QChar_JoiningType(const QChar* self) {
	QChar::JoiningType _ret = self->joiningType();
	return static_cast<int>(_ret);
}

int QChar_Joining(const QChar* self) {
	QChar::Joining _ret = self->joining();
	return static_cast<int>(_ret);
}

unsigned char QChar_CombiningClass(const QChar* self) {
	return self->combiningClass();
}

QChar* QChar_MirroredChar(const QChar* self) {
	return new QChar(self->mirroredChar());
}

bool QChar_HasMirrored(const QChar* self) {
	return self->hasMirrored();
}

struct miqt_string QChar_Decomposition(const QChar* self) {
	QString _ret = self->decomposition();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QChar_DecompositionTag(const QChar* self) {
	QChar::Decomposition _ret = self->decompositionTag();
	return static_cast<int>(_ret);
}

int QChar_DigitValue(const QChar* self) {
	return self->digitValue();
}

QChar* QChar_ToLower(const QChar* self) {
	return new QChar(self->toLower());
}

QChar* QChar_ToUpper(const QChar* self) {
	return new QChar(self->toUpper());
}

QChar* QChar_ToTitleCase(const QChar* self) {
	return new QChar(self->toTitleCase());
}

QChar* QChar_ToCaseFolded(const QChar* self) {
	return new QChar(self->toCaseFolded());
}

int QChar_Script(const QChar* self) {
	QChar::Script _ret = self->script();
	return static_cast<int>(_ret);
}

int QChar_UnicodeVersion(const QChar* self) {
	QChar::UnicodeVersion _ret = self->unicodeVersion();
	return static_cast<int>(_ret);
}

char QChar_ToLatin1(const QChar* self) {
	return self->toLatin1();
}

uint16_t QChar_Unicode(const QChar* self) {
	ushort _ret = self->unicode();
	return static_cast<uint16_t>(_ret);
}

QChar* QChar_FromLatin1(char c) {
	return new QChar(QChar::fromLatin1(static_cast<char>(c)));
}

bool QChar_IsNull(const QChar* self) {
	return self->isNull();
}

bool QChar_IsPrint(const QChar* self) {
	return self->isPrint();
}

bool QChar_IsSpace(const QChar* self) {
	return self->isSpace();
}

bool QChar_IsMark(const QChar* self) {
	return self->isMark();
}

bool QChar_IsPunct(const QChar* self) {
	return self->isPunct();
}

bool QChar_IsSymbol(const QChar* self) {
	return self->isSymbol();
}

bool QChar_IsLetter(const QChar* self) {
	return self->isLetter();
}

bool QChar_IsNumber(const QChar* self) {
	return self->isNumber();
}

bool QChar_IsLetterOrNumber(const QChar* self) {
	return self->isLetterOrNumber();
}

bool QChar_IsDigit(const QChar* self) {
	return self->isDigit();
}

bool QChar_IsLower(const QChar* self) {
	return self->isLower();
}

bool QChar_IsUpper(const QChar* self) {
	return self->isUpper();
}

bool QChar_IsTitleCase(const QChar* self) {
	return self->isTitleCase();
}

bool QChar_IsNonCharacter(const QChar* self) {
	return self->isNonCharacter();
}

bool QChar_IsHighSurrogate(const QChar* self) {
	return self->isHighSurrogate();
}

bool QChar_IsLowSurrogate(const QChar* self) {
	return self->isLowSurrogate();
}

bool QChar_IsSurrogate(const QChar* self) {
	return self->isSurrogate();
}

unsigned char QChar_Cell(const QChar* self) {
	uchar _ret = self->cell();
	return static_cast<unsigned char>(_ret);
}

unsigned char QChar_Row(const QChar* self) {
	uchar _ret = self->row();
	return static_cast<unsigned char>(_ret);
}

void QChar_SetCell(QChar* self, unsigned char acell) {
	self->setCell(static_cast<uchar>(acell));
}

void QChar_SetRow(QChar* self, unsigned char arow) {
	self->setRow(static_cast<uchar>(arow));
}

bool QChar_IsNonCharacterWithUcs4(unsigned int ucs4) {
	return QChar::isNonCharacter(static_cast<uint>(ucs4));
}

bool QChar_IsHighSurrogateWithUcs4(unsigned int ucs4) {
	return QChar::isHighSurrogate(static_cast<uint>(ucs4));
}

bool QChar_IsLowSurrogateWithUcs4(unsigned int ucs4) {
	return QChar::isLowSurrogate(static_cast<uint>(ucs4));
}

bool QChar_IsSurrogateWithUcs4(unsigned int ucs4) {
	return QChar::isSurrogate(static_cast<uint>(ucs4));
}

bool QChar_RequiresSurrogates(unsigned int ucs4) {
	return QChar::requiresSurrogates(static_cast<uint>(ucs4));
}

unsigned int QChar_SurrogateToUcs4(uint16_t high, uint16_t low) {
	uint _ret = QChar::surrogateToUcs4(static_cast<ushort>(high), static_cast<ushort>(low));
	return static_cast<unsigned int>(_ret);
}

unsigned int QChar_SurrogateToUcs42(QChar* high, QChar* low) {
	uint _ret = QChar::surrogateToUcs4(*high, *low);
	return static_cast<unsigned int>(_ret);
}

uint16_t QChar_HighSurrogate(unsigned int ucs4) {
	ushort _ret = QChar::highSurrogate(static_cast<uint>(ucs4));
	return static_cast<uint16_t>(_ret);
}

uint16_t QChar_LowSurrogate(unsigned int ucs4) {
	ushort _ret = QChar::lowSurrogate(static_cast<uint>(ucs4));
	return static_cast<uint16_t>(_ret);
}

int QChar_CategoryWithUcs4(unsigned int ucs4) {
	QChar::Category _ret = QChar::category(static_cast<uint>(ucs4));
	return static_cast<int>(_ret);
}

int QChar_DirectionWithUcs4(unsigned int ucs4) {
	QChar::Direction _ret = QChar::direction(static_cast<uint>(ucs4));
	return static_cast<int>(_ret);
}

int QChar_JoiningTypeWithUcs4(unsigned int ucs4) {
	QChar::JoiningType _ret = QChar::joiningType(static_cast<uint>(ucs4));
	return static_cast<int>(_ret);
}

int QChar_JoiningWithUcs4(unsigned int ucs4) {
	QChar::Joining _ret = QChar::joining(static_cast<uint>(ucs4));
	return static_cast<int>(_ret);
}

unsigned char QChar_CombiningClassWithUcs4(unsigned int ucs4) {
	return QChar::combiningClass(static_cast<uint>(ucs4));
}

unsigned int QChar_MirroredCharWithUcs4(unsigned int ucs4) {
	uint _ret = QChar::mirroredChar(static_cast<uint>(ucs4));
	return static_cast<unsigned int>(_ret);
}

bool QChar_HasMirroredWithUcs4(unsigned int ucs4) {
	return QChar::hasMirrored(static_cast<uint>(ucs4));
}

struct miqt_string QChar_DecompositionWithUcs4(unsigned int ucs4) {
	QString _ret = QChar::decomposition(static_cast<uint>(ucs4));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QChar_DecompositionTagWithUcs4(unsigned int ucs4) {
	QChar::Decomposition _ret = QChar::decompositionTag(static_cast<uint>(ucs4));
	return static_cast<int>(_ret);
}

int QChar_DigitValueWithUcs4(unsigned int ucs4) {
	return QChar::digitValue(static_cast<uint>(ucs4));
}

unsigned int QChar_ToLowerWithUcs4(unsigned int ucs4) {
	uint _ret = QChar::toLower(static_cast<uint>(ucs4));
	return static_cast<unsigned int>(_ret);
}

unsigned int QChar_ToUpperWithUcs4(unsigned int ucs4) {
	uint _ret = QChar::toUpper(static_cast<uint>(ucs4));
	return static_cast<unsigned int>(_ret);
}

unsigned int QChar_ToTitleCaseWithUcs4(unsigned int ucs4) {
	uint _ret = QChar::toTitleCase(static_cast<uint>(ucs4));
	return static_cast<unsigned int>(_ret);
}

unsigned int QChar_ToCaseFoldedWithUcs4(unsigned int ucs4) {
	uint _ret = QChar::toCaseFolded(static_cast<uint>(ucs4));
	return static_cast<unsigned int>(_ret);
}

int QChar_ScriptWithUcs4(unsigned int ucs4) {
	QChar::Script _ret = QChar::script(static_cast<uint>(ucs4));
	return static_cast<int>(_ret);
}

int QChar_UnicodeVersionWithUcs4(unsigned int ucs4) {
	QChar::UnicodeVersion _ret = QChar::unicodeVersion(static_cast<uint>(ucs4));
	return static_cast<int>(_ret);
}

int QChar_CurrentUnicodeVersion() {
	QChar::UnicodeVersion _ret = QChar::currentUnicodeVersion();
	return static_cast<int>(_ret);
}

bool QChar_IsPrintWithUcs4(unsigned int ucs4) {
	return QChar::isPrint(static_cast<uint>(ucs4));
}

bool QChar_IsSpaceWithUcs4(unsigned int ucs4) {
	return QChar::isSpace(static_cast<uint>(ucs4));
}

bool QChar_IsMarkWithUcs4(unsigned int ucs4) {
	return QChar::isMark(static_cast<uint>(ucs4));
}

bool QChar_IsPunctWithUcs4(unsigned int ucs4) {
	return QChar::isPunct(static_cast<uint>(ucs4));
}

bool QChar_IsSymbolWithUcs4(unsigned int ucs4) {
	return QChar::isSymbol(static_cast<uint>(ucs4));
}

bool QChar_IsLetterWithUcs4(unsigned int ucs4) {
	return QChar::isLetter(static_cast<uint>(ucs4));
}

bool QChar_IsNumberWithUcs4(unsigned int ucs4) {
	return QChar::isNumber(static_cast<uint>(ucs4));
}

bool QChar_IsLetterOrNumberWithUcs4(unsigned int ucs4) {
	return QChar::isLetterOrNumber(static_cast<uint>(ucs4));
}

bool QChar_IsDigitWithUcs4(unsigned int ucs4) {
	return QChar::isDigit(static_cast<uint>(ucs4));
}

bool QChar_IsLowerWithUcs4(unsigned int ucs4) {
	return QChar::isLower(static_cast<uint>(ucs4));
}

bool QChar_IsUpperWithUcs4(unsigned int ucs4) {
	return QChar::isUpper(static_cast<uint>(ucs4));
}

bool QChar_IsTitleCaseWithUcs4(unsigned int ucs4) {
	return QChar::isTitleCase(static_cast<uint>(ucs4));
}

void QChar_Delete(QChar* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QChar*>( self );
	} else {
		delete self;
	}
}

