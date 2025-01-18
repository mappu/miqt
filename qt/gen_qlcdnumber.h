#pragma once
#ifndef MIQT_QT_GEN_QLCDNUMBER_H
#define MIQT_QT_GEN_QLCDNUMBER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
class QFrame;
class QLCDNumber;
class QMetaObject;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QSize;
class QWidget;
#else
typedef struct QEvent QEvent;
typedef struct QFrame QFrame;
typedef struct QLCDNumber QLCDNumber;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QLCDNumber* QLCDNumber_new(QWidget* parent);
QLCDNumber* QLCDNumber_new2();
QLCDNumber* QLCDNumber_new3(unsigned int numDigits);
QLCDNumber* QLCDNumber_new4(unsigned int numDigits, QWidget* parent);
void QLCDNumber_virtbase(QLCDNumber* src, QFrame** outptr_QFrame);
QMetaObject* QLCDNumber_MetaObject(const QLCDNumber* self);
void* QLCDNumber_Metacast(QLCDNumber* self, const char* param1);
struct miqt_string QLCDNumber_Tr(const char* s);
struct miqt_string QLCDNumber_TrUtf8(const char* s);
bool QLCDNumber_SmallDecimalPoint(const QLCDNumber* self);
int QLCDNumber_DigitCount(const QLCDNumber* self);
void QLCDNumber_SetDigitCount(QLCDNumber* self, int nDigits);
bool QLCDNumber_CheckOverflow(const QLCDNumber* self, double num);
bool QLCDNumber_CheckOverflowWithNum(const QLCDNumber* self, int num);
int QLCDNumber_Mode(const QLCDNumber* self);
void QLCDNumber_SetMode(QLCDNumber* self, int mode);
int QLCDNumber_SegmentStyle(const QLCDNumber* self);
void QLCDNumber_SetSegmentStyle(QLCDNumber* self, int segmentStyle);
double QLCDNumber_Value(const QLCDNumber* self);
int QLCDNumber_IntValue(const QLCDNumber* self);
QSize* QLCDNumber_SizeHint(const QLCDNumber* self);
void QLCDNumber_Display(QLCDNumber* self, struct miqt_string str);
void QLCDNumber_DisplayWithNum(QLCDNumber* self, int num);
void QLCDNumber_Display2(QLCDNumber* self, double num);
void QLCDNumber_SetHexMode(QLCDNumber* self);
void QLCDNumber_SetDecMode(QLCDNumber* self);
void QLCDNumber_SetOctMode(QLCDNumber* self);
void QLCDNumber_SetBinMode(QLCDNumber* self);
void QLCDNumber_SetSmallDecimalPoint(QLCDNumber* self, bool smallDecimalPoint);
void QLCDNumber_Overflow(QLCDNumber* self);
void QLCDNumber_connect_Overflow(QLCDNumber* self, intptr_t slot);
bool QLCDNumber_Event(QLCDNumber* self, QEvent* e);
void QLCDNumber_PaintEvent(QLCDNumber* self, QPaintEvent* param1);
struct miqt_string QLCDNumber_Tr2(const char* s, const char* c);
struct miqt_string QLCDNumber_Tr3(const char* s, const char* c, int n);
struct miqt_string QLCDNumber_TrUtf82(const char* s, const char* c);
struct miqt_string QLCDNumber_TrUtf83(const char* s, const char* c, int n);
bool QLCDNumber_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QLCDNumber_virtualbase_SizeHint(const void* self);
bool QLCDNumber_override_virtual_Event(void* self, intptr_t slot);
bool QLCDNumber_virtualbase_Event(void* self, QEvent* e);
bool QLCDNumber_override_virtual_PaintEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QLCDNumber_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QLCDNumber_Delete(QLCDNumber* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
