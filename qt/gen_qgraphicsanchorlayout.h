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
class QGraphicsItem;
class QGraphicsLayout;
class QGraphicsLayoutItem;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRectF;
class QSizeF;
#else
typedef struct QEvent QEvent;
typedef struct QGraphicsAnchor QGraphicsAnchor;
typedef struct QGraphicsAnchorLayout QGraphicsAnchorLayout;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsLayout QGraphicsLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
#endif

void QGraphicsAnchor_virtbase(QGraphicsAnchor* src, QObject** outptr_QObject);
QMetaObject* QGraphicsAnchor_metaObject(const QGraphicsAnchor* self);
void* QGraphicsAnchor_metacast(QGraphicsAnchor* self, const char* param1);
struct miqt_string QGraphicsAnchor_tr(const char* s);
struct miqt_string QGraphicsAnchor_trUtf8(const char* s);
void QGraphicsAnchor_setSpacing(QGraphicsAnchor* self, double spacing);
void QGraphicsAnchor_unsetSpacing(QGraphicsAnchor* self);
double QGraphicsAnchor_spacing(const QGraphicsAnchor* self);
void QGraphicsAnchor_setSizePolicy(QGraphicsAnchor* self, int policy);
int QGraphicsAnchor_sizePolicy(const QGraphicsAnchor* self);
struct miqt_string QGraphicsAnchor_tr2(const char* s, const char* c);
struct miqt_string QGraphicsAnchor_tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsAnchor_trUtf82(const char* s, const char* c);
struct miqt_string QGraphicsAnchor_trUtf83(const char* s, const char* c, int n);

void QGraphicsAnchor_delete(QGraphicsAnchor* self);

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new();
QGraphicsAnchorLayout* QGraphicsAnchorLayout_new2(QGraphicsLayoutItem* parent);
void QGraphicsAnchorLayout_virtbase(QGraphicsAnchorLayout* src, QGraphicsLayout** outptr_QGraphicsLayout);
QGraphicsAnchor* QGraphicsAnchorLayout_addAnchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge);
QGraphicsAnchor* QGraphicsAnchorLayout_anchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge);
void QGraphicsAnchorLayout_addCornerAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstCorner, QGraphicsLayoutItem* secondItem, int secondCorner);
void QGraphicsAnchorLayout_addAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem);
void QGraphicsAnchorLayout_setHorizontalSpacing(QGraphicsAnchorLayout* self, double spacing);
void QGraphicsAnchorLayout_setVerticalSpacing(QGraphicsAnchorLayout* self, double spacing);
void QGraphicsAnchorLayout_setSpacing(QGraphicsAnchorLayout* self, double spacing);
double QGraphicsAnchorLayout_horizontalSpacing(const QGraphicsAnchorLayout* self);
double QGraphicsAnchorLayout_verticalSpacing(const QGraphicsAnchorLayout* self);
void QGraphicsAnchorLayout_removeAt(QGraphicsAnchorLayout* self, int index);
void QGraphicsAnchorLayout_setGeometry(QGraphicsAnchorLayout* self, QRectF* rect);
int QGraphicsAnchorLayout_count(const QGraphicsAnchorLayout* self);
QGraphicsLayoutItem* QGraphicsAnchorLayout_itemAt(const QGraphicsAnchorLayout* self, int index);
void QGraphicsAnchorLayout_invalidate(QGraphicsAnchorLayout* self);
QSizeF* QGraphicsAnchorLayout_sizeHint(const QGraphicsAnchorLayout* self, int which, QSizeF* constraint);
void QGraphicsAnchorLayout_addAnchors2(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem, int orientations);

bool QGraphicsAnchorLayout_override_virtual_removeAt(void* self, intptr_t slot);
void QGraphicsAnchorLayout_virtualbase_removeAt(void* self, int index);
bool QGraphicsAnchorLayout_override_virtual_setGeometry(void* self, intptr_t slot);
void QGraphicsAnchorLayout_virtualbase_setGeometry(void* self, QRectF* rect);
bool QGraphicsAnchorLayout_override_virtual_count(void* self, intptr_t slot);
int QGraphicsAnchorLayout_virtualbase_count(const void* self);
bool QGraphicsAnchorLayout_override_virtual_itemAt(void* self, intptr_t slot);
QGraphicsLayoutItem* QGraphicsAnchorLayout_virtualbase_itemAt(const void* self, int index);
bool QGraphicsAnchorLayout_override_virtual_invalidate(void* self, intptr_t slot);
void QGraphicsAnchorLayout_virtualbase_invalidate(void* self);
bool QGraphicsAnchorLayout_override_virtual_sizeHint(void* self, intptr_t slot);
QSizeF* QGraphicsAnchorLayout_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint);
bool QGraphicsAnchorLayout_override_virtual_getContentsMargins(void* self, intptr_t slot);
void QGraphicsAnchorLayout_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);
bool QGraphicsAnchorLayout_override_virtual_updateGeometry(void* self, intptr_t slot);
void QGraphicsAnchorLayout_virtualbase_updateGeometry(void* self);
bool QGraphicsAnchorLayout_override_virtual_widgetEvent(void* self, intptr_t slot);
void QGraphicsAnchorLayout_virtualbase_widgetEvent(void* self, QEvent* e);

void QGraphicsAnchorLayout_protectedbase_addChildLayoutItem(bool* _dynamic_cast_ok, void* self, QGraphicsLayoutItem* layoutItem);
void QGraphicsAnchorLayout_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
void QGraphicsAnchorLayout_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);

void QGraphicsAnchorLayout_delete(QGraphicsAnchorLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
