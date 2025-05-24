#pragma once
#ifndef MIQT_QT_GEN_QTEXTFORMAT_H
#define MIQT_QT_GEN_QTEXTFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextOption__Tab)
typedef QTextOption::Tab QTextOption__Tab;
#else
class QTextOption__Tab;
#endif
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
typedef struct QTextOption__Tab QTextOption__Tab;
typedef struct QTextTableCellFormat QTextTableCellFormat;
typedef struct QTextTableFormat QTextTableFormat;
typedef struct QVariant QVariant;
#endif

QTextLength* QTextLength_new();
QTextLength* QTextLength_new2(int type, double value);
QTextLength* QTextLength_new3(QTextLength* param1);
int QTextLength_type(const QTextLength* self);
double QTextLength_value(const QTextLength* self, double maximumLength);
double QTextLength_rawValue(const QTextLength* self);
bool QTextLength_operatorEqual(const QTextLength* self, QTextLength* other);
bool QTextLength_operatorNotEqual(const QTextLength* self, QTextLength* other);
QVariant* QTextLength_ToQVariant(const QTextLength* self);
void QTextLength_operatorAssign(QTextLength* self, QTextLength* param1);

void QTextLength_delete(QTextLength* self);

QTextFormat* QTextFormat_new();
QTextFormat* QTextFormat_new2(int type);
QTextFormat* QTextFormat_new3(QTextFormat* rhs);
void QTextFormat_operatorAssign(QTextFormat* self, QTextFormat* rhs);
void QTextFormat_swap(QTextFormat* self, QTextFormat* other);
void QTextFormat_merge(QTextFormat* self, QTextFormat* other);
bool QTextFormat_isValid(const QTextFormat* self);
bool QTextFormat_isEmpty(const QTextFormat* self);
int QTextFormat_type(const QTextFormat* self);
int QTextFormat_objectIndex(const QTextFormat* self);
void QTextFormat_setObjectIndex(QTextFormat* self, int object);
QVariant* QTextFormat_property(const QTextFormat* self, int propertyId);
void QTextFormat_setProperty(QTextFormat* self, int propertyId, QVariant* value);
void QTextFormat_clearProperty(QTextFormat* self, int propertyId);
bool QTextFormat_hasProperty(const QTextFormat* self, int propertyId);
bool QTextFormat_boolProperty(const QTextFormat* self, int propertyId);
int QTextFormat_intProperty(const QTextFormat* self, int propertyId);
double QTextFormat_doubleProperty(const QTextFormat* self, int propertyId);
struct miqt_string QTextFormat_stringProperty(const QTextFormat* self, int propertyId);
QColor* QTextFormat_colorProperty(const QTextFormat* self, int propertyId);
QPen* QTextFormat_penProperty(const QTextFormat* self, int propertyId);
QBrush* QTextFormat_brushProperty(const QTextFormat* self, int propertyId);
QTextLength* QTextFormat_lengthProperty(const QTextFormat* self, int propertyId);
struct miqt_array /* of QTextLength* */  QTextFormat_lengthVectorProperty(const QTextFormat* self, int propertyId);
void QTextFormat_setProperty2(QTextFormat* self, int propertyId, struct miqt_array /* of QTextLength* */  lengths);
struct miqt_map /* of int to QVariant* */  QTextFormat_properties(const QTextFormat* self);
int QTextFormat_propertyCount(const QTextFormat* self);
void QTextFormat_setObjectType(QTextFormat* self, int type);
int QTextFormat_objectType(const QTextFormat* self);
bool QTextFormat_isCharFormat(const QTextFormat* self);
bool QTextFormat_isBlockFormat(const QTextFormat* self);
bool QTextFormat_isListFormat(const QTextFormat* self);
bool QTextFormat_isFrameFormat(const QTextFormat* self);
bool QTextFormat_isImageFormat(const QTextFormat* self);
bool QTextFormat_isTableFormat(const QTextFormat* self);
bool QTextFormat_isTableCellFormat(const QTextFormat* self);
QTextBlockFormat* QTextFormat_toBlockFormat(const QTextFormat* self);
QTextCharFormat* QTextFormat_toCharFormat(const QTextFormat* self);
QTextListFormat* QTextFormat_toListFormat(const QTextFormat* self);
QTextTableFormat* QTextFormat_toTableFormat(const QTextFormat* self);
QTextFrameFormat* QTextFormat_toFrameFormat(const QTextFormat* self);
QTextImageFormat* QTextFormat_toImageFormat(const QTextFormat* self);
QTextTableCellFormat* QTextFormat_toTableCellFormat(const QTextFormat* self);
bool QTextFormat_operatorEqual(const QTextFormat* self, QTextFormat* rhs);
bool QTextFormat_operatorNotEqual(const QTextFormat* self, QTextFormat* rhs);
QVariant* QTextFormat_ToQVariant(const QTextFormat* self);
void QTextFormat_setLayoutDirection(QTextFormat* self, int direction);
int QTextFormat_layoutDirection(const QTextFormat* self);
void QTextFormat_setBackground(QTextFormat* self, QBrush* brush);
QBrush* QTextFormat_background(const QTextFormat* self);
void QTextFormat_clearBackground(QTextFormat* self);
void QTextFormat_setForeground(QTextFormat* self, QBrush* brush);
QBrush* QTextFormat_foreground(const QTextFormat* self);
void QTextFormat_clearForeground(QTextFormat* self);

