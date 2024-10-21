#ifndef GEN_QSTRINGCONVERTER_BASE_H
#define GEN_QSTRINGCONVERTER_BASE_H

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

QStringConverterBase* QStringConverterBase_new(QStringConverterBase* param1);
QStringConverterBase* QStringConverterBase_new2();

bool QStringConverter_IsValid(const QStringConverter* self);
void QStringConverter_ResetState(QStringConverter* self);
bool QStringConverter_HasError(const QStringConverter* self);
const char* QStringConverter_Name(const QStringConverter* self);
const char* QStringConverter_NameForEncoding(int e);

QStringConverterBase__State* QStringConverterBase__State_new();
QStringConverterBase__State* QStringConverterBase__State_new2(int f);
void QStringConverterBase__State_Clear(QStringConverterBase__State* self);
void QStringConverterBase__State_Reset(QStringConverterBase__State* self);
void QStringConverterBase__State_Delete(QStringConverterBase__State* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
