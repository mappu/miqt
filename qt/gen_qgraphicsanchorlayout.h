#ifndef GEN_QGRAPHICSANCHORLAYOUT_H
#define GEN_QGRAPHICSANCHORLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGraphicsAnchor;
class QGraphicsAnchorLayout;
class QGraphicsLayoutItem;
class QMetaObject;
class QRectF;
#else
typedef struct QGraphicsAnchor QGraphicsAnchor;
typedef struct QGraphicsAnchorLayout QGraphicsAnchorLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QMetaObject QMetaObject;
typedef struct QRectF QRectF;
#endif

QMetaObject* QGraphicsAnchor_MetaObject(QGraphicsAnchor* self);
void QGraphicsAnchor_Tr(char* s, char** _out, int* _out_Strlen);
void QGraphicsAnchor_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QGraphicsAnchor_SetSpacing(QGraphicsAnchor* self, double spacing);
void QGraphicsAnchor_UnsetSpacing(QGraphicsAnchor* self);
double QGraphicsAnchor_Spacing(QGraphicsAnchor* self);
void QGraphicsAnchor_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsAnchor_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsAnchor_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsAnchor_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsAnchor_Delete(QGraphicsAnchor* self);

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new();
QGraphicsAnchorLayout* QGraphicsAnchorLayout_new2(QGraphicsLayoutItem* parent);
void QGraphicsAnchorLayout_SetHorizontalSpacing(QGraphicsAnchorLayout* self, double spacing);
void QGraphicsAnchorLayout_SetVerticalSpacing(QGraphicsAnchorLayout* self, double spacing);
void QGraphicsAnchorLayout_SetSpacing(QGraphicsAnchorLayout* self, double spacing);
double QGraphicsAnchorLayout_HorizontalSpacing(QGraphicsAnchorLayout* self);
double QGraphicsAnchorLayout_VerticalSpacing(QGraphicsAnchorLayout* self);
void QGraphicsAnchorLayout_RemoveAt(QGraphicsAnchorLayout* self, int index);
void QGraphicsAnchorLayout_SetGeometry(QGraphicsAnchorLayout* self, QRectF* rect);
int QGraphicsAnchorLayout_Count(QGraphicsAnchorLayout* self);
QGraphicsLayoutItem* QGraphicsAnchorLayout_ItemAt(QGraphicsAnchorLayout* self, int index);
void QGraphicsAnchorLayout_Invalidate(QGraphicsAnchorLayout* self);
void QGraphicsAnchorLayout_Delete(QGraphicsAnchorLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
