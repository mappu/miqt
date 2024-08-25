#ifndef GEN_QPAINTERPATH_H
#define GEN_QPAINTERPATH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFont;
class QPainterPath;
class QPainterPathStroker;
class QPen;
class QPointF;
class QRectF;
class QRegion;
#else
typedef struct QFont QFont;
typedef struct QPainterPath QPainterPath;
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
int QPainterPath_Capacity(QPainterPath* self);
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
QPointF* QPainterPath_CurrentPosition(QPainterPath* self);
void QPainterPath_AddRect(QPainterPath* self, QRectF* rect);
void QPainterPath_AddRect2(QPainterPath* self, double x, double y, double w, double h);
void QPainterPath_AddEllipse(QPainterPath* self, QRectF* rect);
void QPainterPath_AddEllipse2(QPainterPath* self, double x, double y, double w, double h);
void QPainterPath_AddEllipse3(QPainterPath* self, QPointF* center, double rx, double ry);
void QPainterPath_AddText(QPainterPath* self, QPointF* point, QFont* f, const char* text, size_t text_Strlen);
void QPainterPath_AddText2(QPainterPath* self, double x, double y, QFont* f, const char* text, size_t text_Strlen);
void QPainterPath_AddPath(QPainterPath* self, QPainterPath* path);
void QPainterPath_AddRegion(QPainterPath* self, QRegion* region);
void QPainterPath_AddRoundRect(QPainterPath* self, QRectF* rect, int xRnd, int yRnd);
void QPainterPath_AddRoundRect2(QPainterPath* self, double x, double y, double w, double h, int xRnd, int yRnd);
void QPainterPath_AddRoundRect3(QPainterPath* self, QRectF* rect, int roundness);
void QPainterPath_AddRoundRect4(QPainterPath* self, double x, double y, double w, double h, int roundness);
void QPainterPath_ConnectPath(QPainterPath* self, QPainterPath* path);
bool QPainterPath_Contains(QPainterPath* self, QPointF* pt);
bool QPainterPath_ContainsWithRect(QPainterPath* self, QRectF* rect);
bool QPainterPath_Intersects(QPainterPath* self, QRectF* rect);
void QPainterPath_Translate(QPainterPath* self, double dx, double dy);
void QPainterPath_TranslateWithOffset(QPainterPath* self, QPointF* offset);
QPainterPath* QPainterPath_Translated(QPainterPath* self, double dx, double dy);
QPainterPath* QPainterPath_TranslatedWithOffset(QPainterPath* self, QPointF* offset);
QRectF* QPainterPath_BoundingRect(QPainterPath* self);
QRectF* QPainterPath_ControlPointRect(QPainterPath* self);
bool QPainterPath_IsEmpty(QPainterPath* self);
QPainterPath* QPainterPath_ToReversed(QPainterPath* self);
int QPainterPath_ElementCount(QPainterPath* self);
void QPainterPath_SetElementPositionAt(QPainterPath* self, int i, double x, double y);
double QPainterPath_Length(QPainterPath* self);
double QPainterPath_PercentAtLength(QPainterPath* self, double t);
QPointF* QPainterPath_PointAtPercent(QPainterPath* self, double t);
double QPainterPath_AngleAtPercent(QPainterPath* self, double t);
double QPainterPath_SlopeAtPercent(QPainterPath* self, double t);
bool QPainterPath_IntersectsWithQPainterPath(QPainterPath* self, QPainterPath* p);
bool QPainterPath_ContainsWithQPainterPath(QPainterPath* self, QPainterPath* p);
QPainterPath* QPainterPath_United(QPainterPath* self, QPainterPath* r);
QPainterPath* QPainterPath_Intersected(QPainterPath* self, QPainterPath* r);
QPainterPath* QPainterPath_Subtracted(QPainterPath* self, QPainterPath* r);
QPainterPath* QPainterPath_SubtractedInverted(QPainterPath* self, QPainterPath* r);
QPainterPath* QPainterPath_Simplified(QPainterPath* self);
bool QPainterPath_OperatorEqual(QPainterPath* self, QPainterPath* other);
bool QPainterPath_OperatorNotEqual(QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_OperatorBitwiseAnd(QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_OperatorBitwiseOr(QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_OperatorPlus(QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_OperatorMinus(QPainterPath* self, QPainterPath* other);
void QPainterPath_OperatorBitwiseAndAssign(QPainterPath* self, QPainterPath* other);
void QPainterPath_OperatorBitwiseOrAssign(QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_OperatorPlusAssign(QPainterPath* self, QPainterPath* other);
QPainterPath* QPainterPath_OperatorMinusAssign(QPainterPath* self, QPainterPath* other);
void QPainterPath_Delete(QPainterPath* self);

QPainterPathStroker* QPainterPathStroker_new();
QPainterPathStroker* QPainterPathStroker_new2(QPen* pen);
void QPainterPathStroker_SetWidth(QPainterPathStroker* self, double width);
double QPainterPathStroker_Width(QPainterPathStroker* self);
void QPainterPathStroker_SetMiterLimit(QPainterPathStroker* self, double length);
double QPainterPathStroker_MiterLimit(QPainterPathStroker* self);
void QPainterPathStroker_SetCurveThreshold(QPainterPathStroker* self, double threshold);
double QPainterPathStroker_CurveThreshold(QPainterPathStroker* self);
void QPainterPathStroker_SetDashPattern(QPainterPathStroker* self, double* dashPattern, size_t dashPattern_len);
void QPainterPathStroker_DashPattern(QPainterPathStroker* self, double** _out, size_t* _out_len);
void QPainterPathStroker_SetDashOffset(QPainterPathStroker* self, double offset);
double QPainterPathStroker_DashOffset(QPainterPathStroker* self);
QPainterPath* QPainterPathStroker_CreateStroke(QPainterPathStroker* self, QPainterPath* path);
void QPainterPathStroker_Delete(QPainterPathStroker* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
