#ifndef GEN_QCUSTOMAUDIOROLECONTROL_H
#define GEN_QCUSTOMAUDIOROLECONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCustomAudioRoleControl;
class QMetaObject;
#else
typedef struct QCustomAudioRoleControl QCustomAudioRoleControl;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QCustomAudioRoleControl_MetaObject(const QCustomAudioRoleControl* self);
void* QCustomAudioRoleControl_Metacast(QCustomAudioRoleControl* self, const char* param1);
struct miqt_string QCustomAudioRoleControl_Tr(const char* s);
struct miqt_string QCustomAudioRoleControl_TrUtf8(const char* s);
struct miqt_string QCustomAudioRoleControl_CustomAudioRole(const QCustomAudioRoleControl* self);
void QCustomAudioRoleControl_SetCustomAudioRole(QCustomAudioRoleControl* self, struct miqt_string role);
struct miqt_array QCustomAudioRoleControl_SupportedCustomAudioRoles(const QCustomAudioRoleControl* self);
void QCustomAudioRoleControl_CustomAudioRoleChanged(QCustomAudioRoleControl* self, struct miqt_string role);
void QCustomAudioRoleControl_connect_CustomAudioRoleChanged(QCustomAudioRoleControl* self, intptr_t slot);
struct miqt_string QCustomAudioRoleControl_Tr2(const char* s, const char* c);
struct miqt_string QCustomAudioRoleControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QCustomAudioRoleControl_TrUtf82(const char* s, const char* c);
struct miqt_string QCustomAudioRoleControl_TrUtf83(const char* s, const char* c, int n);
void QCustomAudioRoleControl_Delete(QCustomAudioRoleControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
