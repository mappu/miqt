#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_TRANSFORM_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_TRANSFORM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QwtLogTransform;
class QwtNullTransform;
class QwtPowerTransform;
class QwtTransform;
#else
typedef struct QwtLogTransform QwtLogTransform;
typedef struct QwtNullTransform QwtNullTransform;
typedef struct QwtPowerTransform QwtPowerTransform;
typedef struct QwtTransform QwtTransform;
#endif

QwtTransform* QwtTransform_new();
QwtTransform* QwtTransform_new2(QwtTransform* param1);
double QwtTransform_bounded(const QwtTransform* self, double value);
double QwtTransform_transform(const QwtTransform* self, double value);
double QwtTransform_invTransform(const QwtTransform* self, double value);
QwtTransform* QwtTransform_copy(const QwtTransform* self);
void QwtTransform_operatorAssign(QwtTransform* self, QwtTransform* param1);

bool QwtTransform_override_virtual_bounded(void* self, intptr_t slot);
double QwtTransform_virtualbase_bounded(const void* self, double value);
bool QwtTransform_override_virtual_transform(void* self, intptr_t slot);
double QwtTransform_virtualbase_transform(const void* self, double value);
bool QwtTransform_override_virtual_invTransform(void* self, intptr_t slot);
double QwtTransform_virtualbase_invTransform(const void* self, double value);
bool QwtTransform_override_virtual_copy(void* self, intptr_t slot);
QwtTransform* QwtTransform_virtualbase_copy(const void* self);

void QwtTransform_delete(QwtTransform* self);

QwtNullTransform* QwtNullTransform_new();
QwtNullTransform* QwtNullTransform_new2(QwtNullTransform* param1);
void QwtNullTransform_virtbase(QwtNullTransform* src, QwtTransform** outptr_QwtTransform);
double QwtNullTransform_transform(const QwtNullTransform* self, double value);
double QwtNullTransform_invTransform(const QwtNullTransform* self, double value);
QwtTransform* QwtNullTransform_copy(const QwtNullTransform* self);
void QwtNullTransform_operatorAssign(QwtNullTransform* self, QwtNullTransform* param1);

bool QwtNullTransform_override_virtual_transform(void* self, intptr_t slot);
double QwtNullTransform_virtualbase_transform(const void* self, double value);
bool QwtNullTransform_override_virtual_invTransform(void* self, intptr_t slot);
double QwtNullTransform_virtualbase_invTransform(const void* self, double value);
bool QwtNullTransform_override_virtual_copy(void* self, intptr_t slot);
QwtTransform* QwtNullTransform_virtualbase_copy(const void* self);
bool QwtNullTransform_override_virtual_bounded(void* self, intptr_t slot);
double QwtNullTransform_virtualbase_bounded(const void* self, double value);

void QwtNullTransform_delete(QwtNullTransform* self);

QwtLogTransform* QwtLogTransform_new();
QwtLogTransform* QwtLogTransform_new2(QwtLogTransform* param1);
void QwtLogTransform_virtbase(QwtLogTransform* src, QwtTransform** outptr_QwtTransform);
double QwtLogTransform_transform(const QwtLogTransform* self, double value);
double QwtLogTransform_invTransform(const QwtLogTransform* self, double value);
double QwtLogTransform_bounded(const QwtLogTransform* self, double value);
QwtTransform* QwtLogTransform_copy(const QwtLogTransform* self);
void QwtLogTransform_operatorAssign(QwtLogTransform* self, QwtLogTransform* param1);

bool QwtLogTransform_override_virtual_transform(void* self, intptr_t slot);
double QwtLogTransform_virtualbase_transform(const void* self, double value);
bool QwtLogTransform_override_virtual_invTransform(void* self, intptr_t slot);
double QwtLogTransform_virtualbase_invTransform(const void* self, double value);
bool QwtLogTransform_override_virtual_bounded(void* self, intptr_t slot);
double QwtLogTransform_virtualbase_bounded(const void* self, double value);
bool QwtLogTransform_override_virtual_copy(void* self, intptr_t slot);
QwtTransform* QwtLogTransform_virtualbase_copy(const void* self);

void QwtLogTransform_delete(QwtLogTransform* self);

QwtPowerTransform* QwtPowerTransform_new(double exponent);
QwtPowerTransform* QwtPowerTransform_new2(QwtPowerTransform* param1);
void QwtPowerTransform_virtbase(QwtPowerTransform* src, QwtTransform** outptr_QwtTransform);
double QwtPowerTransform_transform(const QwtPowerTransform* self, double value);
double QwtPowerTransform_invTransform(const QwtPowerTransform* self, double value);
QwtTransform* QwtPowerTransform_copy(const QwtPowerTransform* self);

bool QwtPowerTransform_override_virtual_transform(void* self, intptr_t slot);
double QwtPowerTransform_virtualbase_transform(const void* self, double value);
bool QwtPowerTransform_override_virtual_invTransform(void* self, intptr_t slot);
double QwtPowerTransform_virtualbase_invTransform(const void* self, double value);
bool QwtPowerTransform_override_virtual_copy(void* self, intptr_t slot);
QwtTransform* QwtPowerTransform_virtualbase_copy(const void* self);
bool QwtPowerTransform_override_virtual_bounded(void* self, intptr_t slot);
double QwtPowerTransform_virtualbase_bounded(const void* self, double value);

void QwtPowerTransform_delete(QwtPowerTransform* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
