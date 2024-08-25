#ifndef GEN_QIMAGEIOHANDLER_H
#define GEN_QIMAGEIOHANDLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
#else
typedef struct QByteArray QByteArray;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QImageIOHandler QImageIOHandler;
typedef struct QImageIOPlugin QImageIOPlugin;
typedef struct QMetaObject QMetaObject;
typedef struct QRect QRect;
#endif

void QImageIOHandler_SetDevice(QImageIOHandler* self, QIODevice* device);
QIODevice* QImageIOHandler_Device(QImageIOHandler* self);
void QImageIOHandler_SetFormat(QImageIOHandler* self, QByteArray* format);
void QImageIOHandler_SetFormatWithFormat(QImageIOHandler* self, QByteArray* format);
QByteArray* QImageIOHandler_Format(QImageIOHandler* self);
QByteArray* QImageIOHandler_Name(QImageIOHandler* self);
bool QImageIOHandler_CanRead(QImageIOHandler* self);
bool QImageIOHandler_Read(QImageIOHandler* self, QImage* image);
bool QImageIOHandler_Write(QImageIOHandler* self, QImage* image);
bool QImageIOHandler_JumpToNextImage(QImageIOHandler* self);
bool QImageIOHandler_JumpToImage(QImageIOHandler* self, int imageNumber);
int QImageIOHandler_LoopCount(QImageIOHandler* self);
int QImageIOHandler_ImageCount(QImageIOHandler* self);
int QImageIOHandler_NextImageDelay(QImageIOHandler* self);
int QImageIOHandler_CurrentImageNumber(QImageIOHandler* self);
QRect* QImageIOHandler_CurrentImageRect(QImageIOHandler* self);
void QImageIOHandler_Delete(QImageIOHandler* self);

QMetaObject* QImageIOPlugin_MetaObject(QImageIOPlugin* self);
void QImageIOPlugin_Tr(char* s, char** _out, int* _out_Strlen);
void QImageIOPlugin_TrUtf8(char* s, char** _out, int* _out_Strlen);
QImageIOHandler* QImageIOPlugin_Create(QImageIOPlugin* self, QIODevice* device);
void QImageIOPlugin_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QImageIOPlugin_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QImageIOPlugin_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QImageIOPlugin_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
QImageIOHandler* QImageIOPlugin_Create2(QImageIOPlugin* self, QIODevice* device, QByteArray* format);
void QImageIOPlugin_Delete(QImageIOPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
