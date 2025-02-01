#pragma once
#ifndef MIQT_QT6_GEN_QPOINT_H
#define MIQT_QT6_GEN_QPOINT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPoint;
class QPointF;
#else
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
#endif

QPoint* QPoint_new();
QPoint* QPoint_new2(int xpos, int ypos);
QPoint* QPoint_new3(QPoint* param1);
bool QPoint_isNull(const QPoint* self);
int QPoint_x(const QPoint* self);
int QPoint_y(const QPoint* self);
void QPoint_setX(QPoint* self, int x);
void QPoint_setY(QPoint* self, int y);
int QPoint_manhattanLength(const QPoint* self);
QPoint* QPoint_transposed(const QPoint* self);
QPoint* QPoint_operatorPlusAssign(QPoint* self, QPoint* p);
QPoint* QPoint_operatorMinusAssign(QPoint* self, QPoint* p);
QPoint* QPoint_operatorMultiplyAssign(QPoint* self, float factor);
QPoint* QPoint_operatorMultiplyAssignWithFactor(QPoint* self, double factor);
QPoint* QPoint_operatorMultiplyAssign2(QPoint* self, int factor);
QPoint* QPoint_operatorDivideAssign(QPoint* self, double divisor);
int QPoint_dotProduct(QPoint* p1, QPoint* p2);
QPointF* QPoint_toPointF(const QPoint* self);
void QPoint_delete(QPoint* self);

QPointF* QPointF_new();
QPointF* QPointF_new2(QPoint* p);
QPointF* QPointF_new3(double xpos, double ypos);
QPointF* QPointF_new4(QPointF* param1);
double QPointF_manhattanLength(const QPointF* self);
bool QPointF_isNull(const QPointF* self);
double QPointF_x(const QPointF* self);
double QPointF_y(const QPointF* self);
void QPointF_setX(QPointF* self, double x);
void QPointF_setY(QPointF* self, double y);
QPointF* QPointF_transposed(const QPointF* self);
QPointF* QPointF_operatorPlusAssign(QPointF* self, QPointF* p);
QPointF* QPointF_operatorMinusAssign(QPointF* self, QPointF* p);
QPointF* QPointF_operatorMultiplyAssign(QPointF* self, double c);
QPointF* QPointF_operatorDivideAssign(QPointF* self, double c);
double QPointF_dotProduct(QPointF* p1, QPointF* p2);
QPoint* QPointF_toPoint(const QPointF* self);
void QPointF_delete(QPointF* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
