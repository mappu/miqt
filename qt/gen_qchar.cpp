#include "gen_qchar.h"
#include "qchar.h"

#include <QChar>
#include <QLatin1Char>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QLatin1Char* QLatin1Char_new(char c) {
	return new QLatin1Char(static_cast<char>(c));
}

QLatin1Char* QLatin1Char_new2(QLatin1Char* param1) {
	return new QLatin1Char(*param1);
}

char QLatin1Char_ToLatin1(QLatin1Char* self) {
	return self->toLatin1();
}

uint16_t QLatin1Char_Unicode(QLatin1Char* self) {
	return self->unicode();
}

void QLatin1Char_Delete(QLatin1Char* self) {
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

QChar* QChar_new7(QLatin1Char* ch) {
	return new QChar(*ch);
}

QChar* QChar_new8(char c) {
	return new QChar(static_cast<char>(c));
}

QChar* QChar_new9(unsigned char c) {
	return new QChar(static_cast<uchar>(c));
}

QChar* QChar_new10(QChar* param1) {
	return new QChar(*param1);
}

unsigned char QChar_CombiningClass(QChar* self) {
	return self->combiningClass();
}

QChar* QChar_MirroredChar(QChar* self) {
	QChar ret = self->mirroredChar();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

bool QChar_HasMirrored(QChar* self) {
	return self->hasMirrored();
}

void QChar_Decomposition(QChar* self, char** _out, int* _out_Strlen) {
	QString ret = self->decomposition();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QChar_DigitValue(QChar* self) {
	return self->digitValue();
}

QChar* QChar_ToLower(QChar* self) {
	QChar ret = self->toLower();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QChar_ToUpper(QChar* self) {
	QChar ret = self->toUpper();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QChar_ToTitleCase(QChar* self) {
	QChar ret = self->toTitleCase();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QChar_ToCaseFolded(QChar* self) {
	QChar ret = self->toCaseFolded();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

char QChar_ToLatin1(QChar* self) {
	return self->toLatin1();
}

uint16_t QChar_Unicode(QChar* self) {
	return self->unicode();
}

QChar* QChar_FromLatin1(char c) {
	QChar ret = QChar::fromLatin1(static_cast<char>(c));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

bool QChar_IsNull(QChar* self) {
	return self->isNull();
}

bool QChar_IsPrint(QChar* self) {
	return self->isPrint();
}

bool QChar_IsSpace(QChar* self) {
	return self->isSpace();
}

bool QChar_IsMark(QChar* self) {
	return self->isMark();
}

bool QChar_IsPunct(QChar* self) {
	return self->isPunct();
}

bool QChar_IsSymbol(QChar* self) {
	return self->isSymbol();
}

bool QChar_IsLetter(QChar* self) {
	return self->isLetter();
}

bool QChar_IsNumber(QChar* self) {
	return self->isNumber();
}

bool QChar_IsLetterOrNumber(QChar* self) {
	return self->isLetterOrNumber();
}

bool QChar_IsDigit(QChar* self) {
	return self->isDigit();
}

bool QChar_IsLower(QChar* self) {
	return self->isLower();
}

bool QChar_IsUpper(QChar* self) {
	return self->isUpper();
}

bool QChar_IsTitleCase(QChar* self) {
	return self->isTitleCase();
}

bool QChar_IsNonCharacter(QChar* self) {
	return self->isNonCharacter();
}

bool QChar_IsHighSurrogate(QChar* self) {
	return self->isHighSurrogate();
}

bool QChar_IsLowSurrogate(QChar* self) {
	return self->isLowSurrogate();
}

bool QChar_IsSurrogate(QChar* self) {
	return self->isSurrogate();
}

unsigned char QChar_Cell(QChar* self) {
	return self->cell();
}

unsigned char QChar_Row(QChar* self) {
	return self->row();
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
	return QChar::surrogateToUcs4(static_cast<ushort>(high), static_cast<ushort>(low));
}

unsigned int QChar_SurrogateToUcs42(QChar* high, QChar* low) {
	return QChar::surrogateToUcs4(*high, *low);
}

uint16_t QChar_HighSurrogate(unsigned int ucs4) {
	return QChar::highSurrogate(static_cast<uint>(ucs4));
}

uint16_t QChar_LowSurrogate(unsigned int ucs4) {
	return QChar::lowSurrogate(static_cast<uint>(ucs4));
}

unsigned char QChar_CombiningClassWithUcs4(unsigned int ucs4) {
	return QChar::combiningClass(static_cast<uint>(ucs4));
}

unsigned int QChar_MirroredCharWithUcs4(unsigned int ucs4) {
	return QChar::mirroredChar(static_cast<uint>(ucs4));
}

bool QChar_HasMirroredWithUcs4(unsigned int ucs4) {
	return QChar::hasMirrored(static_cast<uint>(ucs4));
}

void QChar_DecompositionWithUcs4(unsigned int ucs4, char** _out, int* _out_Strlen) {
	QString ret = QChar::decomposition(static_cast<uint>(ucs4));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QChar_DigitValueWithUcs4(unsigned int ucs4) {
	return QChar::digitValue(static_cast<uint>(ucs4));
}

unsigned int QChar_ToLowerWithUcs4(unsigned int ucs4) {
	return QChar::toLower(static_cast<uint>(ucs4));
}

unsigned int QChar_ToUpperWithUcs4(unsigned int ucs4) {
	return QChar::toUpper(static_cast<uint>(ucs4));
}

unsigned int QChar_ToTitleCaseWithUcs4(unsigned int ucs4) {
	return QChar::toTitleCase(static_cast<uint>(ucs4));
}

unsigned int QChar_ToCaseFoldedWithUcs4(unsigned int ucs4) {
	return QChar::toCaseFolded(static_cast<uint>(ucs4));
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

void QChar_Delete(QChar* self) {
	delete self;
}

