#ifndef GEN_QMOVIE_H
#define GEN_QMOVIE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QColor;
class QIODevice;
class QImage;
class QMetaObject;
class QMovie;
class QObject;
class QPixmap;
class QRect;
class QSize;
#else
typedef struct QByteArray QByteArray;
typedef struct QColor QColor;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QMetaObject QMetaObject;
typedef struct QMovie QMovie;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
#endif

QMovie* QMovie_new();
QMovie* QMovie_new2(QIODevice* device);
QMovie* QMovie_new3(const char* fileName, size_t fileName_Strlen);
QMovie* QMovie_new4(QObject* parent);
QMovie* QMovie_new5(QIODevice* device, QByteArray* format);
QMovie* QMovie_new6(QIODevice* device, QByteArray* format, QObject* parent);
QMovie* QMovie_new7(const char* fileName, size_t fileName_Strlen, QByteArray* format);
QMovie* QMovie_new8(const char* fileName, size_t fileName_Strlen, QByteArray* format, QObject* parent);
QMetaObject* QMovie_MetaObject(QMovie* self);
void QMovie_Tr(char* s, char** _out, int* _out_Strlen);
void QMovie_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QMovie_SupportedFormats(QByteArray*** _out, size_t* _out_len);
void QMovie_SetDevice(QMovie* self, QIODevice* device);
QIODevice* QMovie_Device(QMovie* self);
void QMovie_SetFileName(QMovie* self, const char* fileName, size_t fileName_Strlen);
void QMovie_FileName(QMovie* self, char** _out, int* _out_Strlen);
void QMovie_SetFormat(QMovie* self, QByteArray* format);
QByteArray* QMovie_Format(QMovie* self);
void QMovie_SetBackgroundColor(QMovie* self, QColor* color);
QColor* QMovie_BackgroundColor(QMovie* self);
QRect* QMovie_FrameRect(QMovie* self);
QImage* QMovie_CurrentImage(QMovie* self);
QPixmap* QMovie_CurrentPixmap(QMovie* self);
bool QMovie_IsValid(QMovie* self);
void QMovie_LastErrorString(QMovie* self, char** _out, int* _out_Strlen);
bool QMovie_JumpToFrame(QMovie* self, int frameNumber);
int QMovie_LoopCount(QMovie* self);
int QMovie_FrameCount(QMovie* self);
int QMovie_NextFrameDelay(QMovie* self);
int QMovie_CurrentFrameNumber(QMovie* self);
int QMovie_Speed(QMovie* self);
QSize* QMovie_ScaledSize(QMovie* self);
void QMovie_SetScaledSize(QMovie* self, QSize* size);
void QMovie_Started(QMovie* self);
void QMovie_connect_Started(QMovie* self, void* slot);
void QMovie_Resized(QMovie* self, QSize* size);
void QMovie_connect_Resized(QMovie* self, void* slot);
void QMovie_Updated(QMovie* self, QRect* rect);
void QMovie_connect_Updated(QMovie* self, void* slot);
void QMovie_Finished(QMovie* self);
void QMovie_connect_Finished(QMovie* self, void* slot);
void QMovie_FrameChanged(QMovie* self, int frameNumber);
void QMovie_connect_FrameChanged(QMovie* self, void* slot);
void QMovie_Start(QMovie* self);
bool QMovie_JumpToNextFrame(QMovie* self);
void QMovie_SetPaused(QMovie* self, bool paused);
void QMovie_Stop(QMovie* self);
void QMovie_SetSpeed(QMovie* self, int percentSpeed);
void QMovie_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QMovie_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QMovie_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QMovie_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QMovie_Delete(QMovie* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
