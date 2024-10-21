#ifndef GEN_QMOVIE_H
#define GEN_QMOVIE_H

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
QMovie* QMovie_new3(struct miqt_string fileName);
QMovie* QMovie_new4(QObject* parent);
QMovie* QMovie_new5(QIODevice* device, struct miqt_string format);
QMovie* QMovie_new6(QIODevice* device, struct miqt_string format, QObject* parent);
QMovie* QMovie_new7(struct miqt_string fileName, struct miqt_string format);
QMovie* QMovie_new8(struct miqt_string fileName, struct miqt_string format, QObject* parent);
QMetaObject* QMovie_MetaObject(const QMovie* self);
void* QMovie_Metacast(QMovie* self, const char* param1);
struct miqt_string QMovie_Tr(const char* s);
struct miqt_array* QMovie_SupportedFormats();
void QMovie_SetDevice(QMovie* self, QIODevice* device);
QIODevice* QMovie_Device(const QMovie* self);
void QMovie_SetFileName(QMovie* self, struct miqt_string fileName);
struct miqt_string QMovie_FileName(const QMovie* self);
void QMovie_SetFormat(QMovie* self, struct miqt_string format);
struct miqt_string QMovie_Format(const QMovie* self);
void QMovie_SetBackgroundColor(QMovie* self, QColor* color);
QColor* QMovie_BackgroundColor(const QMovie* self);
int QMovie_State(const QMovie* self);
QRect* QMovie_FrameRect(const QMovie* self);
QImage* QMovie_CurrentImage(const QMovie* self);
QPixmap* QMovie_CurrentPixmap(const QMovie* self);
bool QMovie_IsValid(const QMovie* self);
int QMovie_LastError(const QMovie* self);
struct miqt_string QMovie_LastErrorString(const QMovie* self);
bool QMovie_JumpToFrame(QMovie* self, int frameNumber);
int QMovie_LoopCount(const QMovie* self);
int QMovie_FrameCount(const QMovie* self);
int QMovie_NextFrameDelay(const QMovie* self);
int QMovie_CurrentFrameNumber(const QMovie* self);
int QMovie_Speed(const QMovie* self);
QSize* QMovie_ScaledSize(QMovie* self);
void QMovie_SetScaledSize(QMovie* self, QSize* size);
int QMovie_CacheMode(const QMovie* self);
void QMovie_SetCacheMode(QMovie* self, int mode);
void QMovie_Started(QMovie* self);
void QMovie_connect_Started(QMovie* self, intptr_t slot);
void QMovie_Resized(QMovie* self, QSize* size);
void QMovie_connect_Resized(QMovie* self, intptr_t slot);
void QMovie_Updated(QMovie* self, QRect* rect);
void QMovie_connect_Updated(QMovie* self, intptr_t slot);
void QMovie_StateChanged(QMovie* self, int state);
void QMovie_connect_StateChanged(QMovie* self, intptr_t slot);
void QMovie_Error(QMovie* self, int error);
void QMovie_connect_Error(QMovie* self, intptr_t slot);
void QMovie_Finished(QMovie* self);
void QMovie_connect_Finished(QMovie* self, intptr_t slot);
void QMovie_FrameChanged(QMovie* self, int frameNumber);
void QMovie_connect_FrameChanged(QMovie* self, intptr_t slot);
void QMovie_Start(QMovie* self);
bool QMovie_JumpToNextFrame(QMovie* self);
void QMovie_SetPaused(QMovie* self, bool paused);
void QMovie_Stop(QMovie* self);
void QMovie_SetSpeed(QMovie* self, int percentSpeed);
struct miqt_string QMovie_Tr2(const char* s, const char* c);
struct miqt_string QMovie_Tr3(const char* s, const char* c, int n);
void QMovie_Delete(QMovie* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
