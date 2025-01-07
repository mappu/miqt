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

QTextLength* QTextLength_new2(int typeVal, double value) {
	return new QTextLength(static_cast<QTextLength::Type>(typeVal), static_cast<qreal>(value));
}

QTextLength* QTextLength_new3(QTextLength* param1) {
	return new QTextLength(*param1);
}

int QTextLength_Type(const QTextLength* self) {
	QTextLength::Type _ret = self->type();
	return static_cast<int>(_ret);
}

double QTextLength_Value(const QTextLength* self, double maximumLength) {
	qreal _ret = self->value(static_cast<qreal>(maximumLength));
	return static_cast<double>(_ret);
}

double QTextLength_RawValue(const QTextLength* self) {
	qreal _ret = self->rawValue();
	return static_cast<double>(_ret);
}

bool QTextLength_OperatorEqual(const QTextLength* self, QTextLength* other) {
	return (*self == *other);
}

bool QTextLength_OperatorNotEqual(const QTextLength* self, QTextLength* other) {
	return (*self != *other);
}

QVariant* QTextLength_ToQVariant(const QTextLength* self) {
	return new QVariant(self->operator QVariant());
}

void QTextLength_Delete(QTextLength* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextLength*>( self );
	} else {
		delete self;
	}
}

QTextFormat* QTextFormat_new() {
	return new QTextFormat();
}

QTextFormat* QTextFormat_new2(int typeVal) {
	return new QTextFormat(static_cast<int>(typeVal));
}

QTextFormat* QTextFormat_new3(QTextFormat* rhs) {
	return new QTextFormat(*rhs);
}

void QTextFormat_OperatorAssign(QTextFormat* self, QTextFormat* rhs) {
	self->operator=(*rhs);
}

void QTextFormat_Swap(QTextFormat* self, QTextFormat* other) {
	self->swap(*other);
}

void QTextFormat_Merge(QTextFormat* self, QTextFormat* other) {
	self->merge(*other);
}

bool QTextFormat_IsValid(const QTextFormat* self) {
	return self->isValid();
}

bool QTextFormat_IsEmpty(const QTextFormat* self) {
	return self->isEmpty();
}

int QTextFormat_Type(const QTextFormat* self) {
	return self->type();
}

int QTextFormat_ObjectIndex(const QTextFormat* self) {
	return self->objectIndex();
}

void QTextFormat_SetObjectIndex(QTextFormat* self, int object) {
	self->setObjectIndex(static_cast<int>(object));
}

QVariant* QTextFormat_Property(const QTextFormat* self, int propertyId) {
	return new QVariant(self->property(static_cast<int>(propertyId)));
}

void QTextFormat_SetProperty(QTextFormat* self, int propertyId, QVariant* value) {
	self->setProperty(static_cast<int>(propertyId), *value);
}

void QTextFormat_ClearProperty(QTextFormat* self, int propertyId) {
	self->clearProperty(static_cast<int>(propertyId));
}

bool QTextFormat_HasProperty(const QTextFormat* self, int propertyId) {
	return self->hasProperty(static_cast<int>(propertyId));
}

bool QTextFormat_BoolProperty(const QTextFormat* self, int propertyId) {
	return self->boolProperty(static_cast<int>(propertyId));
}

int QTextFormat_IntProperty(const QTextFormat* self, int propertyId) {
	return self->intProperty(static_cast<int>(propertyId));
}

double QTextFormat_DoubleProperty(const QTextFormat* self, int propertyId) {
	qreal _ret = self->doubleProperty(static_cast<int>(propertyId));
	return static_cast<double>(_ret);
}

