#ifndef GEN_QPIXELFORMAT_H
#define GEN_QPIXELFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPixelFormat;
#else
typedef struct QPixelFormat QPixelFormat;
#endif

QPixelFormat* QPixelFormat_new();
QPixelFormat* QPixelFormat_new2(QPixelFormat* param1);
unsigned char QPixelFormat_ChannelCount(QPixelFormat* self);
unsigned char QPixelFormat_RedSize(QPixelFormat* self);
unsigned char QPixelFormat_GreenSize(QPixelFormat* self);
unsigned char QPixelFormat_BlueSize(QPixelFormat* self);
unsigned char QPixelFormat_CyanSize(QPixelFormat* self);
unsigned char QPixelFormat_MagentaSize(QPixelFormat* self);
unsigned char QPixelFormat_YellowSize(QPixelFormat* self);
unsigned char QPixelFormat_BlackSize(QPixelFormat* self);
unsigned char QPixelFormat_HueSize(QPixelFormat* self);
unsigned char QPixelFormat_SaturationSize(QPixelFormat* self);
unsigned char QPixelFormat_LightnessSize(QPixelFormat* self);
unsigned char QPixelFormat_BrightnessSize(QPixelFormat* self);
unsigned char QPixelFormat_AlphaSize(QPixelFormat* self);
unsigned char QPixelFormat_BitsPerPixel(QPixelFormat* self);
unsigned char QPixelFormat_SubEnum(QPixelFormat* self);
void QPixelFormat_Delete(QPixelFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
