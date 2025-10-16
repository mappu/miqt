#pragma once
#ifndef MIQT_QT_GEN_QBRUSH_H
#define MIQT_QT_GEN_QBRUSH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QBrushData;
class QColor;
class QConicalGradient;
class QGradient;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QGradient__QGradientData)
typedef QGradient::QGradientData QGradient__QGradientData;
#else
class QGradient__QGradientData;
#endif
class QImage;
class QLinearGradient;
class QMatrix;
class QPixmap;
class QPointF;
class QRadialGradient;
class QTransform;
class QVariant;
#else
typedef struct QBrush QBrush;
typedef struct QBrushData QBrushData;
typedef struct QColor QColor;
typedef struct QConicalGradient QConicalGradient;
typedef struct QGradient QGradient;
typedef struct QGradient__QGradientData QGradient__QGradientData;
typedef struct QImage QImage;
typedef struct QLinearGradient QLinearGradient;
typedef struct QMatrix QMatrix;
typedef struct QPixmap QPixmap;
typedef struct QPointF QPointF;
typedef struct QRadialGradient QRadialGradient;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
#endif

QBrush* QBrush_new();
QBrush* QBrush_new2(int bs);
QBrush* QBrush_new3(QColor* color);
QBrush* QBrush_new4(int color);
QBrush* QBrush_new5(QColor* color, QPixmap* pixmap);
QBrush* QBrush_new6(int color, QPixmap* pixmap);
QBrush* QBrush_new7(QPixmap* pixmap);
QBrush* QBrush_new8(QImage* image);
QBrush* QBrush_new9(QBrush* brush);
QBrush* QBrush_new10(QGradient* gradient);
QBrush* QBrush_new11(QColor* color, int bs);
QBrush* QBrush_new12(int color, int bs);
void QBrush_operatorAssign(QBrush* self, QBrush* brush);
void QBrush_swap(QBrush* self, QBrush* other);
QVariant* QBrush_ToQVariant(const QBrush* self);
int QBrush_style(const QBrush* self);
void QBrush_setStyle(QBrush* self, int style);
QMatrix* QBrush_matrix(const QBrush* self);
void QBrush_setMatrix(QBrush* self, QMatrix* mat);
QTransform* QBrush_transform(const QBrush* self);
void QBrush_setTransform(QBrush* self, QTransform* transform);
QPixmap* QBrush_texture(const QBrush* self);
void QBrush_setTexture(QBrush* self, QPixmap* pixmap);
QImage* QBrush_textureImage(const QBrush* self);
void QBrush_setTextureImage(QBrush* self, QImage* image);
QColor* QBrush_color(const QBrush* self);
void QBrush_setColor(QBrush* self, QColor* color);
void QBrush_setColorWithColor(QBrush* self, int color);
QGradient* QBrush_gradient(const QBrush* self);
bool QBrush_isOpaque(const QBrush* self);
bool QBrush_operatorEqual(const QBrush* self, QBrush* b);
bool QBrush_operatorNotEqual(const QBrush* self, QBrush* b);
bool QBrush_isDetached(const QBrush* self);

void QBrush_delete(QBrush* self);


QGradient* QGradient_new();
QGradient* QGradient_new2(int param1);
QGradient* QGradient_new3(QGradient* param1);
int QGradient_type(const QGradient* self);
void QGradient_setSpread(QGradient* self, int spread);
int QGradient_spread(const QGradient* self);
void QGradient_setColorAt(QGradient* self, double pos, QColor* color);
void QGradient_setStops(QGradient* self, struct miqt_array /* of struct miqt_map  tuple of double and QColor*   */  stops);
struct miqt_array /* of struct miqt_map  tuple of double and QColor*   */  QGradient_stops(const QGradient* self);
int QGradient_coordinateMode(const QGradient* self);
void QGradient_setCoordinateMode(QGradient* self, int mode);
int QGradient_interpolationMode(const QGradient* self);
void QGradient_setInterpolationMode(QGradient* self, int mode);
bool QGradient_operatorEqual(const QGradient* self, QGradient* gradient);
bool QGradient_operatorNotEqual(const QGradient* self, QGradient* other);
void QGradient_operatorAssign(QGradient* self, QGradient* param1);

