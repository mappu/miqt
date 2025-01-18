#pragma once
#ifndef MIQT_QT_GEN_QPICTUREFORMATPLUGIN_H
#define MIQT_QT_GEN_QPICTUREFORMATPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPicture;
class QPictureFormatPlugin;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPicture QPicture;
typedef struct QPictureFormatPlugin QPictureFormatPlugin;
typedef struct QTimerEvent QTimerEvent;
#endif

QPictureFormatPlugin* QPictureFormatPlugin_new();
QPictureFormatPlugin* QPictureFormatPlugin_new2(QObject* parent);
void QPictureFormatPlugin_virtbase(QPictureFormatPlugin* src, QObject** outptr_QObject);
QMetaObject* QPictureFormatPlugin_MetaObject(const QPictureFormatPlugin* self);
void* QPictureFormatPlugin_Metacast(QPictureFormatPlugin* self, const char* param1);
struct miqt_string QPictureFormatPlugin_Tr(const char* s);
struct miqt_string QPictureFormatPlugin_TrUtf8(const char* s);
bool QPictureFormatPlugin_LoadPicture(QPictureFormatPlugin* self, struct miqt_string format, struct miqt_string filename, QPicture* pic);
bool QPictureFormatPlugin_SavePicture(QPictureFormatPlugin* self, struct miqt_string format, struct miqt_string filename, QPicture* pic);
bool QPictureFormatPlugin_InstallIOHandler(QPictureFormatPlugin* self, struct miqt_string format);
struct miqt_string QPictureFormatPlugin_Tr2(const char* s, const char* c);
struct miqt_string QPictureFormatPlugin_Tr3(const char* s, const char* c, int n);
struct miqt_string QPictureFormatPlugin_TrUtf82(const char* s, const char* c);
struct miqt_string QPictureFormatPlugin_TrUtf83(const char* s, const char* c, int n);
void QPictureFormatPlugin_override_virtual_LoadPicture(void* self, intptr_t slot);
bool QPictureFormatPlugin_virtualbase_LoadPicture(void* self, struct miqt_string format, struct miqt_string filename, QPicture* pic);
void QPictureFormatPlugin_override_virtual_SavePicture(void* self, intptr_t slot);
bool QPictureFormatPlugin_virtualbase_SavePicture(void* self, struct miqt_string format, struct miqt_string filename, QPicture* pic);
void QPictureFormatPlugin_override_virtual_InstallIOHandler(void* self, intptr_t slot);
bool QPictureFormatPlugin_virtualbase_InstallIOHandler(void* self, struct miqt_string format);
void QPictureFormatPlugin_override_virtual_Event(void* self, intptr_t slot);
bool QPictureFormatPlugin_virtualbase_Event(void* self, QEvent* event);
void QPictureFormatPlugin_override_virtual_EventFilter(void* self, intptr_t slot);
bool QPictureFormatPlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QPictureFormatPlugin_override_virtual_TimerEvent(void* self, intptr_t slot);
void QPictureFormatPlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QPictureFormatPlugin_override_virtual_ChildEvent(void* self, intptr_t slot);
void QPictureFormatPlugin_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QPictureFormatPlugin_override_virtual_CustomEvent(void* self, intptr_t slot);
void QPictureFormatPlugin_virtualbase_CustomEvent(void* self, QEvent* event);
void QPictureFormatPlugin_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QPictureFormatPlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QPictureFormatPlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QPictureFormatPlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QPictureFormatPlugin_Delete(QPictureFormatPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
