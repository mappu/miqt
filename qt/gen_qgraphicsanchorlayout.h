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

QMetaObject* QGraphicsAnchor_MetaObject(const QGraphicsAnchor* self);
void QGraphicsAnchor_Tr(const char* s, char** _out, int* _out_Strlen);
void QGraphicsAnchor_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QGraphicsAnchor_SetSpacing(QGraphicsAnchor* self, double spacing);
void QGraphicsAnchor_UnsetSpacing(QGraphicsAnchor* self);
double QGraphicsAnchor_Spacing(const QGraphicsAnchor* self);
void QGraphicsAnchor_SetSizePolicy(QGraphicsAnchor* self, uintptr_t policy);
uintptr_t QGraphicsAnchor_SizePolicy(const QGraphicsAnchor* self);
void QGraphicsAnchor_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGraphicsAnchor_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsAnchor_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGraphicsAnchor_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsAnchor_Delete(QGraphicsAnchor* self);

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new();
QGraphicsAnchorLayout* QGraphicsAnchorLayout_new2(QGraphicsLayoutItem* parent);
QGraphicsAnchor* QGraphicsAnchorLayout_AddAnchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, uintptr_t firstEdge, QGraphicsLayoutItem* secondItem, uintptr_t secondEdge);
QGraphicsAnchor* QGraphicsAnchorLayout_Anchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, uintptr_t firstEdge, QGraphicsLayoutItem* secondItem, uintptr_t secondEdge);
void QGraphicsAnchorLayout_AddCornerAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, uintptr_t firstCorner, QGraphicsLayoutItem* secondItem, uintptr_t secondCorner);
void QGraphicsAnchorLayout_AddAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem);
void QGraphicsAnchorLayout_SetHorizontalSpacing(QGraphicsAnchorLayout* self, double spacing);
void QGraphicsAnchorLayout_SetVerticalSpacing(QGraphicsAnchorLayout* self, double spacing);
void QGraphicsAnchorLayout_SetSpacing(QGraphicsAnchorLayout* self, double spacing);
double QGraphicsAnchorLayout_HorizontalSpacing(const QGraphicsAnchorLayout* self);
double QGraphicsAnchorLayout_VerticalSpacing(const QGraphicsAnchorLayout* self);
void QGraphicsAnchorLayout_RemoveAt(QGraphicsAnchorLayout* self, int index);
void QGraphicsAnchorLayout_SetGeometry(QGraphicsAnchorLayout* self, QRectF* rect);
int QGraphicsAnchorLayout_Count(const QGraphicsAnchorLayout* self);
QGraphicsLayoutItem* QGraphicsAnchorLayout_ItemAt(const QGraphicsAnchorLayout* self, int index);
void QGraphicsAnchorLayout_Invalidate(QGraphicsAnchorLayout* self);
void QGraphicsAnchorLayout_AddAnchors3(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem, int orientations);
void QGraphicsAnchorLayout_Delete(QGraphicsAnchorLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
