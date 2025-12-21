#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_ABSTRACTWIDGETDATABASE_H
#define MIQT_QT6_DESIGNER_GEN_ABSTRACTWIDGETDATABASE_H

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
class QDesignerWidgetDataBaseInterface;
class QDesignerWidgetDataBaseItemInterface;
class QEvent;
class QIcon;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerWidgetDataBaseInterface QDesignerWidgetDataBaseInterface;
typedef struct QDesignerWidgetDataBaseItemInterface QDesignerWidgetDataBaseItemInterface;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseItemInterface_new();
struct miqt_string QDesignerWidgetDataBaseItemInterface_name(const QDesignerWidgetDataBaseItemInterface* self);
void QDesignerWidgetDataBaseItemInterface_setName(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string name);
struct miqt_string QDesignerWidgetDataBaseItemInterface_group(const QDesignerWidgetDataBaseItemInterface* self);
void QDesignerWidgetDataBaseItemInterface_setGroup(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string group);
struct miqt_string QDesignerWidgetDataBaseItemInterface_toolTip(const QDesignerWidgetDataBaseItemInterface* self);
void QDesignerWidgetDataBaseItemInterface_setToolTip(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string toolTip);
struct miqt_string QDesignerWidgetDataBaseItemInterface_whatsThis(const QDesignerWidgetDataBaseItemInterface* self);
void QDesignerWidgetDataBaseItemInterface_setWhatsThis(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string whatsThis);
struct miqt_string QDesignerWidgetDataBaseItemInterface_includeFile(const QDesignerWidgetDataBaseItemInterface* self);
void QDesignerWidgetDataBaseItemInterface_setIncludeFile(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string includeFile);
QIcon* QDesignerWidgetDataBaseItemInterface_icon(const QDesignerWidgetDataBaseItemInterface* self);
void QDesignerWidgetDataBaseItemInterface_setIcon(QDesignerWidgetDataBaseItemInterface* self, QIcon* icon);
bool QDesignerWidgetDataBaseItemInterface_isCompat(const QDesignerWidgetDataBaseItemInterface* self);
void QDesignerWidgetDataBaseItemInterface_setCompat(QDesignerWidgetDataBaseItemInterface* self, bool compat);
bool QDesignerWidgetDataBaseItemInterface_isContainer(const QDesignerWidgetDataBaseItemInterface* self);
void QDesignerWidgetDataBaseItemInterface_setContainer(QDesignerWidgetDataBaseItemInterface* self, bool container);
bool QDesignerWidgetDataBaseItemInterface_isCustom(const QDesignerWidgetDataBaseItemInterface* self);
void QDesignerWidgetDataBaseItemInterface_setCustom(QDesignerWidgetDataBaseItemInterface* self, bool custom);
struct miqt_string QDesignerWidgetDataBaseItemInterface_pluginPath(const QDesignerWidgetDataBaseItemInterface* self);
void QDesignerWidgetDataBaseItemInterface_setPluginPath(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string path);
bool QDesignerWidgetDataBaseItemInterface_isPromoted(const QDesignerWidgetDataBaseItemInterface* self);
void QDesignerWidgetDataBaseItemInterface_setPromoted(QDesignerWidgetDataBaseItemInterface* self, bool b);
struct miqt_string QDesignerWidgetDataBaseItemInterface_extends(const QDesignerWidgetDataBaseItemInterface* self);
void QDesignerWidgetDataBaseItemInterface_setExtends(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string s);
void QDesignerWidgetDataBaseItemInterface_setDefaultPropertyValues(QDesignerWidgetDataBaseItemInterface* self, struct miqt_array /* of QVariant* */  list);
struct miqt_array /* of QVariant* */  QDesignerWidgetDataBaseItemInterface_defaultPropertyValues(const QDesignerWidgetDataBaseItemInterface* self);

