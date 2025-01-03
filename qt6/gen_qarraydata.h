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

long long QArrayData_AllocatedCapacity(QArrayData* self);
long long QArrayData_ConstAllocatedCapacity(const QArrayData* self);
bool QArrayData_Ref(QArrayData* self);
bool QArrayData_Deref(QArrayData* self);
bool QArrayData_IsShared(const QArrayData* self);
bool QArrayData_NeedsDetach(const QArrayData* self);
long long QArrayData_DetachCapacity(const QArrayData* self, long long newSize);
struct miqt_map /* tuple of QArrayData* and void* */  QArrayData_ReallocateUnaligned(QArrayData* data, void* dataPointer, long long objectSize, long long newCapacity, int option);
void QArrayData_Deallocate(QArrayData* data, long long objectSize, long long alignment);
void QArrayData_Delete(QArrayData* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
