#pragma once
#ifndef MIQT_QT6_SCXML_GEN_QSCXMLEVENT_H
#define MIQT_QT6_SCXML_GEN_QSCXMLEVENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QScxmlEvent;
class QVariant;
#else
typedef struct QScxmlEvent QScxmlEvent;
typedef struct QVariant QVariant;
#endif

QScxmlEvent* QScxmlEvent_new();
QScxmlEvent* QScxmlEvent_new2(QScxmlEvent* other);
void QScxmlEvent_operatorAssign(QScxmlEvent* self, QScxmlEvent* other);
struct miqt_string QScxmlEvent_name(const QScxmlEvent* self);
void QScxmlEvent_setName(QScxmlEvent* self, struct miqt_string name);
int QScxmlEvent_eventType(const QScxmlEvent* self);
void QScxmlEvent_setEventType(QScxmlEvent* self, int* type);
struct miqt_string QScxmlEvent_scxmlType(const QScxmlEvent* self);
struct miqt_string QScxmlEvent_sendId(const QScxmlEvent* self);
void QScxmlEvent_setSendId(QScxmlEvent* self, struct miqt_string sendId);
struct miqt_string QScxmlEvent_origin(const QScxmlEvent* self);
void QScxmlEvent_setOrigin(QScxmlEvent* self, struct miqt_string origin);
struct miqt_string QScxmlEvent_originType(const QScxmlEvent* self);
void QScxmlEvent_setOriginType(QScxmlEvent* self, struct miqt_string originType);
struct miqt_string QScxmlEvent_invokeId(const QScxmlEvent* self);
void QScxmlEvent_setInvokeId(QScxmlEvent* self, struct miqt_string invokeId);
int QScxmlEvent_delay(const QScxmlEvent* self);
void QScxmlEvent_setDelay(QScxmlEvent* self, int delayInMiliSecs);
void QScxmlEvent_clear(QScxmlEvent* self);
QVariant* QScxmlEvent_data(const QScxmlEvent* self);
void QScxmlEvent_setData(QScxmlEvent* self, QVariant* data);
bool QScxmlEvent_isErrorEvent(const QScxmlEvent* self);
struct miqt_string QScxmlEvent_errorMessage(const QScxmlEvent* self);
void QScxmlEvent_setErrorMessage(QScxmlEvent* self, struct miqt_string message);

void QScxmlEvent_delete(QScxmlEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
