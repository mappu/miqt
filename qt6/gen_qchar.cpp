#include <QChar>
#include <QLatin1Char>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qchar.h>
#include "gen_qchar.h"
#include "_cgo_export.h"

void QLatin1Char_new(char c, QLatin1Char** outptr_QLatin1Char) {
	QLatin1Char* ret = new QLatin1Char(static_cast<char>(c));
	*outptr_QLatin1Char = ret;
}

void QLatin1Char_new2(QLatin1Char* param1, QLatin1Char** outptr_QLatin1Char) {
	QLatin1Char* ret = new QLatin1Char(*param1);
	*outptr_QLatin1Char = ret;
}

char QLatin1Char_ToLatin1(const QLatin1Char* self) {
	return self->toLatin1();
}

void QLatin1Char_Delete(QLatin1Char* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QLatin1Char*>( self );
	} else {
		delete self;
	}
}

void QChar_new(QChar** outptr_QChar) {
	QChar* ret = new QChar();
	*outptr_QChar = ret;
}

void QChar_new2(uint16_t rc, QChar** outptr_QChar) {
	QChar* ret = new QChar(static_cast<ushort>(rc));
	*outptr_QChar = ret;
}

void QChar_new3(unsigned char c, unsigned char r, QChar** outptr_QChar) {
	QChar* ret = new QChar(static_cast<uchar>(c), static_cast<uchar>(r));
	*outptr_QChar = ret;
}

void QChar_new4(int16_t rc, QChar** outptr_QChar) {
	QChar* ret = new QChar(static_cast<short>(rc));
	*outptr_QChar = ret;
}

void QChar_new5(unsigned int rc, QChar** outptr_QChar) {
	QChar* ret = new QChar(static_cast<uint>(rc));
	*outptr_QChar = ret;
}

void QChar_new6(int rc, QChar** outptr_QChar) {
	QChar* ret = new QChar(static_cast<int>(rc));
	*outptr_QChar = ret;
}

void QChar_new7(int s, QChar** outptr_QChar) {
	QChar* ret = new QChar(static_cast<QChar::SpecialCharacter>(s));
	*outptr_QChar = ret;
}

void QChar_new8(QLatin1Char* ch, QChar** outptr_QChar) {
	QChar* ret = new QChar(*ch);
	*outptr_QChar = ret;
}

void QChar_new9(char c, QChar** outptr_QChar) {
	QChar* ret = new QChar(static_cast<char>(c));
	*outptr_QChar = ret;
}

void QChar_new10(unsigned char c, QChar** outptr_QChar) {
	QChar* ret = new QChar(static_cast<uchar>(c));
	*outptr_QChar = ret;
}

void QChar_new11(QChar* param1, QChar** outptr_QChar) {
	QChar* ret = new QChar(*param1);
	*outptr_QChar = ret;
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

int QChar_CurrentUnicodeVersion() {
	QChar::UnicodeVersion _ret = QChar::currentUnicodeVersion();
	return static_cast<int>(_ret);
}

void QChar_Delete(QChar* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QChar*>( self );
	} else {
		delete self;
	}
}

