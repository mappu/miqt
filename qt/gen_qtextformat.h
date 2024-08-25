#ifndef GEN_QTEXTFORMAT_H
#define GEN_QTEXTFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QColor;
class QFont;
class QPen;
class QTextBlockFormat;
class QTextCharFormat;
class QTextFormat;
class QTextFrameFormat;
class QTextImageFormat;
class QTextLength;
class QTextListFormat;
class QTextTableCellFormat;
class QTextTableFormat;
class QVariant;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QPen QPen;
typedef struct QTextBlockFormat QTextBlockFormat;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextFormat QTextFormat;
typedef struct QTextFrameFormat QTextFrameFormat;
typedef struct QTextImageFormat QTextImageFormat;
typedef struct QTextLength QTextLength;
typedef struct QTextListFormat QTextListFormat;
typedef struct QTextTableCellFormat QTextTableCellFormat;
typedef struct QTextTableFormat QTextTableFormat;
typedef struct QVariant QVariant;
#endif

QTextLength* QTextLength_new();
QTextLength* QTextLength_new2(QTextLength* param1);
double QTextLength_Value(QTextLength* self, double maximumLength);
double QTextLength_RawValue(QTextLength* self);
bool QTextLength_OperatorEqual(QTextLength* self, QTextLength* other);
bool QTextLength_OperatorNotEqual(QTextLength* self, QTextLength* other);
void QTextLength_Delete(QTextLength* self);

QTextFormat* QTextFormat_new();
QTextFormat* QTextFormat_new2(int typeVal);
QTextFormat* QTextFormat_new3(QTextFormat* rhs);
void QTextFormat_OperatorAssign(QTextFormat* self, QTextFormat* rhs);
void QTextFormat_Swap(QTextFormat* self, QTextFormat* other);
void QTextFormat_Merge(QTextFormat* self, QTextFormat* other);
bool QTextFormat_IsValid(QTextFormat* self);
bool QTextFormat_IsEmpty(QTextFormat* self);
int QTextFormat_Type(QTextFormat* self);
int QTextFormat_ObjectIndex(QTextFormat* self);
void QTextFormat_SetObjectIndex(QTextFormat* self, int object);
QVariant* QTextFormat_Property(QTextFormat* self, int propertyId);
void QTextFormat_SetProperty(QTextFormat* self, int propertyId, QVariant* value);
void QTextFormat_ClearProperty(QTextFormat* self, int propertyId);
bool QTextFormat_HasProperty(QTextFormat* self, int propertyId);
bool QTextFormat_BoolProperty(QTextFormat* self, int propertyId);
int QTextFormat_IntProperty(QTextFormat* self, int propertyId);
double QTextFormat_DoubleProperty(QTextFormat* self, int propertyId);
void QTextFormat_StringProperty(QTextFormat* self, int propertyId, char** _out, int* _out_Strlen);
QColor* QTextFormat_ColorProperty(QTextFormat* self, int propertyId);
QPen* QTextFormat_PenProperty(QTextFormat* self, int propertyId);
QBrush* QTextFormat_BrushProperty(QTextFormat* self, int propertyId);
QTextLength* QTextFormat_LengthProperty(QTextFormat* self, int propertyId);
void QTextFormat_LengthVectorProperty(QTextFormat* self, int propertyId, QTextLength*** _out, size_t* _out_len);
void QTextFormat_SetProperty2(QTextFormat* self, int propertyId, QTextLength** lengths, size_t lengths_len);
int QTextFormat_PropertyCount(QTextFormat* self);
void QTextFormat_SetObjectType(QTextFormat* self, int typeVal);
int QTextFormat_ObjectType(QTextFormat* self);
bool QTextFormat_IsCharFormat(QTextFormat* self);
bool QTextFormat_IsBlockFormat(QTextFormat* self);
bool QTextFormat_IsListFormat(QTextFormat* self);
bool QTextFormat_IsFrameFormat(QTextFormat* self);
bool QTextFormat_IsImageFormat(QTextFormat* self);
bool QTextFormat_IsTableFormat(QTextFormat* self);
bool QTextFormat_IsTableCellFormat(QTextFormat* self);
QTextBlockFormat* QTextFormat_ToBlockFormat(QTextFormat* self);
QTextCharFormat* QTextFormat_ToCharFormat(QTextFormat* self);
QTextListFormat* QTextFormat_ToListFormat(QTextFormat* self);
QTextTableFormat* QTextFormat_ToTableFormat(QTextFormat* self);
QTextFrameFormat* QTextFormat_ToFrameFormat(QTextFormat* self);
QTextImageFormat* QTextFormat_ToImageFormat(QTextFormat* self);
QTextTableCellFormat* QTextFormat_ToTableCellFormat(QTextFormat* self);
bool QTextFormat_OperatorEqual(QTextFormat* self, QTextFormat* rhs);
bool QTextFormat_OperatorNotEqual(QTextFormat* self, QTextFormat* rhs);
void QTextFormat_SetBackground(QTextFormat* self, QBrush* brush);
QBrush* QTextFormat_Background(QTextFormat* self);
void QTextFormat_ClearBackground(QTextFormat* self);
void QTextFormat_SetForeground(QTextFormat* self, QBrush* brush);
QBrush* QTextFormat_Foreground(QTextFormat* self);
void QTextFormat_ClearForeground(QTextFormat* self);
void QTextFormat_Delete(QTextFormat* self);

