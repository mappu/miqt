#pragma once
#ifndef MIQT_QT6_SCXML_GEN_QSCXMLERROR_H
#define MIQT_QT6_SCXML_GEN_QSCXMLERROR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QScxmlError;
#else
typedef struct QScxmlError QScxmlError;
#endif

QScxmlError* QScxmlError_new();
QScxmlError* QScxmlError_new2(struct miqt_string fileName, int line, int column, struct miqt_string description);
QScxmlError* QScxmlError_new3(QScxmlError* param1);
void QScxmlError_operatorAssign(QScxmlError* self, QScxmlError* param1);
bool QScxmlError_isValid(const QScxmlError* self);
struct miqt_string QScxmlError_fileName(const QScxmlError* self);
int QScxmlError_line(const QScxmlError* self);
int QScxmlError_column(const QScxmlError* self);
struct miqt_string QScxmlError_description(const QScxmlError* self);
struct miqt_string QScxmlError_toString(const QScxmlError* self);

void QScxmlError_delete(QScxmlError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
