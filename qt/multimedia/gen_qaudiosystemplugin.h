#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIOSYSTEMPLUGIN_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIOSYSTEMPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAudioDeviceInfo;
class QAbstractAudioInput;
class QAbstractAudioOutput;
class QAudioSystemFactoryInterface;
class QAudioSystemPlugin;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractAudioDeviceInfo QAbstractAudioDeviceInfo;
typedef struct QAbstractAudioInput QAbstractAudioInput;
typedef struct QAbstractAudioOutput QAbstractAudioOutput;
typedef struct QAudioSystemFactoryInterface QAudioSystemFactoryInterface;
typedef struct QAudioSystemPlugin QAudioSystemPlugin;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

struct miqt_array /* of struct miqt_string */  QAudioSystemFactoryInterface_availableDevices(const QAudioSystemFactoryInterface* self, int param1);
QAbstractAudioInput* QAudioSystemFactoryInterface_createInput(QAudioSystemFactoryInterface* self, struct miqt_string device);
QAbstractAudioOutput* QAudioSystemFactoryInterface_createOutput(QAudioSystemFactoryInterface* self, struct miqt_string device);
QAbstractAudioDeviceInfo* QAudioSystemFactoryInterface_createDeviceInfo(QAudioSystemFactoryInterface* self, struct miqt_string device, int mode);
void QAudioSystemFactoryInterface_operatorAssign(QAudioSystemFactoryInterface* self, QAudioSystemFactoryInterface* param1);
void QAudioSystemFactoryInterface_delete(QAudioSystemFactoryInterface* self);

QAudioSystemPlugin* QAudioSystemPlugin_new();
QAudioSystemPlugin* QAudioSystemPlugin_new2(QObject* parent);
void QAudioSystemPlugin_virtbase(QAudioSystemPlugin* src, QObject** outptr_QObject, QAudioSystemFactoryInterface** outptr_QAudioSystemFactoryInterface);
QMetaObject* QAudioSystemPlugin_metaObject(const QAudioSystemPlugin* self);
void* QAudioSystemPlugin_metacast(QAudioSystemPlugin* self, const char* param1);
struct miqt_string QAudioSystemPlugin_tr(const char* s);
struct miqt_string QAudioSystemPlugin_trUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QAudioSystemPlugin_availableDevices(const QAudioSystemPlugin* self, int param1);
QAbstractAudioInput* QAudioSystemPlugin_createInput(QAudioSystemPlugin* self, struct miqt_string device);
QAbstractAudioOutput* QAudioSystemPlugin_createOutput(QAudioSystemPlugin* self, struct miqt_string device);
QAbstractAudioDeviceInfo* QAudioSystemPlugin_createDeviceInfo(QAudioSystemPlugin* self, struct miqt_string device, int mode);
struct miqt_string QAudioSystemPlugin_tr2(const char* s, const char* c);
struct miqt_string QAudioSystemPlugin_tr3(const char* s, const char* c, int n);
struct miqt_string QAudioSystemPlugin_trUtf82(const char* s, const char* c);
struct miqt_string QAudioSystemPlugin_trUtf83(const char* s, const char* c, int n);
bool QAudioSystemPlugin_override_virtual_availableDevices(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QAudioSystemPlugin_virtualbase_availableDevices(const void* self, int param1);
bool QAudioSystemPlugin_override_virtual_createInput(void* self, intptr_t slot);
QAbstractAudioInput* QAudioSystemPlugin_virtualbase_createInput(void* self, struct miqt_string device);
bool QAudioSystemPlugin_override_virtual_createOutput(void* self, intptr_t slot);
QAbstractAudioOutput* QAudioSystemPlugin_virtualbase_createOutput(void* self, struct miqt_string device);
bool QAudioSystemPlugin_override_virtual_createDeviceInfo(void* self, intptr_t slot);
QAbstractAudioDeviceInfo* QAudioSystemPlugin_virtualbase_createDeviceInfo(void* self, struct miqt_string device, int mode);
bool QAudioSystemPlugin_override_virtual_event(void* self, intptr_t slot);
bool QAudioSystemPlugin_virtualbase_event(void* self, QEvent* event);
bool QAudioSystemPlugin_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAudioSystemPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioSystemPlugin_override_virtual_timerEvent(void* self, intptr_t slot);
void QAudioSystemPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAudioSystemPlugin_override_virtual_childEvent(void* self, intptr_t slot);
void QAudioSystemPlugin_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAudioSystemPlugin_override_virtual_customEvent(void* self, intptr_t slot);
void QAudioSystemPlugin_virtualbase_customEvent(void* self, QEvent* event);
bool QAudioSystemPlugin_override_virtual_connectNotify(void* self, intptr_t slot);
void QAudioSystemPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAudioSystemPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAudioSystemPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QAudioSystemPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAudioSystemPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAudioSystemPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAudioSystemPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QAudioSystemPlugin_delete(QAudioSystemPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
