#pragma once
#ifndef MIQT_QT6_GEN_QDRAG_H
#define MIQT_QT6_GEN_QDRAG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDrag;
class QMetaObject;
class QMimeData;
class QObject;
class QPixmap;
class QPoint;
#else
typedef struct QDrag QDrag;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
#endif

QDrag* QDrag_new(QObject* dragSource);
QMetaObject* QDrag_MetaObject(const QDrag* self);
void* QDrag_Metacast(QDrag* self, const char* param1);
struct miqt_string QDrag_Tr(const char* s);
void QDrag_SetMimeData(QDrag* self, QMimeData* data);
QMimeData* QDrag_MimeData(const QDrag* self);
void QDrag_SetPixmap(QDrag* self, QPixmap* pixmap);
QPixmap* QDrag_Pixmap(const QDrag* self);
void QDrag_SetHotSpot(QDrag* self, QPoint* hotspot);
QPoint* QDrag_HotSpot(const QDrag* self);
QObject* QDrag_Source(const QDrag* self);
QObject* QDrag_Target(const QDrag* self);
int QDrag_Exec(QDrag* self);
int QDrag_Exec2(QDrag* self, int supportedActions, int defaultAction);
void QDrag_SetDragCursor(QDrag* self, QPixmap* cursor, int action);
QPixmap* QDrag_DragCursor(const QDrag* self, int action);
int QDrag_SupportedActions(const QDrag* self);
int QDrag_DefaultAction(const QDrag* self);
void QDrag_Cancel();
void QDrag_ActionChanged(QDrag* self, int action);
void QDrag_connect_ActionChanged(QDrag* self, intptr_t slot);
void QDrag_TargetChanged(QDrag* self, QObject* newTarget);
void QDrag_connect_TargetChanged(QDrag* self, intptr_t slot);
struct miqt_string QDrag_Tr2(const char* s, const char* c);
struct miqt_string QDrag_Tr3(const char* s, const char* c, int n);
int QDrag_Exec1(QDrag* self, int supportedActions);
void QDrag_Delete(QDrag* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
