#ifndef GEN_QSURFACEFORMAT_H
#define GEN_QSURFACEFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
void QSurfaceFormat_OperatorAssign(QSurfaceFormat* self, QSurfaceFormat* other);
void QSurfaceFormat_SetDepthBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_DepthBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_SetStencilBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_StencilBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_SetRedBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_RedBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_SetGreenBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_GreenBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_SetBlueBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_BlueBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_SetAlphaBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_AlphaBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_SetSamples(QSurfaceFormat* self, int numSamples);
int QSurfaceFormat_Samples(const QSurfaceFormat* self);
void QSurfaceFormat_SetSwapBehavior(QSurfaceFormat* self, uintptr_t behavior);
uintptr_t QSurfaceFormat_SwapBehavior(const QSurfaceFormat* self);
bool QSurfaceFormat_HasAlpha(const QSurfaceFormat* self);
void QSurfaceFormat_SetProfile(QSurfaceFormat* self, uintptr_t profile);
uintptr_t QSurfaceFormat_Profile(const QSurfaceFormat* self);
void QSurfaceFormat_SetRenderableType(QSurfaceFormat* self, uintptr_t typeVal);
uintptr_t QSurfaceFormat_RenderableType(const QSurfaceFormat* self);
void QSurfaceFormat_SetMajorVersion(QSurfaceFormat* self, int majorVersion);
int QSurfaceFormat_MajorVersion(const QSurfaceFormat* self);
void QSurfaceFormat_SetMinorVersion(QSurfaceFormat* self, int minorVersion);
int QSurfaceFormat_MinorVersion(const QSurfaceFormat* self);
void QSurfaceFormat_SetVersion(QSurfaceFormat* self, int major, int minor);
bool QSurfaceFormat_Stereo(const QSurfaceFormat* self);
void QSurfaceFormat_SetStereo(QSurfaceFormat* self, bool enable);
void QSurfaceFormat_SetOption(QSurfaceFormat* self, int opt);
bool QSurfaceFormat_TestOption(const QSurfaceFormat* self, int opt);
void QSurfaceFormat_SetOptions(QSurfaceFormat* self, int options);
void QSurfaceFormat_SetOptionWithOption(QSurfaceFormat* self, uintptr_t option);
bool QSurfaceFormat_TestOptionWithOption(const QSurfaceFormat* self, uintptr_t option);
int QSurfaceFormat_Options(const QSurfaceFormat* self);
int QSurfaceFormat_SwapInterval(const QSurfaceFormat* self);
void QSurfaceFormat_SetSwapInterval(QSurfaceFormat* self, int interval);
uintptr_t QSurfaceFormat_ColorSpace(const QSurfaceFormat* self);
void QSurfaceFormat_SetColorSpace(QSurfaceFormat* self, uintptr_t colorSpace);
void QSurfaceFormat_SetDefaultFormat(QSurfaceFormat* format);
QSurfaceFormat* QSurfaceFormat_DefaultFormat();
void QSurfaceFormat_SetOption2(QSurfaceFormat* self, uintptr_t option, bool on);
void QSurfaceFormat_Delete(QSurfaceFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
