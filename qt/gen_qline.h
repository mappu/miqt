#ifndef GEN_QLINE_H
#define GEN_QLINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLine;
class QLineF;
class QPoint;
class QPointF;
#else
typedef struct QLine QLine;
typedef struct QLineF QLineF;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
#endif

QLine* QLine_new();
QLine* QLine_new2(QPoint* pt1, QPoint* pt2);
QLine* QLine_new3(int x1, int y1, int x2, int y2);
QLine* QLine_new4(QLine* param1);
bool QLine_IsNull(QLine* self);
QPoint* QLine_P1(QLine* self);
QPoint* QLine_P2(QLine* self);
int QLine_X1(QLine* self);
int QLine_Y1(QLine* self);
int QLine_X2(QLine* self);
int QLine_Y2(QLine* self);
int QLine_Dx(QLine* self);
int QLine_Dy(QLine* self);
void QLine_Translate(QLine* self, QPoint* p);
void QLine_Translate2(QLine* self, int dx, int dy);
QLine* QLine_Translated(QLine* self, QPoint* p);
QLine* QLine_Translated2(QLine* self, int dx, int dy);
QPoint* QLine_Center(QLine* self);
void QLine_SetP1(QLine* self, QPoint* p1);
void QLine_SetP2(QLine* self, QPoint* p2);
void QLine_SetPoints(QLine* self, QPoint* p1, QPoint* p2);
void QLine_SetLine(QLine* self, int x1, int y1, int x2, int y2);
bool QLine_OperatorEqual(QLine* self, QLine* d);
bool QLine_OperatorNotEqual(QLine* self, QLine* d);
void QLine_Delete(QLine* self);

QLineF* QLineF_new();
QLineF* QLineF_new2(QPointF* pt1, QPointF* pt2);
QLineF* QLineF_new3(double x1, double y1, double x2, double y2);
QLineF* QLineF_new4(QLine* line);
QLineF* QLineF_new5(QLineF* param1);
QLineF* QLineF_FromPolar(double length, double angle);
bool QLineF_IsNull(QLineF* self);
QPointF* QLineF_P1(QLineF* self);
QPointF* QLineF_P2(QLineF* self);
double QLineF_X1(QLineF* self);
double QLineF_Y1(QLineF* self);
double QLineF_X2(QLineF* self);
double QLineF_Y2(QLineF* self);
double QLineF_Dx(QLineF* self);
double QLineF_Dy(QLineF* self);
double QLineF_Length(QLineF* self);
void QLineF_SetLength(QLineF* self, double lenVal);
double QLineF_Angle(QLineF* self);
void QLineF_SetAngle(QLineF* self, double angle);
double QLineF_AngleTo(QLineF* self, QLineF* l);
QLineF* QLineF_UnitVector(QLineF* self);
QLineF* QLineF_NormalVector(QLineF* self);
double QLineF_AngleWithQLineF(QLineF* self, QLineF* l);
QPointF* QLineF_PointAt(QLineF* self, double t);
void QLineF_Translate(QLineF* self, QPointF* p);
void QLineF_Translate2(QLineF* self, double dx, double dy);
QLineF* QLineF_Translated(QLineF* self, QPointF* p);
QLineF* QLineF_Translated2(QLineF* self, double dx, double dy);
QPointF* QLineF_Center(QLineF* self);
void QLineF_SetP1(QLineF* self, QPointF* p1);
void QLineF_SetP2(QLineF* self, QPointF* p2);
void QLineF_SetPoints(QLineF* self, QPointF* p1, QPointF* p2);
void QLineF_SetLine(QLineF* self, double x1, double y1, double x2, double y2);
bool QLineF_OperatorEqual(QLineF* self, QLineF* d);
bool QLineF_OperatorNotEqual(QLineF* self, QLineF* d);
QLine* QLineF_ToLine(QLineF* self);
void QLineF_Delete(QLineF* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
