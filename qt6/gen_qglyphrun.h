#pragma once
#ifndef MIQT_QT6_GEN_QGLYPHRUN_H
#define MIQT_QT6_GEN_QGLYPHRUN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGlyphRun;
class QPointF;
class QRawFont;
class QRectF;
#else
typedef struct QGlyphRun QGlyphRun;
typedef struct QPointF QPointF;
typedef struct QRawFont QRawFont;
typedef struct QRectF QRectF;
#endif

QGlyphRun* QGlyphRun_new();
QGlyphRun* QGlyphRun_new2(QGlyphRun* other);
void QGlyphRun_operatorAssign(QGlyphRun* self, QGlyphRun* other);
void QGlyphRun_swap(QGlyphRun* self, QGlyphRun* other);
QRawFont* QGlyphRun_rawFont(const QGlyphRun* self);
void QGlyphRun_setRawFont(QGlyphRun* self, QRawFont* rawFont);
void QGlyphRun_setRawData(QGlyphRun* self, const unsigned int* glyphIndexArray, QPointF* glyphPositionArray, int size);
struct miqt_array /* of unsigned int */  QGlyphRun_glyphIndexes(const QGlyphRun* self);
void QGlyphRun_setGlyphIndexes(QGlyphRun* self, struct miqt_array /* of unsigned int */  glyphIndexes);
struct miqt_array /* of QPointF* */  QGlyphRun_positions(const QGlyphRun* self);
void QGlyphRun_setPositions(QGlyphRun* self, struct miqt_array /* of QPointF* */  positions);
void QGlyphRun_clear(QGlyphRun* self);
bool QGlyphRun_operatorEqual(const QGlyphRun* self, QGlyphRun* other);
bool QGlyphRun_operatorNotEqual(const QGlyphRun* self, QGlyphRun* other);
void QGlyphRun_setOverline(QGlyphRun* self, bool overline);
bool QGlyphRun_overline(const QGlyphRun* self);
void QGlyphRun_setUnderline(QGlyphRun* self, bool underline);
bool QGlyphRun_underline(const QGlyphRun* self);
void QGlyphRun_setStrikeOut(QGlyphRun* self, bool strikeOut);
bool QGlyphRun_strikeOut(const QGlyphRun* self);
void QGlyphRun_setRightToLeft(QGlyphRun* self, bool on);
bool QGlyphRun_isRightToLeft(const QGlyphRun* self);
void QGlyphRun_setFlag(QGlyphRun* self, int flag);
void QGlyphRun_setFlags(QGlyphRun* self, int flags);
int QGlyphRun_flags(const QGlyphRun* self);
void QGlyphRun_setBoundingRect(QGlyphRun* self, QRectF* boundingRect);
QRectF* QGlyphRun_boundingRect(const QGlyphRun* self);
bool QGlyphRun_isEmpty(const QGlyphRun* self);
void QGlyphRun_setFlag2(QGlyphRun* self, int flag, bool enabled);

void QGlyphRun_delete(QGlyphRun* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
