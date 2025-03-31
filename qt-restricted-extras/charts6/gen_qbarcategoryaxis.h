#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBARCATEGORYAXIS_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBARCATEGORYAXIS_H

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
class QBarCategoryAxis;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QBarCategoryAxis QBarCategoryAxis;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QBarCategoryAxis* QBarCategoryAxis_new();
QBarCategoryAxis* QBarCategoryAxis_new2(QObject* parent);
void QBarCategoryAxis_virtbase(QBarCategoryAxis* src, QAbstractAxis** outptr_QAbstractAxis);
QMetaObject* QBarCategoryAxis_metaObject(const QBarCategoryAxis* self);
void* QBarCategoryAxis_metacast(QBarCategoryAxis* self, const char* param1);
struct miqt_string QBarCategoryAxis_tr(const char* s);
int QBarCategoryAxis_type(const QBarCategoryAxis* self);
void QBarCategoryAxis_append(QBarCategoryAxis* self, struct miqt_array /* of struct miqt_string */  categories);
void QBarCategoryAxis_appendWithCategory(QBarCategoryAxis* self, struct miqt_string category);
void QBarCategoryAxis_remove(QBarCategoryAxis* self, struct miqt_string category);
void QBarCategoryAxis_insert(QBarCategoryAxis* self, int index, struct miqt_string category);
void QBarCategoryAxis_replace(QBarCategoryAxis* self, struct miqt_string oldCategory, struct miqt_string newCategory);
void QBarCategoryAxis_clear(QBarCategoryAxis* self);
void QBarCategoryAxis_setCategories(QBarCategoryAxis* self, struct miqt_array /* of struct miqt_string */  categories);
struct miqt_array /* of struct miqt_string */  QBarCategoryAxis_categories(QBarCategoryAxis* self);
int QBarCategoryAxis_count(const QBarCategoryAxis* self);
struct miqt_string QBarCategoryAxis_at(const QBarCategoryAxis* self, int index);
void QBarCategoryAxis_setMin(QBarCategoryAxis* self, struct miqt_string minCategory);
struct miqt_string QBarCategoryAxis_min(const QBarCategoryAxis* self);
void QBarCategoryAxis_setMax(QBarCategoryAxis* self, struct miqt_string maxCategory);
struct miqt_string QBarCategoryAxis_max(const QBarCategoryAxis* self);
void QBarCategoryAxis_setRange(QBarCategoryAxis* self, struct miqt_string minCategory, struct miqt_string maxCategory);
void QBarCategoryAxis_categoriesChanged(QBarCategoryAxis* self);
void QBarCategoryAxis_connect_categoriesChanged(QBarCategoryAxis* self, intptr_t slot);
void QBarCategoryAxis_minChanged(QBarCategoryAxis* self, struct miqt_string min);
void QBarCategoryAxis_connect_minChanged(QBarCategoryAxis* self, intptr_t slot);
void QBarCategoryAxis_maxChanged(QBarCategoryAxis* self, struct miqt_string max);
void QBarCategoryAxis_connect_maxChanged(QBarCategoryAxis* self, intptr_t slot);
void QBarCategoryAxis_rangeChanged(QBarCategoryAxis* self, struct miqt_string min, struct miqt_string max);
void QBarCategoryAxis_connect_rangeChanged(QBarCategoryAxis* self, intptr_t slot);
void QBarCategoryAxis_countChanged(QBarCategoryAxis* self);
void QBarCategoryAxis_connect_countChanged(QBarCategoryAxis* self, intptr_t slot);
struct miqt_string QBarCategoryAxis_tr2(const char* s, const char* c);
struct miqt_string QBarCategoryAxis_tr3(const char* s, const char* c, int n);
bool QBarCategoryAxis_override_virtual_type(void* self, intptr_t slot);
int QBarCategoryAxis_virtualbase_type(const void* self);
bool QBarCategoryAxis_override_virtual_event(void* self, intptr_t slot);
bool QBarCategoryAxis_virtualbase_event(void* self, QEvent* event);
bool QBarCategoryAxis_override_virtual_eventFilter(void* self, intptr_t slot);
bool QBarCategoryAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QBarCategoryAxis_override_virtual_timerEvent(void* self, intptr_t slot);
void QBarCategoryAxis_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QBarCategoryAxis_override_virtual_childEvent(void* self, intptr_t slot);
void QBarCategoryAxis_virtualbase_childEvent(void* self, QChildEvent* event);
bool QBarCategoryAxis_override_virtual_customEvent(void* self, intptr_t slot);
void QBarCategoryAxis_virtualbase_customEvent(void* self, QEvent* event);
bool QBarCategoryAxis_override_virtual_connectNotify(void* self, intptr_t slot);
void QBarCategoryAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QBarCategoryAxis_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QBarCategoryAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QBarCategoryAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QBarCategoryAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QBarCategoryAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QBarCategoryAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QBarCategoryAxis_delete(QBarCategoryAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
