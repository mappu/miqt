#include <QBrush>
#include <QColor>
#include <QFont>
#include <QList>
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
#include "qtextformat.h"

#include "gen_qtextformat.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextLength* QTextLength_new() {
	return new QTextLength();
}

QTextLength* QTextLength_new2(uintptr_t typeVal, double value) {
	return new QTextLength(static_cast<QTextLength::Type>(typeVal), static_cast<qreal>(value));
}

QTextLength* QTextLength_new3(QTextLength* param1) {
	return new QTextLength(*param1);
}

uintptr_t QTextLength_Type(QTextLength* self) {
	QTextLength::Type ret = const_cast<const QTextLength*>(self)->type();
	return static_cast<uintptr_t>(ret);
}

double QTextLength_Value(QTextLength* self, double maximumLength) {
	return const_cast<const QTextLength*>(self)->value(static_cast<qreal>(maximumLength));
}

double QTextLength_RawValue(QTextLength* self) {
	return const_cast<const QTextLength*>(self)->rawValue();
}

bool QTextLength_OperatorEqual(QTextLength* self, QTextLength* other) {
	return const_cast<const QTextLength*>(self)->operator==(*other);
}

bool QTextLength_OperatorNotEqual(QTextLength* self, QTextLength* other) {
	return const_cast<const QTextLength*>(self)->operator!=(*other);
}

