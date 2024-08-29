#include <QGlyphRun>
#include <QList>
#include <QPointF>
#include <QRawFont>
#include <QRectF>
#include "qglyphrun.h"

#include "gen_qglyphrun.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGlyphRun* QGlyphRun_new() {
	return new QGlyphRun();
}

QGlyphRun* QGlyphRun_new2(QGlyphRun* other) {
	return new QGlyphRun(*other);
}

void QGlyphRun_OperatorAssign(QGlyphRun* self, QGlyphRun* other) {
	self->operator=(*other);
}

void QGlyphRun_Swap(QGlyphRun* self, QGlyphRun* other) {
	self->swap(*other);
}

QRawFont* QGlyphRun_RawFont(QGlyphRun* self) {
	QRawFont ret = const_cast<const QGlyphRun*>(self)->rawFont();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRawFont*>(new QRawFont(ret));
}

void QGlyphRun_SetRawFont(QGlyphRun* self, QRawFont* rawFont) {
	self->setRawFont(*rawFont);
}

void QGlyphRun_SetRawData(QGlyphRun* self, const unsigned int* glyphIndexArray, QPointF* glyphPositionArray, int size) {
	self->setRawData(static_cast<const quint32*>(glyphIndexArray), glyphPositionArray, static_cast<int>(size));
}

void QGlyphRun_GlyphIndexes(QGlyphRun* self, unsigned int** _out, size_t* _out_len) {
	QVector<unsigned int> ret = const_cast<const QGlyphRun*>(self)->glyphIndexes();
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* __out = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGlyphRun_SetGlyphIndexes(QGlyphRun* self, unsigned int* glyphIndexes, size_t glyphIndexes_len) {
	QVector<unsigned int> glyphIndexes_QList;
	glyphIndexes_QList.reserve(glyphIndexes_len);
	for(size_t i = 0; i < glyphIndexes_len; ++i) {
		glyphIndexes_QList.push_back(glyphIndexes[i]);
	}
	self->setGlyphIndexes(glyphIndexes_QList);
}

void QGlyphRun_Positions(QGlyphRun* self, QPointF*** _out, size_t* _out_len) {
	QVector<QPointF> ret = const_cast<const QGlyphRun*>(self)->positions();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QPointF** __out = static_cast<QPointF**>(malloc(sizeof(QPointF**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QPointF(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGlyphRun_SetPositions(QGlyphRun* self, QPointF** positions, size_t positions_len) {
	QVector<QPointF> positions_QList;
	positions_QList.reserve(positions_len);
	for(size_t i = 0; i < positions_len; ++i) {
		positions_QList.push_back(*(positions[i]));
	}
	self->setPositions(positions_QList);
}

void QGlyphRun_Clear(QGlyphRun* self) {
	self->clear();
}

bool QGlyphRun_OperatorEqual(QGlyphRun* self, QGlyphRun* other) {
	return const_cast<const QGlyphRun*>(self)->operator==(*other);
}

bool QGlyphRun_OperatorNotEqual(QGlyphRun* self, QGlyphRun* other) {
	return const_cast<const QGlyphRun*>(self)->operator!=(*other);
}

void QGlyphRun_SetOverline(QGlyphRun* self, bool overline) {
	self->setOverline(overline);
}

bool QGlyphRun_Overline(QGlyphRun* self) {
	return const_cast<const QGlyphRun*>(self)->overline();
}

void QGlyphRun_SetUnderline(QGlyphRun* self, bool underline) {
	self->setUnderline(underline);
}

bool QGlyphRun_Underline(QGlyphRun* self) {
	return const_cast<const QGlyphRun*>(self)->underline();
}

void QGlyphRun_SetStrikeOut(QGlyphRun* self, bool strikeOut) {
	self->setStrikeOut(strikeOut);
}

bool QGlyphRun_StrikeOut(QGlyphRun* self) {
	return const_cast<const QGlyphRun*>(self)->strikeOut();
}

void QGlyphRun_SetRightToLeft(QGlyphRun* self, bool on) {
	self->setRightToLeft(on);
}

bool QGlyphRun_IsRightToLeft(QGlyphRun* self) {
	return const_cast<const QGlyphRun*>(self)->isRightToLeft();
}

void QGlyphRun_SetFlag(QGlyphRun* self, uintptr_t flag) {
	self->setFlag(static_cast<QGlyphRun::GlyphRunFlag>(flag));
}

void QGlyphRun_SetFlags(QGlyphRun* self, int flags) {
	self->setFlags(static_cast<QGlyphRun::GlyphRunFlags>(flags));
}

int QGlyphRun_Flags(QGlyphRun* self) {
	QGlyphRun::GlyphRunFlags ret = const_cast<const QGlyphRun*>(self)->flags();
	return static_cast<int>(ret);
}

void QGlyphRun_SetBoundingRect(QGlyphRun* self, QRectF* boundingRect) {
	self->setBoundingRect(*boundingRect);
}

QRectF* QGlyphRun_BoundingRect(QGlyphRun* self) {
	QRectF ret = const_cast<const QGlyphRun*>(self)->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

bool QGlyphRun_IsEmpty(QGlyphRun* self) {
	return const_cast<const QGlyphRun*>(self)->isEmpty();
}

void QGlyphRun_SetFlag2(QGlyphRun* self, uintptr_t flag, bool enabled) {
	self->setFlag(static_cast<QGlyphRun::GlyphRunFlag>(flag), enabled);
}

void QGlyphRun_Delete(QGlyphRun* self) {
	delete self;
}

