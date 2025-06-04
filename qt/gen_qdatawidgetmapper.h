#pragma once
#ifndef MIQT_QT_GEN_QDATAWIDGETMAPPER_H
#define MIQT_QT_GEN_QDATAWIDGETMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemDelegate;
class QAbstractItemModel;
class QChildEvent;
class QDataWidgetMapper;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QModelIndex;
class QObject;
class QTimerEvent;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QDataWidgetMapper QDataWidgetMapper;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QDataWidgetMapper* QDataWidgetMapper_new();
QDataWidgetMapper* QDataWidgetMapper_new2(QObject* parent);
void QDataWidgetMapper_virtbase(QDataWidgetMapper* src, QObject** outptr_QObject);
QMetaObject* QDataWidgetMapper_metaObject(const QDataWidgetMapper* self);
void* QDataWidgetMapper_metacast(QDataWidgetMapper* self, const char* param1);
struct miqt_string QDataWidgetMapper_tr(const char* s);
struct miqt_string QDataWidgetMapper_trUtf8(const char* s);
void QDataWidgetMapper_setModel(QDataWidgetMapper* self, QAbstractItemModel* model);
QAbstractItemModel* QDataWidgetMapper_model(const QDataWidgetMapper* self);
void QDataWidgetMapper_setItemDelegate(QDataWidgetMapper* self, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QDataWidgetMapper_itemDelegate(const QDataWidgetMapper* self);
void QDataWidgetMapper_setRootIndex(QDataWidgetMapper* self, QModelIndex* index);
QModelIndex* QDataWidgetMapper_rootIndex(const QDataWidgetMapper* self);
void QDataWidgetMapper_setOrientation(QDataWidgetMapper* self, int aOrientation);
int QDataWidgetMapper_orientation(const QDataWidgetMapper* self);
void QDataWidgetMapper_setSubmitPolicy(QDataWidgetMapper* self, int policy);
int QDataWidgetMapper_submitPolicy(const QDataWidgetMapper* self);
void QDataWidgetMapper_addMapping(QDataWidgetMapper* self, QWidget* widget, int section);
void QDataWidgetMapper_addMapping2(QDataWidgetMapper* self, QWidget* widget, int section, struct miqt_string propertyName);
void QDataWidgetMapper_removeMapping(QDataWidgetMapper* self, QWidget* widget);
int QDataWidgetMapper_mappedSection(const QDataWidgetMapper* self, QWidget* widget);
struct miqt_string QDataWidgetMapper_mappedPropertyName(const QDataWidgetMapper* self, QWidget* widget);
QWidget* QDataWidgetMapper_mappedWidgetAt(const QDataWidgetMapper* self, int section);
void QDataWidgetMapper_clearMapping(QDataWidgetMapper* self);
int QDataWidgetMapper_currentIndex(const QDataWidgetMapper* self);
void QDataWidgetMapper_revert(QDataWidgetMapper* self);
bool QDataWidgetMapper_submit(QDataWidgetMapper* self);
void QDataWidgetMapper_toFirst(QDataWidgetMapper* self);
void QDataWidgetMapper_toLast(QDataWidgetMapper* self);
void QDataWidgetMapper_toNext(QDataWidgetMapper* self);
void QDataWidgetMapper_toPrevious(QDataWidgetMapper* self);
void QDataWidgetMapper_setCurrentIndex(QDataWidgetMapper* self, int index);
void QDataWidgetMapper_setCurrentModelIndex(QDataWidgetMapper* self, QModelIndex* index);
void QDataWidgetMapper_currentIndexChanged(QDataWidgetMapper* self, int index);
void QDataWidgetMapper_connect_currentIndexChanged(QDataWidgetMapper* self, intptr_t slot);
struct miqt_string QDataWidgetMapper_tr2(const char* s, const char* c);
struct miqt_string QDataWidgetMapper_tr3(const char* s, const char* c, int n);
struct miqt_string QDataWidgetMapper_trUtf82(const char* s, const char* c);
struct miqt_string QDataWidgetMapper_trUtf83(const char* s, const char* c, int n);

bool QDataWidgetMapper_override_virtual_setCurrentIndex(void* self, intptr_t slot);
void QDataWidgetMapper_virtualbase_setCurrentIndex(void* self, int index);
bool QDataWidgetMapper_override_virtual_event(void* self, intptr_t slot);
bool QDataWidgetMapper_virtualbase_event(void* self, QEvent* event);
bool QDataWidgetMapper_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDataWidgetMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDataWidgetMapper_override_virtual_timerEvent(void* self, intptr_t slot);
void QDataWidgetMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDataWidgetMapper_override_virtual_childEvent(void* self, intptr_t slot);
void QDataWidgetMapper_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDataWidgetMapper_override_virtual_customEvent(void* self, intptr_t slot);
void QDataWidgetMapper_virtualbase_customEvent(void* self, QEvent* event);
bool QDataWidgetMapper_override_virtual_connectNotify(void* self, intptr_t slot);
void QDataWidgetMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDataWidgetMapper_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDataWidgetMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QDataWidgetMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDataWidgetMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDataWidgetMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDataWidgetMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QDataWidgetMapper_delete(QDataWidgetMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
