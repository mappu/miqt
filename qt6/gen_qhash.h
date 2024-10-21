#ifndef GEN_QHASH_H
#define GEN_QHASH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QHashDummyValue;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QHashPrivate__SpanConstants)
typedef QHashPrivate::SpanConstants QHashPrivate__SpanConstants;
#else
class QHashPrivate__SpanConstants;
#endif
#else
typedef struct QHashDummyValue QHashDummyValue;
typedef struct QHashPrivate__SpanConstants QHashPrivate__SpanConstants;
#endif

QHashDummyValue* QHashDummyValue_new();
QHashDummyValue* QHashDummyValue_new2(QHashDummyValue* param1);
bool QHashDummyValue_OperatorEqual(const QHashDummyValue* self, QHashDummyValue* param1);
void QHashDummyValue_Delete(QHashDummyValue* self);

void QHashPrivate__SpanConstants_Delete(QHashPrivate__SpanConstants* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
