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
class QByteArray;
class QMetaObject;
class QObject;
#else
typedef struct QAbstractAudioDeviceInfo QAbstractAudioDeviceInfo;
typedef struct QAbstractAudioInput QAbstractAudioInput;
typedef struct QAbstractAudioOutput QAbstractAudioOutput;
typedef struct QAudioSystemFactoryInterface QAudioSystemFactoryInterface;
typedef struct QAudioSystemPlugin QAudioSystemPlugin;
typedef struct QByteArray QByteArray;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

struct miqt_array /* of struct miqt_string */  QAudioSystemFactoryInterface_AvailableDevices(const QAudioSystemFactoryInterface* self, int param1);
QAbstractAudioInput* QAudioSystemFactoryInterface_CreateInput(QAudioSystemFactoryInterface* self, struct miqt_string device);
QAbstractAudioOutput* QAudioSystemFactoryInterface_CreateOutput(QAudioSystemFactoryInterface* self, struct miqt_string device);
QAbstractAudioDeviceInfo* QAudioSystemFactoryInterface_CreateDeviceInfo(QAudioSystemFactoryInterface* self, struct miqt_string device, int mode);
void QAudioSystemFactoryInterface_OperatorAssign(QAudioSystemFactoryInterface* self, QAudioSystemFactoryInterface* param1);
void QAudioSystemFactoryInterface_Delete(QAudioSystemFactoryInterface* self, bool isSubclass);

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
void QAudioSystemPlugin_Delete(QAudioSystemPlugin* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
