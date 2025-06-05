#pragma once
#ifndef MIQT_QT_GEN_QTEXTLIST_H
#define MIQT_QT_GEN_QTEXTLIST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTextBlock;
class QTextBlockGroup;
class QTextDocument;
class QTextList;
class QTextListFormat;
class QTextObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTextBlock QTextBlock;
typedef struct QTextBlockGroup QTextBlockGroup;
typedef struct QTextDocument QTextDocument;
typedef struct QTextList QTextList;
typedef struct QTextListFormat QTextListFormat;
typedef struct QTextObject QTextObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QTextList* QTextList_new(QTextDocument* doc);
void QTextList_virtbase(QTextList* src, QTextBlockGroup** outptr_QTextBlockGroup);
QMetaObject* QTextList_metaObject(const QTextList* self);
void* QTextList_metacast(QTextList* self, const char* param1);
struct miqt_string QTextList_tr(const char* s);
struct miqt_string QTextList_trUtf8(const char* s);
int QTextList_count(const QTextList* self);
bool QTextList_isEmpty(const QTextList* self);
QTextBlock* QTextList_item(const QTextList* self, int i);
int QTextList_itemNumber(const QTextList* self, QTextBlock* param1);
struct miqt_string QTextList_itemText(const QTextList* self, QTextBlock* param1);
void QTextList_removeItem(QTextList* self, int i);
void QTextList_remove(QTextList* self, QTextBlock* param1);
void QTextList_add(QTextList* self, QTextBlock* block);
void QTextList_setFormat(QTextList* self, QTextListFormat* format);
QTextListFormat* QTextList_format(const QTextList* self);
struct miqt_string QTextList_tr2(const char* s, const char* c);
struct miqt_string QTextList_tr3(const char* s, const char* c, int n);
struct miqt_string QTextList_trUtf82(const char* s, const char* c);
struct miqt_string QTextList_trUtf83(const char* s, const char* c, int n);

bool QTextList_override_virtual_blockInserted(void* self, intptr_t slot);
void QTextList_virtualbase_blockInserted(void* self, QTextBlock* block);
bool QTextList_override_virtual_blockRemoved(void* self, intptr_t slot);
void QTextList_virtualbase_blockRemoved(void* self, QTextBlock* block);
bool QTextList_override_virtual_blockFormatChanged(void* self, intptr_t slot);
void QTextList_virtualbase_blockFormatChanged(void* self, QTextBlock* block);
bool QTextList_override_virtual_event(void* self, intptr_t slot);
bool QTextList_virtualbase_event(void* self, QEvent* event);
bool QTextList_override_virtual_eventFilter(void* self, intptr_t slot);
bool QTextList_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QTextList_override_virtual_timerEvent(void* self, intptr_t slot);
void QTextList_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QTextList_override_virtual_childEvent(void* self, intptr_t slot);
void QTextList_virtualbase_childEvent(void* self, QChildEvent* event);
bool QTextList_override_virtual_customEvent(void* self, intptr_t slot);
void QTextList_virtualbase_customEvent(void* self, QEvent* event);
bool QTextList_override_virtual_connectNotify(void* self, intptr_t slot);
void QTextList_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QTextList_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QTextList_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

struct miqt_array /* of QTextBlock* */  QTextList_protectedbase_blockList(bool* _dynamic_cast_ok, const void* self);
QObject* QTextList_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QTextList_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QTextList_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QTextList_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QTextList_delete(QTextList* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
