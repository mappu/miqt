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
class QDataStream;
class QDateTime;
class QMetaMethod;
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
typedef struct QDataStream QDataStream;
typedef struct QDateTime QDateTime;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWebEngineHistory QWebEngineHistory;
typedef struct QWebEngineHistoryItem QWebEngineHistoryItem;
typedef struct QWebEngineHistoryModel QWebEngineHistoryModel;
#endif

QWebEngineHistoryItem* QWebEngineHistoryItem_new(QWebEngineHistoryItem* other);
void QWebEngineHistoryItem_operatorAssign(QWebEngineHistoryItem* self, QWebEngineHistoryItem* other);
QUrl* QWebEngineHistoryItem_originalUrl(const QWebEngineHistoryItem* self);
QUrl* QWebEngineHistoryItem_url(const QWebEngineHistoryItem* self);
struct miqt_string QWebEngineHistoryItem_title(const QWebEngineHistoryItem* self);
QDateTime* QWebEngineHistoryItem_lastVisited(const QWebEngineHistoryItem* self);
QUrl* QWebEngineHistoryItem_iconUrl(const QWebEngineHistoryItem* self);
bool QWebEngineHistoryItem_isValid(const QWebEngineHistoryItem* self);
void QWebEngineHistoryItem_swap(QWebEngineHistoryItem* self, QWebEngineHistoryItem* other);

void QWebEngineHistoryItem_delete(QWebEngineHistoryItem* self);

void QWebEngineHistoryModel_virtbase(QWebEngineHistoryModel* src, QAbstractListModel** outptr_QAbstractListModel);
QMetaObject* QWebEngineHistoryModel_metaObject(const QWebEngineHistoryModel* self);
void* QWebEngineHistoryModel_metacast(QWebEngineHistoryModel* self, const char* param1);
struct miqt_string QWebEngineHistoryModel_tr(const char* s);
int QWebEngineHistoryModel_rowCount(const QWebEngineHistoryModel* self, QModelIndex* parent);
QVariant* QWebEngineHistoryModel_data(const QWebEngineHistoryModel* self, QModelIndex* index, int role);
struct miqt_map /* of int to struct miqt_string */  QWebEngineHistoryModel_roleNames(const QWebEngineHistoryModel* self);
void QWebEngineHistoryModel_reset(QWebEngineHistoryModel* self);
struct miqt_string QWebEngineHistoryModel_tr2(const char* s, const char* c);
struct miqt_string QWebEngineHistoryModel_tr3(const char* s, const char* c, int n);


void QWebEngineHistory_virtbase(QWebEngineHistory* src, QObject** outptr_QObject);
QMetaObject* QWebEngineHistory_metaObject(const QWebEngineHistory* self);
void* QWebEngineHistory_metacast(QWebEngineHistory* self, const char* param1);
struct miqt_string QWebEngineHistory_tr(const char* s);
void QWebEngineHistory_clear(QWebEngineHistory* self);
struct miqt_array /* of QWebEngineHistoryItem* */  QWebEngineHistory_items(const QWebEngineHistory* self);
struct miqt_array /* of QWebEngineHistoryItem* */  QWebEngineHistory_backItems(const QWebEngineHistory* self, int maxItems);
struct miqt_array /* of QWebEngineHistoryItem* */  QWebEngineHistory_forwardItems(const QWebEngineHistory* self, int maxItems);
bool QWebEngineHistory_canGoBack(const QWebEngineHistory* self);
bool QWebEngineHistory_canGoForward(const QWebEngineHistory* self);
void QWebEngineHistory_back(QWebEngineHistory* self);
void QWebEngineHistory_forward(QWebEngineHistory* self);
void QWebEngineHistory_goToItem(QWebEngineHistory* self, QWebEngineHistoryItem* item);
QWebEngineHistoryItem* QWebEngineHistory_backItem(const QWebEngineHistory* self);
QWebEngineHistoryItem* QWebEngineHistory_currentItem(const QWebEngineHistory* self);
QWebEngineHistoryItem* QWebEngineHistory_forwardItem(const QWebEngineHistory* self);
QWebEngineHistoryItem* QWebEngineHistory_itemAt(const QWebEngineHistory* self, int i);
int QWebEngineHistory_currentItemIndex(const QWebEngineHistory* self);
int QWebEngineHistory_count(const QWebEngineHistory* self);
QWebEngineHistoryModel* QWebEngineHistory_itemsModel(const QWebEngineHistory* self);
QWebEngineHistoryModel* QWebEngineHistory_backItemsModel(const QWebEngineHistory* self);
QWebEngineHistoryModel* QWebEngineHistory_forwardItemsModel(const QWebEngineHistory* self);
struct miqt_string QWebEngineHistory_tr2(const char* s, const char* c);
struct miqt_string QWebEngineHistory_tr3(const char* s, const char* c, int n);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
