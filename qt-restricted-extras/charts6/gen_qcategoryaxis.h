#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QCATEGORYAXIS_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QCATEGORYAXIS_H

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
class QCategoryAxis;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QValueAxis;
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QCategoryAxis QCategoryAxis;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValueAxis QValueAxis;
#endif

QCategoryAxis* QCategoryAxis_new();
QCategoryAxis* QCategoryAxis_new2(QObject* parent);
void QCategoryAxis_virtbase(QCategoryAxis* src, QValueAxis** outptr_QValueAxis);
QMetaObject* QCategoryAxis_metaObject(const QCategoryAxis* self);
void* QCategoryAxis_metacast(QCategoryAxis* self, const char* param1);
struct miqt_string QCategoryAxis_tr(const char* s);
int QCategoryAxis_type(const QCategoryAxis* self);
void QCategoryAxis_append(QCategoryAxis* self, struct miqt_string label, double categoryEndValue);
void QCategoryAxis_remove(QCategoryAxis* self, struct miqt_string label);
void QCategoryAxis_replaceLabel(QCategoryAxis* self, struct miqt_string oldLabel, struct miqt_string newLabel);
double QCategoryAxis_startValue(const QCategoryAxis* self);
void QCategoryAxis_setStartValue(QCategoryAxis* self, double min);
double QCategoryAxis_endValue(const QCategoryAxis* self, struct miqt_string categoryLabel);
struct miqt_array /* of struct miqt_string */  QCategoryAxis_categoriesLabels(QCategoryAxis* self);
int QCategoryAxis_count(const QCategoryAxis* self);
int QCategoryAxis_labelsPosition(const QCategoryAxis* self);
void QCategoryAxis_setLabelsPosition(QCategoryAxis* self, int position);
void QCategoryAxis_categoriesChanged(QCategoryAxis* self);
void QCategoryAxis_connect_categoriesChanged(QCategoryAxis* self, intptr_t slot);
void QCategoryAxis_labelsPositionChanged(QCategoryAxis* self, int position);
void QCategoryAxis_connect_labelsPositionChanged(QCategoryAxis* self, intptr_t slot);
struct miqt_string QCategoryAxis_tr2(const char* s, const char* c);
struct miqt_string QCategoryAxis_tr3(const char* s, const char* c, int n);
double QCategoryAxis_startValueWithCategoryLabel(const QCategoryAxis* self, struct miqt_string categoryLabel);

bool QCategoryAxis_override_virtual_type(void* self, intptr_t slot);
int QCategoryAxis_virtualbase_type(const void* self);
bool QCategoryAxis_override_virtual_event(void* self, intptr_t slot);
bool QCategoryAxis_virtualbase_event(void* self, QEvent* event);
bool QCategoryAxis_override_virtual_eventFilter(void* self, intptr_t slot);
bool QCategoryAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QCategoryAxis_override_virtual_timerEvent(void* self, intptr_t slot);
void QCategoryAxis_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QCategoryAxis_override_virtual_childEvent(void* self, intptr_t slot);
void QCategoryAxis_virtualbase_childEvent(void* self, QChildEvent* event);
bool QCategoryAxis_override_virtual_customEvent(void* self, intptr_t slot);
void QCategoryAxis_virtualbase_customEvent(void* self, QEvent* event);
bool QCategoryAxis_override_virtual_connectNotify(void* self, intptr_t slot);
void QCategoryAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QCategoryAxis_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QCategoryAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QCategoryAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QCategoryAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QCategoryAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QCategoryAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QCategoryAxis_delete(QCategoryAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
