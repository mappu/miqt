#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIACONTAINERCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIACONTAINERCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaContainerControl;
class QMediaControl;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QMediaContainerControl QMediaContainerControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QMediaContainerControl_virtbase(QMediaContainerControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QMediaContainerControl_metaObject(const QMediaContainerControl* self);
void* QMediaContainerControl_metacast(QMediaContainerControl* self, const char* param1);
struct miqt_string QMediaContainerControl_tr(const char* s);
struct miqt_string QMediaContainerControl_trUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QMediaContainerControl_supportedContainers(const QMediaContainerControl* self);
struct miqt_string QMediaContainerControl_containerFormat(const QMediaContainerControl* self);
void QMediaContainerControl_setContainerFormat(QMediaContainerControl* self, struct miqt_string format);
struct miqt_string QMediaContainerControl_containerDescription(const QMediaContainerControl* self, struct miqt_string formatMimeType);
struct miqt_string QMediaContainerControl_tr2(const char* s, const char* c);
struct miqt_string QMediaContainerControl_tr3(const char* s, const char* c, int n);
struct miqt_string QMediaContainerControl_trUtf82(const char* s, const char* c);
struct miqt_string QMediaContainerControl_trUtf83(const char* s, const char* c, int n);

void QMediaContainerControl_delete(QMediaContainerControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
