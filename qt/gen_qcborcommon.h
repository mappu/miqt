#ifndef GEN_QCBORCOMMON_H
#define GEN_QCBORCOMMON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCborError;
#else
typedef struct QCborError QCborError;
#endif

void QCborError_ToString(const QCborError* self, char** _out, int* _out_Strlen);
void QCborError_Delete(QCborError* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
