#pragma once
#ifndef MIQT_QT_GEN_QPROPERTYANIMATION_H
#define MIQT_QT_GEN_QPROPERTYANIMATION_H

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
class QEvent;
class QMetaObject;
class QObject;
class QPropertyAnimation;
class QVariant;
class QVariantAnimation;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPropertyAnimation QPropertyAnimation;
typedef struct QVariant QVariant;
typedef struct QVariantAnimation QVariantAnimation;
#endif

QPropertyAnimation* QPropertyAnimation_new();
QPropertyAnimation* QPropertyAnimation_new2(QObject* target, struct miqt_string propertyName);
QPropertyAnimation* QPropertyAnimation_new3(QObject* parent);
QPropertyAnimation* QPropertyAnimation_new4(QObject* target, struct miqt_string propertyName, QObject* parent);
void QPropertyAnimation_virtbase(QPropertyAnimation* src, QVariantAnimation** outptr_QVariantAnimation);
QMetaObject* QPropertyAnimation_MetaObject(const QPropertyAnimation* self);
void* QPropertyAnimation_Metacast(QPropertyAnimation* self, const char* param1);
struct miqt_string QPropertyAnimation_Tr(const char* s);
struct miqt_string QPropertyAnimation_TrUtf8(const char* s);
QObject* QPropertyAnimation_TargetObject(const QPropertyAnimation* self);
void QPropertyAnimation_SetTargetObject(QPropertyAnimation* self, QObject* target);
struct miqt_string QPropertyAnimation_PropertyName(const QPropertyAnimation* self);
void QPropertyAnimation_SetPropertyName(QPropertyAnimation* self, struct miqt_string propertyName);
bool QPropertyAnimation_Event(QPropertyAnimation* self, QEvent* event);
void QPropertyAnimation_UpdateCurrentValue(QPropertyAnimation* self, QVariant* value);
void QPropertyAnimation_UpdateState(QPropertyAnimation* self, int newState, int oldState);
struct miqt_string QPropertyAnimation_Tr2(const char* s, const char* c);
struct miqt_string QPropertyAnimation_Tr3(const char* s, const char* c, int n);
struct miqt_string QPropertyAnimation_TrUtf82(const char* s, const char* c);
struct miqt_string QPropertyAnimation_TrUtf83(const char* s, const char* c, int n);
void QPropertyAnimation_override_virtual_Event(void* self, intptr_t slot);
bool QPropertyAnimation_virtualbase_Event(void* self, QEvent* event);
void QPropertyAnimation_override_virtual_UpdateCurrentValue(void* self, intptr_t slot);
void QPropertyAnimation_virtualbase_UpdateCurrentValue(void* self, QVariant* value);
void QPropertyAnimation_override_virtual_UpdateState(void* self, intptr_t slot);
void QPropertyAnimation_virtualbase_UpdateState(void* self, int newState, int oldState);
void QPropertyAnimation_override_virtual_Duration(void* self, intptr_t slot);
int QPropertyAnimation_virtualbase_Duration(const void* self);
void QPropertyAnimation_override_virtual_UpdateCurrentTime(void* self, intptr_t slot);
void QPropertyAnimation_virtualbase_UpdateCurrentTime(void* self, int param1);
void QPropertyAnimation_override_virtual_Interpolated(void* self, intptr_t slot);
QVariant* QPropertyAnimation_virtualbase_Interpolated(const void* self, QVariant* from, QVariant* to, double progress);
void QPropertyAnimation_Delete(QPropertyAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
