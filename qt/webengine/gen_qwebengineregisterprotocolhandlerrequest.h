#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINEREGISTERPROTOCOLHANDLERREQUEST_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINEREGISTERPROTOCOLHANDLERREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QUrl;
class QWebEngineRegisterProtocolHandlerRequest;
#else
typedef struct QUrl QUrl;
typedef struct QWebEngineRegisterProtocolHandlerRequest QWebEngineRegisterProtocolHandlerRequest;
#endif

void QWebEngineRegisterProtocolHandlerRequest_new(QWebEngineRegisterProtocolHandlerRequest** outptr_QWebEngineRegisterProtocolHandlerRequest);
void QWebEngineRegisterProtocolHandlerRequest_new2(QWebEngineRegisterProtocolHandlerRequest* param1, QWebEngineRegisterProtocolHandlerRequest** outptr_QWebEngineRegisterProtocolHandlerRequest);
void QWebEngineRegisterProtocolHandlerRequest_Accept(QWebEngineRegisterProtocolHandlerRequest* self);
void QWebEngineRegisterProtocolHandlerRequest_Reject(QWebEngineRegisterProtocolHandlerRequest* self);
QUrl* QWebEngineRegisterProtocolHandlerRequest_Origin(const QWebEngineRegisterProtocolHandlerRequest* self);
struct miqt_string QWebEngineRegisterProtocolHandlerRequest_Scheme(const QWebEngineRegisterProtocolHandlerRequest* self);
bool QWebEngineRegisterProtocolHandlerRequest_OperatorEqual(const QWebEngineRegisterProtocolHandlerRequest* self, QWebEngineRegisterProtocolHandlerRequest* that);
bool QWebEngineRegisterProtocolHandlerRequest_OperatorNotEqual(const QWebEngineRegisterProtocolHandlerRequest* self, QWebEngineRegisterProtocolHandlerRequest* that);
void QWebEngineRegisterProtocolHandlerRequest_Delete(QWebEngineRegisterProtocolHandlerRequest* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
