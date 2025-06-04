#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBHISTORY_H
#define MIQT_QT_WEBKIT_GEN_QWEBHISTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDateTime;
class QIcon;
class QUrl;
class QVariant;
class QWebHistory;
class QWebHistoryItem;
#else
typedef struct QDateTime QDateTime;
typedef struct QIcon QIcon;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWebHistory QWebHistory;
typedef struct QWebHistoryItem QWebHistoryItem;
#endif

QWebHistoryItem* QWebHistoryItem_new(QWebHistoryItem* other);
void QWebHistoryItem_operatorAssign(QWebHistoryItem* self, QWebHistoryItem* other);
QUrl* QWebHistoryItem_originalUrl(const QWebHistoryItem* self);
QUrl* QWebHistoryItem_url(const QWebHistoryItem* self);
struct miqt_string QWebHistoryItem_title(const QWebHistoryItem* self);
QDateTime* QWebHistoryItem_lastVisited(const QWebHistoryItem* self);
QIcon* QWebHistoryItem_icon(const QWebHistoryItem* self);
QVariant* QWebHistoryItem_userData(const QWebHistoryItem* self);
void QWebHistoryItem_setUserData(QWebHistoryItem* self, QVariant* userData);
bool QWebHistoryItem_isValid(const QWebHistoryItem* self);
struct miqt_map /* of struct miqt_string to QVariant* */  QWebHistoryItem_toMap(const QWebHistoryItem* self);
void QWebHistoryItem_loadFromMap(QWebHistoryItem* self, struct miqt_map /* of struct miqt_string to QVariant* */  map);

void QWebHistoryItem_delete(QWebHistoryItem* self);

void QWebHistory_clear(QWebHistory* self);
struct miqt_array /* of QWebHistoryItem* */  QWebHistory_items(const QWebHistory* self);
struct miqt_array /* of QWebHistoryItem* */  QWebHistory_backItems(const QWebHistory* self, int maxItems);
struct miqt_array /* of QWebHistoryItem* */  QWebHistory_forwardItems(const QWebHistory* self, int maxItems);
bool QWebHistory_canGoBack(const QWebHistory* self);
bool QWebHistory_canGoForward(const QWebHistory* self);
void QWebHistory_back(QWebHistory* self);
void QWebHistory_forward(QWebHistory* self);
void QWebHistory_goToItem(QWebHistory* self, QWebHistoryItem* item);
QWebHistoryItem* QWebHistory_backItem(const QWebHistory* self);
QWebHistoryItem* QWebHistory_currentItem(const QWebHistory* self);
QWebHistoryItem* QWebHistory_forwardItem(const QWebHistory* self);
QWebHistoryItem* QWebHistory_itemAt(const QWebHistory* self, int i);
int QWebHistory_currentItemIndex(const QWebHistory* self);
int QWebHistory_count(const QWebHistory* self);
int QWebHistory_maximumItemCount(const QWebHistory* self);
void QWebHistory_setMaximumItemCount(QWebHistory* self, int count);
struct miqt_map /* of struct miqt_string to QVariant* */  QWebHistory_toMap(const QWebHistory* self);
void QWebHistory_loadFromMap(QWebHistory* self, struct miqt_map /* of struct miqt_string to QVariant* */  map);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
