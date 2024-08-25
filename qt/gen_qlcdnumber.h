#ifndef GEN_QLCDNUMBER_H
#define GEN_QLCDNUMBER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QMetaObject* QLCDNumber_MetaObject(QLCDNumber* self);
void QLCDNumber_Tr(char* s, char** _out, int* _out_Strlen);
void QLCDNumber_TrUtf8(char* s, char** _out, int* _out_Strlen);
bool QLCDNumber_SmallDecimalPoint(QLCDNumber* self);
int QLCDNumber_DigitCount(QLCDNumber* self);
void QLCDNumber_SetDigitCount(QLCDNumber* self, int nDigits);
bool QLCDNumber_CheckOverflow(QLCDNumber* self, double num);
bool QLCDNumber_CheckOverflowWithNum(QLCDNumber* self, int num);
double QLCDNumber_Value(QLCDNumber* self);
int QLCDNumber_IntValue(QLCDNumber* self);
QSize* QLCDNumber_SizeHint(QLCDNumber* self);
void QLCDNumber_Display(QLCDNumber* self, const char* str, size_t str_Strlen);
void QLCDNumber_DisplayWithNum(QLCDNumber* self, int num);
void QLCDNumber_Display2(QLCDNumber* self, double num);
void QLCDNumber_SetHexMode(QLCDNumber* self);
void QLCDNumber_SetDecMode(QLCDNumber* self);
void QLCDNumber_SetOctMode(QLCDNumber* self);
void QLCDNumber_SetBinMode(QLCDNumber* self);
void QLCDNumber_SetSmallDecimalPoint(QLCDNumber* self, bool smallDecimalPoint);
void QLCDNumber_Overflow(QLCDNumber* self);
void QLCDNumber_connect_Overflow(QLCDNumber* self, void* slot);
void QLCDNumber_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QLCDNumber_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QLCDNumber_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QLCDNumber_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QLCDNumber_Delete(QLCDNumber* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
