#pragma once
#ifndef MIQT_QT6_GEN_QLINE_H
#define MIQT_QT6_GEN_QLINE_H

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
QLine* QLine_new2(struct miqt_qpoint pt1, struct miqt_qpoint pt2);
QLine* QLine_new3(int x1, int y1, int x2, int y2);
QLine* QLine_new4(QLine* param1);
bool QLine_isNull(const QLine* self);
struct miqt_qpoint QLine_p1(const QLine* self);
struct miqt_qpoint QLine_p2(const QLine* self);
int QLine_x1(const QLine* self);
int QLine_y1(const QLine* self);
int QLine_x2(const QLine* self);
int QLine_y2(const QLine* self);
int QLine_dx(const QLine* self);
int QLine_dy(const QLine* self);
void QLine_translate(QLine* self, struct miqt_qpoint p);
void QLine_translate2(QLine* self, int dx, int dy);
QLine* QLine_translated(const QLine* self, struct miqt_qpoint p);
QLine* QLine_translated2(const QLine* self, int dx, int dy);
struct miqt_qpoint QLine_center(const QLine* self);
void QLine_setP1(QLine* self, struct miqt_qpoint p1);
void QLine_setP2(QLine* self, struct miqt_qpoint p2);
void QLine_setPoints(QLine* self, struct miqt_qpoint p1, struct miqt_qpoint p2);
void QLine_setLine(QLine* self, int x1, int y1, int x2, int y2);
bool QLine_operatorEqual(const QLine* self, QLine* d);
bool QLine_operatorNotEqual(const QLine* self, QLine* d);
QLineF* QLine_toLineF(const QLine* self);

void QLine_delete(QLine* self);

QLineF* QLineF_new();
QLineF* QLineF_new2(struct miqt_qpointf pt1, struct miqt_qpointf pt2);
QLineF* QLineF_new3(double x1, double y1, double x2, double y2);
QLineF* QLineF_new4(QLine* line);
QLineF* QLineF_new5(QLineF* param1);
QLineF* QLineF_fromPolar(double length, double angle);
bool QLineF_isNull(const QLineF* self);
struct miqt_qpointf QLineF_p1(const QLineF* self);
struct miqt_qpointf QLineF_p2(const QLineF* self);
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
int QLineF_intersects(const QLineF* self, QLineF* l);
struct miqt_qpointf QLineF_pointAt(const QLineF* self, double t);
void QLineF_translate(QLineF* self, struct miqt_qpointf p);
void QLineF_translate2(QLineF* self, double dx, double dy);
QLineF* QLineF_translated(const QLineF* self, struct miqt_qpointf p);
QLineF* QLineF_translated2(const QLineF* self, double dx, double dy);
struct miqt_qpointf QLineF_center(const QLineF* self);
void QLineF_setP1(QLineF* self, struct miqt_qpointf p1);
void QLineF_setP2(QLineF* self, struct miqt_qpointf p2);
void QLineF_setPoints(QLineF* self, struct miqt_qpointf p1, struct miqt_qpointf p2);
void QLineF_setLine(QLineF* self, double x1, double y1, double x2, double y2);
bool QLineF_operatorEqual(const QLineF* self, QLineF* d);
bool QLineF_operatorNotEqual(const QLineF* self, QLineF* d);
QLine* QLineF_toLine(const QLineF* self);
int QLineF_intersects2(const QLineF* self, QLineF* l, QPointF* intersectionPoint);

void QLineF_delete(QLineF* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
