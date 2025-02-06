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
QMetaObject* QPictureFormatPlugin_metaObject(const QPictureFormatPlugin* self);
void* QPictureFormatPlugin_metacast(QPictureFormatPlugin* self, const char* param1);
struct miqt_string QPictureFormatPlugin_tr(const char* s);
struct miqt_string QPictureFormatPlugin_trUtf8(const char* s);
bool QPictureFormatPlugin_loadPicture(QPictureFormatPlugin* self, struct miqt_string format, struct miqt_string filename, QPicture* pic);
bool QPictureFormatPlugin_savePicture(QPictureFormatPlugin* self, struct miqt_string format, struct miqt_string filename, QPicture* pic);
bool QPictureFormatPlugin_installIOHandler(QPictureFormatPlugin* self, struct miqt_string format);
struct miqt_string QPictureFormatPlugin_tr2(const char* s, const char* c);
struct miqt_string QPictureFormatPlugin_tr3(const char* s, const char* c, int n);
struct miqt_string QPictureFormatPlugin_trUtf82(const char* s, const char* c);
struct miqt_string QPictureFormatPlugin_trUtf83(const char* s, const char* c, int n);
bool QPictureFormatPlugin_override_virtual_loadPicture(void* self, intptr_t slot);
bool QPictureFormatPlugin_virtualbase_loadPicture(void* self, struct miqt_string format, struct miqt_string filename, QPicture* pic);
bool QPictureFormatPlugin_override_virtual_savePicture(void* self, intptr_t slot);
bool QPictureFormatPlugin_virtualbase_savePicture(void* self, struct miqt_string format, struct miqt_string filename, QPicture* pic);
bool QPictureFormatPlugin_override_virtual_installIOHandler(void* self, intptr_t slot);
bool QPictureFormatPlugin_virtualbase_installIOHandler(void* self, struct miqt_string format);
bool QPictureFormatPlugin_override_virtual_event(void* self, intptr_t slot);
bool QPictureFormatPlugin_virtualbase_event(void* self, QEvent* event);
bool QPictureFormatPlugin_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPictureFormatPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPictureFormatPlugin_override_virtual_timerEvent(void* self, intptr_t slot);
void QPictureFormatPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPictureFormatPlugin_override_virtual_childEvent(void* self, intptr_t slot);
void QPictureFormatPlugin_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPictureFormatPlugin_override_virtual_customEvent(void* self, intptr_t slot);
void QPictureFormatPlugin_virtualbase_customEvent(void* self, QEvent* event);
bool QPictureFormatPlugin_override_virtual_connectNotify(void* self, intptr_t slot);
void QPictureFormatPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPictureFormatPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPictureFormatPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QPictureFormatPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPictureFormatPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPictureFormatPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPictureFormatPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QPictureFormatPlugin_delete(QPictureFormatPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
