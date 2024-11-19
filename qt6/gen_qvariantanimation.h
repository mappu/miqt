#pragma once
#ifndef MIQT_QT6_GEN_QVARIANTANIMATION_H
#define MIQT_QT6_GEN_QVARIANTANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAnimation;
class QEasingCurve;
class QEvent;
class QMetaObject;
class QObject;
class QVariant;
class QVariantAnimation;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QEasingCurve QEasingCurve;
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct QVariantAnimation QVariantAnimation;
#endif

void QVariantAnimation_new(QVariantAnimation** outptr_QVariantAnimation, QAbstractAnimation** outptr_QAbstractAnimation, QObject** outptr_QObject);
void QVariantAnimation_new2(QObject* parent, QVariantAnimation** outptr_QVariantAnimation, QAbstractAnimation** outptr_QAbstractAnimation, QObject** outptr_QObject);
QMetaObject* QVariantAnimation_MetaObject(const QVariantAnimation* self);
void* QVariantAnimation_Metacast(QVariantAnimation* self, const char* param1);
struct miqt_string QVariantAnimation_Tr(const char* s);
QVariant* QVariantAnimation_StartValue(const QVariantAnimation* self);
void QVariantAnimation_SetStartValue(QVariantAnimation* self, QVariant* value);
QVariant* QVariantAnimation_EndValue(const QVariantAnimation* self);
void QVariantAnimation_SetEndValue(QVariantAnimation* self, QVariant* value);
QVariant* QVariantAnimation_KeyValueAt(const QVariantAnimation* self, double step);
void QVariantAnimation_SetKeyValueAt(QVariantAnimation* self, double step, QVariant* value);
struct miqt_array /* of struct miqt_map  tuple of double and QVariant*   */  QVariantAnimation_KeyValues(const QVariantAnimation* self);
void QVariantAnimation_SetKeyValues(QVariantAnimation* self, struct miqt_array /* of struct miqt_map  tuple of double and QVariant*   */  values);
QVariant* QVariantAnimation_CurrentValue(const QVariantAnimation* self);
int QVariantAnimation_Duration(const QVariantAnimation* self);
void QVariantAnimation_SetDuration(QVariantAnimation* self, int msecs);
QEasingCurve* QVariantAnimation_EasingCurve(const QVariantAnimation* self);
void QVariantAnimation_SetEasingCurve(QVariantAnimation* self, QEasingCurve* easing);
void QVariantAnimation_ValueChanged(QVariantAnimation* self, QVariant* value);
void QVariantAnimation_connect_ValueChanged(QVariantAnimation* self, intptr_t slot);
bool QVariantAnimation_Event(QVariantAnimation* self, QEvent* event);
void QVariantAnimation_UpdateCurrentTime(QVariantAnimation* self, int param1);
void QVariantAnimation_UpdateState(QVariantAnimation* self, int newState, int oldState);
void QVariantAnimation_UpdateCurrentValue(QVariantAnimation* self, QVariant* value);
QVariant* QVariantAnimation_Interpolated(const QVariantAnimation* self, QVariant* from, QVariant* to, double progress);
struct miqt_string QVariantAnimation_Tr2(const char* s, const char* c);
struct miqt_string QVariantAnimation_Tr3(const char* s, const char* c, int n);
void QVariantAnimation_override_virtual_Duration(void* self, intptr_t slot);
int QVariantAnimation_virtualbase_Duration(const void* self);
void QVariantAnimation_override_virtual_Event(void* self, intptr_t slot);
bool QVariantAnimation_virtualbase_Event(void* self, QEvent* event);
void QVariantAnimation_override_virtual_UpdateCurrentTime(void* self, intptr_t slot);
void QVariantAnimation_virtualbase_UpdateCurrentTime(void* self, int param1);
void QVariantAnimation_override_virtual_UpdateState(void* self, intptr_t slot);
void QVariantAnimation_virtualbase_UpdateState(void* self, int newState, int oldState);
void QVariantAnimation_override_virtual_UpdateCurrentValue(void* self, intptr_t slot);
void QVariantAnimation_virtualbase_UpdateCurrentValue(void* self, QVariant* value);
void QVariantAnimation_override_virtual_Interpolated(void* self, intptr_t slot);
QVariant* QVariantAnimation_virtualbase_Interpolated(const void* self, QVariant* from, QVariant* to, double progress);
void QVariantAnimation_override_virtual_UpdateDirection(void* self, intptr_t slot);
void QVariantAnimation_virtualbase_UpdateDirection(void* self, int direction);
void QVariantAnimation_Delete(QVariantAnimation* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
