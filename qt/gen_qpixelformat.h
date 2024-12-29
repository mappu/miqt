#pragma once
#ifndef MIQT_QT_GEN_QPIXELFORMAT_H
#define MIQT_QT_GEN_QPIXELFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPixelFormat;
#else
typedef struct QPixelFormat QPixelFormat;
#endif

QPixelFormat* QPixelFormat_new();
QPixelFormat* QPixelFormat_new2(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation);
QPixelFormat* QPixelFormat_new3(QPixelFormat* param1);
QPixelFormat* QPixelFormat_new4(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation, int byteOrder);
QPixelFormat* QPixelFormat_new5(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation, int byteOrder, unsigned char subEnum);
int QPixelFormat_ColorModel(const QPixelFormat* self);
unsigned char QPixelFormat_ChannelCount(const QPixelFormat* self);
unsigned char QPixelFormat_RedSize(const QPixelFormat* self);
unsigned char QPixelFormat_GreenSize(const QPixelFormat* self);
unsigned char QPixelFormat_BlueSize(const QPixelFormat* self);
unsigned char QPixelFormat_CyanSize(const QPixelFormat* self);
unsigned char QPixelFormat_MagentaSize(const QPixelFormat* self);
unsigned char QPixelFormat_YellowSize(const QPixelFormat* self);
unsigned char QPixelFormat_BlackSize(const QPixelFormat* self);
unsigned char QPixelFormat_HueSize(const QPixelFormat* self);
unsigned char QPixelFormat_SaturationSize(const QPixelFormat* self);
unsigned char QPixelFormat_LightnessSize(const QPixelFormat* self);
unsigned char QPixelFormat_BrightnessSize(const QPixelFormat* self);
unsigned char QPixelFormat_AlphaSize(const QPixelFormat* self);
unsigned char QPixelFormat_BitsPerPixel(const QPixelFormat* self);
int QPixelFormat_AlphaUsage(const QPixelFormat* self);
int QPixelFormat_AlphaPosition(const QPixelFormat* self);
int QPixelFormat_Premultiplied(const QPixelFormat* self);
int QPixelFormat_TypeInterpretation(const QPixelFormat* self);
int QPixelFormat_ByteOrder(const QPixelFormat* self);
int QPixelFormat_YuvLayout(const QPixelFormat* self);
unsigned char QPixelFormat_SubEnum(const QPixelFormat* self);
void QPixelFormat_Delete(QPixelFormat* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
