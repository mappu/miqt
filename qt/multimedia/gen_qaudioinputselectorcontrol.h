#ifndef GEN_QAUDIOINPUTSELECTORCONTROL_H
#define GEN_QAUDIOINPUTSELECTORCONTROL_H

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
class QMetaObject;
#else
typedef struct QAudioInputSelectorControl QAudioInputSelectorControl;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QAudioInputSelectorControl_MetaObject(const QAudioInputSelectorControl* self);
void* QAudioInputSelectorControl_Metacast(QAudioInputSelectorControl* self, const char* param1);
struct miqt_string QAudioInputSelectorControl_Tr(const char* s);
struct miqt_string QAudioInputSelectorControl_TrUtf8(const char* s);
struct miqt_array QAudioInputSelectorControl_AvailableInputs(const QAudioInputSelectorControl* self);
struct miqt_string QAudioInputSelectorControl_InputDescription(const QAudioInputSelectorControl* self, struct miqt_string name);
struct miqt_string QAudioInputSelectorControl_DefaultInput(const QAudioInputSelectorControl* self);
struct miqt_string QAudioInputSelectorControl_ActiveInput(const QAudioInputSelectorControl* self);
void QAudioInputSelectorControl_SetActiveInput(QAudioInputSelectorControl* self, struct miqt_string name);
void QAudioInputSelectorControl_ActiveInputChanged(QAudioInputSelectorControl* self, struct miqt_string name);
void QAudioInputSelectorControl_connect_ActiveInputChanged(QAudioInputSelectorControl* self, intptr_t slot);
void QAudioInputSelectorControl_AvailableInputsChanged(QAudioInputSelectorControl* self);
void QAudioInputSelectorControl_connect_AvailableInputsChanged(QAudioInputSelectorControl* self, intptr_t slot);
struct miqt_string QAudioInputSelectorControl_Tr2(const char* s, const char* c);
struct miqt_string QAudioInputSelectorControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QAudioInputSelectorControl_TrUtf82(const char* s, const char* c);
struct miqt_string QAudioInputSelectorControl_TrUtf83(const char* s, const char* c, int n);
void QAudioInputSelectorControl_Delete(QAudioInputSelectorControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
