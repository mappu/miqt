#ifndef GEN_QABSTRACTNATIVEEVENTFILTER_H
#define GEN_QABSTRACTNATIVEEVENTFILTER_H

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

bool QAbstractNativeEventFilter_NativeEventFilter(QAbstractNativeEventFilter* self, struct miqt_string eventType, void* message, intptr_t* result);
void QAbstractNativeEventFilter_Delete(QAbstractNativeEventFilter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
