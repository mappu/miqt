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
class QByteArray;
class QDataWidgetMapper;
class QMetaObject;
class QModelIndex;
class QObject;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QByteArray QByteArray;
typedef struct QDataWidgetMapper QDataWidgetMapper;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
#endif

QDataWidgetMapper* QDataWidgetMapper_new();
QDataWidgetMapper* QDataWidgetMapper_new2(QObject* parent);
QMetaObject* QDataWidgetMapper_MetaObject(const QDataWidgetMapper* self);
void* QDataWidgetMapper_Metacast(QDataWidgetMapper* self, const char* param1);
struct miqt_string QDataWidgetMapper_Tr(const char* s);
struct miqt_string QDataWidgetMapper_TrUtf8(const char* s);
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
struct miqt_string QDataWidgetMapper_TrUtf82(const char* s, const char* c);
struct miqt_string QDataWidgetMapper_TrUtf83(const char* s, const char* c, int n);
void QDataWidgetMapper_Delete(QDataWidgetMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
