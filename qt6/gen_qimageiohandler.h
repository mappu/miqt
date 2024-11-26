#pragma once
#ifndef MIQT_QT6_GEN_QIMAGEIOHANDLER_H
#define MIQT_QT6_GEN_QIMAGEIOHANDLER_H

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
class QSize;
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
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

void QImageIOHandler_new(QImageIOHandler** outptr_QImageIOHandler);
void QImageIOHandler_SetDevice(QImageIOHandler* self, QIODevice* device);
QIODevice* QImageIOHandler_Device(const QImageIOHandler* self);
void QImageIOHandler_SetFormat(QImageIOHandler* self, struct miqt_string format);
void QImageIOHandler_SetFormatWithFormat(const QImageIOHandler* self, struct miqt_string format);
struct miqt_string QImageIOHandler_Format(const QImageIOHandler* self);
bool QImageIOHandler_CanRead(const QImageIOHandler* self);
bool QImageIOHandler_Read(QImageIOHandler* self, QImage* image);
bool QImageIOHandler_Write(QImageIOHandler* self, QImage* image);
QVariant* QImageIOHandler_Option(const QImageIOHandler* self, int option);
void QImageIOHandler_SetOption(QImageIOHandler* self, int option, QVariant* value);
bool QImageIOHandler_SupportsOption(const QImageIOHandler* self, int option);
bool QImageIOHandler_JumpToNextImage(QImageIOHandler* self);
bool QImageIOHandler_JumpToImage(QImageIOHandler* self, int imageNumber);
int QImageIOHandler_LoopCount(const QImageIOHandler* self);
int QImageIOHandler_ImageCount(const QImageIOHandler* self);
int QImageIOHandler_NextImageDelay(const QImageIOHandler* self);
int QImageIOHandler_CurrentImageNumber(const QImageIOHandler* self);
QRect* QImageIOHandler_CurrentImageRect(const QImageIOHandler* self);
bool QImageIOHandler_AllocateImage(QSize* size, int format, QImage* image);
void QImageIOHandler_override_virtual_CanRead(void* self, intptr_t slot);
bool QImageIOHandler_virtualbase_CanRead(const void* self);
void QImageIOHandler_override_virtual_Read(void* self, intptr_t slot);
bool QImageIOHandler_virtualbase_Read(void* self, QImage* image);
void QImageIOHandler_override_virtual_Write(void* self, intptr_t slot);
bool QImageIOHandler_virtualbase_Write(void* self, QImage* image);
void QImageIOHandler_override_virtual_Option(void* self, intptr_t slot);
QVariant* QImageIOHandler_virtualbase_Option(const void* self, int option);
void QImageIOHandler_override_virtual_SetOption(void* self, intptr_t slot);
void QImageIOHandler_virtualbase_SetOption(void* self, int option, QVariant* value);
void QImageIOHandler_override_virtual_SupportsOption(void* self, intptr_t slot);
bool QImageIOHandler_virtualbase_SupportsOption(const void* self, int option);
void QImageIOHandler_override_virtual_JumpToNextImage(void* self, intptr_t slot);
bool QImageIOHandler_virtualbase_JumpToNextImage(void* self);
void QImageIOHandler_override_virtual_JumpToImage(void* self, intptr_t slot);
bool QImageIOHandler_virtualbase_JumpToImage(void* self, int imageNumber);
void QImageIOHandler_override_virtual_LoopCount(void* self, intptr_t slot);
int QImageIOHandler_virtualbase_LoopCount(const void* self);
void QImageIOHandler_override_virtual_ImageCount(void* self, intptr_t slot);
int QImageIOHandler_virtualbase_ImageCount(const void* self);
void QImageIOHandler_override_virtual_NextImageDelay(void* self, intptr_t slot);
int QImageIOHandler_virtualbase_NextImageDelay(const void* self);
void QImageIOHandler_override_virtual_CurrentImageNumber(void* self, intptr_t slot);
int QImageIOHandler_virtualbase_CurrentImageNumber(const void* self);
void QImageIOHandler_override_virtual_CurrentImageRect(void* self, intptr_t slot);
QRect* QImageIOHandler_virtualbase_CurrentImageRect(const void* self);
void QImageIOHandler_Delete(QImageIOHandler* self, bool isSubclass);

void QImageIOPlugin_new(QImageIOPlugin** outptr_QImageIOPlugin, QObject** outptr_QObject);
void QImageIOPlugin_new2(QObject* parent, QImageIOPlugin** outptr_QImageIOPlugin, QObject** outptr_QObject);
QMetaObject* QImageIOPlugin_MetaObject(const QImageIOPlugin* self);
void* QImageIOPlugin_Metacast(QImageIOPlugin* self, const char* param1);
struct miqt_string QImageIOPlugin_Tr(const char* s);
int QImageIOPlugin_Capabilities(const QImageIOPlugin* self, QIODevice* device, struct miqt_string format);
QImageIOHandler* QImageIOPlugin_Create(const QImageIOPlugin* self, QIODevice* device, struct miqt_string format);
struct miqt_string QImageIOPlugin_Tr2(const char* s, const char* c);
struct miqt_string QImageIOPlugin_Tr3(const char* s, const char* c, int n);
void QImageIOPlugin_override_virtual_Capabilities(void* self, intptr_t slot);
int QImageIOPlugin_virtualbase_Capabilities(const void* self, QIODevice* device, struct miqt_string format);
void QImageIOPlugin_override_virtual_Create(void* self, intptr_t slot);
QImageIOHandler* QImageIOPlugin_virtualbase_Create(const void* self, QIODevice* device, struct miqt_string format);
void QImageIOPlugin_override_virtual_Event(void* self, intptr_t slot);
bool QImageIOPlugin_virtualbase_Event(void* self, QEvent* event);
void QImageIOPlugin_override_virtual_EventFilter(void* self, intptr_t slot);
bool QImageIOPlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QImageIOPlugin_override_virtual_TimerEvent(void* self, intptr_t slot);
void QImageIOPlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QImageIOPlugin_override_virtual_ChildEvent(void* self, intptr_t slot);
void QImageIOPlugin_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QImageIOPlugin_override_virtual_CustomEvent(void* self, intptr_t slot);
void QImageIOPlugin_virtualbase_CustomEvent(void* self, QEvent* event);
void QImageIOPlugin_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QImageIOPlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QImageIOPlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QImageIOPlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QImageIOPlugin_Delete(QImageIOPlugin* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
