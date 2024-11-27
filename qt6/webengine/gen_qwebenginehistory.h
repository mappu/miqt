#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINEHISTORY_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINEHISTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QAbstractListModel;
class QDateTime;
class QMetaObject;
class QModelIndex;
class QObject;
class QUrl;
class QVariant;
class QWebEngineHistory;
class QWebEngineHistoryItem;
class QWebEngineHistoryModel;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QDateTime QDateTime;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWebEngineHistory QWebEngineHistory;
typedef struct QWebEngineHistoryItem QWebEngineHistoryItem;
typedef struct QWebEngineHistoryModel QWebEngineHistoryModel;
#endif

void QWebEngineHistoryItem_new(QWebEngineHistoryItem* other, QWebEngineHistoryItem** outptr_QWebEngineHistoryItem);
void QWebEngineHistoryItem_OperatorAssign(QWebEngineHistoryItem* self, QWebEngineHistoryItem* other);
QUrl* QWebEngineHistoryItem_OriginalUrl(const QWebEngineHistoryItem* self);
QUrl* QWebEngineHistoryItem_Url(const QWebEngineHistoryItem* self);
struct miqt_string QWebEngineHistoryItem_Title(const QWebEngineHistoryItem* self);
QDateTime* QWebEngineHistoryItem_LastVisited(const QWebEngineHistoryItem* self);
QUrl* QWebEngineHistoryItem_IconUrl(const QWebEngineHistoryItem* self);
bool QWebEngineHistoryItem_IsValid(const QWebEngineHistoryItem* self);
void QWebEngineHistoryItem_Swap(QWebEngineHistoryItem* self, QWebEngineHistoryItem* other);
void QWebEngineHistoryItem_Delete(QWebEngineHistoryItem* self, bool isSubclass);

QMetaObject* QWebEngineHistoryModel_MetaObject(const QWebEngineHistoryModel* self);
void* QWebEngineHistoryModel_Metacast(QWebEngineHistoryModel* self, const char* param1);
struct miqt_string QWebEngineHistoryModel_Tr(const char* s);
int QWebEngineHistoryModel_RowCount(const QWebEngineHistoryModel* self, QModelIndex* parent);
QVariant* QWebEngineHistoryModel_Data(const QWebEngineHistoryModel* self, QModelIndex* index, int role);
struct miqt_map /* of int to struct miqt_string */  QWebEngineHistoryModel_RoleNames(const QWebEngineHistoryModel* self);
void QWebEngineHistoryModel_Reset(QWebEngineHistoryModel* self);
struct miqt_string QWebEngineHistoryModel_Tr2(const char* s, const char* c);
struct miqt_string QWebEngineHistoryModel_Tr3(const char* s, const char* c, int n);

QMetaObject* QWebEngineHistory_MetaObject(const QWebEngineHistory* self);
void* QWebEngineHistory_Metacast(QWebEngineHistory* self, const char* param1);
struct miqt_string QWebEngineHistory_Tr(const char* s);
void QWebEngineHistory_Clear(QWebEngineHistory* self);
struct miqt_array /* of QWebEngineHistoryItem* */  QWebEngineHistory_Items(const QWebEngineHistory* self);
struct miqt_array /* of QWebEngineHistoryItem* */  QWebEngineHistory_BackItems(const QWebEngineHistory* self, int maxItems);
struct miqt_array /* of QWebEngineHistoryItem* */  QWebEngineHistory_ForwardItems(const QWebEngineHistory* self, int maxItems);
bool QWebEngineHistory_CanGoBack(const QWebEngineHistory* self);
bool QWebEngineHistory_CanGoForward(const QWebEngineHistory* self);
void QWebEngineHistory_Back(QWebEngineHistory* self);
void QWebEngineHistory_Forward(QWebEngineHistory* self);
void QWebEngineHistory_GoToItem(QWebEngineHistory* self, QWebEngineHistoryItem* item);
QWebEngineHistoryItem* QWebEngineHistory_BackItem(const QWebEngineHistory* self);
QWebEngineHistoryItem* QWebEngineHistory_CurrentItem(const QWebEngineHistory* self);
QWebEngineHistoryItem* QWebEngineHistory_ForwardItem(const QWebEngineHistory* self);
QWebEngineHistoryItem* QWebEngineHistory_ItemAt(const QWebEngineHistory* self, int i);
int QWebEngineHistory_CurrentItemIndex(const QWebEngineHistory* self);
int QWebEngineHistory_Count(const QWebEngineHistory* self);
QWebEngineHistoryModel* QWebEngineHistory_ItemsModel(const QWebEngineHistory* self);
QWebEngineHistoryModel* QWebEngineHistory_BackItemsModel(const QWebEngineHistory* self);
QWebEngineHistoryModel* QWebEngineHistory_ForwardItemsModel(const QWebEngineHistory* self);
struct miqt_string QWebEngineHistory_Tr2(const char* s, const char* c);
struct miqt_string QWebEngineHistory_Tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
