#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_ABSTRACTWIDGETDATABASE_H
#define MIQT_QT_DESIGNER_GEN_ABSTRACTWIDGETDATABASE_H

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
void QDesignerWidgetDataBaseItemInterface_operatorAssign(QDesignerWidgetDataBaseItemInterface* self, QDesignerWidgetDataBaseItemInterface* param1);

void QDesignerWidgetDataBaseItemInterface_delete(QDesignerWidgetDataBaseItemInterface* self);

QDesignerWidgetDataBaseInterface* QDesignerWidgetDataBaseInterface_new();
QDesignerWidgetDataBaseInterface* QDesignerWidgetDataBaseInterface_new2(QObject* parent);
void QDesignerWidgetDataBaseInterface_virtbase(QDesignerWidgetDataBaseInterface* src, QObject** outptr_QObject);
QMetaObject* QDesignerWidgetDataBaseInterface_metaObject(const QDesignerWidgetDataBaseInterface* self);
void* QDesignerWidgetDataBaseInterface_metacast(QDesignerWidgetDataBaseInterface* self, const char* param1);
struct miqt_string QDesignerWidgetDataBaseInterface_tr(const char* s);
struct miqt_string QDesignerWidgetDataBaseInterface_trUtf8(const char* s);
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
struct miqt_string QDesignerWidgetDataBaseInterface_trUtf82(const char* s, const char* c);
struct miqt_string QDesignerWidgetDataBaseInterface_trUtf83(const char* s, const char* c, int n);
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
