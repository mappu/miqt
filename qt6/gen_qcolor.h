#pragma once
#ifndef MIQT_QT6_GEN_QCOLOR_H
#define MIQT_QT6_GEN_QCOLOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QRgba64;
class QVariant;
#else
typedef struct QColor QColor;
typedef struct QRgba64 QRgba64;
typedef struct QVariant QVariant;
#endif

struct miqt_qcolor QColor_new();
struct miqt_qcolor QColor_new2(int color);
struct miqt_qcolor QColor_new3(int r, int g, int b);
struct miqt_qcolor QColor_new4(unsigned int rgb);
struct miqt_qcolor QColor_new5(struct miqt_qrgba64 rgba64);
struct miqt_qcolor QColor_new6(struct miqt_string name);
struct miqt_qcolor QColor_new7(const char* aname);
struct miqt_qcolor QColor_new8(int spec);
struct miqt_qcolor QColor_new9(int spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4);
struct miqt_qcolor QColor_new10(struct miqt_qcolor param1);
struct miqt_qcolor QColor_new11(int r, int g, int b, int a);
struct miqt_qcolor QColor_new12(int spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4, unsigned short a5);
struct miqt_qcolor QColor_fromString(struct miqt_string name);
void QColor_operatorAssign(QColor* self, int color);
bool QColor_isValid(struct miqt_qcolor self_cabi);
struct miqt_string QColor_name(struct miqt_qcolor self_cabi);
void QColor_setNamedColor(QColor* self, struct miqt_string name);
struct miqt_array /* of struct miqt_string */  QColor_colorNames();
int QColor_spec(struct miqt_qcolor self_cabi);
int QColor_alpha(struct miqt_qcolor self_cabi);
void QColor_setAlpha(QColor* self, int alpha);
float QColor_alphaF(struct miqt_qcolor self_cabi);
void QColor_setAlphaF(QColor* self, float alpha);
int QColor_red(struct miqt_qcolor self_cabi);
int QColor_green(struct miqt_qcolor self_cabi);
int QColor_blue(struct miqt_qcolor self_cabi);
void QColor_setRed(QColor* self, int red);
void QColor_setGreen(QColor* self, int green);
void QColor_setBlue(QColor* self, int blue);
float QColor_redF(struct miqt_qcolor self_cabi);
float QColor_greenF(struct miqt_qcolor self_cabi);
float QColor_blueF(struct miqt_qcolor self_cabi);
void QColor_setRedF(QColor* self, float red);
void QColor_setGreenF(QColor* self, float green);
void QColor_setBlueF(QColor* self, float blue);
void QColor_getRgb(struct miqt_qcolor self_cabi, int* r, int* g, int* b);
void QColor_setRgb(QColor* self, int r, int g, int b);
void QColor_getRgbF(struct miqt_qcolor self_cabi, float* r, float* g, float* b);
void QColor_setRgbF(QColor* self, float r, float g, float b);
struct miqt_qrgba64 QColor_rgba64(struct miqt_qcolor self_cabi);
void QColor_setRgba64(QColor* self, struct miqt_qrgba64 rgba);
unsigned int QColor_rgba(struct miqt_qcolor self_cabi);
void QColor_setRgba(QColor* self, unsigned int rgba);
unsigned int QColor_rgb(struct miqt_qcolor self_cabi);
void QColor_setRgbWithRgb(QColor* self, unsigned int rgb);
int QColor_hue(struct miqt_qcolor self_cabi);
int QColor_saturation(struct miqt_qcolor self_cabi);
int QColor_hsvHue(struct miqt_qcolor self_cabi);
int QColor_hsvSaturation(struct miqt_qcolor self_cabi);
int QColor_value(struct miqt_qcolor self_cabi);
float QColor_hueF(struct miqt_qcolor self_cabi);
float QColor_saturationF(struct miqt_qcolor self_cabi);
float QColor_hsvHueF(struct miqt_qcolor self_cabi);
float QColor_hsvSaturationF(struct miqt_qcolor self_cabi);
float QColor_valueF(struct miqt_qcolor self_cabi);
void QColor_getHsv(struct miqt_qcolor self_cabi, int* h, int* s, int* v);
void QColor_setHsv(QColor* self, int h, int s, int v);
void QColor_getHsvF(struct miqt_qcolor self_cabi, float* h, float* s, float* v);
void QColor_setHsvF(QColor* self, float h, float s, float v);
int QColor_cyan(struct miqt_qcolor self_cabi);
int QColor_magenta(struct miqt_qcolor self_cabi);
int QColor_yellow(struct miqt_qcolor self_cabi);
int QColor_black(struct miqt_qcolor self_cabi);
float QColor_cyanF(struct miqt_qcolor self_cabi);
float QColor_magentaF(struct miqt_qcolor self_cabi);
float QColor_yellowF(struct miqt_qcolor self_cabi);
float QColor_blackF(struct miqt_qcolor self_cabi);
void QColor_getCmyk(struct miqt_qcolor self_cabi, int* c, int* m, int* y, int* k);
void QColor_setCmyk(QColor* self, int c, int m, int y, int k);
void QColor_getCmykF(struct miqt_qcolor self_cabi, float* c, float* m, float* y, float* k);
void QColor_setCmykF(QColor* self, float c, float m, float y, float k);
int QColor_hslHue(struct miqt_qcolor self_cabi);
int QColor_hslSaturation(struct miqt_qcolor self_cabi);
int QColor_lightness(struct miqt_qcolor self_cabi);
float QColor_hslHueF(struct miqt_qcolor self_cabi);
float QColor_hslSaturationF(struct miqt_qcolor self_cabi);
float QColor_lightnessF(struct miqt_qcolor self_cabi);
void QColor_getHsl(struct miqt_qcolor self_cabi, int* h, int* s, int* l);
void QColor_setHsl(QColor* self, int h, int s, int l);
void QColor_getHslF(struct miqt_qcolor self_cabi, float* h, float* s, float* l);
void QColor_setHslF(QColor* self, float h, float s, float l);
struct miqt_qcolor QColor_toRgb(struct miqt_qcolor self_cabi);
struct miqt_qcolor QColor_toHsv(struct miqt_qcolor self_cabi);
struct miqt_qcolor QColor_toCmyk(struct miqt_qcolor self_cabi);
struct miqt_qcolor QColor_toHsl(struct miqt_qcolor self_cabi);
struct miqt_qcolor QColor_toExtendedRgb(struct miqt_qcolor self_cabi);
struct miqt_qcolor QColor_convertTo(struct miqt_qcolor self_cabi, int colorSpec);
struct miqt_qcolor QColor_fromRgb(unsigned int rgb);
struct miqt_qcolor QColor_fromRgba(unsigned int rgba);
struct miqt_qcolor QColor_fromRgb2(int r, int g, int b);
struct miqt_qcolor QColor_fromRgbF(float r, float g, float b);
struct miqt_qcolor QColor_fromRgba64(unsigned short r, unsigned short g, unsigned short b);
struct miqt_qcolor QColor_fromRgba64WithRgba(struct miqt_qrgba64 rgba);
struct miqt_qcolor QColor_fromHsv(int h, int s, int v);
struct miqt_qcolor QColor_fromHsvF(float h, float s, float v);
struct miqt_qcolor QColor_fromCmyk(int c, int m, int y, int k);
struct miqt_qcolor QColor_fromCmykF(float c, float m, float y, float k);
struct miqt_qcolor QColor_fromHsl(int h, int s, int l);
struct miqt_qcolor QColor_fromHslF(float h, float s, float l);
struct miqt_qcolor QColor_lighter(struct miqt_qcolor self_cabi);
struct miqt_qcolor QColor_darker(struct miqt_qcolor self_cabi);
bool QColor_operatorEqual(struct miqt_qcolor self_cabi, struct miqt_qcolor c);
bool QColor_operatorNotEqual(struct miqt_qcolor self_cabi, struct miqt_qcolor c);
QVariant* QColor_ToQVariant(struct miqt_qcolor self_cabi);
bool QColor_isValidColor(struct miqt_string name);
bool QColor_isValidColorName(struct miqt_string param1);
struct miqt_string QColor_nameWithFormat(struct miqt_qcolor self_cabi, int format);
void QColor_getRgb2(struct miqt_qcolor self_cabi, int* r, int* g, int* b, int* a);
void QColor_setRgb2(QColor* self, int r, int g, int b, int a);
void QColor_getRgbF2(struct miqt_qcolor self_cabi, float* r, float* g, float* b, float* a);
void QColor_setRgbF2(QColor* self, float r, float g, float b, float a);
void QColor_getHsv2(struct miqt_qcolor self_cabi, int* h, int* s, int* v, int* a);
void QColor_setHsv2(QColor* self, int h, int s, int v, int a);
void QColor_getHsvF2(struct miqt_qcolor self_cabi, float* h, float* s, float* v, float* a);
void QColor_setHsvF2(QColor* self, float h, float s, float v, float a);
void QColor_getCmyk2(struct miqt_qcolor self_cabi, int* c, int* m, int* y, int* k, int* a);
void QColor_setCmyk2(QColor* self, int c, int m, int y, int k, int a);
void QColor_getCmykF2(struct miqt_qcolor self_cabi, float* c, float* m, float* y, float* k, float* a);
void QColor_setCmykF2(QColor* self, float c, float m, float y, float k, float a);
void QColor_getHsl2(struct miqt_qcolor self_cabi, int* h, int* s, int* l, int* a);
void QColor_setHsl2(QColor* self, int h, int s, int l, int a);
void QColor_getHslF2(struct miqt_qcolor self_cabi, float* h, float* s, float* l, float* a);
void QColor_setHslF2(QColor* self, float h, float s, float l, float a);
struct miqt_qcolor QColor_fromRgb3(int r, int g, int b, int a);
struct miqt_qcolor QColor_fromRgbF2(float r, float g, float b, float a);
struct miqt_qcolor QColor_fromRgba642(unsigned short r, unsigned short g, unsigned short b, unsigned short a);
struct miqt_qcolor QColor_fromHsv2(int h, int s, int v, int a);
struct miqt_qcolor QColor_fromHsvF2(float h, float s, float v, float a);
struct miqt_qcolor QColor_fromCmyk2(int c, int m, int y, int k, int a);
struct miqt_qcolor QColor_fromCmykF2(float c, float m, float y, float k, float a);
struct miqt_qcolor QColor_fromHsl2(int h, int s, int l, int a);
struct miqt_qcolor QColor_fromHslF2(float h, float s, float l, float a);
struct miqt_qcolor QColor_lighterWithInt(struct miqt_qcolor self_cabi, int f);
struct miqt_qcolor QColor_darkerWithInt(struct miqt_qcolor self_cabi, int f);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
