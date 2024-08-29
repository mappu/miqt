#ifndef GEN_QVALIDATOR_H
#define GEN_QVALIDATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDoubleValidator;
class QIntValidator;
class QLocale;
class QMetaObject;
class QObject;
class QRegExp;
class QRegExpValidator;
class QRegularExpression;
class QRegularExpressionValidator;
class QValidator;
#else
typedef struct QDoubleValidator QDoubleValidator;
typedef struct QIntValidator QIntValidator;
typedef struct QLocale QLocale;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegExp QRegExp;
typedef struct QRegExpValidator QRegExpValidator;
typedef struct QRegularExpression QRegularExpression;
typedef struct QRegularExpressionValidator QRegularExpressionValidator;
typedef struct QValidator QValidator;
#endif

QMetaObject* QValidator_MetaObject(QValidator* self);
void QValidator_Tr(const char* s, char** _out, int* _out_Strlen);
void QValidator_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QValidator_SetLocale(QValidator* self, QLocale* locale);
QLocale* QValidator_Locale(QValidator* self);
uintptr_t QValidator_Validate(QValidator* self, const char* param1, size_t param1_Strlen, int* param2);
void QValidator_Fixup(QValidator* self, const char* param1, size_t param1_Strlen);
void QValidator_Changed(QValidator* self);
void QValidator_connect_Changed(QValidator* self, void* slot);
void QValidator_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QValidator_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QValidator_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QValidator_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QValidator_Delete(QValidator* self);

QIntValidator* QIntValidator_new();
QIntValidator* QIntValidator_new2(int bottom, int top);
QIntValidator* QIntValidator_new3(QObject* parent);
QIntValidator* QIntValidator_new4(int bottom, int top, QObject* parent);
QMetaObject* QIntValidator_MetaObject(QIntValidator* self);
void QIntValidator_Tr(const char* s, char** _out, int* _out_Strlen);
void QIntValidator_TrUtf8(const char* s, char** _out, int* _out_Strlen);
uintptr_t QIntValidator_Validate(QIntValidator* self, const char* param1, size_t param1_Strlen, int* param2);
void QIntValidator_Fixup(QIntValidator* self, const char* input, size_t input_Strlen);
void QIntValidator_SetBottom(QIntValidator* self, int bottom);
void QIntValidator_SetTop(QIntValidator* self, int top);
void QIntValidator_SetRange(QIntValidator* self, int bottom, int top);
int QIntValidator_Bottom(QIntValidator* self);
int QIntValidator_Top(QIntValidator* self);
void QIntValidator_BottomChanged(QIntValidator* self, int bottom);
void QIntValidator_connect_BottomChanged(QIntValidator* self, void* slot);
void QIntValidator_TopChanged(QIntValidator* self, int top);
void QIntValidator_connect_TopChanged(QIntValidator* self, void* slot);
void QIntValidator_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QIntValidator_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QIntValidator_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QIntValidator_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QIntValidator_Delete(QIntValidator* self);

