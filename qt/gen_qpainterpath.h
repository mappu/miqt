#pragma once
#ifndef MIQT_QT_GEN_QPAINTERPATH_H
#define MIQT_QT_GEN_QPAINTERPATH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFont;
class QPainterPath;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPainterPath__Element)
typedef QPainterPath::Element QPainterPath__Element;
#else
class QPainterPath__Element;
#endif
class QPainterPathStroker;
class QPen;
class QPointF;
class QRectF;
class QRegion;
#else
typedef struct QFont QFont;
typedef struct QPainterPath QPainterPath;
typedef struct QPainterPath__Element QPainterPath__Element;
typedef struct QPainterPathStroker QPainterPathStroker;
typedef struct QPen QPen;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
#endif

QPainterPath* QPainterPath_new();
QPainterPath* QPainterPath_new2(QPointF* startPoint);
QPainterPath* QPainterPath_new3(QPainterPath* other);
void QPainterPath_operatorAssign(QPainterPath* self, QPainterPath* other);
void QPainterPath_swap(QPainterPath* self, QPainterPath* other);
void QPainterPath_clear(QPainterPath* self);
void QPainterPath_reserve(QPainterPath* self, int size);
int QPainterPath_capacity(const QPainterPath* self);
void QPainterPath_closeSubpath(QPainterPath* self);
void QPainterPath_moveTo(QPainterPath* self, QPointF* p);
void QPainterPath_moveTo2(QPainterPath* self, double x, double y);
void QPainterPath_lineTo(QPainterPath* self, QPointF* p);
void QPainterPath_lineTo2(QPainterPath* self, double x, double y);
void QPainterPath_arcMoveTo(QPainterPath* self, QRectF* rect, double angle);
void QPainterPath_arcMoveTo2(QPainterPath* self, double x, double y, double w, double h, double angle);
void QPainterPath_arcTo(QPainterPath* self, QRectF* rect, double startAngle, double arcLength);
void QPainterPath_arcTo2(QPainterPath* self, double x, double y, double w, double h, double startAngle, double arcLength);
void QPainterPath_cubicTo(QPainterPath* self, QPointF* ctrlPt1, QPointF* ctrlPt2, QPointF* endPt);
void QPainterPath_cubicTo2(QPainterPath* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty);
void QPainterPath_quadTo(QPainterPath* self, QPointF* ctrlPt, QPointF* endPt);
void QPainterPath_quadTo2(QPainterPath* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty);
QPointF* QPainterPath_currentPosition(const QPainterPath* self);
void QPainterPath_addRect(QPainterPath* self, QRectF* rect);
void QPainterPath_addRect2(QPainterPath* self, double x, double y, double w, double h);
void QPainterPath_addEllipse(QPainterPath* self, QRectF* rect);
void QPainterPath_addEllipse2(QPainterPath* self, double x, double y, double w, double h);
void QPainterPath_addEllipse3(QPainterPath* self, QPointF* center, double rx, double ry);
void QPainterPath_addText(QPainterPath* self, QPointF* point, QFont* f, struct miqt_string text);
void QPainterPath_addText2(QPainterPath* self, double x, double y, QFont* f, struct miqt_string text);
void QPainterPath_addPath(QPainterPath* self, QPainterPath* path);
void QPainterPath_addRegion(QPainterPath* self, QRegion* region);
void QPainterPath_addRoundedRect(QPainterPath* self, QRectF* rect, double xRadius, double yRadius);
void QPainterPath_addRoundedRect2(QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius);
void QPainterPath_addRoundRect(QPainterPath* self, QRectF* rect, int xRnd, int yRnd);
void QPainterPath_addRoundRect2(QPainterPath* self, double x, double y, double w, double h, int xRnd, int yRnd);
void QPainterPath_addRoundRect3(QPainterPath* self, QRectF* rect, int roundness);
void QPainterPath_addRoundRect4(QPainterPath* self, double x, double y, double w, double h, int roundness);
void QPainterPath_connectPath(QPainterPath* self, QPainterPath* path);
bool QPainterPath_contains(const QPainterPath* self, QPointF* pt);
bool QPainterPath_containsWithRect(const QPainterPath* self, QRectF* rect);
bool QPainterPath_intersects(const QPainterPath* self, QRectF* rect);
void QPainterPath_translate(QPainterPath* self, double dx, double dy);
void QPainterPath_translateWithOffset(QPainterPath* self, QPointF* offset);
QPainterPath* QPainterPath_translated(const QPainterPath* self, double dx, double dy);
QPainterPath* QPainterPath_translatedWithOffset(const QPainterPath* self, QPointF* offset);
QRectF* QPainterPath_boundingRect(const QPainterPath* self);
QRectF* QPainterPath_controlPointRect(const QPainterPath* self);
int QPainterPath_fillRule(const QPainterPath* self);
void QPainterPath_setFillRule(QPainterPath* self, int fillRule);
bool QPainterPath_isEmpty(const QPainterPath* self);
QPainterPath* QPainterPath_toReversed(const QPainterPath* self);
int QPainterPath_elementCount(const QPainterPath* self);
QPainterPath__Element* QPainterPath_elementAt(const QPainterPath* self, int i);
void QPainterPath_setElementPositionAt(QPainterPath* self, int i, double x, double y);
double QPainterPath_length(const QPainterPath* self);
double QPainterPath_percentAtLength(const QPainterPath* self, double t);
QPointF* QPainterPath_pointAtPercent(const QPainterPath* self, double t);
double QPainterPath_angleAtPercent(const QPainterPath* self, double t);
double QPainterPath_slopeAtPercent(const QPainterPath* self, double t);
bool QPainterPath_intersectsWithQPainterPath(const QPainterPath* self, QPainterPath* p);
bool QPainterPath_containsWithQPainterPath(const QPainterPath* self, QPainterPath* p);
QPainterPath* QPainterPath_united(const QPainterPath* self, QPainterPath* r);
QPainterPath* QPainterPath_intersected(const QPainterPath* self, QPainterPath* r);
QPainterPath* QPainterPath_subtracted(const QPainterPath* self, QPainterPath* r);
QPainterPath* QPainterPath_subtractedInverted(const QPainterPath* self, QPainterPath* r);
QPainterPath* QPainterPath_simplified(const QPainterPath* self);
bool QPainterPath_operatorEqual(const QPainterPath* self, QPainterPath* other);
bool QPainterPath_operatorNotEqual(const QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_operatorBitwiseAnd(const QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_operatorBitwiseOr(const QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_operatorPlus(const QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_operatorMinus(const QPainterPath* self, QPainterPath* other);
void QPainterPath_operatorBitwiseAndAssign(QPainterPath* self, QPainterPath* other);
void QPainterPath_operatorBitwiseOrAssign(QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_operatorPlusAssign(QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_operatorMinusAssign(QPainterPath* self, QPainterPath* other);
void QPainterPath_addRoundedRect3(QPainterPath* self, QRectF* rect, double xRadius, double yRadius, int mode);
void QPainterPath_addRoundedRect4(QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius, int mode);

void QPainterPath_delete(QPainterPath* self);

QPainterPathStroker* QPainterPathStroker_new();
QPainterPathStroker* QPainterPathStroker_new2(QPen* pen);
void QPainterPathStroker_setWidth(QPainterPathStroker* self, double width);
double QPainterPathStroker_width(const QPainterPathStroker* self);
void QPainterPathStroker_setCapStyle(QPainterPathStroker* self, int style);
int QPainterPathStroker_capStyle(const QPainterPathStroker* self);
void QPainterPathStroker_setJoinStyle(QPainterPathStroker* self, int style);
int QPainterPathStroker_joinStyle(const QPainterPathStroker* self);
void QPainterPathStroker_setMiterLimit(QPainterPathStroker* self, double length);
double QPainterPathStroker_miterLimit(const QPainterPathStroker* self);
void QPainterPathStroker_setCurveThreshold(QPainterPathStroker* self, double threshold);
double QPainterPathStroker_curveThreshold(const QPainterPathStroker* self);
void QPainterPathStroker_setDashPattern(QPainterPathStroker* self, int dashPattern);
void QPainterPathStroker_setDashPatternWithDashPattern(QPainterPathStroker* self, struct miqt_array /* of double */  dashPattern);
struct miqt_array /* of double */  QPainterPathStroker_dashPattern(const QPainterPathStroker* self);
void QPainterPathStroker_setDashOffset(QPainterPathStroker* self, double offset);
double QPainterPathStroker_dashOffset(const QPainterPathStroker* self);
QPainterPath* QPainterPathStroker_createStroke(const QPainterPathStroker* self, QPainterPath* path);

void QPainterPathStroker_delete(QPainterPathStroker* self);

double QPainterPath__Element_x(const QPainterPath__Element* self);
void QPainterPath__Element_setX(QPainterPath__Element* self, double x);
double QPainterPath__Element_y(const QPainterPath__Element* self);
void QPainterPath__Element_setY(QPainterPath__Element* self, double y);
int QPainterPath__Element_type(const QPainterPath__Element* self);
void QPainterPath__Element_setType(QPainterPath__Element* self, int type);
bool QPainterPath__Element_isMoveTo(const QPainterPath__Element* self);
bool QPainterPath__Element_isLineTo(const QPainterPath__Element* self);
bool QPainterPath__Element_isCurveTo(const QPainterPath__Element* self);
QPointF* QPainterPath__Element_ToQPointF(const QPainterPath__Element* self);
bool QPainterPath__Element_operatorEqual(const QPainterPath__Element* self, QPainterPath__Element* e);
bool QPainterPath__Element_operatorNotEqual(const QPainterPath__Element* self, QPainterPath__Element* e);

void QPainterPath__Element_delete(QPainterPath__Element* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
