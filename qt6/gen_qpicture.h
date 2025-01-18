#pragma once
#ifndef MIQT_QT6_GEN_QPICTURE_H
#define MIQT_QT6_GEN_QPICTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIODevice;
class QPaintDevice;
class QPaintEngine;
class QPainter;
class QPicture;
class QPoint;
class QRect;
#else
typedef struct QIODevice QIODevice;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPicture QPicture;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
#endif

QPicture* QPicture_new();
QPicture* QPicture_new2(QPicture* param1);
QPicture* QPicture_new3(int formatVersion);
void QPicture_virtbase(QPicture* src, QPaintDevice** outptr_QPaintDevice);
bool QPicture_IsNull(const QPicture* self);
int QPicture_DevType(const QPicture* self);
unsigned int QPicture_Size(const QPicture* self);
const char* QPicture_Data(const QPicture* self);
void QPicture_SetData(QPicture* self, const char* data, unsigned int size);
bool QPicture_Play(QPicture* self, QPainter* p);
bool QPicture_Load(QPicture* self, QIODevice* dev);
bool QPicture_LoadWithFileName(QPicture* self, struct miqt_string fileName);
bool QPicture_Save(QPicture* self, QIODevice* dev);
bool QPicture_SaveWithFileName(QPicture* self, struct miqt_string fileName);
QRect* QPicture_BoundingRect(const QPicture* self);
void QPicture_SetBoundingRect(QPicture* self, QRect* r);
void QPicture_OperatorAssign(QPicture* self, QPicture* p);
void QPicture_Swap(QPicture* self, QPicture* other);
void QPicture_Detach(QPicture* self);
bool QPicture_IsDetached(const QPicture* self);
QPaintEngine* QPicture_PaintEngine(const QPicture* self);
int QPicture_Metric(const QPicture* self, int m);
bool QPicture_override_virtual_DevType(void* self, intptr_t slot);
int QPicture_virtualbase_DevType(const void* self);
bool QPicture_override_virtual_SetData(void* self, intptr_t slot);
void QPicture_virtualbase_SetData(void* self, const char* data, unsigned int size);
bool QPicture_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QPicture_virtualbase_PaintEngine(const void* self);
bool QPicture_override_virtual_Metric(void* self, intptr_t slot);
int QPicture_virtualbase_Metric(const void* self, int m);
bool QPicture_override_virtual_InitPainter(void* self, intptr_t slot);
void QPicture_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QPicture_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QPicture_virtualbase_Redirected(const void* self, QPoint* offset);
bool QPicture_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QPicture_virtualbase_SharedPainter(const void* self);
void QPicture_Delete(QPicture* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
