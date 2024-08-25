#ifndef GEN_QRANDOM_H
#define GEN_QRANDOM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QRandomGenerator* QRandomGenerator_new2(uint32_t* seedBuffer, size_t lenVal);
QRandomGenerator* QRandomGenerator_new3(uint32_t* begin, uint32_t* end);
QRandomGenerator* QRandomGenerator_new4(QRandomGenerator* other);
QRandomGenerator* QRandomGenerator_new5(uint32_t seedValue);
void QRandomGenerator_OperatorAssign(QRandomGenerator* self, QRandomGenerator* other);
uint32_t QRandomGenerator_Generate(QRandomGenerator* self);
uint64_t QRandomGenerator_Generate64(QRandomGenerator* self);
double QRandomGenerator_GenerateDouble(QRandomGenerator* self);
double QRandomGenerator_Bounded(QRandomGenerator* self, double highest);
uint32_t QRandomGenerator_BoundedWithHighest(QRandomGenerator* self, uint32_t highest);
uint32_t QRandomGenerator_Bounded2(QRandomGenerator* self, uint32_t lowest, uint32_t highest);
int QRandomGenerator_Bounded3(QRandomGenerator* self, int highest);
int QRandomGenerator_Bounded4(QRandomGenerator* self, int lowest, int highest);
void QRandomGenerator_Generate2(QRandomGenerator* self, uint32_t* begin, uint32_t* end);
void QRandomGenerator_Seed(QRandomGenerator* self);
void QRandomGenerator_Discard(QRandomGenerator* self, unsigned long long z);
QRandomGenerator* QRandomGenerator_System();
QRandomGenerator* QRandomGenerator_Global();
QRandomGenerator* QRandomGenerator_SecurelySeeded();
void QRandomGenerator_Seed1(QRandomGenerator* self, uint32_t s);
void QRandomGenerator_Delete(QRandomGenerator* self);

QRandomGenerator64* QRandomGenerator64_new();
QRandomGenerator64* QRandomGenerator64_new2(uint32_t* seedBuffer, size_t lenVal);
QRandomGenerator64* QRandomGenerator64_new3(uint32_t* begin, uint32_t* end);
QRandomGenerator64* QRandomGenerator64_new4(QRandomGenerator* other);
QRandomGenerator64* QRandomGenerator64_new5(QRandomGenerator64* param1);
QRandomGenerator64* QRandomGenerator64_new6(uint32_t seedValue);
uint64_t QRandomGenerator64_Generate(QRandomGenerator64* self);
void QRandomGenerator64_Discard(QRandomGenerator64* self, unsigned long long z);
QRandomGenerator64* QRandomGenerator64_System();
QRandomGenerator64* QRandomGenerator64_Global();
QRandomGenerator64* QRandomGenerator64_SecurelySeeded();
void QRandomGenerator64_OperatorAssign(QRandomGenerator64* self, QRandomGenerator64* param1);
void QRandomGenerator64_Delete(QRandomGenerator64* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
