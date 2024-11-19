#pragma once
#ifndef MIQT_QT6_GEN_QREFCOUNT_H
#define MIQT_QT6_GEN_QREFCOUNT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__RefCount)
typedef QtPrivate::RefCount QtPrivate__RefCount;
#else
class QtPrivate__RefCount;
#endif
#else
typedef struct QtPrivate__RefCount QtPrivate__RefCount;
#endif

bool QtPrivate__RefCount_Ref(QtPrivate__RefCount* self);
bool QtPrivate__RefCount_Deref(QtPrivate__RefCount* self);
bool QtPrivate__RefCount_IsStatic(const QtPrivate__RefCount* self);
bool QtPrivate__RefCount_IsShared(const QtPrivate__RefCount* self);
void QtPrivate__RefCount_InitializeOwned(QtPrivate__RefCount* self);
void QtPrivate__RefCount_InitializeUnsharable(QtPrivate__RefCount* self);
void QtPrivate__RefCount_Delete(QtPrivate__RefCount* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
