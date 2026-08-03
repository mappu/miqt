#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_POINT_3D_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_POINT_3D_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPointF;
class QwtPoint3D;
#else
typedef struct QPointF QPointF;
typedef struct QwtPoint3D QwtPoint3D;
#endif

QwtPoint3D* QwtPoint3D_new();
QwtPoint3D* QwtPoint3D_new2(double x, double y, double z);
QwtPoint3D* QwtPoint3D_new3(QwtPoint3D* param1);
QwtPoint3D* QwtPoint3D_new4(QPointF* param1);
bool QwtPoint3D_isNull(const QwtPoint3D* self);
double QwtPoint3D_x(const QwtPoint3D* self);
double QwtPoint3D_y(const QwtPoint3D* self);
double QwtPoint3D_z(const QwtPoint3D* self);
void QwtPoint3D_setX(QwtPoint3D* self, double x);
void QwtPoint3D_setY(QwtPoint3D* self, double y);
void QwtPoint3D_setZ(QwtPoint3D* self, double y);
QPointF* QwtPoint3D_toPoint(const QwtPoint3D* self);
bool QwtPoint3D_operatorEqual(const QwtPoint3D* self, QwtPoint3D* param1);
bool QwtPoint3D_operatorNotEqual(const QwtPoint3D* self, QwtPoint3D* param1);

void QwtPoint3D_delete(QwtPoint3D* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