bool QDesignerWidgetDataBaseItemInterface_override_virtual_name(void* self, intptr_t slot);
struct miqt_string QDesignerWidgetDataBaseItemInterface_virtualbase_name(const void* self);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_setName(void* self, intptr_t slot);
void QDesignerWidgetDataBaseItemInterface_virtualbase_setName(void* self, struct miqt_string name);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_group(void* self, intptr_t slot);
struct miqt_string QDesignerWidgetDataBaseItemInterface_virtualbase_group(const void* self);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_setGroup(void* self, intptr_t slot);
void QDesignerWidgetDataBaseItemInterface_virtualbase_setGroup(void* self, struct miqt_string group);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_toolTip(void* self, intptr_t slot);
struct miqt_string QDesignerWidgetDataBaseItemInterface_virtualbase_toolTip(const void* self);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_setToolTip(void* self, intptr_t slot);
void QDesignerWidgetDataBaseItemInterface_virtualbase_setToolTip(void* self, struct miqt_string toolTip);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_whatsThis(void* self, intptr_t slot);
struct miqt_string QDesignerWidgetDataBaseItemInterface_virtualbase_whatsThis(const void* self);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_setWhatsThis(void* self, intptr_t slot);
void QDesignerWidgetDataBaseItemInterface_virtualbase_setWhatsThis(void* self, struct miqt_string whatsThis);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_includeFile(void* self, intptr_t slot);
struct miqt_string QDesignerWidgetDataBaseItemInterface_virtualbase_includeFile(const void* self);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_setIncludeFile(void* self, intptr_t slot);
void QDesignerWidgetDataBaseItemInterface_virtualbase_setIncludeFile(void* self, struct miqt_string includeFile);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_icon(void* self, intptr_t slot);
QIcon* QDesignerWidgetDataBaseItemInterface_virtualbase_icon(const void* self);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_setIcon(void* self, intptr_t slot);
void QDesignerWidgetDataBaseItemInterface_virtualbase_setIcon(void* self, QIcon* icon);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_isCompat(void* self, intptr_t slot);
bool QDesignerWidgetDataBaseItemInterface_virtualbase_isCompat(const void* self);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_setCompat(void* self, intptr_t slot);
void QDesignerWidgetDataBaseItemInterface_virtualbase_setCompat(void* self, bool compat);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_isContainer(void* self, intptr_t slot);
bool QDesignerWidgetDataBaseItemInterface_virtualbase_isContainer(const void* self);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_setContainer(void* self, intptr_t slot);
void QDesignerWidgetDataBaseItemInterface_virtualbase_setContainer(void* self, bool container);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_isCustom(void* self, intptr_t slot);
bool QDesignerWidgetDataBaseItemInterface_virtualbase_isCustom(const void* self);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_setCustom(void* self, intptr_t slot);
void QDesignerWidgetDataBaseItemInterface_virtualbase_setCustom(void* self, bool custom);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_pluginPath(void* self, intptr_t slot);
struct miqt_string QDesignerWidgetDataBaseItemInterface_virtualbase_pluginPath(const void* self);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_setPluginPath(void* self, intptr_t slot);
void QDesignerWidgetDataBaseItemInterface_virtualbase_setPluginPath(void* self, struct miqt_string path);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_isPromoted(void* self, intptr_t slot);
bool QDesignerWidgetDataBaseItemInterface_virtualbase_isPromoted(const void* self);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_setPromoted(void* self, intptr_t slot);
void QDesignerWidgetDataBaseItemInterface_virtualbase_setPromoted(void* self, bool b);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_extends(void* self, intptr_t slot);
struct miqt_string QDesignerWidgetDataBaseItemInterface_virtualbase_extends(const void* self);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_setExtends(void* self, intptr_t slot);
void QDesignerWidgetDataBaseItemInterface_virtualbase_setExtends(void* self, struct miqt_string s);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_setDefaultPropertyValues(void* self, intptr_t slot);
void QDesignerWidgetDataBaseItemInterface_virtualbase_setDefaultPropertyValues(void* self, struct miqt_array /* of QVariant* */  list);
bool QDesignerWidgetDataBaseItemInterface_override_virtual_defaultPropertyValues(void* self, intptr_t slot);
struct miqt_array /* of QVariant* */  QDesignerWidgetDataBaseItemInterface_virtualbase_defaultPropertyValues(const void* self);

void QDesignerWidgetDataBaseItemInterface_delete(QDesignerWidgetDataBaseItemInterface* self);

