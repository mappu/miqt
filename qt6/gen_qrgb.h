#pragma once
#ifndef MIQT_QT6_GEN_QRGB_H
#define MIQT_QT6_GEN_QRGB_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
#endif

int miqt_QRedWithRgb(unsigned int rgb);
int miqt_QGreenWithRgb(unsigned int rgb);
int miqt_QBlueWithRgb(unsigned int rgb);
int miqt_QAlphaWithRgb(unsigned int rgb);
unsigned int miqt_QRgb2(int r, int g, int b);
unsigned int miqt_QRgba2(int r, int g, int b, int a);
int miqt_QGray2(int r, int g, int b);
int miqt_QGrayWithRgb(unsigned int rgb);
bool miqt_QIsGrayWithRgb(unsigned int rgb);
unsigned int miqt_QPremultiplyWithQRgb(unsigned int x);
unsigned int miqt_QUnpremultiplyWithQRgb(unsigned int p);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
