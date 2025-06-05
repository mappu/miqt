#pragma once
#ifndef MIQT_QT_GEN_QLINE_H
#define MIQT_QT_GEN_QLINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
bool QLine_isNull(const QLine* self);
QPoint* QLine_p1(const QLine* self);
QPoint* QLine_p2(const QLine* self);
int QLine_x1(const QLine* self);
int QLine_y1(const QLine* self);
int QLine_x2(const QLine* self);
int QLine_y2(const QLine* self);
int QLine_dx(const QLine* self);
int QLine_dy(const QLine* self);
void QLine_translate(QLine* self, QPoint* p);
void QLine_translate2(QLine* self, int dx, int dy);
QLine* QLine_translated(const QLine* self, QPoint* p);
QLine* QLine_translated2(const QLine* self, int dx, int dy);
QPoint* QLine_center(const QLine* self);
void QLine_setP1(QLine* self, QPoint* p1);
void QLine_setP2(QLine* self, QPoint* p2);
void QLine_setPoints(QLine* self, QPoint* p1, QPoint* p2);
void QLine_setLine(QLine* self, int x1, int y1, int x2, int y2);
bool QLine_operatorEqual(const QLine* self, QLine* d);
bool QLine_operatorNotEqual(const QLine* self, QLine* d);

void QLine_delete(QLine* self);

QLineF* QLineF_new();
QLineF* QLineF_new2(QPointF* pt1, QPointF* pt2);
QLineF* QLineF_new3(double x1, double y1, double x2, double y2);
QLineF* QLineF_new4(QLine* line);
QLineF* QLineF_new5(QLineF* param1);
QLineF* QLineF_fromPolar(double length, double angle);
bool QLineF_isNull(const QLineF* self);
QPointF* QLineF_p1(const QLineF* self);
QPointF* QLineF_p2(const QLineF* self);
double QLineF_x1(const QLineF* self);
double QLineF_y1(const QLineF* self);
double QLineF_x2(const QLineF* self);
double QLineF_y2(const QLineF* self);
double QLineF_dx(const QLineF* self);
double QLineF_dy(const QLineF* self);
double QLineF_length(const QLineF* self);
void QLineF_setLength(QLineF* self, double len);
double QLineF_angle(const QLineF* self);
void QLineF_setAngle(QLineF* self, double angle);
double QLineF_angleTo(const QLineF* self, QLineF* l);
QLineF* QLineF_unitVector(const QLineF* self);
QLineF* QLineF_normalVector(const QLineF* self);
int QLineF_intersects(const QLineF* self, QLineF* l, QPointF* intersectionPoint);
int QLineF_intersect(const QLineF* self, QLineF* l, QPointF* intersectionPoint);
double QLineF_angleWithQLineF(const QLineF* self, QLineF* l);
QPointF* QLineF_pointAt(const QLineF* self, double t);
void QLineF_translate(QLineF* self, QPointF* p);
void QLineF_translate2(QLineF* self, double dx, double dy);
QLineF* QLineF_translated(const QLineF* self, QPointF* p);
QLineF* QLineF_translated2(const QLineF* self, double dx, double dy);
QPointF* QLineF_center(const QLineF* self);
void QLineF_setP1(QLineF* self, QPointF* p1);
void QLineF_setP2(QLineF* self, QPointF* p2);
void QLineF_setPoints(QLineF* self, QPointF* p1, QPointF* p2);
void QLineF_setLine(QLineF* self, double x1, double y1, double x2, double y2);
bool QLineF_operatorEqual(const QLineF* self, QLineF* d);
bool QLineF_operatorNotEqual(const QLineF* self, QLineF* d);
QLine* QLineF_toLine(const QLineF* self);

void QLineF_delete(QLineF* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
