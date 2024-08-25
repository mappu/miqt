#ifndef GEN_QGLYPHRUN_H
#define GEN_QGLYPHRUN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
void QGlyphRun_OperatorAssign(QGlyphRun* self, QGlyphRun* other);
void QGlyphRun_Swap(QGlyphRun* self, QGlyphRun* other);
QRawFont* QGlyphRun_RawFont(QGlyphRun* self);
void QGlyphRun_SetRawFont(QGlyphRun* self, QRawFont* rawFont);
void QGlyphRun_SetRawData(QGlyphRun* self, uint32_t* glyphIndexArray, QPointF* glyphPositionArray, int size);
void QGlyphRun_GlyphIndexes(QGlyphRun* self, uint32_t** _out, size_t* _out_len);
void QGlyphRun_SetGlyphIndexes(QGlyphRun* self, uint32_t* glyphIndexes, size_t glyphIndexes_len);
void QGlyphRun_Positions(QGlyphRun* self, QPointF*** _out, size_t* _out_len);
void QGlyphRun_SetPositions(QGlyphRun* self, QPointF** positions, size_t positions_len);
void QGlyphRun_Clear(QGlyphRun* self);
bool QGlyphRun_OperatorEqual(QGlyphRun* self, QGlyphRun* other);
bool QGlyphRun_OperatorNotEqual(QGlyphRun* self, QGlyphRun* other);
void QGlyphRun_SetOverline(QGlyphRun* self, bool overline);
bool QGlyphRun_Overline(QGlyphRun* self);
void QGlyphRun_SetUnderline(QGlyphRun* self, bool underline);
bool QGlyphRun_Underline(QGlyphRun* self);
void QGlyphRun_SetStrikeOut(QGlyphRun* self, bool strikeOut);
bool QGlyphRun_StrikeOut(QGlyphRun* self);
void QGlyphRun_SetRightToLeft(QGlyphRun* self, bool on);
bool QGlyphRun_IsRightToLeft(QGlyphRun* self);
void QGlyphRun_SetBoundingRect(QGlyphRun* self, QRectF* boundingRect);
QRectF* QGlyphRun_BoundingRect(QGlyphRun* self);
bool QGlyphRun_IsEmpty(QGlyphRun* self);
void QGlyphRun_Delete(QGlyphRun* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
