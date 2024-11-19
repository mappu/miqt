#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIOOUTPUTSELECTORCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIOOUTPUTSELECTORCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioOutputSelectorControl;
class QMediaControl;
class QMetaObject;
class QObject;
#else
typedef struct QAudioOutputSelectorControl QAudioOutputSelectorControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QAudioOutputSelectorControl_MetaObject(const QAudioOutputSelectorControl* self);
void* QAudioOutputSelectorControl_Metacast(QAudioOutputSelectorControl* self, const char* param1);
struct miqt_string QAudioOutputSelectorControl_Tr(const char* s);
struct miqt_string QAudioOutputSelectorControl_TrUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QAudioOutputSelectorControl_AvailableOutputs(const QAudioOutputSelectorControl* self);
struct miqt_string QAudioOutputSelectorControl_OutputDescription(const QAudioOutputSelectorControl* self, struct miqt_string name);
struct miqt_string QAudioOutputSelectorControl_DefaultOutput(const QAudioOutputSelectorControl* self);
struct miqt_string QAudioOutputSelectorControl_ActiveOutput(const QAudioOutputSelectorControl* self);
void QAudioOutputSelectorControl_SetActiveOutput(QAudioOutputSelectorControl* self, struct miqt_string name);
void QAudioOutputSelectorControl_ActiveOutputChanged(QAudioOutputSelectorControl* self, struct miqt_string name);
void QAudioOutputSelectorControl_connect_ActiveOutputChanged(QAudioOutputSelectorControl* self, intptr_t slot);
void QAudioOutputSelectorControl_AvailableOutputsChanged(QAudioOutputSelectorControl* self);
void QAudioOutputSelectorControl_connect_AvailableOutputsChanged(QAudioOutputSelectorControl* self, intptr_t slot);
struct miqt_string QAudioOutputSelectorControl_Tr2(const char* s, const char* c);
struct miqt_string QAudioOutputSelectorControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QAudioOutputSelectorControl_TrUtf82(const char* s, const char* c);
struct miqt_string QAudioOutputSelectorControl_TrUtf83(const char* s, const char* c, int n);
void QAudioOutputSelectorControl_Delete(QAudioOutputSelectorControl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
