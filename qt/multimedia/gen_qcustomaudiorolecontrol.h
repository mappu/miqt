#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCUSTOMAUDIOROLECONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QCUSTOMAUDIOROLECONTROL_H

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
class QMediaControl;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QCustomAudioRoleControl QCustomAudioRoleControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QCustomAudioRoleControl_virtbase(QCustomAudioRoleControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCustomAudioRoleControl_metaObject(const QCustomAudioRoleControl* self);
void* QCustomAudioRoleControl_metacast(QCustomAudioRoleControl* self, const char* param1);
struct miqt_string QCustomAudioRoleControl_tr(const char* s);
struct miqt_string QCustomAudioRoleControl_trUtf8(const char* s);
struct miqt_string QCustomAudioRoleControl_customAudioRole(const QCustomAudioRoleControl* self);
void QCustomAudioRoleControl_setCustomAudioRole(QCustomAudioRoleControl* self, struct miqt_string role);
struct miqt_array /* of struct miqt_string */  QCustomAudioRoleControl_supportedCustomAudioRoles(const QCustomAudioRoleControl* self);
void QCustomAudioRoleControl_customAudioRoleChanged(QCustomAudioRoleControl* self, struct miqt_string role);
void QCustomAudioRoleControl_connect_customAudioRoleChanged(QCustomAudioRoleControl* self, intptr_t slot);
struct miqt_string QCustomAudioRoleControl_tr2(const char* s, const char* c);
struct miqt_string QCustomAudioRoleControl_tr3(const char* s, const char* c, int n);
struct miqt_string QCustomAudioRoleControl_trUtf82(const char* s, const char* c);
struct miqt_string QCustomAudioRoleControl_trUtf83(const char* s, const char* c, int n);
void QCustomAudioRoleControl_delete(QCustomAudioRoleControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
