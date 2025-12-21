#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_ABSTRACTINTEGRATION_H
#define MIQT_QT6_DESIGNER_GEN_ABSTRACTINTEGRATION_H

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
class QDesignerFormWindowInterface;
class QDesignerIntegration;
class QDesignerIntegrationInterface;
class QDesignerResourceBrowserInterface;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVariant;
class QWidget;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerFormWindowInterface QDesignerFormWindowInterface;
typedef struct QDesignerIntegration QDesignerIntegration;
typedef struct QDesignerIntegrationInterface QDesignerIntegrationInterface;
typedef struct QDesignerResourceBrowserInterface QDesignerResourceBrowserInterface;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QDesignerIntegrationInterface* QDesignerIntegrationInterface_new(QDesignerFormEditorInterface* core);
QDesignerIntegrationInterface* QDesignerIntegrationInterface_new2(QDesignerFormEditorInterface* core, QObject* parent);
void QDesignerIntegrationInterface_virtbase(QDesignerIntegrationInterface* src, QObject** outptr_QObject);
QMetaObject* QDesignerIntegrationInterface_metaObject(const QDesignerIntegrationInterface* self);
void* QDesignerIntegrationInterface_metacast(QDesignerIntegrationInterface* self, const char* param1);
struct miqt_string QDesignerIntegrationInterface_tr(const char* s);
QDesignerFormEditorInterface* QDesignerIntegrationInterface_core(const QDesignerIntegrationInterface* self);
QWidget* QDesignerIntegrationInterface_containerWindow(const QDesignerIntegrationInterface* self, QWidget* widget);
QDesignerResourceBrowserInterface* QDesignerIntegrationInterface_createResourceBrowser(QDesignerIntegrationInterface* self, QWidget* parent);
struct miqt_string QDesignerIntegrationInterface_headerSuffix(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_setHeaderSuffix(QDesignerIntegrationInterface* self, struct miqt_string headerSuffix);
bool QDesignerIntegrationInterface_isHeaderLowercase(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_setHeaderLowercase(QDesignerIntegrationInterface* self, bool headerLowerCase);
int QDesignerIntegrationInterface_features(const QDesignerIntegrationInterface* self);
bool QDesignerIntegrationInterface_hasFeature(const QDesignerIntegrationInterface* self, int f);
int QDesignerIntegrationInterface_resourceFileWatcherBehaviour(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_setResourceFileWatcherBehaviour(QDesignerIntegrationInterface* self, int behaviour);
struct miqt_string QDesignerIntegrationInterface_contextHelpId(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_emitObjectNameChanged(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow, QObject* object, struct miqt_string newName, struct miqt_string oldName);
void QDesignerIntegrationInterface_emitNavigateToSlot(QDesignerIntegrationInterface* self, struct miqt_string objectName, struct miqt_string signalSignature, struct miqt_array /* of struct miqt_string */  parameterNames);
void QDesignerIntegrationInterface_emitNavigateToSlotWithSlotSignature(QDesignerIntegrationInterface* self, struct miqt_string slotSignature);
void QDesignerIntegrationInterface_emitHelpRequested(QDesignerIntegrationInterface* self, struct miqt_string manual, struct miqt_string document);
void QDesignerIntegrationInterface_propertyChanged(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow, struct miqt_string name, QVariant* value);
void QDesignerIntegrationInterface_connect_propertyChanged(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_objectNameChanged(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow, QObject* object, struct miqt_string newName, struct miqt_string oldName);
void QDesignerIntegrationInterface_connect_objectNameChanged(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_helpRequested(QDesignerIntegrationInterface* self, struct miqt_string manual, struct miqt_string document);
void QDesignerIntegrationInterface_connect_helpRequested(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_navigateToSlot(QDesignerIntegrationInterface* self, struct miqt_string objectName, struct miqt_string signalSignature, struct miqt_array /* of struct miqt_string */  parameterNames);
void QDesignerIntegrationInterface_connect_navigateToSlot(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_navigateToSlotWithSlotSignature(QDesignerIntegrationInterface* self, struct miqt_string slotSignature);
void QDesignerIntegrationInterface_connect_navigateToSlotWithSlotSignature(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_setFeatures(QDesignerIntegrationInterface* self, int f);
void QDesignerIntegrationInterface_updateProperty(QDesignerIntegrationInterface* self, struct miqt_string name, QVariant* value, bool enableSubPropertyHandling);
void QDesignerIntegrationInterface_updateProperty2(QDesignerIntegrationInterface* self, struct miqt_string name, QVariant* value);
void QDesignerIntegrationInterface_resetProperty(QDesignerIntegrationInterface* self, struct miqt_string name);
void QDesignerIntegrationInterface_addDynamicProperty(QDesignerIntegrationInterface* self, struct miqt_string name, QVariant* value);
void QDesignerIntegrationInterface_removeDynamicProperty(QDesignerIntegrationInterface* self, struct miqt_string name);
void QDesignerIntegrationInterface_updateActiveFormWindow(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow);
void QDesignerIntegrationInterface_setupFormWindow(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow);
void QDesignerIntegrationInterface_updateSelection(QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_updateCustomWidgetPlugins(QDesignerIntegrationInterface* self);
struct miqt_string QDesignerIntegrationInterface_tr2(const char* s, const char* c);
struct miqt_string QDesignerIntegrationInterface_tr3(const char* s, const char* c, int n);

bool QDesignerIntegrationInterface_override_virtual_containerWindow(void* self, intptr_t slot);
QWidget* QDesignerIntegrationInterface_virtualbase_containerWindow(const void* self, QWidget* widget);
bool QDesignerIntegrationInterface_override_virtual_createResourceBrowser(void* self, intptr_t slot);
QDesignerResourceBrowserInterface* QDesignerIntegrationInterface_virtualbase_createResourceBrowser(void* self, QWidget* parent);
bool QDesignerIntegrationInterface_override_virtual_headerSuffix(void* self, intptr_t slot);
struct miqt_string QDesignerIntegrationInterface_virtualbase_headerSuffix(const void* self);
bool QDesignerIntegrationInterface_override_virtual_setHeaderSuffix(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_setHeaderSuffix(void* self, struct miqt_string headerSuffix);
bool QDesignerIntegrationInterface_override_virtual_isHeaderLowercase(void* self, intptr_t slot);
bool QDesignerIntegrationInterface_virtualbase_isHeaderLowercase(const void* self);
bool QDesignerIntegrationInterface_override_virtual_setHeaderLowercase(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_setHeaderLowercase(void* self, bool headerLowerCase);
bool QDesignerIntegrationInterface_override_virtual_features(void* self, intptr_t slot);
int QDesignerIntegrationInterface_virtualbase_features(const void* self);
bool QDesignerIntegrationInterface_override_virtual_resourceFileWatcherBehaviour(void* self, intptr_t slot);
int QDesignerIntegrationInterface_virtualbase_resourceFileWatcherBehaviour(const void* self);
bool QDesignerIntegrationInterface_override_virtual_setResourceFileWatcherBehaviour(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_setResourceFileWatcherBehaviour(void* self, int behaviour);
bool QDesignerIntegrationInterface_override_virtual_contextHelpId(void* self, intptr_t slot);
struct miqt_string QDesignerIntegrationInterface_virtualbase_contextHelpId(const void* self);
bool QDesignerIntegrationInterface_override_virtual_setFeatures(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_setFeatures(void* self, int f);
bool QDesignerIntegrationInterface_override_virtual_updateProperty(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_updateProperty(void* self, struct miqt_string name, QVariant* value, bool enableSubPropertyHandling);
bool QDesignerIntegrationInterface_override_virtual_updateProperty2(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_updateProperty2(void* self, struct miqt_string name, QVariant* value);
bool QDesignerIntegrationInterface_override_virtual_resetProperty(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_resetProperty(void* self, struct miqt_string name);
bool QDesignerIntegrationInterface_override_virtual_addDynamicProperty(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_addDynamicProperty(void* self, struct miqt_string name, QVariant* value);
bool QDesignerIntegrationInterface_override_virtual_removeDynamicProperty(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_removeDynamicProperty(void* self, struct miqt_string name);
bool QDesignerIntegrationInterface_override_virtual_updateActiveFormWindow(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_updateActiveFormWindow(void* self, QDesignerFormWindowInterface* formWindow);
bool QDesignerIntegrationInterface_override_virtual_setupFormWindow(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_setupFormWindow(void* self, QDesignerFormWindowInterface* formWindow);
bool QDesignerIntegrationInterface_override_virtual_updateSelection(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_updateSelection(void* self);
bool QDesignerIntegrationInterface_override_virtual_updateCustomWidgetPlugins(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_updateCustomWidgetPlugins(void* self);
bool QDesignerIntegrationInterface_override_virtual_event(void* self, intptr_t slot);
bool QDesignerIntegrationInterface_virtualbase_event(void* self, QEvent* event);
bool QDesignerIntegrationInterface_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDesignerIntegrationInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDesignerIntegrationInterface_override_virtual_timerEvent(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDesignerIntegrationInterface_override_virtual_childEvent(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDesignerIntegrationInterface_override_virtual_customEvent(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_customEvent(void* self, QEvent* event);
bool QDesignerIntegrationInterface_override_virtual_connectNotify(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDesignerIntegrationInterface_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDesignerIntegrationInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QDesignerIntegrationInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDesignerIntegrationInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDesignerIntegrationInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDesignerIntegrationInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QDesignerIntegrationInterface_delete(QDesignerIntegrationInterface* self);

QDesignerIntegration* QDesignerIntegration_new(QDesignerFormEditorInterface* core);
QDesignerIntegration* QDesignerIntegration_new2(QDesignerFormEditorInterface* core, QObject* parent);
void QDesignerIntegration_virtbase(QDesignerIntegration* src, QDesignerIntegrationInterface** outptr_QDesignerIntegrationInterface);
QMetaObject* QDesignerIntegration_metaObject(const QDesignerIntegration* self);
void* QDesignerIntegration_metacast(QDesignerIntegration* self, const char* param1);
struct miqt_string QDesignerIntegration_tr(const char* s);
struct miqt_string QDesignerIntegration_headerSuffix(const QDesignerIntegration* self);
void QDesignerIntegration_setHeaderSuffix(QDesignerIntegration* self, struct miqt_string headerSuffix);
bool QDesignerIntegration_isHeaderLowercase(const QDesignerIntegration* self);
void QDesignerIntegration_setHeaderLowercase(QDesignerIntegration* self, bool headerLowerCase);
int QDesignerIntegration_features(const QDesignerIntegration* self);
void QDesignerIntegration_setFeatures(QDesignerIntegration* self, int f);
int QDesignerIntegration_resourceFileWatcherBehaviour(const QDesignerIntegration* self);
void QDesignerIntegration_setResourceFileWatcherBehaviour(QDesignerIntegration* self, int behaviour);
QWidget* QDesignerIntegration_containerWindow(const QDesignerIntegration* self, QWidget* widget);
void QDesignerIntegration_initializePlugins(QDesignerFormEditorInterface* formEditor);
QDesignerResourceBrowserInterface* QDesignerIntegration_createResourceBrowser(QDesignerIntegration* self, QWidget* parent);
struct miqt_string QDesignerIntegration_contextHelpId(const QDesignerIntegration* self);
void QDesignerIntegration_updateProperty(QDesignerIntegration* self, struct miqt_string name, QVariant* value, bool enableSubPropertyHandling);
void QDesignerIntegration_updateProperty2(QDesignerIntegration* self, struct miqt_string name, QVariant* value);
void QDesignerIntegration_resetProperty(QDesignerIntegration* self, struct miqt_string name);
void QDesignerIntegration_addDynamicProperty(QDesignerIntegration* self, struct miqt_string name, QVariant* value);
void QDesignerIntegration_removeDynamicProperty(QDesignerIntegration* self, struct miqt_string name);
void QDesignerIntegration_updateActiveFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow);
void QDesignerIntegration_setupFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow);
void QDesignerIntegration_updateSelection(QDesignerIntegration* self);
void QDesignerIntegration_updateCustomWidgetPlugins(QDesignerIntegration* self);
struct miqt_string QDesignerIntegration_tr2(const char* s, const char* c);
struct miqt_string QDesignerIntegration_tr3(const char* s, const char* c, int n);

bool QDesignerIntegration_override_virtual_headerSuffix(void* self, intptr_t slot);
struct miqt_string QDesignerIntegration_virtualbase_headerSuffix(const void* self);
bool QDesignerIntegration_override_virtual_setHeaderSuffix(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_setHeaderSuffix(void* self, struct miqt_string headerSuffix);
bool QDesignerIntegration_override_virtual_isHeaderLowercase(void* self, intptr_t slot);
bool QDesignerIntegration_virtualbase_isHeaderLowercase(const void* self);
bool QDesignerIntegration_override_virtual_setHeaderLowercase(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_setHeaderLowercase(void* self, bool headerLowerCase);
bool QDesignerIntegration_override_virtual_features(void* self, intptr_t slot);
int QDesignerIntegration_virtualbase_features(const void* self);
bool QDesignerIntegration_override_virtual_setFeatures(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_setFeatures(void* self, int f);
bool QDesignerIntegration_override_virtual_resourceFileWatcherBehaviour(void* self, intptr_t slot);
int QDesignerIntegration_virtualbase_resourceFileWatcherBehaviour(const void* self);
bool QDesignerIntegration_override_virtual_setResourceFileWatcherBehaviour(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_setResourceFileWatcherBehaviour(void* self, int behaviour);
bool QDesignerIntegration_override_virtual_containerWindow(void* self, intptr_t slot);
QWidget* QDesignerIntegration_virtualbase_containerWindow(const void* self, QWidget* widget);
bool QDesignerIntegration_override_virtual_createResourceBrowser(void* self, intptr_t slot);
QDesignerResourceBrowserInterface* QDesignerIntegration_virtualbase_createResourceBrowser(void* self, QWidget* parent);
bool QDesignerIntegration_override_virtual_contextHelpId(void* self, intptr_t slot);
struct miqt_string QDesignerIntegration_virtualbase_contextHelpId(const void* self);
bool QDesignerIntegration_override_virtual_updateProperty(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_updateProperty(void* self, struct miqt_string name, QVariant* value, bool enableSubPropertyHandling);
bool QDesignerIntegration_override_virtual_updateProperty2(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_updateProperty2(void* self, struct miqt_string name, QVariant* value);
bool QDesignerIntegration_override_virtual_resetProperty(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_resetProperty(void* self, struct miqt_string name);
bool QDesignerIntegration_override_virtual_addDynamicProperty(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_addDynamicProperty(void* self, struct miqt_string name, QVariant* value);
bool QDesignerIntegration_override_virtual_removeDynamicProperty(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_removeDynamicProperty(void* self, struct miqt_string name);
bool QDesignerIntegration_override_virtual_updateActiveFormWindow(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_updateActiveFormWindow(void* self, QDesignerFormWindowInterface* formWindow);
bool QDesignerIntegration_override_virtual_setupFormWindow(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_setupFormWindow(void* self, QDesignerFormWindowInterface* formWindow);
bool QDesignerIntegration_override_virtual_updateSelection(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_updateSelection(void* self);
bool QDesignerIntegration_override_virtual_updateCustomWidgetPlugins(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_updateCustomWidgetPlugins(void* self);
bool QDesignerIntegration_override_virtual_event(void* self, intptr_t slot);
bool QDesignerIntegration_virtualbase_event(void* self, QEvent* event);
bool QDesignerIntegration_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDesignerIntegration_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDesignerIntegration_override_virtual_timerEvent(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDesignerIntegration_override_virtual_childEvent(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDesignerIntegration_override_virtual_customEvent(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_customEvent(void* self, QEvent* event);
bool QDesignerIntegration_override_virtual_connectNotify(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDesignerIntegration_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDesignerIntegration_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QDesignerIntegration_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDesignerIntegration_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDesignerIntegration_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDesignerIntegration_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QDesignerIntegration_delete(QDesignerIntegration* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
