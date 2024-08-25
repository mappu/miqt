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
class QPainterPath;
class QPointF;
class QRawFont;
class QRectF;
#else
typedef struct QByteArray QByteArray;
typedef struct QChar QChar;
typedef struct QPainterPath QPainterPath;
typedef struct QPointF QPointF;
typedef struct QRawFont QRawFont;
typedef struct QRectF QRectF;
#endif

QRawFont* QRawFont_new();
QRawFont* QRawFont_new2(QRawFont* other);
void QRawFont_OperatorAssign(QRawFont* self, QRawFont* other);
void QRawFont_Swap(QRawFont* self, QRawFont* other);
bool QRawFont_IsValid(QRawFont* self);
bool QRawFont_OperatorEqual(QRawFont* self, QRawFont* other);
bool QRawFont_OperatorNotEqual(QRawFont* self, QRawFont* other);
void QRawFont_FamilyName(QRawFont* self, char** _out, int* _out_Strlen);
void QRawFont_StyleName(QRawFont* self, char** _out, int* _out_Strlen);
int QRawFont_Weight(QRawFont* self);
void QRawFont_GlyphIndexesForString(QRawFont* self, const char* text, size_t text_Strlen, uint32_t** _out, size_t* _out_len);
void QRawFont_AdvancesForGlyphIndexes(QRawFont* self, uint32_t* glyphIndexes, size_t glyphIndexes_len, QPointF*** _out, size_t* _out_len);
bool QRawFont_GlyphIndexesForChars(QRawFont* self, QChar* chars, int numChars, uint32_t* glyphIndexes, int* numGlyphs);
bool QRawFont_AdvancesForGlyphIndexes2(QRawFont* self, uint32_t* glyphIndexes, QPointF* advances, int numGlyphs);
QPainterPath* QRawFont_PathForGlyph(QRawFont* self, uint32_t glyphIndex);
QRectF* QRawFont_BoundingRect(QRawFont* self, uint32_t glyphIndex);
void QRawFont_SetPixelSize(QRawFont* self, double pixelSize);
double QRawFont_PixelSize(QRawFont* self);
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
bool QRawFont_SupportsCharacter(QRawFont* self, unsigned int ucs4);
bool QRawFont_SupportsCharacterWithCharacter(QRawFont* self, QChar* character);
QByteArray* QRawFont_FontTable(QRawFont* self, char* tagName);
void QRawFont_Delete(QRawFont* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
