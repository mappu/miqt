#ifndef GEN_QVARIANTANIMATION_H
#define GEN_QVARIANTANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEasingCurve;
class QMetaObject;
class QObject;
class QVariant;
class QVariantAnimation;
#else
typedef struct QEasingCurve QEasingCurve;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct QVariantAnimation QVariantAnimation;
#endif

QVariantAnimation* QVariantAnimation_new();
QVariantAnimation* QVariantAnimation_new2(QObject* parent);
QMetaObject* QVariantAnimation_MetaObject(const QVariantAnimation* self);
void* QVariantAnimation_Metacast(QVariantAnimation* self, const char* param1);
struct miqt_string QVariantAnimation_Tr(const char* s);
QVariant* QVariantAnimation_StartValue(const QVariantAnimation* self);
void QVariantAnimation_SetStartValue(QVariantAnimation* self, QVariant* value);
QVariant* QVariantAnimation_EndValue(const QVariantAnimation* self);
void QVariantAnimation_SetEndValue(QVariantAnimation* self, QVariant* value);
QVariant* QVariantAnimation_KeyValueAt(const QVariantAnimation* self, double step);
void QVariantAnimation_SetKeyValueAt(QVariantAnimation* self, double step, QVariant* value);
QVariant* QVariantAnimation_CurrentValue(const QVariantAnimation* self);
int QVariantAnimation_Duration(const QVariantAnimation* self);
void QVariantAnimation_SetDuration(QVariantAnimation* self, int msecs);
QEasingCurve* QVariantAnimation_EasingCurve(const QVariantAnimation* self);
void QVariantAnimation_SetEasingCurve(QVariantAnimation* self, QEasingCurve* easing);
void QVariantAnimation_ValueChanged(QVariantAnimation* self, QVariant* value);
void QVariantAnimation_connect_ValueChanged(QVariantAnimation* self, intptr_t slot);
struct miqt_string QVariantAnimation_Tr2(const char* s, const char* c);
struct miqt_string QVariantAnimation_Tr3(const char* s, const char* c, int n);
void QVariantAnimation_Delete(QVariantAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
