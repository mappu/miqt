#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINEFINDTEXTRESULT_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINEFINDTEXTRESULT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QWebEngineFindTextResult;
#else
typedef struct QWebEngineFindTextResult QWebEngineFindTextResult;
#endif

QWebEngineFindTextResult* QWebEngineFindTextResult_new();
QWebEngineFindTextResult* QWebEngineFindTextResult_new2(QWebEngineFindTextResult* other);
int QWebEngineFindTextResult_numberOfMatches(const QWebEngineFindTextResult* self);
int QWebEngineFindTextResult_activeMatch(const QWebEngineFindTextResult* self);
void QWebEngineFindTextResult_operatorAssign(QWebEngineFindTextResult* self, QWebEngineFindTextResult* other);

void QWebEngineFindTextResult_delete(QWebEngineFindTextResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
