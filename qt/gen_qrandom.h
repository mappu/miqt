#ifndef GEN_QRANDOM_H
#define GEN_QRANDOM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QRandomGenerator* QRandomGenerator_new2(const unsigned int* seedBuffer, size_t lenVal);
QRandomGenerator* QRandomGenerator_new3(const unsigned int* begin, const unsigned int* end);
QRandomGenerator* QRandomGenerator_new4(QRandomGenerator* other);
QRandomGenerator* QRandomGenerator_new5(unsigned int seedValue);
void QRandomGenerator_OperatorAssign(QRandomGenerator* self, QRandomGenerator* other);
unsigned int QRandomGenerator_Generate(QRandomGenerator* self);
unsigned long long QRandomGenerator_Generate64(QRandomGenerator* self);
double QRandomGenerator_GenerateDouble(QRandomGenerator* self);
double QRandomGenerator_Bounded(QRandomGenerator* self, double highest);
unsigned int QRandomGenerator_BoundedWithHighest(QRandomGenerator* self, unsigned int highest);
unsigned int QRandomGenerator_Bounded2(QRandomGenerator* self, unsigned int lowest, unsigned int highest);
int QRandomGenerator_Bounded3(QRandomGenerator* self, int highest);
int QRandomGenerator_Bounded4(QRandomGenerator* self, int lowest, int highest);
void QRandomGenerator_Generate2(QRandomGenerator* self, unsigned int* begin, unsigned int* end);
unsigned int QRandomGenerator_OperatorCall(QRandomGenerator* self);
void QRandomGenerator_Seed(QRandomGenerator* self);
void QRandomGenerator_Discard(QRandomGenerator* self, unsigned long long z);
unsigned int QRandomGenerator_Min();
unsigned int QRandomGenerator_Max();
QRandomGenerator* QRandomGenerator_System();
QRandomGenerator* QRandomGenerator_Global();
QRandomGenerator* QRandomGenerator_SecurelySeeded();
void QRandomGenerator_Seed1(QRandomGenerator* self, unsigned int s);
void QRandomGenerator_Delete(QRandomGenerator* self);

QRandomGenerator64* QRandomGenerator64_new();
QRandomGenerator64* QRandomGenerator64_new2(const unsigned int* seedBuffer, size_t lenVal);
QRandomGenerator64* QRandomGenerator64_new3(const unsigned int* begin, const unsigned int* end);
QRandomGenerator64* QRandomGenerator64_new4(QRandomGenerator* other);
QRandomGenerator64* QRandomGenerator64_new5(QRandomGenerator64* param1);
QRandomGenerator64* QRandomGenerator64_new6(unsigned int seedValue);
unsigned long long QRandomGenerator64_Generate(QRandomGenerator64* self);
unsigned long long QRandomGenerator64_OperatorCall(QRandomGenerator64* self);
void QRandomGenerator64_Discard(QRandomGenerator64* self, unsigned long long z);
unsigned long long QRandomGenerator64_Min();
unsigned long long QRandomGenerator64_Max();
QRandomGenerator64* QRandomGenerator64_System();
QRandomGenerator64* QRandomGenerator64_Global();
QRandomGenerator64* QRandomGenerator64_SecurelySeeded();
void QRandomGenerator64_OperatorAssign(QRandomGenerator64* self, QRandomGenerator64* param1);
void QRandomGenerator64_Delete(QRandomGenerator64* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
