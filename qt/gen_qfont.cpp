#include <QFont>
#include <QList>
#include <QPaintDevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qfont.h"

#include "gen_qfont.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFont* QFont_new() {
	return new QFont();
}

QFont* QFont_new2(const char* family, size_t family_Strlen) {
	QString family_QString = QString::fromUtf8(family, family_Strlen);
	return new QFont(family_QString);
}

QFont* QFont_new3(QFont* font, QPaintDevice* pd) {
	return new QFont(*font, pd);
}

QFont* QFont_new4(QFont* font, QPaintDevice* pd) {
	return new QFont(*font, pd);
}

QFont* QFont_new5(QFont* font) {
	return new QFont(*font);
}

QFont* QFont_new6(const char* family, size_t family_Strlen, int pointSize) {
	QString family_QString = QString::fromUtf8(family, family_Strlen);
	return new QFont(family_QString, static_cast<int>(pointSize));
}

QFont* QFont_new7(const char* family, size_t family_Strlen, int pointSize, int weight) {
	QString family_QString = QString::fromUtf8(family, family_Strlen);
	return new QFont(family_QString, static_cast<int>(pointSize), static_cast<int>(weight));
}

QFont* QFont_new8(const char* family, size_t family_Strlen, int pointSize, int weight, bool italic) {
	QString family_QString = QString::fromUtf8(family, family_Strlen);
	return new QFont(family_QString, static_cast<int>(pointSize), static_cast<int>(weight), italic);
}

void QFont_Swap(QFont* self, QFont* other) {
	self->swap(*other);
}

