#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_POINT_DATA_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_POINT_DATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPointF;
class QRectF;
class QwtCPointerData;
class QwtInterval;
class QwtPointArrayData;
class QwtSyntheticPointData;
#else
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QwtCPointerData QwtCPointerData;
typedef struct QwtInterval QwtInterval;
typedef struct QwtPointArrayData QwtPointArrayData;
typedef struct QwtSyntheticPointData QwtSyntheticPointData;
#endif

QwtPointArrayData* QwtPointArrayData_new(struct miqt_array /* of double */  x, struct miqt_array /* of double */  y);
QwtPointArrayData* QwtPointArrayData_new2(const double* x, const double* y, size_t size);
QwtPointArrayData* QwtPointArrayData_new3(QwtPointArrayData* param1);
QRectF* QwtPointArrayData_boundingRect(const QwtPointArrayData* self);
size_t QwtPointArrayData_size(const QwtPointArrayData* self);
QPointF* QwtPointArrayData_sample(const QwtPointArrayData* self, size_t index);
struct miqt_array /* of double */  QwtPointArrayData_xData(const QwtPointArrayData* self);
struct miqt_array /* of double */  QwtPointArrayData_yData(const QwtPointArrayData* self);

bool QwtPointArrayData_override_virtual_boundingRect(void* self, intptr_t slot);
QRectF* QwtPointArrayData_virtualbase_boundingRect(const void* self);
bool QwtPointArrayData_override_virtual_size(void* self, intptr_t slot);
size_t QwtPointArrayData_virtualbase_size(const void* self);
bool QwtPointArrayData_override_virtual_sample(void* self, intptr_t slot);
QPointF* QwtPointArrayData_virtualbase_sample(const void* self, size_t index);

void QwtPointArrayData_delete(QwtPointArrayData* self);

QwtCPointerData* QwtCPointerData_new(const double* x, const double* y, size_t size);
QwtCPointerData* QwtCPointerData_new2(QwtCPointerData* param1);
QRectF* QwtCPointerData_boundingRect(const QwtCPointerData* self);
size_t QwtCPointerData_size(const QwtCPointerData* self);
QPointF* QwtCPointerData_sample(const QwtCPointerData* self, size_t index);
const double* QwtCPointerData_xData(const QwtCPointerData* self);
const double* QwtCPointerData_yData(const QwtCPointerData* self);

bool QwtCPointerData_override_virtual_boundingRect(void* self, intptr_t slot);
QRectF* QwtCPointerData_virtualbase_boundingRect(const void* self);
bool QwtCPointerData_override_virtual_size(void* self, intptr_t slot);
size_t QwtCPointerData_virtualbase_size(const void* self);
bool QwtCPointerData_override_virtual_sample(void* self, intptr_t slot);
QPointF* QwtCPointerData_virtualbase_sample(const void* self, size_t index);

void QwtCPointerData_delete(QwtCPointerData* self);

QwtSyntheticPointData* QwtSyntheticPointData_new(size_t size);
QwtSyntheticPointData* QwtSyntheticPointData_new2(QwtSyntheticPointData* param1);
QwtSyntheticPointData* QwtSyntheticPointData_new3(size_t size, QwtInterval* param2);
void QwtSyntheticPointData_setSize(QwtSyntheticPointData* self, size_t size);
size_t QwtSyntheticPointData_size(const QwtSyntheticPointData* self);
void QwtSyntheticPointData_setInterval(QwtSyntheticPointData* self, QwtInterval* interval);
QwtInterval* QwtSyntheticPointData_interval(const QwtSyntheticPointData* self);
QRectF* QwtSyntheticPointData_boundingRect(const QwtSyntheticPointData* self);
QPointF* QwtSyntheticPointData_sample(const QwtSyntheticPointData* self, size_t index);
double QwtSyntheticPointData_y(const QwtSyntheticPointData* self, double x);
double QwtSyntheticPointData_x(const QwtSyntheticPointData* self, unsigned int index);
void QwtSyntheticPointData_setRectOfInterest(QwtSyntheticPointData* self, QRectF* rectOfInterest);
QRectF* QwtSyntheticPointData_rectOfInterest(const QwtSyntheticPointData* self);

bool QwtSyntheticPointData_override_virtual_size(void* self, intptr_t slot);
size_t QwtSyntheticPointData_virtualbase_size(const void* self);
bool QwtSyntheticPointData_override_virtual_boundingRect(void* self, intptr_t slot);
QRectF* QwtSyntheticPointData_virtualbase_boundingRect(const void* self);
bool QwtSyntheticPointData_override_virtual_sample(void* self, intptr_t slot);
QPointF* QwtSyntheticPointData_virtualbase_sample(const void* self, size_t index);
bool QwtSyntheticPointData_override_virtual_y(void* self, intptr_t slot);
double QwtSyntheticPointData_virtualbase_y(const void* self, double x);
bool QwtSyntheticPointData_override_virtual_x(void* self, intptr_t slot);
double QwtSyntheticPointData_virtualbase_x(const void* self, unsigned int index);
bool QwtSyntheticPointData_override_virtual_setRectOfInterest(void* self, intptr_t slot);
void QwtSyntheticPointData_virtualbase_setRectOfInterest(void* self, QRectF* rectOfInterest);

void QwtSyntheticPointData_delete(QwtSyntheticPointData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
