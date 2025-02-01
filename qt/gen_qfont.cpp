#include <QFont>
#include <QList>
#include <QPaintDevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qfont.h>
#include "gen_qfont.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QFont* QFont_new() {
	return new QFont();
}

QFont* QFont_new2(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
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

QFont* QFont_new6(struct miqt_string family, int pointSize) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return new QFont(family_QString, static_cast<int>(pointSize));
}

QFont* QFont_new7(struct miqt_string family, int pointSize, int weight) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return new QFont(family_QString, static_cast<int>(pointSize), static_cast<int>(weight));
}

QFont* QFont_new8(struct miqt_string family, int pointSize, int weight, bool italic) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return new QFont(family_QString, static_cast<int>(pointSize), static_cast<int>(weight), italic);
}

void QFont_swap(QFont* self, QFont* other) {
	self->swap(*other);
}

struct miqt_string QFont_family(const QFont* self) {
	QString _ret = self->family();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFont_setFamily(QFont* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	self->setFamily(family_QString);
}

struct miqt_array /* of struct miqt_string */  QFont_families(const QFont* self) {
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

void QFont_setFamilies(QFont* self, struct miqt_array /* of struct miqt_string */  families) {
	QStringList families_QList;
	families_QList.reserve(families.len);
	struct miqt_string* families_arr = static_cast<struct miqt_string*>(families.data);
	for(size_t i = 0; i < families.len; ++i) {
		QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
		families_QList.push_back(families_arr_i_QString);
	}
	self->setFamilies(families_QList);
}

struct miqt_string QFont_styleName(const QFont* self) {
	QString _ret = self->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFont_setStyleName(QFont* self, struct miqt_string styleName) {
	QString styleName_QString = QString::fromUtf8(styleName.data, styleName.len);
	self->setStyleName(styleName_QString);
}

int QFont_pointSize(const QFont* self) {
	return self->pointSize();
}

void QFont_setPointSize(QFont* self, int pointSize) {
	self->setPointSize(static_cast<int>(pointSize));
}

double QFont_pointSizeF(const QFont* self) {
	qreal _ret = self->pointSizeF();
	return static_cast<double>(_ret);
}

void QFont_setPointSizeF(QFont* self, double pointSizeF) {
	self->setPointSizeF(static_cast<qreal>(pointSizeF));
}

int QFont_pixelSize(const QFont* self) {
	return self->pixelSize();
}

void QFont_setPixelSize(QFont* self, int pixelSize) {
	self->setPixelSize(static_cast<int>(pixelSize));
}

int QFont_weight(const QFont* self) {
	return self->weight();
}

void QFont_setWeight(QFont* self, int weight) {
	self->setWeight(static_cast<int>(weight));
}

bool QFont_bold(const QFont* self) {
	return self->bold();
}

void QFont_setBold(QFont* self, bool bold) {
	self->setBold(bold);
}

void QFont_setStyle(QFont* self, int style) {
	self->setStyle(static_cast<QFont::Style>(style));
}

int QFont_style(const QFont* self) {
	QFont::Style _ret = self->style();
	return static_cast<int>(_ret);
}

bool QFont_italic(const QFont* self) {
	return self->italic();
}

void QFont_setItalic(QFont* self, bool b) {
	self->setItalic(b);
}

bool QFont_underline(const QFont* self) {
	return self->underline();
}

void QFont_setUnderline(QFont* self, bool underline) {
	self->setUnderline(underline);
}

bool QFont_overline(const QFont* self) {
	return self->overline();
}

void QFont_setOverline(QFont* self, bool overline) {
	self->setOverline(overline);
}

bool QFont_strikeOut(const QFont* self) {
	return self->strikeOut();
}

void QFont_setStrikeOut(QFont* self, bool strikeOut) {
	self->setStrikeOut(strikeOut);
}

bool QFont_fixedPitch(const QFont* self) {
	return self->fixedPitch();
}

void QFont_setFixedPitch(QFont* self, bool fixedPitch) {
	self->setFixedPitch(fixedPitch);
}

bool QFont_kerning(const QFont* self) {
	return self->kerning();
}

void QFont_setKerning(QFont* self, bool kerning) {
	self->setKerning(kerning);
}

int QFont_styleHint(const QFont* self) {
	QFont::StyleHint _ret = self->styleHint();
	return static_cast<int>(_ret);
}

int QFont_styleStrategy(const QFont* self) {
	QFont::StyleStrategy _ret = self->styleStrategy();
	return static_cast<int>(_ret);
}

void QFont_setStyleHint(QFont* self, int param1) {
	self->setStyleHint(static_cast<QFont::StyleHint>(param1));
}

void QFont_setStyleStrategy(QFont* self, int s) {
	self->setStyleStrategy(static_cast<QFont::StyleStrategy>(s));
}

int QFont_stretch(const QFont* self) {
	return self->stretch();
}

void QFont_setStretch(QFont* self, int stretch) {
	self->setStretch(static_cast<int>(stretch));
}

double QFont_letterSpacing(const QFont* self) {
	qreal _ret = self->letterSpacing();
	return static_cast<double>(_ret);
}

int QFont_letterSpacingType(const QFont* self) {
	QFont::SpacingType _ret = self->letterSpacingType();
	return static_cast<int>(_ret);
}

void QFont_setLetterSpacing(QFont* self, int type, double spacing) {
	self->setLetterSpacing(static_cast<QFont::SpacingType>(type), static_cast<qreal>(spacing));
}

double QFont_wordSpacing(const QFont* self) {
	qreal _ret = self->wordSpacing();
	return static_cast<double>(_ret);
}

void QFont_setWordSpacing(QFont* self, double spacing) {
	self->setWordSpacing(static_cast<qreal>(spacing));
}

void QFont_setCapitalization(QFont* self, int capitalization) {
	self->setCapitalization(static_cast<QFont::Capitalization>(capitalization));
}

int QFont_capitalization(const QFont* self) {
	QFont::Capitalization _ret = self->capitalization();
	return static_cast<int>(_ret);
}

void QFont_setHintingPreference(QFont* self, int hintingPreference) {
	self->setHintingPreference(static_cast<QFont::HintingPreference>(hintingPreference));
}

int QFont_hintingPreference(const QFont* self) {
	QFont::HintingPreference _ret = self->hintingPreference();
	return static_cast<int>(_ret);
}

bool QFont_rawMode(const QFont* self) {
	return self->rawMode();
}

void QFont_setRawMode(QFont* self, bool rawMode) {
	self->setRawMode(rawMode);
}

bool QFont_exactMatch(const QFont* self) {
	return self->exactMatch();
}

void QFont_operatorAssign(QFont* self, QFont* param1) {
	self->operator=(*param1);
}

bool QFont_operatorEqual(const QFont* self, QFont* param1) {
	return (*self == *param1);
}

bool QFont_operatorNotEqual(const QFont* self, QFont* param1) {
	return (*self != *param1);
}

bool QFont_operatorLesser(const QFont* self, QFont* param1) {
	return (*self < *param1);
}

QVariant* QFont_ToQVariant(const QFont* self) {
	return new QVariant(self->operator QVariant());
}

bool QFont_isCopyOf(const QFont* self, QFont* param1) {
	return self->isCopyOf(*param1);
}

void QFont_setRawName(QFont* self, struct miqt_string rawName) {
	QString rawName_QString = QString::fromUtf8(rawName.data, rawName.len);
	self->setRawName(rawName_QString);
}

struct miqt_string QFont_rawName(const QFont* self) {
	QString _ret = self->rawName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFont_key(const QFont* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFont_toString(const QFont* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFont_fromString(QFont* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->fromString(param1_QString);
}

struct miqt_string QFont_substitute(struct miqt_string param1) {
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

struct miqt_array /* of struct miqt_string */  QFont_substitutes(struct miqt_string param1) {
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

struct miqt_array /* of struct miqt_string */  QFont_substitutions() {
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

void QFont_insertSubstitution(struct miqt_string param1, struct miqt_string param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	QFont::insertSubstitution(param1_QString, param2_QString);
}

void QFont_insertSubstitutions(struct miqt_string param1, struct miqt_array /* of struct miqt_string */  param2) {
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

void QFont_removeSubstitutions(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QFont::removeSubstitutions(param1_QString);
}

void QFont_initialize() {
	QFont::initialize();
}

void QFont_cleanup() {
	QFont::cleanup();
}

void QFont_cacheStatistics() {
	QFont::cacheStatistics();
}

struct miqt_string QFont_defaultFamily(const QFont* self) {
	QString _ret = self->defaultFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFont_lastResortFamily(const QFont* self) {
	QString _ret = self->lastResortFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFont_lastResortFont(const QFont* self) {
	QString _ret = self->lastResortFont();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QFont* QFont_resolve(const QFont* self, QFont* param1) {
	return new QFont(self->resolve(*param1));
}

unsigned int QFont_resolve2(const QFont* self) {
	uint _ret = self->resolve();
	return static_cast<unsigned int>(_ret);
}

void QFont_resolveWithMask(QFont* self, unsigned int mask) {
	self->resolve(static_cast<uint>(mask));
}

void QFont_setStyleHint2(QFont* self, int param1, int param2) {
	self->setStyleHint(static_cast<QFont::StyleHint>(param1), static_cast<QFont::StyleStrategy>(param2));
}

void QFont_delete(QFont* self) {
	delete self;
}

