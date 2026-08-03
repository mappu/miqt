#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_SCALE_ENGINE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_SCALE_ENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QwtInterval;
class QwtLinearScaleEngine;
class QwtLogScaleEngine;
class QwtScaleArithmetic;
class QwtScaleDiv;
class QwtScaleEngine;
class QwtTransform;
#else
typedef struct QwtInterval QwtInterval;
typedef struct QwtLinearScaleEngine QwtLinearScaleEngine;
typedef struct QwtLogScaleEngine QwtLogScaleEngine;
typedef struct QwtScaleArithmetic QwtScaleArithmetic;
typedef struct QwtScaleDiv QwtScaleDiv;
typedef struct QwtScaleEngine QwtScaleEngine;
typedef struct QwtTransform QwtTransform;
#endif

double QwtScaleArithmetic_ceilEps(double value, double intervalSize);
double QwtScaleArithmetic_floorEps(double value, double intervalSize);
double QwtScaleArithmetic_divideEps(double intervalSize, double numSteps);
double QwtScaleArithmetic_divideInterval(double intervalSize, int numSteps, unsigned int base);

void QwtScaleArithmetic_delete(QwtScaleArithmetic* self);

QwtScaleEngine* QwtScaleEngine_new();
QwtScaleEngine* QwtScaleEngine_new2(QwtScaleEngine* param1);
QwtScaleEngine* QwtScaleEngine_new3(unsigned int base);
void QwtScaleEngine_setBase(QwtScaleEngine* self, unsigned int base);
unsigned int QwtScaleEngine_base(const QwtScaleEngine* self);
void QwtScaleEngine_setAttribute(QwtScaleEngine* self, int param1);
bool QwtScaleEngine_testAttribute(const QwtScaleEngine* self, int param1);
void QwtScaleEngine_setAttributes(QwtScaleEngine* self, int attributes);
int QwtScaleEngine_attributes(const QwtScaleEngine* self);
void QwtScaleEngine_setReference(QwtScaleEngine* self, double reference);
double QwtScaleEngine_reference(const QwtScaleEngine* self);
void QwtScaleEngine_setMargins(QwtScaleEngine* self, double lower, double upper);
double QwtScaleEngine_lowerMargin(const QwtScaleEngine* self);
double QwtScaleEngine_upperMargin(const QwtScaleEngine* self);
void QwtScaleEngine_autoScale(const QwtScaleEngine* self, int maxNumSteps, double* x1, double* x2, double* stepSize);
QwtScaleDiv* QwtScaleEngine_divideScale(const QwtScaleEngine* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize);
void QwtScaleEngine_setTransformation(QwtScaleEngine* self, QwtTransform* transformation);
QwtTransform* QwtScaleEngine_transformation(const QwtScaleEngine* self);
void QwtScaleEngine_operatorAssign(QwtScaleEngine* self, QwtScaleEngine* param1);
void QwtScaleEngine_setAttribute2(QwtScaleEngine* self, int param1, bool on);

bool QwtScaleEngine_override_virtual_autoScale(void* self, intptr_t slot);
void QwtScaleEngine_virtualbase_autoScale(const void* self, int maxNumSteps, double* x1, double* x2, double* stepSize);
bool QwtScaleEngine_override_virtual_divideScale(void* self, intptr_t slot);
QwtScaleDiv* QwtScaleEngine_virtualbase_divideScale(const void* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize);

bool QwtScaleEngine_protectedbase_contains(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double value);
struct miqt_array /* of double */  QwtScaleEngine_protectedbase_strip(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  param1, QwtInterval* param2);
double QwtScaleEngine_protectedbase_divideInterval(bool* _dynamic_cast_ok, const void* self, double intervalSize, int numSteps);
QwtInterval* QwtScaleEngine_protectedbase_buildInterval(bool* _dynamic_cast_ok, const void* self, double value);

void QwtScaleEngine_delete(QwtScaleEngine* self);

QwtLinearScaleEngine* QwtLinearScaleEngine_new();
QwtLinearScaleEngine* QwtLinearScaleEngine_new2(QwtLinearScaleEngine* param1);
QwtLinearScaleEngine* QwtLinearScaleEngine_new3(unsigned int base);
void QwtLinearScaleEngine_virtbase(QwtLinearScaleEngine* src, QwtScaleEngine** outptr_QwtScaleEngine);
void QwtLinearScaleEngine_autoScale(const QwtLinearScaleEngine* self, int maxNumSteps, double* x1, double* x2, double* stepSize);
QwtScaleDiv* QwtLinearScaleEngine_divideScale(const QwtLinearScaleEngine* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize);
void QwtLinearScaleEngine_operatorAssign(QwtLinearScaleEngine* self, QwtLinearScaleEngine* param1);

