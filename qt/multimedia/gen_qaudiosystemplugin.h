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

struct miqt_array /* of struct miqt_string */  QAudioSystemFactoryInterface_AvailableDevices(const QAudioSystemFactoryInterface* self, int param1);
QAbstractAudioInput* QAudioSystemFactoryInterface_CreateInput(QAudioSystemFactoryInterface* self, struct miqt_string device);
QAbstractAudioOutput* QAudioSystemFactoryInterface_CreateOutput(QAudioSystemFactoryInterface* self, struct miqt_string device);
QAbstractAudioDeviceInfo* QAudioSystemFactoryInterface_CreateDeviceInfo(QAudioSystemFactoryInterface* self, struct miqt_string device, int mode);
void QAudioSystemFactoryInterface_OperatorAssign(QAudioSystemFactoryInterface* self, QAudioSystemFactoryInterface* param1);
void QAudioSystemFactoryInterface_Delete(QAudioSystemFactoryInterface* self, bool isSubclass);

QAudioSystemPlugin* QAudioSystemPlugin_new();
QAudioSystemPlugin* QAudioSystemPlugin_new2(QObject* parent);
void QAudioSystemPlugin_virtbase(QAudioSystemPlugin* src, QObject** outptr_QObject, QAudioSystemFactoryInterface** outptr_QAudioSystemFactoryInterface);
QMetaObject* QAudioSystemPlugin_MetaObject(const QAudioSystemPlugin* self);
void* QAudioSystemPlugin_Metacast(QAudioSystemPlugin* self, const char* param1);
struct miqt_string QAudioSystemPlugin_Tr(const char* s);
struct miqt_string QAudioSystemPlugin_TrUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QAudioSystemPlugin_AvailableDevices(const QAudioSystemPlugin* self, int param1);
QAbstractAudioInput* QAudioSystemPlugin_CreateInput(QAudioSystemPlugin* self, struct miqt_string device);
QAbstractAudioOutput* QAudioSystemPlugin_CreateOutput(QAudioSystemPlugin* self, struct miqt_string device);
QAbstractAudioDeviceInfo* QAudioSystemPlugin_CreateDeviceInfo(QAudioSystemPlugin* self, struct miqt_string device, int mode);
struct miqt_string QAudioSystemPlugin_Tr2(const char* s, const char* c);
struct miqt_string QAudioSystemPlugin_Tr3(const char* s, const char* c, int n);
struct miqt_string QAudioSystemPlugin_TrUtf82(const char* s, const char* c);
struct miqt_string QAudioSystemPlugin_TrUtf83(const char* s, const char* c, int n);
void QAudioSystemPlugin_override_virtual_AvailableDevices(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QAudioSystemPlugin_virtualbase_AvailableDevices(const void* self, int param1);
void QAudioSystemPlugin_override_virtual_CreateInput(void* self, intptr_t slot);
QAbstractAudioInput* QAudioSystemPlugin_virtualbase_CreateInput(void* self, struct miqt_string device);
void QAudioSystemPlugin_override_virtual_CreateOutput(void* self, intptr_t slot);
QAbstractAudioOutput* QAudioSystemPlugin_virtualbase_CreateOutput(void* self, struct miqt_string device);
void QAudioSystemPlugin_override_virtual_CreateDeviceInfo(void* self, intptr_t slot);
QAbstractAudioDeviceInfo* QAudioSystemPlugin_virtualbase_CreateDeviceInfo(void* self, struct miqt_string device, int mode);
void QAudioSystemPlugin_override_virtual_Event(void* self, intptr_t slot);
bool QAudioSystemPlugin_virtualbase_Event(void* self, QEvent* event);
void QAudioSystemPlugin_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAudioSystemPlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAudioSystemPlugin_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAudioSystemPlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAudioSystemPlugin_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAudioSystemPlugin_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAudioSystemPlugin_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAudioSystemPlugin_virtualbase_CustomEvent(void* self, QEvent* event);
void QAudioSystemPlugin_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAudioSystemPlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAudioSystemPlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAudioSystemPlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAudioSystemPlugin_Delete(QAudioSystemPlugin* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
