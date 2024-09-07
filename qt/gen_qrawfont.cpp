#include <QByteArray>
#include <QChar>
#include <QFont>
#include <QImage>
#include <QList>
#include <QPainterPath>
#include <QPointF>
#include <QRawFont>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include "qrawfont.h"

#include "gen_qrawfont.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QRawFont* QRawFont_new() {
	return new QRawFont();
}

QRawFont* QRawFont_new2(const char* fileName, size_t fileName_Strlen, double pixelSize) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QRawFont(fileName_QString, static_cast<qreal>(pixelSize));
}

QRawFont* QRawFont_new3(QByteArray* fontData, double pixelSize) {
	return new QRawFont(*fontData, static_cast<qreal>(pixelSize));
}

QRawFont* QRawFont_new4(QRawFont* other) {
	return new QRawFont(*other);
}

QRawFont* QRawFont_new5(const char* fileName, size_t fileName_Strlen, double pixelSize, uintptr_t hintingPreference) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QRawFont(fileName_QString, static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

QRawFont* QRawFont_new6(QByteArray* fontData, double pixelSize, uintptr_t hintingPreference) {
	return new QRawFont(*fontData, static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

void QRawFont_OperatorAssign(QRawFont* self, QRawFont* other) {
	self->operator=(*other);
}

void QRawFont_Swap(QRawFont* self, QRawFont* other) {
	self->swap(*other);
}

bool QRawFont_IsValid(QRawFont* self) {
	return const_cast<const QRawFont*>(self)->isValid();
}

bool QRawFont_OperatorEqual(QRawFont* self, QRawFont* other) {
	return const_cast<const QRawFont*>(self)->operator==(*other);
}

bool QRawFont_OperatorNotEqual(QRawFont* self, QRawFont* other) {
	return const_cast<const QRawFont*>(self)->operator!=(*other);
}

void QRawFont_FamilyName(QRawFont* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QRawFont*>(self)->familyName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRawFont_StyleName(QRawFont* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QRawFont*>(self)->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QRawFont_Style(QRawFont* self) {
	QFont::Style ret = const_cast<const QRawFont*>(self)->style();
	return static_cast<uintptr_t>(ret);
}

int QRawFont_Weight(QRawFont* self) {
	return const_cast<const QRawFont*>(self)->weight();
}

void QRawFont_GlyphIndexesForString(QRawFont* self, const char* text, size_t text_Strlen, unsigned int** _out, size_t* _out_len) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QVector<unsigned int> ret = const_cast<const QRawFont*>(self)->glyphIndexesForString(text_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* __out = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QRawFont_AdvancesForGlyphIndexes(QRawFont* self, unsigned int* glyphIndexes, size_t glyphIndexes_len, QPointF*** _out, size_t* _out_len) {
	QVector<unsigned int> glyphIndexes_QList;
	glyphIndexes_QList.reserve(glyphIndexes_len);
	for(size_t i = 0; i < glyphIndexes_len; ++i) {
		glyphIndexes_QList.push_back(glyphIndexes[i]);
	}
	QVector<QPointF> ret = const_cast<const QRawFont*>(self)->advancesForGlyphIndexes(glyphIndexes_QList);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QPointF** __out = static_cast<QPointF**>(malloc(sizeof(QPointF**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QPointF(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QRawFont_AdvancesForGlyphIndexes2(QRawFont* self, unsigned int* glyphIndexes, size_t glyphIndexes_len, int layoutFlags, QPointF*** _out, size_t* _out_len) {
	QVector<unsigned int> glyphIndexes_QList;
	glyphIndexes_QList.reserve(glyphIndexes_len);
	for(size_t i = 0; i < glyphIndexes_len; ++i) {
		glyphIndexes_QList.push_back(glyphIndexes[i]);
	}
	QVector<QPointF> ret = const_cast<const QRawFont*>(self)->advancesForGlyphIndexes(glyphIndexes_QList, static_cast<QRawFont::LayoutFlags>(layoutFlags));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QPointF** __out = static_cast<QPointF**>(malloc(sizeof(QPointF**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QPointF(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

bool QRawFont_GlyphIndexesForChars(QRawFont* self, QChar* chars, int numChars, unsigned int* glyphIndexes, int* numGlyphs) {
	return const_cast<const QRawFont*>(self)->glyphIndexesForChars(chars, static_cast<int>(numChars), static_cast<quint32*>(glyphIndexes), static_cast<int*>(numGlyphs));
}

bool QRawFont_AdvancesForGlyphIndexes3(QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs) {
	return const_cast<const QRawFont*>(self)->advancesForGlyphIndexes(static_cast<const quint32*>(glyphIndexes), advances, static_cast<int>(numGlyphs));
}

bool QRawFont_AdvancesForGlyphIndexes4(QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs, int layoutFlags) {
	return const_cast<const QRawFont*>(self)->advancesForGlyphIndexes(static_cast<const quint32*>(glyphIndexes), advances, static_cast<int>(numGlyphs), static_cast<QRawFont::LayoutFlags>(layoutFlags));
}

QImage* QRawFont_AlphaMapForGlyph(QRawFont* self, unsigned int glyphIndex) {
	QImage ret = const_cast<const QRawFont*>(self)->alphaMapForGlyph(static_cast<quint32>(glyphIndex));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QPainterPath* QRawFont_PathForGlyph(QRawFont* self, unsigned int glyphIndex) {
	QPainterPath ret = const_cast<const QRawFont*>(self)->pathForGlyph(static_cast<quint32>(glyphIndex));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QRectF* QRawFont_BoundingRect(QRawFont* self, unsigned int glyphIndex) {
	QRectF ret = const_cast<const QRawFont*>(self)->boundingRect(static_cast<quint32>(glyphIndex));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QRawFont_SetPixelSize(QRawFont* self, double pixelSize) {
	self->setPixelSize(static_cast<qreal>(pixelSize));
}

double QRawFont_PixelSize(QRawFont* self) {
	return const_cast<const QRawFont*>(self)->pixelSize();
}

uintptr_t QRawFont_HintingPreference(QRawFont* self) {
	QFont::HintingPreference ret = const_cast<const QRawFont*>(self)->hintingPreference();
	return static_cast<uintptr_t>(ret);
}

double QRawFont_Ascent(QRawFont* self) {
	return const_cast<const QRawFont*>(self)->ascent();
}

double QRawFont_CapHeight(QRawFont* self) {
	return const_cast<const QRawFont*>(self)->capHeight();
}

double QRawFont_Descent(QRawFont* self) {
	return const_cast<const QRawFont*>(self)->descent();
}

double QRawFont_Leading(QRawFont* self) {
	return const_cast<const QRawFont*>(self)->leading();
}

double QRawFont_XHeight(QRawFont* self) {
	return const_cast<const QRawFont*>(self)->xHeight();
}

double QRawFont_AverageCharWidth(QRawFont* self) {
	return const_cast<const QRawFont*>(self)->averageCharWidth();
}

double QRawFont_MaxCharWidth(QRawFont* self) {
	return const_cast<const QRawFont*>(self)->maxCharWidth();
}

double QRawFont_LineThickness(QRawFont* self) {
	return const_cast<const QRawFont*>(self)->lineThickness();
}

double QRawFont_UnderlinePosition(QRawFont* self) {
	return const_cast<const QRawFont*>(self)->underlinePosition();
}

double QRawFont_UnitsPerEm(QRawFont* self) {
	return const_cast<const QRawFont*>(self)->unitsPerEm();
}

void QRawFont_LoadFromFile(QRawFont* self, const char* fileName, size_t fileName_Strlen, double pixelSize, uintptr_t hintingPreference) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->loadFromFile(fileName_QString, static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

void QRawFont_LoadFromData(QRawFont* self, QByteArray* fontData, double pixelSize, uintptr_t hintingPreference) {
	self->loadFromData(*fontData, static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

bool QRawFont_SupportsCharacter(QRawFont* self, unsigned int ucs4) {
	return const_cast<const QRawFont*>(self)->supportsCharacter(static_cast<uint>(ucs4));
}

bool QRawFont_SupportsCharacterWithCharacter(QRawFont* self, QChar* character) {
	return const_cast<const QRawFont*>(self)->supportsCharacter(*character);
}

void QRawFont_SupportedWritingSystems(QRawFont* self, uintptr_t** _out, size_t* _out_len) {
	QList<QFontDatabase::WritingSystem> ret = const_cast<const QRawFont*>(self)->supportedWritingSystems();
	// Convert QList<> from C++ memory to manually-managed C memory
	uintptr_t* __out = static_cast<uintptr_t*>(malloc(sizeof(uintptr_t) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QByteArray* QRawFont_FontTable(QRawFont* self, const char* tagName) {
	QByteArray ret = const_cast<const QRawFont*>(self)->fontTable(tagName);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QRawFont* QRawFont_FromFont(QFont* font) {
	QRawFont ret = QRawFont::fromFont(*font);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRawFont*>(new QRawFont(ret));
}

QImage* QRawFont_AlphaMapForGlyph2(QRawFont* self, unsigned int glyphIndex, uintptr_t antialiasingType) {
	QImage ret = const_cast<const QRawFont*>(self)->alphaMapForGlyph(static_cast<quint32>(glyphIndex), static_cast<QRawFont::AntialiasingType>(antialiasingType));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QRawFont_AlphaMapForGlyph3(QRawFont* self, unsigned int glyphIndex, uintptr_t antialiasingType, QTransform* transform) {
	QImage ret = const_cast<const QRawFont*>(self)->alphaMapForGlyph(static_cast<quint32>(glyphIndex), static_cast<QRawFont::AntialiasingType>(antialiasingType), *transform);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QRawFont* QRawFont_FromFont2(QFont* font, uintptr_t writingSystem) {
	QRawFont ret = QRawFont::fromFont(*font, static_cast<QFontDatabase::WritingSystem>(writingSystem));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRawFont*>(new QRawFont(ret));
}

void QRawFont_Delete(QRawFont* self) {
	delete self;
}

