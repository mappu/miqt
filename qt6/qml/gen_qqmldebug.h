#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLDEBUG_H
#define MIQT_QT6_QML_GEN_QQMLDEBUG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QQmlDebuggingEnabler;
class QVariant;
#else
typedef struct QQmlDebuggingEnabler QQmlDebuggingEnabler;
typedef struct QVariant QVariant;
#endif

QQmlDebuggingEnabler* QQmlDebuggingEnabler_new();
QQmlDebuggingEnabler* QQmlDebuggingEnabler_new2(bool printWarning);
void QQmlDebuggingEnabler_enableDebugging(bool printWarning);
struct miqt_array /* of struct miqt_string */  QQmlDebuggingEnabler_debuggerServices();
struct miqt_array /* of struct miqt_string */  QQmlDebuggingEnabler_inspectorServices();
struct miqt_array /* of struct miqt_string */  QQmlDebuggingEnabler_profilerServices();
struct miqt_array /* of struct miqt_string */  QQmlDebuggingEnabler_nativeDebuggerServices();
void QQmlDebuggingEnabler_setServices(struct miqt_array /* of struct miqt_string */  services);
bool QQmlDebuggingEnabler_startTcpDebugServer(int port);
bool QQmlDebuggingEnabler_connectToLocalDebugger(struct miqt_string socketFileName);
bool QQmlDebuggingEnabler_startDebugConnector(struct miqt_string pluginName);
bool QQmlDebuggingEnabler_startTcpDebugServer2(int port, int mode);
bool QQmlDebuggingEnabler_startTcpDebugServer3(int port, int mode, struct miqt_string hostName);
bool QQmlDebuggingEnabler_connectToLocalDebugger2(struct miqt_string socketFileName, int mode);
bool QQmlDebuggingEnabler_startDebugConnector2(struct miqt_string pluginName, struct miqt_map /* of struct miqt_string to QVariant* */  configuration);
void QQmlDebuggingEnabler_delete(QQmlDebuggingEnabler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
