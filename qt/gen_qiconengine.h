#ifndef GEN_QICONENGINE_H
#define GEN_QICONENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDataStream;
class QIconEngine;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QIconEngine__AvailableSizesArgument)
typedef QIconEngine::AvailableSizesArgument QIconEngine__AvailableSizesArgument;
#else
class QIconEngine__AvailableSizesArgument;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QIconEngine__ScaledPixmapArgument)
typedef QIconEngine::ScaledPixmapArgument QIconEngine__ScaledPixmapArgument;
#else
class QIconEngine__ScaledPixmapArgument;
#endif
class QPainter;
class QPixmap;
class QRect;
class QSize;
#else
typedef struct QDataStream QDataStream;
typedef struct QIconEngine QIconEngine;
typedef struct QIconEngine__AvailableSizesArgument QIconEngine__AvailableSizesArgument;
typedef struct QIconEngine__ScaledPixmapArgument QIconEngine__ScaledPixmapArgument;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
#endif

void QIconEngine_Paint(QIconEngine* self, QPainter* painter, QRect* rect, uintptr_t mode, uintptr_t state);
QSize* QIconEngine_ActualSize(QIconEngine* self, QSize* size, uintptr_t mode, uintptr_t state);
QPixmap* QIconEngine_Pixmap(QIconEngine* self, QSize* size, uintptr_t mode, uintptr_t state);
void QIconEngine_AddPixmap(QIconEngine* self, QPixmap* pixmap, uintptr_t mode, uintptr_t state);
void QIconEngine_AddFile(QIconEngine* self, const char* fileName, size_t fileName_Strlen, QSize* size, uintptr_t mode, uintptr_t state);
void QIconEngine_Key(const QIconEngine* self, char** _out, int* _out_Strlen);
QIconEngine* QIconEngine_Clone(const QIconEngine* self);
bool QIconEngine_Read(QIconEngine* self, QDataStream* in);
bool QIconEngine_Write(const QIconEngine* self, QDataStream* out);
void QIconEngine_AvailableSizes(const QIconEngine* self, QSize*** _out, size_t* _out_len);
void QIconEngine_IconName(const QIconEngine* self, char** _out, int* _out_Strlen);
bool QIconEngine_IsNull(const QIconEngine* self);
QPixmap* QIconEngine_ScaledPixmap(QIconEngine* self, QSize* size, uintptr_t mode, uintptr_t state, double scale);
void QIconEngine_AvailableSizes1(const QIconEngine* self, uintptr_t mode, QSize*** _out, size_t* _out_len);
void QIconEngine_AvailableSizes2(const QIconEngine* self, uintptr_t mode, uintptr_t state, QSize*** _out, size_t* _out_len);
void QIconEngine_Delete(QIconEngine* self);

QIconEngine__AvailableSizesArgument* QIconEngine__AvailableSizesArgument_new(QIconEngine__AvailableSizesArgument* param1);
void QIconEngine__AvailableSizesArgument_Delete(QIconEngine__AvailableSizesArgument* self);

QIconEngine__ScaledPixmapArgument* QIconEngine__ScaledPixmapArgument_new(QIconEngine__ScaledPixmapArgument* param1);
void QIconEngine__ScaledPixmapArgument_Delete(QIconEngine__ScaledPixmapArgument* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
