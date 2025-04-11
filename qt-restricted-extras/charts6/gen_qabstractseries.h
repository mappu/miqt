#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QABSTRACTSERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QABSTRACTSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAxis;
class QAbstractSeries;
class QChart;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QChart QChart;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QAbstractSeries_virtbase(QAbstractSeries* src, QObject** outptr_QObject);
QMetaObject* QAbstractSeries_metaObject(const QAbstractSeries* self);
void* QAbstractSeries_metacast(QAbstractSeries* self, const char* param1);
struct miqt_string QAbstractSeries_tr(const char* s);
int QAbstractSeries_type(const QAbstractSeries* self);
void QAbstractSeries_setName(QAbstractSeries* self, struct miqt_string name);
struct miqt_string QAbstractSeries_name(const QAbstractSeries* self);
void QAbstractSeries_setVisible(QAbstractSeries* self);
bool QAbstractSeries_isVisible(const QAbstractSeries* self);
double QAbstractSeries_opacity(const QAbstractSeries* self);
void QAbstractSeries_setOpacity(QAbstractSeries* self, double opacity);
void QAbstractSeries_setUseOpenGL(QAbstractSeries* self);
bool QAbstractSeries_useOpenGL(const QAbstractSeries* self);
QChart* QAbstractSeries_chart(const QAbstractSeries* self);
bool QAbstractSeries_attachAxis(QAbstractSeries* self, QAbstractAxis* axis);
bool QAbstractSeries_detachAxis(QAbstractSeries* self, QAbstractAxis* axis);
struct miqt_array /* of QAbstractAxis* */  QAbstractSeries_attachedAxes(QAbstractSeries* self);
void QAbstractSeries_show(QAbstractSeries* self);
void QAbstractSeries_hide(QAbstractSeries* self);
void QAbstractSeries_nameChanged(QAbstractSeries* self);
void QAbstractSeries_connect_nameChanged(QAbstractSeries* self, intptr_t slot);
void QAbstractSeries_visibleChanged(QAbstractSeries* self);
void QAbstractSeries_connect_visibleChanged(QAbstractSeries* self, intptr_t slot);
void QAbstractSeries_opacityChanged(QAbstractSeries* self);
void QAbstractSeries_connect_opacityChanged(QAbstractSeries* self, intptr_t slot);
void QAbstractSeries_useOpenGLChanged(QAbstractSeries* self);
void QAbstractSeries_connect_useOpenGLChanged(QAbstractSeries* self, intptr_t slot);
struct miqt_string QAbstractSeries_tr2(const char* s, const char* c);
struct miqt_string QAbstractSeries_tr3(const char* s, const char* c, int n);
void QAbstractSeries_setVisibleWithVisible(QAbstractSeries* self, bool visible);
void QAbstractSeries_setUseOpenGLWithEnable(QAbstractSeries* self, bool enable);
void QAbstractSeries_delete(QAbstractSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
