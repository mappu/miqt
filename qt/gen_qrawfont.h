#ifndef GEN_QRAWFONT_H
#define GEN_QRAWFONT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QChar;
class QFont;
class QImage;
class QPainterPath;
class QPointF;
class QRawFont;
class QRectF;
class QTransform;
#else
typedef struct QByteArray QByteArray;
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
QRawFont* QRawFont_new2(const char* fileName, size_t fileName_Strlen, double pixelSize);
QRawFont* QRawFont_new3(QByteArray* fontData, double pixelSize);
QRawFont* QRawFont_new4(QRawFont* other);
QRawFont* QRawFont_new5(const char* fileName, size_t fileName_Strlen, double pixelSize, uintptr_t hintingPreference);
QRawFont* QRawFont_new6(QByteArray* fontData, double pixelSize, uintptr_t hintingPreference);
void QRawFont_OperatorAssign(QRawFont* self, QRawFont* other);
void QRawFont_Swap(QRawFont* self, QRawFont* other);
bool QRawFont_IsValid(QRawFont* self);
bool QRawFont_OperatorEqual(QRawFont* self, QRawFont* other);
bool QRawFont_OperatorNotEqual(QRawFont* self, QRawFont* other);
void QRawFont_FamilyName(QRawFont* self, char** _out, int* _out_Strlen);
void QRawFont_StyleName(QRawFont* self, char** _out, int* _out_Strlen);
uintptr_t QRawFont_Style(QRawFont* self);
int QRawFont_Weight(QRawFont* self);
void QRawFont_GlyphIndexesForString(QRawFont* self, const char* text, size_t text_Strlen, unsigned int** _out, size_t* _out_len);
void QRawFont_AdvancesForGlyphIndexes(QRawFont* self, unsigned int* glyphIndexes, size_t glyphIndexes_len, QPointF*** _out, size_t* _out_len);
void QRawFont_AdvancesForGlyphIndexes2(QRawFont* self, unsigned int* glyphIndexes, size_t glyphIndexes_len, int layoutFlags, QPointF*** _out, size_t* _out_len);
bool QRawFont_GlyphIndexesForChars(QRawFont* self, QChar* chars, int numChars, unsigned int* glyphIndexes, int* numGlyphs);
bool QRawFont_AdvancesForGlyphIndexes3(QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs);
bool QRawFont_AdvancesForGlyphIndexes4(QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs, int layoutFlags);
QImage* QRawFont_AlphaMapForGlyph(QRawFont* self, unsigned int glyphIndex);
QPainterPath* QRawFont_PathForGlyph(QRawFont* self, unsigned int glyphIndex);
QRectF* QRawFont_BoundingRect(QRawFont* self, unsigned int glyphIndex);
void QRawFont_SetPixelSize(QRawFont* self, double pixelSize);
double QRawFont_PixelSize(QRawFont* self);
uintptr_t QRawFont_HintingPreference(QRawFont* self);
double QRawFont_Ascent(QRawFont* self);
double QRawFont_CapHeight(QRawFont* self);
double QRawFont_Descent(QRawFont* self);
double QRawFont_Leading(QRawFont* self);
double QRawFont_XHeight(QRawFont* self);
double QRawFont_AverageCharWidth(QRawFont* self);
double QRawFont_MaxCharWidth(QRawFont* self);
double QRawFont_LineThickness(QRawFont* self);
double QRawFont_UnderlinePosition(QRawFont* self);
double QRawFont_UnitsPerEm(QRawFont* self);
void QRawFont_LoadFromFile(QRawFont* self, const char* fileName, size_t fileName_Strlen, double pixelSize, uintptr_t hintingPreference);
void QRawFont_LoadFromData(QRawFont* self, QByteArray* fontData, double pixelSize, uintptr_t hintingPreference);
bool QRawFont_SupportsCharacter(QRawFont* self, unsigned int ucs4);
bool QRawFont_SupportsCharacterWithCharacter(QRawFont* self, QChar* character);
void QRawFont_SupportedWritingSystems(QRawFont* self, uintptr_t** _out, size_t* _out_len);
QByteArray* QRawFont_FontTable(QRawFont* self, const char* tagName);
QRawFont* QRawFont_FromFont(QFont* font);
QImage* QRawFont_AlphaMapForGlyph2(QRawFont* self, unsigned int glyphIndex, uintptr_t antialiasingType);
QImage* QRawFont_AlphaMapForGlyph3(QRawFont* self, unsigned int glyphIndex, uintptr_t antialiasingType, QTransform* transform);
QRawFont* QRawFont_FromFont2(QFont* font, uintptr_t writingSystem);
void QRawFont_Delete(QRawFont* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
