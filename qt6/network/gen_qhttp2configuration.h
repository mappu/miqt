#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QHTTP2CONFIGURATION_H
#define MIQT_QT6_NETWORK_GEN_QHTTP2CONFIGURATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QHttp2Configuration;
#else
typedef struct QHttp2Configuration QHttp2Configuration;
#endif

QHttp2Configuration* QHttp2Configuration_new();
QHttp2Configuration* QHttp2Configuration_new2(QHttp2Configuration* other);
void QHttp2Configuration_operatorAssign(QHttp2Configuration* self, QHttp2Configuration* other);
void QHttp2Configuration_setServerPushEnabled(QHttp2Configuration* self, bool enable);
bool QHttp2Configuration_serverPushEnabled(const QHttp2Configuration* self);
void QHttp2Configuration_setHuffmanCompressionEnabled(QHttp2Configuration* self, bool enable);
bool QHttp2Configuration_huffmanCompressionEnabled(const QHttp2Configuration* self);
bool QHttp2Configuration_setSessionReceiveWindowSize(QHttp2Configuration* self, unsigned int size);
unsigned int QHttp2Configuration_sessionReceiveWindowSize(const QHttp2Configuration* self);
bool QHttp2Configuration_setStreamReceiveWindowSize(QHttp2Configuration* self, unsigned int size);
unsigned int QHttp2Configuration_streamReceiveWindowSize(const QHttp2Configuration* self);
bool QHttp2Configuration_setMaxFrameSize(QHttp2Configuration* self, unsigned int size);
unsigned int QHttp2Configuration_maxFrameSize(const QHttp2Configuration* self);
void QHttp2Configuration_swap(QHttp2Configuration* self, QHttp2Configuration* other);

void QHttp2Configuration_delete(QHttp2Configuration* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
