#pragma once
#ifndef MIQT_QT_GEN_QABSTRACTNATIVEEVENTFILTER_H
#define MIQT_QT_GEN_QABSTRACTNATIVEEVENTFILTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractNativeEventFilter;
class QByteArray;
#else
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
typedef struct QByteArray QByteArray;
#endif

bool QAbstractNativeEventFilter_NativeEventFilter(QAbstractNativeEventFilter* self, struct miqt_string eventType, void* message, long* result);
void QAbstractNativeEventFilter_Delete(QAbstractNativeEventFilter* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
