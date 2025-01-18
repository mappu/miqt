#pragma once
#ifndef MIQT_QT6_GEN_QSTRINGLISTMODEL_H
#define MIQT_QT6_GEN_QSTRINGLISTMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QAbstractListModel;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QStringListModel;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QStringListModel QStringListModel;
typedef struct QVariant QVariant;
#endif

QStringListModel* QStringListModel_new();
QStringListModel* QStringListModel_new2(struct miqt_array /* of struct miqt_string */  strings);
QStringListModel* QStringListModel_new3(QObject* parent);
QStringListModel* QStringListModel_new4(struct miqt_array /* of struct miqt_string */  strings, QObject* parent);
void QStringListModel_virtbase(QStringListModel* src, QAbstractListModel** outptr_QAbstractListModel);
QMetaObject* QStringListModel_MetaObject(const QStringListModel* self);
void* QStringListModel_Metacast(QStringListModel* self, const char* param1);
struct miqt_string QStringListModel_Tr(const char* s);
int QStringListModel_RowCount(const QStringListModel* self, QModelIndex* parent);
QModelIndex* QStringListModel_Sibling(const QStringListModel* self, int row, int column, QModelIndex* idx);
QVariant* QStringListModel_Data(const QStringListModel* self, QModelIndex* index, int role);
bool QStringListModel_SetData(QStringListModel* self, QModelIndex* index, QVariant* value, int role);
bool QStringListModel_ClearItemData(QStringListModel* self, QModelIndex* index);
int QStringListModel_Flags(const QStringListModel* self, QModelIndex* index);
bool QStringListModel_InsertRows(QStringListModel* self, int row, int count, QModelIndex* parent);
bool QStringListModel_RemoveRows(QStringListModel* self, int row, int count, QModelIndex* parent);
bool QStringListModel_MoveRows(QStringListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
struct miqt_map /* of int to QVariant* */  QStringListModel_ItemData(const QStringListModel* self, QModelIndex* index);
bool QStringListModel_SetItemData(QStringListModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
void QStringListModel_Sort(QStringListModel* self, int column, int order);
struct miqt_array /* of struct miqt_string */  QStringListModel_StringList(const QStringListModel* self);
void QStringListModel_SetStringList(QStringListModel* self, struct miqt_array /* of struct miqt_string */  strings);
int QStringListModel_SupportedDropActions(const QStringListModel* self);
struct miqt_string QStringListModel_Tr2(const char* s, const char* c);
struct miqt_string QStringListModel_Tr3(const char* s, const char* c, int n);
void QStringListModel_override_virtual_RowCount(void* self, intptr_t slot);
int QStringListModel_virtualbase_RowCount(const void* self, QModelIndex* parent);
void QStringListModel_override_virtual_Sibling(void* self, intptr_t slot);
QModelIndex* QStringListModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx);
void QStringListModel_override_virtual_Data(void* self, intptr_t slot);
QVariant* QStringListModel_virtualbase_Data(const void* self, QModelIndex* index, int role);
void QStringListModel_override_virtual_SetData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role);
void QStringListModel_override_virtual_ClearItemData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_ClearItemData(void* self, QModelIndex* index);
void QStringListModel_override_virtual_Flags(void* self, intptr_t slot);
int QStringListModel_virtualbase_Flags(const void* self, QModelIndex* index);
void QStringListModel_override_virtual_InsertRows(void* self, intptr_t slot);
bool QStringListModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent);
void QStringListModel_override_virtual_RemoveRows(void* self, intptr_t slot);
bool QStringListModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent);
void QStringListModel_override_virtual_MoveRows(void* self, intptr_t slot);
bool QStringListModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
void QStringListModel_override_virtual_ItemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QStringListModel_virtualbase_ItemData(const void* self, QModelIndex* index);
void QStringListModel_override_virtual_SetItemData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
void QStringListModel_override_virtual_Sort(void* self, intptr_t slot);
void QStringListModel_virtualbase_Sort(void* self, int column, int order);
void QStringListModel_override_virtual_SupportedDropActions(void* self, intptr_t slot);
int QStringListModel_virtualbase_SupportedDropActions(const void* self);
void QStringListModel_override_virtual_Index(void* self, intptr_t slot);
QModelIndex* QStringListModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent);
void QStringListModel_override_virtual_DropMimeData(void* self, intptr_t slot);
bool QStringListModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QStringListModel_Delete(QStringListModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
