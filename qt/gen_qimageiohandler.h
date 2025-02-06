#pragma once
#ifndef MIQT_QT_GEN_QIMAGEIOHANDLER_H
#define MIQT_QT_GEN_QIMAGEIOHANDLER_H

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
class QIODevice;
class QImage;
class QImageIOHandler;
class QImageIOPlugin;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRect;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QImageIOHandler QImageIOHandler;
typedef struct QImageIOPlugin QImageIOPlugin;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QImageIOHandler* QImageIOHandler_new();
void QImageIOHandler_setDevice(QImageIOHandler* self, QIODevice* device);
QIODevice* QImageIOHandler_device(const QImageIOHandler* self);
void QImageIOHandler_setFormat(QImageIOHandler* self, struct miqt_string format);
void QImageIOHandler_setFormatWithFormat(const QImageIOHandler* self, struct miqt_string format);
struct miqt_string QImageIOHandler_format(const QImageIOHandler* self);
struct miqt_string QImageIOHandler_name(const QImageIOHandler* self);
bool QImageIOHandler_canRead(const QImageIOHandler* self);
bool QImageIOHandler_read(QImageIOHandler* self, QImage* image);
bool QImageIOHandler_write(QImageIOHandler* self, QImage* image);
QVariant* QImageIOHandler_option(const QImageIOHandler* self, int option);
void QImageIOHandler_setOption(QImageIOHandler* self, int option, QVariant* value);
bool QImageIOHandler_supportsOption(const QImageIOHandler* self, int option);
bool QImageIOHandler_jumpToNextImage(QImageIOHandler* self);
bool QImageIOHandler_jumpToImage(QImageIOHandler* self, int imageNumber);
int QImageIOHandler_loopCount(const QImageIOHandler* self);
int QImageIOHandler_imageCount(const QImageIOHandler* self);
int QImageIOHandler_nextImageDelay(const QImageIOHandler* self);
int QImageIOHandler_currentImageNumber(const QImageIOHandler* self);
QRect* QImageIOHandler_currentImageRect(const QImageIOHandler* self);
bool QImageIOHandler_override_virtual_name(void* self, intptr_t slot);
struct miqt_string QImageIOHandler_virtualbase_name(const void* self);
bool QImageIOHandler_override_virtual_canRead(void* self, intptr_t slot);
bool QImageIOHandler_virtualbase_canRead(const void* self);
bool QImageIOHandler_override_virtual_read(void* self, intptr_t slot);
bool QImageIOHandler_virtualbase_read(void* self, QImage* image);
bool QImageIOHandler_override_virtual_write(void* self, intptr_t slot);
bool QImageIOHandler_virtualbase_write(void* self, QImage* image);
bool QImageIOHandler_override_virtual_option(void* self, intptr_t slot);
QVariant* QImageIOHandler_virtualbase_option(const void* self, int option);
bool QImageIOHandler_override_virtual_setOption(void* self, intptr_t slot);
void QImageIOHandler_virtualbase_setOption(void* self, int option, QVariant* value);
bool QImageIOHandler_override_virtual_supportsOption(void* self, intptr_t slot);
bool QImageIOHandler_virtualbase_supportsOption(const void* self, int option);
bool QImageIOHandler_override_virtual_jumpToNextImage(void* self, intptr_t slot);
bool QImageIOHandler_virtualbase_jumpToNextImage(void* self);
bool QImageIOHandler_override_virtual_jumpToImage(void* self, intptr_t slot);
bool QImageIOHandler_virtualbase_jumpToImage(void* self, int imageNumber);
bool QImageIOHandler_override_virtual_loopCount(void* self, intptr_t slot);
int QImageIOHandler_virtualbase_loopCount(const void* self);
bool QImageIOHandler_override_virtual_imageCount(void* self, intptr_t slot);
int QImageIOHandler_virtualbase_imageCount(const void* self);
bool QImageIOHandler_override_virtual_nextImageDelay(void* self, intptr_t slot);
int QImageIOHandler_virtualbase_nextImageDelay(const void* self);
bool QImageIOHandler_override_virtual_currentImageNumber(void* self, intptr_t slot);
int QImageIOHandler_virtualbase_currentImageNumber(const void* self);
bool QImageIOHandler_override_virtual_currentImageRect(void* self, intptr_t slot);
QRect* QImageIOHandler_virtualbase_currentImageRect(const void* self);
void QImageIOHandler_delete(QImageIOHandler* self);

QImageIOPlugin* QImageIOPlugin_new();
QImageIOPlugin* QImageIOPlugin_new2(QObject* parent);
void QImageIOPlugin_virtbase(QImageIOPlugin* src, QObject** outptr_QObject);
QMetaObject* QImageIOPlugin_metaObject(const QImageIOPlugin* self);
void* QImageIOPlugin_metacast(QImageIOPlugin* self, const char* param1);
struct miqt_string QImageIOPlugin_tr(const char* s);
struct miqt_string QImageIOPlugin_trUtf8(const char* s);
int QImageIOPlugin_capabilities(const QImageIOPlugin* self, QIODevice* device, struct miqt_string format);
QImageIOHandler* QImageIOPlugin_create(const QImageIOPlugin* self, QIODevice* device, struct miqt_string format);
struct miqt_string QImageIOPlugin_tr2(const char* s, const char* c);
struct miqt_string QImageIOPlugin_tr3(const char* s, const char* c, int n);
struct miqt_string QImageIOPlugin_trUtf82(const char* s, const char* c);
struct miqt_string QImageIOPlugin_trUtf83(const char* s, const char* c, int n);
bool QImageIOPlugin_override_virtual_capabilities(void* self, intptr_t slot);
int QImageIOPlugin_virtualbase_capabilities(const void* self, QIODevice* device, struct miqt_string format);
bool QImageIOPlugin_override_virtual_create(void* self, intptr_t slot);
QImageIOHandler* QImageIOPlugin_virtualbase_create(const void* self, QIODevice* device, struct miqt_string format);
bool QImageIOPlugin_override_virtual_event(void* self, intptr_t slot);
bool QImageIOPlugin_virtualbase_event(void* self, QEvent* event);
bool QImageIOPlugin_override_virtual_eventFilter(void* self, intptr_t slot);
bool QImageIOPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QImageIOPlugin_override_virtual_timerEvent(void* self, intptr_t slot);
void QImageIOPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QImageIOPlugin_override_virtual_childEvent(void* self, intptr_t slot);
void QImageIOPlugin_virtualbase_childEvent(void* self, QChildEvent* event);
bool QImageIOPlugin_override_virtual_customEvent(void* self, intptr_t slot);
void QImageIOPlugin_virtualbase_customEvent(void* self, QEvent* event);
bool QImageIOPlugin_override_virtual_connectNotify(void* self, intptr_t slot);
void QImageIOPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QImageIOPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QImageIOPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QImageIOPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QImageIOPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QImageIOPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QImageIOPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QImageIOPlugin_delete(QImageIOPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
