#ifndef GEN_QLCDNUMBER_H
#define GEN_QLCDNUMBER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLCDNumber;
class QMetaObject;
class QSize;
class QWidget;
#else
typedef struct QLCDNumber QLCDNumber;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QLCDNumber* QLCDNumber_new();
QLCDNumber* QLCDNumber_new2(unsigned int numDigits);
QLCDNumber* QLCDNumber_new3(QWidget* parent);
QLCDNumber* QLCDNumber_new4(unsigned int numDigits, QWidget* parent);
QMetaObject* QLCDNumber_MetaObject(const QLCDNumber* self);
void* QLCDNumber_Metacast(QLCDNumber* self, const char* param1);
struct miqt_string QLCDNumber_Tr(const char* s);
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
struct miqt_string QLCDNumber_Tr2(const char* s, const char* c);
struct miqt_string QLCDNumber_Tr3(const char* s, const char* c, int n);
void QLCDNumber_Delete(QLCDNumber* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
