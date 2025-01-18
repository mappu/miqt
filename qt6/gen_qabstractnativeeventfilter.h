#pragma once
#ifndef MIQT_QT6_GEN_QABSTRACTNATIVEEVENTFILTER_H
#define MIQT_QT6_GEN_QABSTRACTNATIVEEVENTFILTER_H

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
#else
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
#endif

QAbstractNativeEventFilter* QAbstractNativeEventFilter_new();
bool QAbstractNativeEventFilter_NativeEventFilter(QAbstractNativeEventFilter* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QAbstractNativeEventFilter_override_virtual_NativeEventFilter(void* self, intptr_t slot);
bool QAbstractNativeEventFilter_virtualbase_NativeEventFilter(void* self, struct miqt_string eventType, void* message, intptr_t* result);
void QAbstractNativeEventFilter_Delete(QAbstractNativeEventFilter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
