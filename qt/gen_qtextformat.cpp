#include "gen_qtextformat.h"
#include "qtextformat.h"

#include <QBrush>
#include <QColor>
#include <QFont>
#include <QList>
#include <QPen>
#include <QString>
#include <QTextBlockFormat>
#include <QTextCharFormat>
#include <QTextFormat>
#include <QTextFrameFormat>
#include <QTextImageFormat>
#include <QTextLength>
#include <QTextListFormat>
#include <QTextTableCellFormat>
#include <QTextTableFormat>
#include <QVariant>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextLength* QTextLength_new() {
	return new QTextLength();
}

QTextLength* QTextLength_new2(QTextLength* param1) {
	return new QTextLength(*param1);
}

double QTextLength_Value(QTextLength* self, double maximumLength) {
	return self->value(static_cast<qreal>(maximumLength));
}

double QTextLength_RawValue(QTextLength* self) {
	return self->rawValue();
}

bool QTextLength_OperatorEqual(QTextLength* self, QTextLength* other) {
	return self->operator==(*other);
}

bool QTextLength_OperatorNotEqual(QTextLength* self, QTextLength* other) {
	return self->operator!=(*other);
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
	return self->isValid();
}

bool QTextFormat_IsEmpty(QTextFormat* self) {
	return self->isEmpty();
}

int QTextFormat_Type(QTextFormat* self) {
	return self->type();
}

int QTextFormat_ObjectIndex(QTextFormat* self) {
	return self->objectIndex();
}

void QTextFormat_SetObjectIndex(QTextFormat* self, int object) {
	self->setObjectIndex(static_cast<int>(object));
}

QVariant* QTextFormat_Property(QTextFormat* self, int propertyId) {
	QVariant ret = self->property(static_cast<int>(propertyId));
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
	return self->hasProperty(static_cast<int>(propertyId));
}

bool QTextFormat_BoolProperty(QTextFormat* self, int propertyId) {
	return self->boolProperty(static_cast<int>(propertyId));
}

int QTextFormat_IntProperty(QTextFormat* self, int propertyId) {
	return self->intProperty(static_cast<int>(propertyId));
}

double QTextFormat_DoubleProperty(QTextFormat* self, int propertyId) {
	return self->doubleProperty(static_cast<int>(propertyId));
}

