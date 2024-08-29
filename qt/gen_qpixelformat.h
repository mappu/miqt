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
QPixelFormat* QPixelFormat_new2(uintptr_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, uintptr_t alphaUsage, uintptr_t alphaPosition, uintptr_t premultiplied, uintptr_t typeInterpretation);
QPixelFormat* QPixelFormat_new3(QPixelFormat* param1);
QPixelFormat* QPixelFormat_new4(uintptr_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, uintptr_t alphaUsage, uintptr_t alphaPosition, uintptr_t premultiplied, uintptr_t typeInterpretation, uintptr_t byteOrder);
QPixelFormat* QPixelFormat_new5(uintptr_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, uintptr_t alphaUsage, uintptr_t alphaPosition, uintptr_t premultiplied, uintptr_t typeInterpretation, uintptr_t byteOrder, unsigned char subEnum);
uintptr_t QPixelFormat_ColorModel(QPixelFormat* self);
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
uintptr_t QPixelFormat_AlphaUsage(QPixelFormat* self);
uintptr_t QPixelFormat_AlphaPosition(QPixelFormat* self);
uintptr_t QPixelFormat_Premultiplied(QPixelFormat* self);
uintptr_t QPixelFormat_TypeInterpretation(QPixelFormat* self);
uintptr_t QPixelFormat_ByteOrder(QPixelFormat* self);
uintptr_t QPixelFormat_YuvLayout(QPixelFormat* self);
unsigned char QPixelFormat_SubEnum(QPixelFormat* self);
void QPixelFormat_Delete(QPixelFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