void QGradient_delete(QGradient* self);

QLinearGradient* QLinearGradient_new();
QLinearGradient* QLinearGradient_new2(QPointF* start, QPointF* finalStop);
QLinearGradient* QLinearGradient_new3(double xStart, double yStart, double xFinalStop, double yFinalStop);
QLinearGradient* QLinearGradient_new4(QLinearGradient* param1);
void QLinearGradient_virtbase(QLinearGradient* src, QGradient** outptr_QGradient);
QPointF* QLinearGradient_start(const QLinearGradient* self);
void QLinearGradient_setStart(QLinearGradient* self, QPointF* start);
void QLinearGradient_setStart2(QLinearGradient* self, double x, double y);
QPointF* QLinearGradient_finalStop(const QLinearGradient* self);
void QLinearGradient_setFinalStop(QLinearGradient* self, QPointF* stop);
void QLinearGradient_setFinalStop2(QLinearGradient* self, double x, double y);

void QLinearGradient_delete(QLinearGradient* self);

QRadialGradient* QRadialGradient_new();
QRadialGradient* QRadialGradient_new2(QPointF* center, double radius, QPointF* focalPoint);
QRadialGradient* QRadialGradient_new3(double cx, double cy, double radius, double fx, double fy);
QRadialGradient* QRadialGradient_new4(QPointF* center, double radius);
QRadialGradient* QRadialGradient_new5(double cx, double cy, double radius);
QRadialGradient* QRadialGradient_new6(QPointF* center, double centerRadius, QPointF* focalPoint, double focalRadius);
QRadialGradient* QRadialGradient_new7(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius);
QRadialGradient* QRadialGradient_new8(QRadialGradient* param1);
void QRadialGradient_virtbase(QRadialGradient* src, QGradient** outptr_QGradient);
QPointF* QRadialGradient_center(const QRadialGradient* self);
void QRadialGradient_setCenter(QRadialGradient* self, QPointF* center);
void QRadialGradient_setCenter2(QRadialGradient* self, double x, double y);
QPointF* QRadialGradient_focalPoint(const QRadialGradient* self);
void QRadialGradient_setFocalPoint(QRadialGradient* self, QPointF* focalPoint);
void QRadialGradient_setFocalPoint2(QRadialGradient* self, double x, double y);
double QRadialGradient_radius(const QRadialGradient* self);
void QRadialGradient_setRadius(QRadialGradient* self, double radius);
double QRadialGradient_centerRadius(const QRadialGradient* self);
void QRadialGradient_setCenterRadius(QRadialGradient* self, double radius);
double QRadialGradient_focalRadius(const QRadialGradient* self);
void QRadialGradient_setFocalRadius(QRadialGradient* self, double radius);

void QRadialGradient_delete(QRadialGradient* self);

QConicalGradient* QConicalGradient_new();
QConicalGradient* QConicalGradient_new2(QPointF* center, double startAngle);
QConicalGradient* QConicalGradient_new3(double cx, double cy, double startAngle);
QConicalGradient* QConicalGradient_new4(QConicalGradient* param1);
void QConicalGradient_virtbase(QConicalGradient* src, QGradient** outptr_QGradient);
QPointF* QConicalGradient_center(const QConicalGradient* self);
void QConicalGradient_setCenter(QConicalGradient* self, QPointF* center);
void QConicalGradient_setCenter2(QConicalGradient* self, double x, double y);
double QConicalGradient_angle(const QConicalGradient* self);
void QConicalGradient_setAngle(QConicalGradient* self, double angle);

void QConicalGradient_delete(QConicalGradient* self);

QGradient__QGradientData* QGradient__QGradientData_new(QGradient__QGradientData* param1);
void QGradient__QGradientData_operatorAssign(QGradient__QGradientData* self, QGradient__QGradientData* param1);

void QGradient__QGradientData_delete(QGradient__QGradientData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
