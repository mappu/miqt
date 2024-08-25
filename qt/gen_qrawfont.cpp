#include "gen_qrawfont.h"
#include "qrawfont.h"

#include <QByteArray>
#include <QChar>
#include <QList>
#include <QPainterPath>
#include <QPointF>
#include <QRawFont>
#include <QRectF>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QRawFont* QRawFont_new() {
	return new QRawFont();
}

QRawFont* QRawFont_new2(QRawFont* other) {
	return new QRawFont(*other);
}

void QRawFont_OperatorAssign(QRawFont* self, QRawFont* other) {
	self->operator=(*other);
}

void QRawFont_Swap(QRawFont* self, QRawFont* other) {
	self->swap(*other);
}

bool QRawFont_IsValid(QRawFont* self) {
	return self->isValid();
}

bool QRawFont_OperatorEqual(QRawFont* self, QRawFont* other) {
	return self->operator==(*other);
}

bool QRawFont_OperatorNotEqual(QRawFont* self, QRawFont* other) {
	return self->operator!=(*other);
}

void QRawFont_FamilyName(QRawFont* self, char** _out, int* _out_Strlen) {
	QString ret = self->familyName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRawFont_StyleName(QRawFont* self, char** _out, int* _out_Strlen) {
	QString ret = self->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QRawFont_Weight(QRawFont* self) {
	return self->weight();
}

void QRawFont_GlyphIndexesForString(QRawFont* self, const char* text, size_t text_Strlen, uint32_t** _out, size_t* _out_len) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QVector<quint32> ret = self->glyphIndexesForString(text_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	uint32_t* __out = static_cast<uint32_t*>(malloc(sizeof(uint32_t) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QRawFont_AdvancesForGlyphIndexes(QRawFont* self, uint32_t* glyphIndexes, size_t glyphIndexes_len, QPointF*** _out, size_t* _out_len) {
	QVector<quint32> glyphIndexes_QList;
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

bool QRawFont_GlyphIndexesForChars(QRawFont* self, QChar* chars, int numChars, uint32_t* glyphIndexes, int* numGlyphs) {
	return self->glyphIndexesForChars(chars, static_cast<int>(numChars), static_cast<quint32*>(glyphIndexes), static_cast<int*>(numGlyphs));
}

bool QRawFont_AdvancesForGlyphIndexes2(QRawFont* self, uint32_t* glyphIndexes, QPointF* advances, int numGlyphs) {
	return self->advancesForGlyphIndexes(static_cast<quint32*>(glyphIndexes), advances, static_cast<int>(numGlyphs));
}

QPainterPath* QRawFont_PathForGlyph(QRawFont* self, uint32_t glyphIndex) {
	QPainterPath ret = self->pathForGlyph(static_cast<quint32>(glyphIndex));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QRectF* QRawFont_BoundingRect(QRawFont* self, uint32_t glyphIndex) {
	QRectF ret = self->boundingRect(static_cast<quint32>(glyphIndex));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QRawFont_SetPixelSize(QRawFont* self, double pixelSize) {
	self->setPixelSize(static_cast<qreal>(pixelSize));
}

double QRawFont_PixelSize(QRawFont* self) {
	return self->pixelSize();
}

double QRawFont_Ascent(QRawFont* self) {
	return self->ascent();
}

double QRawFont_CapHeight(QRawFont* self) {
	return self->capHeight();
}

double QRawFont_Descent(QRawFont* self) {
	return self->descent();
}

double QRawFont_Leading(QRawFont* self) {
	return self->leading();
}

double QRawFont_XHeight(QRawFont* self) {
	return self->xHeight();
}

double QRawFont_AverageCharWidth(QRawFont* self) {
	return self->averageCharWidth();
}

double QRawFont_MaxCharWidth(QRawFont* self) {
	return self->maxCharWidth();
}

double QRawFont_LineThickness(QRawFont* self) {
	return self->lineThickness();
}

double QRawFont_UnderlinePosition(QRawFont* self) {
	return self->underlinePosition();
}

double QRawFont_UnitsPerEm(QRawFont* self) {
	return self->unitsPerEm();
}

bool QRawFont_SupportsCharacter(QRawFont* self, unsigned int ucs4) {
	return self->supportsCharacter(static_cast<uint>(ucs4));
}

bool QRawFont_SupportsCharacterWithCharacter(QRawFont* self, QChar* character) {
	return self->supportsCharacter(*character);
}

QByteArray* QRawFont_FontTable(QRawFont* self, char* tagName) {
	QByteArray ret = self->fontTable(tagName);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QRawFont_Delete(QRawFont* self) {
	delete self;
}