bool QwtLinearScaleEngine_override_virtual_autoScale(void* self, intptr_t slot);
void QwtLinearScaleEngine_virtualbase_autoScale(const void* self, int maxNumSteps, double* x1, double* x2, double* stepSize);
bool QwtLinearScaleEngine_override_virtual_divideScale(void* self, intptr_t slot);
QwtScaleDiv* QwtLinearScaleEngine_virtualbase_divideScale(const void* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize);

QwtInterval* QwtLinearScaleEngine_protectedbase_align(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize);
void QwtLinearScaleEngine_protectedbase_buildTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize, int maxMinorSteps, struct miqt_array /* of double */  ticks);
struct miqt_array /* of double */  QwtLinearScaleEngine_protectedbase_buildMajorTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* interval, double stepSize);
void QwtLinearScaleEngine_protectedbase_buildMinorTicks(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  majorTicks, int maxMinorSteps, double stepSize, struct miqt_array /* of double */  minorTicks, struct miqt_array /* of double */  mediumTicks);
bool QwtLinearScaleEngine_protectedbase_contains(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double value);
struct miqt_array /* of double */  QwtLinearScaleEngine_protectedbase_strip(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  param1, QwtInterval* param2);
double QwtLinearScaleEngine_protectedbase_divideInterval(bool* _dynamic_cast_ok, const void* self, double intervalSize, int numSteps);
QwtInterval* QwtLinearScaleEngine_protectedbase_buildInterval(bool* _dynamic_cast_ok, const void* self, double value);

void QwtLinearScaleEngine_delete(QwtLinearScaleEngine* self);

QwtLogScaleEngine* QwtLogScaleEngine_new();
QwtLogScaleEngine* QwtLogScaleEngine_new2(QwtLogScaleEngine* param1);
QwtLogScaleEngine* QwtLogScaleEngine_new3(unsigned int base);
void QwtLogScaleEngine_virtbase(QwtLogScaleEngine* src, QwtScaleEngine** outptr_QwtScaleEngine);
void QwtLogScaleEngine_autoScale(const QwtLogScaleEngine* self, int maxNumSteps, double* x1, double* x2, double* stepSize);
QwtScaleDiv* QwtLogScaleEngine_divideScale(const QwtLogScaleEngine* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize);
void QwtLogScaleEngine_operatorAssign(QwtLogScaleEngine* self, QwtLogScaleEngine* param1);

bool QwtLogScaleEngine_override_virtual_autoScale(void* self, intptr_t slot);
void QwtLogScaleEngine_virtualbase_autoScale(const void* self, int maxNumSteps, double* x1, double* x2, double* stepSize);
bool QwtLogScaleEngine_override_virtual_divideScale(void* self, intptr_t slot);
QwtScaleDiv* QwtLogScaleEngine_virtualbase_divideScale(const void* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize);

QwtInterval* QwtLogScaleEngine_protectedbase_align(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize);
void QwtLogScaleEngine_protectedbase_buildTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize, int maxMinorSteps, struct miqt_array /* of double */  ticks);
struct miqt_array /* of double */  QwtLogScaleEngine_protectedbase_buildMajorTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* interval, double stepSize);
void QwtLogScaleEngine_protectedbase_buildMinorTicks(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  majorTicks, int maxMinorSteps, double stepSize, struct miqt_array /* of double */  minorTicks, struct miqt_array /* of double */  mediumTicks);
bool QwtLogScaleEngine_protectedbase_contains(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double value);
struct miqt_array /* of double */  QwtLogScaleEngine_protectedbase_strip(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  param1, QwtInterval* param2);
double QwtLogScaleEngine_protectedbase_divideInterval(bool* _dynamic_cast_ok, const void* self, double intervalSize, int numSteps);
QwtInterval* QwtLogScaleEngine_protectedbase_buildInterval(bool* _dynamic_cast_ok, const void* self, double value);

void QwtLogScaleEngine_delete(QwtLogScaleEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
