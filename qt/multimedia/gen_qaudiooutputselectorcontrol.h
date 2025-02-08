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
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QAudioOutputSelectorControl QAudioOutputSelectorControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QAudioOutputSelectorControl_virtbase(QAudioOutputSelectorControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QAudioOutputSelectorControl_metaObject(const QAudioOutputSelectorControl* self);
void* QAudioOutputSelectorControl_metacast(QAudioOutputSelectorControl* self, const char* param1);
struct miqt_string QAudioOutputSelectorControl_tr(const char* s);
struct miqt_string QAudioOutputSelectorControl_trUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QAudioOutputSelectorControl_availableOutputs(const QAudioOutputSelectorControl* self);
struct miqt_string QAudioOutputSelectorControl_outputDescription(const QAudioOutputSelectorControl* self, struct miqt_string name);
struct miqt_string QAudioOutputSelectorControl_defaultOutput(const QAudioOutputSelectorControl* self);
struct miqt_string QAudioOutputSelectorControl_activeOutput(const QAudioOutputSelectorControl* self);
void QAudioOutputSelectorControl_setActiveOutput(QAudioOutputSelectorControl* self, struct miqt_string name);
void QAudioOutputSelectorControl_activeOutputChanged(QAudioOutputSelectorControl* self, struct miqt_string name);
void QAudioOutputSelectorControl_connect_activeOutputChanged(QAudioOutputSelectorControl* self, intptr_t slot);
void QAudioOutputSelectorControl_availableOutputsChanged(QAudioOutputSelectorControl* self);
void QAudioOutputSelectorControl_connect_availableOutputsChanged(QAudioOutputSelectorControl* self, intptr_t slot);
struct miqt_string QAudioOutputSelectorControl_tr2(const char* s, const char* c);
struct miqt_string QAudioOutputSelectorControl_tr3(const char* s, const char* c, int n);
struct miqt_string QAudioOutputSelectorControl_trUtf82(const char* s, const char* c);
struct miqt_string QAudioOutputSelectorControl_trUtf83(const char* s, const char* c, int n);
void QAudioOutputSelectorControl_delete(QAudioOutputSelectorControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
