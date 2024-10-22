#ifndef GEN_QCOLOR_H
#define GEN_QCOLOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAnyStringView;
class QColor;
class QRgba64;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QColor QColor;
typedef struct QRgba64 QRgba64;
#endif

QColor* QColor_new();
QColor* QColor_new2(int color);
QColor* QColor_new3(int r, int g, int b);
QColor* QColor_new4(unsigned int rgb);
QColor* QColor_new5(QRgba64* rgba64);
QColor* QColor_new6(struct miqt_string name);
QColor* QColor_new7(const char* aname);
QColor* QColor_new8(int spec);
QColor* QColor_new9(int spec, uint16_t a1, uint16_t a2, uint16_t a3, uint16_t a4);
QColor* QColor_new10(QColor* param1);
QColor* QColor_new11(int r, int g, int b, int a);
QColor* QColor_new12(int spec, uint16_t a1, uint16_t a2, uint16_t a3, uint16_t a4, uint16_t a5);
QColor* QColor_FromString(QAnyStringView* name);
void QColor_OperatorAssign(QColor* self, int color);
bool QColor_IsValid(const QColor* self);
struct miqt_string QColor_Name(const QColor* self);
void QColor_SetNamedColor(QColor* self, struct miqt_string name);
struct miqt_array* QColor_ColorNames();
int QColor_Spec(const QColor* self);
int QColor_Alpha(const QColor* self);
void QColor_SetAlpha(QColor* self, int alpha);
float QColor_AlphaF(const QColor* self);
void QColor_SetAlphaF(QColor* self, float alpha);
int QColor_Red(const QColor* self);
int QColor_Green(const QColor* self);
int QColor_Blue(const QColor* self);
void QColor_SetRed(QColor* self, int red);
void QColor_SetGreen(QColor* self, int green);
void QColor_SetBlue(QColor* self, int blue);
float QColor_RedF(const QColor* self);
float QColor_GreenF(const QColor* self);
float QColor_BlueF(const QColor* self);
void QColor_SetRedF(QColor* self, float red);
void QColor_SetGreenF(QColor* self, float green);
void QColor_SetBlueF(QColor* self, float blue);
void QColor_GetRgb(const QColor* self, int* r, int* g, int* b);
void QColor_SetRgb(QColor* self, int r, int g, int b);
void QColor_GetRgbF(const QColor* self, float* r, float* g, float* b);
void QColor_SetRgbF(QColor* self, float r, float g, float b);
QRgba64* QColor_Rgba64(const QColor* self);
void QColor_SetRgba64(QColor* self, QRgba64* rgba);
unsigned int QColor_Rgba(const QColor* self);
void QColor_SetRgba(QColor* self, unsigned int rgba);
unsigned int QColor_Rgb(const QColor* self);
void QColor_SetRgbWithRgb(QColor* self, unsigned int rgb);
int QColor_Hue(const QColor* self);
int QColor_Saturation(const QColor* self);
int QColor_HsvHue(const QColor* self);
int QColor_HsvSaturation(const QColor* self);
int QColor_Value(const QColor* self);
float QColor_HueF(const QColor* self);
float QColor_SaturationF(const QColor* self);
float QColor_HsvHueF(const QColor* self);
float QColor_HsvSaturationF(const QColor* self);
float QColor_ValueF(const QColor* self);
void QColor_GetHsv(const QColor* self, int* h, int* s, int* v);
void QColor_SetHsv(QColor* self, int h, int s, int v);
void QColor_GetHsvF(const QColor* self, float* h, float* s, float* v);
void QColor_SetHsvF(QColor* self, float h, float s, float v);
int QColor_Cyan(const QColor* self);
int QColor_Magenta(const QColor* self);
int QColor_Yellow(const QColor* self);
int QColor_Black(const QColor* self);
float QColor_CyanF(const QColor* self);
float QColor_MagentaF(const QColor* self);
float QColor_YellowF(const QColor* self);
float QColor_BlackF(const QColor* self);
void QColor_GetCmyk(const QColor* self, int* c, int* m, int* y, int* k);
void QColor_SetCmyk(QColor* self, int c, int m, int y, int k);
void QColor_GetCmykF(const QColor* self, float* c, float* m, float* y, float* k);
void QColor_SetCmykF(QColor* self, float c, float m, float y, float k);
int QColor_HslHue(const QColor* self);
int QColor_HslSaturation(const QColor* self);
int QColor_Lightness(const QColor* self);
float QColor_HslHueF(const QColor* self);
float QColor_HslSaturationF(const QColor* self);
float QColor_LightnessF(const QColor* self);
void QColor_GetHsl(const QColor* self, int* h, int* s, int* l);
void QColor_SetHsl(QColor* self, int h, int s, int l);
void QColor_GetHslF(const QColor* self, float* h, float* s, float* l);
void QColor_SetHslF(QColor* self, float h, float s, float l);
QColor* QColor_ToRgb(const QColor* self);
QColor* QColor_ToHsv(const QColor* self);
QColor* QColor_ToCmyk(const QColor* self);
QColor* QColor_ToHsl(const QColor* self);
QColor* QColor_ToExtendedRgb(const QColor* self);
QColor* QColor_ConvertTo(const QColor* self, int colorSpec);
QColor* QColor_FromRgb(unsigned int rgb);
QColor* QColor_FromRgba(unsigned int rgba);
QColor* QColor_FromRgb2(int r, int g, int b);
QColor* QColor_FromRgbF(float r, float g, float b);
QColor* QColor_FromRgba64(uint16_t r, uint16_t g, uint16_t b);
QColor* QColor_FromRgba64WithRgba(QRgba64* rgba);
QColor* QColor_FromHsv(int h, int s, int v);
QColor* QColor_FromHsvF(float h, float s, float v);
QColor* QColor_FromCmyk(int c, int m, int y, int k);
QColor* QColor_FromCmykF(float c, float m, float y, float k);
QColor* QColor_FromHsl(int h, int s, int l);
QColor* QColor_FromHslF(float h, float s, float l);
QColor* QColor_Lighter(const QColor* self);
QColor* QColor_Darker(const QColor* self);
bool QColor_OperatorEqual(const QColor* self, QColor* c);
bool QColor_OperatorNotEqual(const QColor* self, QColor* c);
bool QColor_IsValidColor(struct miqt_string name);
bool QColor_IsValidColorName(QAnyStringView* param1);
struct miqt_string QColor_Name1(const QColor* self, int format);
void QColor_GetRgb4(const QColor* self, int* r, int* g, int* b, int* a);
void QColor_SetRgb4(QColor* self, int r, int g, int b, int a);
void QColor_GetRgbF4(const QColor* self, float* r, float* g, float* b, float* a);
void QColor_SetRgbF4(QColor* self, float r, float g, float b, float a);
void QColor_GetHsv4(const QColor* self, int* h, int* s, int* v, int* a);
void QColor_SetHsv4(QColor* self, int h, int s, int v, int a);
void QColor_GetHsvF4(const QColor* self, float* h, float* s, float* v, float* a);
void QColor_SetHsvF4(QColor* self, float h, float s, float v, float a);
void QColor_GetCmyk5(const QColor* self, int* c, int* m, int* y, int* k, int* a);
void QColor_SetCmyk5(QColor* self, int c, int m, int y, int k, int a);
void QColor_GetCmykF5(const QColor* self, float* c, float* m, float* y, float* k, float* a);
void QColor_SetCmykF5(QColor* self, float c, float m, float y, float k, float a);
void QColor_GetHsl4(const QColor* self, int* h, int* s, int* l, int* a);
void QColor_SetHsl4(QColor* self, int h, int s, int l, int a);
void QColor_GetHslF4(const QColor* self, float* h, float* s, float* l, float* a);
void QColor_SetHslF4(QColor* self, float h, float s, float l, float a);
QColor* QColor_FromRgb4(int r, int g, int b, int a);
QColor* QColor_FromRgbF4(float r, float g, float b, float a);
QColor* QColor_FromRgba644(uint16_t r, uint16_t g, uint16_t b, uint16_t a);
QColor* QColor_FromHsv4(int h, int s, int v, int a);
QColor* QColor_FromHsvF4(float h, float s, float v, float a);
QColor* QColor_FromCmyk5(int c, int m, int y, int k, int a);
QColor* QColor_FromCmykF5(float c, float m, float y, float k, float a);
QColor* QColor_FromHsl4(int h, int s, int l, int a);
QColor* QColor_FromHslF4(float h, float s, float l, float a);
QColor* QColor_Lighter1(const QColor* self, int f);
QColor* QColor_Darker1(const QColor* self, int f);
void QColor_Delete(QColor* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
