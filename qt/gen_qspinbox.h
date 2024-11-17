#pragma once
#ifndef MIQT_QT_GEN_QSPINBOX_H
#define MIQT_QT_GEN_QSPINBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDoubleSpinBox;
class QMetaObject;
class QSpinBox;
class QWidget;
#else
typedef struct QDoubleSpinBox QDoubleSpinBox;
typedef struct QMetaObject QMetaObject;
typedef struct QSpinBox QSpinBox;
typedef struct QWidget QWidget;
#endif

QSpinBox* QSpinBox_new(QWidget* parent);
QSpinBox* QSpinBox_new2();
QMetaObject* QSpinBox_MetaObject(const QSpinBox* self);
void* QSpinBox_Metacast(QSpinBox* self, const char* param1);
struct miqt_string QSpinBox_Tr(const char* s);
struct miqt_string QSpinBox_TrUtf8(const char* s);
int QSpinBox_Value(const QSpinBox* self);
struct miqt_string QSpinBox_Prefix(const QSpinBox* self);
void QSpinBox_SetPrefix(QSpinBox* self, struct miqt_string prefix);
struct miqt_string QSpinBox_Suffix(const QSpinBox* self);
void QSpinBox_SetSuffix(QSpinBox* self, struct miqt_string suffix);
struct miqt_string QSpinBox_CleanText(const QSpinBox* self);
int QSpinBox_SingleStep(const QSpinBox* self);
void QSpinBox_SetSingleStep(QSpinBox* self, int val);
int QSpinBox_Minimum(const QSpinBox* self);
void QSpinBox_SetMinimum(QSpinBox* self, int min);
int QSpinBox_Maximum(const QSpinBox* self);
void QSpinBox_SetMaximum(QSpinBox* self, int max);
void QSpinBox_SetRange(QSpinBox* self, int min, int max);
int QSpinBox_StepType(const QSpinBox* self);
void QSpinBox_SetStepType(QSpinBox* self, int stepType);
int QSpinBox_DisplayIntegerBase(const QSpinBox* self);
void QSpinBox_SetDisplayIntegerBase(QSpinBox* self, int base);
void QSpinBox_SetValue(QSpinBox* self, int val);
void QSpinBox_ValueChanged(QSpinBox* self, int param1);
void QSpinBox_connect_ValueChanged(QSpinBox* self, intptr_t slot);
void QSpinBox_TextChanged(QSpinBox* self, struct miqt_string param1);
void QSpinBox_connect_TextChanged(QSpinBox* self, intptr_t slot);
void QSpinBox_ValueChangedWithQString(QSpinBox* self, struct miqt_string param1);
void QSpinBox_connect_ValueChangedWithQString(QSpinBox* self, intptr_t slot);
struct miqt_string QSpinBox_Tr2(const char* s, const char* c);
struct miqt_string QSpinBox_Tr3(const char* s, const char* c, int n);
struct miqt_string QSpinBox_TrUtf82(const char* s, const char* c);
struct miqt_string QSpinBox_TrUtf83(const char* s, const char* c, int n);
void QSpinBox_Delete(QSpinBox* self);

QDoubleSpinBox* QDoubleSpinBox_new(QWidget* parent);
QDoubleSpinBox* QDoubleSpinBox_new2();
QMetaObject* QDoubleSpinBox_MetaObject(const QDoubleSpinBox* self);
void* QDoubleSpinBox_Metacast(QDoubleSpinBox* self, const char* param1);
struct miqt_string QDoubleSpinBox_Tr(const char* s);
struct miqt_string QDoubleSpinBox_TrUtf8(const char* s);
double QDoubleSpinBox_Value(const QDoubleSpinBox* self);
struct miqt_string QDoubleSpinBox_Prefix(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetPrefix(QDoubleSpinBox* self, struct miqt_string prefix);
struct miqt_string QDoubleSpinBox_Suffix(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetSuffix(QDoubleSpinBox* self, struct miqt_string suffix);
struct miqt_string QDoubleSpinBox_CleanText(const QDoubleSpinBox* self);
double QDoubleSpinBox_SingleStep(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetSingleStep(QDoubleSpinBox* self, double val);
double QDoubleSpinBox_Minimum(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetMinimum(QDoubleSpinBox* self, double min);
double QDoubleSpinBox_Maximum(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetMaximum(QDoubleSpinBox* self, double max);
void QDoubleSpinBox_SetRange(QDoubleSpinBox* self, double min, double max);
int QDoubleSpinBox_StepType(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetStepType(QDoubleSpinBox* self, int stepType);
int QDoubleSpinBox_Decimals(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetDecimals(QDoubleSpinBox* self, int prec);
int QDoubleSpinBox_Validate(const QDoubleSpinBox* self, struct miqt_string input, int* pos);
double QDoubleSpinBox_ValueFromText(const QDoubleSpinBox* self, struct miqt_string text);
struct miqt_string QDoubleSpinBox_TextFromValue(const QDoubleSpinBox* self, double val);
void QDoubleSpinBox_Fixup(const QDoubleSpinBox* self, struct miqt_string str);
void QDoubleSpinBox_SetValue(QDoubleSpinBox* self, double val);
void QDoubleSpinBox_ValueChanged(QDoubleSpinBox* self, double param1);
void QDoubleSpinBox_connect_ValueChanged(QDoubleSpinBox* self, intptr_t slot);
void QDoubleSpinBox_TextChanged(QDoubleSpinBox* self, struct miqt_string param1);
void QDoubleSpinBox_connect_TextChanged(QDoubleSpinBox* self, intptr_t slot);
void QDoubleSpinBox_ValueChangedWithQString(QDoubleSpinBox* self, struct miqt_string param1);
void QDoubleSpinBox_connect_ValueChangedWithQString(QDoubleSpinBox* self, intptr_t slot);
struct miqt_string QDoubleSpinBox_Tr2(const char* s, const char* c);
struct miqt_string QDoubleSpinBox_Tr3(const char* s, const char* c, int n);
struct miqt_string QDoubleSpinBox_TrUtf82(const char* s, const char* c);
struct miqt_string QDoubleSpinBox_TrUtf83(const char* s, const char* c, int n);
void QDoubleSpinBox_Delete(QDoubleSpinBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
