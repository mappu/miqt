#pragma once
#ifndef MIQT_QT_GEN_QGRAPHICSANCHORLAYOUT_H
#define MIQT_QT_GEN_QGRAPHICSANCHORLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
class QGraphicsAnchor;
class QGraphicsAnchorLayout;
class QGraphicsLayout;
class QGraphicsLayoutItem;
class QMetaObject;
class QObject;
class QRectF;
class QSizeF;
#else
typedef struct QEvent QEvent;
typedef struct QGraphicsAnchor QGraphicsAnchor;
typedef struct QGraphicsAnchorLayout QGraphicsAnchorLayout;
typedef struct QGraphicsLayout QGraphicsLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
#endif

void QGraphicsAnchor_virtbase(QGraphicsAnchor* src, QObject** outptr_QObject);
QMetaObject* QGraphicsAnchor_MetaObject(const QGraphicsAnchor* self);
void* QGraphicsAnchor_Metacast(QGraphicsAnchor* self, const char* param1);
struct miqt_string QGraphicsAnchor_Tr(const char* s);
struct miqt_string QGraphicsAnchor_TrUtf8(const char* s);
void QGraphicsAnchor_SetSpacing(QGraphicsAnchor* self, double spacing);
void QGraphicsAnchor_UnsetSpacing(QGraphicsAnchor* self);
double QGraphicsAnchor_Spacing(const QGraphicsAnchor* self);
void QGraphicsAnchor_SetSizePolicy(QGraphicsAnchor* self, int policy);
int QGraphicsAnchor_SizePolicy(const QGraphicsAnchor* self);
struct miqt_string QGraphicsAnchor_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsAnchor_Tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsAnchor_TrUtf82(const char* s, const char* c);
struct miqt_string QGraphicsAnchor_TrUtf83(const char* s, const char* c, int n);
void QGraphicsAnchor_Delete(QGraphicsAnchor* self);

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new();
QGraphicsAnchorLayout* QGraphicsAnchorLayout_new2(QGraphicsLayoutItem* parent);
void QGraphicsAnchorLayout_virtbase(QGraphicsAnchorLayout* src, QGraphicsLayout** outptr_QGraphicsLayout);
QGraphicsAnchor* QGraphicsAnchorLayout_AddAnchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge);
QGraphicsAnchor* QGraphicsAnchorLayout_Anchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge);
void QGraphicsAnchorLayout_AddCornerAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstCorner, QGraphicsLayoutItem* secondItem, int secondCorner);
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
QSizeF* QGraphicsAnchorLayout_SizeHint(const QGraphicsAnchorLayout* self, int which, QSizeF* constraint);
void QGraphicsAnchorLayout_AddAnchors3(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem, int orientations);
bool QGraphicsAnchorLayout_override_virtual_RemoveAt(void* self, intptr_t slot);
void QGraphicsAnchorLayout_virtualbase_RemoveAt(void* self, int index);
bool QGraphicsAnchorLayout_override_virtual_SetGeometry(void* self, intptr_t slot);
void QGraphicsAnchorLayout_virtualbase_SetGeometry(void* self, QRectF* rect);
bool QGraphicsAnchorLayout_override_virtual_Count(void* self, intptr_t slot);
int QGraphicsAnchorLayout_virtualbase_Count(const void* self);
bool QGraphicsAnchorLayout_override_virtual_ItemAt(void* self, intptr_t slot);
QGraphicsLayoutItem* QGraphicsAnchorLayout_virtualbase_ItemAt(const void* self, int index);
bool QGraphicsAnchorLayout_override_virtual_Invalidate(void* self, intptr_t slot);
void QGraphicsAnchorLayout_virtualbase_Invalidate(void* self);
bool QGraphicsAnchorLayout_override_virtual_SizeHint(void* self, intptr_t slot);
QSizeF* QGraphicsAnchorLayout_virtualbase_SizeHint(const void* self, int which, QSizeF* constraint);
bool QGraphicsAnchorLayout_override_virtual_GetContentsMargins(void* self, intptr_t slot);
void QGraphicsAnchorLayout_virtualbase_GetContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);
bool QGraphicsAnchorLayout_override_virtual_UpdateGeometry(void* self, intptr_t slot);
void QGraphicsAnchorLayout_virtualbase_UpdateGeometry(void* self);
bool QGraphicsAnchorLayout_override_virtual_WidgetEvent(void* self, intptr_t slot);
void QGraphicsAnchorLayout_virtualbase_WidgetEvent(void* self, QEvent* e);
void QGraphicsAnchorLayout_Delete(QGraphicsAnchorLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
