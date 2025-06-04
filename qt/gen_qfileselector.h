#pragma once
#ifndef MIQT_QT_GEN_QFILESELECTOR_H
#define MIQT_QT_GEN_QFILESELECTOR_H

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
class QFileSelector;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QUrl;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFileSelector QFileSelector;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QFileSelector* QFileSelector_new();
QFileSelector* QFileSelector_new2(QObject* parent);
void QFileSelector_virtbase(QFileSelector* src, QObject** outptr_QObject);
QMetaObject* QFileSelector_metaObject(const QFileSelector* self);
void* QFileSelector_metacast(QFileSelector* self, const char* param1);
struct miqt_string QFileSelector_tr(const char* s);
struct miqt_string QFileSelector_trUtf8(const char* s);
struct miqt_string QFileSelector_select(const QFileSelector* self, struct miqt_string filePath);
QUrl* QFileSelector_selectWithFilePath(const QFileSelector* self, QUrl* filePath);
struct miqt_array /* of struct miqt_string */  QFileSelector_extraSelectors(const QFileSelector* self);
void QFileSelector_setExtraSelectors(QFileSelector* self, struct miqt_array /* of struct miqt_string */  list);
struct miqt_array /* of struct miqt_string */  QFileSelector_allSelectors(const QFileSelector* self);
struct miqt_string QFileSelector_tr2(const char* s, const char* c);
struct miqt_string QFileSelector_tr3(const char* s, const char* c, int n);
struct miqt_string QFileSelector_trUtf82(const char* s, const char* c);
struct miqt_string QFileSelector_trUtf83(const char* s, const char* c, int n);

bool QFileSelector_override_virtual_event(void* self, intptr_t slot);
bool QFileSelector_virtualbase_event(void* self, QEvent* event);
bool QFileSelector_override_virtual_eventFilter(void* self, intptr_t slot);
bool QFileSelector_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QFileSelector_override_virtual_timerEvent(void* self, intptr_t slot);
void QFileSelector_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QFileSelector_override_virtual_childEvent(void* self, intptr_t slot);
void QFileSelector_virtualbase_childEvent(void* self, QChildEvent* event);
bool QFileSelector_override_virtual_customEvent(void* self, intptr_t slot);
void QFileSelector_virtualbase_customEvent(void* self, QEvent* event);
bool QFileSelector_override_virtual_connectNotify(void* self, intptr_t slot);
void QFileSelector_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QFileSelector_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QFileSelector_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QFileSelector_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QFileSelector_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QFileSelector_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QFileSelector_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QFileSelector_delete(QFileSelector* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
