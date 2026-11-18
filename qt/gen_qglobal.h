#pragma once
#ifndef MIQT_QT_GEN_QGLOBAL_H
#define MIQT_QT_GEN_QGLOBAL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
#endif

int miqt_QRoundWithDouble(double d);
int miqt_QRoundWithFloat(float d);
long long miqt_QRound64WithDouble(double d);
long long miqt_QRound64WithFloat(float d);
void miqt_Noop2();
void miqt_QTerminate2();
struct miqt_string miqt_ErrorStringWithErrorCode(int errorCode);
void miqt_Assert2(const char* assertion, const char* file, int line);
void miqt_AssertX2(const char* where, const char* what, const char* file, int line);
void miqt_CheckPointer2(const char* param1, int param2);
void miqt_QBadAlloc2();
bool miqt_QFuzzyCompare3(double p1, double p2);
bool miqt_QFuzzyCompare4(float p1, float p2);
bool miqt_QFuzzyIsNullWithDouble(double d);
bool miqt_QFuzzyIsNullWithFloat(float f);
bool miqt_QIsNullWithDouble(double d);
bool miqt_QIsNullWithFloat(float f);
void* miqt_QMallocAligned2(size_t size, size_t alignment);
void* miqt_QReallocAligned2(void* ptr, size_t size, size_t oldsize, size_t alignment);
void miqt_QFreeAlignedWithPtr(void* ptr);
struct miqt_string miqt_QtTrId2(const char* id, int n);
struct miqt_string miqt_QgetenvWithVarName(const char* varName);
struct miqt_string miqt_QEnvironmentVariableWithVarName(const char* varName);
struct miqt_string miqt_QEnvironmentVariable2(const char* varName, struct miqt_string defaultValue);
bool miqt_Qputenv2(const char* varName, struct miqt_string value);
bool miqt_QunsetenvWithVarName(const char* varName);
bool miqt_QEnvironmentVariableIsEmptyWithVarName(const char* varName);
bool miqt_QEnvironmentVariableIsSetWithVarName(const char* varName);
int miqt_QEnvironmentVariableIntValue2(const char* varName, bool* ok);
int miqt_QIntCastWithDouble(double f);
int miqt_QIntCastWithFloat(float f);
void miqt_QsrandWithSeed(unsigned int seed);
int miqt_Qrand2();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