struct miqt_string QTextFormat_StringProperty(const QTextFormat* self, int propertyId) {
	QString _ret = self->stringProperty(static_cast<int>(propertyId));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QColor* QTextFormat_ColorProperty(const QTextFormat* self, int propertyId) {
	return new QColor(self->colorProperty(static_cast<int>(propertyId)));
}

QPen* QTextFormat_PenProperty(const QTextFormat* self, int propertyId) {
	return new QPen(self->penProperty(static_cast<int>(propertyId)));
}

QBrush* QTextFormat_BrushProperty(const QTextFormat* self, int propertyId) {
	return new QBrush(self->brushProperty(static_cast<int>(propertyId)));
}

QTextLength* QTextFormat_LengthProperty(const QTextFormat* self, int propertyId) {
	return new QTextLength(self->lengthProperty(static_cast<int>(propertyId)));
}

struct miqt_array /* of QTextLength* */  QTextFormat_LengthVectorProperty(const QTextFormat* self, int propertyId) {
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

void QTextFormat_SetProperty2(QTextFormat* self, int propertyId, struct miqt_array /* of QTextLength* */  lengths) {
	QVector<QTextLength> lengths_QList;
	lengths_QList.reserve(lengths.len);
	QTextLength** lengths_arr = static_cast<QTextLength**>(lengths.data);
	for(size_t i = 0; i < lengths.len; ++i) {
		lengths_QList.push_back(*(lengths_arr[i]));
	}
	self->setProperty(static_cast<int>(propertyId), lengths_QList);
}

struct miqt_map /* of int to QVariant* */  QTextFormat_Properties(const QTextFormat* self) {
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

int QTextFormat_PropertyCount(const QTextFormat* self) {
	return self->propertyCount();
}

void QTextFormat_SetObjectType(QTextFormat* self, int typeVal) {
	self->setObjectType(static_cast<int>(typeVal));
}

int QTextFormat_ObjectType(const QTextFormat* self) {
	return self->objectType();
}

bool QTextFormat_IsCharFormat(const QTextFormat* self) {
	return self->isCharFormat();
}

bool QTextFormat_IsBlockFormat(const QTextFormat* self) {
	return self->isBlockFormat();
}

bool QTextFormat_IsListFormat(const QTextFormat* self) {
	return self->isListFormat();
}

bool QTextFormat_IsFrameFormat(const QTextFormat* self) {
	return self->isFrameFormat();
}

bool QTextFormat_IsImageFormat(const QTextFormat* self) {
	return self->isImageFormat();
}

bool QTextFormat_IsTableFormat(const QTextFormat* self) {
	return self->isTableFormat();
}

bool QTextFormat_IsTableCellFormat(const QTextFormat* self) {
	return self->isTableCellFormat();
}

QTextBlockFormat* QTextFormat_ToBlockFormat(const QTextFormat* self) {
	return new QTextBlockFormat(self->toBlockFormat());
}

QTextCharFormat* QTextFormat_ToCharFormat(const QTextFormat* self) {
	return new QTextCharFormat(self->toCharFormat());
}

QTextListFormat* QTextFormat_ToListFormat(const QTextFormat* self) {
	return new QTextListFormat(self->toListFormat());
}

QTextTableFormat* QTextFormat_ToTableFormat(const QTextFormat* self) {
	return new QTextTableFormat(self->toTableFormat());
}

QTextFrameFormat* QTextFormat_ToFrameFormat(const QTextFormat* self) {
	return new QTextFrameFormat(self->toFrameFormat());
}

QTextImageFormat* QTextFormat_ToImageFormat(const QTextFormat* self) {
	return new QTextImageFormat(self->toImageFormat());
}

QTextTableCellFormat* QTextFormat_ToTableCellFormat(const QTextFormat* self) {
	return new QTextTableCellFormat(self->toTableCellFormat());
}

bool QTextFormat_OperatorEqual(const QTextFormat* self, QTextFormat* rhs) {
	return (*self == *rhs);
}

bool QTextFormat_OperatorNotEqual(const QTextFormat* self, QTextFormat* rhs) {
	return (*self != *rhs);
}

QVariant* QTextFormat_ToQVariant(const QTextFormat* self) {
	return new QVariant(self->operator QVariant());
}

void QTextFormat_SetLayoutDirection(QTextFormat* self, int direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

int QTextFormat_LayoutDirection(const QTextFormat* self) {
	Qt::LayoutDirection _ret = self->layoutDirection();
	return static_cast<int>(_ret);
}

void QTextFormat_SetBackground(QTextFormat* self, QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QTextFormat_Background(const QTextFormat* self) {
	return new QBrush(self->background());
}

void QTextFormat_ClearBackground(QTextFormat* self) {
	self->clearBackground();
}

void QTextFormat_SetForeground(QTextFormat* self, QBrush* brush) {
	self->setForeground(*brush);
}

QBrush* QTextFormat_Foreground(const QTextFormat* self) {
	return new QBrush(self->foreground());
}

void QTextFormat_ClearForeground(QTextFormat* self) {
	self->clearForeground();
}

void QTextFormat_Delete(QTextFormat* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextFormat*>( self );
	} else {
		delete self;
	}
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

bool QTextCharFormat_IsValid(const QTextCharFormat* self) {
	return self->isValid();
}

void QTextCharFormat_SetFont(QTextCharFormat* self, QFont* font, int behavior) {
	self->setFont(*font, static_cast<QTextCharFormat::FontPropertiesInheritanceBehavior>(behavior));
}

void QTextCharFormat_SetFontWithFont(QTextCharFormat* self, QFont* font) {
	self->setFont(*font);
}

QFont* QTextCharFormat_Font(const QTextCharFormat* self) {
	return new QFont(self->font());
}

void QTextCharFormat_SetFontFamily(QTextCharFormat* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	self->setFontFamily(family_QString);
}

struct miqt_string QTextCharFormat_FontFamily(const QTextCharFormat* self) {
	QString _ret = self->fontFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextCharFormat_SetFontFamilies(QTextCharFormat* self, struct miqt_array /* of struct miqt_string */  families) {
	QStringList families_QList;
	families_QList.reserve(families.len);
	struct miqt_string* families_arr = static_cast<struct miqt_string*>(families.data);
	for(size_t i = 0; i < families.len; ++i) {
		QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
		families_QList.push_back(families_arr_i_QString);
	}
	self->setFontFamilies(families_QList);
}

QVariant* QTextCharFormat_FontFamilies(const QTextCharFormat* self) {
	return new QVariant(self->fontFamilies());
}

void QTextCharFormat_SetFontStyleName(QTextCharFormat* self, struct miqt_string styleName) {
	QString styleName_QString = QString::fromUtf8(styleName.data, styleName.len);
	self->setFontStyleName(styleName_QString);
}

QVariant* QTextCharFormat_FontStyleName(const QTextCharFormat* self) {
	return new QVariant(self->fontStyleName());
}

void QTextCharFormat_SetFontPointSize(QTextCharFormat* self, double size) {
	self->setFontPointSize(static_cast<qreal>(size));
}

double QTextCharFormat_FontPointSize(const QTextCharFormat* self) {
	qreal _ret = self->fontPointSize();
	return static_cast<double>(_ret);
}

void QTextCharFormat_SetFontWeight(QTextCharFormat* self, int weight) {
	self->setFontWeight(static_cast<int>(weight));
}

int QTextCharFormat_FontWeight(const QTextCharFormat* self) {
	return self->fontWeight();
}

void QTextCharFormat_SetFontItalic(QTextCharFormat* self, bool italic) {
	self->setFontItalic(italic);
}

bool QTextCharFormat_FontItalic(const QTextCharFormat* self) {
	return self->fontItalic();
}

void QTextCharFormat_SetFontCapitalization(QTextCharFormat* self, int capitalization) {
	self->setFontCapitalization(static_cast<QFont::Capitalization>(capitalization));
}

int QTextCharFormat_FontCapitalization(const QTextCharFormat* self) {
	QFont::Capitalization _ret = self->fontCapitalization();
	return static_cast<int>(_ret);
}

void QTextCharFormat_SetFontLetterSpacingType(QTextCharFormat* self, int letterSpacingType) {
	self->setFontLetterSpacingType(static_cast<QFont::SpacingType>(letterSpacingType));
}

int QTextCharFormat_FontLetterSpacingType(const QTextCharFormat* self) {
	QFont::SpacingType _ret = self->fontLetterSpacingType();
	return static_cast<int>(_ret);
}

void QTextCharFormat_SetFontLetterSpacing(QTextCharFormat* self, double spacing) {
	self->setFontLetterSpacing(static_cast<qreal>(spacing));
}

double QTextCharFormat_FontLetterSpacing(const QTextCharFormat* self) {
	qreal _ret = self->fontLetterSpacing();
	return static_cast<double>(_ret);
}

void QTextCharFormat_SetFontWordSpacing(QTextCharFormat* self, double spacing) {
	self->setFontWordSpacing(static_cast<qreal>(spacing));
}

double QTextCharFormat_FontWordSpacing(const QTextCharFormat* self) {
	qreal _ret = self->fontWordSpacing();
	return static_cast<double>(_ret);
}

void QTextCharFormat_SetFontUnderline(QTextCharFormat* self, bool underline) {
	self->setFontUnderline(underline);
}

bool QTextCharFormat_FontUnderline(const QTextCharFormat* self) {
	return self->fontUnderline();
}

void QTextCharFormat_SetFontOverline(QTextCharFormat* self, bool overline) {
	self->setFontOverline(overline);
}

bool QTextCharFormat_FontOverline(const QTextCharFormat* self) {
	return self->fontOverline();
}

void QTextCharFormat_SetFontStrikeOut(QTextCharFormat* self, bool strikeOut) {
	self->setFontStrikeOut(strikeOut);
}

bool QTextCharFormat_FontStrikeOut(const QTextCharFormat* self) {
	return self->fontStrikeOut();
}

void QTextCharFormat_SetUnderlineColor(QTextCharFormat* self, QColor* color) {
	self->setUnderlineColor(*color);
}

QColor* QTextCharFormat_UnderlineColor(const QTextCharFormat* self) {
	return new QColor(self->underlineColor());
}

void QTextCharFormat_SetFontFixedPitch(QTextCharFormat* self, bool fixedPitch) {
	self->setFontFixedPitch(fixedPitch);
}

bool QTextCharFormat_FontFixedPitch(const QTextCharFormat* self) {
	return self->fontFixedPitch();
}

void QTextCharFormat_SetFontStretch(QTextCharFormat* self, int factor) {
	self->setFontStretch(static_cast<int>(factor));
}

int QTextCharFormat_FontStretch(const QTextCharFormat* self) {
	return self->fontStretch();
}

void QTextCharFormat_SetFontStyleHint(QTextCharFormat* self, int hint) {
	self->setFontStyleHint(static_cast<QFont::StyleHint>(hint));
}

void QTextCharFormat_SetFontStyleStrategy(QTextCharFormat* self, int strategy) {
	self->setFontStyleStrategy(static_cast<QFont::StyleStrategy>(strategy));
}

int QTextCharFormat_FontStyleHint(const QTextCharFormat* self) {
	QFont::StyleHint _ret = self->fontStyleHint();
	return static_cast<int>(_ret);
}

int QTextCharFormat_FontStyleStrategy(const QTextCharFormat* self) {
	QFont::StyleStrategy _ret = self->fontStyleStrategy();
	return static_cast<int>(_ret);
}

void QTextCharFormat_SetFontHintingPreference(QTextCharFormat* self, int hintingPreference) {
	self->setFontHintingPreference(static_cast<QFont::HintingPreference>(hintingPreference));
}

int QTextCharFormat_FontHintingPreference(const QTextCharFormat* self) {
	QFont::HintingPreference _ret = self->fontHintingPreference();
	return static_cast<int>(_ret);
}

void QTextCharFormat_SetFontKerning(QTextCharFormat* self, bool enable) {
	self->setFontKerning(enable);
}

bool QTextCharFormat_FontKerning(const QTextCharFormat* self) {
	return self->fontKerning();
}

void QTextCharFormat_SetUnderlineStyle(QTextCharFormat* self, int style) {
	self->setUnderlineStyle(static_cast<QTextCharFormat::UnderlineStyle>(style));
}

int QTextCharFormat_UnderlineStyle(const QTextCharFormat* self) {
	QTextCharFormat::UnderlineStyle _ret = self->underlineStyle();
	return static_cast<int>(_ret);
}

void QTextCharFormat_SetVerticalAlignment(QTextCharFormat* self, int alignment) {
	self->setVerticalAlignment(static_cast<QTextCharFormat::VerticalAlignment>(alignment));
}

int QTextCharFormat_VerticalAlignment(const QTextCharFormat* self) {
	QTextCharFormat::VerticalAlignment _ret = self->verticalAlignment();
	return static_cast<int>(_ret);
}

void QTextCharFormat_SetTextOutline(QTextCharFormat* self, QPen* pen) {
	self->setTextOutline(*pen);
}

QPen* QTextCharFormat_TextOutline(const QTextCharFormat* self) {
	return new QPen(self->textOutline());
}

void QTextCharFormat_SetToolTip(QTextCharFormat* self, struct miqt_string tip) {
	QString tip_QString = QString::fromUtf8(tip.data, tip.len);
	self->setToolTip(tip_QString);
}

struct miqt_string QTextCharFormat_ToolTip(const QTextCharFormat* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextCharFormat_SetAnchor(QTextCharFormat* self, bool anchor) {
	self->setAnchor(anchor);
}

bool QTextCharFormat_IsAnchor(const QTextCharFormat* self) {
	return self->isAnchor();
}

void QTextCharFormat_SetAnchorHref(QTextCharFormat* self, struct miqt_string value) {
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->setAnchorHref(value_QString);
}

struct miqt_string QTextCharFormat_AnchorHref(const QTextCharFormat* self) {
	QString _ret = self->anchorHref();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextCharFormat_SetAnchorName(QTextCharFormat* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setAnchorName(name_QString);
}

struct miqt_string QTextCharFormat_AnchorName(const QTextCharFormat* self) {
	QString _ret = self->anchorName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextCharFormat_SetAnchorNames(QTextCharFormat* self, struct miqt_array /* of struct miqt_string */  names) {
	QStringList names_QList;
	names_QList.reserve(names.len);
	struct miqt_string* names_arr = static_cast<struct miqt_string*>(names.data);
	for(size_t i = 0; i < names.len; ++i) {
		QString names_arr_i_QString = QString::fromUtf8(names_arr[i].data, names_arr[i].len);
		names_QList.push_back(names_arr_i_QString);
	}
	self->setAnchorNames(names_QList);
}

struct miqt_array /* of struct miqt_string */  QTextCharFormat_AnchorNames(const QTextCharFormat* self) {
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

void QTextCharFormat_SetTableCellRowSpan(QTextCharFormat* self, int tableCellRowSpan) {
	self->setTableCellRowSpan(static_cast<int>(tableCellRowSpan));
}

int QTextCharFormat_TableCellRowSpan(const QTextCharFormat* self) {
	return self->tableCellRowSpan();
}

void QTextCharFormat_SetTableCellColumnSpan(QTextCharFormat* self, int tableCellColumnSpan) {
	self->setTableCellColumnSpan(static_cast<int>(tableCellColumnSpan));
}

int QTextCharFormat_TableCellColumnSpan(const QTextCharFormat* self) {
	return self->tableCellColumnSpan();
}

void QTextCharFormat_SetFontStyleHint2(QTextCharFormat* self, int hint, int strategy) {
	self->setFontStyleHint(static_cast<QFont::StyleHint>(hint), static_cast<QFont::StyleStrategy>(strategy));
}

void QTextCharFormat_Delete(QTextCharFormat* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextCharFormat*>( self );
	} else {
		delete self;
	}
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

bool QTextBlockFormat_IsValid(const QTextBlockFormat* self) {
	return self->isValid();
}

void QTextBlockFormat_SetAlignment(QTextBlockFormat* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QTextBlockFormat_Alignment(const QTextBlockFormat* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QTextBlockFormat_SetTopMargin(QTextBlockFormat* self, double margin) {
	self->setTopMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_TopMargin(const QTextBlockFormat* self) {
	qreal _ret = self->topMargin();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_SetBottomMargin(QTextBlockFormat* self, double margin) {
	self->setBottomMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_BottomMargin(const QTextBlockFormat* self) {
	qreal _ret = self->bottomMargin();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_SetLeftMargin(QTextBlockFormat* self, double margin) {
	self->setLeftMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_LeftMargin(const QTextBlockFormat* self) {
	qreal _ret = self->leftMargin();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_SetRightMargin(QTextBlockFormat* self, double margin) {
	self->setRightMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_RightMargin(const QTextBlockFormat* self) {
	qreal _ret = self->rightMargin();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_SetTextIndent(QTextBlockFormat* self, double aindent) {
	self->setTextIndent(static_cast<qreal>(aindent));
}

double QTextBlockFormat_TextIndent(const QTextBlockFormat* self) {
	qreal _ret = self->textIndent();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_SetIndent(QTextBlockFormat* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QTextBlockFormat_Indent(const QTextBlockFormat* self) {
	return self->indent();
}

void QTextBlockFormat_SetHeadingLevel(QTextBlockFormat* self, int alevel) {
	self->setHeadingLevel(static_cast<int>(alevel));
}

int QTextBlockFormat_HeadingLevel(const QTextBlockFormat* self) {
	return self->headingLevel();
}

void QTextBlockFormat_SetLineHeight(QTextBlockFormat* self, double height, int heightType) {
	self->setLineHeight(static_cast<qreal>(height), static_cast<int>(heightType));
}

double QTextBlockFormat_LineHeight(const QTextBlockFormat* self, double scriptLineHeight, double scaling) {
	qreal _ret = self->lineHeight(static_cast<qreal>(scriptLineHeight), static_cast<qreal>(scaling));
	return static_cast<double>(_ret);
}

double QTextBlockFormat_LineHeight2(const QTextBlockFormat* self) {
	qreal _ret = self->lineHeight();
	return static_cast<double>(_ret);
}

int QTextBlockFormat_LineHeightType(const QTextBlockFormat* self) {
	return self->lineHeightType();
}

void QTextBlockFormat_SetNonBreakableLines(QTextBlockFormat* self, bool b) {
	self->setNonBreakableLines(b);
}

bool QTextBlockFormat_NonBreakableLines(const QTextBlockFormat* self) {
	return self->nonBreakableLines();
}

void QTextBlockFormat_SetPageBreakPolicy(QTextBlockFormat* self, int flags) {
	self->setPageBreakPolicy(static_cast<QTextFormat::PageBreakFlags>(flags));
}

int QTextBlockFormat_PageBreakPolicy(const QTextBlockFormat* self) {
	QTextFormat::PageBreakFlags _ret = self->pageBreakPolicy();
	return static_cast<int>(_ret);
}

void QTextBlockFormat_SetTabPositions(QTextBlockFormat* self, struct miqt_array /* of QTextOption__Tab* */  tabs) {
	QList<QTextOption::Tab> tabs_QList;
	tabs_QList.reserve(tabs.len);
	QTextOption__Tab** tabs_arr = static_cast<QTextOption__Tab**>(tabs.data);
	for(size_t i = 0; i < tabs.len; ++i) {
		tabs_QList.push_back(*(tabs_arr[i]));
	}
	self->setTabPositions(tabs_QList);
}

struct miqt_array /* of QTextOption__Tab* */  QTextBlockFormat_TabPositions(const QTextBlockFormat* self) {
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

void QTextBlockFormat_SetMarker(QTextBlockFormat* self, int marker) {
	self->setMarker(static_cast<QTextBlockFormat::MarkerType>(marker));
}

int QTextBlockFormat_Marker(const QTextBlockFormat* self) {
	QTextBlockFormat::MarkerType _ret = self->marker();
	return static_cast<int>(_ret);
}

void QTextBlockFormat_Delete(QTextBlockFormat* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextBlockFormat*>( self );
	} else {
		delete self;
	}
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

bool QTextListFormat_IsValid(const QTextListFormat* self) {
	return self->isValid();
}

void QTextListFormat_SetStyle(QTextListFormat* self, int style) {
	self->setStyle(static_cast<QTextListFormat::Style>(style));
}

int QTextListFormat_Style(const QTextListFormat* self) {
	QTextListFormat::Style _ret = self->style();
	return static_cast<int>(_ret);
}

void QTextListFormat_SetIndent(QTextListFormat* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QTextListFormat_Indent(const QTextListFormat* self) {
	return self->indent();
}

void QTextListFormat_SetNumberPrefix(QTextListFormat* self, struct miqt_string numberPrefix) {
	QString numberPrefix_QString = QString::fromUtf8(numberPrefix.data, numberPrefix.len);
	self->setNumberPrefix(numberPrefix_QString);
}

struct miqt_string QTextListFormat_NumberPrefix(const QTextListFormat* self) {
	QString _ret = self->numberPrefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextListFormat_SetNumberSuffix(QTextListFormat* self, struct miqt_string numberSuffix) {
	QString numberSuffix_QString = QString::fromUtf8(numberSuffix.data, numberSuffix.len);
	self->setNumberSuffix(numberSuffix_QString);
}

struct miqt_string QTextListFormat_NumberSuffix(const QTextListFormat* self) {
	QString _ret = self->numberSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextListFormat_Delete(QTextListFormat* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextListFormat*>( self );
	} else {
		delete self;
	}
}

QTextImageFormat* QTextImageFormat_new() {
	return new QTextImageFormat();
}

void QTextImageFormat_virtbase(QTextImageFormat* src, QTextCharFormat** outptr_QTextCharFormat) {
	*outptr_QTextCharFormat = static_cast<QTextCharFormat*>(src);
}

bool QTextImageFormat_IsValid(const QTextImageFormat* self) {
	return self->isValid();
}

void QTextImageFormat_SetName(QTextImageFormat* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

struct miqt_string QTextImageFormat_Name(const QTextImageFormat* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextImageFormat_SetWidth(QTextImageFormat* self, double width) {
	self->setWidth(static_cast<qreal>(width));
}

double QTextImageFormat_Width(const QTextImageFormat* self) {
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

void QTextImageFormat_SetHeight(QTextImageFormat* self, double height) {
	self->setHeight(static_cast<qreal>(height));
}

double QTextImageFormat_Height(const QTextImageFormat* self) {
	qreal _ret = self->height();
	return static_cast<double>(_ret);
}

void QTextImageFormat_SetQuality(QTextImageFormat* self) {
	self->setQuality();
}

int QTextImageFormat_Quality(const QTextImageFormat* self) {
	return self->quality();
}

void QTextImageFormat_SetQuality1(QTextImageFormat* self, int quality) {
	self->setQuality(static_cast<int>(quality));
}

void QTextImageFormat_Delete(QTextImageFormat* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextImageFormat*>( self );
	} else {
		delete self;
	}
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

bool QTextFrameFormat_IsValid(const QTextFrameFormat* self) {
	return self->isValid();
}

void QTextFrameFormat_SetPosition(QTextFrameFormat* self, int f) {
	self->setPosition(static_cast<QTextFrameFormat::Position>(f));
}

int QTextFrameFormat_Position(const QTextFrameFormat* self) {
	QTextFrameFormat::Position _ret = self->position();
	return static_cast<int>(_ret);
}

void QTextFrameFormat_SetBorder(QTextFrameFormat* self, double border) {
	self->setBorder(static_cast<qreal>(border));
}

double QTextFrameFormat_Border(const QTextFrameFormat* self) {
	qreal _ret = self->border();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_SetBorderBrush(QTextFrameFormat* self, QBrush* brush) {
	self->setBorderBrush(*brush);
}

QBrush* QTextFrameFormat_BorderBrush(const QTextFrameFormat* self) {
	return new QBrush(self->borderBrush());
}

void QTextFrameFormat_SetBorderStyle(QTextFrameFormat* self, int style) {
	self->setBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextFrameFormat_BorderStyle(const QTextFrameFormat* self) {
	QTextFrameFormat::BorderStyle _ret = self->borderStyle();
	return static_cast<int>(_ret);
}

void QTextFrameFormat_SetMargin(QTextFrameFormat* self, double margin) {
	self->setMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_Margin(const QTextFrameFormat* self) {
	qreal _ret = self->margin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_SetTopMargin(QTextFrameFormat* self, double margin) {
	self->setTopMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_TopMargin(const QTextFrameFormat* self) {
	qreal _ret = self->topMargin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_SetBottomMargin(QTextFrameFormat* self, double margin) {
	self->setBottomMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_BottomMargin(const QTextFrameFormat* self) {
	qreal _ret = self->bottomMargin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_SetLeftMargin(QTextFrameFormat* self, double margin) {
	self->setLeftMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_LeftMargin(const QTextFrameFormat* self) {
	qreal _ret = self->leftMargin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_SetRightMargin(QTextFrameFormat* self, double margin) {
	self->setRightMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_RightMargin(const QTextFrameFormat* self) {
	qreal _ret = self->rightMargin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_SetPadding(QTextFrameFormat* self, double padding) {
	self->setPadding(static_cast<qreal>(padding));
}

double QTextFrameFormat_Padding(const QTextFrameFormat* self) {
	qreal _ret = self->padding();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_SetWidth(QTextFrameFormat* self, double width) {
	self->setWidth(static_cast<qreal>(width));
}

void QTextFrameFormat_SetWidthWithLength(QTextFrameFormat* self, QTextLength* length) {
	self->setWidth(*length);
}

QTextLength* QTextFrameFormat_Width(const QTextFrameFormat* self) {
	return new QTextLength(self->width());
}

void QTextFrameFormat_SetHeight(QTextFrameFormat* self, double height) {
	self->setHeight(static_cast<qreal>(height));
}

void QTextFrameFormat_SetHeightWithHeight(QTextFrameFormat* self, QTextLength* height) {
	self->setHeight(*height);
}

QTextLength* QTextFrameFormat_Height(const QTextFrameFormat* self) {
	return new QTextLength(self->height());
}

void QTextFrameFormat_SetPageBreakPolicy(QTextFrameFormat* self, int flags) {
	self->setPageBreakPolicy(static_cast<QTextFormat::PageBreakFlags>(flags));
}

int QTextFrameFormat_PageBreakPolicy(const QTextFrameFormat* self) {
	QTextFormat::PageBreakFlags _ret = self->pageBreakPolicy();
	return static_cast<int>(_ret);
}

void QTextFrameFormat_Delete(QTextFrameFormat* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextFrameFormat*>( self );
	} else {
		delete self;
	}
}

QTextTableFormat* QTextTableFormat_new() {
	return new QTextTableFormat();
}

void QTextTableFormat_virtbase(QTextTableFormat* src, QTextFrameFormat** outptr_QTextFrameFormat) {
	*outptr_QTextFrameFormat = static_cast<QTextFrameFormat*>(src);
}

bool QTextTableFormat_IsValid(const QTextTableFormat* self) {
	return self->isValid();
}

int QTextTableFormat_Columns(const QTextTableFormat* self) {
	return self->columns();
}

void QTextTableFormat_SetColumns(QTextTableFormat* self, int columns) {
	self->setColumns(static_cast<int>(columns));
}

void QTextTableFormat_SetColumnWidthConstraints(QTextTableFormat* self, struct miqt_array /* of QTextLength* */  constraints) {
	QVector<QTextLength> constraints_QList;
	constraints_QList.reserve(constraints.len);
	QTextLength** constraints_arr = static_cast<QTextLength**>(constraints.data);
	for(size_t i = 0; i < constraints.len; ++i) {
		constraints_QList.push_back(*(constraints_arr[i]));
	}
	self->setColumnWidthConstraints(constraints_QList);
}

struct miqt_array /* of QTextLength* */  QTextTableFormat_ColumnWidthConstraints(const QTextTableFormat* self) {
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

void QTextTableFormat_ClearColumnWidthConstraints(QTextTableFormat* self) {
	self->clearColumnWidthConstraints();
}

double QTextTableFormat_CellSpacing(const QTextTableFormat* self) {
	qreal _ret = self->cellSpacing();
	return static_cast<double>(_ret);
}

void QTextTableFormat_SetCellSpacing(QTextTableFormat* self, double spacing) {
	self->setCellSpacing(static_cast<qreal>(spacing));
}

double QTextTableFormat_CellPadding(const QTextTableFormat* self) {
	qreal _ret = self->cellPadding();
	return static_cast<double>(_ret);
}

void QTextTableFormat_SetCellPadding(QTextTableFormat* self, double padding) {
	self->setCellPadding(static_cast<qreal>(padding));
}

void QTextTableFormat_SetAlignment(QTextTableFormat* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QTextTableFormat_Alignment(const QTextTableFormat* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QTextTableFormat_SetHeaderRowCount(QTextTableFormat* self, int count) {
	self->setHeaderRowCount(static_cast<int>(count));
}

int QTextTableFormat_HeaderRowCount(const QTextTableFormat* self) {
	return self->headerRowCount();
}

void QTextTableFormat_SetBorderCollapse(QTextTableFormat* self, bool borderCollapse) {
	self->setBorderCollapse(borderCollapse);
}

bool QTextTableFormat_BorderCollapse(const QTextTableFormat* self) {
	return self->borderCollapse();
}

void QTextTableFormat_Delete(QTextTableFormat* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextTableFormat*>( self );
	} else {
		delete self;
	}
}

QTextTableCellFormat* QTextTableCellFormat_new() {
	return new QTextTableCellFormat();
}

void QTextTableCellFormat_virtbase(QTextTableCellFormat* src, QTextCharFormat** outptr_QTextCharFormat) {
	*outptr_QTextCharFormat = static_cast<QTextCharFormat*>(src);
}

bool QTextTableCellFormat_IsValid(const QTextTableCellFormat* self) {
	return self->isValid();
}

void QTextTableCellFormat_SetTopPadding(QTextTableCellFormat* self, double padding) {
	self->setTopPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_TopPadding(const QTextTableCellFormat* self) {
	qreal _ret = self->topPadding();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_SetBottomPadding(QTextTableCellFormat* self, double padding) {
	self->setBottomPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_BottomPadding(const QTextTableCellFormat* self) {
	qreal _ret = self->bottomPadding();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_SetLeftPadding(QTextTableCellFormat* self, double padding) {
	self->setLeftPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_LeftPadding(const QTextTableCellFormat* self) {
	qreal _ret = self->leftPadding();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_SetRightPadding(QTextTableCellFormat* self, double padding) {
	self->setRightPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_RightPadding(const QTextTableCellFormat* self) {
	qreal _ret = self->rightPadding();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_SetPadding(QTextTableCellFormat* self, double padding) {
	self->setPadding(static_cast<qreal>(padding));
}

void QTextTableCellFormat_SetTopBorder(QTextTableCellFormat* self, double width) {
	self->setTopBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_TopBorder(const QTextTableCellFormat* self) {
	qreal _ret = self->topBorder();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_SetBottomBorder(QTextTableCellFormat* self, double width) {
	self->setBottomBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_BottomBorder(const QTextTableCellFormat* self) {
	qreal _ret = self->bottomBorder();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_SetLeftBorder(QTextTableCellFormat* self, double width) {
	self->setLeftBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_LeftBorder(const QTextTableCellFormat* self) {
	qreal _ret = self->leftBorder();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_SetRightBorder(QTextTableCellFormat* self, double width) {
	self->setRightBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_RightBorder(const QTextTableCellFormat* self) {
	qreal _ret = self->rightBorder();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_SetBorder(QTextTableCellFormat* self, double width) {
	self->setBorder(static_cast<qreal>(width));
}

void QTextTableCellFormat_SetTopBorderStyle(QTextTableCellFormat* self, int style) {
	self->setTopBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextTableCellFormat_TopBorderStyle(const QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle _ret = self->topBorderStyle();
	return static_cast<int>(_ret);
}

void QTextTableCellFormat_SetBottomBorderStyle(QTextTableCellFormat* self, int style) {
	self->setBottomBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextTableCellFormat_BottomBorderStyle(const QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle _ret = self->bottomBorderStyle();
	return static_cast<int>(_ret);
}

void QTextTableCellFormat_SetLeftBorderStyle(QTextTableCellFormat* self, int style) {
	self->setLeftBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextTableCellFormat_LeftBorderStyle(const QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle _ret = self->leftBorderStyle();
	return static_cast<int>(_ret);
}

void QTextTableCellFormat_SetRightBorderStyle(QTextTableCellFormat* self, int style) {
	self->setRightBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextTableCellFormat_RightBorderStyle(const QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle _ret = self->rightBorderStyle();
	return static_cast<int>(_ret);
}

void QTextTableCellFormat_SetBorderStyle(QTextTableCellFormat* self, int style) {
	self->setBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

void QTextTableCellFormat_SetTopBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setTopBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_TopBorderBrush(const QTextTableCellFormat* self) {
	return new QBrush(self->topBorderBrush());
}

void QTextTableCellFormat_SetBottomBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setBottomBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_BottomBorderBrush(const QTextTableCellFormat* self) {
	return new QBrush(self->bottomBorderBrush());
}

void QTextTableCellFormat_SetLeftBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setLeftBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_LeftBorderBrush(const QTextTableCellFormat* self) {
	return new QBrush(self->leftBorderBrush());
}

void QTextTableCellFormat_SetRightBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setRightBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_RightBorderBrush(const QTextTableCellFormat* self) {
	return new QBrush(self->rightBorderBrush());
}

void QTextTableCellFormat_SetBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setBorderBrush(*brush);
}

void QTextTableCellFormat_Delete(QTextTableCellFormat* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextTableCellFormat*>( self );
	} else {
		delete self;
	}
}

