#include <QBrush>
#include <QColor>
#include <QFont>
#include <QList>
#include <QMap>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlockFormat>
#include <QTextCharFormat>
#include <QTextFormat>
#include <QTextFrameFormat>
#include <QTextImageFormat>
#include <QTextLength>
#include <QTextListFormat>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextOption__Tab
#include <QTextTableCellFormat>
#include <QTextTableFormat>
#include <QVariant>
#include <qtextformat.h>
#include "gen_qtextformat.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTextLength* QTextLength_new() {
	return new QTextLength();
}

QTextLength* QTextLength_new2(int type, double value) {
	return new QTextLength(static_cast<QTextLength::Type>(type), static_cast<qreal>(value));
}

QTextLength* QTextLength_new3(QTextLength* param1) {
	return new QTextLength(*param1);
}

int QTextLength_type(const QTextLength* self) {
	QTextLength::Type _ret = self->type();
	return static_cast<int>(_ret);
}

double QTextLength_value(const QTextLength* self, double maximumLength) {
	qreal _ret = self->value(static_cast<qreal>(maximumLength));
	return static_cast<double>(_ret);
}

double QTextLength_rawValue(const QTextLength* self) {
	qreal _ret = self->rawValue();
	return static_cast<double>(_ret);
}

bool QTextLength_operatorEqual(const QTextLength* self, QTextLength* other) {
	return (*self == *other);
}

bool QTextLength_operatorNotEqual(const QTextLength* self, QTextLength* other) {
	return (*self != *other);
}

QVariant* QTextLength_ToQVariant(const QTextLength* self) {
	return new QVariant(self->operator QVariant());
}

void QTextLength_delete(QTextLength* self) {
	delete self;
}

QTextFormat* QTextFormat_new() {
	return new QTextFormat();
}

QTextFormat* QTextFormat_new2(int type) {
	return new QTextFormat(static_cast<int>(type));
}

QTextFormat* QTextFormat_new3(QTextFormat* rhs) {
	return new QTextFormat(*rhs);
}

void QTextFormat_operatorAssign(QTextFormat* self, QTextFormat* rhs) {
	self->operator=(*rhs);
}

void QTextFormat_swap(QTextFormat* self, QTextFormat* other) {
	self->swap(*other);
}

void QTextFormat_merge(QTextFormat* self, QTextFormat* other) {
	self->merge(*other);
}

bool QTextFormat_isValid(const QTextFormat* self) {
	return self->isValid();
}

bool QTextFormat_isEmpty(const QTextFormat* self) {
	return self->isEmpty();
}

int QTextFormat_type(const QTextFormat* self) {
	return self->type();
}

int QTextFormat_objectIndex(const QTextFormat* self) {
	return self->objectIndex();
}

void QTextFormat_setObjectIndex(QTextFormat* self, int object) {
	self->setObjectIndex(static_cast<int>(object));
}

QVariant* QTextFormat_property(const QTextFormat* self, int propertyId) {
	return new QVariant(self->property(static_cast<int>(propertyId)));
}

void QTextFormat_setProperty(QTextFormat* self, int propertyId, QVariant* value) {
	self->setProperty(static_cast<int>(propertyId), *value);
}

void QTextFormat_clearProperty(QTextFormat* self, int propertyId) {
	self->clearProperty(static_cast<int>(propertyId));
}

bool QTextFormat_hasProperty(const QTextFormat* self, int propertyId) {
	return self->hasProperty(static_cast<int>(propertyId));
}

bool QTextFormat_boolProperty(const QTextFormat* self, int propertyId) {
	return self->boolProperty(static_cast<int>(propertyId));
}

int QTextFormat_intProperty(const QTextFormat* self, int propertyId) {
	return self->intProperty(static_cast<int>(propertyId));
}

double QTextFormat_doubleProperty(const QTextFormat* self, int propertyId) {
	qreal _ret = self->doubleProperty(static_cast<int>(propertyId));
	return static_cast<double>(_ret);
}

