#pragma once
#ifndef MIQT_QT6_GEN_QSHORTCUT_H
#define MIQT_QT6_GEN_QSHORTCUT_H

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
class QKeySequence;
class QMetaMethod;
class QMetaObject;
class QObject;
class QShortcut;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QShortcut QShortcut;
typedef struct QTimerEvent QTimerEvent;
#endif

QShortcut* QShortcut_new(QObject* parent);
QShortcut* QShortcut_new2(QKeySequence* key, QObject* parent);
QShortcut* QShortcut_new3(int key, QObject* parent);
QShortcut* QShortcut_new4(QKeySequence* key, QObject* parent, const char* member);
QShortcut* QShortcut_new5(QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember);
QShortcut* QShortcut_new6(QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember, int context);
QShortcut* QShortcut_new7(int key, QObject* parent, const char* member);
QShortcut* QShortcut_new8(int key, QObject* parent, const char* member, const char* ambiguousMember);
QShortcut* QShortcut_new9(int key, QObject* parent, const char* member, const char* ambiguousMember, int context);
void QShortcut_virtbase(QShortcut* src, QObject** outptr_QObject);
QMetaObject* QShortcut_metaObject(const QShortcut* self);
void* QShortcut_metacast(QShortcut* self, const char* param1);
struct miqt_string QShortcut_tr(const char* s);
void QShortcut_setKey(QShortcut* self, QKeySequence* key);
QKeySequence* QShortcut_key(const QShortcut* self);
void QShortcut_setKeys(QShortcut* self, int key);
void QShortcut_setKeysWithKeys(QShortcut* self, struct miqt_array /* of QKeySequence* */  keys);
struct miqt_array /* of QKeySequence* */  QShortcut_keys(const QShortcut* self);
void QShortcut_setEnabled(QShortcut* self, bool enable);
bool QShortcut_isEnabled(const QShortcut* self);
void QShortcut_setContext(QShortcut* self, int context);
int QShortcut_context(const QShortcut* self);
void QShortcut_setAutoRepeat(QShortcut* self, bool on);
bool QShortcut_autoRepeat(const QShortcut* self);
int QShortcut_id(const QShortcut* self);
void QShortcut_setWhatsThis(QShortcut* self, struct miqt_string text);
struct miqt_string QShortcut_whatsThis(const QShortcut* self);
void QShortcut_activated(QShortcut* self);
void QShortcut_connect_activated(QShortcut* self, intptr_t slot);
void QShortcut_activatedAmbiguously(QShortcut* self);
void QShortcut_connect_activatedAmbiguously(QShortcut* self, intptr_t slot);
bool QShortcut_event(QShortcut* self, QEvent* e);
struct miqt_string QShortcut_tr2(const char* s, const char* c);
struct miqt_string QShortcut_tr3(const char* s, const char* c, int n);

bool QShortcut_override_virtual_event(void* self, intptr_t slot);
bool QShortcut_virtualbase_event(void* self, QEvent* e);
bool QShortcut_override_virtual_eventFilter(void* self, intptr_t slot);
bool QShortcut_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QShortcut_override_virtual_timerEvent(void* self, intptr_t slot);
void QShortcut_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QShortcut_override_virtual_childEvent(void* self, intptr_t slot);
void QShortcut_virtualbase_childEvent(void* self, QChildEvent* event);
bool QShortcut_override_virtual_customEvent(void* self, intptr_t slot);
void QShortcut_virtualbase_customEvent(void* self, QEvent* event);
bool QShortcut_override_virtual_connectNotify(void* self, intptr_t slot);
void QShortcut_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QShortcut_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QShortcut_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QShortcut_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QShortcut_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QShortcut_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QShortcut_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QShortcut_delete(QShortcut* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
