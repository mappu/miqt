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
QMetaObject* QImageEncoderControl_metaObject(const QImageEncoderControl* self);
void* QImageEncoderControl_metacast(QImageEncoderControl* self, const char* param1);
struct miqt_string QImageEncoderControl_tr(const char* s);
struct miqt_string QImageEncoderControl_trUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QImageEncoderControl_supportedImageCodecs(const QImageEncoderControl* self);
struct miqt_string QImageEncoderControl_imageCodecDescription(const QImageEncoderControl* self, struct miqt_string codec);
struct miqt_array /* of QSize* */  QImageEncoderControl_supportedResolutions(const QImageEncoderControl* self, QImageEncoderSettings* settings, bool* continuous);
QImageEncoderSettings* QImageEncoderControl_imageSettings(const QImageEncoderControl* self);
void QImageEncoderControl_setImageSettings(QImageEncoderControl* self, QImageEncoderSettings* settings);
struct miqt_string QImageEncoderControl_tr2(const char* s, const char* c);
struct miqt_string QImageEncoderControl_tr3(const char* s, const char* c, int n);
struct miqt_string QImageEncoderControl_trUtf82(const char* s, const char* c);
struct miqt_string QImageEncoderControl_trUtf83(const char* s, const char* c, int n);
void QImageEncoderControl_delete(QImageEncoderControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