void QTextFormat_delete(QTextFormat* self);

QTextCharFormat* QTextCharFormat_new();
QTextCharFormat* QTextCharFormat_new2(QTextCharFormat* param1);
void QTextCharFormat_virtbase(QTextCharFormat* src, QTextFormat** outptr_QTextFormat);
bool QTextCharFormat_isValid(const QTextCharFormat* self);
void QTextCharFormat_setFont(QTextCharFormat* self, QFont* font, int behavior);
void QTextCharFormat_setFontWithFont(QTextCharFormat* self, QFont* font);
QFont* QTextCharFormat_font(const QTextCharFormat* self);
void QTextCharFormat_setFontFamily(QTextCharFormat* self, struct miqt_string family);
struct miqt_string QTextCharFormat_fontFamily(const QTextCharFormat* self);
void QTextCharFormat_setFontFamilies(QTextCharFormat* self, struct miqt_array /* of struct miqt_string */  families);
QVariant* QTextCharFormat_fontFamilies(const QTextCharFormat* self);
void QTextCharFormat_setFontStyleName(QTextCharFormat* self, struct miqt_string styleName);
QVariant* QTextCharFormat_fontStyleName(const QTextCharFormat* self);
void QTextCharFormat_setFontPointSize(QTextCharFormat* self, double size);
double QTextCharFormat_fontPointSize(const QTextCharFormat* self);
void QTextCharFormat_setFontWeight(QTextCharFormat* self, int weight);
int QTextCharFormat_fontWeight(const QTextCharFormat* self);
void QTextCharFormat_setFontItalic(QTextCharFormat* self, bool italic);
bool QTextCharFormat_fontItalic(const QTextCharFormat* self);
void QTextCharFormat_setFontCapitalization(QTextCharFormat* self, int capitalization);
int QTextCharFormat_fontCapitalization(const QTextCharFormat* self);
void QTextCharFormat_setFontLetterSpacingType(QTextCharFormat* self, int letterSpacingType);
int QTextCharFormat_fontLetterSpacingType(const QTextCharFormat* self);
void QTextCharFormat_setFontLetterSpacing(QTextCharFormat* self, double spacing);
double QTextCharFormat_fontLetterSpacing(const QTextCharFormat* self);
void QTextCharFormat_setFontWordSpacing(QTextCharFormat* self, double spacing);
double QTextCharFormat_fontWordSpacing(const QTextCharFormat* self);
void QTextCharFormat_setFontUnderline(QTextCharFormat* self, bool underline);
bool QTextCharFormat_fontUnderline(const QTextCharFormat* self);
void QTextCharFormat_setFontOverline(QTextCharFormat* self, bool overline);
bool QTextCharFormat_fontOverline(const QTextCharFormat* self);
void QTextCharFormat_setFontStrikeOut(QTextCharFormat* self, bool strikeOut);
bool QTextCharFormat_fontStrikeOut(const QTextCharFormat* self);
void QTextCharFormat_setUnderlineColor(QTextCharFormat* self, QColor* color);
QColor* QTextCharFormat_underlineColor(const QTextCharFormat* self);
void QTextCharFormat_setFontFixedPitch(QTextCharFormat* self, bool fixedPitch);
bool QTextCharFormat_fontFixedPitch(const QTextCharFormat* self);
void QTextCharFormat_setFontStretch(QTextCharFormat* self, int factor);
int QTextCharFormat_fontStretch(const QTextCharFormat* self);
void QTextCharFormat_setFontStyleHint(QTextCharFormat* self, int hint);
void QTextCharFormat_setFontStyleStrategy(QTextCharFormat* self, int strategy);
int QTextCharFormat_fontStyleHint(const QTextCharFormat* self);
int QTextCharFormat_fontStyleStrategy(const QTextCharFormat* self);
void QTextCharFormat_setFontHintingPreference(QTextCharFormat* self, int hintingPreference);
int QTextCharFormat_fontHintingPreference(const QTextCharFormat* self);
void QTextCharFormat_setFontKerning(QTextCharFormat* self, bool enable);
bool QTextCharFormat_fontKerning(const QTextCharFormat* self);
void QTextCharFormat_setUnderlineStyle(QTextCharFormat* self, int style);
int QTextCharFormat_underlineStyle(const QTextCharFormat* self);
void QTextCharFormat_setVerticalAlignment(QTextCharFormat* self, int alignment);
int QTextCharFormat_verticalAlignment(const QTextCharFormat* self);
void QTextCharFormat_setTextOutline(QTextCharFormat* self, QPen* pen);
QPen* QTextCharFormat_textOutline(const QTextCharFormat* self);
void QTextCharFormat_setToolTip(QTextCharFormat* self, struct miqt_string tip);
struct miqt_string QTextCharFormat_toolTip(const QTextCharFormat* self);
void QTextCharFormat_setAnchor(QTextCharFormat* self, bool anchor);
bool QTextCharFormat_isAnchor(const QTextCharFormat* self);
void QTextCharFormat_setAnchorHref(QTextCharFormat* self, struct miqt_string value);
struct miqt_string QTextCharFormat_anchorHref(const QTextCharFormat* self);
void QTextCharFormat_setAnchorName(QTextCharFormat* self, struct miqt_string name);
struct miqt_string QTextCharFormat_anchorName(const QTextCharFormat* self);
void QTextCharFormat_setAnchorNames(QTextCharFormat* self, struct miqt_array /* of struct miqt_string */  names);
struct miqt_array /* of struct miqt_string */  QTextCharFormat_anchorNames(const QTextCharFormat* self);
void QTextCharFormat_setTableCellRowSpan(QTextCharFormat* self, int tableCellRowSpan);
int QTextCharFormat_tableCellRowSpan(const QTextCharFormat* self);
void QTextCharFormat_setTableCellColumnSpan(QTextCharFormat* self, int tableCellColumnSpan);
int QTextCharFormat_tableCellColumnSpan(const QTextCharFormat* self);
void QTextCharFormat_operatorAssign(QTextCharFormat* self, QTextCharFormat* param1);
void QTextCharFormat_setFontStyleHint2(QTextCharFormat* self, int hint, int strategy);

