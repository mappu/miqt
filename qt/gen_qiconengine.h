#pragma once
#ifndef MIQT_QT_GEN_QICONENGINE_H
#define MIQT_QT_GEN_QICONENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

QIconEngine* QIconEngine_new();
QIconEngine* QIconEngine_new2(QIconEngine* other);
void QIconEngine_Paint(QIconEngine* self, QPainter* painter, QRect* rect, int mode, int state);
QSize* QIconEngine_ActualSize(QIconEngine* self, QSize* size, int mode, int state);
QPixmap* QIconEngine_Pixmap(QIconEngine* self, QSize* size, int mode, int state);
void QIconEngine_AddPixmap(QIconEngine* self, QPixmap* pixmap, int mode, int state);
void QIconEngine_AddFile(QIconEngine* self, struct miqt_string fileName, QSize* size, int mode, int state);
struct miqt_string QIconEngine_Key(const QIconEngine* self);
QIconEngine* QIconEngine_Clone(const QIconEngine* self);
bool QIconEngine_Read(QIconEngine* self, QDataStream* in);
bool QIconEngine_Write(const QIconEngine* self, QDataStream* out);
struct miqt_array /* of QSize* */  QIconEngine_AvailableSizes(const QIconEngine* self, int mode, int state);
struct miqt_string QIconEngine_IconName(const QIconEngine* self);
bool QIconEngine_IsNull(const QIconEngine* self);
QPixmap* QIconEngine_ScaledPixmap(QIconEngine* self, QSize* size, int mode, int state, double scale);
void QIconEngine_VirtualHook(QIconEngine* self, int id, void* data);
bool QIconEngine_override_virtual_Paint(void* self, intptr_t slot);
void QIconEngine_virtualbase_Paint(void* self, QPainter* painter, QRect* rect, int mode, int state);
bool QIconEngine_override_virtual_ActualSize(void* self, intptr_t slot);
QSize* QIconEngine_virtualbase_ActualSize(void* self, QSize* size, int mode, int state);
bool QIconEngine_override_virtual_Pixmap(void* self, intptr_t slot);
QPixmap* QIconEngine_virtualbase_Pixmap(void* self, QSize* size, int mode, int state);
bool QIconEngine_override_virtual_AddPixmap(void* self, intptr_t slot);
void QIconEngine_virtualbase_AddPixmap(void* self, QPixmap* pixmap, int mode, int state);
bool QIconEngine_override_virtual_AddFile(void* self, intptr_t slot);
void QIconEngine_virtualbase_AddFile(void* self, struct miqt_string fileName, QSize* size, int mode, int state);
bool QIconEngine_override_virtual_Key(void* self, intptr_t slot);
struct miqt_string QIconEngine_virtualbase_Key(const void* self);
bool QIconEngine_override_virtual_Clone(void* self, intptr_t slot);
QIconEngine* QIconEngine_virtualbase_Clone(const void* self);
bool QIconEngine_override_virtual_Read(void* self, intptr_t slot);
bool QIconEngine_virtualbase_Read(void* self, QDataStream* in);
bool QIconEngine_override_virtual_Write(void* self, intptr_t slot);
bool QIconEngine_virtualbase_Write(const void* self, QDataStream* out);
bool QIconEngine_override_virtual_AvailableSizes(void* self, intptr_t slot);
struct miqt_array /* of QSize* */  QIconEngine_virtualbase_AvailableSizes(const void* self, int mode, int state);
bool QIconEngine_override_virtual_IconName(void* self, intptr_t slot);
struct miqt_string QIconEngine_virtualbase_IconName(const void* self);
bool QIconEngine_override_virtual_VirtualHook(void* self, intptr_t slot);
void QIconEngine_virtualbase_VirtualHook(void* self, int id, void* data);
void QIconEngine_Delete(QIconEngine* self);

QIconEngine__AvailableSizesArgument* QIconEngine__AvailableSizesArgument_new(QIconEngine__AvailableSizesArgument* param1);
void QIconEngine__AvailableSizesArgument_OperatorAssign(QIconEngine__AvailableSizesArgument* self, QIconEngine__AvailableSizesArgument* param1);
void QIconEngine__AvailableSizesArgument_Delete(QIconEngine__AvailableSizesArgument* self);

QIconEngine__ScaledPixmapArgument* QIconEngine__ScaledPixmapArgument_new(QIconEngine__ScaledPixmapArgument* param1);
void QIconEngine__ScaledPixmapArgument_OperatorAssign(QIconEngine__ScaledPixmapArgument* self, QIconEngine__ScaledPixmapArgument* param1);
void QIconEngine__ScaledPixmapArgument_Delete(QIconEngine__ScaledPixmapArgument* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
