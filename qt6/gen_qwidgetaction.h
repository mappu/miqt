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
QMetaObject* QWidgetAction_MetaObject(const QWidgetAction* self);
void* QWidgetAction_Metacast(QWidgetAction* self, const char* param1);
struct miqt_string QWidgetAction_Tr(const char* s);
void QWidgetAction_SetDefaultWidget(QWidgetAction* self, QWidget* w);
QWidget* QWidgetAction_DefaultWidget(const QWidgetAction* self);
QWidget* QWidgetAction_RequestWidget(QWidgetAction* self, QWidget* parent);
void QWidgetAction_ReleaseWidget(QWidgetAction* self, QWidget* widget);
bool QWidgetAction_Event(QWidgetAction* self, QEvent* param1);
bool QWidgetAction_EventFilter(QWidgetAction* self, QObject* param1, QEvent* param2);
QWidget* QWidgetAction_CreateWidget(QWidgetAction* self, QWidget* parent);
void QWidgetAction_DeleteWidget(QWidgetAction* self, QWidget* widget);
struct miqt_string QWidgetAction_Tr2(const char* s, const char* c);
struct miqt_string QWidgetAction_Tr3(const char* s, const char* c, int n);
bool QWidgetAction_override_virtual_Event(void* self, intptr_t slot);
bool QWidgetAction_virtualbase_Event(void* self, QEvent* param1);
bool QWidgetAction_override_virtual_EventFilter(void* self, intptr_t slot);
bool QWidgetAction_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
bool QWidgetAction_override_virtual_CreateWidget(void* self, intptr_t slot);
QWidget* QWidgetAction_virtualbase_CreateWidget(void* self, QWidget* parent);
bool QWidgetAction_override_virtual_DeleteWidget(void* self, intptr_t slot);
void QWidgetAction_virtualbase_DeleteWidget(void* self, QWidget* widget);
bool QWidgetAction_override_virtual_TimerEvent(void* self, intptr_t slot);
void QWidgetAction_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QWidgetAction_override_virtual_ChildEvent(void* self, intptr_t slot);
void QWidgetAction_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QWidgetAction_override_virtual_CustomEvent(void* self, intptr_t slot);
void QWidgetAction_virtualbase_CustomEvent(void* self, QEvent* event);
bool QWidgetAction_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QWidgetAction_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QWidgetAction_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QWidgetAction_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QWidgetAction_Delete(QWidgetAction* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