void QTextCharFormat_delete(QTextCharFormat* self);

QTextBlockFormat* QTextBlockFormat_new();
QTextBlockFormat* QTextBlockFormat_new2(QTextBlockFormat* param1);
void QTextBlockFormat_virtbase(QTextBlockFormat* src, QTextFormat** outptr_QTextFormat);
bool QTextBlockFormat_isValid(const QTextBlockFormat* self);
void QTextBlockFormat_setAlignment(QTextBlockFormat* self, int alignment);
int QTextBlockFormat_alignment(const QTextBlockFormat* self);
void QTextBlockFormat_setTopMargin(QTextBlockFormat* self, double margin);
double QTextBlockFormat_topMargin(const QTextBlockFormat* self);
void QTextBlockFormat_setBottomMargin(QTextBlockFormat* self, double margin);
double QTextBlockFormat_bottomMargin(const QTextBlockFormat* self);
void QTextBlockFormat_setLeftMargin(QTextBlockFormat* self, double margin);
double QTextBlockFormat_leftMargin(const QTextBlockFormat* self);
void QTextBlockFormat_setRightMargin(QTextBlockFormat* self, double margin);
double QTextBlockFormat_rightMargin(const QTextBlockFormat* self);
void QTextBlockFormat_setTextIndent(QTextBlockFormat* self, double aindent);
double QTextBlockFormat_textIndent(const QTextBlockFormat* self);
void QTextBlockFormat_setIndent(QTextBlockFormat* self, int indent);
int QTextBlockFormat_indent(const QTextBlockFormat* self);
void QTextBlockFormat_setHeadingLevel(QTextBlockFormat* self, int alevel);
int QTextBlockFormat_headingLevel(const QTextBlockFormat* self);
void QTextBlockFormat_setLineHeight(QTextBlockFormat* self, double height, int heightType);
double QTextBlockFormat_lineHeight(const QTextBlockFormat* self, double scriptLineHeight, double scaling);
double QTextBlockFormat_lineHeight2(const QTextBlockFormat* self);
int QTextBlockFormat_lineHeightType(const QTextBlockFormat* self);
void QTextBlockFormat_setNonBreakableLines(QTextBlockFormat* self, bool b);
bool QTextBlockFormat_nonBreakableLines(const QTextBlockFormat* self);
void QTextBlockFormat_setPageBreakPolicy(QTextBlockFormat* self, int flags);
int QTextBlockFormat_pageBreakPolicy(const QTextBlockFormat* self);
void QTextBlockFormat_setTabPositions(QTextBlockFormat* self, struct miqt_array /* of QTextOption__Tab* */  tabs);
struct miqt_array /* of QTextOption__Tab* */  QTextBlockFormat_tabPositions(const QTextBlockFormat* self);
void QTextBlockFormat_setMarker(QTextBlockFormat* self, int marker);
int QTextBlockFormat_marker(const QTextBlockFormat* self);
void QTextBlockFormat_operatorAssign(QTextBlockFormat* self, QTextBlockFormat* param1);