struct miqt_string QTextFormat_stringProperty(const QTextFormat* self, int propertyId) {
	QString _ret = self->stringProperty(static_cast<int>(propertyId));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QColor* QTextFormat_colorProperty(const QTextFormat* self, int propertyId) {
	return new QColor(self->colorProperty(static_cast<int>(propertyId)));
}

QPen* QTextFormat_penProperty(const QTextFormat* self, int propertyId) {
	return new QPen(self->penProperty(static_cast<int>(propertyId)));
}

QBrush* QTextFormat_brushProperty(const QTextFormat* self, int propertyId) {
	return new QBrush(self->brushProperty(static_cast<int>(propertyId)));
}

QTextLength* QTextFormat_lengthProperty(const QTextFormat* self, int propertyId) {
	return new QTextLength(self->lengthProperty(static_cast<int>(propertyId)));
}

struct miqt_array /* of QTextLength* */  QTextFormat_lengthVectorProperty(const QTextFormat* self, int propertyId) {
	QVector<QTextLength> _ret = self->lengthVectorProperty(static_cast<int>(propertyId));
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextLength** _arr = static_cast<QTextLength**>(malloc(sizeof(QTextLength*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextLength(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextFormat_setProperty2(QTextFormat* self, int propertyId, struct miqt_array /* of QTextLength* */  lengths) {
	QVector<QTextLength> lengths_QList;
	lengths_QList.reserve(lengths.len);
	QTextLength** lengths_arr = static_cast<QTextLength**>(lengths.data);
	for(size_t i = 0; i < lengths.len; ++i) {
		lengths_QList.push_back(*(lengths_arr[i]));
	}
	self->setProperty(static_cast<int>(propertyId), lengths_QList);
}

struct miqt_map /* of int to QVariant* */  QTextFormat_properties(const QTextFormat* self) {
	QMap<int, QVariant> _ret = self->properties();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

int QTextFormat_propertyCount(const QTextFormat* self) {
	return self->propertyCount();
}

void QTextFormat_setObjectType(QTextFormat* self, int type) {
	self->setObjectType(static_cast<int>(type));
}

int QTextFormat_objectType(const QTextFormat* self) {
	return self->objectType();
}

bool QTextFormat_isCharFormat(const QTextFormat* self) {
	return self->isCharFormat();
}

bool QTextFormat_isBlockFormat(const QTextFormat* self) {
	return self->isBlockFormat();
}

bool QTextFormat_isListFormat(const QTextFormat* self) {
	return self->isListFormat();
}

bool QTextFormat_isFrameFormat(const QTextFormat* self) {
	return self->isFrameFormat();
}

bool QTextFormat_isImageFormat(const QTextFormat* self) {
	return self->isImageFormat();
}

bool QTextFormat_isTableFormat(const QTextFormat* self) {
	return self->isTableFormat();
}

bool QTextFormat_isTableCellFormat(const QTextFormat* self) {
	return self->isTableCellFormat();
}

QTextBlockFormat* QTextFormat_toBlockFormat(const QTextFormat* self) {
	return new QTextBlockFormat(self->toBlockFormat());
}

QTextCharFormat* QTextFormat_toCharFormat(const QTextFormat* self) {
	return new QTextCharFormat(self->toCharFormat());
}

QTextListFormat* QTextFormat_toListFormat(const QTextFormat* self) {
	return new QTextListFormat(self->toListFormat());
}

QTextTableFormat* QTextFormat_toTableFormat(const QTextFormat* self) {
	return new QTextTableFormat(self->toTableFormat());
}

QTextFrameFormat* QTextFormat_toFrameFormat(const QTextFormat* self) {
	return new QTextFrameFormat(self->toFrameFormat());
}

QTextImageFormat* QTextFormat_toImageFormat(const QTextFormat* self) {
	return new QTextImageFormat(self->toImageFormat());
}

QTextTableCellFormat* QTextFormat_toTableCellFormat(const QTextFormat* self) {
	return new QTextTableCellFormat(self->toTableCellFormat());
}

bool QTextFormat_operatorEqual(const QTextFormat* self, QTextFormat* rhs) {
	return (*self == *rhs);
}

bool QTextFormat_operatorNotEqual(const QTextFormat* self, QTextFormat* rhs) {
	return (*self != *rhs);
}

QVariant* QTextFormat_ToQVariant(const QTextFormat* self) {
	return new QVariant(self->operator QVariant());
}

void QTextFormat_setLayoutDirection(QTextFormat* self, int direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

int QTextFormat_layoutDirection(const QTextFormat* self) {
	Qt::LayoutDirection _ret = self->layoutDirection();
	return static_cast<int>(_ret);
}

void QTextFormat_setBackground(QTextFormat* self, QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QTextFormat_background(const QTextFormat* self) {
	return new QBrush(self->background());
}

void QTextFormat_clearBackground(QTextFormat* self) {
	self->clearBackground();
}

void QTextFormat_setForeground(QTextFormat* self, QBrush* brush) {
	self->setForeground(*brush);
}

QBrush* QTextFormat_foreground(const QTextFormat* self) {
	return new QBrush(self->foreground());
}

void QTextFormat_clearForeground(QTextFormat* self) {
	self->clearForeground();
}

void QTextFormat_delete(QTextFormat* self) {
	delete self;
}

QTextCharFormat* QTextCharFormat_new() {
	return new QTextCharFormat();
}

QTextCharFormat* QTextCharFormat_new2(QTextCharFormat* param1) {
	return new QTextCharFormat(*param1);
}

void QTextCharFormat_virtbase(QTextCharFormat* src, QTextFormat** outptr_QTextFormat) {
	*outptr_QTextFormat = static_cast<QTextFormat*>(src);
}

bool QTextCharFormat_isValid(const QTextCharFormat* self) {
	return self->isValid();
}

void QTextCharFormat_setFont(QTextCharFormat* self, QFont* font, int behavior) {
	self->setFont(*font, static_cast<QTextCharFormat::FontPropertiesInheritanceBehavior>(behavior));
}

void QTextCharFormat_setFontWithFont(QTextCharFormat* self, QFont* font) {
	self->setFont(*font);
}

QFont* QTextCharFormat_font(const QTextCharFormat* self) {
	return new QFont(self->font());
}

void QTextCharFormat_setFontFamily(QTextCharFormat* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	self->setFontFamily(family_QString);
}

struct miqt_string QTextCharFormat_fontFamily(const QTextCharFormat* self) {
	QString _ret = self->fontFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextCharFormat_setFontFamilies(QTextCharFormat* self, struct miqt_array /* of struct miqt_string */  families) {
	QStringList families_QList;
	families_QList.reserve(families.len);
	struct miqt_string* families_arr = static_cast<struct miqt_string*>(families.data);
	for(size_t i = 0; i < families.len; ++i) {
		QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
		families_QList.push_back(families_arr_i_QString);
	}
	self->setFontFamilies(families_QList);
}

QVariant* QTextCharFormat_fontFamilies(const QTextCharFormat* self) {
	return new QVariant(self->fontFamilies());
}

void QTextCharFormat_setFontStyleName(QTextCharFormat* self, struct miqt_string styleName) {
	QString styleName_QString = QString::fromUtf8(styleName.data, styleName.len);
	self->setFontStyleName(styleName_QString);
}

QVariant* QTextCharFormat_fontStyleName(const QTextCharFormat* self) {
	return new QVariant(self->fontStyleName());
}

void QTextCharFormat_setFontPointSize(QTextCharFormat* self, double size) {
	self->setFontPointSize(static_cast<qreal>(size));
}

double QTextCharFormat_fontPointSize(const QTextCharFormat* self) {
	qreal _ret = self->fontPointSize();
	return static_cast<double>(_ret);
}

void QTextCharFormat_setFontWeight(QTextCharFormat* self, int weight) {
	self->setFontWeight(static_cast<int>(weight));
}

int QTextCharFormat_fontWeight(const QTextCharFormat* self) {
	return self->fontWeight();
}

void QTextCharFormat_setFontItalic(QTextCharFormat* self, bool italic) {
	self->setFontItalic(italic);
}

bool QTextCharFormat_fontItalic(const QTextCharFormat* self) {
	return self->fontItalic();
}

void QTextCharFormat_setFontCapitalization(QTextCharFormat* self, int capitalization) {
	self->setFontCapitalization(static_cast<QFont::Capitalization>(capitalization));
}

int QTextCharFormat_fontCapitalization(const QTextCharFormat* self) {
	QFont::Capitalization _ret = self->fontCapitalization();
	return static_cast<int>(_ret);
}

void QTextCharFormat_setFontLetterSpacingType(QTextCharFormat* self, int letterSpacingType) {
	self->setFontLetterSpacingType(static_cast<QFont::SpacingType>(letterSpacingType));
}

int QTextCharFormat_fontLetterSpacingType(const QTextCharFormat* self) {
	QFont::SpacingType _ret = self->fontLetterSpacingType();
	return static_cast<int>(_ret);
}

void QTextCharFormat_setFontLetterSpacing(QTextCharFormat* self, double spacing) {
	self->setFontLetterSpacing(static_cast<qreal>(spacing));
}

double QTextCharFormat_fontLetterSpacing(const QTextCharFormat* self) {
	qreal _ret = self->fontLetterSpacing();
	return static_cast<double>(_ret);
}

void QTextCharFormat_setFontWordSpacing(QTextCharFormat* self, double spacing) {
	self->setFontWordSpacing(static_cast<qreal>(spacing));
}

double QTextCharFormat_fontWordSpacing(const QTextCharFormat* self) {
	qreal _ret = self->fontWordSpacing();
	return static_cast<double>(_ret);
}

void QTextCharFormat_setFontUnderline(QTextCharFormat* self, bool underline) {
	self->setFontUnderline(underline);
}

bool QTextCharFormat_fontUnderline(const QTextCharFormat* self) {
	return self->fontUnderline();
}

void QTextCharFormat_setFontOverline(QTextCharFormat* self, bool overline) {
	self->setFontOverline(overline);
}

bool QTextCharFormat_fontOverline(const QTextCharFormat* self) {
	return self->fontOverline();
}

void QTextCharFormat_setFontStrikeOut(QTextCharFormat* self, bool strikeOut) {
	self->setFontStrikeOut(strikeOut);
}

bool QTextCharFormat_fontStrikeOut(const QTextCharFormat* self) {
	return self->fontStrikeOut();
}

void QTextCharFormat_setUnderlineColor(QTextCharFormat* self, QColor* color) {
	self->setUnderlineColor(*color);
}

QColor* QTextCharFormat_underlineColor(const QTextCharFormat* self) {
	return new QColor(self->underlineColor());
}

void QTextCharFormat_setFontFixedPitch(QTextCharFormat* self, bool fixedPitch) {
	self->setFontFixedPitch(fixedPitch);
}

bool QTextCharFormat_fontFixedPitch(const QTextCharFormat* self) {
	return self->fontFixedPitch();
}

void QTextCharFormat_setFontStretch(QTextCharFormat* self, int factor) {
	self->setFontStretch(static_cast<int>(factor));
}

int QTextCharFormat_fontStretch(const QTextCharFormat* self) {
	return self->fontStretch();
}

void QTextCharFormat_setFontStyleHint(QTextCharFormat* self, int hint) {
	self->setFontStyleHint(static_cast<QFont::StyleHint>(hint));
}

void QTextCharFormat_setFontStyleStrategy(QTextCharFormat* self, int strategy) {
	self->setFontStyleStrategy(static_cast<QFont::StyleStrategy>(strategy));
}

int QTextCharFormat_fontStyleHint(const QTextCharFormat* self) {
	QFont::StyleHint _ret = self->fontStyleHint();
	return static_cast<int>(_ret);
}

int QTextCharFormat_fontStyleStrategy(const QTextCharFormat* self) {
	QFont::StyleStrategy _ret = self->fontStyleStrategy();
	return static_cast<int>(_ret);
}

void QTextCharFormat_setFontHintingPreference(QTextCharFormat* self, int hintingPreference) {
	self->setFontHintingPreference(static_cast<QFont::HintingPreference>(hintingPreference));
}

int QTextCharFormat_fontHintingPreference(const QTextCharFormat* self) {
	QFont::HintingPreference _ret = self->fontHintingPreference();
	return static_cast<int>(_ret);
}

void QTextCharFormat_setFontKerning(QTextCharFormat* self, bool enable) {
	self->setFontKerning(enable);
}

bool QTextCharFormat_fontKerning(const QTextCharFormat* self) {
	return self->fontKerning();
}

void QTextCharFormat_setUnderlineStyle(QTextCharFormat* self, int style) {
	self->setUnderlineStyle(static_cast<QTextCharFormat::UnderlineStyle>(style));
}

int QTextCharFormat_underlineStyle(const QTextCharFormat* self) {
	QTextCharFormat::UnderlineStyle _ret = self->underlineStyle();
	return static_cast<int>(_ret);
}

void QTextCharFormat_setVerticalAlignment(QTextCharFormat* self, int alignment) {
	self->setVerticalAlignment(static_cast<QTextCharFormat::VerticalAlignment>(alignment));
}

int QTextCharFormat_verticalAlignment(const QTextCharFormat* self) {
	QTextCharFormat::VerticalAlignment _ret = self->verticalAlignment();
	return static_cast<int>(_ret);
}

void QTextCharFormat_setTextOutline(QTextCharFormat* self, QPen* pen) {
	self->setTextOutline(*pen);
}

QPen* QTextCharFormat_textOutline(const QTextCharFormat* self) {
	return new QPen(self->textOutline());
}

void QTextCharFormat_setToolTip(QTextCharFormat* self, struct miqt_string tip) {
	QString tip_QString = QString::fromUtf8(tip.data, tip.len);
	self->setToolTip(tip_QString);
}

struct miqt_string QTextCharFormat_toolTip(const QTextCharFormat* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextCharFormat_setAnchor(QTextCharFormat* self, bool anchor) {
	self->setAnchor(anchor);
}

bool QTextCharFormat_isAnchor(const QTextCharFormat* self) {
	return self->isAnchor();
}

void QTextCharFormat_setAnchorHref(QTextCharFormat* self, struct miqt_string value) {
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->setAnchorHref(value_QString);
}

struct miqt_string QTextCharFormat_anchorHref(const QTextCharFormat* self) {
	QString _ret = self->anchorHref();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextCharFormat_setAnchorName(QTextCharFormat* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setAnchorName(name_QString);
}

struct miqt_string QTextCharFormat_anchorName(const QTextCharFormat* self) {
	QString _ret = self->anchorName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextCharFormat_setAnchorNames(QTextCharFormat* self, struct miqt_array /* of struct miqt_string */  names) {
	QStringList names_QList;
	names_QList.reserve(names.len);
	struct miqt_string* names_arr = static_cast<struct miqt_string*>(names.data);
	for(size_t i = 0; i < names.len; ++i) {
		QString names_arr_i_QString = QString::fromUtf8(names_arr[i].data, names_arr[i].len);
		names_QList.push_back(names_arr_i_QString);
	}
	self->setAnchorNames(names_QList);
}

struct miqt_array /* of struct miqt_string */  QTextCharFormat_anchorNames(const QTextCharFormat* self) {
	QStringList _ret = self->anchorNames();
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

void QTextCharFormat_setTableCellRowSpan(QTextCharFormat* self, int tableCellRowSpan) {
	self->setTableCellRowSpan(static_cast<int>(tableCellRowSpan));
}

int QTextCharFormat_tableCellRowSpan(const QTextCharFormat* self) {
	return self->tableCellRowSpan();
}

void QTextCharFormat_setTableCellColumnSpan(QTextCharFormat* self, int tableCellColumnSpan) {
	self->setTableCellColumnSpan(static_cast<int>(tableCellColumnSpan));
}

int QTextCharFormat_tableCellColumnSpan(const QTextCharFormat* self) {
	return self->tableCellColumnSpan();
}

void QTextCharFormat_setFontStyleHint2(QTextCharFormat* self, int hint, int strategy) {
	self->setFontStyleHint(static_cast<QFont::StyleHint>(hint), static_cast<QFont::StyleStrategy>(strategy));
}

void QTextCharFormat_delete(QTextCharFormat* self) {
	delete self;
}

QTextBlockFormat* QTextBlockFormat_new() {
	return new QTextBlockFormat();
}

QTextBlockFormat* QTextBlockFormat_new2(QTextBlockFormat* param1) {
	return new QTextBlockFormat(*param1);
}

void QTextBlockFormat_virtbase(QTextBlockFormat* src, QTextFormat** outptr_QTextFormat) {
	*outptr_QTextFormat = static_cast<QTextFormat*>(src);
}

bool QTextBlockFormat_isValid(const QTextBlockFormat* self) {
	return self->isValid();
}

void QTextBlockFormat_setAlignment(QTextBlockFormat* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QTextBlockFormat_alignment(const QTextBlockFormat* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QTextBlockFormat_setTopMargin(QTextBlockFormat* self, double margin) {
	self->setTopMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_topMargin(const QTextBlockFormat* self) {
	qreal _ret = self->topMargin();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_setBottomMargin(QTextBlockFormat* self, double margin) {
	self->setBottomMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_bottomMargin(const QTextBlockFormat* self) {
	qreal _ret = self->bottomMargin();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_setLeftMargin(QTextBlockFormat* self, double margin) {
	self->setLeftMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_leftMargin(const QTextBlockFormat* self) {
	qreal _ret = self->leftMargin();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_setRightMargin(QTextBlockFormat* self, double margin) {
	self->setRightMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_rightMargin(const QTextBlockFormat* self) {
	qreal _ret = self->rightMargin();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_setTextIndent(QTextBlockFormat* self, double aindent) {
	self->setTextIndent(static_cast<qreal>(aindent));
}

double QTextBlockFormat_textIndent(const QTextBlockFormat* self) {
	qreal _ret = self->textIndent();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_setIndent(QTextBlockFormat* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QTextBlockFormat_indent(const QTextBlockFormat* self) {
	return self->indent();
}

void QTextBlockFormat_setHeadingLevel(QTextBlockFormat* self, int alevel) {
	self->setHeadingLevel(static_cast<int>(alevel));
}

int QTextBlockFormat_headingLevel(const QTextBlockFormat* self) {
	return self->headingLevel();
}

void QTextBlockFormat_setLineHeight(QTextBlockFormat* self, double height, int heightType) {
	self->setLineHeight(static_cast<qreal>(height), static_cast<int>(heightType));
}

double QTextBlockFormat_lineHeight(const QTextBlockFormat* self, double scriptLineHeight, double scaling) {
	qreal _ret = self->lineHeight(static_cast<qreal>(scriptLineHeight), static_cast<qreal>(scaling));
	return static_cast<double>(_ret);
}

double QTextBlockFormat_lineHeight2(const QTextBlockFormat* self) {
	qreal _ret = self->lineHeight();
	return static_cast<double>(_ret);
}

int QTextBlockFormat_lineHeightType(const QTextBlockFormat* self) {
	return self->lineHeightType();
}

void QTextBlockFormat_setNonBreakableLines(QTextBlockFormat* self, bool b) {
	self->setNonBreakableLines(b);
}

bool QTextBlockFormat_nonBreakableLines(const QTextBlockFormat* self) {
	return self->nonBreakableLines();
}

void QTextBlockFormat_setPageBreakPolicy(QTextBlockFormat* self, int flags) {
	self->setPageBreakPolicy(static_cast<QTextFormat::PageBreakFlags>(flags));
}

int QTextBlockFormat_pageBreakPolicy(const QTextBlockFormat* self) {
	QTextFormat::PageBreakFlags _ret = self->pageBreakPolicy();
	return static_cast<int>(_ret);
}

void QTextBlockFormat_setTabPositions(QTextBlockFormat* self, struct miqt_array /* of QTextOption__Tab* */  tabs) {
	QList<QTextOption::Tab> tabs_QList;
	tabs_QList.reserve(tabs.len);
	QTextOption__Tab** tabs_arr = static_cast<QTextOption__Tab**>(tabs.data);
	for(size_t i = 0; i < tabs.len; ++i) {
		tabs_QList.push_back(*(tabs_arr[i]));
	}
	self->setTabPositions(tabs_QList);
}

struct miqt_array /* of QTextOption__Tab* */  QTextBlockFormat_tabPositions(const QTextBlockFormat* self) {
	QList<QTextOption::Tab> _ret = self->tabPositions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextOption__Tab** _arr = static_cast<QTextOption__Tab**>(malloc(sizeof(QTextOption__Tab*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextOption::Tab(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextBlockFormat_setMarker(QTextBlockFormat* self, int marker) {
	self->setMarker(static_cast<QTextBlockFormat::MarkerType>(marker));
}

int QTextBlockFormat_marker(const QTextBlockFormat* self) {
	QTextBlockFormat::MarkerType _ret = self->marker();
	return static_cast<int>(_ret);
}

void QTextBlockFormat_delete(QTextBlockFormat* self) {
	delete self;
}

QTextListFormat* QTextListFormat_new() {
	return new QTextListFormat();
}

QTextListFormat* QTextListFormat_new2(QTextListFormat* param1) {
	return new QTextListFormat(*param1);
}

void QTextListFormat_virtbase(QTextListFormat* src, QTextFormat** outptr_QTextFormat) {
	*outptr_QTextFormat = static_cast<QTextFormat*>(src);
}

bool QTextListFormat_isValid(const QTextListFormat* self) {
	return self->isValid();
}

void QTextListFormat_setStyle(QTextListFormat* self, int style) {
	self->setStyle(static_cast<QTextListFormat::Style>(style));
}

int QTextListFormat_style(const QTextListFormat* self) {
	QTextListFormat::Style _ret = self->style();
	return static_cast<int>(_ret);
}

void QTextListFormat_setIndent(QTextListFormat* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QTextListFormat_indent(const QTextListFormat* self) {
	return self->indent();
}

void QTextListFormat_setNumberPrefix(QTextListFormat* self, struct miqt_string numberPrefix) {
	QString numberPrefix_QString = QString::fromUtf8(numberPrefix.data, numberPrefix.len);
	self->setNumberPrefix(numberPrefix_QString);
}

struct miqt_string QTextListFormat_numberPrefix(const QTextListFormat* self) {
	QString _ret = self->numberPrefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextListFormat_setNumberSuffix(QTextListFormat* self, struct miqt_string numberSuffix) {
	QString numberSuffix_QString = QString::fromUtf8(numberSuffix.data, numberSuffix.len);
	self->setNumberSuffix(numberSuffix_QString);
}

struct miqt_string QTextListFormat_numberSuffix(const QTextListFormat* self) {
	QString _ret = self->numberSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextListFormat_delete(QTextListFormat* self) {
	delete self;
}

QTextImageFormat* QTextImageFormat_new() {
	return new QTextImageFormat();
}

void QTextImageFormat_virtbase(QTextImageFormat* src, QTextCharFormat** outptr_QTextCharFormat) {
	*outptr_QTextCharFormat = static_cast<QTextCharFormat*>(src);
}

bool QTextImageFormat_isValid(const QTextImageFormat* self) {
	return self->isValid();
}

void QTextImageFormat_setName(QTextImageFormat* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

struct miqt_string QTextImageFormat_name(const QTextImageFormat* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextImageFormat_setWidth(QTextImageFormat* self, double width) {
	self->setWidth(static_cast<qreal>(width));
}

double QTextImageFormat_width(const QTextImageFormat* self) {
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

void QTextImageFormat_setHeight(QTextImageFormat* self, double height) {
	self->setHeight(static_cast<qreal>(height));
}

double QTextImageFormat_height(const QTextImageFormat* self) {
	qreal _ret = self->height();
	return static_cast<double>(_ret);
}

void QTextImageFormat_setQuality(QTextImageFormat* self) {
	self->setQuality();
}

int QTextImageFormat_quality(const QTextImageFormat* self) {
	return self->quality();
}

void QTextImageFormat_setQuality1(QTextImageFormat* self, int quality) {
	self->setQuality(static_cast<int>(quality));
}

void QTextImageFormat_delete(QTextImageFormat* self) {
	delete self;
}

QTextFrameFormat* QTextFrameFormat_new() {
	return new QTextFrameFormat();
}

QTextFrameFormat* QTextFrameFormat_new2(QTextFrameFormat* param1) {
	return new QTextFrameFormat(*param1);
}

void QTextFrameFormat_virtbase(QTextFrameFormat* src, QTextFormat** outptr_QTextFormat) {
	*outptr_QTextFormat = static_cast<QTextFormat*>(src);
}

bool QTextFrameFormat_isValid(const QTextFrameFormat* self) {
	return self->isValid();
}

void QTextFrameFormat_setPosition(QTextFrameFormat* self, int f) {
	self->setPosition(static_cast<QTextFrameFormat::Position>(f));
}

int QTextFrameFormat_position(const QTextFrameFormat* self) {
	QTextFrameFormat::Position _ret = self->position();
	return static_cast<int>(_ret);
}

void QTextFrameFormat_setBorder(QTextFrameFormat* self, double border) {
	self->setBorder(static_cast<qreal>(border));
}

double QTextFrameFormat_border(const QTextFrameFormat* self) {
	qreal _ret = self->border();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_setBorderBrush(QTextFrameFormat* self, QBrush* brush) {
	self->setBorderBrush(*brush);
}

QBrush* QTextFrameFormat_borderBrush(const QTextFrameFormat* self) {
	return new QBrush(self->borderBrush());
}

void QTextFrameFormat_setBorderStyle(QTextFrameFormat* self, int style) {
	self->setBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextFrameFormat_borderStyle(const QTextFrameFormat* self) {
	QTextFrameFormat::BorderStyle _ret = self->borderStyle();
	return static_cast<int>(_ret);
}

void QTextFrameFormat_setMargin(QTextFrameFormat* self, double margin) {
	self->setMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_margin(const QTextFrameFormat* self) {
	qreal _ret = self->margin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_setTopMargin(QTextFrameFormat* self, double margin) {
	self->setTopMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_topMargin(const QTextFrameFormat* self) {
	qreal _ret = self->topMargin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_setBottomMargin(QTextFrameFormat* self, double margin) {
	self->setBottomMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_bottomMargin(const QTextFrameFormat* self) {
	qreal _ret = self->bottomMargin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_setLeftMargin(QTextFrameFormat* self, double margin) {
	self->setLeftMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_leftMargin(const QTextFrameFormat* self) {
	qreal _ret = self->leftMargin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_setRightMargin(QTextFrameFormat* self, double margin) {
	self->setRightMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_rightMargin(const QTextFrameFormat* self) {
	qreal _ret = self->rightMargin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_setPadding(QTextFrameFormat* self, double padding) {
	self->setPadding(static_cast<qreal>(padding));
}

double QTextFrameFormat_padding(const QTextFrameFormat* self) {
	qreal _ret = self->padding();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_setWidth(QTextFrameFormat* self, double width) {
	self->setWidth(static_cast<qreal>(width));
}

void QTextFrameFormat_setWidthWithLength(QTextFrameFormat* self, QTextLength* length) {
	self->setWidth(*length);
}

QTextLength* QTextFrameFormat_width(const QTextFrameFormat* self) {
	return new QTextLength(self->width());
}

void QTextFrameFormat_setHeight(QTextFrameFormat* self, double height) {
	self->setHeight(static_cast<qreal>(height));
}

void QTextFrameFormat_setHeightWithHeight(QTextFrameFormat* self, QTextLength* height) {
	self->setHeight(*height);
}

QTextLength* QTextFrameFormat_height(const QTextFrameFormat* self) {
	return new QTextLength(self->height());
}

void QTextFrameFormat_setPageBreakPolicy(QTextFrameFormat* self, int flags) {
	self->setPageBreakPolicy(static_cast<QTextFormat::PageBreakFlags>(flags));
}

int QTextFrameFormat_pageBreakPolicy(const QTextFrameFormat* self) {
	QTextFormat::PageBreakFlags _ret = self->pageBreakPolicy();
	return static_cast<int>(_ret);
}

void QTextFrameFormat_delete(QTextFrameFormat* self) {
	delete self;
}

QTextTableFormat* QTextTableFormat_new() {
	return new QTextTableFormat();
}

void QTextTableFormat_virtbase(QTextTableFormat* src, QTextFrameFormat** outptr_QTextFrameFormat) {
	*outptr_QTextFrameFormat = static_cast<QTextFrameFormat*>(src);
}

bool QTextTableFormat_isValid(const QTextTableFormat* self) {
	return self->isValid();
}

int QTextTableFormat_columns(const QTextTableFormat* self) {
	return self->columns();
}

void QTextTableFormat_setColumns(QTextTableFormat* self, int columns) {
	self->setColumns(static_cast<int>(columns));
}

void QTextTableFormat_setColumnWidthConstraints(QTextTableFormat* self, struct miqt_array /* of QTextLength* */  constraints) {
	QVector<QTextLength> constraints_QList;
	constraints_QList.reserve(constraints.len);
	QTextLength** constraints_arr = static_cast<QTextLength**>(constraints.data);
	for(size_t i = 0; i < constraints.len; ++i) {
		constraints_QList.push_back(*(constraints_arr[i]));
	}
	self->setColumnWidthConstraints(constraints_QList);
}

struct miqt_array /* of QTextLength* */  QTextTableFormat_columnWidthConstraints(const QTextTableFormat* self) {
	QVector<QTextLength> _ret = self->columnWidthConstraints();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextLength** _arr = static_cast<QTextLength**>(malloc(sizeof(QTextLength*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextLength(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextTableFormat_clearColumnWidthConstraints(QTextTableFormat* self) {
	self->clearColumnWidthConstraints();
}

double QTextTableFormat_cellSpacing(const QTextTableFormat* self) {
	qreal _ret = self->cellSpacing();
	return static_cast<double>(_ret);
}

void QTextTableFormat_setCellSpacing(QTextTableFormat* self, double spacing) {
	self->setCellSpacing(static_cast<qreal>(spacing));
}

double QTextTableFormat_cellPadding(const QTextTableFormat* self) {
	qreal _ret = self->cellPadding();
	return static_cast<double>(_ret);
}

void QTextTableFormat_setCellPadding(QTextTableFormat* self, double padding) {
	self->setCellPadding(static_cast<qreal>(padding));
}

void QTextTableFormat_setAlignment(QTextTableFormat* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QTextTableFormat_alignment(const QTextTableFormat* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QTextTableFormat_setHeaderRowCount(QTextTableFormat* self, int count) {
	self->setHeaderRowCount(static_cast<int>(count));
}

int QTextTableFormat_headerRowCount(const QTextTableFormat* self) {
	return self->headerRowCount();
}

void QTextTableFormat_setBorderCollapse(QTextTableFormat* self, bool borderCollapse) {
	self->setBorderCollapse(borderCollapse);
}

bool QTextTableFormat_borderCollapse(const QTextTableFormat* self) {
	return self->borderCollapse();
}

void QTextTableFormat_delete(QTextTableFormat* self) {
	delete self;
}

QTextTableCellFormat* QTextTableCellFormat_new() {
	return new QTextTableCellFormat();
}

void QTextTableCellFormat_virtbase(QTextTableCellFormat* src, QTextCharFormat** outptr_QTextCharFormat) {
	*outptr_QTextCharFormat = static_cast<QTextCharFormat*>(src);
}

bool QTextTableCellFormat_isValid(const QTextTableCellFormat* self) {
	return self->isValid();
}

void QTextTableCellFormat_setTopPadding(QTextTableCellFormat* self, double padding) {
	self->setTopPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_topPadding(const QTextTableCellFormat* self) {
	qreal _ret = self->topPadding();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setBottomPadding(QTextTableCellFormat* self, double padding) {
	self->setBottomPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_bottomPadding(const QTextTableCellFormat* self) {
	qreal _ret = self->bottomPadding();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setLeftPadding(QTextTableCellFormat* self, double padding) {
	self->setLeftPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_leftPadding(const QTextTableCellFormat* self) {
	qreal _ret = self->leftPadding();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setRightPadding(QTextTableCellFormat* self, double padding) {
	self->setRightPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_rightPadding(const QTextTableCellFormat* self) {
	qreal _ret = self->rightPadding();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setPadding(QTextTableCellFormat* self, double padding) {
	self->setPadding(static_cast<qreal>(padding));
}

void QTextTableCellFormat_setTopBorder(QTextTableCellFormat* self, double width) {
	self->setTopBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_topBorder(const QTextTableCellFormat* self) {
	qreal _ret = self->topBorder();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setBottomBorder(QTextTableCellFormat* self, double width) {
	self->setBottomBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_bottomBorder(const QTextTableCellFormat* self) {
	qreal _ret = self->bottomBorder();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setLeftBorder(QTextTableCellFormat* self, double width) {
	self->setLeftBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_leftBorder(const QTextTableCellFormat* self) {
	qreal _ret = self->leftBorder();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setRightBorder(QTextTableCellFormat* self, double width) {
	self->setRightBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_rightBorder(const QTextTableCellFormat* self) {
	qreal _ret = self->rightBorder();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setBorder(QTextTableCellFormat* self, double width) {
	self->setBorder(static_cast<qreal>(width));
}

void QTextTableCellFormat_setTopBorderStyle(QTextTableCellFormat* self, int style) {
	self->setTopBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextTableCellFormat_topBorderStyle(const QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle _ret = self->topBorderStyle();
	return static_cast<int>(_ret);
}

void QTextTableCellFormat_setBottomBorderStyle(QTextTableCellFormat* self, int style) {
	self->setBottomBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextTableCellFormat_bottomBorderStyle(const QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle _ret = self->bottomBorderStyle();
	return static_cast<int>(_ret);
}

void QTextTableCellFormat_setLeftBorderStyle(QTextTableCellFormat* self, int style) {
	self->setLeftBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextTableCellFormat_leftBorderStyle(const QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle _ret = self->leftBorderStyle();
	return static_cast<int>(_ret);
}

void QTextTableCellFormat_setRightBorderStyle(QTextTableCellFormat* self, int style) {
	self->setRightBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextTableCellFormat_rightBorderStyle(const QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle _ret = self->rightBorderStyle();
	return static_cast<int>(_ret);
}

void QTextTableCellFormat_setBorderStyle(QTextTableCellFormat* self, int style) {
	self->setBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

void QTextTableCellFormat_setTopBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setTopBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_topBorderBrush(const QTextTableCellFormat* self) {
	return new QBrush(self->topBorderBrush());
}

void QTextTableCellFormat_setBottomBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setBottomBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_bottomBorderBrush(const QTextTableCellFormat* self) {
	return new QBrush(self->bottomBorderBrush());
}

void QTextTableCellFormat_setLeftBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setLeftBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_leftBorderBrush(const QTextTableCellFormat* self) {
	return new QBrush(self->leftBorderBrush());
}

void QTextTableCellFormat_setRightBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setRightBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_rightBorderBrush(const QTextTableCellFormat* self) {
	return new QBrush(self->rightBorderBrush());
}

void QTextTableCellFormat_setBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setBorderBrush(*brush);
}

void QTextTableCellFormat_delete(QTextTableCellFormat* self) {
	delete self;
}

