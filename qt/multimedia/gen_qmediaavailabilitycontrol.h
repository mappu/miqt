#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIAAVAILABILITYCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIAAVAILABILITYCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaAvailabilityControl;
class QMediaControl;
class QMetaObject;
class QObject;
#else
typedef struct QMediaAvailabilityControl QMediaAvailabilityControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QMediaAvailabilityControl_virtbase(QMediaAvailabilityControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QMediaAvailabilityControl_metaObject(const QMediaAvailabilityControl* self);
void* QMediaAvailabilityControl_metacast(QMediaAvailabilityControl* self, const char* param1);
struct miqt_string QMediaAvailabilityControl_tr(const char* s);
struct miqt_string QMediaAvailabilityControl_trUtf8(const char* s);
int QMediaAvailabilityControl_availability(const QMediaAvailabilityControl* self);
void QMediaAvailabilityControl_availabilityChanged(QMediaAvailabilityControl* self, int availability);
void QMediaAvailabilityControl_connect_availabilityChanged(QMediaAvailabilityControl* self, intptr_t slot);
struct miqt_string QMediaAvailabilityControl_tr2(const char* s, const char* c);
struct miqt_string QMediaAvailabilityControl_tr3(const char* s, const char* c, int n);
struct miqt_string QMediaAvailabilityControl_trUtf82(const char* s, const char* c);
struct miqt_string QMediaAvailabilityControl_trUtf83(const char* s, const char* c, int n);
void QMediaAvailabilityControl_delete(QMediaAvailabilityControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