void QTextFormat_StringProperty(QTextFormat* self, int propertyId, char** _out, int* _out_Strlen) {
	QString ret = self->stringProperty(static_cast<int>(propertyId));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QColor* QTextFormat_ColorProperty(QTextFormat* self, int propertyId) {
	QColor ret = self->colorProperty(static_cast<int>(propertyId));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QPen* QTextFormat_PenProperty(QTextFormat* self, int propertyId) {
	QPen ret = self->penProperty(static_cast<int>(propertyId));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPen*>(new QPen(ret));
}

QBrush* QTextFormat_BrushProperty(QTextFormat* self, int propertyId) {
	QBrush ret = self->brushProperty(static_cast<int>(propertyId));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

QTextLength* QTextFormat_LengthProperty(QTextFormat* self, int propertyId) {
	QTextLength ret = self->lengthProperty(static_cast<int>(propertyId));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextLength*>(new QTextLength(ret));
}

void QTextFormat_LengthVectorProperty(QTextFormat* self, int propertyId, QTextLength*** _out, size_t* _out_len) {
	QVector<QTextLength> ret = self->lengthVectorProperty(static_cast<int>(propertyId));
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
	return self->propertyCount();
}

void QTextFormat_SetObjectType(QTextFormat* self, int typeVal) {
	self->setObjectType(static_cast<int>(typeVal));
}

int QTextFormat_ObjectType(QTextFormat* self) {
	return self->objectType();
}

bool QTextFormat_IsCharFormat(QTextFormat* self) {
	return self->isCharFormat();
}

bool QTextFormat_IsBlockFormat(QTextFormat* self) {
	return self->isBlockFormat();
}

bool QTextFormat_IsListFormat(QTextFormat* self) {
	return self->isListFormat();
}

bool QTextFormat_IsFrameFormat(QTextFormat* self) {
	return self->isFrameFormat();
}

bool QTextFormat_IsImageFormat(QTextFormat* self) {
	return self->isImageFormat();
}

bool QTextFormat_IsTableFormat(QTextFormat* self) {
	return self->isTableFormat();
}

bool QTextFormat_IsTableCellFormat(QTextFormat* self) {
	return self->isTableCellFormat();
}

QTextBlockFormat* QTextFormat_ToBlockFormat(QTextFormat* self) {
	QTextBlockFormat ret = self->toBlockFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlockFormat*>(new QTextBlockFormat(ret));
}

QTextCharFormat* QTextFormat_ToCharFormat(QTextFormat* self) {
	QTextCharFormat ret = self->toCharFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

QTextListFormat* QTextFormat_ToListFormat(QTextFormat* self) {
	QTextListFormat ret = self->toListFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextListFormat*>(new QTextListFormat(ret));
}

QTextTableFormat* QTextFormat_ToTableFormat(QTextFormat* self) {
	QTextTableFormat ret = self->toTableFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextTableFormat*>(new QTextTableFormat(ret));
}

QTextFrameFormat* QTextFormat_ToFrameFormat(QTextFormat* self) {
	QTextFrameFormat ret = self->toFrameFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFrameFormat*>(new QTextFrameFormat(ret));
}

QTextImageFormat* QTextFormat_ToImageFormat(QTextFormat* self) {
	QTextImageFormat ret = self->toImageFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextImageFormat*>(new QTextImageFormat(ret));
}

QTextTableCellFormat* QTextFormat_ToTableCellFormat(QTextFormat* self) {
	QTextTableCellFormat ret = self->toTableCellFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextTableCellFormat*>(new QTextTableCellFormat(ret));
}

bool QTextFormat_OperatorEqual(QTextFormat* self, QTextFormat* rhs) {
	return self->operator==(*rhs);
}

bool QTextFormat_OperatorNotEqual(QTextFormat* self, QTextFormat* rhs) {
	return self->operator!=(*rhs);
}

void QTextFormat_SetBackground(QTextFormat* self, QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QTextFormat_Background(QTextFormat* self) {
	QBrush ret = self->background();
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
	QBrush ret = self->foreground();
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
	return self->isValid();
}

void QTextCharFormat_SetFont(QTextCharFormat* self, QFont* font) {
	self->setFont(*font);
}

QFont* QTextCharFormat_Font(QTextCharFormat* self) {
	QFont ret = self->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QTextCharFormat_SetFontFamily(QTextCharFormat* self, const char* family, size_t family_Strlen) {
	QString family_QString = QString::fromUtf8(family, family_Strlen);
	self->setFontFamily(family_QString);
}

void QTextCharFormat_FontFamily(QTextCharFormat* self, char** _out, int* _out_Strlen) {
	QString ret = self->fontFamily();
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
	QVariant ret = self->fontFamilies();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QTextCharFormat_SetFontStyleName(QTextCharFormat* self, const char* styleName, size_t styleName_Strlen) {
	QString styleName_QString = QString::fromUtf8(styleName, styleName_Strlen);
	self->setFontStyleName(styleName_QString);
}

QVariant* QTextCharFormat_FontStyleName(QTextCharFormat* self) {
	QVariant ret = self->fontStyleName();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QTextCharFormat_SetFontPointSize(QTextCharFormat* self, double size) {
	self->setFontPointSize(static_cast<qreal>(size));
}

double QTextCharFormat_FontPointSize(QTextCharFormat* self) {
	return self->fontPointSize();
}

void QTextCharFormat_SetFontWeight(QTextCharFormat* self, int weight) {
	self->setFontWeight(static_cast<int>(weight));
}

int QTextCharFormat_FontWeight(QTextCharFormat* self) {
	return self->fontWeight();
}

void QTextCharFormat_SetFontItalic(QTextCharFormat* self, bool italic) {
	self->setFontItalic(italic);
}

bool QTextCharFormat_FontItalic(QTextCharFormat* self) {
	return self->fontItalic();
}

void QTextCharFormat_SetFontLetterSpacing(QTextCharFormat* self, double spacing) {
	self->setFontLetterSpacing(static_cast<qreal>(spacing));
}

double QTextCharFormat_FontLetterSpacing(QTextCharFormat* self) {
	return self->fontLetterSpacing();
}

void QTextCharFormat_SetFontWordSpacing(QTextCharFormat* self, double spacing) {
	self->setFontWordSpacing(static_cast<qreal>(spacing));
}

double QTextCharFormat_FontWordSpacing(QTextCharFormat* self) {
	return self->fontWordSpacing();
}

void QTextCharFormat_SetFontUnderline(QTextCharFormat* self, bool underline) {
	self->setFontUnderline(underline);
}

bool QTextCharFormat_FontUnderline(QTextCharFormat* self) {
	return self->fontUnderline();
}

void QTextCharFormat_SetFontOverline(QTextCharFormat* self, bool overline) {
	self->setFontOverline(overline);
}

bool QTextCharFormat_FontOverline(QTextCharFormat* self) {
	return self->fontOverline();
}

void QTextCharFormat_SetFontStrikeOut(QTextCharFormat* self, bool strikeOut) {
	self->setFontStrikeOut(strikeOut);
}

bool QTextCharFormat_FontStrikeOut(QTextCharFormat* self) {
	return self->fontStrikeOut();
}

void QTextCharFormat_SetUnderlineColor(QTextCharFormat* self, QColor* color) {
	self->setUnderlineColor(*color);
}

QColor* QTextCharFormat_UnderlineColor(QTextCharFormat* self) {
	QColor ret = self->underlineColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QTextCharFormat_SetFontFixedPitch(QTextCharFormat* self, bool fixedPitch) {
	self->setFontFixedPitch(fixedPitch);
}

bool QTextCharFormat_FontFixedPitch(QTextCharFormat* self) {
	return self->fontFixedPitch();
}

void QTextCharFormat_SetFontStretch(QTextCharFormat* self, int factor) {
	self->setFontStretch(static_cast<int>(factor));
}

int QTextCharFormat_FontStretch(QTextCharFormat* self) {
	return self->fontStretch();
}

void QTextCharFormat_SetFontKerning(QTextCharFormat* self, bool enable) {
	self->setFontKerning(enable);
}

bool QTextCharFormat_FontKerning(QTextCharFormat* self) {
	return self->fontKerning();
}

void QTextCharFormat_SetTextOutline(QTextCharFormat* self, QPen* pen) {
	self->setTextOutline(*pen);
}

QPen* QTextCharFormat_TextOutline(QTextCharFormat* self) {
	QPen ret = self->textOutline();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPen*>(new QPen(ret));
}

void QTextCharFormat_SetToolTip(QTextCharFormat* self, const char* tip, size_t tip_Strlen) {
	QString tip_QString = QString::fromUtf8(tip, tip_Strlen);
	self->setToolTip(tip_QString);
}

void QTextCharFormat_ToolTip(QTextCharFormat* self, char** _out, int* _out_Strlen) {
	QString ret = self->toolTip();
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
	return self->isAnchor();
}

void QTextCharFormat_SetAnchorHref(QTextCharFormat* self, const char* value, size_t value_Strlen) {
	QString value_QString = QString::fromUtf8(value, value_Strlen);
	self->setAnchorHref(value_QString);
}

void QTextCharFormat_AnchorHref(QTextCharFormat* self, char** _out, int* _out_Strlen) {
	QString ret = self->anchorHref();
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
	QString ret = self->anchorName();
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
	QList<QString> ret = self->anchorNames();
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
	return self->tableCellRowSpan();
}

void QTextCharFormat_SetTableCellColumnSpan(QTextCharFormat* self, int tableCellColumnSpan) {
	self->setTableCellColumnSpan(static_cast<int>(tableCellColumnSpan));
}

int QTextCharFormat_TableCellColumnSpan(QTextCharFormat* self) {
	return self->tableCellColumnSpan();
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
	return self->isValid();
}

void QTextBlockFormat_SetTopMargin(QTextBlockFormat* self, double margin) {
	self->setTopMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_TopMargin(QTextBlockFormat* self) {
	return self->topMargin();
}

void QTextBlockFormat_SetBottomMargin(QTextBlockFormat* self, double margin) {
	self->setBottomMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_BottomMargin(QTextBlockFormat* self) {
	return self->bottomMargin();
}

void QTextBlockFormat_SetLeftMargin(QTextBlockFormat* self, double margin) {
	self->setLeftMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_LeftMargin(QTextBlockFormat* self) {
	return self->leftMargin();
}

void QTextBlockFormat_SetRightMargin(QTextBlockFormat* self, double margin) {
	self->setRightMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_RightMargin(QTextBlockFormat* self) {
	return self->rightMargin();
}

void QTextBlockFormat_SetTextIndent(QTextBlockFormat* self, double aindent) {
	self->setTextIndent(static_cast<qreal>(aindent));
}

double QTextBlockFormat_TextIndent(QTextBlockFormat* self) {
	return self->textIndent();
}

void QTextBlockFormat_SetIndent(QTextBlockFormat* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QTextBlockFormat_Indent(QTextBlockFormat* self) {
	return self->indent();
}

void QTextBlockFormat_SetHeadingLevel(QTextBlockFormat* self, int alevel) {
	self->setHeadingLevel(static_cast<int>(alevel));
}

int QTextBlockFormat_HeadingLevel(QTextBlockFormat* self) {
	return self->headingLevel();
}

void QTextBlockFormat_SetLineHeight(QTextBlockFormat* self, double height, int heightType) {
	self->setLineHeight(static_cast<qreal>(height), static_cast<int>(heightType));
}

double QTextBlockFormat_LineHeight(QTextBlockFormat* self, double scriptLineHeight, double scaling) {
	return self->lineHeight(static_cast<qreal>(scriptLineHeight), static_cast<qreal>(scaling));
}

double QTextBlockFormat_LineHeight2(QTextBlockFormat* self) {
	return self->lineHeight();
}

int QTextBlockFormat_LineHeightType(QTextBlockFormat* self) {
	return self->lineHeightType();
}

void QTextBlockFormat_SetNonBreakableLines(QTextBlockFormat* self, bool b) {
	self->setNonBreakableLines(b);
}

bool QTextBlockFormat_NonBreakableLines(QTextBlockFormat* self) {
	return self->nonBreakableLines();
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
	return self->isValid();
}

void QTextListFormat_SetIndent(QTextListFormat* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QTextListFormat_Indent(QTextListFormat* self) {
	return self->indent();
}

void QTextListFormat_SetNumberPrefix(QTextListFormat* self, const char* numberPrefix, size_t numberPrefix_Strlen) {
	QString numberPrefix_QString = QString::fromUtf8(numberPrefix, numberPrefix_Strlen);
	self->setNumberPrefix(numberPrefix_QString);
}

void QTextListFormat_NumberPrefix(QTextListFormat* self, char** _out, int* _out_Strlen) {
	QString ret = self->numberPrefix();
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
	QString ret = self->numberSuffix();
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
	return self->isValid();
}

void QTextImageFormat_SetName(QTextImageFormat* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->setName(name_QString);
}

void QTextImageFormat_Name(QTextImageFormat* self, char** _out, int* _out_Strlen) {
	QString ret = self->name();
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
	return self->width();
}

void QTextImageFormat_SetHeight(QTextImageFormat* self, double height) {
	self->setHeight(static_cast<qreal>(height));
}

double QTextImageFormat_Height(QTextImageFormat* self) {
	return self->height();
}

void QTextImageFormat_SetQuality(QTextImageFormat* self) {
	self->setQuality();
}

int QTextImageFormat_Quality(QTextImageFormat* self) {
	return self->quality();
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
	return self->isValid();
}

void QTextFrameFormat_SetBorder(QTextFrameFormat* self, double border) {
	self->setBorder(static_cast<qreal>(border));
}

double QTextFrameFormat_Border(QTextFrameFormat* self) {
	return self->border();
}

void QTextFrameFormat_SetBorderBrush(QTextFrameFormat* self, QBrush* brush) {
	self->setBorderBrush(*brush);
}

QBrush* QTextFrameFormat_BorderBrush(QTextFrameFormat* self) {
	QBrush ret = self->borderBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTextFrameFormat_SetMargin(QTextFrameFormat* self, double margin) {
	self->setMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_Margin(QTextFrameFormat* self) {
	return self->margin();
}

void QTextFrameFormat_SetTopMargin(QTextFrameFormat* self, double margin) {
	self->setTopMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_TopMargin(QTextFrameFormat* self) {
	return self->topMargin();
}

void QTextFrameFormat_SetBottomMargin(QTextFrameFormat* self, double margin) {
	self->setBottomMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_BottomMargin(QTextFrameFormat* self) {
	return self->bottomMargin();
}

void QTextFrameFormat_SetLeftMargin(QTextFrameFormat* self, double margin) {
	self->setLeftMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_LeftMargin(QTextFrameFormat* self) {
	return self->leftMargin();
}

void QTextFrameFormat_SetRightMargin(QTextFrameFormat* self, double margin) {
	self->setRightMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_RightMargin(QTextFrameFormat* self) {
	return self->rightMargin();
}

void QTextFrameFormat_SetPadding(QTextFrameFormat* self, double padding) {
	self->setPadding(static_cast<qreal>(padding));
}

double QTextFrameFormat_Padding(QTextFrameFormat* self) {
	return self->padding();
}

void QTextFrameFormat_SetWidth(QTextFrameFormat* self, double width) {
	self->setWidth(static_cast<qreal>(width));
}

void QTextFrameFormat_SetWidthWithLength(QTextFrameFormat* self, QTextLength* length) {
	self->setWidth(*length);
}

QTextLength* QTextFrameFormat_Width(QTextFrameFormat* self) {
	QTextLength ret = self->width();
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
	QTextLength ret = self->height();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextLength*>(new QTextLength(ret));
}

void QTextFrameFormat_Delete(QTextFrameFormat* self) {
	delete self;
}

QTextTableFormat* QTextTableFormat_new() {
	return new QTextTableFormat();
}

bool QTextTableFormat_IsValid(QTextTableFormat* self) {
	return self->isValid();
}

int QTextTableFormat_Columns(QTextTableFormat* self) {
	return self->columns();
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
	QVector<QTextLength> ret = self->columnWidthConstraints();
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
	return self->cellSpacing();
}

void QTextTableFormat_SetCellSpacing(QTextTableFormat* self, double spacing) {
	self->setCellSpacing(static_cast<qreal>(spacing));
}

double QTextTableFormat_CellPadding(QTextTableFormat* self) {
	return self->cellPadding();
}

void QTextTableFormat_SetCellPadding(QTextTableFormat* self, double padding) {
	self->setCellPadding(static_cast<qreal>(padding));
}

void QTextTableFormat_SetHeaderRowCount(QTextTableFormat* self, int count) {
	self->setHeaderRowCount(static_cast<int>(count));
}

int QTextTableFormat_HeaderRowCount(QTextTableFormat* self) {
	return self->headerRowCount();
}

void QTextTableFormat_SetBorderCollapse(QTextTableFormat* self, bool borderCollapse) {
	self->setBorderCollapse(borderCollapse);
}

bool QTextTableFormat_BorderCollapse(QTextTableFormat* self) {
	return self->borderCollapse();
}

void QTextTableFormat_Delete(QTextTableFormat* self) {
	delete self;
}

QTextTableCellFormat* QTextTableCellFormat_new() {
	return new QTextTableCellFormat();
}

bool QTextTableCellFormat_IsValid(QTextTableCellFormat* self) {
	return self->isValid();
}

void QTextTableCellFormat_SetTopPadding(QTextTableCellFormat* self, double padding) {
	self->setTopPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_TopPadding(QTextTableCellFormat* self) {
	return self->topPadding();
}

void QTextTableCellFormat_SetBottomPadding(QTextTableCellFormat* self, double padding) {
	self->setBottomPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_BottomPadding(QTextTableCellFormat* self) {
	return self->bottomPadding();
}

void QTextTableCellFormat_SetLeftPadding(QTextTableCellFormat* self, double padding) {
	self->setLeftPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_LeftPadding(QTextTableCellFormat* self) {
	return self->leftPadding();
}

void QTextTableCellFormat_SetRightPadding(QTextTableCellFormat* self, double padding) {
	self->setRightPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_RightPadding(QTextTableCellFormat* self) {
	return self->rightPadding();
}

void QTextTableCellFormat_SetPadding(QTextTableCellFormat* self, double padding) {
	self->setPadding(static_cast<qreal>(padding));
}

void QTextTableCellFormat_SetTopBorder(QTextTableCellFormat* self, double width) {
	self->setTopBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_TopBorder(QTextTableCellFormat* self) {
	return self->topBorder();
}

void QTextTableCellFormat_SetBottomBorder(QTextTableCellFormat* self, double width) {
	self->setBottomBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_BottomBorder(QTextTableCellFormat* self) {
	return self->bottomBorder();
}

void QTextTableCellFormat_SetLeftBorder(QTextTableCellFormat* self, double width) {
	self->setLeftBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_LeftBorder(QTextTableCellFormat* self) {
	return self->leftBorder();
}

void QTextTableCellFormat_SetRightBorder(QTextTableCellFormat* self, double width) {
	self->setRightBorder(static_cast<qreal>(width));
}

double QTextTableCellFormat_RightBorder(QTextTableCellFormat* self) {
	return self->rightBorder();
}

void QTextTableCellFormat_SetBorder(QTextTableCellFormat* self, double width) {
	self->setBorder(static_cast<qreal>(width));
}

void QTextTableCellFormat_SetTopBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setTopBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_TopBorderBrush(QTextTableCellFormat* self) {
	QBrush ret = self->topBorderBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTextTableCellFormat_SetBottomBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setBottomBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_BottomBorderBrush(QTextTableCellFormat* self) {
	QBrush ret = self->bottomBorderBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTextTableCellFormat_SetLeftBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setLeftBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_LeftBorderBrush(QTextTableCellFormat* self) {
	QBrush ret = self->leftBorderBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTextTableCellFormat_SetRightBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setRightBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_RightBorderBrush(QTextTableCellFormat* self) {
	QBrush ret = self->rightBorderBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTextTableCellFormat_SetBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setBorderBrush(*brush);
}

void QTextTableCellFormat_Delete(QTextTableCellFormat* self) {
	delete self;
}