void QTextBlockFormat_delete(QTextBlockFormat* self);

QTextListFormat* QTextListFormat_new();
QTextListFormat* QTextListFormat_new2(QTextListFormat* param1);
void QTextListFormat_virtbase(QTextListFormat* src, QTextFormat** outptr_QTextFormat);
bool QTextListFormat_isValid(const QTextListFormat* self);
void QTextListFormat_setStyle(QTextListFormat* self, int style);
int QTextListFormat_style(const QTextListFormat* self);
void QTextListFormat_setIndent(QTextListFormat* self, int indent);
int QTextListFormat_indent(const QTextListFormat* self);
void QTextListFormat_setNumberPrefix(QTextListFormat* self, struct miqt_string numberPrefix);
struct miqt_string QTextListFormat_numberPrefix(const QTextListFormat* self);
void QTextListFormat_setNumberSuffix(QTextListFormat* self, struct miqt_string numberSuffix);
struct miqt_string QTextListFormat_numberSuffix(const QTextListFormat* self);
void QTextListFormat_operatorAssign(QTextListFormat* self, QTextListFormat* param1);

void QTextListFormat_delete(QTextListFormat* self);

QTextImageFormat* QTextImageFormat_new();
void QTextImageFormat_virtbase(QTextImageFormat* src, QTextCharFormat** outptr_QTextCharFormat);
bool QTextImageFormat_isValid(const QTextImageFormat* self);
void QTextImageFormat_setName(QTextImageFormat* self, struct miqt_string name);
struct miqt_string QTextImageFormat_name(const QTextImageFormat* self);
void QTextImageFormat_setWidth(QTextImageFormat* self, double width);
double QTextImageFormat_width(const QTextImageFormat* self);
void QTextImageFormat_setHeight(QTextImageFormat* self, double height);
double QTextImageFormat_height(const QTextImageFormat* self);
void QTextImageFormat_setQuality(QTextImageFormat* self);
int QTextImageFormat_quality(const QTextImageFormat* self);
void QTextImageFormat_setQualityWithQuality(QTextImageFormat* self, int quality);

