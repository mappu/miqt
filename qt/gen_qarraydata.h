#ifndef GEN_QARRAYDATA_H
#define GEN_QARRAYDATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QArrayData;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QContainerImplHelper)
typedef QtPrivate::QContainerImplHelper QtPrivate__QContainerImplHelper;
#else
class QtPrivate__QContainerImplHelper;
#endif
#else
typedef struct QArrayData QArrayData;
typedef struct QtPrivate__QContainerImplHelper QtPrivate__QContainerImplHelper;
#endif

bool QArrayData_IsMutable(const QArrayData* self);
size_t QArrayData_DetachCapacity(const QArrayData* self, size_t newSize);
int QArrayData_DetachFlags(const QArrayData* self);
int QArrayData_CloneFlags(const QArrayData* self);
QArrayData* QArrayData_Allocate(size_t objectSize, size_t alignment, size_t capacity);
QArrayData* QArrayData_ReallocateUnaligned(QArrayData* data, size_t objectSize, size_t newCapacity);
void QArrayData_Deallocate(QArrayData* data, size_t objectSize, size_t alignment);
QArrayData* QArrayData_SharedNull();
QArrayData* QArrayData_Allocate4(size_t objectSize, size_t alignment, size_t capacity, int options);
QArrayData* QArrayData_ReallocateUnaligned4(QArrayData* data, size_t objectSize, size_t newCapacity, int newOptions);
void QArrayData_Delete(QArrayData* self);

uintptr_t QtPrivate__QContainerImplHelper_Mid(int originalLength, int* position, int* length);
void QtPrivate__QContainerImplHelper_Delete(QtPrivate__QContainerImplHelper* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
