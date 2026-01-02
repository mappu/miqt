#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_ABSTRACTFORMEDITOR_H
#define MIQT_QT6_DESIGNER_GEN_ABSTRACTFORMEDITOR_H

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
class QDesignerActionEditorInterface;
class QDesignerFormEditorInterface;
class QDesignerFormWindowManagerInterface;
class QDesignerIntegrationInterface;
class QDesignerMetaDataBaseInterface;
class QDesignerObjectInspectorInterface;
class QDesignerOptionsPageInterface;
class QDesignerPromotionInterface;
class QDesignerPropertyEditorInterface;
class QDesignerSettingsInterface;
class QDesignerWidgetBoxInterface;
class QDesignerWidgetDataBaseInterface;
class QDesignerWidgetFactoryInterface;
class QEvent;
class QExtensionManager;
class QIcon;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QWidget;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDesignerActionEditorInterface QDesignerActionEditorInterface;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerFormWindowManagerInterface QDesignerFormWindowManagerInterface;
typedef struct QDesignerIntegrationInterface QDesignerIntegrationInterface;
typedef struct QDesignerMetaDataBaseInterface QDesignerMetaDataBaseInterface;
typedef struct QDesignerObjectInspectorInterface QDesignerObjectInspectorInterface;
typedef struct QDesignerOptionsPageInterface QDesignerOptionsPageInterface;
typedef struct QDesignerPromotionInterface QDesignerPromotionInterface;
typedef struct QDesignerPropertyEditorInterface QDesignerPropertyEditorInterface;
typedef struct QDesignerSettingsInterface QDesignerSettingsInterface;
typedef struct QDesignerWidgetBoxInterface QDesignerWidgetBoxInterface;
typedef struct QDesignerWidgetDataBaseInterface QDesignerWidgetDataBaseInterface;
typedef struct QDesignerWidgetFactoryInterface QDesignerWidgetFactoryInterface;
typedef struct QEvent QEvent;
typedef struct QExtensionManager QExtensionManager;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QDesignerFormEditorInterface* QDesignerFormEditorInterface_new();
QDesignerFormEditorInterface* QDesignerFormEditorInterface_new2(QObject* parent);
void QDesignerFormEditorInterface_virtbase(QDesignerFormEditorInterface* src, QObject** outptr_QObject);
QMetaObject* QDesignerFormEditorInterface_metaObject(const QDesignerFormEditorInterface* self);
void* QDesignerFormEditorInterface_metacast(QDesignerFormEditorInterface* self, const char* param1);
struct miqt_string QDesignerFormEditorInterface_tr(const char* s);
QExtensionManager* QDesignerFormEditorInterface_extensionManager(const QDesignerFormEditorInterface* self);
QWidget* QDesignerFormEditorInterface_topLevel(const QDesignerFormEditorInterface* self);
QDesignerWidgetBoxInterface* QDesignerFormEditorInterface_widgetBox(const QDesignerFormEditorInterface* self);
QDesignerPropertyEditorInterface* QDesignerFormEditorInterface_propertyEditor(const QDesignerFormEditorInterface* self);
QDesignerObjectInspectorInterface* QDesignerFormEditorInterface_objectInspector(const QDesignerFormEditorInterface* self);
QDesignerFormWindowManagerInterface* QDesignerFormEditorInterface_formWindowManager(const QDesignerFormEditorInterface* self);
QDesignerWidgetDataBaseInterface* QDesignerFormEditorInterface_widgetDataBase(const QDesignerFormEditorInterface* self);
QDesignerMetaDataBaseInterface* QDesignerFormEditorInterface_metaDataBase(const QDesignerFormEditorInterface* self);
QDesignerPromotionInterface* QDesignerFormEditorInterface_promotion(const QDesignerFormEditorInterface* self);
QDesignerWidgetFactoryInterface* QDesignerFormEditorInterface_widgetFactory(const QDesignerFormEditorInterface* self);
QDesignerActionEditorInterface* QDesignerFormEditorInterface_actionEditor(const QDesignerFormEditorInterface* self);
QDesignerIntegrationInterface* QDesignerFormEditorInterface_integration(const QDesignerFormEditorInterface* self);
QDesignerSettingsInterface* QDesignerFormEditorInterface_settingsManager(const QDesignerFormEditorInterface* self);
struct miqt_string QDesignerFormEditorInterface_resourceLocation(const QDesignerFormEditorInterface* self);
struct miqt_array /* of QDesignerOptionsPageInterface* */  QDesignerFormEditorInterface_optionsPages(const QDesignerFormEditorInterface* self);
void QDesignerFormEditorInterface_setTopLevel(QDesignerFormEditorInterface* self, QWidget* topLevel);
void QDesignerFormEditorInterface_setWidgetBox(QDesignerFormEditorInterface* self, QDesignerWidgetBoxInterface* widgetBox);
void QDesignerFormEditorInterface_setPropertyEditor(QDesignerFormEditorInterface* self, QDesignerPropertyEditorInterface* propertyEditor);
void QDesignerFormEditorInterface_setObjectInspector(QDesignerFormEditorInterface* self, QDesignerObjectInspectorInterface* objectInspector);
void QDesignerFormEditorInterface_setActionEditor(QDesignerFormEditorInterface* self, QDesignerActionEditorInterface* actionEditor);
void QDesignerFormEditorInterface_setIntegration(QDesignerFormEditorInterface* self, QDesignerIntegrationInterface* integration);
void QDesignerFormEditorInterface_setSettingsManager(QDesignerFormEditorInterface* self, QDesignerSettingsInterface* settingsManager);
void QDesignerFormEditorInterface_setOptionsPages(QDesignerFormEditorInterface* self, struct miqt_array /* of QDesignerOptionsPageInterface* */  optionsPages);
struct miqt_array /* of QObject* */  QDesignerFormEditorInterface_pluginInstances(const QDesignerFormEditorInterface* self);
QIcon* QDesignerFormEditorInterface_createIcon(struct miqt_string name);
struct miqt_string QDesignerFormEditorInterface_tr2(const char* s, const char* c);
struct miqt_string QDesignerFormEditorInterface_tr3(const char* s, const char* c, int n);

