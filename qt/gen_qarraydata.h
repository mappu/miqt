#ifndef GEN_QARRAYDATA_H
#define GEN_QARRAYDATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QArrayData;
#else
typedef struct QArrayData QArrayData;
#endif

bool QArrayData_IsMutable(QArrayData* self);
size_t QArrayData_DetachCapacity(QArrayData* self, size_t newSize);
void QArrayData_Deallocate(QArrayData* data, size_t objectSize, size_t alignment);
QArrayData* QArrayData_SharedNull();
void QArrayData_Delete(QArrayData* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
