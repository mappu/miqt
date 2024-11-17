#pragma once
#ifndef MIQT_QT6_GEN_QPAINTERPATH_H
#define MIQT_QT6_GEN_QPAINTERPATH_H

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
void QPainterPath_OperatorAssign(QPainterPath* self, QPainterPath* other);
void QPainterPath_Swap(QPainterPath* self, QPainterPath* other);
void QPainterPath_Clear(QPainterPath* self);
void QPainterPath_Reserve(QPainterPath* self, int size);
int QPainterPath_Capacity(const QPainterPath* self);
void QPainterPath_CloseSubpath(QPainterPath* self);
void QPainterPath_MoveTo(QPainterPath* self, QPointF* p);
void QPainterPath_MoveTo2(QPainterPath* self, double x, double y);
void QPainterPath_LineTo(QPainterPath* self, QPointF* p);
void QPainterPath_LineTo2(QPainterPath* self, double x, double y);
void QPainterPath_ArcMoveTo(QPainterPath* self, QRectF* rect, double angle);
void QPainterPath_ArcMoveTo2(QPainterPath* self, double x, double y, double w, double h, double angle);
void QPainterPath_ArcTo(QPainterPath* self, QRectF* rect, double startAngle, double arcLength);
void QPainterPath_ArcTo2(QPainterPath* self, double x, double y, double w, double h, double startAngle, double arcLength);
void QPainterPath_CubicTo(QPainterPath* self, QPointF* ctrlPt1, QPointF* ctrlPt2, QPointF* endPt);
void QPainterPath_CubicTo2(QPainterPath* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty);
void QPainterPath_QuadTo(QPainterPath* self, QPointF* ctrlPt, QPointF* endPt);
void QPainterPath_QuadTo2(QPainterPath* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty);
QPointF* QPainterPath_CurrentPosition(const QPainterPath* self);
void QPainterPath_AddRect(QPainterPath* self, QRectF* rect);
void QPainterPath_AddRect2(QPainterPath* self, double x, double y, double w, double h);
void QPainterPath_AddEllipse(QPainterPath* self, QRectF* rect);
void QPainterPath_AddEllipse2(QPainterPath* self, double x, double y, double w, double h);
void QPainterPath_AddEllipse3(QPainterPath* self, QPointF* center, double rx, double ry);
void QPainterPath_AddText(QPainterPath* self, QPointF* point, QFont* f, struct miqt_string text);
void QPainterPath_AddText2(QPainterPath* self, double x, double y, QFont* f, struct miqt_string text);
void QPainterPath_AddPath(QPainterPath* self, QPainterPath* path);
void QPainterPath_AddRegion(QPainterPath* self, QRegion* region);
void QPainterPath_AddRoundedRect(QPainterPath* self, QRectF* rect, double xRadius, double yRadius);
void QPainterPath_AddRoundedRect2(QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius);
void QPainterPath_ConnectPath(QPainterPath* self, QPainterPath* path);
bool QPainterPath_Contains(const QPainterPath* self, QPointF* pt);
bool QPainterPath_ContainsWithRect(const QPainterPath* self, QRectF* rect);
bool QPainterPath_Intersects(const QPainterPath* self, QRectF* rect);
void QPainterPath_Translate(QPainterPath* self, double dx, double dy);
void QPainterPath_TranslateWithOffset(QPainterPath* self, QPointF* offset);
QPainterPath* QPainterPath_Translated(const QPainterPath* self, double dx, double dy);
QPainterPath* QPainterPath_TranslatedWithOffset(const QPainterPath* self, QPointF* offset);
QRectF* QPainterPath_BoundingRect(const QPainterPath* self);
QRectF* QPainterPath_ControlPointRect(const QPainterPath* self);
int QPainterPath_FillRule(const QPainterPath* self);
void QPainterPath_SetFillRule(QPainterPath* self, int fillRule);
bool QPainterPath_IsEmpty(const QPainterPath* self);
QPainterPath* QPainterPath_ToReversed(const QPainterPath* self);
int QPainterPath_ElementCount(const QPainterPath* self);
QPainterPath__Element* QPainterPath_ElementAt(const QPainterPath* self, int i);
void QPainterPath_SetElementPositionAt(QPainterPath* self, int i, double x, double y);
double QPainterPath_Length(const QPainterPath* self);
double QPainterPath_PercentAtLength(const QPainterPath* self, double t);
QPointF* QPainterPath_PointAtPercent(const QPainterPath* self, double t);
double QPainterPath_AngleAtPercent(const QPainterPath* self, double t);
double QPainterPath_SlopeAtPercent(const QPainterPath* self, double t);
bool QPainterPath_IntersectsWithQPainterPath(const QPainterPath* self, QPainterPath* p);
bool QPainterPath_ContainsWithQPainterPath(const QPainterPath* self, QPainterPath* p);
QPainterPath* QPainterPath_United(const QPainterPath* self, QPainterPath* r);
QPainterPath* QPainterPath_Intersected(const QPainterPath* self, QPainterPath* r);
QPainterPath* QPainterPath_Subtracted(const QPainterPath* self, QPainterPath* r);
QPainterPath* QPainterPath_Simplified(const QPainterPath* self);
bool QPainterPath_OperatorEqual(const QPainterPath* self, QPainterPath* other);
bool QPainterPath_OperatorNotEqual(const QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_OperatorBitwiseAnd(const QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_OperatorBitwiseOr(const QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_OperatorPlus(const QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_OperatorMinus(const QPainterPath* self, QPainterPath* other);
void QPainterPath_OperatorBitwiseAndAssign(QPainterPath* self, QPainterPath* other);
void QPainterPath_OperatorBitwiseOrAssign(QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_OperatorPlusAssign(QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_OperatorMinusAssign(QPainterPath* self, QPainterPath* other);
void QPainterPath_AddRoundedRect4(QPainterPath* self, QRectF* rect, double xRadius, double yRadius, int mode);
void QPainterPath_AddRoundedRect7(QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius, int mode);
void QPainterPath_Delete(QPainterPath* self);

QPainterPathStroker* QPainterPathStroker_new();
QPainterPathStroker* QPainterPathStroker_new2(QPen* pen);
void QPainterPathStroker_SetWidth(QPainterPathStroker* self, double width);
double QPainterPathStroker_Width(const QPainterPathStroker* self);
void QPainterPathStroker_SetCapStyle(QPainterPathStroker* self, int style);
int QPainterPathStroker_CapStyle(const QPainterPathStroker* self);
void QPainterPathStroker_SetJoinStyle(QPainterPathStroker* self, int style);
int QPainterPathStroker_JoinStyle(const QPainterPathStroker* self);
void QPainterPathStroker_SetMiterLimit(QPainterPathStroker* self, double length);
double QPainterPathStroker_MiterLimit(const QPainterPathStroker* self);
void QPainterPathStroker_SetCurveThreshold(QPainterPathStroker* self, double threshold);
double QPainterPathStroker_CurveThreshold(const QPainterPathStroker* self);
void QPainterPathStroker_SetDashPattern(QPainterPathStroker* self, int dashPattern);
void QPainterPathStroker_SetDashPatternWithDashPattern(QPainterPathStroker* self, struct miqt_array /* of double */  dashPattern);
struct miqt_array /* of double */  QPainterPathStroker_DashPattern(const QPainterPathStroker* self);
void QPainterPathStroker_SetDashOffset(QPainterPathStroker* self, double offset);
double QPainterPathStroker_DashOffset(const QPainterPathStroker* self);
QPainterPath* QPainterPathStroker_CreateStroke(const QPainterPathStroker* self, QPainterPath* path);
void QPainterPathStroker_Delete(QPainterPathStroker* self);

bool QPainterPath__Element_IsMoveTo(const QPainterPath__Element* self);
bool QPainterPath__Element_IsLineTo(const QPainterPath__Element* self);
bool QPainterPath__Element_IsCurveTo(const QPainterPath__Element* self);
bool QPainterPath__Element_OperatorEqual(const QPainterPath__Element* self, QPainterPath__Element* e);
bool QPainterPath__Element_OperatorNotEqual(const QPainterPath__Element* self, QPainterPath__Element* e);
void QPainterPath__Element_Delete(QPainterPath__Element* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
