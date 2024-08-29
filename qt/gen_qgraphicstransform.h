#ifndef GEN_QGRAPHICSTRANSFORM_H
#define GEN_QGRAPHICSTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGraphicsRotation;
class QGraphicsScale;
class QGraphicsTransform;
class QMatrix4x4;
class QMetaObject;
class QObject;
class QVector3D;
#else
typedef struct QGraphicsRotation QGraphicsRotation;
typedef struct QGraphicsScale QGraphicsScale;
typedef struct QGraphicsTransform QGraphicsTransform;
typedef struct QMatrix4x4 QMatrix4x4;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVector3D QVector3D;
#endif

QMetaObject* QGraphicsTransform_MetaObject(QGraphicsTransform* self);
void QGraphicsTransform_Tr(const char* s, char** _out, int* _out_Strlen);
void QGraphicsTransform_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QGraphicsTransform_ApplyTo(QGraphicsTransform* self, QMatrix4x4* matrix);
void QGraphicsTransform_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGraphicsTransform_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsTransform_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGraphicsTransform_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsTransform_Delete(QGraphicsTransform* self);

QGraphicsScale* QGraphicsScale_new();
QGraphicsScale* QGraphicsScale_new2(QObject* parent);
QMetaObject* QGraphicsScale_MetaObject(QGraphicsScale* self);
void QGraphicsScale_Tr(const char* s, char** _out, int* _out_Strlen);
void QGraphicsScale_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QVector3D* QGraphicsScale_Origin(QGraphicsScale* self);
void QGraphicsScale_SetOrigin(QGraphicsScale* self, QVector3D* point);
double QGraphicsScale_XScale(QGraphicsScale* self);
void QGraphicsScale_SetXScale(QGraphicsScale* self, double xScale);
double QGraphicsScale_YScale(QGraphicsScale* self);
void QGraphicsScale_SetYScale(QGraphicsScale* self, double yScale);
double QGraphicsScale_ZScale(QGraphicsScale* self);
void QGraphicsScale_SetZScale(QGraphicsScale* self, double zScale);
void QGraphicsScale_ApplyTo(QGraphicsScale* self, QMatrix4x4* matrix);
void QGraphicsScale_OriginChanged(QGraphicsScale* self);
void QGraphicsScale_connect_OriginChanged(QGraphicsScale* self, void* slot);
void QGraphicsScale_XScaleChanged(QGraphicsScale* self);
void QGraphicsScale_connect_XScaleChanged(QGraphicsScale* self, void* slot);
void QGraphicsScale_YScaleChanged(QGraphicsScale* self);
void QGraphicsScale_connect_YScaleChanged(QGraphicsScale* self, void* slot);
void QGraphicsScale_ZScaleChanged(QGraphicsScale* self);
void QGraphicsScale_connect_ZScaleChanged(QGraphicsScale* self, void* slot);
void QGraphicsScale_ScaleChanged(QGraphicsScale* self);
void QGraphicsScale_connect_ScaleChanged(QGraphicsScale* self, void* slot);
void QGraphicsScale_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGraphicsScale_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsScale_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGraphicsScale_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsScale_Delete(QGraphicsScale* self);

QGraphicsRotation* QGraphicsRotation_new();
QGraphicsRotation* QGraphicsRotation_new2(QObject* parent);
QMetaObject* QGraphicsRotation_MetaObject(QGraphicsRotation* self);
void QGraphicsRotation_Tr(const char* s, char** _out, int* _out_Strlen);
void QGraphicsRotation_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QVector3D* QGraphicsRotation_Origin(QGraphicsRotation* self);
void QGraphicsRotation_SetOrigin(QGraphicsRotation* self, QVector3D* point);
double QGraphicsRotation_Angle(QGraphicsRotation* self);
void QGraphicsRotation_SetAngle(QGraphicsRotation* self, double angle);
QVector3D* QGraphicsRotation_Axis(QGraphicsRotation* self);
void QGraphicsRotation_SetAxis(QGraphicsRotation* self, QVector3D* axis);
void QGraphicsRotation_SetAxisWithAxis(QGraphicsRotation* self, uintptr_t axis);
void QGraphicsRotation_ApplyTo(QGraphicsRotation* self, QMatrix4x4* matrix);
void QGraphicsRotation_OriginChanged(QGraphicsRotation* self);
void QGraphicsRotation_connect_OriginChanged(QGraphicsRotation* self, void* slot);
void QGraphicsRotation_AngleChanged(QGraphicsRotation* self);
void QGraphicsRotation_connect_AngleChanged(QGraphicsRotation* self, void* slot);
void QGraphicsRotation_AxisChanged(QGraphicsRotation* self);
void QGraphicsRotation_connect_AxisChanged(QGraphicsRotation* self, void* slot);
void QGraphicsRotation_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGraphicsRotation_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsRotation_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGraphicsRotation_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsRotation_Delete(QGraphicsRotation* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
