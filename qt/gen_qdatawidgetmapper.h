#ifndef GEN_QDATAWIDGETMAPPER_H
#define GEN_QDATAWIDGETMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QMetaObject* QDataWidgetMapper_MetaObject(QDataWidgetMapper* self);
void QDataWidgetMapper_Tr(char* s, char** _out, int* _out_Strlen);
void QDataWidgetMapper_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QDataWidgetMapper_SetModel(QDataWidgetMapper* self, QAbstractItemModel* model);
QAbstractItemModel* QDataWidgetMapper_Model(QDataWidgetMapper* self);
void QDataWidgetMapper_SetItemDelegate(QDataWidgetMapper* self, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QDataWidgetMapper_ItemDelegate(QDataWidgetMapper* self);
void QDataWidgetMapper_SetRootIndex(QDataWidgetMapper* self, QModelIndex* index);
QModelIndex* QDataWidgetMapper_RootIndex(QDataWidgetMapper* self);
void QDataWidgetMapper_AddMapping(QDataWidgetMapper* self, QWidget* widget, int section);
void QDataWidgetMapper_AddMapping2(QDataWidgetMapper* self, QWidget* widget, int section, QByteArray* propertyName);
void QDataWidgetMapper_RemoveMapping(QDataWidgetMapper* self, QWidget* widget);
int QDataWidgetMapper_MappedSection(QDataWidgetMapper* self, QWidget* widget);
QByteArray* QDataWidgetMapper_MappedPropertyName(QDataWidgetMapper* self, QWidget* widget);
QWidget* QDataWidgetMapper_MappedWidgetAt(QDataWidgetMapper* self, int section);
void QDataWidgetMapper_ClearMapping(QDataWidgetMapper* self);
int QDataWidgetMapper_CurrentIndex(QDataWidgetMapper* self);
void QDataWidgetMapper_Revert(QDataWidgetMapper* self);
bool QDataWidgetMapper_Submit(QDataWidgetMapper* self);
void QDataWidgetMapper_ToFirst(QDataWidgetMapper* self);
void QDataWidgetMapper_ToLast(QDataWidgetMapper* self);
void QDataWidgetMapper_ToNext(QDataWidgetMapper* self);
void QDataWidgetMapper_ToPrevious(QDataWidgetMapper* self);
void QDataWidgetMapper_SetCurrentIndex(QDataWidgetMapper* self, int index);
void QDataWidgetMapper_SetCurrentModelIndex(QDataWidgetMapper* self, QModelIndex* index);
void QDataWidgetMapper_CurrentIndexChanged(QDataWidgetMapper* self, int index);
void QDataWidgetMapper_connect_CurrentIndexChanged(QDataWidgetMapper* self, void* slot);
void QDataWidgetMapper_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QDataWidgetMapper_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QDataWidgetMapper_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QDataWidgetMapper_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QDataWidgetMapper_Delete(QDataWidgetMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
