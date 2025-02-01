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
#include <qrawfont.h>
#include "gen_qrawfont.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QRawFont* QRawFont_new() {
	return new QRawFont();
}

QRawFont* QRawFont_new2(struct miqt_string fileName, double pixelSize) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QRawFont(fileName_QString, static_cast<qreal>(pixelSize));
}

QRawFont* QRawFont_new3(struct miqt_string fontData, double pixelSize) {
	QByteArray fontData_QByteArray(fontData.data, fontData.len);
	return new QRawFont(fontData_QByteArray, static_cast<qreal>(pixelSize));
}

QRawFont* QRawFont_new4(QRawFont* other) {
	return new QRawFont(*other);
}

QRawFont* QRawFont_new5(struct miqt_string fileName, double pixelSize, int hintingPreference) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QRawFont(fileName_QString, static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

QRawFont* QRawFont_new6(struct miqt_string fontData, double pixelSize, int hintingPreference) {
	QByteArray fontData_QByteArray(fontData.data, fontData.len);
	return new QRawFont(fontData_QByteArray, static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

void QRawFont_operatorAssign(QRawFont* self, QRawFont* other) {
	self->operator=(*other);
}

void QRawFont_swap(QRawFont* self, QRawFont* other) {
	self->swap(*other);
}

bool QRawFont_isValid(const QRawFont* self) {
	return self->isValid();
}

bool QRawFont_operatorEqual(const QRawFont* self, QRawFont* other) {
	return (*self == *other);
}

bool QRawFont_operatorNotEqual(const QRawFont* self, QRawFont* other) {
	return (*self != *other);
}

struct miqt_string QRawFont_familyName(const QRawFont* self) {
	QString _ret = self->familyName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRawFont_styleName(const QRawFont* self) {
	QString _ret = self->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRawFont_style(const QRawFont* self) {
	QFont::Style _ret = self->style();
	return static_cast<int>(_ret);
}

int QRawFont_weight(const QRawFont* self) {
	return self->weight();
}

struct miqt_array /* of unsigned int */  QRawFont_glyphIndexesForString(const QRawFont* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QVector<quint32> _ret = self->glyphIndexesForString(text_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QPointF* */  QRawFont_advancesForGlyphIndexes(const QRawFont* self, struct miqt_array /* of unsigned int */  glyphIndexes) {
	QVector<quint32> glyphIndexes_QList;
	glyphIndexes_QList.reserve(glyphIndexes.len);
	unsigned int* glyphIndexes_arr = static_cast<unsigned int*>(glyphIndexes.data);
	for(size_t i = 0; i < glyphIndexes.len; ++i) {
		glyphIndexes_QList.push_back(static_cast<unsigned int>(glyphIndexes_arr[i]));
	}
	QVector<QPointF> _ret = self->advancesForGlyphIndexes(glyphIndexes_QList);
	// Convert QList<> from C++ memory to manually-managed C memory
	QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QPointF(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QPointF* */  QRawFont_advancesForGlyphIndexes2(const QRawFont* self, struct miqt_array /* of unsigned int */  glyphIndexes, int layoutFlags) {
	QVector<quint32> glyphIndexes_QList;
	glyphIndexes_QList.reserve(glyphIndexes.len);
	unsigned int* glyphIndexes_arr = static_cast<unsigned int*>(glyphIndexes.data);
	for(size_t i = 0; i < glyphIndexes.len; ++i) {
		glyphIndexes_QList.push_back(static_cast<unsigned int>(glyphIndexes_arr[i]));
	}
	QVector<QPointF> _ret = self->advancesForGlyphIndexes(glyphIndexes_QList, static_cast<QRawFont::LayoutFlags>(layoutFlags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QPointF(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QRawFont_glyphIndexesForChars(const QRawFont* self, QChar* chars, int numChars, unsigned int* glyphIndexes, int* numGlyphs) {
	return self->glyphIndexesForChars(chars, static_cast<int>(numChars), static_cast<quint32*>(glyphIndexes), static_cast<int*>(numGlyphs));
}

bool QRawFont_advancesForGlyphIndexes3(const QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs) {
	return self->advancesForGlyphIndexes(static_cast<const quint32*>(glyphIndexes), advances, static_cast<int>(numGlyphs));
}

bool QRawFont_advancesForGlyphIndexes4(const QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs, int layoutFlags) {
	return self->advancesForGlyphIndexes(static_cast<const quint32*>(glyphIndexes), advances, static_cast<int>(numGlyphs), static_cast<QRawFont::LayoutFlags>(layoutFlags));
}

QImage* QRawFont_alphaMapForGlyph(const QRawFont* self, unsigned int glyphIndex) {
	return new QImage(self->alphaMapForGlyph(static_cast<quint32>(glyphIndex)));
}

QPainterPath* QRawFont_pathForGlyph(const QRawFont* self, unsigned int glyphIndex) {
	return new QPainterPath(self->pathForGlyph(static_cast<quint32>(glyphIndex)));
}

QRectF* QRawFont_boundingRect(const QRawFont* self, unsigned int glyphIndex) {
	return new QRectF(self->boundingRect(static_cast<quint32>(glyphIndex)));
}

void QRawFont_setPixelSize(QRawFont* self, double pixelSize) {
	self->setPixelSize(static_cast<qreal>(pixelSize));
}

double QRawFont_pixelSize(const QRawFont* self) {
	qreal _ret = self->pixelSize();
	return static_cast<double>(_ret);
}

int QRawFont_hintingPreference(const QRawFont* self) {
	QFont::HintingPreference _ret = self->hintingPreference();
	return static_cast<int>(_ret);
}

double QRawFont_ascent(const QRawFont* self) {
	qreal _ret = self->ascent();
	return static_cast<double>(_ret);
}

double QRawFont_capHeight(const QRawFont* self) {
	qreal _ret = self->capHeight();
	return static_cast<double>(_ret);
}

double QRawFont_descent(const QRawFont* self) {
	qreal _ret = self->descent();
	return static_cast<double>(_ret);
}

double QRawFont_leading(const QRawFont* self) {
	qreal _ret = self->leading();
	return static_cast<double>(_ret);
}

double QRawFont_xHeight(const QRawFont* self) {
	qreal _ret = self->xHeight();
	return static_cast<double>(_ret);
}

double QRawFont_averageCharWidth(const QRawFont* self) {
	qreal _ret = self->averageCharWidth();
	return static_cast<double>(_ret);
}

double QRawFont_maxCharWidth(const QRawFont* self) {
	qreal _ret = self->maxCharWidth();
	return static_cast<double>(_ret);
}

double QRawFont_lineThickness(const QRawFont* self) {
	qreal _ret = self->lineThickness();
	return static_cast<double>(_ret);
}

double QRawFont_underlinePosition(const QRawFont* self) {
	qreal _ret = self->underlinePosition();
	return static_cast<double>(_ret);
}

double QRawFont_unitsPerEm(const QRawFont* self) {
	qreal _ret = self->unitsPerEm();
	return static_cast<double>(_ret);
}

void QRawFont_loadFromFile(QRawFont* self, struct miqt_string fileName, double pixelSize, int hintingPreference) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->loadFromFile(fileName_QString, static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

void QRawFont_loadFromData(QRawFont* self, struct miqt_string fontData, double pixelSize, int hintingPreference) {
	QByteArray fontData_QByteArray(fontData.data, fontData.len);
	self->loadFromData(fontData_QByteArray, static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

bool QRawFont_supportsCharacter(const QRawFont* self, unsigned int ucs4) {
	return self->supportsCharacter(static_cast<uint>(ucs4));
}

bool QRawFont_supportsCharacterWithCharacter(const QRawFont* self, QChar* character) {
	return self->supportsCharacter(*character);
}

struct miqt_array /* of int */  QRawFont_supportedWritingSystems(const QRawFont* self) {
	QList<QFontDatabase::WritingSystem> _ret = self->supportedWritingSystems();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QFontDatabase::WritingSystem _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QRawFont_fontTable(const QRawFont* self, const char* tagName) {
	QByteArray _qb = self->fontTable(tagName);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QRawFont* QRawFont_fromFont(QFont* font) {
	return new QRawFont(QRawFont::fromFont(*font));
}

QImage* QRawFont_alphaMapForGlyph2(const QRawFont* self, unsigned int glyphIndex, int antialiasingType) {
	return new QImage(self->alphaMapForGlyph(static_cast<quint32>(glyphIndex), static_cast<QRawFont::AntialiasingType>(antialiasingType)));
}

QImage* QRawFont_alphaMapForGlyph3(const QRawFont* self, unsigned int glyphIndex, int antialiasingType, QTransform* transform) {
	return new QImage(self->alphaMapForGlyph(static_cast<quint32>(glyphIndex), static_cast<QRawFont::AntialiasingType>(antialiasingType), *transform));
}

QRawFont* QRawFont_fromFont2(QFont* font, int writingSystem) {
	return new QRawFont(QRawFont::fromFont(*font, static_cast<QFontDatabase::WritingSystem>(writingSystem)));
}

void QRawFont_delete(QRawFont* self) {
	delete self;
}