void QTextImageFormat_delete(QTextImageFormat* self);

QTextFrameFormat* QTextFrameFormat_new();
QTextFrameFormat* QTextFrameFormat_new2(QTextFrameFormat* param1);
void QTextFrameFormat_virtbase(QTextFrameFormat* src, QTextFormat** outptr_QTextFormat);
bool QTextFrameFormat_isValid(const QTextFrameFormat* self);
void QTextFrameFormat_setPosition(QTextFrameFormat* self, int f);
int QTextFrameFormat_position(const QTextFrameFormat* self);
void QTextFrameFormat_setBorder(QTextFrameFormat* self, double border);
double QTextFrameFormat_border(const QTextFrameFormat* self);
void QTextFrameFormat_setBorderBrush(QTextFrameFormat* self, QBrush* brush);
QBrush* QTextFrameFormat_borderBrush(const QTextFrameFormat* self);
void QTextFrameFormat_setBorderStyle(QTextFrameFormat* self, int style);
int QTextFrameFormat_borderStyle(const QTextFrameFormat* self);
void QTextFrameFormat_setMargin(QTextFrameFormat* self, double margin);
double QTextFrameFormat_margin(const QTextFrameFormat* self);
void QTextFrameFormat_setTopMargin(QTextFrameFormat* self, double margin);
double QTextFrameFormat_topMargin(const QTextFrameFormat* self);
void QTextFrameFormat_setBottomMargin(QTextFrameFormat* self, double margin);
double QTextFrameFormat_bottomMargin(const QTextFrameFormat* self);
void QTextFrameFormat_setLeftMargin(QTextFrameFormat* self, double margin);
double QTextFrameFormat_leftMargin(const QTextFrameFormat* self);
void QTextFrameFormat_setRightMargin(QTextFrameFormat* self, double margin);
double QTextFrameFormat_rightMargin(const QTextFrameFormat* self);
void QTextFrameFormat_setPadding(QTextFrameFormat* self, double padding);
double QTextFrameFormat_padding(const QTextFrameFormat* self);
void QTextFrameFormat_setWidth(QTextFrameFormat* self, double width);
void QTextFrameFormat_setWidthWithLength(QTextFrameFormat* self, QTextLength* length);
QTextLength* QTextFrameFormat_width(const QTextFrameFormat* self);
void QTextFrameFormat_setHeight(QTextFrameFormat* self, double height);
void QTextFrameFormat_setHeightWithHeight(QTextFrameFormat* self, QTextLength* height);
QTextLength* QTextFrameFormat_height(const QTextFrameFormat* self);
void QTextFrameFormat_setPageBreakPolicy(QTextFrameFormat* self, int flags);
int QTextFrameFormat_pageBreakPolicy(const QTextFrameFormat* self);
void QTextFrameFormat_operatorAssign(QTextFrameFormat* self, QTextFrameFormat* param1);

void QTextFrameFormat_delete(QTextFrameFormat* self);

QTextTableFormat* QTextTableFormat_new();
void QTextTableFormat_virtbase(QTextTableFormat* src, QTextFrameFormat** outptr_QTextFrameFormat);
bool QTextTableFormat_isValid(const QTextTableFormat* self);
int QTextTableFormat_columns(const QTextTableFormat* self);
void QTextTableFormat_setColumns(QTextTableFormat* self, int columns);
void QTextTableFormat_setColumnWidthConstraints(QTextTableFormat* self, struct miqt_array /* of QTextLength* */  constraints);
struct miqt_array /* of QTextLength* */  QTextTableFormat_columnWidthConstraints(const QTextTableFormat* self);
void QTextTableFormat_clearColumnWidthConstraints(QTextTableFormat* self);
double QTextTableFormat_cellSpacing(const QTextTableFormat* self);
void QTextTableFormat_setCellSpacing(QTextTableFormat* self, double spacing);
double QTextTableFormat_cellPadding(const QTextTableFormat* self);
void QTextTableFormat_setCellPadding(QTextTableFormat* self, double padding);
void QTextTableFormat_setAlignment(QTextTableFormat* self, int alignment);
int QTextTableFormat_alignment(const QTextTableFormat* self);
void QTextTableFormat_setHeaderRowCount(QTextTableFormat* self, int count);
int QTextTableFormat_headerRowCount(const QTextTableFormat* self);
void QTextTableFormat_setBorderCollapse(QTextTableFormat* self, bool borderCollapse);
bool QTextTableFormat_borderCollapse(const QTextTableFormat* self);

