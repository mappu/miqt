#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_COLOR_MAP_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_COLOR_MAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QwtAlphaColorMap;
class QwtColorMap;
class QwtInterval;
class QwtLinearColorMap;
#else
typedef struct QColor QColor;
typedef struct QwtAlphaColorMap QwtAlphaColorMap;
typedef struct QwtColorMap QwtColorMap;
typedef struct QwtInterval QwtInterval;
typedef struct QwtLinearColorMap QwtLinearColorMap;
#endif

QwtColorMap* QwtColorMap_new();
QwtColorMap* QwtColorMap_new2(int param1);
int QwtColorMap_format(const QwtColorMap* self);
unsigned int QwtColorMap_rgb(const QwtColorMap* self, QwtInterval* interval, double value);
unsigned char QwtColorMap_colorIndex(const QwtColorMap* self, QwtInterval* interval, double value);
QColor* QwtColorMap_color(const QwtColorMap* self, QwtInterval* param1, double value);
struct miqt_array /* of unsigned int */  QwtColorMap_colorTable(const QwtColorMap* self, QwtInterval* param1);
void QwtColorMap_operatorAssign(QwtColorMap* self, QwtColorMap* param1);

bool QwtColorMap_override_virtual_rgb(void* self, intptr_t slot);
unsigned int QwtColorMap_virtualbase_rgb(const void* self, QwtInterval* interval, double value);
bool QwtColorMap_override_virtual_colorIndex(void* self, intptr_t slot);
unsigned char QwtColorMap_virtualbase_colorIndex(const void* self, QwtInterval* interval, double value);
bool QwtColorMap_override_virtual_colorTable(void* self, intptr_t slot);
struct miqt_array /* of unsigned int */  QwtColorMap_virtualbase_colorTable(const void* self, QwtInterval* param1);

void QwtColorMap_delete(QwtColorMap* self);

QwtLinearColorMap* QwtLinearColorMap_new();
QwtLinearColorMap* QwtLinearColorMap_new2(QColor* color1, QColor* color2);
QwtLinearColorMap* QwtLinearColorMap_new3(int param1);
QwtLinearColorMap* QwtLinearColorMap_new4(QColor* color1, QColor* color2, int param3);
void QwtLinearColorMap_virtbase(QwtLinearColorMap* src, QwtColorMap** outptr_QwtColorMap);
void QwtLinearColorMap_setMode(QwtLinearColorMap* self, int mode);
int QwtLinearColorMap_mode(const QwtLinearColorMap* self);
void QwtLinearColorMap_setColorInterval(QwtLinearColorMap* self, QColor* color1, QColor* color2);
void QwtLinearColorMap_addColorStop(QwtLinearColorMap* self, double value, QColor* param2);
struct miqt_array /* of double */  QwtLinearColorMap_colorStops(const QwtLinearColorMap* self);
QColor* QwtLinearColorMap_color1(const QwtLinearColorMap* self);
QColor* QwtLinearColorMap_color2(const QwtLinearColorMap* self);
unsigned int QwtLinearColorMap_rgb(const QwtLinearColorMap* self, QwtInterval* param1, double value);
unsigned char QwtLinearColorMap_colorIndex(const QwtLinearColorMap* self, QwtInterval* param1, double value);

bool QwtLinearColorMap_override_virtual_rgb(void* self, intptr_t slot);
unsigned int QwtLinearColorMap_virtualbase_rgb(const void* self, QwtInterval* param1, double value);
bool QwtLinearColorMap_override_virtual_colorIndex(void* self, intptr_t slot);
unsigned char QwtLinearColorMap_virtualbase_colorIndex(const void* self, QwtInterval* param1, double value);
bool QwtLinearColorMap_override_virtual_colorTable(void* self, intptr_t slot);
struct miqt_array /* of unsigned int */  QwtLinearColorMap_virtualbase_colorTable(const void* self, QwtInterval* param1);

void QwtLinearColorMap_delete(QwtLinearColorMap* self);

QwtAlphaColorMap* QwtAlphaColorMap_new();
QwtAlphaColorMap* QwtAlphaColorMap_new2(QColor* param1);
void QwtAlphaColorMap_virtbase(QwtAlphaColorMap* src, QwtColorMap** outptr_QwtColorMap);
void QwtAlphaColorMap_setColor(QwtAlphaColorMap* self, QColor* color);
QColor* QwtAlphaColorMap_color(const QwtAlphaColorMap* self);
unsigned int QwtAlphaColorMap_rgb(const QwtAlphaColorMap* self, QwtInterval* param1, double value);

bool QwtAlphaColorMap_override_virtual_rgb(void* self, intptr_t slot);
unsigned int QwtAlphaColorMap_virtualbase_rgb(const void* self, QwtInterval* param1, double value);
bool QwtAlphaColorMap_override_virtual_colorTable(void* self, intptr_t slot);
struct miqt_array /* of unsigned int */  QwtAlphaColorMap_virtualbase_colorTable(const void* self, QwtInterval* param1);

void QwtAlphaColorMap_delete(QwtAlphaColorMap* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
