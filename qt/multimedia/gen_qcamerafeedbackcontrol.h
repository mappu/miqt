#ifndef GEN_QCAMERAFEEDBACKCONTROL_H
#define GEN_QCAMERAFEEDBACKCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraFeedbackControl;
class QMetaObject;
#else
typedef struct QCameraFeedbackControl QCameraFeedbackControl;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QCameraFeedbackControl_MetaObject(const QCameraFeedbackControl* self);
void* QCameraFeedbackControl_Metacast(QCameraFeedbackControl* self, const char* param1);
struct miqt_string QCameraFeedbackControl_Tr(const char* s);
struct miqt_string QCameraFeedbackControl_TrUtf8(const char* s);
bool QCameraFeedbackControl_IsEventFeedbackLocked(const QCameraFeedbackControl* self, int param1);
bool QCameraFeedbackControl_IsEventFeedbackEnabled(const QCameraFeedbackControl* self, int param1);
bool QCameraFeedbackControl_SetEventFeedbackEnabled(QCameraFeedbackControl* self, int param1, bool param2);
void QCameraFeedbackControl_ResetEventFeedback(QCameraFeedbackControl* self, int param1);
bool QCameraFeedbackControl_SetEventFeedbackSound(QCameraFeedbackControl* self, int param1, struct miqt_string filePath);
struct miqt_string QCameraFeedbackControl_Tr2(const char* s, const char* c);
struct miqt_string QCameraFeedbackControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraFeedbackControl_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraFeedbackControl_TrUtf83(const char* s, const char* c, int n);
void QCameraFeedbackControl_Delete(QCameraFeedbackControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
