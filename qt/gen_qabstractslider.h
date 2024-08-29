#ifndef GEN_QABSTRACTSLIDER_H
#define GEN_QABSTRACTSLIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractSlider;
class QMetaObject;
class QWidget;
#else
typedef struct QAbstractSlider QAbstractSlider;
typedef struct QMetaObject QMetaObject;
typedef struct QWidget QWidget;
#endif

QAbstractSlider* QAbstractSlider_new();
QAbstractSlider* QAbstractSlider_new2(QWidget* parent);
QMetaObject* QAbstractSlider_MetaObject(QAbstractSlider* self);
void QAbstractSlider_Tr(const char* s, char** _out, int* _out_Strlen);
void QAbstractSlider_TrUtf8(const char* s, char** _out, int* _out_Strlen);
uintptr_t QAbstractSlider_Orientation(QAbstractSlider* self);
void QAbstractSlider_SetMinimum(QAbstractSlider* self, int minimum);
int QAbstractSlider_Minimum(QAbstractSlider* self);
void QAbstractSlider_SetMaximum(QAbstractSlider* self, int maximum);
int QAbstractSlider_Maximum(QAbstractSlider* self);
void QAbstractSlider_SetSingleStep(QAbstractSlider* self, int singleStep);
int QAbstractSlider_SingleStep(QAbstractSlider* self);
void QAbstractSlider_SetPageStep(QAbstractSlider* self, int pageStep);
int QAbstractSlider_PageStep(QAbstractSlider* self);
void QAbstractSlider_SetTracking(QAbstractSlider* self, bool enable);
bool QAbstractSlider_HasTracking(QAbstractSlider* self);
void QAbstractSlider_SetSliderDown(QAbstractSlider* self, bool sliderDown);
bool QAbstractSlider_IsSliderDown(QAbstractSlider* self);
void QAbstractSlider_SetSliderPosition(QAbstractSlider* self, int sliderPosition);
int QAbstractSlider_SliderPosition(QAbstractSlider* self);
void QAbstractSlider_SetInvertedAppearance(QAbstractSlider* self, bool invertedAppearance);
bool QAbstractSlider_InvertedAppearance(QAbstractSlider* self);
void QAbstractSlider_SetInvertedControls(QAbstractSlider* self, bool invertedControls);
bool QAbstractSlider_InvertedControls(QAbstractSlider* self);
int QAbstractSlider_Value(QAbstractSlider* self);
void QAbstractSlider_TriggerAction(QAbstractSlider* self, uintptr_t action);
void QAbstractSlider_SetValue(QAbstractSlider* self, int value);
void QAbstractSlider_SetOrientation(QAbstractSlider* self, uintptr_t orientation);
void QAbstractSlider_SetRange(QAbstractSlider* self, int min, int max);
void QAbstractSlider_ValueChanged(QAbstractSlider* self, int value);
void QAbstractSlider_connect_ValueChanged(QAbstractSlider* self, void* slot);
void QAbstractSlider_SliderPressed(QAbstractSlider* self);
void QAbstractSlider_connect_SliderPressed(QAbstractSlider* self, void* slot);
void QAbstractSlider_SliderMoved(QAbstractSlider* self, int position);
void QAbstractSlider_connect_SliderMoved(QAbstractSlider* self, void* slot);
void QAbstractSlider_SliderReleased(QAbstractSlider* self);
void QAbstractSlider_connect_SliderReleased(QAbstractSlider* self, void* slot);
void QAbstractSlider_RangeChanged(QAbstractSlider* self, int min, int max);
void QAbstractSlider_connect_RangeChanged(QAbstractSlider* self, void* slot);
void QAbstractSlider_ActionTriggered(QAbstractSlider* self, int action);
void QAbstractSlider_connect_ActionTriggered(QAbstractSlider* self, void* slot);
void QAbstractSlider_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAbstractSlider_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAbstractSlider_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAbstractSlider_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAbstractSlider_Delete(QAbstractSlider* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