QDoubleValidator* QDoubleValidator_new();
QDoubleValidator* QDoubleValidator_new2(double bottom, double top, int decimals);
QDoubleValidator* QDoubleValidator_new3(QObject* parent);
QDoubleValidator* QDoubleValidator_new4(double bottom, double top, int decimals, QObject* parent);
QMetaObject* QDoubleValidator_MetaObject(QDoubleValidator* self);
void QDoubleValidator_Tr(const char* s, char** _out, int* _out_Strlen);
void QDoubleValidator_TrUtf8(const char* s, char** _out, int* _out_Strlen);
uintptr_t QDoubleValidator_Validate(QDoubleValidator* self, const char* param1, size_t param1_Strlen, int* param2);
void QDoubleValidator_SetRange(QDoubleValidator* self, double bottom, double top);
void QDoubleValidator_SetBottom(QDoubleValidator* self, double bottom);
void QDoubleValidator_SetTop(QDoubleValidator* self, double top);
void QDoubleValidator_SetDecimals(QDoubleValidator* self, int decimals);
void QDoubleValidator_SetNotation(QDoubleValidator* self, uintptr_t notation);
double QDoubleValidator_Bottom(QDoubleValidator* self);
double QDoubleValidator_Top(QDoubleValidator* self);
int QDoubleValidator_Decimals(QDoubleValidator* self);
uintptr_t QDoubleValidator_Notation(QDoubleValidator* self);
void QDoubleValidator_BottomChanged(QDoubleValidator* self, double bottom);
void QDoubleValidator_connect_BottomChanged(QDoubleValidator* self, void* slot);
void QDoubleValidator_TopChanged(QDoubleValidator* self, double top);
void QDoubleValidator_connect_TopChanged(QDoubleValidator* self, void* slot);
void QDoubleValidator_DecimalsChanged(QDoubleValidator* self, int decimals);
void QDoubleValidator_connect_DecimalsChanged(QDoubleValidator* self, void* slot);
void QDoubleValidator_NotationChanged(QDoubleValidator* self, uintptr_t notation);
void QDoubleValidator_connect_NotationChanged(QDoubleValidator* self, void* slot);
void QDoubleValidator_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDoubleValidator_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDoubleValidator_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDoubleValidator_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDoubleValidator_SetRange3(QDoubleValidator* self, double bottom, double top, int decimals);
void QDoubleValidator_Delete(QDoubleValidator* self);

QRegExpValidator* QRegExpValidator_new();
QRegExpValidator* QRegExpValidator_new2(QRegExp* rx);
QRegExpValidator* QRegExpValidator_new3(QObject* parent);
QRegExpValidator* QRegExpValidator_new4(QRegExp* rx, QObject* parent);
QMetaObject* QRegExpValidator_MetaObject(QRegExpValidator* self);
void QRegExpValidator_Tr(const char* s, char** _out, int* _out_Strlen);
void QRegExpValidator_TrUtf8(const char* s, char** _out, int* _out_Strlen);
uintptr_t QRegExpValidator_Validate(QRegExpValidator* self, const char* input, size_t input_Strlen, int* pos);
void QRegExpValidator_SetRegExp(QRegExpValidator* self, QRegExp* rx);
QRegExp* QRegExpValidator_RegExp(QRegExpValidator* self);
void QRegExpValidator_RegExpChanged(QRegExpValidator* self, QRegExp* regExp);
void QRegExpValidator_connect_RegExpChanged(QRegExpValidator* self, void* slot);
void QRegExpValidator_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QRegExpValidator_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QRegExpValidator_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QRegExpValidator_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QRegExpValidator_Delete(QRegExpValidator* self);

QRegularExpressionValidator* QRegularExpressionValidator_new();
QRegularExpressionValidator* QRegularExpressionValidator_new2(QRegularExpression* re);
QRegularExpressionValidator* QRegularExpressionValidator_new3(QObject* parent);
QRegularExpressionValidator* QRegularExpressionValidator_new4(QRegularExpression* re, QObject* parent);
QMetaObject* QRegularExpressionValidator_MetaObject(QRegularExpressionValidator* self);
void QRegularExpressionValidator_Tr(const char* s, char** _out, int* _out_Strlen);
void QRegularExpressionValidator_TrUtf8(const char* s, char** _out, int* _out_Strlen);
uintptr_t QRegularExpressionValidator_Validate(QRegularExpressionValidator* self, const char* input, size_t input_Strlen, int* pos);
QRegularExpression* QRegularExpressionValidator_RegularExpression(QRegularExpressionValidator* self);
void QRegularExpressionValidator_SetRegularExpression(QRegularExpressionValidator* self, QRegularExpression* re);
void QRegularExpressionValidator_RegularExpressionChanged(QRegularExpressionValidator* self, QRegularExpression* re);
void QRegularExpressionValidator_connect_RegularExpressionChanged(QRegularExpressionValidator* self, void* slot);
void QRegularExpressionValidator_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QRegularExpressionValidator_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QRegularExpressionValidator_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QRegularExpressionValidator_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QRegularExpressionValidator_Delete(QRegularExpressionValidator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
