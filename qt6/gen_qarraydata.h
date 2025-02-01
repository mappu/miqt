#pragma once
#ifndef MIQT_QT6_GEN_QARRAYDATA_H
#define MIQT_QT6_GEN_QARRAYDATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QArrayData;
#else
typedef struct QArrayData QArrayData;
#endif

ptrdiff_t QArrayData_allocatedCapacity(QArrayData* self);
ptrdiff_t QArrayData_constAllocatedCapacity(const QArrayData* self);
bool QArrayData_ref(QArrayData* self);
bool QArrayData_deref(QArrayData* self);
bool QArrayData_isShared(const QArrayData* self);
bool QArrayData_needsDetach(const QArrayData* self);
ptrdiff_t QArrayData_detachCapacity(const QArrayData* self, ptrdiff_t newSize);
struct miqt_map /* tuple of QArrayData* and void* */  QArrayData_reallocateUnaligned(QArrayData* data, void* dataPointer, ptrdiff_t objectSize, ptrdiff_t newCapacity, int option);
void QArrayData_deallocate(QArrayData* data, ptrdiff_t objectSize, ptrdiff_t alignment);
void QArrayData_delete(QArrayData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