void QTextLength_Delete(QTextLength* self) {
	delete self;
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

bool QTextFormat_IsValid(QTextFormat* self) {
	return const_cast<const QTextFormat*>(self)->isValid();
}

bool QTextFormat_IsEmpty(QTextFormat* self) {
	return const_cast<const QTextFormat*>(self)->isEmpty();
}

int QTextFormat_Type(QTextFormat* self) {
	return const_cast<const QTextFormat*>(self)->type();
}

int QTextFormat_ObjectIndex(QTextFormat* self) {
	return const_cast<const QTextFormat*>(self)->objectIndex();
}

void QTextFormat_SetObjectIndex(QTextFormat* self, int object) {
	self->setObjectIndex(static_cast<int>(object));
}

QVariant* QTextFormat_Property(QTextFormat* self, int propertyId) {
	QVariant ret = const_cast<const QTextFormat*>(self)->property(static_cast<int>(propertyId));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QTextFormat_SetProperty(QTextFormat* self, int propertyId, QVariant* value) {
	self->setProperty(static_cast<int>(propertyId), *value);
}

void QTextFormat_ClearProperty(QTextFormat* self, int propertyId) {
	self->clearProperty(static_cast<int>(propertyId));
}

bool QTextFormat_HasProperty(QTextFormat* self, int propertyId) {
	return const_cast<const QTextFormat*>(self)->hasProperty(static_cast<int>(propertyId));
}

bool QTextFormat_BoolProperty(QTextFormat* self, int propertyId) {
	return const_cast<const QTextFormat*>(self)->boolProperty(static_cast<int>(propertyId));
}

int QTextFormat_IntProperty(QTextFormat* self, int propertyId) {
	return const_cast<const QTextFormat*>(self)->intProperty(static_cast<int>(propertyId));
}

double QTextFormat_DoubleProperty(QTextFormat* self, int propertyId) {
	return const_cast<const QTextFormat*>(self)->doubleProperty(static_cast<int>(propertyId));
}

void QTextFormat_StringProperty(QTextFormat* self, int propertyId, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextFormat*>(self)->stringProperty(static_cast<int>(propertyId));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QColor* QTextFormat_ColorProperty(QTextFormat* self, int propertyId) {
	QColor ret = const_cast<const QTextFormat*>(self)->colorProperty(static_cast<int>(propertyId));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QPen* QTextFormat_PenProperty(QTextFormat* self, int propertyId) {
	QPen ret = const_cast<const QTextFormat*>(self)->penProperty(static_cast<int>(propertyId));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPen*>(new QPen(ret));
}

QBrush* QTextFormat_BrushProperty(QTextFormat* self, int propertyId) {
	QBrush ret = const_cast<const QTextFormat*>(self)->brushProperty(static_cast<int>(propertyId));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

QTextLength* QTextFormat_LengthProperty(QTextFormat* self, int propertyId) {
	QTextLength ret = const_cast<const QTextFormat*>(self)->lengthProperty(static_cast<int>(propertyId));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextLength*>(new QTextLength(ret));
}

void QTextFormat_LengthVectorProperty(QTextFormat* self, int propertyId, QTextLength*** _out, size_t* _out_len) {
	QVector<QTextLength> ret = const_cast<const QTextFormat*>(self)->lengthVectorProperty(static_cast<int>(propertyId));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QTextLength** __out = static_cast<QTextLength**>(malloc(sizeof(QTextLength**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QTextLength(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextFormat_SetProperty2(QTextFormat* self, int propertyId, QTextLength** lengths, size_t lengths_len) {
	QVector<QTextLength> lengths_QList;
	lengths_QList.reserve(lengths_len);
	for(size_t i = 0; i < lengths_len; ++i) {
		lengths_QList.push_back(*(lengths[i]));
	}
	self->setProperty(static_cast<int>(propertyId), lengths_QList);
}

int QTextFormat_PropertyCount(QTextFormat* self) {
	return const_cast<const QTextFormat*>(self)->propertyCount();
}

void QTextFormat_SetObjectType(QTextFormat* self, int typeVal) {
	self->setObjectType(static_cast<int>(typeVal));
}

int QTextFormat_ObjectType(QTextFormat* self) {
	return const_cast<const QTextFormat*>(self)->objectType();
}

bool QTextFormat_IsCharFormat(QTextFormat* self) {
	return const_cast<const QTextFormat*>(self)->isCharFormat();
}

bool QTextFormat_IsBlockFormat(QTextFormat* self) {
	return const_cast<const QTextFormat*>(self)->isBlockFormat();
}

bool QTextFormat_IsListFormat(QTextFormat* self) {
	return const_cast<const QTextFormat*>(self)->isListFormat();
}

bool QTextFormat_IsFrameFormat(QTextFormat* self) {
	return const_cast<const QTextFormat*>(self)->isFrameFormat();
}

bool QTextFormat_IsImageFormat(QTextFormat* self) {
	return const_cast<const QTextFormat*>(self)->isImageFormat();
}

bool QTextFormat_IsTableFormat(QTextFormat* self) {
	return const_cast<const QTextFormat*>(self)->isTableFormat();
}

bool QTextFormat_IsTableCellFormat(QTextFormat* self) {
	return const_cast<const QTextFormat*>(self)->isTableCellFormat();
}

QTextBlockFormat* QTextFormat_ToBlockFormat(QTextFormat* self) {
	QTextBlockFormat ret = const_cast<const QTextFormat*>(self)->toBlockFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlockFormat*>(new QTextBlockFormat(ret));
}

QTextCharFormat* QTextFormat_ToCharFormat(QTextFormat* self) {
	QTextCharFormat ret = const_cast<const QTextFormat*>(self)->toCharFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

QTextListFormat* QTextFormat_ToListFormat(QTextFormat* self) {
	QTextListFormat ret = const_cast<const QTextFormat*>(self)->toListFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextListFormat*>(new QTextListFormat(ret));
}

QTextTableFormat* QTextFormat_ToTableFormat(QTextFormat* self) {
	QTextTableFormat ret = const_cast<const QTextFormat*>(self)->toTableFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextTableFormat*>(new QTextTableFormat(ret));
}

QTextFrameFormat* QTextFormat_ToFrameFormat(QTextFormat* self) {
	QTextFrameFormat ret = const_cast<const QTextFormat*>(self)->toFrameFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFrameFormat*>(new QTextFrameFormat(ret));
}

QTextImageFormat* QTextFormat_ToImageFormat(QTextFormat* self) {
	QTextImageFormat ret = const_cast<const QTextFormat*>(self)->toImageFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextImageFormat*>(new QTextImageFormat(ret));
}

QTextTableCellFormat* QTextFormat_ToTableCellFormat(QTextFormat* self) {
	QTextTableCellFormat ret = const_cast<const QTextFormat*>(self)->toTableCellFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextTableCellFormat*>(new QTextTableCellFormat(ret));
}

bool QTextFormat_OperatorEqual(QTextFormat* self, QTextFormat* rhs) {
	return const_cast<const QTextFormat*>(self)->operator==(*rhs);
}

bool QTextFormat_OperatorNotEqual(QTextFormat* self, QTextFormat* rhs) {
	return const_cast<const QTextFormat*>(self)->operator!=(*rhs);
}

void QTextFormat_SetLayoutDirection(QTextFormat* self, uintptr_t direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

uintptr_t QTextFormat_LayoutDirection(QTextFormat* self) {
	Qt::LayoutDirection ret = const_cast<const QTextFormat*>(self)->layoutDirection();
	return static_cast<uintptr_t>(ret);
}

void QTextFormat_SetBackground(QTextFormat* self, QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QTextFormat_Background(QTextFormat* self) {
	QBrush ret = const_cast<const QTextFormat*>(self)->background();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTextFormat_ClearBackground(QTextFormat* self) {
	self->clearBackground();
}

void QTextFormat_SetForeground(QTextFormat* self, QBrush* brush) {
	self->setForeground(*brush);
}

QBrush* QTextFormat_Foreground(QTextFormat* self) {
	QBrush ret = const_cast<const QTextFormat*>(self)->foreground();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTextFormat_ClearForeground(QTextFormat* self) {
	self->clearForeground();
}

void QTextFormat_Delete(QTextFormat* self) {
	delete self;
}

QTextCharFormat* QTextCharFormat_new() {
	return new QTextCharFormat();
}

QTextCharFormat* QTextCharFormat_new2(QTextCharFormat* param1) {
	return new QTextCharFormat(*param1);
}

bool QTextCharFormat_IsValid(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->isValid();
}

void QTextCharFormat_SetFont(QTextCharFormat* self, QFont* font, uintptr_t behavior) {
	self->setFont(*font, static_cast<QTextCharFormat::FontPropertiesInheritanceBehavior>(behavior));
}

void QTextCharFormat_SetFontWithFont(QTextCharFormat* self, QFont* font) {
	self->setFont(*font);
}

QFont* QTextCharFormat_Font(QTextCharFormat* self) {
	QFont ret = const_cast<const QTextCharFormat*>(self)->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QTextCharFormat_SetFontFamily(QTextCharFormat* self, const char* family, size_t family_Strlen) {
	QString family_QString = QString::fromUtf8(family, family_Strlen);
	self->setFontFamily(family_QString);
}

void QTextCharFormat_FontFamily(QTextCharFormat* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextCharFormat*>(self)->fontFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextCharFormat_SetFontFamilies(QTextCharFormat* self, char** families, uint64_t* families_Lengths, size_t families_len) {
	QList<QString> families_QList;
	families_QList.reserve(families_len);
	for(size_t i = 0; i < families_len; ++i) {
		families_QList.push_back(QString::fromUtf8(families[i], families_Lengths[i]));
	}
	self->setFontFamilies(families_QList);
}

QVariant* QTextCharFormat_FontFamilies(QTextCharFormat* self) {
	QVariant ret = const_cast<const QTextCharFormat*>(self)->fontFamilies();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QTextCharFormat_SetFontStyleName(QTextCharFormat* self, const char* styleName, size_t styleName_Strlen) {
	QString styleName_QString = QString::fromUtf8(styleName, styleName_Strlen);
	self->setFontStyleName(styleName_QString);
}

QVariant* QTextCharFormat_FontStyleName(QTextCharFormat* self) {
	QVariant ret = const_cast<const QTextCharFormat*>(self)->fontStyleName();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QTextCharFormat_SetFontPointSize(QTextCharFormat* self, double size) {
	self->setFontPointSize(static_cast<qreal>(size));
}

double QTextCharFormat_FontPointSize(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->fontPointSize();
}

void QTextCharFormat_SetFontWeight(QTextCharFormat* self, int weight) {
	self->setFontWeight(static_cast<int>(weight));
}

int QTextCharFormat_FontWeight(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->fontWeight();
}

void QTextCharFormat_SetFontItalic(QTextCharFormat* self, bool italic) {
	self->setFontItalic(italic);
}

bool QTextCharFormat_FontItalic(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->fontItalic();
}

void QTextCharFormat_SetFontCapitalization(QTextCharFormat* self, uintptr_t capitalization) {
	self->setFontCapitalization(static_cast<QFont::Capitalization>(capitalization));
}

uintptr_t QTextCharFormat_FontCapitalization(QTextCharFormat* self) {
	QFont::Capitalization ret = const_cast<const QTextCharFormat*>(self)->fontCapitalization();
	return static_cast<uintptr_t>(ret);
}

void QTextCharFormat_SetFontLetterSpacingType(QTextCharFormat* self, uintptr_t letterSpacingType) {
	self->setFontLetterSpacingType(static_cast<QFont::SpacingType>(letterSpacingType));
}

uintptr_t QTextCharFormat_FontLetterSpacingType(QTextCharFormat* self) {
	QFont::SpacingType ret = const_cast<const QTextCharFormat*>(self)->fontLetterSpacingType();
	return static_cast<uintptr_t>(ret);
}

void QTextCharFormat_SetFontLetterSpacing(QTextCharFormat* self, double spacing) {
	self->setFontLetterSpacing(static_cast<qreal>(spacing));
}

double QTextCharFormat_FontLetterSpacing(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->fontLetterSpacing();
}

void QTextCharFormat_SetFontWordSpacing(QTextCharFormat* self, double spacing) {
	self->setFontWordSpacing(static_cast<qreal>(spacing));
}

double QTextCharFormat_FontWordSpacing(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->fontWordSpacing();
}

void QTextCharFormat_SetFontUnderline(QTextCharFormat* self, bool underline) {
	self->setFontUnderline(underline);
}

bool QTextCharFormat_FontUnderline(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->fontUnderline();
}

void QTextCharFormat_SetFontOverline(QTextCharFormat* self, bool overline) {
	self->setFontOverline(overline);
}

bool QTextCharFormat_FontOverline(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->fontOverline();
}

void QTextCharFormat_SetFontStrikeOut(QTextCharFormat* self, bool strikeOut) {
	self->setFontStrikeOut(strikeOut);
}

bool QTextCharFormat_FontStrikeOut(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->fontStrikeOut();
}

void QTextCharFormat_SetUnderlineColor(QTextCharFormat* self, QColor* color) {
	self->setUnderlineColor(*color);
}

QColor* QTextCharFormat_UnderlineColor(QTextCharFormat* self) {
	QColor ret = const_cast<const QTextCharFormat*>(self)->underlineColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QTextCharFormat_SetFontFixedPitch(QTextCharFormat* self, bool fixedPitch) {
	self->setFontFixedPitch(fixedPitch);
}

bool QTextCharFormat_FontFixedPitch(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->fontFixedPitch();
}

void QTextCharFormat_SetFontStretch(QTextCharFormat* self, int factor) {
	self->setFontStretch(static_cast<int>(factor));
}

int QTextCharFormat_FontStretch(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->fontStretch();
}

void QTextCharFormat_SetFontStyleHint(QTextCharFormat* self, uintptr_t hint) {
	self->setFontStyleHint(static_cast<QFont::StyleHint>(hint));
}

void QTextCharFormat_SetFontStyleStrategy(QTextCharFormat* self, uintptr_t strategy) {
	self->setFontStyleStrategy(static_cast<QFont::StyleStrategy>(strategy));
}

uintptr_t QTextCharFormat_FontStyleHint(QTextCharFormat* self) {
	QFont::StyleHint ret = const_cast<const QTextCharFormat*>(self)->fontStyleHint();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QTextCharFormat_FontStyleStrategy(QTextCharFormat* self) {
	QFont::StyleStrategy ret = const_cast<const QTextCharFormat*>(self)->fontStyleStrategy();
	return static_cast<uintptr_t>(ret);
}

void QTextCharFormat_SetFontHintingPreference(QTextCharFormat* self, uintptr_t hintingPreference) {
	self->setFontHintingPreference(static_cast<QFont::HintingPreference>(hintingPreference));
}

uintptr_t QTextCharFormat_FontHintingPreference(QTextCharFormat* self) {
	QFont::HintingPreference ret = const_cast<const QTextCharFormat*>(self)->fontHintingPreference();
	return static_cast<uintptr_t>(ret);
}

void QTextCharFormat_SetFontKerning(QTextCharFormat* self, bool enable) {
	self->setFontKerning(enable);
}

bool QTextCharFormat_FontKerning(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->fontKerning();
}

void QTextCharFormat_SetUnderlineStyle(QTextCharFormat* self, uintptr_t style) {
	self->setUnderlineStyle(static_cast<QTextCharFormat::UnderlineStyle>(style));
}

uintptr_t QTextCharFormat_UnderlineStyle(QTextCharFormat* self) {
	QTextCharFormat::UnderlineStyle ret = const_cast<const QTextCharFormat*>(self)->underlineStyle();
	return static_cast<uintptr_t>(ret);
}

void QTextCharFormat_SetVerticalAlignment(QTextCharFormat* self, uintptr_t alignment) {
	self->setVerticalAlignment(static_cast<QTextCharFormat::VerticalAlignment>(alignment));
}

uintptr_t QTextCharFormat_VerticalAlignment(QTextCharFormat* self) {
	QTextCharFormat::VerticalAlignment ret = const_cast<const QTextCharFormat*>(self)->verticalAlignment();
	return static_cast<uintptr_t>(ret);
}

void QTextCharFormat_SetTextOutline(QTextCharFormat* self, QPen* pen) {
	self->setTextOutline(*pen);
}

QPen* QTextCharFormat_TextOutline(QTextCharFormat* self) {
	QPen ret = const_cast<const QTextCharFormat*>(self)->textOutline();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPen*>(new QPen(ret));
}

void QTextCharFormat_SetToolTip(QTextCharFormat* self, const char* tip, size_t tip_Strlen) {
	QString tip_QString = QString::fromUtf8(tip, tip_Strlen);
	self->setToolTip(tip_QString);
}

void QTextCharFormat_ToolTip(QTextCharFormat* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextCharFormat*>(self)->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextCharFormat_SetAnchor(QTextCharFormat* self, bool anchor) {
	self->setAnchor(anchor);
}

bool QTextCharFormat_IsAnchor(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->isAnchor();
}

void QTextCharFormat_SetAnchorHref(QTextCharFormat* self, const char* value, size_t value_Strlen) {
	QString value_QString = QString::fromUtf8(value, value_Strlen);
	self->setAnchorHref(value_QString);
}

void QTextCharFormat_AnchorHref(QTextCharFormat* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextCharFormat*>(self)->anchorHref();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextCharFormat_SetAnchorName(QTextCharFormat* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->setAnchorName(name_QString);
}

void QTextCharFormat_AnchorName(QTextCharFormat* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextCharFormat*>(self)->anchorName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextCharFormat_SetAnchorNames(QTextCharFormat* self, char** names, uint64_t* names_Lengths, size_t names_len) {
	QList<QString> names_QList;
	names_QList.reserve(names_len);
	for(size_t i = 0; i < names_len; ++i) {
		names_QList.push_back(QString::fromUtf8(names[i], names_Lengths[i]));
	}
	self->setAnchorNames(names_QList);
}

void QTextCharFormat_AnchorNames(QTextCharFormat* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QTextCharFormat*>(self)->anchorNames();
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

void QTextCharFormat_SetTableCellRowSpan(QTextCharFormat* self, int tableCellRowSpan) {
	self->setTableCellRowSpan(static_cast<int>(tableCellRowSpan));
}

int QTextCharFormat_TableCellRowSpan(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->tableCellRowSpan();
}

void QTextCharFormat_SetTableCellColumnSpan(QTextCharFormat* self, int tableCellColumnSpan) {
	self->setTableCellColumnSpan(static_cast<int>(tableCellColumnSpan));
}

int QTextCharFormat_TableCellColumnSpan(QTextCharFormat* self) {
	return const_cast<const QTextCharFormat*>(self)->tableCellColumnSpan();
}

void QTextCharFormat_SetFontStyleHint2(QTextCharFormat* self, uintptr_t hint, uintptr_t strategy) {
	self->setFontStyleHint(static_cast<QFont::StyleHint>(hint), static_cast<QFont::StyleStrategy>(strategy));
}

void QTextCharFormat_Delete(QTextCharFormat* self) {
	delete self;
}

QTextBlockFormat* QTextBlockFormat_new() {
	return new QTextBlockFormat();
}

QTextBlockFormat* QTextBlockFormat_new2(QTextBlockFormat* param1) {
	return new QTextBlockFormat(*param1);
}

bool QTextBlockFormat_IsValid(QTextBlockFormat* self) {
	return const_cast<const QTextBlockFormat*>(self)->isValid();
}

void QTextBlockFormat_SetAlignment(QTextBlockFormat* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QTextBlockFormat_Alignment(QTextBlockFormat* self) {
	Qt::Alignment ret = const_cast<const QTextBlockFormat*>(self)->alignment();
	return static_cast<int>(ret);
}

void QTextBlockFormat_SetTopMargin(QTextBlockFormat* self, double margin) {
	self->setTopMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_TopMargin(QTextBlockFormat* self) {
	return const_cast<const QTextBlockFormat*>(self)->topMargin();
}

void QTextBlockFormat_SetBottomMargin(QTextBlockFormat* self, double margin) {
	self->setBottomMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_BottomMargin(QTextBlockFormat* self) {
	return const_cast<const QTextBlockFormat*>(self)->bottomMargin();
}

void QTextBlockFormat_SetLeftMargin(QTextBlockFormat* self, double margin) {
	self->setLeftMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_LeftMargin(QTextBlockFormat* self) {
	return const_cast<const QTextBlockFormat*>(self)->leftMargin();
}

void QTextBlockFormat_SetRightMargin(QTextBlockFormat* self, double margin) {
	self->setRightMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_RightMargin(QTextBlockFormat* self) {
	return const_cast<const QTextBlockFormat*>(self)->rightMargin();
}

void QTextBlockFormat_SetTextIndent(QTextBlockFormat* self, double aindent) {
	self->setTextIndent(static_cast<qreal>(aindent));
}

double QTextBlockFormat_TextIndent(QTextBlockFormat* self) {
	return const_cast<const QTextBlockFormat*>(self)->textIndent();
}

void QTextBlockFormat_SetIndent(QTextBlockFormat* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QTextBlockFormat_Indent(QTextBlockFormat* self) {
	return const_cast<const QTextBlockFormat*>(self)->indent();
}

void QTextBlockFormat_SetHeadingLevel(QTextBlockFormat* self, int alevel) {
	self->setHeadingLevel(static_cast<int>(alevel));
}

int QTextBlockFormat_HeadingLevel(QTextBlockFormat* self) {
	return const_cast<const QTextBlockFormat*>(self)->headingLevel();
}

void QTextBlockFormat_SetLineHeight(QTextBlockFormat* self, double height, int heightType) {
	self->setLineHeight(static_cast<qreal>(height), static_cast<int>(heightType));
}

double QTextBlockFormat_LineHeight(QTextBlockFormat* self, double scriptLineHeight, double scaling) {
	return const_cast<const QTextBlockFormat*>(self)->lineHeight(static_cast<qreal>(scriptLineHeight), static_cast<qreal>(scaling));
}

double QTextBlockFormat_LineHeight2(QTextBlockFormat* self) {
	return const_cast<const QTextBlockFormat*>(self)->lineHeight();
}

int QTextBlockFormat_LineHeightType(QTextBlockFormat* self) {
	return const_cast<const QTextBlockFormat*>(self)->lineHeightType();
}

void QTextBlockFormat_SetNonBreakableLines(QTextBlockFormat* self, bool b) {
	self->setNonBreakableLines(b);
}

bool QTextBlockFormat_NonBreakableLines(QTextBlockFormat* self) {
	return const_cast<const QTextBlockFormat*>(self)->nonBreakableLines();
}

void QTextBlockFormat_SetPageBreakPolicy(QTextBlockFormat* self, int flags) {
	self->setPageBreakPolicy(static_cast<QTextFormat::PageBreakFlags>(flags));
}

int QTextBlockFormat_PageBreakPolicy(QTextBlockFormat* self) {
	QTextFormat::PageBreakFlags ret = const_cast<const QTextBlockFormat*>(self)->pageBreakPolicy();
	return static_cast<int>(ret);
}

void QTextBlockFormat_SetTabPositions(QTextBlockFormat* self, QTextOption__Tab** tabs, size_t tabs_len) {
	QList<QTextOption::Tab> tabs_QList;
	tabs_QList.reserve(tabs_len);
	for(size_t i = 0; i < tabs_len; ++i) {
		tabs_QList.push_back(*(tabs[i]));
	}
	self->setTabPositions(tabs_QList);
}

void QTextBlockFormat_TabPositions(QTextBlockFormat* self, QTextOption__Tab*** _out, size_t* _out_len) {
	QList<QTextOption::Tab> ret = const_cast<const QTextBlockFormat*>(self)->tabPositions();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QTextOption__Tab** __out = static_cast<QTextOption__Tab**>(malloc(sizeof(QTextOption__Tab**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QTextOption::Tab(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextBlockFormat_SetMarker(QTextBlockFormat* self, uintptr_t marker) {
	self->setMarker(static_cast<QTextBlockFormat::MarkerType>(marker));
}

uintptr_t QTextBlockFormat_Marker(QTextBlockFormat* self) {
	QTextBlockFormat::MarkerType ret = const_cast<const QTextBlockFormat*>(self)->marker();
	return static_cast<uintptr_t>(ret);
}

void QTextBlockFormat_Delete(QTextBlockFormat* self) {
	delete self;
}

QTextListFormat* QTextListFormat_new() {
	return new QTextListFormat();
}

QTextListFormat* QTextListFormat_new2(QTextListFormat* param1) {
	return new QTextListFormat(*param1);
}

bool QTextListFormat_IsValid(QTextListFormat* self) {
	return const_cast<const QTextListFormat*>(self)->isValid();
}

void QTextListFormat_SetStyle(QTextListFormat* self, uintptr_t style) {
	self->setStyle(static_cast<QTextListFormat::Style>(style));
}

uintptr_t QTextListFormat_Style(QTextListFormat* self) {
	QTextListFormat::Style ret = const_cast<const QTextListFormat*>(self)->style();
	return static_cast<uintptr_t>(ret);
}

void QTextListFormat_SetIndent(QTextListFormat* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QTextListFormat_Indent(QTextListFormat* self) {
	return const_cast<const QTextListFormat*>(self)->indent();
}

void QTextListFormat_SetNumberPrefix(QTextListFormat* self, const char* numberPrefix, size_t numberPrefix_Strlen) {
	QString numberPrefix_QString = QString::fromUtf8(numberPrefix, numberPrefix_Strlen);
	self->setNumberPrefix(numberPrefix_QString);
}

void QTextListFormat_NumberPrefix(QTextListFormat* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextListFormat*>(self)->numberPrefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextListFormat_SetNumberSuffix(QTextListFormat* self, const char* numberSuffix, size_t numberSuffix_Strlen) {
	QString numberSuffix_QString = QString::fromUtf8(numberSuffix, numberSuffix_Strlen);
	self->setNumberSuffix(numberSuffix_QString);
}

void QTextListFormat_NumberSuffix(QTextListFormat* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextListFormat*>(self)->numberSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextListFormat_Delete(QTextListFormat* self) {
	delete self;
}

QTextImageFormat* QTextImageFormat_new() {
	return new QTextImageFormat();
}

bool QTextImageFormat_IsValid(QTextImageFormat* self) {
	return const_cast<const QTextImageFormat*>(self)->isValid();
}

void QTextImageFormat_SetName(QTextImageFormat* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->setName(name_QString);
}

void QTextImageFormat_Name(QTextImageFormat* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextImageFormat*>(self)->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextImageFormat_SetWidth(QTextImageFormat* self, double width) {
	self->setWidth(static_cast<qreal>(width));
}

double QTextImageFormat_Width(QTextImageFormat* self) {
	return const_cast<const QTextImageFormat*>(self)->width();
}

void QTextImageFormat_SetHeight(QTextImageFormat* self, double height) {
	self->setHeight(static_cast<qreal>(height));
}

double QTextImageFormat_Height(QTextImageFormat* self) {
	return const_cast<const QTextImageFormat*>(self)->height();
}

void QTextImageFormat_SetQuality(QTextImageFormat* self) {
	self->setQuality();
}

int QTextImageFormat_Quality(QTextImageFormat* self) {
	return const_cast<const QTextImageFormat*>(self)->quality();
}

void QTextImageFormat_SetQuality1(QTextImageFormat* self, int quality) {
	self->setQuality(static_cast<int>(quality));
}

void QTextImageFormat_Delete(QTextImageFormat* self) {
	delete self;
}

QTextFrameFormat* QTextFrameFormat_new() {
	return new QTextFrameFormat();
}

QTextFrameFormat* QTextFrameFormat_new2(QTextFrameFormat* param1) {
	return new QTextFrameFormat(*param1);
}

bool QTextFrameFormat_IsValid(QTextFrameFormat* self) {
	return const_cast<const QTextFrameFormat*>(self)->isValid();
}

void QTextFrameFormat_SetPosition(QTextFrameFormat* self, uintptr_t f) {
	self->setPosition(static_cast<QTextFrameFormat::Position>(f));
}

uintptr_t QTextFrameFormat_Position(QTextFrameFormat* self) {
	QTextFrameFormat::Position ret = const_cast<const QTextFrameFormat*>(self)->position();
	return static_cast<uintptr_t>(ret);
}

void QTextFrameFormat_SetBorder(QTextFrameFormat* self, double border) {
	self->setBorder(static_cast<qreal>(border));
}

double QTextFrameFormat_Border(QTextFrameFormat* self) {
	return const_cast<const QTextFrameFormat*>(self)->border();
}

void QTextFrameFormat_SetBorderBrush(QTextFrameFormat* self, QBrush* brush) {
	self->setBorderBrush(*brush);
}

QBrush* QTextFrameFormat_BorderBrush(QTextFrameFormat* self) {
	QBrush ret = const_cast<const QTextFrameFormat*>(self)->borderBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTextFrameFormat_SetBorderStyle(QTextFrameFormat* self, uintptr_t style) {
	self->setBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

uintptr_t QTextFrameFormat_BorderStyle(QTextFrameFormat* self) {
	QTextFrameFormat::BorderStyle ret = const_cast<const QTextFrameFormat*>(self)->borderStyle();
	return static_cast<uintptr_t>(ret);
}

void QTextFrameFormat_SetMargin(QTextFrameFormat* self, double margin) {
	self->setMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_Margin(QTextFrameFormat* self) {
	return const_cast<const QTextFrameFormat*>(self)->margin();
}

void QTextFrameFormat_SetTopMargin(QTextFrameFormat* self, double margin) {
	self->setTopMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_TopMargin(QTextFrameFormat* self) {
	return const_cast<const QTextFrameFormat*>(self)->topMargin();
}

void QTextFrameFormat_SetBottomMargin(QTextFrameFormat* self, double margin) {
	self->setBottomMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_BottomMargin(QTextFrameFormat* self) {
	return const_cast<const QTextFrameFormat*>(self)->bottomMargin();
}

void QTextFrameFormat_SetLeftMargin(QTextFrameFormat* self, double margin) {
	self->setLeftMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_LeftMargin(QTextFrameFormat* self) {
	return const_cast<const QTextFrameFormat*>(self)->leftMargin();
}

void QTextFrameFormat_SetRightMargin(QTextFrameFormat* self, double margin) {
	self->setRightMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_RightMargin(QTextFrameFormat* self) {
	return const_cast<const QTextFrameFormat*>(self)->rightMargin();
}

void QTextFrameFormat_SetPadding(QTextFrameFormat* self, double padding) {
	self->setPadding(static_cast<qreal>(padding));
}

double QTextFrameFormat_Padding(QTextFrameFormat* self) {
	return const_cast<const QTextFrameFormat*>(self)->padding();
}

void QTextFrameFormat_SetWidth(QTextFrameFormat* self, double width) {
	self->setWidth(static_cast<qreal>(width));
}

void QTextFrameFormat_SetWidthWithLength(QTextFrameFormat* self, QTextLength* length) {
	self->setWidth(*length);
}

QTextLength* QTextFrameFormat_Width(QTextFrameFormat* self) {
	QTextLength ret = const_cast<const QTextFrameFormat*>(self)->width();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextLength*>(new QTextLength(ret));
}

void QTextFrameFormat_SetHeight(QTextFrameFormat* self, double height) {
	self->setHeight(static_cast<qreal>(height));
}

void QTextFrameFormat_SetHeightWithHeight(QTextFrameFormat* self, QTextLength* height) {
	self->setHeight(*height);
}

QTextLength* QTextFrameFormat_Height(QTextFrameFormat* self) {
	QTextLength ret = const_cast<const QTextFrameFormat*>(self)->height();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextLength*>(new QTextLength(ret));
}

void QTextFrameFormat_SetPageBreakPolicy(QTextFrameFormat* self, int flags) {
	self->setPageBreakPolicy(static_cast<QTextFormat::PageBreakFlags>(flags));
}

int QTextFrameFormat_PageBreakPolicy(QTextFrameFormat* self) {
	QTextFormat::PageBreakFlags ret = const_cast<const QTextFrameFormat*>(self)->pageBreakPolicy();
	return static_cast<int>(ret);
}

void QTextFrameFormat_Delete(QTextFrameFormat* self) {
	delete self;
}

QTextTableFormat* QTextTableFormat_new() {
	return new QTextTableFormat();
}

bool QTextTableFormat_IsValid(QTextTableFormat* self) {
	return const_cast<const QTextTableFormat*>(self)->isValid();
}

int QTextTableFormat_Columns(QTextTableFormat* self) {
	return const_cast<const QTextTableFormat*>(self)->columns();
}

void QTextTableFormat_SetColumns(QTextTableFormat* self, int columns) {
	self->setColumns(static_cast<int>(columns));
}

void QTextTableFormat_SetColumnWidthConstraints(QTextTableFormat* self, QTextLength** constraints, size_t constraints_len) {
	QVector<QTextLength> constraints_QList;
	constraints_QList.reserve(constraints_len);
	for(size_t i = 0; i < constraints_len; ++i) {
		constraints_QList.push_back(*(constraints[i]));
	}
	self->setColumnWidthConstraints(constraints_QList);
}

void QTextTableFormat_ColumnWidthConstraints(QTextTableFormat* self, QTextLength*** _out, size_t* _out_len) {
	QVector<QTextLength> ret = const_cast<const QTextTableFormat*>(self)->columnWidthConstraints();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QTextLength** __out = static_cast<QTextLength**>(malloc(sizeof(QTextLength**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QTextLength(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextTableFormat_ClearColumnWidthConstraints(QTextTableFormat* self) {
	self->clearColumnWidthConstraints();
}

double QTextTableFormat_CellSpacing(QTextTableFormat* self) {
	return const_cast<const QTextTableFormat*>(self)->cellSpacing();
}

void QTextTableFormat_SetCellSpacing(QTextTableFormat* self, double spacing) {
	self->setCellSpacing(static_cast<qreal>(spacing));
}

double QTextTableFormat_CellPadding(QTextTableFormat* self) {
	return const_cast<const QTextTableFormat*>(self)->cellPadding();
}

void QTextTableFormat_SetCellPadding(QTextTableFormat* self, double padding) {
	self->setCellPadding(static_cast<qreal>(padding));
}

void QTextTableFormat_SetAlignment(QTextTableFormat* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QTextTableFormat_Alignment(QTextTableFormat* self) {
	Qt::Alignment ret = const_cast<const QTextTableFormat*>(self)->alignment();
	return static_cast<int>(ret);
}

void QTextTableFormat_SetHeaderRowCount(QTextTableFormat* self, int count) {
	self->setHeaderRowCount(static_cast<int>(count));
}

int QTextTableFormat_HeaderRowCount(QTextTableFormat* self) {
	return const_cast<const QTextTableFormat*>(self)->headerRowCount();
}

void QTextTableFormat_SetBorderCollapse(QTextTableFormat* self, bool borderCollapse) {
	self->setBorderCollapse(borderCollapse);
}

bool QTextTableFormat_BorderCollapse(QTextTableFormat* self) {
	return const_cast<const QTextTableFormat*>(self)->borderCollapse();
}

void QTextTableFormat_Delete(QTextTableFormat* self) {
	delete self;
}

QTextTableCellFormat* QTextTableCellFormat_new() {
	return new QTextTableCellFormat();
}

bool QTextTableCellFormat_IsValid(QTextTableCellFormat* self) {
	return const_cast<const QTextTableCellFormat*>(self)->isValid();
}

void QTextTableCellFormat_SetTopPadding(QTextTableCellFormat* self, double padding) {
	self->setTopPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_TopPadding(QTextTableCellFormat* self) {
	return const_cast<const QTextTableCellFormat*>(self)->topPadding();
}

void QTextTableCellFormat_SetBottomPadding(QTextTableCellFormat* self, double padding) {
	self->setBottomPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_BottomPadding(QTextTableCellFormat* self) {
	return const_cast<const QTextTableCellFormat*>(self)->bottomPadding();
}

void QTextTableCellFormat_SetLeftPadding(QTextTableCellFormat* self, double padding) {
	self->setLeftPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_LeftPadding(QTextTableCellFormat* self) {
	return const_cast<const QTextTableCellFormat*>(self)->leftPadding();
}

void QTextTableCellFormat_SetRightPadding(QTextTableCellFormat* self, double padding) {
	self->setRightPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_RightPadding(QTextTableCellFormat* self) {
	return const_cast<const QTextTableCellFormat*>(self)->rightPadding();
}

void QTextTableCellFormat_SetPadding(QTextTableCellFormat* self, double padding) {
	self->setPadding(static_cast<qreal>(padding));
}

void QTextTableCellFormat_SetTopBorder(QTextTableCellFormat* self, double width) {
	self->setTopBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_TopBorder(QTextTableCellFormat* self) {
	return const_cast<const QTextTableCellFormat*>(self)->topBorder();
}

void QTextTableCellFormat_SetBottomBorder(QTextTableCellFormat* self, double width) {
	self->setBottomBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_BottomBorder(QTextTableCellFormat* self) {
	return const_cast<const QTextTableCellFormat*>(self)->bottomBorder();
}

void QTextTableCellFormat_SetLeftBorder(QTextTableCellFormat* self, double width) {
	self->setLeftBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_LeftBorder(QTextTableCellFormat* self) {
	return const_cast<const QTextTableCellFormat*>(self)->leftBorder();
}

void QTextTableCellFormat_SetRightBorder(QTextTableCellFormat* self, double width) {
	self->setRightBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_RightBorder(QTextTableCellFormat* self) {
	return const_cast<const QTextTableCellFormat*>(self)->rightBorder();
}

void QTextTableCellFormat_SetBorder(QTextTableCellFormat* self, double width) {
	self->setBorder(static_cast<qreal>(width));
}

void QTextTableCellFormat_SetTopBorderStyle(QTextTableCellFormat* self, uintptr_t style) {
	self->setTopBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

uintptr_t QTextTableCellFormat_TopBorderStyle(QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle ret = const_cast<const QTextTableCellFormat*>(self)->topBorderStyle();
	return static_cast<uintptr_t>(ret);
}

void QTextTableCellFormat_SetBottomBorderStyle(QTextTableCellFormat* self, uintptr_t style) {
	self->setBottomBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

uintptr_t QTextTableCellFormat_BottomBorderStyle(QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle ret = const_cast<const QTextTableCellFormat*>(self)->bottomBorderStyle();
	return static_cast<uintptr_t>(ret);
}

void QTextTableCellFormat_SetLeftBorderStyle(QTextTableCellFormat* self, uintptr_t style) {
	self->setLeftBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

uintptr_t QTextTableCellFormat_LeftBorderStyle(QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle ret = const_cast<const QTextTableCellFormat*>(self)->leftBorderStyle();
	return static_cast<uintptr_t>(ret);
}

void QTextTableCellFormat_SetRightBorderStyle(QTextTableCellFormat* self, uintptr_t style) {
	self->setRightBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

uintptr_t QTextTableCellFormat_RightBorderStyle(QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle ret = const_cast<const QTextTableCellFormat*>(self)->rightBorderStyle();
	return static_cast<uintptr_t>(ret);
}

void QTextTableCellFormat_SetBorderStyle(QTextTableCellFormat* self, uintptr_t style) {
	self->setBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

void QTextTableCellFormat_SetTopBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setTopBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_TopBorderBrush(QTextTableCellFormat* self) {
	QBrush ret = const_cast<const QTextTableCellFormat*>(self)->topBorderBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTextTableCellFormat_SetBottomBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setBottomBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_BottomBorderBrush(QTextTableCellFormat* self) {
	QBrush ret = const_cast<const QTextTableCellFormat*>(self)->bottomBorderBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTextTableCellFormat_SetLeftBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setLeftBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_LeftBorderBrush(QTextTableCellFormat* self) {
	QBrush ret = const_cast<const QTextTableCellFormat*>(self)->leftBorderBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTextTableCellFormat_SetRightBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setRightBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_RightBorderBrush(QTextTableCellFormat* self) {
	QBrush ret = const_cast<const QTextTableCellFormat*>(self)->rightBorderBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTextTableCellFormat_SetBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setBorderBrush(*brush);
}

void QTextTableCellFormat_Delete(QTextTableCellFormat* self) {
	delete self;
}

