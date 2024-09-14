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
#include "_cgo_export.h"

QRawFont* QRawFont_new() {
	return new QRawFont();
}

QRawFont* QRawFont_new2(struct miqt_string* fileName, double pixelSize) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QRawFont(fileName_QString, static_cast<qreal>(pixelSize));
}

QRawFont* QRawFont_new3(QByteArray* fontData, double pixelSize) {
	return new QRawFont(*fontData, static_cast<qreal>(pixelSize));
}

QRawFont* QRawFont_new4(QRawFont* other) {
	return new QRawFont(*other);
}

QRawFont* QRawFont_new5(struct miqt_string* fileName, double pixelSize, uintptr_t hintingPreference) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
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

struct miqt_string* QRawFont_FamilyName(const QRawFont* self) {
	QString _ret = self->familyName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRawFont_StyleName(const QRawFont* self) {
	QString _ret = self->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

uintptr_t QRawFont_Style(const QRawFont* self) {
	QFont::Style _ret = self->style();
	return static_cast<uintptr_t>(_ret);
}

int QRawFont_Weight(const QRawFont* self) {
	return self->weight();
}

struct miqt_array* QRawFont_GlyphIndexesForString(const QRawFont* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QVector<unsigned int> _ret = self->glyphIndexesForString(text_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QRawFont_AdvancesForGlyphIndexes(const QRawFont* self, struct miqt_array* /* of unsigned int */ glyphIndexes) {
	QVector<unsigned int> glyphIndexes_QList;
	glyphIndexes_QList.reserve(glyphIndexes->len);
	unsigned int* glyphIndexes_arr = static_cast<unsigned int*>(glyphIndexes->data);
	for(size_t i = 0; i < glyphIndexes->len; ++i) {
		glyphIndexes_QList.push_back(glyphIndexes_arr[i]);
	}
	QVector<QPointF> _ret = self->advancesForGlyphIndexes(glyphIndexes_QList);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QPointF(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QRawFont_AdvancesForGlyphIndexes2(const QRawFont* self, struct miqt_array* /* of unsigned int */ glyphIndexes, int layoutFlags) {
	QVector<unsigned int> glyphIndexes_QList;
	glyphIndexes_QList.reserve(glyphIndexes->len);
	unsigned int* glyphIndexes_arr = static_cast<unsigned int*>(glyphIndexes->data);
	for(size_t i = 0; i < glyphIndexes->len; ++i) {
		glyphIndexes_QList.push_back(glyphIndexes_arr[i]);
	}
	QVector<QPointF> _ret = self->advancesForGlyphIndexes(glyphIndexes_QList, static_cast<QRawFont::LayoutFlags>(layoutFlags));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QPointF(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
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
	QImage _ret = self->alphaMapForGlyph(static_cast<quint32>(glyphIndex));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(_ret));
}

QPainterPath* QRawFont_PathForGlyph(const QRawFont* self, unsigned int glyphIndex) {
	QPainterPath _ret = self->pathForGlyph(static_cast<quint32>(glyphIndex));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

QRectF* QRawFont_BoundingRect(const QRawFont* self, unsigned int glyphIndex) {
	QRectF _ret = self->boundingRect(static_cast<quint32>(glyphIndex));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

void QRawFont_SetPixelSize(QRawFont* self, double pixelSize) {
	self->setPixelSize(static_cast<qreal>(pixelSize));
}

double QRawFont_PixelSize(const QRawFont* self) {
	return self->pixelSize();
}

uintptr_t QRawFont_HintingPreference(const QRawFont* self) {
	QFont::HintingPreference _ret = self->hintingPreference();
	return static_cast<uintptr_t>(_ret);
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

void QRawFont_LoadFromFile(QRawFont* self, struct miqt_string* fileName, double pixelSize, uintptr_t hintingPreference) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
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

struct miqt_array* QRawFont_SupportedWritingSystems(const QRawFont* self) {
	QList<QFontDatabase::WritingSystem> _ret = self->supportedWritingSystems();
	// Convert QList<> from C++ memory to manually-managed C memory
	uintptr_t* _arr = static_cast<uintptr_t*>(malloc(sizeof(uintptr_t) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QByteArray* QRawFont_FontTable(const QRawFont* self, const char* tagName) {
	QByteArray _ret = self->fontTable(tagName);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

QRawFont* QRawFont_FromFont(QFont* font) {
	QRawFont _ret = QRawFont::fromFont(*font);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRawFont*>(new QRawFont(_ret));
}

QImage* QRawFont_AlphaMapForGlyph2(const QRawFont* self, unsigned int glyphIndex, uintptr_t antialiasingType) {
	QImage _ret = self->alphaMapForGlyph(static_cast<quint32>(glyphIndex), static_cast<QRawFont::AntialiasingType>(antialiasingType));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(_ret));
}

QImage* QRawFont_AlphaMapForGlyph3(const QRawFont* self, unsigned int glyphIndex, uintptr_t antialiasingType, QTransform* transform) {
	QImage _ret = self->alphaMapForGlyph(static_cast<quint32>(glyphIndex), static_cast<QRawFont::AntialiasingType>(antialiasingType), *transform);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(_ret));
}

QRawFont* QRawFont_FromFont2(QFont* font, uintptr_t writingSystem) {
	QRawFont _ret = QRawFont::fromFont(*font, static_cast<QFontDatabase::WritingSystem>(writingSystem));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRawFont*>(new QRawFont(_ret));
}

void QRawFont_Delete(QRawFont* self) {
	delete self;
}

