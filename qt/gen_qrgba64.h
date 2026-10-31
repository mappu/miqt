#pragma once
#ifndef MIQT_QT_GEN_QRGBA64_H
#define MIQT_QT_GEN_QRGBA64_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRgba64;
#else
typedef struct QRgba64 QRgba64;
#endif

struct miqt_qrgba64 QRgba64_new();
struct miqt_qrgba64 QRgba64_new2(struct miqt_qrgba64 param1);
struct miqt_qrgba64 QRgba64_fromRgba64(unsigned long long c);
struct miqt_qrgba64 QRgba64_fromRgba642(unsigned short red, unsigned short green, unsigned short blue, unsigned short alpha);
struct miqt_qrgba64 QRgba64_fromRgba(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
struct miqt_qrgba64 QRgba64_fromArgb32(unsigned int rgb);
bool QRgba64_isOpaque(struct miqt_qrgba64 self_cabi);
bool QRgba64_isTransparent(struct miqt_qrgba64 self_cabi);
unsigned short QRgba64_red(struct miqt_qrgba64 self_cabi);
unsigned short QRgba64_green(struct miqt_qrgba64 self_cabi);
unsigned short QRgba64_blue(struct miqt_qrgba64 self_cabi);
unsigned short QRgba64_alpha(struct miqt_qrgba64 self_cabi);
void QRgba64_setRed(QRgba64* self, unsigned short _red);
void QRgba64_setGreen(QRgba64* self, unsigned short _green);
void QRgba64_setBlue(QRgba64* self, unsigned short _blue);
void QRgba64_setAlpha(QRgba64* self, unsigned short _alpha);
unsigned char QRgba64_red8(struct miqt_qrgba64 self_cabi);
unsigned char QRgba64_green8(struct miqt_qrgba64 self_cabi);
unsigned char QRgba64_blue8(struct miqt_qrgba64 self_cabi);
unsigned char QRgba64_alpha8(struct miqt_qrgba64 self_cabi);
unsigned int QRgba64_toArgb32(struct miqt_qrgba64 self_cabi);
unsigned short QRgba64_toRgb16(struct miqt_qrgba64 self_cabi);
struct miqt_qrgba64 QRgba64_premultiplied(struct miqt_qrgba64 self_cabi);
struct miqt_qrgba64 QRgba64_unpremultiplied(struct miqt_qrgba64 self_cabi);
unsigned long long QRgba64_ToUnsignedLongLong(struct miqt_qrgba64 self_cabi);
void QRgba64_operatorAssign(QRgba64* self, unsigned long long _rgba);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
