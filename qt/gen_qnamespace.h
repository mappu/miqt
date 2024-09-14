#ifndef GEN_QNAMESPACE_H
#define GEN_QNAMESPACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QInternal;
#else
typedef struct QInternal QInternal;
#endif

void QInternal_Delete(QInternal* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
