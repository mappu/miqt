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
class QStringConverterBase;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QStringConverterBase__State)
typedef QStringConverterBase::State QStringConverterBase__State;
#else
class QStringConverterBase__State;
#endif
#else
typedef struct QStringConverter QStringConverter;
typedef struct QStringConverterBase QStringConverterBase;
typedef struct QStringConverterBase__State QStringConverterBase__State;
#endif


void QStringConverter_virtbase(QStringConverter* src, QStringConverterBase** outptr_QStringConverterBase);
bool QStringConverter_isValid(const QStringConverter* self);
void QStringConverter_resetState(QStringConverter* self);
bool QStringConverter_hasError(const QStringConverter* self);
const char* QStringConverter_name(const QStringConverter* self);
const char* QStringConverter_nameForEncoding(int e);


QStringConverterBase__State* QStringConverterBase__State_new();
QStringConverterBase__State* QStringConverterBase__State_new2(int f);
void QStringConverterBase__State_clear(QStringConverterBase__State* self);
void QStringConverterBase__State_reset(QStringConverterBase__State* self);

void QStringConverterBase__State_delete(QStringConverterBase__State* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
