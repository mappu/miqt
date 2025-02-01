#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIOINPUTSELECTORCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIOINPUTSELECTORCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioInputSelectorControl;
class QMediaControl;
class QMetaObject;
class QObject;
#else
typedef struct QAudioInputSelectorControl QAudioInputSelectorControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QAudioInputSelectorControl_virtbase(QAudioInputSelectorControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QAudioInputSelectorControl_metaObject(const QAudioInputSelectorControl* self);
void* QAudioInputSelectorControl_metacast(QAudioInputSelectorControl* self, const char* param1);
struct miqt_string QAudioInputSelectorControl_tr(const char* s);
struct miqt_string QAudioInputSelectorControl_trUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QAudioInputSelectorControl_availableInputs(const QAudioInputSelectorControl* self);
struct miqt_string QAudioInputSelectorControl_inputDescription(const QAudioInputSelectorControl* self, struct miqt_string name);
struct miqt_string QAudioInputSelectorControl_defaultInput(const QAudioInputSelectorControl* self);
struct miqt_string QAudioInputSelectorControl_activeInput(const QAudioInputSelectorControl* self);
void QAudioInputSelectorControl_setActiveInput(QAudioInputSelectorControl* self, struct miqt_string name);
void QAudioInputSelectorControl_activeInputChanged(QAudioInputSelectorControl* self, struct miqt_string name);
void QAudioInputSelectorControl_connect_activeInputChanged(QAudioInputSelectorControl* self, intptr_t slot);
void QAudioInputSelectorControl_availableInputsChanged(QAudioInputSelectorControl* self);
void QAudioInputSelectorControl_connect_availableInputsChanged(QAudioInputSelectorControl* self, intptr_t slot);
struct miqt_string QAudioInputSelectorControl_tr2(const char* s, const char* c);
struct miqt_string QAudioInputSelectorControl_tr3(const char* s, const char* c, int n);
struct miqt_string QAudioInputSelectorControl_trUtf82(const char* s, const char* c);
struct miqt_string QAudioInputSelectorControl_trUtf83(const char* s, const char* c, int n);
void QAudioInputSelectorControl_delete(QAudioInputSelectorControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
