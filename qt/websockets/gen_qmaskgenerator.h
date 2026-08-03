#pragma once
#ifndef MIQT_QT_WEBSOCKETS_GEN_QMASKGENERATOR_H
#define MIQT_QT_WEBSOCKETS_GEN_QMASKGENERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMaskGenerator;
class QMetaMethod;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMaskGenerator QMaskGenerator;
typedef struct QMetaMethod QMetaMethod;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QMaskGenerator* QMaskGenerator_new();
QMaskGenerator* QMaskGenerator_new2(QObject* parent);
void QMaskGenerator_virtbase(QMaskGenerator* src, QObject** outptr_QObject);
bool QMaskGenerator_seed(QMaskGenerator* self);
unsigned int QMaskGenerator_nextMask(QMaskGenerator* self);

bool QMaskGenerator_override_virtual_seed(void* self, intptr_t slot);
bool QMaskGenerator_virtualbase_seed(void* self);
bool QMaskGenerator_override_virtual_nextMask(void* self, intptr_t slot);
unsigned int QMaskGenerator_virtualbase_nextMask(void* self);
bool QMaskGenerator_override_virtual_event(void* self, intptr_t slot);
bool QMaskGenerator_virtualbase_event(void* self, QEvent* event);
bool QMaskGenerator_override_virtual_eventFilter(void* self, intptr_t slot);
bool QMaskGenerator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QMaskGenerator_override_virtual_timerEvent(void* self, intptr_t slot);
void QMaskGenerator_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QMaskGenerator_override_virtual_childEvent(void* self, intptr_t slot);
void QMaskGenerator_virtualbase_childEvent(void* self, QChildEvent* event);
bool QMaskGenerator_override_virtual_customEvent(void* self, intptr_t slot);
void QMaskGenerator_virtualbase_customEvent(void* self, QEvent* event);
bool QMaskGenerator_override_virtual_connectNotify(void* self, intptr_t slot);
void QMaskGenerator_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QMaskGenerator_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QMaskGenerator_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QMaskGenerator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QMaskGenerator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QMaskGenerator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QMaskGenerator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QMaskGenerator_delete(QMaskGenerator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
