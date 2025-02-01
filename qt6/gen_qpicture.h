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
bool QPicture_isNull(const QPicture* self);
int QPicture_devType(const QPicture* self);
unsigned int QPicture_size(const QPicture* self);
const char* QPicture_data(const QPicture* self);
void QPicture_setData(QPicture* self, const char* data, unsigned int size);
bool QPicture_play(QPicture* self, QPainter* p);
bool QPicture_load(QPicture* self, QIODevice* dev);
bool QPicture_loadWithFileName(QPicture* self, struct miqt_string fileName);
bool QPicture_save(QPicture* self, QIODevice* dev);
bool QPicture_saveWithFileName(QPicture* self, struct miqt_string fileName);
QRect* QPicture_boundingRect(const QPicture* self);
void QPicture_setBoundingRect(QPicture* self, QRect* r);
void QPicture_operatorAssign(QPicture* self, QPicture* p);
void QPicture_swap(QPicture* self, QPicture* other);
void QPicture_detach(QPicture* self);
bool QPicture_isDetached(const QPicture* self);
QPaintEngine* QPicture_paintEngine(const QPicture* self);
int QPicture_metric(const QPicture* self, int m);
bool QPicture_override_virtual_devType(void* self, intptr_t slot);
int QPicture_virtualbase_devType(const void* self);
bool QPicture_override_virtual_setData(void* self, intptr_t slot);
void QPicture_virtualbase_setData(void* self, const char* data, unsigned int size);
bool QPicture_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QPicture_virtualbase_paintEngine(const void* self);
bool QPicture_override_virtual_metric(void* self, intptr_t slot);
int QPicture_virtualbase_metric(const void* self, int m);
bool QPicture_override_virtual_initPainter(void* self, intptr_t slot);
void QPicture_virtualbase_initPainter(const void* self, QPainter* painter);
bool QPicture_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QPicture_virtualbase_redirected(const void* self, QPoint* offset);
bool QPicture_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QPicture_virtualbase_sharedPainter(const void* self);
void QPicture_delete(QPicture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
