#pragma once
#ifndef MIQT_QT6_WEBSOCKETS_GEN_QWEBSOCKETHANDSHAKEOPTIONS_H
#define MIQT_QT6_WEBSOCKETS_GEN_QWEBSOCKETHANDSHAKEOPTIONS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QWebSocketHandshakeOptions;
#else
typedef struct QWebSocketHandshakeOptions QWebSocketHandshakeOptions;
#endif

QWebSocketHandshakeOptions* QWebSocketHandshakeOptions_new();
QWebSocketHandshakeOptions* QWebSocketHandshakeOptions_new2(QWebSocketHandshakeOptions* other);
void QWebSocketHandshakeOptions_operatorAssign(QWebSocketHandshakeOptions* self, QWebSocketHandshakeOptions* other);
void QWebSocketHandshakeOptions_swap(QWebSocketHandshakeOptions* self, QWebSocketHandshakeOptions* other);
struct miqt_array /* of struct miqt_string */  QWebSocketHandshakeOptions_subprotocols(const QWebSocketHandshakeOptions* self);
void QWebSocketHandshakeOptions_setSubprotocols(QWebSocketHandshakeOptions* self, struct miqt_array /* of struct miqt_string */  protocols);

void QWebSocketHandshakeOptions_delete(QWebSocketHandshakeOptions* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
