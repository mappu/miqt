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

bool QRawFont_IsValid(const QRawFont* self) {
	return self->isValid();
}

bool QRawFont_OperatorEqual(const QRawFont* self, QRawFont* other) {
	return self->operator==(*other);
}

bool QRawFont_OperatorNotEqual(const QRawFont* self, QRawFont* other) {
	return self->operator!=(*other);
}

void QRawFont_FamilyName(const QRawFont* self, char** _out, int* _out_Strlen) {
	QString ret = self->familyName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRawFont_StyleName(const QRawFont* self, char** _out, int* _out_Strlen) {
	QString ret = self->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QRawFont_Style(const QRawFont* self) {
	QFont::Style ret = self->style();
	return static_cast<uintptr_t>(ret);
}

int QRawFont_Weight(const QRawFont* self) {
	return self->weight();
}

void QRawFont_GlyphIndexesForString(const QRawFont* self, const char* text, size_t text_Strlen, unsigned int** _out, size_t* _out_len) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QVector<unsigned int> ret = self->glyphIndexesForString(text_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* __out = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QRawFont_AdvancesForGlyphIndexes(const QRawFont* self, unsigned int* glyphIndexes, size_t glyphIndexes_len, QPointF*** _out, size_t* _out_len) {
	QVector<unsigned int> glyphIndexes_QList;
	glyphIndexes_QList.reserve(glyphIndexes_len);
	for(size_t i = 0; i < glyphIndexes_len; ++i) {
		glyphIndexes_QList.push_back(glyphIndexes[i]);
	}
	QVector<QPointF> ret = self->advancesForGlyphIndexes(glyphIndexes_QList);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QPointF** __out = static_cast<QPointF**>(malloc(sizeof(QPointF**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QPointF(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QRawFont_AdvancesForGlyphIndexes2(const QRawFont* self, unsigned int* glyphIndexes, size_t glyphIndexes_len, int layoutFlags, QPointF*** _out, size_t* _out_len) {
	QVector<unsigned int> glyphIndexes_QList;
	glyphIndexes_QList.reserve(glyphIndexes_len);
	for(size_t i = 0; i < glyphIndexes_len; ++i) {
		glyphIndexes_QList.push_back(glyphIndexes[i]);
	}
	QVector<QPointF> ret = self->advancesForGlyphIndexes(glyphIndexes_QList, static_cast<QRawFont::LayoutFlags>(layoutFlags));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QPointF** __out = static_cast<QPointF**>(malloc(sizeof(QPointF**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QPointF(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

bool QRawFont_GlyphIndexesForChars(const QRawFont* self, QChar* chars, int numChars, unsigned int* glyphIndexes, int* numGlyphs) {
	return self->glyphIndexesForChars(chars, static_cast<int>(numChars), static_cast<quint32*>(glyphIndexes), static_cast<int*>(numGlyphs));
}

bool QRawFont_AdvancesForGlyphIndexes3(const QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs) {
	return self->advancesForGlyphIndexes(static_cast<const quint32*>(glyphIndexes), advances, static_cast<int>(numGlyphs));
}

bool QRawFont_AdvancesForGlyphIndexes4(const QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs, int layoutFlags) {
	return self->advancesForGlyphIndexes(static_cast<const quint32*>(glyphIndexes), advances, static_cast<int>(numGlyphs), static_cast<QRawFont::LayoutFlags>(layoutFlags));
}

QImage* QRawFont_AlphaMapForGlyph(const QRawFont* self, unsigned int glyphIndex) {
	QImage ret = self->alphaMapForGlyph(static_cast<quint32>(glyphIndex));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QPainterPath* QRawFont_PathForGlyph(const QRawFont* self, unsigned int glyphIndex) {
	QPainterPath ret = self->pathForGlyph(static_cast<quint32>(glyphIndex));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QRectF* QRawFont_BoundingRect(const QRawFont* self, unsigned int glyphIndex) {
	QRectF ret = self->boundingRect(static_cast<quint32>(glyphIndex));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QRawFont_SetPixelSize(QRawFont* self, double pixelSize) {
	self->setPixelSize(static_cast<qreal>(pixelSize));
}

double QRawFont_PixelSize(const QRawFont* self) {
	return self->pixelSize();
}

uintptr_t QRawFont_HintingPreference(const QRawFont* self) {
	QFont::HintingPreference ret = self->hintingPreference();
	return static_cast<uintptr_t>(ret);
}

double QRawFont_Ascent(const QRawFont* self) {
	return self->ascent();
}

double QRawFont_CapHeight(const QRawFont* self) {
	return self->capHeight();
}

double QRawFont_Descent(const QRawFont* self) {
	return self->descent();
}

double QRawFont_Leading(const QRawFont* self) {
	return self->leading();
}

double QRawFont_XHeight(const QRawFont* self) {
	return self->xHeight();
}

double QRawFont_AverageCharWidth(const QRawFont* self) {
	return self->averageCharWidth();
}

double QRawFont_MaxCharWidth(const QRawFont* self) {
	return self->maxCharWidth();
}

double QRawFont_LineThickness(const QRawFont* self) {
	return self->lineThickness();
}

double QRawFont_UnderlinePosition(const QRawFont* self) {
	return self->underlinePosition();
}

double QRawFont_UnitsPerEm(const QRawFont* self) {
	return self->unitsPerEm();
}

void QRawFont_LoadFromFile(QRawFont* self, const char* fileName, size_t fileName_Strlen, double pixelSize, uintptr_t hintingPreference) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->loadFromFile(fileName_QString, static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

void QRawFont_LoadFromData(QRawFont* self, QByteArray* fontData, double pixelSize, uintptr_t hintingPreference) {
	self->loadFromData(*fontData, static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

bool QRawFont_SupportsCharacter(const QRawFont* self, unsigned int ucs4) {
	return self->supportsCharacter(static_cast<uint>(ucs4));
}

bool QRawFont_SupportsCharacterWithCharacter(const QRawFont* self, QChar* character) {
	return self->supportsCharacter(*character);
}

void QRawFont_SupportedWritingSystems(const QRawFont* self, uintptr_t** _out, size_t* _out_len) {
	QList<QFontDatabase::WritingSystem> ret = self->supportedWritingSystems();
	// Convert QList<> from C++ memory to manually-managed C memory
	uintptr_t* __out = static_cast<uintptr_t*>(malloc(sizeof(uintptr_t) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QByteArray* QRawFont_FontTable(const QRawFont* self, const char* tagName) {
	QByteArray ret = self->fontTable(tagName);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QRawFont* QRawFont_FromFont(QFont* font) {
	QRawFont ret = QRawFont::fromFont(*font);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRawFont*>(new QRawFont(ret));
}

QImage* QRawFont_AlphaMapForGlyph2(const QRawFont* self, unsigned int glyphIndex, uintptr_t antialiasingType) {
	QImage ret = self->alphaMapForGlyph(static_cast<quint32>(glyphIndex), static_cast<QRawFont::AntialiasingType>(antialiasingType));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QRawFont_AlphaMapForGlyph3(const QRawFont* self, unsigned int glyphIndex, uintptr_t antialiasingType, QTransform* transform) {
	QImage ret = self->alphaMapForGlyph(static_cast<quint32>(glyphIndex), static_cast<QRawFont::AntialiasingType>(antialiasingType), *transform);
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