void QTextTableFormat_delete(QTextTableFormat* self);

QTextTableCellFormat* QTextTableCellFormat_new();
void QTextTableCellFormat_virtbase(QTextTableCellFormat* src, QTextCharFormat** outptr_QTextCharFormat);
bool QTextTableCellFormat_isValid(const QTextTableCellFormat* self);
void QTextTableCellFormat_setTopPadding(QTextTableCellFormat* self, double padding);
double QTextTableCellFormat_topPadding(const QTextTableCellFormat* self);
void QTextTableCellFormat_setBottomPadding(QTextTableCellFormat* self, double padding);
double QTextTableCellFormat_bottomPadding(const QTextTableCellFormat* self);
void QTextTableCellFormat_setLeftPadding(QTextTableCellFormat* self, double padding);
double QTextTableCellFormat_leftPadding(const QTextTableCellFormat* self);
void QTextTableCellFormat_setRightPadding(QTextTableCellFormat* self, double padding);
double QTextTableCellFormat_rightPadding(const QTextTableCellFormat* self);
void QTextTableCellFormat_setPadding(QTextTableCellFormat* self, double padding);
void QTextTableCellFormat_setTopBorder(QTextTableCellFormat* self, double width);
double QTextTableCellFormat_topBorder(const QTextTableCellFormat* self);
void QTextTableCellFormat_setBottomBorder(QTextTableCellFormat* self, double width);
double QTextTableCellFormat_bottomBorder(const QTextTableCellFormat* self);
void QTextTableCellFormat_setLeftBorder(QTextTableCellFormat* self, double width);
double QTextTableCellFormat_leftBorder(const QTextTableCellFormat* self);
void QTextTableCellFormat_setRightBorder(QTextTableCellFormat* self, double width);
double QTextTableCellFormat_rightBorder(const QTextTableCellFormat* self);
void QTextTableCellFormat_setBorder(QTextTableCellFormat* self, double width);
void QTextTableCellFormat_setTopBorderStyle(QTextTableCellFormat* self, int style);
int QTextTableCellFormat_topBorderStyle(const QTextTableCellFormat* self);
void QTextTableCellFormat_setBottomBorderStyle(QTextTableCellFormat* self, int style);
int QTextTableCellFormat_bottomBorderStyle(const QTextTableCellFormat* self);
void QTextTableCellFormat_setLeftBorderStyle(QTextTableCellFormat* self, int style);
int QTextTableCellFormat_leftBorderStyle(const QTextTableCellFormat* self);
void QTextTableCellFormat_setRightBorderStyle(QTextTableCellFormat* self, int style);
int QTextTableCellFormat_rightBorderStyle(const QTextTableCellFormat* self);
void QTextTableCellFormat_setBorderStyle(QTextTableCellFormat* self, int style);
void QTextTableCellFormat_setTopBorderBrush(QTextTableCellFormat* self, QBrush* brush);
QBrush* QTextTableCellFormat_topBorderBrush(const QTextTableCellFormat* self);
void QTextTableCellFormat_setBottomBorderBrush(QTextTableCellFormat* self, QBrush* brush);
QBrush* QTextTableCellFormat_bottomBorderBrush(const QTextTableCellFormat* self);
void QTextTableCellFormat_setLeftBorderBrush(QTextTableCellFormat* self, QBrush* brush);
QBrush* QTextTableCellFormat_leftBorderBrush(const QTextTableCellFormat* self);
void QTextTableCellFormat_setRightBorderBrush(QTextTableCellFormat* self, QBrush* brush);
QBrush* QTextTableCellFormat_rightBorderBrush(const QTextTableCellFormat* self);
void QTextTableCellFormat_setBorderBrush(QTextTableCellFormat* self, QBrush* brush);

void QTextTableCellFormat_delete(QTextTableCellFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
