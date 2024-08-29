#ifndef GEN_QSPINBOX_H
#define GEN_QSPINBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QSpinBox* QSpinBox_new();
QSpinBox* QSpinBox_new2(QWidget* parent);
QMetaObject* QSpinBox_MetaObject(QSpinBox* self);
void QSpinBox_Tr(const char* s, char** _out, int* _out_Strlen);
void QSpinBox_TrUtf8(const char* s, char** _out, int* _out_Strlen);
int QSpinBox_Value(QSpinBox* self);
void QSpinBox_Prefix(QSpinBox* self, char** _out, int* _out_Strlen);
void QSpinBox_SetPrefix(QSpinBox* self, const char* prefix, size_t prefix_Strlen);
void QSpinBox_Suffix(QSpinBox* self, char** _out, int* _out_Strlen);
void QSpinBox_SetSuffix(QSpinBox* self, const char* suffix, size_t suffix_Strlen);
void QSpinBox_CleanText(QSpinBox* self, char** _out, int* _out_Strlen);
int QSpinBox_SingleStep(QSpinBox* self);
void QSpinBox_SetSingleStep(QSpinBox* self, int val);
int QSpinBox_Minimum(QSpinBox* self);
void QSpinBox_SetMinimum(QSpinBox* self, int min);
int QSpinBox_Maximum(QSpinBox* self);
void QSpinBox_SetMaximum(QSpinBox* self, int max);
void QSpinBox_SetRange(QSpinBox* self, int min, int max);
uintptr_t QSpinBox_StepType(QSpinBox* self);
void QSpinBox_SetStepType(QSpinBox* self, uintptr_t stepType);
int QSpinBox_DisplayIntegerBase(QSpinBox* self);
void QSpinBox_SetDisplayIntegerBase(QSpinBox* self, int base);
void QSpinBox_SetValue(QSpinBox* self, int val);
void QSpinBox_ValueChanged(QSpinBox* self, int param1);
void QSpinBox_connect_ValueChanged(QSpinBox* self, void* slot);
void QSpinBox_TextChanged(QSpinBox* self, const char* param1, size_t param1_Strlen);
void QSpinBox_connect_TextChanged(QSpinBox* self, void* slot);
void QSpinBox_ValueChangedWithQString(QSpinBox* self, const char* param1, size_t param1_Strlen);
void QSpinBox_connect_ValueChangedWithQString(QSpinBox* self, void* slot);
void QSpinBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QSpinBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QSpinBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QSpinBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QSpinBox_Delete(QSpinBox* self);

QDoubleSpinBox* QDoubleSpinBox_new();
QDoubleSpinBox* QDoubleSpinBox_new2(QWidget* parent);
QMetaObject* QDoubleSpinBox_MetaObject(QDoubleSpinBox* self);
void QDoubleSpinBox_Tr(const char* s, char** _out, int* _out_Strlen);
void QDoubleSpinBox_TrUtf8(const char* s, char** _out, int* _out_Strlen);
double QDoubleSpinBox_Value(QDoubleSpinBox* self);
void QDoubleSpinBox_Prefix(QDoubleSpinBox* self, char** _out, int* _out_Strlen);
void QDoubleSpinBox_SetPrefix(QDoubleSpinBox* self, const char* prefix, size_t prefix_Strlen);
void QDoubleSpinBox_Suffix(QDoubleSpinBox* self, char** _out, int* _out_Strlen);
void QDoubleSpinBox_SetSuffix(QDoubleSpinBox* self, const char* suffix, size_t suffix_Strlen);
void QDoubleSpinBox_CleanText(QDoubleSpinBox* self, char** _out, int* _out_Strlen);
double QDoubleSpinBox_SingleStep(QDoubleSpinBox* self);
void QDoubleSpinBox_SetSingleStep(QDoubleSpinBox* self, double val);
double QDoubleSpinBox_Minimum(QDoubleSpinBox* self);
void QDoubleSpinBox_SetMinimum(QDoubleSpinBox* self, double min);
double QDoubleSpinBox_Maximum(QDoubleSpinBox* self);
void QDoubleSpinBox_SetMaximum(QDoubleSpinBox* self, double max);
void QDoubleSpinBox_SetRange(QDoubleSpinBox* self, double min, double max);
uintptr_t QDoubleSpinBox_StepType(QDoubleSpinBox* self);
void QDoubleSpinBox_SetStepType(QDoubleSpinBox* self, uintptr_t stepType);
int QDoubleSpinBox_Decimals(QDoubleSpinBox* self);
void QDoubleSpinBox_SetDecimals(QDoubleSpinBox* self, int prec);
uintptr_t QDoubleSpinBox_Validate(QDoubleSpinBox* self, const char* input, size_t input_Strlen, int* pos);
double QDoubleSpinBox_ValueFromText(QDoubleSpinBox* self, const char* text, size_t text_Strlen);
void QDoubleSpinBox_TextFromValue(QDoubleSpinBox* self, double val, char** _out, int* _out_Strlen);
void QDoubleSpinBox_Fixup(QDoubleSpinBox* self, const char* str, size_t str_Strlen);
void QDoubleSpinBox_SetValue(QDoubleSpinBox* self, double val);
void QDoubleSpinBox_ValueChanged(QDoubleSpinBox* self, double param1);
void QDoubleSpinBox_connect_ValueChanged(QDoubleSpinBox* self, void* slot);
void QDoubleSpinBox_TextChanged(QDoubleSpinBox* self, const char* param1, size_t param1_Strlen);
void QDoubleSpinBox_connect_TextChanged(QDoubleSpinBox* self, void* slot);
void QDoubleSpinBox_ValueChangedWithQString(QDoubleSpinBox* self, const char* param1, size_t param1_Strlen);
void QDoubleSpinBox_connect_ValueChangedWithQString(QDoubleSpinBox* self, void* slot);
void QDoubleSpinBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDoubleSpinBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDoubleSpinBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDoubleSpinBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDoubleSpinBox_Delete(QDoubleSpinBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
