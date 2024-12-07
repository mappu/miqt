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
void QWebEngineHistoryItem_OperatorAssign(QWebEngineHistoryItem* self, QWebEngineHistoryItem* other);
QUrl* QWebEngineHistoryItem_OriginalUrl(const QWebEngineHistoryItem* self);
QUrl* QWebEngineHistoryItem_Url(const QWebEngineHistoryItem* self);
struct miqt_string QWebEngineHistoryItem_Title(const QWebEngineHistoryItem* self);
QDateTime* QWebEngineHistoryItem_LastVisited(const QWebEngineHistoryItem* self);
QUrl* QWebEngineHistoryItem_IconUrl(const QWebEngineHistoryItem* self);
bool QWebEngineHistoryItem_IsValid(const QWebEngineHistoryItem* self);
void QWebEngineHistoryItem_Swap(QWebEngineHistoryItem* self, QWebEngineHistoryItem* other);
void QWebEngineHistoryItem_Delete(QWebEngineHistoryItem* self, bool isSubclass);

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

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
