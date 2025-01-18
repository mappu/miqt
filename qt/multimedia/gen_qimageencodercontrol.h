#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QIMAGEENCODERCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QIMAGEENCODERCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QImageEncoderControl;
class QImageEncoderSettings;
class QMediaControl;
class QMetaObject;
class QObject;
class QSize;
#else
typedef struct QImageEncoderControl QImageEncoderControl;
typedef struct QImageEncoderSettings QImageEncoderSettings;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
#endif

void QImageEncoderControl_virtbase(QImageEncoderControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QImageEncoderControl_MetaObject(const QImageEncoderControl* self);
void* QImageEncoderControl_Metacast(QImageEncoderControl* self, const char* param1);
struct miqt_string QImageEncoderControl_Tr(const char* s);
struct miqt_string QImageEncoderControl_TrUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QImageEncoderControl_SupportedImageCodecs(const QImageEncoderControl* self);
struct miqt_string QImageEncoderControl_ImageCodecDescription(const QImageEncoderControl* self, struct miqt_string codec);
struct miqt_array /* of QSize* */  QImageEncoderControl_SupportedResolutions(const QImageEncoderControl* self, QImageEncoderSettings* settings, bool* continuous);
QImageEncoderSettings* QImageEncoderControl_ImageSettings(const QImageEncoderControl* self);
void QImageEncoderControl_SetImageSettings(QImageEncoderControl* self, QImageEncoderSettings* settings);
struct miqt_string QImageEncoderControl_Tr2(const char* s, const char* c);
struct miqt_string QImageEncoderControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QImageEncoderControl_TrUtf82(const char* s, const char* c);
struct miqt_string QImageEncoderControl_TrUtf83(const char* s, const char* c, int n);
void QImageEncoderControl_Delete(QImageEncoderControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
