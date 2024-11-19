#include <QFont>
#include <QList>
#include <QPaintDevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfont.h>
#include "gen_qfont.h"
#include "_cgo_export.h"

void QFont_new(QFont** outptr_QFont) {
	QFont* ret = new QFont();
	*outptr_QFont = ret;
}

void QFont_new2(struct miqt_string family, QFont** outptr_QFont) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QFont* ret = new QFont(family_QString);
	*outptr_QFont = ret;
}

void QFont_new3(QFont* font, QPaintDevice* pd, QFont** outptr_QFont) {
	QFont* ret = new QFont(*font, pd);
	*outptr_QFont = ret;
}

void QFont_new4(QFont* font, QPaintDevice* pd, QFont** outptr_QFont) {
	QFont* ret = new QFont(*font, pd);
	*outptr_QFont = ret;
}

void QFont_new5(QFont* font, QFont** outptr_QFont) {
	QFont* ret = new QFont(*font);
	*outptr_QFont = ret;
}

void QFont_new6(struct miqt_string family, int pointSize, QFont** outptr_QFont) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QFont* ret = new QFont(family_QString, static_cast<int>(pointSize));
	*outptr_QFont = ret;
}

void QFont_new7(struct miqt_string family, int pointSize, int weight, QFont** outptr_QFont) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QFont* ret = new QFont(family_QString, static_cast<int>(pointSize), static_cast<int>(weight));
	*outptr_QFont = ret;
}

void QFont_new8(struct miqt_string family, int pointSize, int weight, bool italic, QFont** outptr_QFont) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QFont* ret = new QFont(family_QString, static_cast<int>(pointSize), static_cast<int>(weight), italic);
	*outptr_QFont = ret;
}

void QFont_Swap(QFont* self, QFont* other) {
	self->swap(*other);
}

