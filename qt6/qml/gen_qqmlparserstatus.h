#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLPARSERSTATUS_H
#define MIQT_QT6_QML_GEN_QQMLPARSERSTATUS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QQmlParserStatus;
#else
typedef struct QQmlParserStatus QQmlParserStatus;
#endif

QQmlParserStatus* QQmlParserStatus_new();
void QQmlParserStatus_classBegin(QQmlParserStatus* self);
void QQmlParserStatus_componentComplete(QQmlParserStatus* self);
void QQmlParserStatus_operatorAssign(QQmlParserStatus* self, QQmlParserStatus* param1);

bool QQmlParserStatus_override_virtual_classBegin(void* self, intptr_t slot);
void QQmlParserStatus_virtualbase_classBegin(void* self);
bool QQmlParserStatus_override_virtual_componentComplete(void* self, intptr_t slot);
void QQmlParserStatus_virtualbase_componentComplete(void* self);

void QQmlParserStatus_delete(QQmlParserStatus* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
