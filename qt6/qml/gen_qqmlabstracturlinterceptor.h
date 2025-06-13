#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLABSTRACTURLINTERCEPTOR_H
#define MIQT_QT6_QML_GEN_QQMLABSTRACTURLINTERCEPTOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QQmlAbstractUrlInterceptor;
class QUrl;
#else
typedef struct QQmlAbstractUrlInterceptor QQmlAbstractUrlInterceptor;
typedef struct QUrl QUrl;
#endif

QQmlAbstractUrlInterceptor* QQmlAbstractUrlInterceptor_new();
QUrl* QQmlAbstractUrlInterceptor_intercept(QQmlAbstractUrlInterceptor* self, QUrl* path, int type);
void QQmlAbstractUrlInterceptor_operatorAssign(QQmlAbstractUrlInterceptor* self, QQmlAbstractUrlInterceptor* param1);

bool QQmlAbstractUrlInterceptor_override_virtual_intercept(void* self, intptr_t slot);
QUrl* QQmlAbstractUrlInterceptor_virtualbase_intercept(void* self, QUrl* path, int type);

void QQmlAbstractUrlInterceptor_delete(QQmlAbstractUrlInterceptor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
