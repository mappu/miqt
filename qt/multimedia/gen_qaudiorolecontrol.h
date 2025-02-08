#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIOROLECONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIOROLECONTROL_H

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
class QMediaControl;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QAudioRoleControl QAudioRoleControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QAudioRoleControl_virtbase(QAudioRoleControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QAudioRoleControl_metaObject(const QAudioRoleControl* self);
void* QAudioRoleControl_metacast(QAudioRoleControl* self, const char* param1);
struct miqt_string QAudioRoleControl_tr(const char* s);
struct miqt_string QAudioRoleControl_trUtf8(const char* s);
int QAudioRoleControl_audioRole(const QAudioRoleControl* self);
void QAudioRoleControl_setAudioRole(QAudioRoleControl* self, int role);
struct miqt_array /* of int */  QAudioRoleControl_supportedAudioRoles(const QAudioRoleControl* self);
void QAudioRoleControl_audioRoleChanged(QAudioRoleControl* self, int role);
void QAudioRoleControl_connect_audioRoleChanged(QAudioRoleControl* self, intptr_t slot);
struct miqt_string QAudioRoleControl_tr2(const char* s, const char* c);
struct miqt_string QAudioRoleControl_tr3(const char* s, const char* c, int n);
struct miqt_string QAudioRoleControl_trUtf82(const char* s, const char* c);
struct miqt_string QAudioRoleControl_trUtf83(const char* s, const char* c, int n);
void QAudioRoleControl_delete(QAudioRoleControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
