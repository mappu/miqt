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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QContainerImplHelper)
typedef QtPrivate::QContainerImplHelper QtPrivate__QContainerImplHelper;
#else
class QtPrivate__QContainerImplHelper;
#endif
#else
typedef struct QArrayData QArrayData;
typedef struct QtPrivate__QContainerImplHelper QtPrivate__QContainerImplHelper;
#endif

ptrdiff_t QArrayData_AllocatedCapacity(QArrayData* self);
ptrdiff_t QArrayData_ConstAllocatedCapacity(const QArrayData* self);
bool QArrayData_Ref(QArrayData* self);
bool QArrayData_Deref(QArrayData* self);
bool QArrayData_IsShared(const QArrayData* self);
bool QArrayData_NeedsDetach(const QArrayData* self);
ptrdiff_t QArrayData_DetachCapacity(const QArrayData* self, ptrdiff_t newSize);
struct miqt_map /* tuple of QArrayData* and void* */  QArrayData_ReallocateUnaligned(QArrayData* data, void* dataPointer, ptrdiff_t objectSize, ptrdiff_t newCapacity, int option);
void QArrayData_Deallocate(QArrayData* data, ptrdiff_t objectSize, ptrdiff_t alignment);
void QArrayData_Delete(QArrayData* self);

void QtPrivate__QContainerImplHelper_Delete(QtPrivate__QContainerImplHelper* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
