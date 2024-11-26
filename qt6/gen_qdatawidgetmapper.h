#pragma once
#ifndef MIQT_QT6_GEN_QDATAWIDGETMAPPER_H
#define MIQT_QT6_GEN_QDATAWIDGETMAPPER_H

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

void QDataWidgetMapper_new(QDataWidgetMapper** outptr_QDataWidgetMapper, QObject** outptr_QObject);
void QDataWidgetMapper_new2(QObject* parent, QDataWidgetMapper** outptr_QDataWidgetMapper, QObject** outptr_QObject);
QMetaObject* QDataWidgetMapper_MetaObject(const QDataWidgetMapper* self);
void* QDataWidgetMapper_Metacast(QDataWidgetMapper* self, const char* param1);
struct miqt_string QDataWidgetMapper_Tr(const char* s);
void QDataWidgetMapper_SetModel(QDataWidgetMapper* self, QAbstractItemModel* model);
QAbstractItemModel* QDataWidgetMapper_Model(const QDataWidgetMapper* self);
void QDataWidgetMapper_SetItemDelegate(QDataWidgetMapper* self, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QDataWidgetMapper_ItemDelegate(const QDataWidgetMapper* self);
void QDataWidgetMapper_SetRootIndex(QDataWidgetMapper* self, QModelIndex* index);
QModelIndex* QDataWidgetMapper_RootIndex(const QDataWidgetMapper* self);
void QDataWidgetMapper_SetOrientation(QDataWidgetMapper* self, int aOrientation);
int QDataWidgetMapper_Orientation(const QDataWidgetMapper* self);
void QDataWidgetMapper_SetSubmitPolicy(QDataWidgetMapper* self, int policy);
int QDataWidgetMapper_SubmitPolicy(const QDataWidgetMapper* self);
void QDataWidgetMapper_AddMapping(QDataWidgetMapper* self, QWidget* widget, int section);
void QDataWidgetMapper_AddMapping2(QDataWidgetMapper* self, QWidget* widget, int section, struct miqt_string propertyName);
void QDataWidgetMapper_RemoveMapping(QDataWidgetMapper* self, QWidget* widget);
int QDataWidgetMapper_MappedSection(const QDataWidgetMapper* self, QWidget* widget);
struct miqt_string QDataWidgetMapper_MappedPropertyName(const QDataWidgetMapper* self, QWidget* widget);
QWidget* QDataWidgetMapper_MappedWidgetAt(const QDataWidgetMapper* self, int section);
void QDataWidgetMapper_ClearMapping(QDataWidgetMapper* self);
int QDataWidgetMapper_CurrentIndex(const QDataWidgetMapper* self);
void QDataWidgetMapper_Revert(QDataWidgetMapper* self);
bool QDataWidgetMapper_Submit(QDataWidgetMapper* self);
void QDataWidgetMapper_ToFirst(QDataWidgetMapper* self);
void QDataWidgetMapper_ToLast(QDataWidgetMapper* self);
void QDataWidgetMapper_ToNext(QDataWidgetMapper* self);
void QDataWidgetMapper_ToPrevious(QDataWidgetMapper* self);
void QDataWidgetMapper_SetCurrentIndex(QDataWidgetMapper* self, int index);
void QDataWidgetMapper_SetCurrentModelIndex(QDataWidgetMapper* self, QModelIndex* index);
void QDataWidgetMapper_CurrentIndexChanged(QDataWidgetMapper* self, int index);
void QDataWidgetMapper_connect_CurrentIndexChanged(QDataWidgetMapper* self, intptr_t slot);
struct miqt_string QDataWidgetMapper_Tr2(const char* s, const char* c);
struct miqt_string QDataWidgetMapper_Tr3(const char* s, const char* c, int n);
void QDataWidgetMapper_override_virtual_SetCurrentIndex(void* self, intptr_t slot);
void QDataWidgetMapper_virtualbase_SetCurrentIndex(void* self, int index);
void QDataWidgetMapper_override_virtual_Event(void* self, intptr_t slot);
bool QDataWidgetMapper_virtualbase_Event(void* self, QEvent* event);
void QDataWidgetMapper_override_virtual_EventFilter(void* self, intptr_t slot);
bool QDataWidgetMapper_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QDataWidgetMapper_override_virtual_TimerEvent(void* self, intptr_t slot);
void QDataWidgetMapper_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QDataWidgetMapper_override_virtual_ChildEvent(void* self, intptr_t slot);
void QDataWidgetMapper_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QDataWidgetMapper_override_virtual_CustomEvent(void* self, intptr_t slot);
void QDataWidgetMapper_virtualbase_CustomEvent(void* self, QEvent* event);
void QDataWidgetMapper_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QDataWidgetMapper_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QDataWidgetMapper_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QDataWidgetMapper_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QDataWidgetMapper_Delete(QDataWidgetMapper* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