bool QDesignerFormEditorInterface_override_virtual_event(void* self, intptr_t slot);
bool QDesignerFormEditorInterface_virtualbase_event(void* self, QEvent* event);
bool QDesignerFormEditorInterface_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDesignerFormEditorInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDesignerFormEditorInterface_override_virtual_timerEvent(void* self, intptr_t slot);
void QDesignerFormEditorInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDesignerFormEditorInterface_override_virtual_childEvent(void* self, intptr_t slot);
void QDesignerFormEditorInterface_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDesignerFormEditorInterface_override_virtual_customEvent(void* self, intptr_t slot);
void QDesignerFormEditorInterface_virtualbase_customEvent(void* self, QEvent* event);
bool QDesignerFormEditorInterface_override_virtual_connectNotify(void* self, intptr_t slot);
void QDesignerFormEditorInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDesignerFormEditorInterface_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDesignerFormEditorInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QDesignerFormEditorInterface_protectedbase_setFormManager(bool* _dynamic_cast_ok, void* self, QDesignerFormWindowManagerInterface* formWindowManager);
void QDesignerFormEditorInterface_protectedbase_setMetaDataBase(bool* _dynamic_cast_ok, void* self, QDesignerMetaDataBaseInterface* metaDataBase);
void QDesignerFormEditorInterface_protectedbase_setWidgetDataBase(bool* _dynamic_cast_ok, void* self, QDesignerWidgetDataBaseInterface* widgetDataBase);
void QDesignerFormEditorInterface_protectedbase_setPromotion(bool* _dynamic_cast_ok, void* self, QDesignerPromotionInterface* promotion);
void QDesignerFormEditorInterface_protectedbase_setWidgetFactory(bool* _dynamic_cast_ok, void* self, QDesignerWidgetFactoryInterface* widgetFactory);
void QDesignerFormEditorInterface_protectedbase_setExtensionManager(bool* _dynamic_cast_ok, void* self, QExtensionManager* extensionManager);
QObject* QDesignerFormEditorInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDesignerFormEditorInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDesignerFormEditorInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDesignerFormEditorInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QDesignerFormEditorInterface_delete(QDesignerFormEditorInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
