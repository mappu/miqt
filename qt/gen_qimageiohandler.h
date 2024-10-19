#ifndef GEN_QIMAGEIOHANDLER_H
#define GEN_QIMAGEIOHANDLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QIODevice;
class QImage;
class QImageIOHandler;
class QImageIOPlugin;
class QMetaObject;
class QRect;
class QVariant;
#else
typedef struct QByteArray QByteArray;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QImageIOHandler QImageIOHandler;
typedef struct QImageIOPlugin QImageIOPlugin;
typedef struct QMetaObject QMetaObject;
typedef struct QRect QRect;
typedef struct QVariant QVariant;
#endif

void QImageIOHandler_SetDevice(QImageIOHandler* self, QIODevice* device);
QIODevice* QImageIOHandler_Device(const QImageIOHandler* self);
void QImageIOHandler_SetFormat(QImageIOHandler* self, struct miqt_string format);
void QImageIOHandler_SetFormatWithFormat(const QImageIOHandler* self, struct miqt_string format);
struct miqt_string QImageIOHandler_Format(const QImageIOHandler* self);
struct miqt_string QImageIOHandler_Name(const QImageIOHandler* self);
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
void QImageIOHandler_Delete(QImageIOHandler* self);

QMetaObject* QImageIOPlugin_MetaObject(const QImageIOPlugin* self);
void* QImageIOPlugin_Metacast(QImageIOPlugin* self, const char* param1);
struct miqt_string QImageIOPlugin_Tr(const char* s);
struct miqt_string QImageIOPlugin_TrUtf8(const char* s);
int QImageIOPlugin_Capabilities(const QImageIOPlugin* self, QIODevice* device, struct miqt_string format);
QImageIOHandler* QImageIOPlugin_Create(const QImageIOPlugin* self, QIODevice* device);
struct miqt_string QImageIOPlugin_Tr2(const char* s, const char* c);
struct miqt_string QImageIOPlugin_Tr3(const char* s, const char* c, int n);
struct miqt_string QImageIOPlugin_TrUtf82(const char* s, const char* c);
struct miqt_string QImageIOPlugin_TrUtf83(const char* s, const char* c, int n);
QImageIOHandler* QImageIOPlugin_Create2(const QImageIOPlugin* self, QIODevice* device, struct miqt_string format);
void QImageIOPlugin_Delete(QImageIOPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
