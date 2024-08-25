#ifndef GEN_QSCOPEDPOINTER_H
#define GEN_QSCOPEDPOINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QScopedPointerPodDeleter;
#else
typedef struct QScopedPointerPodDeleter QScopedPointerPodDeleter;
#endif

void QScopedPointerPodDeleter_Delete(QScopedPointerPodDeleter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
