#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_ABSTRACTMETADATABASE_H
#define MIQT_QT_DESIGNER_GEN_ABSTRACTMETADATABASE_H

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
class QDesignerMetaDataBaseInterface;
class QDesignerMetaDataBaseItemInterface;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QWidget;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerMetaDataBaseInterface QDesignerMetaDataBaseInterface;
typedef struct QDesignerMetaDataBaseItemInterface QDesignerMetaDataBaseItemInterface;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

struct miqt_string QDesignerMetaDataBaseItemInterface_name(const QDesignerMetaDataBaseItemInterface* self);
void QDesignerMetaDataBaseItemInterface_setName(QDesignerMetaDataBaseItemInterface* self, struct miqt_string name);
struct miqt_array /* of QWidget* */  QDesignerMetaDataBaseItemInterface_tabOrder(const QDesignerMetaDataBaseItemInterface* self);
void QDesignerMetaDataBaseItemInterface_setTabOrder(QDesignerMetaDataBaseItemInterface* self, struct miqt_array /* of QWidget* */  tabOrder);
bool QDesignerMetaDataBaseItemInterface_enabled(const QDesignerMetaDataBaseItemInterface* self);
void QDesignerMetaDataBaseItemInterface_setEnabled(QDesignerMetaDataBaseItemInterface* self, bool b);
void QDesignerMetaDataBaseItemInterface_operatorAssign(QDesignerMetaDataBaseItemInterface* self, QDesignerMetaDataBaseItemInterface* param1);

void QDesignerMetaDataBaseItemInterface_delete(QDesignerMetaDataBaseItemInterface* self);

QDesignerMetaDataBaseInterface* QDesignerMetaDataBaseInterface_new();
QDesignerMetaDataBaseInterface* QDesignerMetaDataBaseInterface_new2(QObject* parent);
void QDesignerMetaDataBaseInterface_virtbase(QDesignerMetaDataBaseInterface* src, QObject** outptr_QObject);
QMetaObject* QDesignerMetaDataBaseInterface_metaObject(const QDesignerMetaDataBaseInterface* self);
void* QDesignerMetaDataBaseInterface_metacast(QDesignerMetaDataBaseInterface* self, const char* param1);
struct miqt_string QDesignerMetaDataBaseInterface_tr(const char* s);
struct miqt_string QDesignerMetaDataBaseInterface_trUtf8(const char* s);
QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseInterface_item(const QDesignerMetaDataBaseInterface* self, QObject* object);
void QDesignerMetaDataBaseInterface_add(QDesignerMetaDataBaseInterface* self, QObject* object);
void QDesignerMetaDataBaseInterface_remove(QDesignerMetaDataBaseInterface* self, QObject* object);
struct miqt_array /* of QObject* */  QDesignerMetaDataBaseInterface_objects(const QDesignerMetaDataBaseInterface* self);
QDesignerFormEditorInterface* QDesignerMetaDataBaseInterface_core(const QDesignerMetaDataBaseInterface* self);
void QDesignerMetaDataBaseInterface_changed(QDesignerMetaDataBaseInterface* self);
void QDesignerMetaDataBaseInterface_connect_changed(QDesignerMetaDataBaseInterface* self, intptr_t slot);
struct miqt_string QDesignerMetaDataBaseInterface_tr2(const char* s, const char* c);
struct miqt_string QDesignerMetaDataBaseInterface_tr3(const char* s, const char* c, int n);
struct miqt_string QDesignerMetaDataBaseInterface_trUtf82(const char* s, const char* c);
struct miqt_string QDesignerMetaDataBaseInterface_trUtf83(const char* s, const char* c, int n);

bool QDesignerMetaDataBaseInterface_override_virtual_item(void* self, intptr_t slot);
QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseInterface_virtualbase_item(const void* self, QObject* object);
bool QDesignerMetaDataBaseInterface_override_virtual_add(void* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_virtualbase_add(void* self, QObject* object);
bool QDesignerMetaDataBaseInterface_override_virtual_remove(void* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_virtualbase_remove(void* self, QObject* object);
bool QDesignerMetaDataBaseInterface_override_virtual_objects(void* self, intptr_t slot);
struct miqt_array /* of QObject* */  QDesignerMetaDataBaseInterface_virtualbase_objects(const void* self);
bool QDesignerMetaDataBaseInterface_override_virtual_core(void* self, intptr_t slot);
QDesignerFormEditorInterface* QDesignerMetaDataBaseInterface_virtualbase_core(const void* self);
bool QDesignerMetaDataBaseInterface_override_virtual_event(void* self, intptr_t slot);
bool QDesignerMetaDataBaseInterface_virtualbase_event(void* self, QEvent* event);
bool QDesignerMetaDataBaseInterface_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDesignerMetaDataBaseInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDesignerMetaDataBaseInterface_override_virtual_timerEvent(void* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDesignerMetaDataBaseInterface_override_virtual_childEvent(void* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDesignerMetaDataBaseInterface_override_virtual_customEvent(void* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_virtualbase_customEvent(void* self, QEvent* event);
bool QDesignerMetaDataBaseInterface_override_virtual_connectNotify(void* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDesignerMetaDataBaseInterface_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QDesignerMetaDataBaseInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDesignerMetaDataBaseInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDesignerMetaDataBaseInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDesignerMetaDataBaseInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QDesignerMetaDataBaseInterface_delete(QDesignerMetaDataBaseInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