void QFont_Family(QFont* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFont*>(self)->family();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFont_SetFamily(QFont* self, const char* family, size_t family_Strlen) {
	QString family_QString = QString::fromUtf8(family, family_Strlen);
	self->setFamily(family_QString);
}

void QFont_Families(QFont* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QFont*>(self)->families();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QFont_SetFamilies(QFont* self, char** families, uint64_t* families_Lengths, size_t families_len) {
	QList<QString> families_QList;
	families_QList.reserve(families_len);
	for(size_t i = 0; i < families_len; ++i) {
		families_QList.push_back(QString::fromUtf8(families[i], families_Lengths[i]));
	}
	self->setFamilies(families_QList);
}

void QFont_StyleName(QFont* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFont*>(self)->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFont_SetStyleName(QFont* self, const char* styleName, size_t styleName_Strlen) {
	QString styleName_QString = QString::fromUtf8(styleName, styleName_Strlen);
	self->setStyleName(styleName_QString);
}

int QFont_PointSize(QFont* self) {
	return const_cast<const QFont*>(self)->pointSize();
}

void QFont_SetPointSize(QFont* self, int pointSize) {
	self->setPointSize(static_cast<int>(pointSize));
}

double QFont_PointSizeF(QFont* self) {
	return const_cast<const QFont*>(self)->pointSizeF();
}

void QFont_SetPointSizeF(QFont* self, double pointSizeF) {
	self->setPointSizeF(static_cast<qreal>(pointSizeF));
}

int QFont_PixelSize(QFont* self) {
	return const_cast<const QFont*>(self)->pixelSize();
}

void QFont_SetPixelSize(QFont* self, int pixelSize) {
	self->setPixelSize(static_cast<int>(pixelSize));
}

int QFont_Weight(QFont* self) {
	return const_cast<const QFont*>(self)->weight();
}

void QFont_SetWeight(QFont* self, int weight) {
	self->setWeight(static_cast<int>(weight));
}

bool QFont_Bold(QFont* self) {
	return const_cast<const QFont*>(self)->bold();
}

void QFont_SetBold(QFont* self, bool bold) {
	self->setBold(bold);
}

void QFont_SetStyle(QFont* self, uintptr_t style) {
	self->setStyle(static_cast<QFont::Style>(style));
}

uintptr_t QFont_Style(QFont* self) {
	QFont::Style ret = const_cast<const QFont*>(self)->style();
	return static_cast<uintptr_t>(ret);
}

bool QFont_Italic(QFont* self) {
	return const_cast<const QFont*>(self)->italic();
}

void QFont_SetItalic(QFont* self, bool b) {
	self->setItalic(b);
}

bool QFont_Underline(QFont* self) {
	return const_cast<const QFont*>(self)->underline();
}

void QFont_SetUnderline(QFont* self, bool underline) {
	self->setUnderline(underline);
}

bool QFont_Overline(QFont* self) {
	return const_cast<const QFont*>(self)->overline();
}

void QFont_SetOverline(QFont* self, bool overline) {
	self->setOverline(overline);
}

bool QFont_StrikeOut(QFont* self) {
	return const_cast<const QFont*>(self)->strikeOut();
}

void QFont_SetStrikeOut(QFont* self, bool strikeOut) {
	self->setStrikeOut(strikeOut);
}

bool QFont_FixedPitch(QFont* self) {
	return const_cast<const QFont*>(self)->fixedPitch();
}

void QFont_SetFixedPitch(QFont* self, bool fixedPitch) {
	self->setFixedPitch(fixedPitch);
}

bool QFont_Kerning(QFont* self) {
	return const_cast<const QFont*>(self)->kerning();
}

void QFont_SetKerning(QFont* self, bool kerning) {
	self->setKerning(kerning);
}

uintptr_t QFont_StyleHint(QFont* self) {
	QFont::StyleHint ret = const_cast<const QFont*>(self)->styleHint();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QFont_StyleStrategy(QFont* self) {
	QFont::StyleStrategy ret = const_cast<const QFont*>(self)->styleStrategy();
	return static_cast<uintptr_t>(ret);
}

void QFont_SetStyleHint(QFont* self, uintptr_t param1) {
	self->setStyleHint(static_cast<QFont::StyleHint>(param1));
}

void QFont_SetStyleStrategy(QFont* self, uintptr_t s) {
	self->setStyleStrategy(static_cast<QFont::StyleStrategy>(s));
}

int QFont_Stretch(QFont* self) {
	return const_cast<const QFont*>(self)->stretch();
}

void QFont_SetStretch(QFont* self, int stretch) {
	self->setStretch(static_cast<int>(stretch));
}

double QFont_LetterSpacing(QFont* self) {
	return const_cast<const QFont*>(self)->letterSpacing();
}

uintptr_t QFont_LetterSpacingType(QFont* self) {
	QFont::SpacingType ret = const_cast<const QFont*>(self)->letterSpacingType();
	return static_cast<uintptr_t>(ret);
}

void QFont_SetLetterSpacing(QFont* self, uintptr_t typeVal, double spacing) {
	self->setLetterSpacing(static_cast<QFont::SpacingType>(typeVal), static_cast<qreal>(spacing));
}

double QFont_WordSpacing(QFont* self) {
	return const_cast<const QFont*>(self)->wordSpacing();
}

void QFont_SetWordSpacing(QFont* self, double spacing) {
	self->setWordSpacing(static_cast<qreal>(spacing));
}

void QFont_SetCapitalization(QFont* self, uintptr_t capitalization) {
	self->setCapitalization(static_cast<QFont::Capitalization>(capitalization));
}

uintptr_t QFont_Capitalization(QFont* self) {
	QFont::Capitalization ret = const_cast<const QFont*>(self)->capitalization();
	return static_cast<uintptr_t>(ret);
}

void QFont_SetHintingPreference(QFont* self, uintptr_t hintingPreference) {
	self->setHintingPreference(static_cast<QFont::HintingPreference>(hintingPreference));
}

uintptr_t QFont_HintingPreference(QFont* self) {
	QFont::HintingPreference ret = const_cast<const QFont*>(self)->hintingPreference();
	return static_cast<uintptr_t>(ret);
}

bool QFont_RawMode(QFont* self) {
	return const_cast<const QFont*>(self)->rawMode();
}

void QFont_SetRawMode(QFont* self, bool rawMode) {
	self->setRawMode(rawMode);
}

bool QFont_ExactMatch(QFont* self) {
	return const_cast<const QFont*>(self)->exactMatch();
}

void QFont_OperatorAssign(QFont* self, QFont* param1) {
	self->operator=(*param1);
}

bool QFont_OperatorEqual(QFont* self, QFont* param1) {
	return const_cast<const QFont*>(self)->operator==(*param1);
}

bool QFont_OperatorNotEqual(QFont* self, QFont* param1) {
	return const_cast<const QFont*>(self)->operator!=(*param1);
}

bool QFont_OperatorLesser(QFont* self, QFont* param1) {
	return const_cast<const QFont*>(self)->operator<(*param1);
}

bool QFont_IsCopyOf(QFont* self, QFont* param1) {
	return const_cast<const QFont*>(self)->isCopyOf(*param1);
}

void QFont_SetRawName(QFont* self, const char* rawName, size_t rawName_Strlen) {
	QString rawName_QString = QString::fromUtf8(rawName, rawName_Strlen);
	self->setRawName(rawName_QString);
}

void QFont_RawName(QFont* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFont*>(self)->rawName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFont_Key(QFont* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFont*>(self)->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFont_ToString(QFont* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFont*>(self)->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QFont_FromString(QFont* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return self->fromString(param1_QString);
}

void QFont_Substitute(const char* param1, size_t param1_Strlen, char** _out, int* _out_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QString ret = QFont::substitute(param1_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFont_Substitutes(const char* param1, size_t param1_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QStringList ret = QFont::substitutes(param1_QString);
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QFont_Substitutions(char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = QFont::substitutions();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QFont_InsertSubstitution(const char* param1, size_t param1_Strlen, const char* param2, size_t param2_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QString param2_QString = QString::fromUtf8(param2, param2_Strlen);
	QFont::insertSubstitution(param1_QString, param2_QString);
}

void QFont_InsertSubstitutions(const char* param1, size_t param1_Strlen, char** param2, uint64_t* param2_Lengths, size_t param2_len) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QList<QString> param2_QList;
	param2_QList.reserve(param2_len);
	for(size_t i = 0; i < param2_len; ++i) {
		param2_QList.push_back(QString::fromUtf8(param2[i], param2_Lengths[i]));
	}
	QFont::insertSubstitutions(param1_QString, param2_QList);
}

void QFont_RemoveSubstitutions(const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QFont::removeSubstitutions(param1_QString);
}

void QFont_Initialize() {
	QFont::initialize();
}

void QFont_Cleanup() {
	QFont::cleanup();
}

void QFont_CacheStatistics() {
	QFont::cacheStatistics();
}

void QFont_DefaultFamily(QFont* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFont*>(self)->defaultFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFont_LastResortFamily(QFont* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFont*>(self)->lastResortFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFont_LastResortFont(QFont* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFont*>(self)->lastResortFont();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QFont* QFont_Resolve(QFont* self, QFont* param1) {
	QFont ret = const_cast<const QFont*>(self)->resolve(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

unsigned int QFont_Resolve2(QFont* self) {
	return const_cast<const QFont*>(self)->resolve();
}

void QFont_ResolveWithMask(QFont* self, unsigned int mask) {
	self->resolve(static_cast<uint>(mask));
}

void QFont_SetStyleHint2(QFont* self, uintptr_t param1, uintptr_t param2) {
	self->setStyleHint(static_cast<QFont::StyleHint>(param1), static_cast<QFont::StyleStrategy>(param2));
}

void QFont_Delete(QFont* self) {
	delete self;
}

