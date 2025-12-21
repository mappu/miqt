#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_ABSTRACTWIDGETFACTORY_H
#define MIQT_QT_DESIGNER_GEN_ABSTRACTWIDGETFACTORY_H

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
class QDesignerFormEditorInterface;
class QDesignerWidgetFactoryInterface;
class QEvent;
class QLayout;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QWidget;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerWidgetFactoryInterface QDesignerWidgetFactoryInterface;
typedef struct QEvent QEvent;
typedef struct QLayout QLayout;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QDesignerWidgetFactoryInterface* QDesignerWidgetFactoryInterface_new();
QDesignerWidgetFactoryInterface* QDesignerWidgetFactoryInterface_new2(QObject* parent);
void QDesignerWidgetFactoryInterface_virtbase(QDesignerWidgetFactoryInterface* src, QObject** outptr_QObject);
QMetaObject* QDesignerWidgetFactoryInterface_metaObject(const QDesignerWidgetFactoryInterface* self);
void* QDesignerWidgetFactoryInterface_metacast(QDesignerWidgetFactoryInterface* self, const char* param1);
struct miqt_string QDesignerWidgetFactoryInterface_tr(const char* s);
struct miqt_string QDesignerWidgetFactoryInterface_trUtf8(const char* s);
QDesignerFormEditorInterface* QDesignerWidgetFactoryInterface_core(const QDesignerWidgetFactoryInterface* self);
QWidget* QDesignerWidgetFactoryInterface_containerOfWidget(const QDesignerWidgetFactoryInterface* self, QWidget* w);
QWidget* QDesignerWidgetFactoryInterface_widgetOfContainer(const QDesignerWidgetFactoryInterface* self, QWidget* w);
QWidget* QDesignerWidgetFactoryInterface_createWidget(const QDesignerWidgetFactoryInterface* self, struct miqt_string name, QWidget* parentWidget);
QLayout* QDesignerWidgetFactoryInterface_createLayout(const QDesignerWidgetFactoryInterface* self, QWidget* widget, QLayout* layout, int type);
bool QDesignerWidgetFactoryInterface_isPassiveInteractor(QDesignerWidgetFactoryInterface* self, QWidget* widget);
void QDesignerWidgetFactoryInterface_initialize(const QDesignerWidgetFactoryInterface* self, QObject* object);
struct miqt_string QDesignerWidgetFactoryInterface_tr2(const char* s, const char* c);
struct miqt_string QDesignerWidgetFactoryInterface_tr3(const char* s, const char* c, int n);
struct miqt_string QDesignerWidgetFactoryInterface_trUtf82(const char* s, const char* c);
struct miqt_string QDesignerWidgetFactoryInterface_trUtf83(const char* s, const char* c, int n);

bool QDesignerWidgetFactoryInterface_override_virtual_core(void* self, intptr_t slot);
QDesignerFormEditorInterface* QDesignerWidgetFactoryInterface_virtualbase_core(const void* self);
bool QDesignerWidgetFactoryInterface_override_virtual_containerOfWidget(void* self, intptr_t slot);
QWidget* QDesignerWidgetFactoryInterface_virtualbase_containerOfWidget(const void* self, QWidget* w);
bool QDesignerWidgetFactoryInterface_override_virtual_widgetOfContainer(void* self, intptr_t slot);
QWidget* QDesignerWidgetFactoryInterface_virtualbase_widgetOfContainer(const void* self, QWidget* w);
bool QDesignerWidgetFactoryInterface_override_virtual_createWidget(void* self, intptr_t slot);
QWidget* QDesignerWidgetFactoryInterface_virtualbase_createWidget(const void* self, struct miqt_string name, QWidget* parentWidget);
bool QDesignerWidgetFactoryInterface_override_virtual_createLayout(void* self, intptr_t slot);
QLayout* QDesignerWidgetFactoryInterface_virtualbase_createLayout(const void* self, QWidget* widget, QLayout* layout, int type);
bool QDesignerWidgetFactoryInterface_override_virtual_isPassiveInteractor(void* self, intptr_t slot);
bool QDesignerWidgetFactoryInterface_virtualbase_isPassiveInteractor(void* self, QWidget* widget);
bool QDesignerWidgetFactoryInterface_override_virtual_initialize(void* self, intptr_t slot);
void QDesignerWidgetFactoryInterface_virtualbase_initialize(const void* self, QObject* object);
bool QDesignerWidgetFactoryInterface_override_virtual_event(void* self, intptr_t slot);
bool QDesignerWidgetFactoryInterface_virtualbase_event(void* self, QEvent* event);
bool QDesignerWidgetFactoryInterface_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDesignerWidgetFactoryInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDesignerWidgetFactoryInterface_override_virtual_timerEvent(void* self, intptr_t slot);
void QDesignerWidgetFactoryInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDesignerWidgetFactoryInterface_override_virtual_childEvent(void* self, intptr_t slot);
void QDesignerWidgetFactoryInterface_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDesignerWidgetFactoryInterface_override_virtual_customEvent(void* self, intptr_t slot);
void QDesignerWidgetFactoryInterface_virtualbase_customEvent(void* self, QEvent* event);
bool QDesignerWidgetFactoryInterface_override_virtual_connectNotify(void* self, intptr_t slot);
void QDesignerWidgetFactoryInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDesignerWidgetFactoryInterface_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDesignerWidgetFactoryInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QDesignerWidgetFactoryInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDesignerWidgetFactoryInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDesignerWidgetFactoryInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDesignerWidgetFactoryInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QDesignerWidgetFactoryInterface_delete(QDesignerWidgetFactoryInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
