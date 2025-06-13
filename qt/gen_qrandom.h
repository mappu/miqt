#pragma once
#ifndef MIQT_QT_GEN_QRANDOM_H
#define MIQT_QT_GEN_QRANDOM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRandomGenerator;
class QRandomGenerator64;
#else
typedef struct QRandomGenerator QRandomGenerator;
typedef struct QRandomGenerator64 QRandomGenerator64;
#endif

QRandomGenerator* QRandomGenerator_new();
QRandomGenerator* QRandomGenerator_new2(const unsigned int* seedBuffer, ptrdiff_t len);
QRandomGenerator* QRandomGenerator_new3(const unsigned int* begin, const unsigned int* end);
QRandomGenerator* QRandomGenerator_new4(QRandomGenerator* other);
QRandomGenerator* QRandomGenerator_new5(unsigned int seedValue);
void QRandomGenerator_operatorAssign(QRandomGenerator* self, QRandomGenerator* other);
unsigned int QRandomGenerator_generate(QRandomGenerator* self);
unsigned long long QRandomGenerator_generate64(QRandomGenerator* self);
double QRandomGenerator_generateDouble(QRandomGenerator* self);
double QRandomGenerator_bounded(QRandomGenerator* self, double highest);
unsigned int QRandomGenerator_boundedWithHighest(QRandomGenerator* self, unsigned int highest);
unsigned int QRandomGenerator_bounded2(QRandomGenerator* self, unsigned int lowest, unsigned int highest);
int QRandomGenerator_bounded3(QRandomGenerator* self, int highest);
int QRandomGenerator_bounded4(QRandomGenerator* self, int lowest, int highest);
void QRandomGenerator_generate2(QRandomGenerator* self, unsigned int* begin, unsigned int* end);
unsigned int QRandomGenerator_operatorCall(QRandomGenerator* self);
void QRandomGenerator_seed(QRandomGenerator* self);
void QRandomGenerator_discard(QRandomGenerator* self, unsigned long long z);
unsigned int QRandomGenerator_min();
unsigned int QRandomGenerator_max();
QRandomGenerator* QRandomGenerator_system();
QRandomGenerator* QRandomGenerator_global();
QRandomGenerator* QRandomGenerator_securelySeeded();
void QRandomGenerator_seedWithQuint32(QRandomGenerator* self, unsigned int s);

void QRandomGenerator_delete(QRandomGenerator* self);

QRandomGenerator64* QRandomGenerator64_new();
QRandomGenerator64* QRandomGenerator64_new2(const unsigned int* seedBuffer, ptrdiff_t len);
QRandomGenerator64* QRandomGenerator64_new3(const unsigned int* begin, const unsigned int* end);
QRandomGenerator64* QRandomGenerator64_new4(QRandomGenerator* other);
QRandomGenerator64* QRandomGenerator64_new5(QRandomGenerator64* param1);
QRandomGenerator64* QRandomGenerator64_new6(unsigned int seedValue);
void QRandomGenerator64_virtbase(QRandomGenerator64* src, QRandomGenerator** outptr_QRandomGenerator);
unsigned long long QRandomGenerator64_generate(QRandomGenerator64* self);
unsigned long long QRandomGenerator64_operatorCall(QRandomGenerator64* self);
void QRandomGenerator64_discard(QRandomGenerator64* self, unsigned long long z);
unsigned long long QRandomGenerator64_min();
unsigned long long QRandomGenerator64_max();
QRandomGenerator64* QRandomGenerator64_system();
QRandomGenerator64* QRandomGenerator64_global();
QRandomGenerator64* QRandomGenerator64_securelySeeded();
void QRandomGenerator64_operatorAssign(QRandomGenerator64* self, QRandomGenerator64* param1);

void QRandomGenerator64_delete(QRandomGenerator64* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
