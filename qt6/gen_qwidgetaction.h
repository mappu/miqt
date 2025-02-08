#pragma once
#ifndef MIQT_QT6_GEN_QWIDGETACTION_H
#define MIQT_QT6_GEN_QWIDGETACTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QWidget;
class QWidgetAction;
#else
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct QWidgetAction QWidgetAction;
#endif

QWidgetAction* QWidgetAction_new(QObject* parent);
void QWidgetAction_virtbase(QWidgetAction* src, QAction** outptr_QAction);
QMetaObject* QWidgetAction_metaObject(const QWidgetAction* self);
void* QWidgetAction_metacast(QWidgetAction* self, const char* param1);
struct miqt_string QWidgetAction_tr(const char* s);
void QWidgetAction_setDefaultWidget(QWidgetAction* self, QWidget* w);
QWidget* QWidgetAction_defaultWidget(const QWidgetAction* self);
QWidget* QWidgetAction_requestWidget(QWidgetAction* self, QWidget* parent);
void QWidgetAction_releaseWidget(QWidgetAction* self, QWidget* widget);
bool QWidgetAction_event(QWidgetAction* self, QEvent* param1);
bool QWidgetAction_eventFilter(QWidgetAction* self, QObject* param1, QEvent* param2);
QWidget* QWidgetAction_createWidget(QWidgetAction* self, QWidget* parent);
void QWidgetAction_deleteWidget(QWidgetAction* self, QWidget* widget);
struct miqt_string QWidgetAction_tr2(const char* s, const char* c);
struct miqt_string QWidgetAction_tr3(const char* s, const char* c, int n);
bool QWidgetAction_override_virtual_event(void* self, intptr_t slot);
bool QWidgetAction_virtualbase_event(void* self, QEvent* param1);
bool QWidgetAction_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWidgetAction_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QWidgetAction_override_virtual_createWidget(void* self, intptr_t slot);
QWidget* QWidgetAction_virtualbase_createWidget(void* self, QWidget* parent);
bool QWidgetAction_override_virtual_deleteWidget(void* self, intptr_t slot);
void QWidgetAction_virtualbase_deleteWidget(void* self, QWidget* widget);
bool QWidgetAction_override_virtual_timerEvent(void* self, intptr_t slot);
void QWidgetAction_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWidgetAction_override_virtual_childEvent(void* self, intptr_t slot);
void QWidgetAction_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWidgetAction_override_virtual_customEvent(void* self, intptr_t slot);
void QWidgetAction_virtualbase_customEvent(void* self, QEvent* event);
bool QWidgetAction_override_virtual_connectNotify(void* self, intptr_t slot);
void QWidgetAction_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWidgetAction_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWidgetAction_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
struct miqt_array /* of QWidget* */  QWidgetAction_protectedbase_createdWidgets(bool* _dynamic_cast_ok, const void* self);
QObject* QWidgetAction_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QWidgetAction_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QWidgetAction_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QWidgetAction_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QWidgetAction_delete(QWidgetAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
