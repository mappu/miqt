#include <QGlyphRun>
#include <QList>
#include <QPointF>
#include <QRawFont>
#include <QRectF>
#include <qglyphrun.h>
#include "gen_qglyphrun.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

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

QRawFont* QGlyphRun_RawFont(const QGlyphRun* self) {
	return new QRawFont(self->rawFont());
}

void QGlyphRun_SetRawFont(QGlyphRun* self, QRawFont* rawFont) {
	self->setRawFont(*rawFont);
}

void QGlyphRun_SetRawData(QGlyphRun* self, const unsigned int* glyphIndexArray, QPointF* glyphPositionArray, int size) {
	self->setRawData(static_cast<const quint32*>(glyphIndexArray), glyphPositionArray, static_cast<int>(size));
}

struct miqt_array /* of unsigned int */  QGlyphRun_GlyphIndexes(const QGlyphRun* self) {
	QList<quint32> _ret = self->glyphIndexes();
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

void QGlyphRun_SetGlyphIndexes(QGlyphRun* self, struct miqt_array /* of unsigned int */  glyphIndexes) {
	QList<quint32> glyphIndexes_QList;
	glyphIndexes_QList.reserve(glyphIndexes.len);
	unsigned int* glyphIndexes_arr = static_cast<unsigned int*>(glyphIndexes.data);
	for(size_t i = 0; i < glyphIndexes.len; ++i) {
		glyphIndexes_QList.push_back(static_cast<unsigned int>(glyphIndexes_arr[i]));
	}
	self->setGlyphIndexes(glyphIndexes_QList);
}

struct miqt_array /* of QPointF* */  QGlyphRun_Positions(const QGlyphRun* self) {
	QList<QPointF> _ret = self->positions();
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

void QGlyphRun_SetPositions(QGlyphRun* self, struct miqt_array /* of QPointF* */  positions) {
	QList<QPointF> positions_QList;
	positions_QList.reserve(positions.len);
	QPointF** positions_arr = static_cast<QPointF**>(positions.data);
	for(size_t i = 0; i < positions.len; ++i) {
		positions_QList.push_back(*(positions_arr[i]));
	}
	self->setPositions(positions_QList);
}

void QGlyphRun_Clear(QGlyphRun* self) {
	self->clear();
}

bool QGlyphRun_OperatorEqual(const QGlyphRun* self, QGlyphRun* other) {
	return (*self == *other);
}

bool QGlyphRun_OperatorNotEqual(const QGlyphRun* self, QGlyphRun* other) {
	return (*self != *other);
}

void QGlyphRun_SetOverline(QGlyphRun* self, bool overline) {
	self->setOverline(overline);
}

bool QGlyphRun_Overline(const QGlyphRun* self) {
	return self->overline();
}

void QGlyphRun_SetUnderline(QGlyphRun* self, bool underline) {
	self->setUnderline(underline);
}

bool QGlyphRun_Underline(const QGlyphRun* self) {
	return self->underline();
}

void QGlyphRun_SetStrikeOut(QGlyphRun* self, bool strikeOut) {
	self->setStrikeOut(strikeOut);
}

bool QGlyphRun_StrikeOut(const QGlyphRun* self) {
	return self->strikeOut();
}

void QGlyphRun_SetRightToLeft(QGlyphRun* self, bool on) {
	self->setRightToLeft(on);
}

bool QGlyphRun_IsRightToLeft(const QGlyphRun* self) {
	return self->isRightToLeft();
}

void QGlyphRun_SetFlag(QGlyphRun* self, int flag) {
	self->setFlag(static_cast<QGlyphRun::GlyphRunFlag>(flag));
}

void QGlyphRun_SetFlags(QGlyphRun* self, int flags) {
	self->setFlags(static_cast<QGlyphRun::GlyphRunFlags>(flags));
}

int QGlyphRun_Flags(const QGlyphRun* self) {
	QGlyphRun::GlyphRunFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QGlyphRun_SetBoundingRect(QGlyphRun* self, QRectF* boundingRect) {
	self->setBoundingRect(*boundingRect);
}

QRectF* QGlyphRun_BoundingRect(const QGlyphRun* self) {
	return new QRectF(self->boundingRect());
}

bool QGlyphRun_IsEmpty(const QGlyphRun* self) {
	return self->isEmpty();
}

void QGlyphRun_SetFlag2(QGlyphRun* self, int flag, bool enabled) {
	self->setFlag(static_cast<QGlyphRun::GlyphRunFlag>(flag), enabled);
}

void QGlyphRun_Delete(QGlyphRun* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QGlyphRun*>( self );
	} else {
		delete self;
	}
}