struct miqt_string QFont_Family(const QFont* self) {
	QString _ret = self->family();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFont_SetFamily(QFont* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	self->setFamily(family_QString);
}

struct miqt_array /* of struct miqt_string */  QFont_Families(const QFont* self) {
	QStringList _ret = self->families();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFont_SetFamilies(QFont* self, struct miqt_array /* of struct miqt_string */  families) {
	QStringList families_QList;
	families_QList.reserve(families.len);
	struct miqt_string* families_arr = static_cast<struct miqt_string*>(families.data);
	for(size_t i = 0; i < families.len; ++i) {
		QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
		families_QList.push_back(families_arr_i_QString);
	}
	self->setFamilies(families_QList);
}

struct miqt_string QFont_StyleName(const QFont* self) {
	QString _ret = self->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFont_SetStyleName(QFont* self, struct miqt_string styleName) {
	QString styleName_QString = QString::fromUtf8(styleName.data, styleName.len);
	self->setStyleName(styleName_QString);
}

int QFont_PointSize(const QFont* self) {
	return self->pointSize();
}

void QFont_SetPointSize(QFont* self, int pointSize) {
	self->setPointSize(static_cast<int>(pointSize));
}

double QFont_PointSizeF(const QFont* self) {
	qreal _ret = self->pointSizeF();
	return static_cast<double>(_ret);
}

void QFont_SetPointSizeF(QFont* self, double pointSizeF) {
	self->setPointSizeF(static_cast<qreal>(pointSizeF));
}

int QFont_PixelSize(const QFont* self) {
	return self->pixelSize();
}

void QFont_SetPixelSize(QFont* self, int pixelSize) {
	self->setPixelSize(static_cast<int>(pixelSize));
}

int QFont_Weight(const QFont* self) {
	return self->weight();
}

void QFont_SetWeight(QFont* self, int weight) {
	self->setWeight(static_cast<int>(weight));
}

bool QFont_Bold(const QFont* self) {
	return self->bold();
}

void QFont_SetBold(QFont* self, bool bold) {
	self->setBold(bold);
}

void QFont_SetStyle(QFont* self, int style) {
	self->setStyle(static_cast<QFont::Style>(style));
}

int QFont_Style(const QFont* self) {
	QFont::Style _ret = self->style();
	return static_cast<int>(_ret);
}

bool QFont_Italic(const QFont* self) {
	return self->italic();
}

void QFont_SetItalic(QFont* self, bool b) {
	self->setItalic(b);
}

bool QFont_Underline(const QFont* self) {
	return self->underline();
}

void QFont_SetUnderline(QFont* self, bool underline) {
	self->setUnderline(underline);
}

bool QFont_Overline(const QFont* self) {
	return self->overline();
}

void QFont_SetOverline(QFont* self, bool overline) {
	self->setOverline(overline);
}

bool QFont_StrikeOut(const QFont* self) {
	return self->strikeOut();
}

void QFont_SetStrikeOut(QFont* self, bool strikeOut) {
	self->setStrikeOut(strikeOut);
}

bool QFont_FixedPitch(const QFont* self) {
	return self->fixedPitch();
}

void QFont_SetFixedPitch(QFont* self, bool fixedPitch) {
	self->setFixedPitch(fixedPitch);
}

bool QFont_Kerning(const QFont* self) {
	return self->kerning();
}

void QFont_SetKerning(QFont* self, bool kerning) {
	self->setKerning(kerning);
}

int QFont_StyleHint(const QFont* self) {
	QFont::StyleHint _ret = self->styleHint();
	return static_cast<int>(_ret);
}

int QFont_StyleStrategy(const QFont* self) {
	QFont::StyleStrategy _ret = self->styleStrategy();
	return static_cast<int>(_ret);
}

void QFont_SetStyleHint(QFont* self, int param1) {
	self->setStyleHint(static_cast<QFont::StyleHint>(param1));
}

void QFont_SetStyleStrategy(QFont* self, int s) {
	self->setStyleStrategy(static_cast<QFont::StyleStrategy>(s));
}

int QFont_Stretch(const QFont* self) {
	return self->stretch();
}

void QFont_SetStretch(QFont* self, int stretch) {
	self->setStretch(static_cast<int>(stretch));
}

double QFont_LetterSpacing(const QFont* self) {
	qreal _ret = self->letterSpacing();
	return static_cast<double>(_ret);
}

int QFont_LetterSpacingType(const QFont* self) {
	QFont::SpacingType _ret = self->letterSpacingType();
	return static_cast<int>(_ret);
}

void QFont_SetLetterSpacing(QFont* self, int typeVal, double spacing) {
	self->setLetterSpacing(static_cast<QFont::SpacingType>(typeVal), static_cast<qreal>(spacing));
}

double QFont_WordSpacing(const QFont* self) {
	qreal _ret = self->wordSpacing();
	return static_cast<double>(_ret);
}

void QFont_SetWordSpacing(QFont* self, double spacing) {
	self->setWordSpacing(static_cast<qreal>(spacing));
}

void QFont_SetCapitalization(QFont* self, int capitalization) {
	self->setCapitalization(static_cast<QFont::Capitalization>(capitalization));
}

int QFont_Capitalization(const QFont* self) {
	QFont::Capitalization _ret = self->capitalization();
	return static_cast<int>(_ret);
}

void QFont_SetHintingPreference(QFont* self, int hintingPreference) {
	self->setHintingPreference(static_cast<QFont::HintingPreference>(hintingPreference));
}

int QFont_HintingPreference(const QFont* self) {
	QFont::HintingPreference _ret = self->hintingPreference();
	return static_cast<int>(_ret);
}

bool QFont_RawMode(const QFont* self) {
	return self->rawMode();
}

void QFont_SetRawMode(QFont* self, bool rawMode) {
	self->setRawMode(rawMode);
}

bool QFont_ExactMatch(const QFont* self) {
	return self->exactMatch();
}

void QFont_OperatorAssign(QFont* self, QFont* param1) {
	self->operator=(*param1);
}

bool QFont_OperatorEqual(const QFont* self, QFont* param1) {
	return self->operator==(*param1);
}

bool QFont_OperatorNotEqual(const QFont* self, QFont* param1) {
	return self->operator!=(*param1);
}

bool QFont_OperatorLesser(const QFont* self, QFont* param1) {
	return self->operator<(*param1);
}

bool QFont_IsCopyOf(const QFont* self, QFont* param1) {
	return self->isCopyOf(*param1);
}

void QFont_SetRawName(QFont* self, struct miqt_string rawName) {
	QString rawName_QString = QString::fromUtf8(rawName.data, rawName.len);
	self->setRawName(rawName_QString);
}

struct miqt_string QFont_RawName(const QFont* self) {
	QString _ret = self->rawName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFont_Key(const QFont* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFont_ToString(const QFont* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFont_FromString(QFont* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->fromString(param1_QString);
}

struct miqt_string QFont_Substitute(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QString _ret = QFont::substitute(param1_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QFont_Substitutes(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QStringList _ret = QFont::substitutes(param1_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QFont_Substitutions() {
	QStringList _ret = QFont::substitutions();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFont_InsertSubstitution(struct miqt_string param1, struct miqt_string param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	QFont::insertSubstitution(param1_QString, param2_QString);
}

void QFont_InsertSubstitutions(struct miqt_string param1, struct miqt_array /* of struct miqt_string */  param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QStringList param2_QList;
	param2_QList.reserve(param2.len);
	struct miqt_string* param2_arr = static_cast<struct miqt_string*>(param2.data);
	for(size_t i = 0; i < param2.len; ++i) {
		QString param2_arr_i_QString = QString::fromUtf8(param2_arr[i].data, param2_arr[i].len);
		param2_QList.push_back(param2_arr_i_QString);
	}
	QFont::insertSubstitutions(param1_QString, param2_QList);
}

void QFont_RemoveSubstitutions(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
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

struct miqt_string QFont_DefaultFamily(const QFont* self) {
	QString _ret = self->defaultFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFont_LastResortFamily(const QFont* self) {
	QString _ret = self->lastResortFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFont_LastResortFont(const QFont* self) {
	QString _ret = self->lastResortFont();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QFont* QFont_Resolve(const QFont* self, QFont* param1) {
	return new QFont(self->resolve(*param1));
}

unsigned int QFont_Resolve2(const QFont* self) {
	uint _ret = self->resolve();
	return static_cast<unsigned int>(_ret);
}

void QFont_ResolveWithMask(QFont* self, unsigned int mask) {
	self->resolve(static_cast<uint>(mask));
}

void QFont_SetStyleHint2(QFont* self, int param1, int param2) {
	self->setStyleHint(static_cast<QFont::StyleHint>(param1), static_cast<QFont::StyleStrategy>(param2));
}

void QFont_Delete(QFont* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QFont*>( self );
	} else {
		delete self;
	}
}

