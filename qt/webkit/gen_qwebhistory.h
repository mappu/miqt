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

void QWebHistoryItem_new(QWebHistoryItem* other, QWebHistoryItem** outptr_QWebHistoryItem);
void QWebHistoryItem_OperatorAssign(QWebHistoryItem* self, QWebHistoryItem* other);
QUrl* QWebHistoryItem_OriginalUrl(const QWebHistoryItem* self);
QUrl* QWebHistoryItem_Url(const QWebHistoryItem* self);
struct miqt_string QWebHistoryItem_Title(const QWebHistoryItem* self);
QDateTime* QWebHistoryItem_LastVisited(const QWebHistoryItem* self);
QIcon* QWebHistoryItem_Icon(const QWebHistoryItem* self);
QVariant* QWebHistoryItem_UserData(const QWebHistoryItem* self);
void QWebHistoryItem_SetUserData(QWebHistoryItem* self, QVariant* userData);
bool QWebHistoryItem_IsValid(const QWebHistoryItem* self);
struct miqt_map /* of struct miqt_string to QVariant* */  QWebHistoryItem_ToMap(const QWebHistoryItem* self);
void QWebHistoryItem_LoadFromMap(QWebHistoryItem* self, struct miqt_map /* of struct miqt_string to QVariant* */  mapVal);
void QWebHistoryItem_Delete(QWebHistoryItem* self, bool isSubclass);

void QWebHistory_Clear(QWebHistory* self);
struct miqt_array /* of QWebHistoryItem* */  QWebHistory_Items(const QWebHistory* self);
struct miqt_array /* of QWebHistoryItem* */  QWebHistory_BackItems(const QWebHistory* self, int maxItems);
struct miqt_array /* of QWebHistoryItem* */  QWebHistory_ForwardItems(const QWebHistory* self, int maxItems);
bool QWebHistory_CanGoBack(const QWebHistory* self);
bool QWebHistory_CanGoForward(const QWebHistory* self);
void QWebHistory_Back(QWebHistory* self);
void QWebHistory_Forward(QWebHistory* self);
void QWebHistory_GoToItem(QWebHistory* self, QWebHistoryItem* item);
QWebHistoryItem* QWebHistory_BackItem(const QWebHistory* self);
QWebHistoryItem* QWebHistory_CurrentItem(const QWebHistory* self);
QWebHistoryItem* QWebHistory_ForwardItem(const QWebHistory* self);
QWebHistoryItem* QWebHistory_ItemAt(const QWebHistory* self, int i);
int QWebHistory_CurrentItemIndex(const QWebHistory* self);
int QWebHistory_Count(const QWebHistory* self);
int QWebHistory_MaximumItemCount(const QWebHistory* self);
void QWebHistory_SetMaximumItemCount(QWebHistory* self, int count);
struct miqt_map /* of struct miqt_string to QVariant* */  QWebHistory_ToMap(const QWebHistory* self);
void QWebHistory_LoadFromMap(QWebHistory* self, struct miqt_map /* of struct miqt_string to QVariant* */  mapVal);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
