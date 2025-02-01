#pragma once
#ifndef MIQT_QT_GEN_QSHORTCUT_H
#define MIQT_QT_GEN_QSHORTCUT_H

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
class QWidget;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QShortcut QShortcut;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QShortcut* QShortcut_new(QWidget* parent);
QShortcut* QShortcut_new2(QKeySequence* key, QWidget* parent);
QShortcut* QShortcut_new3(QKeySequence* key, QWidget* parent, const char* member);
QShortcut* QShortcut_new4(QKeySequence* key, QWidget* parent, const char* member, const char* ambiguousMember);
QShortcut* QShortcut_new5(QKeySequence* key, QWidget* parent, const char* member, const char* ambiguousMember, int shortcutContext);
void QShortcut_virtbase(QShortcut* src, QObject** outptr_QObject);
QMetaObject* QShortcut_metaObject(const QShortcut* self);
void* QShortcut_metacast(QShortcut* self, const char* param1);
struct miqt_string QShortcut_tr(const char* s);
struct miqt_string QShortcut_trUtf8(const char* s);
void QShortcut_setKey(QShortcut* self, QKeySequence* key);
QKeySequence* QShortcut_key(const QShortcut* self);
void QShortcut_setEnabled(QShortcut* self, bool enable);
bool QShortcut_isEnabled(const QShortcut* self);
void QShortcut_setContext(QShortcut* self, int context);
int QShortcut_context(const QShortcut* self);
void QShortcut_setWhatsThis(QShortcut* self, struct miqt_string text);
struct miqt_string QShortcut_whatsThis(const QShortcut* self);
void QShortcut_setAutoRepeat(QShortcut* self, bool on);
bool QShortcut_autoRepeat(const QShortcut* self);
int QShortcut_id(const QShortcut* self);
QWidget* QShortcut_parentWidget(const QShortcut* self);
void QShortcut_activated(QShortcut* self);
void QShortcut_connect_activated(QShortcut* self, intptr_t slot);
void QShortcut_activatedAmbiguously(QShortcut* self);
void QShortcut_connect_activatedAmbiguously(QShortcut* self, intptr_t slot);
bool QShortcut_event(QShortcut* self, QEvent* e);
struct miqt_string QShortcut_tr2(const char* s, const char* c);
struct miqt_string QShortcut_tr3(const char* s, const char* c, int n);
struct miqt_string QShortcut_trUtf82(const char* s, const char* c);
struct miqt_string QShortcut_trUtf83(const char* s, const char* c, int n);
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
void QShortcut_delete(QShortcut* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
