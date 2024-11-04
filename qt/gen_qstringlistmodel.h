#ifndef GEN_QSTRINGLISTMODEL_H
#define GEN_QSTRINGLISTMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QModelIndex;
class QObject;
class QStringListModel;
class QVariant;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QStringListModel QStringListModel;
typedef struct QVariant QVariant;
#endif

QStringListModel* QStringListModel_new();
QStringListModel* QStringListModel_new2(struct miqt_array /* of struct miqt_string */ strings);
QStringListModel* QStringListModel_new3(QObject* parent);
QStringListModel* QStringListModel_new4(struct miqt_array /* of struct miqt_string */ strings, QObject* parent);
QMetaObject* QStringListModel_MetaObject(const QStringListModel* self);
void* QStringListModel_Metacast(QStringListModel* self, const char* param1);
struct miqt_string QStringListModel_Tr(const char* s);
struct miqt_string QStringListModel_TrUtf8(const char* s);
int QStringListModel_RowCount(const QStringListModel* self);
QModelIndex* QStringListModel_Sibling(const QStringListModel* self, int row, int column, QModelIndex* idx);
QVariant* QStringListModel_Data(const QStringListModel* self, QModelIndex* index);
bool QStringListModel_SetData(QStringListModel* self, QModelIndex* index, QVariant* value);
int QStringListModel_Flags(const QStringListModel* self, QModelIndex* index);
bool QStringListModel_InsertRows(QStringListModel* self, int row, int count);
bool QStringListModel_RemoveRows(QStringListModel* self, int row, int count);
bool QStringListModel_MoveRows(QStringListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
struct miqt_map QStringListModel_ItemData(const QStringListModel* self, QModelIndex* index);
bool QStringListModel_SetItemData(QStringListModel* self, QModelIndex* index, struct miqt_map roles);
void QStringListModel_Sort(QStringListModel* self, int column);
struct miqt_array QStringListModel_StringList(const QStringListModel* self);
void QStringListModel_SetStringList(QStringListModel* self, struct miqt_array /* of struct miqt_string */ strings);
int QStringListModel_SupportedDropActions(const QStringListModel* self);
struct miqt_string QStringListModel_Tr2(const char* s, const char* c);
struct miqt_string QStringListModel_Tr3(const char* s, const char* c, int n);
struct miqt_string QStringListModel_TrUtf82(const char* s, const char* c);
struct miqt_string QStringListModel_TrUtf83(const char* s, const char* c, int n);
int QStringListModel_RowCount1(const QStringListModel* self, QModelIndex* parent);
QVariant* QStringListModel_Data2(const QStringListModel* self, QModelIndex* index, int role);
bool QStringListModel_SetData3(QStringListModel* self, QModelIndex* index, QVariant* value, int role);
bool QStringListModel_InsertRows3(QStringListModel* self, int row, int count, QModelIndex* parent);
bool QStringListModel_RemoveRows3(QStringListModel* self, int row, int count, QModelIndex* parent);
void QStringListModel_Sort2(QStringListModel* self, int column, int order);
void QStringListModel_Delete(QStringListModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
