#ifndef GEN_QPROPERTYANIMATION_H
#define GEN_QPROPERTYANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QMetaObject;
class QObject;
class QPropertyAnimation;
#else
typedef struct QByteArray QByteArray;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPropertyAnimation QPropertyAnimation;
#endif

QPropertyAnimation* QPropertyAnimation_new();
QPropertyAnimation* QPropertyAnimation_new2(QObject* target, struct miqt_string propertyName);
QPropertyAnimation* QPropertyAnimation_new3(QObject* parent);
QPropertyAnimation* QPropertyAnimation_new4(QObject* target, struct miqt_string propertyName, QObject* parent);
QMetaObject* QPropertyAnimation_MetaObject(const QPropertyAnimation* self);
void* QPropertyAnimation_Metacast(QPropertyAnimation* self, const char* param1);
struct miqt_string QPropertyAnimation_Tr(const char* s);
QObject* QPropertyAnimation_TargetObject(const QPropertyAnimation* self);
void QPropertyAnimation_SetTargetObject(QPropertyAnimation* self, QObject* target);
struct miqt_string QPropertyAnimation_PropertyName(const QPropertyAnimation* self);
void QPropertyAnimation_SetPropertyName(QPropertyAnimation* self, struct miqt_string propertyName);
struct miqt_string QPropertyAnimation_Tr2(const char* s, const char* c);
struct miqt_string QPropertyAnimation_Tr3(const char* s, const char* c, int n);
void QPropertyAnimation_Delete(QPropertyAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
