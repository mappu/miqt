#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINEHISTORY_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINEHISTORY_H

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
class QUrl;
class QWebEngineHistory;
class QWebEngineHistoryItem;
#else
typedef struct QDateTime QDateTime;
typedef struct QUrl QUrl;
typedef struct QWebEngineHistory QWebEngineHistory;
typedef struct QWebEngineHistoryItem QWebEngineHistoryItem;
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

#ifdef __cplusplus
} /* extern C */
#endif

#endif
