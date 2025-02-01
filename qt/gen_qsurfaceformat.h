#pragma once
#ifndef MIQT_QT_GEN_QSURFACEFORMAT_H
#define MIQT_QT_GEN_QSURFACEFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSurfaceFormat;
#else
typedef struct QSurfaceFormat QSurfaceFormat;
#endif

QSurfaceFormat* QSurfaceFormat_new();
QSurfaceFormat* QSurfaceFormat_new2(int options);
QSurfaceFormat* QSurfaceFormat_new3(QSurfaceFormat* other);
void QSurfaceFormat_operatorAssign(QSurfaceFormat* self, QSurfaceFormat* other);
void QSurfaceFormat_setDepthBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_depthBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_setStencilBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_stencilBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_setRedBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_redBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_setGreenBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_greenBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_setBlueBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_blueBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_setAlphaBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_alphaBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_setSamples(QSurfaceFormat* self, int numSamples);
int QSurfaceFormat_samples(const QSurfaceFormat* self);
void QSurfaceFormat_setSwapBehavior(QSurfaceFormat* self, int behavior);
int QSurfaceFormat_swapBehavior(const QSurfaceFormat* self);
bool QSurfaceFormat_hasAlpha(const QSurfaceFormat* self);
void QSurfaceFormat_setProfile(QSurfaceFormat* self, int profile);
int QSurfaceFormat_profile(const QSurfaceFormat* self);
void QSurfaceFormat_setRenderableType(QSurfaceFormat* self, int type);
int QSurfaceFormat_renderableType(const QSurfaceFormat* self);
void QSurfaceFormat_setMajorVersion(QSurfaceFormat* self, int majorVersion);
int QSurfaceFormat_majorVersion(const QSurfaceFormat* self);
void QSurfaceFormat_setMinorVersion(QSurfaceFormat* self, int minorVersion);
int QSurfaceFormat_minorVersion(const QSurfaceFormat* self);
struct miqt_map /* tuple of int and int */  QSurfaceFormat_version(const QSurfaceFormat* self);
void QSurfaceFormat_setVersion(QSurfaceFormat* self, int major, int minor);
bool QSurfaceFormat_stereo(const QSurfaceFormat* self);
void QSurfaceFormat_setStereo(QSurfaceFormat* self, bool enable);
void QSurfaceFormat_setOption(QSurfaceFormat* self, int opt);
bool QSurfaceFormat_testOption(const QSurfaceFormat* self, int opt);
void QSurfaceFormat_setOptions(QSurfaceFormat* self, int options);
void QSurfaceFormat_setOptionWithOption(QSurfaceFormat* self, int option);
bool QSurfaceFormat_testOptionWithOption(const QSurfaceFormat* self, int option);
int QSurfaceFormat_options(const QSurfaceFormat* self);
int QSurfaceFormat_swapInterval(const QSurfaceFormat* self);
void QSurfaceFormat_setSwapInterval(QSurfaceFormat* self, int interval);
int QSurfaceFormat_colorSpace(const QSurfaceFormat* self);
void QSurfaceFormat_setColorSpace(QSurfaceFormat* self, int colorSpace);
void QSurfaceFormat_setDefaultFormat(QSurfaceFormat* format);
QSurfaceFormat* QSurfaceFormat_defaultFormat();
void QSurfaceFormat_setOption2(QSurfaceFormat* self, int option, bool on);
void QSurfaceFormat_delete(QSurfaceFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
