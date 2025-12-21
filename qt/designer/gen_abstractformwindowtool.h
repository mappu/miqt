#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_ABSTRACTFORMWINDOWTOOL_H
#define MIQT_QT_DESIGNER_GEN_ABSTRACTFORMWINDOWTOOL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QChildEvent;
class QDesignerFormEditorInterface;
class QDesignerFormWindowInterface;
class QDesignerFormWindowToolInterface;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerFormWindowInterface QDesignerFormWindowInterface;
typedef struct QDesignerFormWindowToolInterface QDesignerFormWindowToolInterface;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QDesignerFormWindowToolInterface* QDesignerFormWindowToolInterface_new();
QDesignerFormWindowToolInterface* QDesignerFormWindowToolInterface_new2(QObject* parent);
void QDesignerFormWindowToolInterface_virtbase(QDesignerFormWindowToolInterface* src, QObject** outptr_QObject);
QMetaObject* QDesignerFormWindowToolInterface_metaObject(const QDesignerFormWindowToolInterface* self);
void* QDesignerFormWindowToolInterface_metacast(QDesignerFormWindowToolInterface* self, const char* param1);
struct miqt_string QDesignerFormWindowToolInterface_tr(const char* s);
struct miqt_string QDesignerFormWindowToolInterface_trUtf8(const char* s);
QDesignerFormEditorInterface* QDesignerFormWindowToolInterface_core(const QDesignerFormWindowToolInterface* self);
QDesignerFormWindowInterface* QDesignerFormWindowToolInterface_formWindow(const QDesignerFormWindowToolInterface* self);
QWidget* QDesignerFormWindowToolInterface_editor(const QDesignerFormWindowToolInterface* self);
QAction* QDesignerFormWindowToolInterface_action(const QDesignerFormWindowToolInterface* self);
void QDesignerFormWindowToolInterface_activated(QDesignerFormWindowToolInterface* self);
void QDesignerFormWindowToolInterface_deactivated(QDesignerFormWindowToolInterface* self);
bool QDesignerFormWindowToolInterface_handleEvent(QDesignerFormWindowToolInterface* self, QWidget* widget, QWidget* managedWidget, QEvent* event);
struct miqt_string QDesignerFormWindowToolInterface_tr2(const char* s, const char* c);
struct miqt_string QDesignerFormWindowToolInterface_tr3(const char* s, const char* c, int n);
struct miqt_string QDesignerFormWindowToolInterface_trUtf82(const char* s, const char* c);
struct miqt_string QDesignerFormWindowToolInterface_trUtf83(const char* s, const char* c, int n);

bool QDesignerFormWindowToolInterface_override_virtual_core(void* self, intptr_t slot);
QDesignerFormEditorInterface* QDesignerFormWindowToolInterface_virtualbase_core(const void* self);
bool QDesignerFormWindowToolInterface_override_virtual_formWindow(void* self, intptr_t slot);
QDesignerFormWindowInterface* QDesignerFormWindowToolInterface_virtualbase_formWindow(const void* self);
bool QDesignerFormWindowToolInterface_override_virtual_editor(void* self, intptr_t slot);
QWidget* QDesignerFormWindowToolInterface_virtualbase_editor(const void* self);
bool QDesignerFormWindowToolInterface_override_virtual_action(void* self, intptr_t slot);
QAction* QDesignerFormWindowToolInterface_virtualbase_action(const void* self);
bool QDesignerFormWindowToolInterface_override_virtual_activated(void* self, intptr_t slot);
void QDesignerFormWindowToolInterface_virtualbase_activated(void* self);
bool QDesignerFormWindowToolInterface_override_virtual_deactivated(void* self, intptr_t slot);
void QDesignerFormWindowToolInterface_virtualbase_deactivated(void* self);
bool QDesignerFormWindowToolInterface_override_virtual_handleEvent(void* self, intptr_t slot);
bool QDesignerFormWindowToolInterface_virtualbase_handleEvent(void* self, QWidget* widget, QWidget* managedWidget, QEvent* event);
bool QDesignerFormWindowToolInterface_override_virtual_event(void* self, intptr_t slot);
bool QDesignerFormWindowToolInterface_virtualbase_event(void* self, QEvent* event);
bool QDesignerFormWindowToolInterface_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDesignerFormWindowToolInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDesignerFormWindowToolInterface_override_virtual_timerEvent(void* self, intptr_t slot);
void QDesignerFormWindowToolInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDesignerFormWindowToolInterface_override_virtual_childEvent(void* self, intptr_t slot);
void QDesignerFormWindowToolInterface_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDesignerFormWindowToolInterface_override_virtual_customEvent(void* self, intptr_t slot);
void QDesignerFormWindowToolInterface_virtualbase_customEvent(void* self, QEvent* event);
bool QDesignerFormWindowToolInterface_override_virtual_connectNotify(void* self, intptr_t slot);
void QDesignerFormWindowToolInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDesignerFormWindowToolInterface_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDesignerFormWindowToolInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QDesignerFormWindowToolInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDesignerFormWindowToolInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDesignerFormWindowToolInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDesignerFormWindowToolInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QDesignerFormWindowToolInterface_delete(QDesignerFormWindowToolInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