QTextCharFormat* QTextCharFormat_new();
QTextCharFormat* QTextCharFormat_new2(QTextCharFormat* param1);
bool QTextCharFormat_IsValid(QTextCharFormat* self);
void QTextCharFormat_SetFont(QTextCharFormat* self, QFont* font);
QFont* QTextCharFormat_Font(QTextCharFormat* self);
void QTextCharFormat_SetFontFamily(QTextCharFormat* self, const char* family, size_t family_Strlen);
void QTextCharFormat_FontFamily(QTextCharFormat* self, char** _out, int* _out_Strlen);
void QTextCharFormat_SetFontFamilies(QTextCharFormat* self, char** families, uint64_t* families_Lengths, size_t families_len);
QVariant* QTextCharFormat_FontFamilies(QTextCharFormat* self);
void QTextCharFormat_SetFontStyleName(QTextCharFormat* self, const char* styleName, size_t styleName_Strlen);
QVariant* QTextCharFormat_FontStyleName(QTextCharFormat* self);
void QTextCharFormat_SetFontPointSize(QTextCharFormat* self, double size);
double QTextCharFormat_FontPointSize(QTextCharFormat* self);
void QTextCharFormat_SetFontWeight(QTextCharFormat* self, int weight);
int QTextCharFormat_FontWeight(QTextCharFormat* self);
void QTextCharFormat_SetFontItalic(QTextCharFormat* self, bool italic);
bool QTextCharFormat_FontItalic(QTextCharFormat* self);
void QTextCharFormat_SetFontLetterSpacing(QTextCharFormat* self, double spacing);
double QTextCharFormat_FontLetterSpacing(QTextCharFormat* self);
void QTextCharFormat_SetFontWordSpacing(QTextCharFormat* self, double spacing);
double QTextCharFormat_FontWordSpacing(QTextCharFormat* self);
void QTextCharFormat_SetFontUnderline(QTextCharFormat* self, bool underline);
bool QTextCharFormat_FontUnderline(QTextCharFormat* self);
void QTextCharFormat_SetFontOverline(QTextCharFormat* self, bool overline);
bool QTextCharFormat_FontOverline(QTextCharFormat* self);
void QTextCharFormat_SetFontStrikeOut(QTextCharFormat* self, bool strikeOut);
bool QTextCharFormat_FontStrikeOut(QTextCharFormat* self);
void QTextCharFormat_SetUnderlineColor(QTextCharFormat* self, QColor* color);
QColor* QTextCharFormat_UnderlineColor(QTextCharFormat* self);
void QTextCharFormat_SetFontFixedPitch(QTextCharFormat* self, bool fixedPitch);
bool QTextCharFormat_FontFixedPitch(QTextCharFormat* self);
void QTextCharFormat_SetFontStretch(QTextCharFormat* self, int factor);
int QTextCharFormat_FontStretch(QTextCharFormat* self);
void QTextCharFormat_SetFontKerning(QTextCharFormat* self, bool enable);
bool QTextCharFormat_FontKerning(QTextCharFormat* self);
void QTextCharFormat_SetTextOutline(QTextCharFormat* self, QPen* pen);
QPen* QTextCharFormat_TextOutline(QTextCharFormat* self);
void QTextCharFormat_SetToolTip(QTextCharFormat* self, const char* tip, size_t tip_Strlen);
void QTextCharFormat_ToolTip(QTextCharFormat* self, char** _out, int* _out_Strlen);
void QTextCharFormat_SetAnchor(QTextCharFormat* self, bool anchor);
bool QTextCharFormat_IsAnchor(QTextCharFormat* self);
void QTextCharFormat_SetAnchorHref(QTextCharFormat* self, const char* value, size_t value_Strlen);
void QTextCharFormat_AnchorHref(QTextCharFormat* self, char** _out, int* _out_Strlen);
void QTextCharFormat_SetAnchorName(QTextCharFormat* self, const char* name, size_t name_Strlen);
void QTextCharFormat_AnchorName(QTextCharFormat* self, char** _out, int* _out_Strlen);
void QTextCharFormat_SetAnchorNames(QTextCharFormat* self, char** names, uint64_t* names_Lengths, size_t names_len);
void QTextCharFormat_AnchorNames(QTextCharFormat* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QTextCharFormat_SetTableCellRowSpan(QTextCharFormat* self, int tableCellRowSpan);
int QTextCharFormat_TableCellRowSpan(QTextCharFormat* self);
void QTextCharFormat_SetTableCellColumnSpan(QTextCharFormat* self, int tableCellColumnSpan);
int QTextCharFormat_TableCellColumnSpan(QTextCharFormat* self);
void QTextCharFormat_Delete(QTextCharFormat* self);

QTextBlockFormat* QTextBlockFormat_new();
QTextBlockFormat* QTextBlockFormat_new2(QTextBlockFormat* param1);
bool QTextBlockFormat_IsValid(QTextBlockFormat* self);
void QTextBlockFormat_SetTopMargin(QTextBlockFormat* self, double margin);
double QTextBlockFormat_TopMargin(QTextBlockFormat* self);
void QTextBlockFormat_SetBottomMargin(QTextBlockFormat* self, double margin);
double QTextBlockFormat_BottomMargin(QTextBlockFormat* self);
void QTextBlockFormat_SetLeftMargin(QTextBlockFormat* self, double margin);
double QTextBlockFormat_LeftMargin(QTextBlockFormat* self);
void QTextBlockFormat_SetRightMargin(QTextBlockFormat* self, double margin);
double QTextBlockFormat_RightMargin(QTextBlockFormat* self);
void QTextBlockFormat_SetTextIndent(QTextBlockFormat* self, double aindent);
double QTextBlockFormat_TextIndent(QTextBlockFormat* self);
void QTextBlockFormat_SetIndent(QTextBlockFormat* self, int indent);
int QTextBlockFormat_Indent(QTextBlockFormat* self);
void QTextBlockFormat_SetHeadingLevel(QTextBlockFormat* self, int alevel);
int QTextBlockFormat_HeadingLevel(QTextBlockFormat* self);
void QTextBlockFormat_SetLineHeight(QTextBlockFormat* self, double height, int heightType);
double QTextBlockFormat_LineHeight(QTextBlockFormat* self, double scriptLineHeight, double scaling);
double QTextBlockFormat_LineHeight2(QTextBlockFormat* self);
int QTextBlockFormat_LineHeightType(QTextBlockFormat* self);
void QTextBlockFormat_SetNonBreakableLines(QTextBlockFormat* self, bool b);
bool QTextBlockFormat_NonBreakableLines(QTextBlockFormat* self);
void QTextBlockFormat_Delete(QTextBlockFormat* self);

QTextListFormat* QTextListFormat_new();
QTextListFormat* QTextListFormat_new2(QTextListFormat* param1);
bool QTextListFormat_IsValid(QTextListFormat* self);
void QTextListFormat_SetIndent(QTextListFormat* self, int indent);
int QTextListFormat_Indent(QTextListFormat* self);
void QTextListFormat_SetNumberPrefix(QTextListFormat* self, const char* numberPrefix, size_t numberPrefix_Strlen);
void QTextListFormat_NumberPrefix(QTextListFormat* self, char** _out, int* _out_Strlen);
void QTextListFormat_SetNumberSuffix(QTextListFormat* self, const char* numberSuffix, size_t numberSuffix_Strlen);
void QTextListFormat_NumberSuffix(QTextListFormat* self, char** _out, int* _out_Strlen);
void QTextListFormat_Delete(QTextListFormat* self);

QTextImageFormat* QTextImageFormat_new();
bool QTextImageFormat_IsValid(QTextImageFormat* self);
void QTextImageFormat_SetName(QTextImageFormat* self, const char* name, size_t name_Strlen);
void QTextImageFormat_Name(QTextImageFormat* self, char** _out, int* _out_Strlen);
void QTextImageFormat_SetWidth(QTextImageFormat* self, double width);
double QTextImageFormat_Width(QTextImageFormat* self);
void QTextImageFormat_SetHeight(QTextImageFormat* self, double height);
double QTextImageFormat_Height(QTextImageFormat* self);
void QTextImageFormat_SetQuality(QTextImageFormat* self);
int QTextImageFormat_Quality(QTextImageFormat* self);
void QTextImageFormat_SetQuality1(QTextImageFormat* self, int quality);
void QTextImageFormat_Delete(QTextImageFormat* self);

QTextFrameFormat* QTextFrameFormat_new();
QTextFrameFormat* QTextFrameFormat_new2(QTextFrameFormat* param1);
bool QTextFrameFormat_IsValid(QTextFrameFormat* self);
void QTextFrameFormat_SetBorder(QTextFrameFormat* self, double border);
double QTextFrameFormat_Border(QTextFrameFormat* self);
void QTextFrameFormat_SetBorderBrush(QTextFrameFormat* self, QBrush* brush);
QBrush* QTextFrameFormat_BorderBrush(QTextFrameFormat* self);
void QTextFrameFormat_SetMargin(QTextFrameFormat* self, double margin);
double QTextFrameFormat_Margin(QTextFrameFormat* self);
void QTextFrameFormat_SetTopMargin(QTextFrameFormat* self, double margin);
double QTextFrameFormat_TopMargin(QTextFrameFormat* self);
void QTextFrameFormat_SetBottomMargin(QTextFrameFormat* self, double margin);
double QTextFrameFormat_BottomMargin(QTextFrameFormat* self);
void QTextFrameFormat_SetLeftMargin(QTextFrameFormat* self, double margin);
double QTextFrameFormat_LeftMargin(QTextFrameFormat* self);
void QTextFrameFormat_SetRightMargin(QTextFrameFormat* self, double margin);
double QTextFrameFormat_RightMargin(QTextFrameFormat* self);
void QTextFrameFormat_SetPadding(QTextFrameFormat* self, double padding);
double QTextFrameFormat_Padding(QTextFrameFormat* self);
void QTextFrameFormat_SetWidth(QTextFrameFormat* self, double width);
void QTextFrameFormat_SetWidthWithLength(QTextFrameFormat* self, QTextLength* length);
QTextLength* QTextFrameFormat_Width(QTextFrameFormat* self);
void QTextFrameFormat_SetHeight(QTextFrameFormat* self, double height);
void QTextFrameFormat_SetHeightWithHeight(QTextFrameFormat* self, QTextLength* height);
QTextLength* QTextFrameFormat_Height(QTextFrameFormat* self);
void QTextFrameFormat_Delete(QTextFrameFormat* self);

QTextTableFormat* QTextTableFormat_new();
bool QTextTableFormat_IsValid(QTextTableFormat* self);
int QTextTableFormat_Columns(QTextTableFormat* self);
void QTextTableFormat_SetColumns(QTextTableFormat* self, int columns);
void QTextTableFormat_SetColumnWidthConstraints(QTextTableFormat* self, QTextLength** constraints, size_t constraints_len);
void QTextTableFormat_ColumnWidthConstraints(QTextTableFormat* self, QTextLength*** _out, size_t* _out_len);
void QTextTableFormat_ClearColumnWidthConstraints(QTextTableFormat* self);
double QTextTableFormat_CellSpacing(QTextTableFormat* self);
void QTextTableFormat_SetCellSpacing(QTextTableFormat* self, double spacing);
double QTextTableFormat_CellPadding(QTextTableFormat* self);
void QTextTableFormat_SetCellPadding(QTextTableFormat* self, double padding);
void QTextTableFormat_SetHeaderRowCount(QTextTableFormat* self, int count);
int QTextTableFormat_HeaderRowCount(QTextTableFormat* self);
void QTextTableFormat_SetBorderCollapse(QTextTableFormat* self, bool borderCollapse);
bool QTextTableFormat_BorderCollapse(QTextTableFormat* self);
void QTextTableFormat_Delete(QTextTableFormat* self);

QTextTableCellFormat* QTextTableCellFormat_new();
bool QTextTableCellFormat_IsValid(QTextTableCellFormat* self);
void QTextTableCellFormat_SetTopPadding(QTextTableCellFormat* self, double padding);
double QTextTableCellFormat_TopPadding(QTextTableCellFormat* self);
void QTextTableCellFormat_SetBottomPadding(QTextTableCellFormat* self, double padding);
double QTextTableCellFormat_BottomPadding(QTextTableCellFormat* self);
void QTextTableCellFormat_SetLeftPadding(QTextTableCellFormat* self, double padding);
double QTextTableCellFormat_LeftPadding(QTextTableCellFormat* self);
void QTextTableCellFormat_SetRightPadding(QTextTableCellFormat* self, double padding);
double QTextTableCellFormat_RightPadding(QTextTableCellFormat* self);
void QTextTableCellFormat_SetPadding(QTextTableCellFormat* self, double padding);
void QTextTableCellFormat_SetTopBorder(QTextTableCellFormat* self, double width);
double QTextTableCellFormat_TopBorder(QTextTableCellFormat* self);
void QTextTableCellFormat_SetBottomBorder(QTextTableCellFormat* self, double width);
double QTextTableCellFormat_BottomBorder(QTextTableCellFormat* self);
void QTextTableCellFormat_SetLeftBorder(QTextTableCellFormat* self, double width);
double QTextTableCellFormat_LeftBorder(QTextTableCellFormat* self);
void QTextTableCellFormat_SetRightBorder(QTextTableCellFormat* self, double width);
double QTextTableCellFormat_RightBorder(QTextTableCellFormat* self);
void QTextTableCellFormat_SetBorder(QTextTableCellFormat* self, double width);
void QTextTableCellFormat_SetTopBorderBrush(QTextTableCellFormat* self, QBrush* brush);
QBrush* QTextTableCellFormat_TopBorderBrush(QTextTableCellFormat* self);
void QTextTableCellFormat_SetBottomBorderBrush(QTextTableCellFormat* self, QBrush* brush);
QBrush* QTextTableCellFormat_BottomBorderBrush(QTextTableCellFormat* self);
void QTextTableCellFormat_SetLeftBorderBrush(QTextTableCellFormat* self, QBrush* brush);
QBrush* QTextTableCellFormat_LeftBorderBrush(QTextTableCellFormat* self);
void QTextTableCellFormat_SetRightBorderBrush(QTextTableCellFormat* self, QBrush* brush);
QBrush* QTextTableCellFormat_RightBorderBrush(QTextTableCellFormat* self);
void QTextTableCellFormat_SetBorderBrush(QTextTableCellFormat* self, QBrush* brush);
void QTextTableCellFormat_Delete(QTextTableCellFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
