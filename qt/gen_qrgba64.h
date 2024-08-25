#ifndef GEN_QRGBA64_H
#define GEN_QRGBA64_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRgba64;
#else
typedef struct QRgba64 QRgba64;
#endif

QRgba64* QRgba64_new();
QRgba64* QRgba64_new2(QRgba64* param1);
QRgba64* QRgba64_FromRgba64(uint64_t c);
QRgba64* QRgba64_FromRgba642(uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha);
QRgba64* QRgba64_FromRgba(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);
QRgba64* QRgba64_FromArgb32(unsigned int rgb);
bool QRgba64_IsOpaque(QRgba64* self);
bool QRgba64_IsTransparent(QRgba64* self);
uint16_t QRgba64_Red(QRgba64* self);
uint16_t QRgba64_Green(QRgba64* self);
uint16_t QRgba64_Blue(QRgba64* self);
uint16_t QRgba64_Alpha(QRgba64* self);
void QRgba64_SetRed(QRgba64* self, uint16_t _red);
void QRgba64_SetGreen(QRgba64* self, uint16_t _green);
void QRgba64_SetBlue(QRgba64* self, uint16_t _blue);
void QRgba64_SetAlpha(QRgba64* self, uint16_t _alpha);
uint8_t QRgba64_Red8(QRgba64* self);
uint8_t QRgba64_Green8(QRgba64* self);
uint8_t QRgba64_Blue8(QRgba64* self);
uint8_t QRgba64_Alpha8(QRgba64* self);
unsigned int QRgba64_ToArgb32(QRgba64* self);
uint16_t QRgba64_ToRgb16(QRgba64* self);
QRgba64* QRgba64_Premultiplied(QRgba64* self);
QRgba64* QRgba64_Unpremultiplied(QRgba64* self);
void QRgba64_OperatorAssign(QRgba64* self, uint64_t _rgba);
void QRgba64_Delete(QRgba64* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
