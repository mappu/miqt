#pragma once
#ifndef MIQT_QT6_GEN_QSTRINGCONVERTER_BASE_H
#define MIQT_QT6_GEN_QSTRINGCONVERTER_BASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QStringConverter;
#else
typedef struct QStringConverter QStringConverter;
#endif

bool QStringConverter_isValid(const QStringConverter* self);
void QStringConverter_resetState(QStringConverter* self);
bool QStringConverter_hasError(const QStringConverter* self);
const char* QStringConverter_name(const QStringConverter* self);
const char* QStringConverter_nameForEncoding(int e);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
