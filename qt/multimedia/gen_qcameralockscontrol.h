#ifndef GEN_QCAMERALOCKSCONTROL_H
#define GEN_QCAMERALOCKSCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraLocksControl;
class QMetaObject;
#else
typedef struct QCameraLocksControl QCameraLocksControl;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QCameraLocksControl_MetaObject(const QCameraLocksControl* self);
void* QCameraLocksControl_Metacast(QCameraLocksControl* self, const char* param1);
struct miqt_string QCameraLocksControl_Tr(const char* s);
struct miqt_string QCameraLocksControl_TrUtf8(const char* s);
int QCameraLocksControl_SupportedLocks(const QCameraLocksControl* self);
int QCameraLocksControl_LockStatus(const QCameraLocksControl* self, int lock);
void QCameraLocksControl_SearchAndLock(QCameraLocksControl* self, int locks);
void QCameraLocksControl_Unlock(QCameraLocksControl* self, int locks);
void QCameraLocksControl_LockStatusChanged(QCameraLocksControl* self, int typeVal, int status, int reason);
void QCameraLocksControl_connect_LockStatusChanged(QCameraLocksControl* self, intptr_t slot);
struct miqt_string QCameraLocksControl_Tr2(const char* s, const char* c);
struct miqt_string QCameraLocksControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraLocksControl_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraLocksControl_TrUtf83(const char* s, const char* c, int n);
void QCameraLocksControl_Delete(QCameraLocksControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
