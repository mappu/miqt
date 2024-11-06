#ifndef GEN_QAUDIOROLECONTROL_H
#define GEN_QAUDIOROLECONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioRoleControl;
class QMetaObject;
#else
typedef struct QAudioRoleControl QAudioRoleControl;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QAudioRoleControl_MetaObject(const QAudioRoleControl* self);
void* QAudioRoleControl_Metacast(QAudioRoleControl* self, const char* param1);
struct miqt_string QAudioRoleControl_Tr(const char* s);
struct miqt_string QAudioRoleControl_TrUtf8(const char* s);
int QAudioRoleControl_AudioRole(const QAudioRoleControl* self);
void QAudioRoleControl_SetAudioRole(QAudioRoleControl* self, int role);
struct miqt_array QAudioRoleControl_SupportedAudioRoles(const QAudioRoleControl* self);
void QAudioRoleControl_AudioRoleChanged(QAudioRoleControl* self, int role);
void QAudioRoleControl_connect_AudioRoleChanged(QAudioRoleControl* self, intptr_t slot);
struct miqt_string QAudioRoleControl_Tr2(const char* s, const char* c);
struct miqt_string QAudioRoleControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QAudioRoleControl_TrUtf82(const char* s, const char* c);
struct miqt_string QAudioRoleControl_TrUtf83(const char* s, const char* c, int n);
void QAudioRoleControl_Delete(QAudioRoleControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
