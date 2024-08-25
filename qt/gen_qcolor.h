#ifndef GEN_QCOLOR_H
#define GEN_QCOLOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QRgba64;
#else
typedef struct QColor QColor;
typedef struct QRgba64 QRgba64;
#endif

QColor* QColor_new();
QColor* QColor_new2(int r, int g, int b);
QColor* QColor_new3(unsigned int rgb);
QColor* QColor_new4(QRgba64* rgba64);
QColor* QColor_new5(const char* name, size_t name_Strlen);
QColor* QColor_new6(char* aname);
QColor* QColor_new7(QColor* color);
QColor* QColor_new8(int r, int g, int b, int a);
void QColor_OperatorAssign(QColor* self, QColor* param1);
bool QColor_IsValid(QColor* self);
void QColor_Name(QColor* self, char** _out, int* _out_Strlen);
void QColor_SetNamedColor(QColor* self, const char* name, size_t name_Strlen);
void QColor_ColorNames(char*** _out, int** _out_Lengths, size_t* _out_len);
int QColor_Alpha(QColor* self);
void QColor_SetAlpha(QColor* self, int alpha);
double QColor_AlphaF(QColor* self);
void QColor_SetAlphaF(QColor* self, double alpha);
int QColor_Red(QColor* self);
int QColor_Green(QColor* self);
int QColor_Blue(QColor* self);
void QColor_SetRed(QColor* self, int red);
void QColor_SetGreen(QColor* self, int green);
void QColor_SetBlue(QColor* self, int blue);
double QColor_RedF(QColor* self);
double QColor_GreenF(QColor* self);
double QColor_BlueF(QColor* self);
void QColor_SetRedF(QColor* self, double red);
void QColor_SetGreenF(QColor* self, double green);
void QColor_SetBlueF(QColor* self, double blue);
void QColor_GetRgb(QColor* self, int* r, int* g, int* b);
void QColor_SetRgb(QColor* self, int r, int g, int b);
void QColor_GetRgbF(QColor* self, double* r, double* g, double* b);
void QColor_SetRgbF(QColor* self, double r, double g, double b);
QRgba64* QColor_Rgba64(QColor* self);
void QColor_SetRgba64(QColor* self, QRgba64* rgba);
unsigned int QColor_Rgba(QColor* self);
void QColor_SetRgba(QColor* self, unsigned int rgba);
unsigned int QColor_Rgb(QColor* self);
void QColor_SetRgbWithRgb(QColor* self, unsigned int rgb);
int QColor_Hue(QColor* self);
int QColor_Saturation(QColor* self);
int QColor_HsvHue(QColor* self);
int QColor_HsvSaturation(QColor* self);
int QColor_Value(QColor* self);
double QColor_HueF(QColor* self);
double QColor_SaturationF(QColor* self);
double QColor_HsvHueF(QColor* self);
double QColor_HsvSaturationF(QColor* self);
double QColor_ValueF(QColor* self);
void QColor_GetHsv(QColor* self, int* h, int* s, int* v);
void QColor_SetHsv(QColor* self, int h, int s, int v);
void QColor_GetHsvF(QColor* self, double* h, double* s, double* v);
void QColor_SetHsvF(QColor* self, double h, double s, double v);
int QColor_Cyan(QColor* self);
int QColor_Magenta(QColor* self);
int QColor_Yellow(QColor* self);
int QColor_Black(QColor* self);
double QColor_CyanF(QColor* self);
double QColor_MagentaF(QColor* self);
double QColor_YellowF(QColor* self);
double QColor_BlackF(QColor* self);
void QColor_GetCmyk(QColor* self, int* c, int* m, int* y, int* k);
void QColor_GetCmyk2(QColor* self, int* c, int* m, int* y, int* k);
void QColor_SetCmyk(QColor* self, int c, int m, int y, int k);
void QColor_GetCmykF(QColor* self, double* c, double* m, double* y, double* k);
void QColor_GetCmykF2(QColor* self, double* c, double* m, double* y, double* k);
void QColor_SetCmykF(QColor* self, double c, double m, double y, double k);
int QColor_HslHue(QColor* self);
int QColor_HslSaturation(QColor* self);
int QColor_Lightness(QColor* self);
double QColor_HslHueF(QColor* self);
double QColor_HslSaturationF(QColor* self);
double QColor_LightnessF(QColor* self);
void QColor_GetHsl(QColor* self, int* h, int* s, int* l);
void QColor_SetHsl(QColor* self, int h, int s, int l);
void QColor_GetHslF(QColor* self, double* h, double* s, double* l);
void QColor_SetHslF(QColor* self, double h, double s, double l);
QColor* QColor_ToRgb(QColor* self);
QColor* QColor_ToHsv(QColor* self);
QColor* QColor_ToCmyk(QColor* self);
QColor* QColor_ToHsl(QColor* self);
QColor* QColor_ToExtendedRgb(QColor* self);
QColor* QColor_FromRgb(unsigned int rgb);
QColor* QColor_FromRgba(unsigned int rgba);
QColor* QColor_FromRgb2(int r, int g, int b);
QColor* QColor_FromRgbF(double r, double g, double b);
QColor* QColor_FromRgba64(uint16_t r, uint16_t g, uint16_t b);
QColor* QColor_FromRgba64WithRgba(QRgba64* rgba);
QColor* QColor_FromHsv(int h, int s, int v);
QColor* QColor_FromHsvF(double h, double s, double v);
QColor* QColor_FromCmyk(int c, int m, int y, int k);
QColor* QColor_FromCmykF(double c, double m, double y, double k);
QColor* QColor_FromHsl(int h, int s, int l);
QColor* QColor_FromHslF(double h, double s, double l);
QColor* QColor_Light(QColor* self);
QColor* QColor_Dark(QColor* self);
QColor* QColor_Lighter(QColor* self);
QColor* QColor_Darker(QColor* self);
bool QColor_OperatorEqual(QColor* self, QColor* c);
bool QColor_OperatorNotEqual(QColor* self, QColor* c);
bool QColor_IsValidColor(const char* name, size_t name_Strlen);
void QColor_GetRgb4(QColor* self, int* r, int* g, int* b, int* a);
void QColor_SetRgb4(QColor* self, int r, int g, int b, int a);
void QColor_GetRgbF4(QColor* self, double* r, double* g, double* b, double* a);
void QColor_SetRgbF4(QColor* self, double r, double g, double b, double a);
void QColor_GetHsv4(QColor* self, int* h, int* s, int* v, int* a);
void QColor_SetHsv4(QColor* self, int h, int s, int v, int a);
void QColor_GetHsvF4(QColor* self, double* h, double* s, double* v, double* a);
void QColor_SetHsvF4(QColor* self, double h, double s, double v, double a);
void QColor_GetCmyk5(QColor* self, int* c, int* m, int* y, int* k, int* a);
void QColor_GetCmyk52(QColor* self, int* c, int* m, int* y, int* k, int* a);
void QColor_SetCmyk5(QColor* self, int c, int m, int y, int k, int a);
void QColor_GetCmykF5(QColor* self, double* c, double* m, double* y, double* k, double* a);
void QColor_GetCmykF52(QColor* self, double* c, double* m, double* y, double* k, double* a);
void QColor_SetCmykF5(QColor* self, double c, double m, double y, double k, double a);
void QColor_GetHsl4(QColor* self, int* h, int* s, int* l, int* a);
void QColor_SetHsl4(QColor* self, int h, int s, int l, int a);
void QColor_GetHslF4(QColor* self, double* h, double* s, double* l, double* a);
void QColor_SetHslF4(QColor* self, double h, double s, double l, double a);
QColor* QColor_FromRgb4(int r, int g, int b, int a);
QColor* QColor_FromRgbF4(double r, double g, double b, double a);
QColor* QColor_FromRgba644(uint16_t r, uint16_t g, uint16_t b, uint16_t a);
QColor* QColor_FromHsv4(int h, int s, int v, int a);
QColor* QColor_FromHsvF4(double h, double s, double v, double a);
QColor* QColor_FromCmyk5(int c, int m, int y, int k, int a);
QColor* QColor_FromCmykF5(double c, double m, double y, double k, double a);
QColor* QColor_FromHsl4(int h, int s, int l, int a);
QColor* QColor_FromHslF4(double h, double s, double l, double a);
QColor* QColor_Light1(QColor* self, int f);
QColor* QColor_Dark1(QColor* self, int f);
QColor* QColor_Lighter1(QColor* self, int f);
QColor* QColor_Darker1(QColor* self, int f);
void QColor_Delete(QColor* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
