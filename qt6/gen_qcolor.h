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
class QAnyStringView;
class QColor;
class QRgba64;
class QVariant;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QColor QColor;
typedef struct QRgba64 QRgba64;
typedef struct QVariant QVariant;
#endif

QColor* QColor_new();
QColor* QColor_new2(int color);
QColor* QColor_new3(int r, int g, int b);
QColor* QColor_new4(unsigned int rgb);
QColor* QColor_new5(QRgba64* rgba64);
QColor* QColor_new6(struct miqt_string name);
QColor* QColor_new7(const char* aname);
QColor* QColor_new8(int spec);
QColor* QColor_new9(int spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4);
QColor* QColor_new10(QColor* param1);
QColor* QColor_new11(int r, int g, int b, int a);
QColor* QColor_new12(int spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4, unsigned short a5);
QColor* QColor_fromString(QAnyStringView* name);
void QColor_operatorAssign(QColor* self, int color);
bool QColor_isValid(const QColor* self);
struct miqt_string QColor_name(const QColor* self);
void QColor_setNamedColor(QColor* self, struct miqt_string name);
struct miqt_array /* of struct miqt_string */  QColor_colorNames();
int QColor_spec(const QColor* self);
int QColor_alpha(const QColor* self);
void QColor_setAlpha(QColor* self, int alpha);
float QColor_alphaF(const QColor* self);
void QColor_setAlphaF(QColor* self, float alpha);
int QColor_red(const QColor* self);
int QColor_green(const QColor* self);
int QColor_blue(const QColor* self);
void QColor_setRed(QColor* self, int red);
void QColor_setGreen(QColor* self, int green);
void QColor_setBlue(QColor* self, int blue);
float QColor_redF(const QColor* self);
float QColor_greenF(const QColor* self);
float QColor_blueF(const QColor* self);
void QColor_setRedF(QColor* self, float red);
void QColor_setGreenF(QColor* self, float green);
void QColor_setBlueF(QColor* self, float blue);
void QColor_getRgb(const QColor* self, int* r, int* g, int* b);
void QColor_setRgb(QColor* self, int r, int g, int b);
void QColor_getRgbF(const QColor* self, float* r, float* g, float* b);
void QColor_setRgbF(QColor* self, float r, float g, float b);
QRgba64* QColor_rgba64(const QColor* self);
void QColor_setRgba64(QColor* self, QRgba64* rgba);
unsigned int QColor_rgba(const QColor* self);
void QColor_setRgba(QColor* self, unsigned int rgba);
unsigned int QColor_rgb(const QColor* self);
void QColor_setRgbWithRgb(QColor* self, unsigned int rgb);
int QColor_hue(const QColor* self);
int QColor_saturation(const QColor* self);
int QColor_hsvHue(const QColor* self);
int QColor_hsvSaturation(const QColor* self);
int QColor_value(const QColor* self);
float QColor_hueF(const QColor* self);
float QColor_saturationF(const QColor* self);
float QColor_hsvHueF(const QColor* self);
float QColor_hsvSaturationF(const QColor* self);
float QColor_valueF(const QColor* self);
void QColor_getHsv(const QColor* self, int* h, int* s, int* v);
void QColor_setHsv(QColor* self, int h, int s, int v);
void QColor_getHsvF(const QColor* self, float* h, float* s, float* v);
void QColor_setHsvF(QColor* self, float h, float s, float v);
int QColor_cyan(const QColor* self);
int QColor_magenta(const QColor* self);
int QColor_yellow(const QColor* self);
int QColor_black(const QColor* self);
float QColor_cyanF(const QColor* self);
float QColor_magentaF(const QColor* self);
float QColor_yellowF(const QColor* self);
float QColor_blackF(const QColor* self);
void QColor_getCmyk(const QColor* self, int* c, int* m, int* y, int* k);
void QColor_setCmyk(QColor* self, int c, int m, int y, int k);
void QColor_getCmykF(const QColor* self, float* c, float* m, float* y, float* k);
void QColor_setCmykF(QColor* self, float c, float m, float y, float k);
int QColor_hslHue(const QColor* self);
int QColor_hslSaturation(const QColor* self);
int QColor_lightness(const QColor* self);
float QColor_hslHueF(const QColor* self);
float QColor_hslSaturationF(const QColor* self);
float QColor_lightnessF(const QColor* self);
void QColor_getHsl(const QColor* self, int* h, int* s, int* l);
void QColor_setHsl(QColor* self, int h, int s, int l);
void QColor_getHslF(const QColor* self, float* h, float* s, float* l);
void QColor_setHslF(QColor* self, float h, float s, float l);
QColor* QColor_toRgb(const QColor* self);
QColor* QColor_toHsv(const QColor* self);
QColor* QColor_toCmyk(const QColor* self);
QColor* QColor_toHsl(const QColor* self);
QColor* QColor_toExtendedRgb(const QColor* self);
QColor* QColor_convertTo(const QColor* self, int colorSpec);
QColor* QColor_fromRgb(unsigned int rgb);
QColor* QColor_fromRgba(unsigned int rgba);
QColor* QColor_fromRgb2(int r, int g, int b);
QColor* QColor_fromRgbF(float r, float g, float b);
QColor* QColor_fromRgba64(unsigned short r, unsigned short g, unsigned short b);
QColor* QColor_fromRgba64WithRgba(QRgba64* rgba);
QColor* QColor_fromHsv(int h, int s, int v);
QColor* QColor_fromHsvF(float h, float s, float v);
QColor* QColor_fromCmyk(int c, int m, int y, int k);
QColor* QColor_fromCmykF(float c, float m, float y, float k);
QColor* QColor_fromHsl(int h, int s, int l);
QColor* QColor_fromHslF(float h, float s, float l);
QColor* QColor_lighter(const QColor* self);
QColor* QColor_darker(const QColor* self);
bool QColor_operatorEqual(const QColor* self, QColor* c);
bool QColor_operatorNotEqual(const QColor* self, QColor* c);
QVariant* QColor_ToQVariant(const QColor* self);
bool QColor_isValidColor(struct miqt_string name);
bool QColor_isValidColorName(QAnyStringView* param1);
struct miqt_string QColor_nameWithFormat(const QColor* self, int format);
void QColor_getRgb2(const QColor* self, int* r, int* g, int* b, int* a);
void QColor_setRgb2(QColor* self, int r, int g, int b, int a);
void QColor_getRgbF2(const QColor* self, float* r, float* g, float* b, float* a);
void QColor_setRgbF2(QColor* self, float r, float g, float b, float a);
void QColor_getHsv2(const QColor* self, int* h, int* s, int* v, int* a);
void QColor_setHsv2(QColor* self, int h, int s, int v, int a);
void QColor_getHsvF2(const QColor* self, float* h, float* s, float* v, float* a);
void QColor_setHsvF2(QColor* self, float h, float s, float v, float a);
void QColor_getCmyk2(const QColor* self, int* c, int* m, int* y, int* k, int* a);
void QColor_setCmyk2(QColor* self, int c, int m, int y, int k, int a);
void QColor_getCmykF2(const QColor* self, float* c, float* m, float* y, float* k, float* a);
void QColor_setCmykF2(QColor* self, float c, float m, float y, float k, float a);
void QColor_getHsl2(const QColor* self, int* h, int* s, int* l, int* a);
void QColor_setHsl2(QColor* self, int h, int s, int l, int a);
void QColor_getHslF2(const QColor* self, float* h, float* s, float* l, float* a);
void QColor_setHslF2(QColor* self, float h, float s, float l, float a);
QColor* QColor_fromRgb3(int r, int g, int b, int a);
QColor* QColor_fromRgbF2(float r, float g, float b, float a);
QColor* QColor_fromRgba642(unsigned short r, unsigned short g, unsigned short b, unsigned short a);
QColor* QColor_fromHsv2(int h, int s, int v, int a);
QColor* QColor_fromHsvF2(float h, float s, float v, float a);
QColor* QColor_fromCmyk2(int c, int m, int y, int k, int a);
QColor* QColor_fromCmykF2(float c, float m, float y, float k, float a);
QColor* QColor_fromHsl2(int h, int s, int l, int a);
QColor* QColor_fromHslF2(float h, float s, float l, float a);
QColor* QColor_lighterWithInt(const QColor* self, int f);
QColor* QColor_darkerWithInt(const QColor* self, int f);

void QColor_delete(QColor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
