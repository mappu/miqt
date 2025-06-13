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
int QPixelFormat_colorModel(const QPixelFormat* self);
unsigned char QPixelFormat_channelCount(const QPixelFormat* self);
unsigned char QPixelFormat_redSize(const QPixelFormat* self);
unsigned char QPixelFormat_greenSize(const QPixelFormat* self);
unsigned char QPixelFormat_blueSize(const QPixelFormat* self);
unsigned char QPixelFormat_cyanSize(const QPixelFormat* self);
unsigned char QPixelFormat_magentaSize(const QPixelFormat* self);
unsigned char QPixelFormat_yellowSize(const QPixelFormat* self);
unsigned char QPixelFormat_blackSize(const QPixelFormat* self);
unsigned char QPixelFormat_hueSize(const QPixelFormat* self);
unsigned char QPixelFormat_saturationSize(const QPixelFormat* self);
unsigned char QPixelFormat_lightnessSize(const QPixelFormat* self);
unsigned char QPixelFormat_brightnessSize(const QPixelFormat* self);
unsigned char QPixelFormat_alphaSize(const QPixelFormat* self);
unsigned char QPixelFormat_bitsPerPixel(const QPixelFormat* self);
int QPixelFormat_alphaUsage(const QPixelFormat* self);
int QPixelFormat_alphaPosition(const QPixelFormat* self);
int QPixelFormat_premultiplied(const QPixelFormat* self);
int QPixelFormat_typeInterpretation(const QPixelFormat* self);
int QPixelFormat_byteOrder(const QPixelFormat* self);
int QPixelFormat_yuvLayout(const QPixelFormat* self);
unsigned char QPixelFormat_subEnum(const QPixelFormat* self);

void QPixelFormat_delete(QPixelFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
