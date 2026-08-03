#pragma once
#ifndef MIQT_QT_WEBSOCKETS_GEN_QWEBSOCKETCORSAUTHENTICATOR_H
#define MIQT_QT_WEBSOCKETS_GEN_QWEBSOCKETCORSAUTHENTICATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QWebSocketCorsAuthenticator;
#else
typedef struct QWebSocketCorsAuthenticator QWebSocketCorsAuthenticator;
#endif

QWebSocketCorsAuthenticator* QWebSocketCorsAuthenticator_new(struct miqt_string origin);
QWebSocketCorsAuthenticator* QWebSocketCorsAuthenticator_new2(QWebSocketCorsAuthenticator* other);
void QWebSocketCorsAuthenticator_swap(QWebSocketCorsAuthenticator* self, QWebSocketCorsAuthenticator* other);
void QWebSocketCorsAuthenticator_operatorAssign(QWebSocketCorsAuthenticator* self, QWebSocketCorsAuthenticator* other);
struct miqt_string QWebSocketCorsAuthenticator_origin(const QWebSocketCorsAuthenticator* self);
void QWebSocketCorsAuthenticator_setAllowed(QWebSocketCorsAuthenticator* self, bool allowed);
bool QWebSocketCorsAuthenticator_allowed(const QWebSocketCorsAuthenticator* self);

void QWebSocketCorsAuthenticator_delete(QWebSocketCorsAuthenticator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