QDesignerWidgetDataBaseInterface* QDesignerWidgetDataBaseInterface_new();
QDesignerWidgetDataBaseInterface* QDesignerWidgetDataBaseInterface_new2(QObject* parent);
void QDesignerWidgetDataBaseInterface_virtbase(QDesignerWidgetDataBaseInterface* src, QObject** outptr_QObject);
QMetaObject* QDesignerWidgetDataBaseInterface_metaObject(const QDesignerWidgetDataBaseInterface* self);
void* QDesignerWidgetDataBaseInterface_metacast(QDesignerWidgetDataBaseInterface* self, const char* param1);
struct miqt_string QDesignerWidgetDataBaseInterface_tr(const char* s);
int QDesignerWidgetDataBaseInterface_count(const QDesignerWidgetDataBaseInterface* self);
QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseInterface_item(const QDesignerWidgetDataBaseInterface* self, int index);
int QDesignerWidgetDataBaseInterface_indexOf(const QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item);
void QDesignerWidgetDataBaseInterface_insert(QDesignerWidgetDataBaseInterface* self, int index, QDesignerWidgetDataBaseItemInterface* item);
void QDesignerWidgetDataBaseInterface_append(QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item);
int QDesignerWidgetDataBaseInterface_indexOfObject(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName);
int QDesignerWidgetDataBaseInterface_indexOfClassName(const QDesignerWidgetDataBaseInterface* self, struct miqt_string className, bool resolveName);
QDesignerFormEditorInterface* QDesignerWidgetDataBaseInterface_core(const QDesignerWidgetDataBaseInterface* self);
bool QDesignerWidgetDataBaseInterface_isContainer(const QDesignerWidgetDataBaseInterface* self, QObject* object);
bool QDesignerWidgetDataBaseInterface_isCustom(const QDesignerWidgetDataBaseInterface* self, QObject* object);
void QDesignerWidgetDataBaseInterface_changed(QDesignerWidgetDataBaseInterface* self);
void QDesignerWidgetDataBaseInterface_connect_changed(QDesignerWidgetDataBaseInterface* self, intptr_t slot);
struct miqt_string QDesignerWidgetDataBaseInterface_tr2(const char* s, const char* c);
struct miqt_string QDesignerWidgetDataBaseInterface_tr3(const char* s, const char* c, int n);
bool QDesignerWidgetDataBaseInterface_isContainer2(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName);
bool QDesignerWidgetDataBaseInterface_isCustom2(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName);

bool QDesignerWidgetDataBaseInterface_override_virtual_count(void* self, intptr_t slot);
int QDesignerWidgetDataBaseInterface_virtualbase_count(const void* self);
bool QDesignerWidgetDataBaseInterface_override_virtual_item(void* self, intptr_t slot);
QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseInterface_virtualbase_item(const void* self, int index);
bool QDesignerWidgetDataBaseInterface_override_virtual_indexOf(void* self, intptr_t slot);
int QDesignerWidgetDataBaseInterface_virtualbase_indexOf(const void* self, QDesignerWidgetDataBaseItemInterface* item);
bool QDesignerWidgetDataBaseInterface_override_virtual_insert(void* self, intptr_t slot);
void QDesignerWidgetDataBaseInterface_virtualbase_insert(void* self, int index, QDesignerWidgetDataBaseItemInterface* item);
bool QDesignerWidgetDataBaseInterface_override_virtual_append(void* self, intptr_t slot);
void QDesignerWidgetDataBaseInterface_virtualbase_append(void* self, QDesignerWidgetDataBaseItemInterface* item);
bool QDesignerWidgetDataBaseInterface_override_virtual_indexOfObject(void* self, intptr_t slot);
int QDesignerWidgetDataBaseInterface_virtualbase_indexOfObject(const void* self, QObject* object, bool resolveName);
bool QDesignerWidgetDataBaseInterface_override_virtual_indexOfClassName(void* self, intptr_t slot);
int QDesignerWidgetDataBaseInterface_virtualbase_indexOfClassName(const void* self, struct miqt_string className, bool resolveName);
bool QDesignerWidgetDataBaseInterface_override_virtual_core(void* self, intptr_t slot);
QDesignerFormEditorInterface* QDesignerWidgetDataBaseInterface_virtualbase_core(const void* self);
bool QDesignerWidgetDataBaseInterface_override_virtual_event(void* self, intptr_t slot);
bool QDesignerWidgetDataBaseInterface_virtualbase_event(void* self, QEvent* event);
bool QDesignerWidgetDataBaseInterface_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDesignerWidgetDataBaseInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDesignerWidgetDataBaseInterface_override_virtual_timerEvent(void* self, intptr_t slot);
void QDesignerWidgetDataBaseInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDesignerWidgetDataBaseInterface_override_virtual_childEvent(void* self, intptr_t slot);
void QDesignerWidgetDataBaseInterface_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDesignerWidgetDataBaseInterface_override_virtual_customEvent(void* self, intptr_t slot);
void QDesignerWidgetDataBaseInterface_virtualbase_customEvent(void* self, QEvent* event);
bool QDesignerWidgetDataBaseInterface_override_virtual_connectNotify(void* self, intptr_t slot);
void QDesignerWidgetDataBaseInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDesignerWidgetDataBaseInterface_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDesignerWidgetDataBaseInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QDesignerWidgetDataBaseInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDesignerWidgetDataBaseInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDesignerWidgetDataBaseInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDesignerWidgetDataBaseInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QDesignerWidgetDataBaseInterface_delete(QDesignerWidgetDataBaseInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
