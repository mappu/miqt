#ifndef GEN_QGRAPHICSITEMANIMATION_H
#define GEN_QGRAPHICSITEMANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGraphicsItem;
class QGraphicsItemAnimation;
class QMatrix;
class QMetaObject;
class QObject;
class QPointF;
class QTimeLine;
class QTransform;
#else
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsItemAnimation QGraphicsItemAnimation;
typedef struct QMatrix QMatrix;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QTimeLine QTimeLine;
typedef struct QTransform QTransform;
#endif

QGraphicsItemAnimation* QGraphicsItemAnimation_new();
QGraphicsItemAnimation* QGraphicsItemAnimation_new2(QObject* parent);
QMetaObject* QGraphicsItemAnimation_MetaObject(QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_Tr(const char* s, char** _out, int* _out_Strlen);
void QGraphicsItemAnimation_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QGraphicsItem* QGraphicsItemAnimation_Item(QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetItem(QGraphicsItemAnimation* self, QGraphicsItem* item);
QTimeLine* QGraphicsItemAnimation_TimeLine(QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetTimeLine(QGraphicsItemAnimation* self, QTimeLine* timeLine);
QPointF* QGraphicsItemAnimation_PosAt(QGraphicsItemAnimation* self, double step);
void QGraphicsItemAnimation_SetPosAt(QGraphicsItemAnimation* self, double step, QPointF* pos);
QMatrix* QGraphicsItemAnimation_MatrixAt(QGraphicsItemAnimation* self, double step);
QTransform* QGraphicsItemAnimation_TransformAt(QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_RotationAt(QGraphicsItemAnimation* self, double step);
void QGraphicsItemAnimation_SetRotationAt(QGraphicsItemAnimation* self, double step, double angle);
double QGraphicsItemAnimation_XTranslationAt(QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_YTranslationAt(QGraphicsItemAnimation* self, double step);
void QGraphicsItemAnimation_SetTranslationAt(QGraphicsItemAnimation* self, double step, double dx, double dy);
double QGraphicsItemAnimation_VerticalScaleAt(QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_HorizontalScaleAt(QGraphicsItemAnimation* self, double step);
void QGraphicsItemAnimation_SetScaleAt(QGraphicsItemAnimation* self, double step, double sx, double sy);
double QGraphicsItemAnimation_VerticalShearAt(QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_HorizontalShearAt(QGraphicsItemAnimation* self, double step);
void QGraphicsItemAnimation_SetShearAt(QGraphicsItemAnimation* self, double step, double sh, double sv);
void QGraphicsItemAnimation_Clear(QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetStep(QGraphicsItemAnimation* self, double x);
void QGraphicsItemAnimation_Reset(QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGraphicsItemAnimation_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsItemAnimation_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGraphicsItemAnimation_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsItemAnimation_Delete(QGraphicsItemAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
