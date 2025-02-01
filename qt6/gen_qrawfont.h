#pragma once
#ifndef MIQT_QT6_GEN_QRAWFONT_H
#define MIQT_QT6_GEN_QRAWFONT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChar;
class QFont;
class QImage;
class QPainterPath;
class QPointF;
class QRawFont;
class QRectF;
class QTransform;
#else
typedef struct QChar QChar;
typedef struct QFont QFont;
typedef struct QImage QImage;
typedef struct QPainterPath QPainterPath;
typedef struct QPointF QPointF;
typedef struct QRawFont QRawFont;
typedef struct QRectF QRectF;
typedef struct QTransform QTransform;
#endif

QRawFont* QRawFont_new();
QRawFont* QRawFont_new2(struct miqt_string fileName, double pixelSize);
QRawFont* QRawFont_new3(struct miqt_string fontData, double pixelSize);
QRawFont* QRawFont_new4(QRawFont* other);
QRawFont* QRawFont_new5(struct miqt_string fileName, double pixelSize, int hintingPreference);
QRawFont* QRawFont_new6(struct miqt_string fontData, double pixelSize, int hintingPreference);
void QRawFont_operatorAssign(QRawFont* self, QRawFont* other);
void QRawFont_swap(QRawFont* self, QRawFont* other);
bool QRawFont_isValid(const QRawFont* self);
bool QRawFont_operatorEqual(const QRawFont* self, QRawFont* other);
bool QRawFont_operatorNotEqual(const QRawFont* self, QRawFont* other);
struct miqt_string QRawFont_familyName(const QRawFont* self);
struct miqt_string QRawFont_styleName(const QRawFont* self);
int QRawFont_style(const QRawFont* self);
int QRawFont_weight(const QRawFont* self);
struct miqt_array /* of unsigned int */  QRawFont_glyphIndexesForString(const QRawFont* self, struct miqt_string text);
struct miqt_array /* of QPointF* */  QRawFont_advancesForGlyphIndexes(const QRawFont* self, struct miqt_array /* of unsigned int */  glyphIndexes);
struct miqt_array /* of QPointF* */  QRawFont_advancesForGlyphIndexes2(const QRawFont* self, struct miqt_array /* of unsigned int */  glyphIndexes, int layoutFlags);
bool QRawFont_glyphIndexesForChars(const QRawFont* self, QChar* chars, int numChars, unsigned int* glyphIndexes, int* numGlyphs);
bool QRawFont_advancesForGlyphIndexes3(const QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs);
bool QRawFont_advancesForGlyphIndexes4(const QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs, int layoutFlags);
QImage* QRawFont_alphaMapForGlyph(const QRawFont* self, unsigned int glyphIndex);
QPainterPath* QRawFont_pathForGlyph(const QRawFont* self, unsigned int glyphIndex);
QRectF* QRawFont_boundingRect(const QRawFont* self, unsigned int glyphIndex);
void QRawFont_setPixelSize(QRawFont* self, double pixelSize);
double QRawFont_pixelSize(const QRawFont* self);
int QRawFont_hintingPreference(const QRawFont* self);
double QRawFont_ascent(const QRawFont* self);
double QRawFont_capHeight(const QRawFont* self);
double QRawFont_descent(const QRawFont* self);
double QRawFont_leading(const QRawFont* self);
double QRawFont_xHeight(const QRawFont* self);
double QRawFont_averageCharWidth(const QRawFont* self);
double QRawFont_maxCharWidth(const QRawFont* self);
double QRawFont_lineThickness(const QRawFont* self);
double QRawFont_underlinePosition(const QRawFont* self);
double QRawFont_unitsPerEm(const QRawFont* self);
void QRawFont_loadFromFile(QRawFont* self, struct miqt_string fileName, double pixelSize, int hintingPreference);
void QRawFont_loadFromData(QRawFont* self, struct miqt_string fontData, double pixelSize, int hintingPreference);
bool QRawFont_supportsCharacter(const QRawFont* self, unsigned int ucs4);
bool QRawFont_supportsCharacterWithCharacter(const QRawFont* self, QChar* character);
struct miqt_array /* of int */  QRawFont_supportedWritingSystems(const QRawFont* self);
struct miqt_string QRawFont_fontTable(const QRawFont* self, const char* tagName);
QRawFont* QRawFont_fromFont(QFont* font);
QImage* QRawFont_alphaMapForGlyph2(const QRawFont* self, unsigned int glyphIndex, int antialiasingType);
QImage* QRawFont_alphaMapForGlyph3(const QRawFont* self, unsigned int glyphIndex, int antialiasingType, QTransform* transform);
QRawFont* QRawFont_fromFont2(QFont* font, int writingSystem);
void QRawFont_delete(QRawFont* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
