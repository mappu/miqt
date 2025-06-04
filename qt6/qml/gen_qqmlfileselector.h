#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLFILESELECTOR_H
#define MIQT_QT6_QML_GEN_QQMLFILESELECTOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

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
class QQmlEngine;
class QQmlFileSelector;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFileSelector QFileSelector;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlFileSelector QQmlFileSelector;
typedef struct QTimerEvent QTimerEvent;
#endif

QQmlFileSelector* QQmlFileSelector_new(QQmlEngine* engine);
QQmlFileSelector* QQmlFileSelector_new2(QQmlEngine* engine, QObject* parent);
void QQmlFileSelector_virtbase(QQmlFileSelector* src, QObject** outptr_QObject);
QMetaObject* QQmlFileSelector_metaObject(const QQmlFileSelector* self);
void* QQmlFileSelector_metacast(QQmlFileSelector* self, const char* param1);
struct miqt_string QQmlFileSelector_tr(const char* s);
QFileSelector* QQmlFileSelector_selector(const QQmlFileSelector* self);
void QQmlFileSelector_setSelector(QQmlFileSelector* self, QFileSelector* selector);
void QQmlFileSelector_setExtraSelectors(QQmlFileSelector* self, struct miqt_array /* of struct miqt_string */  strings);
QQmlFileSelector* QQmlFileSelector_get(QQmlEngine* param1);
struct miqt_string QQmlFileSelector_tr2(const char* s, const char* c);
struct miqt_string QQmlFileSelector_tr3(const char* s, const char* c, int n);

bool QQmlFileSelector_override_virtual_event(void* self, intptr_t slot);
bool QQmlFileSelector_virtualbase_event(void* self, QEvent* event);
bool QQmlFileSelector_override_virtual_eventFilter(void* self, intptr_t slot);
bool QQmlFileSelector_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QQmlFileSelector_override_virtual_timerEvent(void* self, intptr_t slot);
void QQmlFileSelector_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QQmlFileSelector_override_virtual_childEvent(void* self, intptr_t slot);
void QQmlFileSelector_virtualbase_childEvent(void* self, QChildEvent* event);
bool QQmlFileSelector_override_virtual_customEvent(void* self, intptr_t slot);
void QQmlFileSelector_virtualbase_customEvent(void* self, QEvent* event);
bool QQmlFileSelector_override_virtual_connectNotify(void* self, intptr_t slot);
void QQmlFileSelector_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QQmlFileSelector_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QQmlFileSelector_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QQmlFileSelector_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QQmlFileSelector_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QQmlFileSelector_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QQmlFileSelector_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QQmlFileSelector_delete(QQmlFileSelector* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
