#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_COMPASS_ROSE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_COMPASS_ROSE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPainter;
class QPalette;
class QPointF;
class QwtCompassRose;
class QwtSimpleCompassRose;
#else
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPointF QPointF;
typedef struct QwtCompassRose QwtCompassRose;
typedef struct QwtSimpleCompassRose QwtSimpleCompassRose;
#endif

QwtCompassRose* QwtCompassRose_new(QwtCompassRose* param1);
void QwtCompassRose_setPalette(QwtCompassRose* self, QPalette* p);
QPalette* QwtCompassRose_palette(const QwtCompassRose* self);
void QwtCompassRose_draw(const QwtCompassRose* self, QPainter* painter, QPointF* center, double radius, double north, int colorGroup);
void QwtCompassRose_operatorAssign(QwtCompassRose* self, QwtCompassRose* param1);

bool QwtCompassRose_override_virtual_setPalette(void* self, intptr_t slot);
void QwtCompassRose_virtualbase_setPalette(void* self, QPalette* p);
bool QwtCompassRose_override_virtual_draw(void* self, intptr_t slot);
void QwtCompassRose_virtualbase_draw(const void* self, QPainter* painter, QPointF* center, double radius, double north, int colorGroup);

void QwtCompassRose_delete(QwtCompassRose* self);

QwtSimpleCompassRose* QwtSimpleCompassRose_new();
QwtSimpleCompassRose* QwtSimpleCompassRose_new2(QwtSimpleCompassRose* param1);
QwtSimpleCompassRose* QwtSimpleCompassRose_new3(int numThorns);
QwtSimpleCompassRose* QwtSimpleCompassRose_new4(int numThorns, int numThornLevels);
void QwtSimpleCompassRose_virtbase(QwtSimpleCompassRose* src, QwtCompassRose** outptr_QwtCompassRose);
void QwtSimpleCompassRose_setWidth(QwtSimpleCompassRose* self, double width);
double QwtSimpleCompassRose_width(const QwtSimpleCompassRose* self);
void QwtSimpleCompassRose_setNumThorns(QwtSimpleCompassRose* self, int numThorns);
int QwtSimpleCompassRose_numThorns(const QwtSimpleCompassRose* self);
void QwtSimpleCompassRose_setNumThornLevels(QwtSimpleCompassRose* self, int numThornLevels);
int QwtSimpleCompassRose_numThornLevels(const QwtSimpleCompassRose* self);
void QwtSimpleCompassRose_setShrinkFactor(QwtSimpleCompassRose* self, double factor);
double QwtSimpleCompassRose_shrinkFactor(const QwtSimpleCompassRose* self);
void QwtSimpleCompassRose_draw(const QwtSimpleCompassRose* self, QPainter* param1, QPointF* center, double radius, double north, int param5);
void QwtSimpleCompassRose_drawRose(QPainter* param1, QPalette* param2, QPointF* center, double radius, double north, double width, int numThorns, int numThornLevels, double shrinkFactor);
void QwtSimpleCompassRose_operatorAssign(QwtSimpleCompassRose* self, QwtSimpleCompassRose* param1);

bool QwtSimpleCompassRose_override_virtual_draw(void* self, intptr_t slot);
void QwtSimpleCompassRose_virtualbase_draw(const void* self, QPainter* param1, QPointF* center, double radius, double north, int param5);
bool QwtSimpleCompassRose_override_virtual_setPalette(void* self, intptr_t slot);
void QwtSimpleCompassRose_virtualbase_setPalette(void* self, QPalette* p);

void QwtSimpleCompassRose_delete(QwtSimpleCompassRose* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
