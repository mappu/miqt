#ifndef GEN_QBRUSH_H
#define GEN_QBRUSH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QBrush* QBrush_new2(uintptr_t bs);
QBrush* QBrush_new3(QColor* color);
QBrush* QBrush_new4(uintptr_t color);
QBrush* QBrush_new5(QColor* color, QPixmap* pixmap);
QBrush* QBrush_new6(uintptr_t color, QPixmap* pixmap);
QBrush* QBrush_new7(QPixmap* pixmap);
QBrush* QBrush_new8(QImage* image);
QBrush* QBrush_new9(QBrush* brush);
QBrush* QBrush_new10(QGradient* gradient);
QBrush* QBrush_new11(QColor* color, uintptr_t bs);
QBrush* QBrush_new12(uintptr_t color, uintptr_t bs);
void QBrush_OperatorAssign(QBrush* self, QBrush* brush);
void QBrush_Swap(QBrush* self, QBrush* other);
uintptr_t QBrush_Style(QBrush* self);
void QBrush_SetStyle(QBrush* self, uintptr_t style);
QMatrix* QBrush_Matrix(QBrush* self);
void QBrush_SetMatrix(QBrush* self, QMatrix* mat);
QTransform* QBrush_Transform(QBrush* self);
void QBrush_SetTransform(QBrush* self, QTransform* transform);
QPixmap* QBrush_Texture(QBrush* self);
void QBrush_SetTexture(QBrush* self, QPixmap* pixmap);
QImage* QBrush_TextureImage(QBrush* self);
void QBrush_SetTextureImage(QBrush* self, QImage* image);
QColor* QBrush_Color(QBrush* self);
void QBrush_SetColor(QBrush* self, QColor* color);
void QBrush_SetColorWithColor(QBrush* self, uintptr_t color);
QGradient* QBrush_Gradient(QBrush* self);
bool QBrush_IsOpaque(QBrush* self);
bool QBrush_OperatorEqual(QBrush* self, QBrush* b);
bool QBrush_OperatorNotEqual(QBrush* self, QBrush* b);
bool QBrush_IsDetached(QBrush* self);
void QBrush_Delete(QBrush* self);

QBrushData* QBrushData_new(QBrushData* param1);
void QBrushData_OperatorAssign(QBrushData* self, QBrushData* param1);
void QBrushData_Delete(QBrushData* self);

QGradient* QGradient_new();
QGradient* QGradient_new2(uintptr_t param1);
QGradient* QGradient_new3(QGradient* param1);
uintptr_t QGradient_Type(QGradient* self);
void QGradient_SetSpread(QGradient* self, uintptr_t spread);
uintptr_t QGradient_Spread(QGradient* self);
void QGradient_SetColorAt(QGradient* self, double pos, QColor* color);
uintptr_t QGradient_CoordinateMode(QGradient* self);
void QGradient_SetCoordinateMode(QGradient* self, uintptr_t mode);
uintptr_t QGradient_InterpolationMode(QGradient* self);
void QGradient_SetInterpolationMode(QGradient* self, uintptr_t mode);
bool QGradient_OperatorEqual(QGradient* self, QGradient* gradient);
bool QGradient_OperatorNotEqual(QGradient* self, QGradient* other);
void QGradient_Delete(QGradient* self);

QLinearGradient* QLinearGradient_new();
QLinearGradient* QLinearGradient_new2(QPointF* start, QPointF* finalStop);
QLinearGradient* QLinearGradient_new3(double xStart, double yStart, double xFinalStop, double yFinalStop);
QLinearGradient* QLinearGradient_new4(QLinearGradient* param1);
QPointF* QLinearGradient_Start(QLinearGradient* self);
void QLinearGradient_SetStart(QLinearGradient* self, QPointF* start);
void QLinearGradient_SetStart2(QLinearGradient* self, double x, double y);
QPointF* QLinearGradient_FinalStop(QLinearGradient* self);
void QLinearGradient_SetFinalStop(QLinearGradient* self, QPointF* stop);
void QLinearGradient_SetFinalStop2(QLinearGradient* self, double x, double y);
void QLinearGradient_Delete(QLinearGradient* self);

QRadialGradient* QRadialGradient_new();
QRadialGradient* QRadialGradient_new2(QPointF* center, double radius, QPointF* focalPoint);
QRadialGradient* QRadialGradient_new3(double cx, double cy, double radius, double fx, double fy);
QRadialGradient* QRadialGradient_new4(QPointF* center, double radius);
QRadialGradient* QRadialGradient_new5(double cx, double cy, double radius);
QRadialGradient* QRadialGradient_new6(QPointF* center, double centerRadius, QPointF* focalPoint, double focalRadius);
QRadialGradient* QRadialGradient_new7(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius);
QRadialGradient* QRadialGradient_new8(QRadialGradient* param1);
QPointF* QRadialGradient_Center(QRadialGradient* self);
void QRadialGradient_SetCenter(QRadialGradient* self, QPointF* center);
void QRadialGradient_SetCenter2(QRadialGradient* self, double x, double y);
QPointF* QRadialGradient_FocalPoint(QRadialGradient* self);
void QRadialGradient_SetFocalPoint(QRadialGradient* self, QPointF* focalPoint);
void QRadialGradient_SetFocalPoint2(QRadialGradient* self, double x, double y);
double QRadialGradient_Radius(QRadialGradient* self);
void QRadialGradient_SetRadius(QRadialGradient* self, double radius);
double QRadialGradient_CenterRadius(QRadialGradient* self);
void QRadialGradient_SetCenterRadius(QRadialGradient* self, double radius);
double QRadialGradient_FocalRadius(QRadialGradient* self);
void QRadialGradient_SetFocalRadius(QRadialGradient* self, double radius);
void QRadialGradient_Delete(QRadialGradient* self);

QConicalGradient* QConicalGradient_new();
QConicalGradient* QConicalGradient_new2(QPointF* center, double startAngle);
QConicalGradient* QConicalGradient_new3(double cx, double cy, double startAngle);
QConicalGradient* QConicalGradient_new4(QConicalGradient* param1);
QPointF* QConicalGradient_Center(QConicalGradient* self);
void QConicalGradient_SetCenter(QConicalGradient* self, QPointF* center);
void QConicalGradient_SetCenter2(QConicalGradient* self, double x, double y);
double QConicalGradient_Angle(QConicalGradient* self);
void QConicalGradient_SetAngle(QConicalGradient* self, double angle);
void QConicalGradient_Delete(QConicalGradient* self);

QGradient__QGradientData* QGradient__QGradientData_new(QGradient__QGradientData* param1);
void QGradient__QGradientData_Delete(QGradient__QGradientData* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
