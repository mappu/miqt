#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIABINDABLEINTERFACE_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIABINDABLEINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaBindableInterface;
class QMediaObject;
#else
typedef struct QMediaBindableInterface QMediaBindableInterface;
typedef struct QMediaObject QMediaObject;
#endif

QMediaObject* QMediaBindableInterface_MediaObject(const QMediaBindableInterface* self);
bool QMediaBindableInterface_SetMediaObject(QMediaBindableInterface* self, QMediaObject* object);
void QMediaBindableInterface_Delete(QMediaBindableInterface* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
