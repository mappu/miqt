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
void QBrush_OperatorAssign(QBrush* self, QBrush* brush);
void QBrush_Swap(QBrush* self, QBrush* other);
int QBrush_Style(const QBrush* self);
void QBrush_SetStyle(QBrush* self, int style);
QMatrix* QBrush_Matrix(const QBrush* self);
void QBrush_SetMatrix(QBrush* self, QMatrix* mat);
QTransform* QBrush_Transform(const QBrush* self);
void QBrush_SetTransform(QBrush* self, QTransform* transform);
QPixmap* QBrush_Texture(const QBrush* self);
void QBrush_SetTexture(QBrush* self, QPixmap* pixmap);
QImage* QBrush_TextureImage(const QBrush* self);
void QBrush_SetTextureImage(QBrush* self, QImage* image);
QColor* QBrush_Color(const QBrush* self);
void QBrush_SetColor(QBrush* self, QColor* color);
void QBrush_SetColorWithColor(QBrush* self, int color);
QGradient* QBrush_Gradient(const QBrush* self);
bool QBrush_IsOpaque(const QBrush* self);
bool QBrush_OperatorEqual(const QBrush* self, QBrush* b);
bool QBrush_OperatorNotEqual(const QBrush* self, QBrush* b);
bool QBrush_IsDetached(const QBrush* self);
void QBrush_Delete(QBrush* self, bool isSubclass);

QBrushData* QBrushData_new(QBrushData* param1);
void QBrushData_OperatorAssign(QBrushData* self, QBrushData* param1);
void QBrushData_Delete(QBrushData* self, bool isSubclass);

QGradient* QGradient_new();
QGradient* QGradient_new2(int param1);
QGradient* QGradient_new3(QGradient* param1);
int QGradient_Type(const QGradient* self);
void QGradient_SetSpread(QGradient* self, int spread);
int QGradient_Spread(const QGradient* self);
void QGradient_SetColorAt(QGradient* self, double pos, QColor* color);
void QGradient_SetStops(QGradient* self, struct miqt_array /* of struct miqt_map  tuple of double and QColor*   */  stops);
struct miqt_array /* of struct miqt_map  tuple of double and QColor*   */  QGradient_Stops(const QGradient* self);
int QGradient_CoordinateMode(const QGradient* self);
void QGradient_SetCoordinateMode(QGradient* self, int mode);
int QGradient_InterpolationMode(const QGradient* self);
void QGradient_SetInterpolationMode(QGradient* self, int mode);
bool QGradient_OperatorEqual(const QGradient* self, QGradient* gradient);
bool QGradient_OperatorNotEqual(const QGradient* self, QGradient* other);
void QGradient_Delete(QGradient* self, bool isSubclass);

QLinearGradient* QLinearGradient_new();
QLinearGradient* QLinearGradient_new2(QPointF* start, QPointF* finalStop);
QLinearGradient* QLinearGradient_new3(double xStart, double yStart, double xFinalStop, double yFinalStop);
QLinearGradient* QLinearGradient_new4(QLinearGradient* param1);
void QLinearGradient_virtbase(QLinearGradient* src, QGradient** outptr_QGradient);
QPointF* QLinearGradient_Start(const QLinearGradient* self);
void QLinearGradient_SetStart(QLinearGradient* self, QPointF* start);
void QLinearGradient_SetStart2(QLinearGradient* self, double x, double y);
QPointF* QLinearGradient_FinalStop(const QLinearGradient* self);
void QLinearGradient_SetFinalStop(QLinearGradient* self, QPointF* stop);
void QLinearGradient_SetFinalStop2(QLinearGradient* self, double x, double y);
void QLinearGradient_Delete(QLinearGradient* self, bool isSubclass);

QRadialGradient* QRadialGradient_new();
QRadialGradient* QRadialGradient_new2(QPointF* center, double radius, QPointF* focalPoint);
QRadialGradient* QRadialGradient_new3(double cx, double cy, double radius, double fx, double fy);
QRadialGradient* QRadialGradient_new4(QPointF* center, double radius);
QRadialGradient* QRadialGradient_new5(double cx, double cy, double radius);
QRadialGradient* QRadialGradient_new6(QPointF* center, double centerRadius, QPointF* focalPoint, double focalRadius);
QRadialGradient* QRadialGradient_new7(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius);
QRadialGradient* QRadialGradient_new8(QRadialGradient* param1);
void QRadialGradient_virtbase(QRadialGradient* src, QGradient** outptr_QGradient);
QPointF* QRadialGradient_Center(const QRadialGradient* self);
void QRadialGradient_SetCenter(QRadialGradient* self, QPointF* center);
void QRadialGradient_SetCenter2(QRadialGradient* self, double x, double y);
QPointF* QRadialGradient_FocalPoint(const QRadialGradient* self);
void QRadialGradient_SetFocalPoint(QRadialGradient* self, QPointF* focalPoint);
void QRadialGradient_SetFocalPoint2(QRadialGradient* self, double x, double y);
double QRadialGradient_Radius(const QRadialGradient* self);
void QRadialGradient_SetRadius(QRadialGradient* self, double radius);
double QRadialGradient_CenterRadius(const QRadialGradient* self);
void QRadialGradient_SetCenterRadius(QRadialGradient* self, double radius);
double QRadialGradient_FocalRadius(const QRadialGradient* self);
void QRadialGradient_SetFocalRadius(QRadialGradient* self, double radius);
void QRadialGradient_Delete(QRadialGradient* self, bool isSubclass);

QConicalGradient* QConicalGradient_new();
QConicalGradient* QConicalGradient_new2(QPointF* center, double startAngle);
QConicalGradient* QConicalGradient_new3(double cx, double cy, double startAngle);
QConicalGradient* QConicalGradient_new4(QConicalGradient* param1);
void QConicalGradient_virtbase(QConicalGradient* src, QGradient** outptr_QGradient);
QPointF* QConicalGradient_Center(const QConicalGradient* self);
void QConicalGradient_SetCenter(QConicalGradient* self, QPointF* center);
void QConicalGradient_SetCenter2(QConicalGradient* self, double x, double y);
double QConicalGradient_Angle(const QConicalGradient* self);
void QConicalGradient_SetAngle(QConicalGradient* self, double angle);
void QConicalGradient_Delete(QConicalGradient* self, bool isSubclass);

QGradient__QGradientData* QGradient__QGradientData_new(QGradient__QGradientData* param1);
void QGradient__QGradientData_OperatorAssign(QGradient__QGradientData* self, QGradient__QGradientData* param1);
void QGradient__QGradientData_Delete(QGradient__QGradientData* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
