#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_POINT_POLAR_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_POINT_POLAR_H

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
class QwtPointPolar;
#else
typedef struct QPointF QPointF;
typedef struct QwtPointPolar QwtPointPolar;
#endif

QwtPointPolar* QwtPointPolar_new();
QwtPointPolar* QwtPointPolar_new2(double azimuth, double radius);
QwtPointPolar* QwtPointPolar_new3(QwtPointPolar* param1);
QwtPointPolar* QwtPointPolar_new4(QPointF* param1);
void QwtPointPolar_setPoint(QwtPointPolar* self, QPointF* point);
QPointF* QwtPointPolar_toPoint(const QwtPointPolar* self);
bool QwtPointPolar_isValid(const QwtPointPolar* self);
bool QwtPointPolar_isNull(const QwtPointPolar* self);
double QwtPointPolar_radius(const QwtPointPolar* self);
double QwtPointPolar_azimuth(const QwtPointPolar* self);
void QwtPointPolar_setRadius(QwtPointPolar* self, double radius);
void QwtPointPolar_setAzimuth(QwtPointPolar* self, double azimuth);
bool QwtPointPolar_operatorEqual(const QwtPointPolar* self, QwtPointPolar* param1);
bool QwtPointPolar_operatorNotEqual(const QwtPointPolar* self, QwtPointPolar* param1);
QwtPointPolar* QwtPointPolar_normalized(const QwtPointPolar* self);

void QwtPointPolar_delete(QwtPointPolar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
